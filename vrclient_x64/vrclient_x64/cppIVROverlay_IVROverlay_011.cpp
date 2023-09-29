/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_011.h"
struct u_IVROverlay_IVROverlay_011
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
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0918 *, uint32_t ) = 0;
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
    virtual uint32_t SetOverlayTexture( uint64_t, const u_Texture_t * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t GetOverlayTexture( uint64_t, void **, void *, uint32_t *, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual uint32_t ReleaseNativeOverlayHandle( uint64_t, void * ) = 0;
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
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_011_FindOverlay( struct cppIVROverlay_IVROverlay_011_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_CreateOverlay( struct cppIVROverlay_IVROverlay_011_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_DestroyOverlay( struct cppIVROverlay_IVROverlay_011_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_011_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_011_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_011_GetOverlayKey( struct cppIVROverlay_IVROverlay_011_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_011_GetOverlayName( struct cppIVROverlay_IVROverlay_011_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_011_GetOverlayImageData( struct cppIVROverlay_IVROverlay_011_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_011_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_011_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_011_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_SetOverlayFlag( struct cppIVROverlay_IVROverlay_011_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_011_GetOverlayFlag( struct cppIVROverlay_IVROverlay_011_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_011_SetOverlayColor( struct cppIVROverlay_IVROverlay_011_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_011_GetOverlayColor( struct cppIVROverlay_IVROverlay_011_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_011_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_011_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_011_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_011_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_011_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_011_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_011_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_011_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_011_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_011_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_011_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_011_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_011_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_011_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_011_ShowOverlay( struct cppIVROverlay_IVROverlay_011_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_HideOverlay( struct cppIVROverlay_IVROverlay_011_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_IsOverlayVisible( struct cppIVROverlay_IVROverlay_011_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_011_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_011_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_011_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    u_VREvent_t_0918 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_011_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_011_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_011_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_011_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_011_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_011_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_011_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_011_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_011_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_011_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_011_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_011_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_011_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_011_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_011_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_011_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_011_SetOverlayTexture( struct cppIVROverlay_IVROverlay_011_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_011_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_011_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_SetOverlayRaw( struct cppIVROverlay_IVROverlay_011_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_011_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_011_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_011_GetOverlayTexture( struct cppIVROverlay_IVROverlay_011_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
}

void cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_011_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_011_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_011_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_011_IsDashboardVisible( struct cppIVROverlay_IVROverlay_011_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_011_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_011_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_011_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_011_ShowDashboard( struct cppIVROverlay_IVROverlay_011_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_011_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_011_ShowKeyboard( struct cppIVROverlay_IVROverlay_011_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_011_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_011_GetKeyboardText( struct cppIVROverlay_IVROverlay_011_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_011_HideKeyboard( struct cppIVROverlay_IVROverlay_011_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_011_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_011_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_011 *iface = (struct u_IVROverlay_IVROverlay_011 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

