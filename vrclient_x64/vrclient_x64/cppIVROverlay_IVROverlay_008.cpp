#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_008.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_008
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
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
    virtual uint32_t SetOverlayColor( uint64_t, float, float, float ) = 0;
    virtual uint32_t GetOverlayColor( uint64_t, float *, float *, float * ) = 0;
    virtual uint32_t SetOverlayAlpha( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayAlpha( uint64_t, float * ) = 0;
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
    virtual uint32_t ShowOverlay( uint64_t ) = 0;
    virtual uint32_t HideOverlay( uint64_t ) = 0;
    virtual bool IsOverlayVisible( uint64_t ) = 0;
    virtual uint32_t GetTransformForOverlayCoordinates( uint64_t, uint32_t, HmdVector2_t, HmdMatrix34_t * ) = 0;
    virtual bool PollNextOverlayEvent( uint64_t, VREvent_t * ) = 0;
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
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t ShowKeyboardForOverlay( uint64_t, uint32_t, uint32_t, const char *, uint32_t, const char *, bool, uint64_t ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
    virtual void SetKeyboardTransformAbsolute( uint32_t, const HmdMatrix34_t * ) = 0;
    virtual void SetKeyboardPositionForOverlay( uint64_t, HmdRect2_t ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_008_FindOverlay( struct cppIVROverlay_IVROverlay_008_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_CreateOverlay( struct cppIVROverlay_IVROverlay_008_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_DestroyOverlay( struct cppIVROverlay_IVROverlay_008_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_008_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_008_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_008_GetOverlayKey( struct cppIVROverlay_IVROverlay_008_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_008_GetOverlayName( struct cppIVROverlay_IVROverlay_008_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_008_GetOverlayImageData( struct cppIVROverlay_IVROverlay_008_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_008_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_008_SetOverlayFlag( struct cppIVROverlay_IVROverlay_008_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_008_GetOverlayFlag( struct cppIVROverlay_IVROverlay_008_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_008_SetOverlayColor( struct cppIVROverlay_IVROverlay_008_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_008_GetOverlayColor( struct cppIVROverlay_IVROverlay_008_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_008_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_008_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_008_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_008_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_008_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_008_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_008_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_008_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_008_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_008_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_008_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_008_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_008_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_008_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_008_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_008_ShowOverlay( struct cppIVROverlay_IVROverlay_008_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_HideOverlay( struct cppIVROverlay_IVROverlay_008_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_IsOverlayVisible( struct cppIVROverlay_IVROverlay_008_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_008_GetTransformForOverlayCoordinates_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_008_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_008_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_0914_win_to_lin( params->pEvent, &lin_pEvent );
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr );
    if (params->pEvent)
        struct_VREvent_t_0914_lin_to_win( &lin_pEvent, params->pEvent, -1 );
}

void cppIVROverlay_IVROverlay_008_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_008_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_008_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_008_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_008_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_008_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_008_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_008_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_008_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_008_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_008_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_008_GetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_008_SetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_008_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_008_SetOverlayNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_008_MoveGamepadFocusToNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_008_SetOverlayTexture( struct cppIVROverlay_IVROverlay_008_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_008_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_008_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_SetOverlayRaw( struct cppIVROverlay_IVROverlay_008_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_008_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_008_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_008_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_008_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_008_IsDashboardVisible( struct cppIVROverlay_IVROverlay_008_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_008_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_008_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_008_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_008_ShowDashboard( struct cppIVROverlay_IVROverlay_008_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_008_ShowKeyboard( struct cppIVROverlay_IVROverlay_008_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_008_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_008_GetKeyboardText( struct cppIVROverlay_IVROverlay_008_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_008_HideKeyboard( struct cppIVROverlay_IVROverlay_008_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_008_SetKeyboardTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_008_SetKeyboardPositionForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_008 *iface = (struct cppIVROverlay_IVROverlay_008 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

#ifdef __cplusplus
}
#endif
