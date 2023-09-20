#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.12/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_007.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_007
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
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_007_FindOverlay( struct cppIVROverlay_IVROverlay_007_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_CreateOverlay( struct cppIVROverlay_IVROverlay_007_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_DestroyOverlay( struct cppIVROverlay_IVROverlay_007_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_007_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_007_GetOverlayKey( struct cppIVROverlay_IVROverlay_007_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_007_GetOverlayName( struct cppIVROverlay_IVROverlay_007_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_007_GetOverlayImageData( struct cppIVROverlay_IVROverlay_007_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_007_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_007_SetOverlayFlag( struct cppIVROverlay_IVROverlay_007_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_007_GetOverlayFlag( struct cppIVROverlay_IVROverlay_007_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_007_SetOverlayColor( struct cppIVROverlay_IVROverlay_007_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_007_GetOverlayColor( struct cppIVROverlay_IVROverlay_007_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_007_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_007_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_007_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_007_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureColorSpace_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_007_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_007_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_007_ShowOverlay( struct cppIVROverlay_IVROverlay_007_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_HideOverlay( struct cppIVROverlay_IVROverlay_007_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_IsOverlayVisible( struct cppIVROverlay_IVROverlay_007_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_007_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_0912_win_to_lin( params->pEvent, &lin_pEvent );
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr );
    if (params->pEvent)
        struct_VREvent_t_0912_lin_to_win( &lin_pEvent, params->pEvent, -1 );
}

void cppIVROverlay_IVROverlay_007_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_007_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_007_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_007_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_007_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_007_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_007_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_007_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_007_IsHoverTargetOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_GetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_007_SetGamepadFocusOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_007_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_007_SetOverlayNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_007_MoveGamepadFocusToNeighbor_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_007_SetOverlayTexture( struct cppIVROverlay_IVROverlay_007_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_007_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_007_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetOverlayRaw( struct cppIVROverlay_IVROverlay_007_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_007_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_007_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_007_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_007_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_007_IsDashboardVisible( struct cppIVROverlay_IVROverlay_007_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_007_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_007_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_007_ShowDashboard( struct cppIVROverlay_IVROverlay_007_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_007_ShowKeyboard( struct cppIVROverlay_IVROverlay_007_ShowKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_007_ShowKeyboardForOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_007_GetKeyboardText( struct cppIVROverlay_IVROverlay_007_GetKeyboardText_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    params->_ret = iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_007_HideKeyboard( struct cppIVROverlay_IVROverlay_007_HideKeyboard_params *params )
{
    struct cppIVROverlay_IVROverlay_007 *iface = (struct cppIVROverlay_IVROverlay_007 *)params->linux_side;
    iface->HideKeyboard(  );
}

#ifdef __cplusplus
}
#endif
