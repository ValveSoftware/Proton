/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_013.h"
struct u_IVROverlay_IVROverlay_013
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
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_103 *, uint32_t ) = 0;
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
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_CreateOverlay( struct cppIVROverlay_IVROverlay_013_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_DestroyOverlay( struct cppIVROverlay_IVROverlay_013_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_013_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_013_GetOverlayKey( struct cppIVROverlay_IVROverlay_013_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_013_GetOverlayName( struct cppIVROverlay_IVROverlay_013_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_013_GetOverlayImageData( struct cppIVROverlay_IVROverlay_013_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_013_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_SetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRenderingPid( params->ulOverlayHandle, params->unPID );
}

void cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid( struct cppIVROverlay_IVROverlay_013_GetOverlayRenderingPid_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayRenderingPid( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetOverlayFlag( struct cppIVROverlay_IVROverlay_013_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_013_GetOverlayFlag( struct cppIVROverlay_IVROverlay_013_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_013_SetOverlayColor( struct cppIVROverlay_IVROverlay_013_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_013_GetOverlayColor( struct cppIVROverlay_IVROverlay_013_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_013_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_013_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_013_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_SetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexelAspect( params->ulOverlayHandle, params->fTexelAspect );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect( struct cppIVROverlay_IVROverlay_013_GetOverlayTexelAspect_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexelAspect( params->ulOverlayHandle, params->pfTexelAspect );
}

void cppIVROverlay_IVROverlay_013_SetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_SetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlaySortOrder( params->ulOverlayHandle, params->unSortOrder );
}

void cppIVROverlay_IVROverlay_013_GetOverlaySortOrder( struct cppIVROverlay_IVROverlay_013_GetOverlaySortOrder_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlaySortOrder( params->ulOverlayHandle, params->punSortOrder );
}

void cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_013_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureColorSpace( params->ulOverlayHandle, params->eTextureColorSpace );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureColorSpace_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureColorSpace( params->ulOverlayHandle, params->peTextureColorSpace );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_SetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->unDeviceIndex, params->pchComponentName );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent( struct cppIVROverlay_IVROverlay_013_GetOverlayTransformTrackedDeviceComponent_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceComponent( params->ulOverlayHandle, params->punDeviceIndex, params->pchComponentName, params->unComponentNameSize );
}

void cppIVROverlay_IVROverlay_013_ShowOverlay( struct cppIVROverlay_IVROverlay_013_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_HideOverlay( struct cppIVROverlay_IVROverlay_013_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_IsOverlayVisible( struct cppIVROverlay_IVROverlay_013_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates( struct cppIVROverlay_IVROverlay_013_GetTransformForOverlayCoordinates_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTransformForOverlayCoordinates( params->ulOverlayHandle, params->eTrackingOrigin, params->coordinatesInOverlay, params->pmatTransform );
}

void cppIVROverlay_IVROverlay_013_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_013_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    u_VREvent_t_103 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_013_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_013_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_013_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_013_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_013_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_013_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_013_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_013_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay( struct cppIVROverlay_IVROverlay_013_IsHoverTargetOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->IsHoverTargetOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_GetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetGamepadFocusOverlay(  );
}

void cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay( struct cppIVROverlay_IVROverlay_013_SetGamepadFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetGamepadFocusOverlay( params->ulNewFocusOverlay );
}

void cppIVROverlay_IVROverlay_013_SetOverlayNeighbor( struct cppIVROverlay_IVROverlay_013_SetOverlayNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayNeighbor( params->eDirection, params->ulFrom, params->ulTo );
}

void cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor( struct cppIVROverlay_IVROverlay_013_MoveGamepadFocusToNeighbor_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->MoveGamepadFocusToNeighbor( params->eDirection, params->ulFrom );
}

void cppIVROverlay_IVROverlay_013_SetOverlayTexture( struct cppIVROverlay_IVROverlay_013_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_013_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_013_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetOverlayRaw( struct cppIVROverlay_IVROverlay_013_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_013_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_013_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTexture( struct cppIVROverlay_IVROverlay_013_GetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTexture( params->ulOverlayHandle, params->pNativeTextureHandle, params->pNativeTextureRef, params->pWidth, params->pHeight, params->pNativeFormat, params->pAPI, params->pColorSpace );
}

void cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle( struct cppIVROverlay_IVROverlay_013_ReleaseNativeOverlayHandle_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->ReleaseNativeOverlayHandle( params->ulOverlayHandle, params->pNativeTextureHandle );
}

void cppIVROverlay_IVROverlay_013_GetOverlayTextureSize( struct cppIVROverlay_IVROverlay_013_GetOverlayTextureSize_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureSize( params->ulOverlayHandle, params->pWidth, params->pHeight );
}

void cppIVROverlay_IVROverlay_013_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_013_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_013_IsDashboardVisible( struct cppIVROverlay_IVROverlay_013_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_013_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_013_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_013_ShowDashboard( struct cppIVROverlay_IVROverlay_013_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice( struct cppIVROverlay_IVROverlay_013_GetPrimaryDashboardDevice_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetPrimaryDashboardDevice(  );
}

void cppIVROverlay_IVROverlay_013_ShowKeyboard( struct cppIVROverlay_IVROverlay_013_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay( struct cppIVROverlay_IVROverlay_013_ShowKeyboardForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboardForOverlay( params->ulOverlayHandle, params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode, params->uUserValue );
}

void cppIVROverlay_IVROverlay_013_GetKeyboardText( struct cppIVROverlay_IVROverlay_013_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_013_HideKeyboard( struct cppIVROverlay_IVROverlay_013_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    iface->HideKeyboard(  );
}

void cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute( struct cppIVROverlay_IVROverlay_013_SetKeyboardTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    iface->SetKeyboardTransformAbsolute( params->eTrackingOrigin, params->pmatTrackingOriginToKeyboardTransform );
}

void cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay( struct cppIVROverlay_IVROverlay_013_SetKeyboardPositionForOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    iface->SetKeyboardPositionForOverlay( params->ulOverlayHandle, params->avoidRect );
}

void cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask( struct cppIVROverlay_IVROverlay_013_SetOverlayIntersectionMask_params *params )
{
    struct u_IVROverlay_IVROverlay_013 *iface = (struct u_IVROverlay_IVROverlay_013 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayIntersectionMask( params->ulOverlayHandle, params->pMaskPrimitives, params->unNumMaskPrimitives, params->unPrimitiveSize );
}

