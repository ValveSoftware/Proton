/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_005.h"
struct u_IVROverlay_IVROverlay_005
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
    virtual uint32_t SetOverlayGamma( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayGamma( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayWidthInMeters( uint64_t, float ) = 0;
    virtual uint32_t GetOverlayWidthInMeters( uint64_t, float * ) = 0;
    virtual uint32_t SetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float, float ) = 0;
    virtual uint32_t GetOverlayAutoCurveDistanceRangeInMeters( uint64_t, float *, float * ) = 0;
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
    virtual bool PollNextOverlayEvent( uint64_t, u_VREvent_t_0910 * ) = 0;
    virtual uint32_t GetOverlayInputMethod( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayInputMethod( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetOverlayMouseScale( uint64_t, HmdVector2_t * ) = 0;
    virtual uint32_t SetOverlayMouseScale( uint64_t, const HmdVector2_t * ) = 0;
    virtual bool ComputeOverlayIntersection( uint64_t, const VROverlayIntersectionParams_t *, VROverlayIntersectionResults_t * ) = 0;
    virtual bool HandleControllerOverlayInteractionAsMouse( uint64_t, uint32_t ) = 0;
    virtual bool IsFocusOverlay( uint64_t ) = 0;
    virtual uint32_t SetOverlayTexture( uint64_t, uint32_t, void * ) = 0;
    virtual uint32_t ClearOverlayTexture( uint64_t ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual uint32_t CreateDashboardOverlay( const char *, const char *, uint64_t *, uint64_t * ) = 0;
    virtual bool IsDashboardVisible(  ) = 0;
    virtual bool IsActiveDashboardOverlay( uint64_t ) = 0;
    virtual uint32_t SetDashboardOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetDashboardOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
    virtual void ShowDashboard( const char * ) = 0;
    virtual uint32_t ShowKeyboard( uint32_t, uint32_t, const char *, uint32_t, const char *, bool ) = 0;
    virtual uint32_t GetKeyboardText( char *, uint32_t ) = 0;
    virtual void HideKeyboard(  ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_005_FindOverlay( struct cppIVROverlay_IVROverlay_005_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_CreateOverlay( struct cppIVROverlay_IVROverlay_005_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_DestroyOverlay( struct cppIVROverlay_IVROverlay_005_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_005_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_005_GetOverlayKey( struct cppIVROverlay_IVROverlay_005_GetOverlayKey_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_005_GetOverlayName( struct cppIVROverlay_IVROverlay_005_GetOverlayName_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_005_GetOverlayImageData( struct cppIVROverlay_IVROverlay_005_GetOverlayImageData_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_005_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_005_SetOverlayFlag( struct cppIVROverlay_IVROverlay_005_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_005_GetOverlayFlag( struct cppIVROverlay_IVROverlay_005_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_005_SetOverlayColor( struct cppIVROverlay_IVROverlay_005_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_005_GetOverlayColor( struct cppIVROverlay_IVROverlay_005_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_005_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_005_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_005_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_005_SetOverlayGamma( struct cppIVROverlay_IVROverlay_005_SetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_005_GetOverlayGamma( struct cppIVROverlay_IVROverlay_005_GetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_SetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->fMinDistanceInMeters, params->fMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters( struct cppIVROverlay_IVROverlay_005_GetOverlayAutoCurveDistanceRangeInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAutoCurveDistanceRangeInMeters( params->ulOverlayHandle, params->pfMinDistanceInMeters, params->pfMaxDistanceInMeters );
}

void cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_005_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_005_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_005_ShowOverlay( struct cppIVROverlay_IVROverlay_005_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_HideOverlay( struct cppIVROverlay_IVROverlay_005_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_IsOverlayVisible( struct cppIVROverlay_IVROverlay_005_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_005_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    u_VREvent_t_0910 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_005_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_005_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_005_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_005_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_005_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_005_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_005_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_005_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_005_IsFocusOverlay( struct cppIVROverlay_IVROverlay_005_IsFocusOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->IsFocusOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_SetOverlayTexture( struct cppIVROverlay_IVROverlay_005_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
}

void cppIVROverlay_IVROverlay_005_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_005_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_SetOverlayRaw( struct cppIVROverlay_IVROverlay_005_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_005_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_005_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_005_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_005_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_005_IsDashboardVisible( struct cppIVROverlay_IVROverlay_005_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_005_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_005_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_005_ShowDashboard( struct cppIVROverlay_IVROverlay_005_ShowDashboard_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

void cppIVROverlay_IVROverlay_005_ShowKeyboard( struct cppIVROverlay_IVROverlay_005_ShowKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowKeyboard( params->eInputMode, params->eLineInputMode, params->pchDescription, params->unCharMax, params->pchExistingText, params->bUseMinimalMode );
}

void cppIVROverlay_IVROverlay_005_GetKeyboardText( struct cppIVROverlay_IVROverlay_005_GetKeyboardText_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetKeyboardText( params->pchText, params->cchText );
}

void cppIVROverlay_IVROverlay_005_HideKeyboard( struct cppIVROverlay_IVROverlay_005_HideKeyboard_params *params )
{
    struct u_IVROverlay_IVROverlay_005 *iface = (struct u_IVROverlay_IVROverlay_005 *)params->linux_side;
    iface->HideKeyboard(  );
}

