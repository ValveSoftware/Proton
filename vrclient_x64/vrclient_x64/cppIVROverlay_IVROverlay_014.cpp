#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.6/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_014.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_014
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
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
    virtual uint32_t SetOverlayIntersectionMask( uint64_t, VROverlayIntersectionMaskPrimitive_t *, uint32_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayFlags( uint64_t, uint32_t * ) = 0;
    virtual uint32_t ShowMessageOverlay( const char *, const char *, const char *, const char *, const char *, const char * ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_014_FindOverlay( struct cppIVROverlay_IVROverlay_014_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_CreateOverlay( struct cppIVROverlay_IVROverlay_014_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_DestroyOverlay( struct cppIVROverlay_IVROverlay_014_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_014_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_014_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_014_GetOverlayKey( struct cppIVROverlay_IVROverlay_014_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_014_GetOverlayName( struct cppIVROverlay_IVROverlay_014_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_014_GetOverlayImageData( struct cppIVROverlay_IVROverlay_014_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_014_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_014_SetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_014_GetOverlayRenderingPid_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_SetOverlayFlag( struct cppIVROverlay_IVROverlay_014_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_014_GetOverlayFlag( struct cppIVROverlay_IVROverlay_014_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_014_SetOverlayColor( struct cppIVROverlay_IVROverlay_014_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_014_GetOverlayColor( struct cppIVROverlay_IVROverlay_014_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_014_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_014_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_014_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_014_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_014_SetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_014_GetOverlayTexelAspect_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_014_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_014_SetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_014_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_014_GetOverlaySortOrder_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_014_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_014_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_014_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_014_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_014_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_014_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_014_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_014_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_014_ShowOverlay( struct cppIVROverlay_IVROverlay_014_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_HideOverlay( struct cppIVROverlay_IVROverlay_014_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_IsOverlayVisible( struct cppIVROverlay_IVROverlay_014_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_014_GetTransformForOverlayCoordinates_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_014_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_014_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_106_win_to_lin( params->pEvent, &lin_pEvent );
    uint32_t lin_uncbVREvent = params->uncbVREvent ? sizeof(lin_pEvent) : 0;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr, lin_uncbVREvent );
    if (params->pEvent)
        struct_VREvent_t_106_lin_to_win( &lin_pEvent, params->pEvent, params->uncbVREvent );
}

void cppIVROverlay_IVROverlay_014_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_014_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_014_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_014_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_014_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_014_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_014_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_014_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_014_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_014_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_014_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_014_GetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_014_SetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_014_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_014_SetOverlayNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_014_MoveGamepadFocusToNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_014_SetOverlayTexture( struct cppIVROverlay_IVROverlay_014_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_014_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_014_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_SetOverlayRaw( struct cppIVROverlay_IVROverlay_014_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_014_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_014_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTexture( struct cppIVROverlay_IVROverlay_014_GetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPIType, params->pColorSpace, params->pTextureBounds );
}

void cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_014_ReleaseNativeOverlayHandle_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_014_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_014_GetOverlayTextureSize_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_014_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_014_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_014_IsDashboardVisible( struct cppIVROverlay_IVROverlay_014_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_014_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_014_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_014_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_014_ShowDashboard( struct cppIVROverlay_IVROverlay_014_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_014_GetPrimaryDashboardDevice_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_014_ShowKeyboard( struct cppIVROverlay_IVROverlay_014_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_014_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_014_GetKeyboardText( struct cppIVROverlay_IVROverlay_014_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_014_HideKeyboard( struct cppIVROverlay_IVROverlay_014_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_014_SetKeyboardTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_014_SetKeyboardPositionForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_014_SetOverlayIntersectionMask_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

void cppIVROverlay_IVROverlay_014_GetOverlayFlags( struct cppIVROverlay_IVROverlay_014_GetOverlayFlags_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->GetOverlayFlags( params->ulOverlayHandle, params->pFlags );
}

void cppIVROverlay_IVROverlay_014_ShowMessageOverlay( struct cppIVROverlay_IVROverlay_014_ShowMessageOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_014 *iface = (struct cppIVROverlay_IVROverlay_014 *)params->linux_side;
    params->_ret = iface->ShowMessageOverlay( params->pchText, params->pchCaption, params->pchButton0Text, params->pchButton1Text, params->pchButton2Text, params->pchButton3Text );
}

#ifdef __cplusplus
}
#endif
