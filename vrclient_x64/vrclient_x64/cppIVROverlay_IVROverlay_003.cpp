#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.7/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_003.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_003
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
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_003_FindOverlay( struct cppIVROverlay_IVROverlay_003_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_CreateOverlay( struct cppIVROverlay_IVROverlay_003_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_DestroyOverlay( struct cppIVROverlay_IVROverlay_003_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_003_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_003_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_003_GetOverlayKey( struct cppIVROverlay_IVROverlay_003_GetOverlayKey_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayKey( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_003_GetOverlayName( struct cppIVROverlay_IVROverlay_003_GetOverlayName_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayName( params->ulOverlayHandle, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVROverlay_IVROverlay_003_GetOverlayImageData( struct cppIVROverlay_IVROverlay_003_GetOverlayImageData_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayImageData( params->ulOverlayHandle, params->pvBuffer, params->unBufferSize, params->punWidth, params->punHeight );
}

void cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_003_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_003_SetOverlayFlag( struct cppIVROverlay_IVROverlay_003_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_003_GetOverlayFlag( struct cppIVROverlay_IVROverlay_003_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_003_SetOverlayColor( struct cppIVROverlay_IVROverlay_003_SetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_003_GetOverlayColor( struct cppIVROverlay_IVROverlay_003_GetOverlayColor_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_003_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_003_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_003_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_003_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_003_SetOverlayGamma( struct cppIVROverlay_IVROverlay_003_SetOverlayGamma_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_003_GetOverlayGamma( struct cppIVROverlay_IVROverlay_003_GetOverlayGamma_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_003_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_003_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_003_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_003_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_003_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_003_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_003_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_003_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_003_ShowOverlay( struct cppIVROverlay_IVROverlay_003_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_HideOverlay( struct cppIVROverlay_IVROverlay_003_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_IsOverlayVisible( struct cppIVROverlay_IVROverlay_003_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_003_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent );
}

void cppIVROverlay_IVROverlay_003_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_003_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_003_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_003_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_003_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_003_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_003_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_003_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_003_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_003_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_003_SetOverlayTexture( struct cppIVROverlay_IVROverlay_003_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
}

void cppIVROverlay_IVROverlay_003_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_003_ClearOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_SetOverlayRaw( struct cppIVROverlay_IVROverlay_003_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_003_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_003_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_003_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_003_CreateDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_003_IsDashboardVisible( struct cppIVROverlay_IVROverlay_003_IsDashboardVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_003_IsActiveDashboardOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_003_SetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_003_GetDashboardOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    params->_ret = iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

void cppIVROverlay_IVROverlay_003_ShowDashboard( struct cppIVROverlay_IVROverlay_003_ShowDashboard_params *params )
{
    struct cppIVROverlay_IVROverlay_003 *iface = (struct cppIVROverlay_IVROverlay_003 *)params->linux_side;
    iface->ShowDashboard( params->pchOverlayToShow );
}

#ifdef __cplusplus
}
#endif
