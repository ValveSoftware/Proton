#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVROverlay_IVROverlay_001.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVROverlay_IVROverlay_001
{
#ifdef __cplusplus
    virtual uint32_t FindOverlay( const char *, uint64_t * ) = 0;
    virtual uint32_t CreateOverlay( const char *, const char *, uint64_t * ) = 0;
    virtual uint32_t DestroyOverlay( uint64_t ) = 0;
    virtual uint32_t SetHighQualityOverlay( uint64_t ) = 0;
    virtual uint64_t GetHighQualityOverlay(  ) = 0;
    virtual const char * GetOverlayErrorNameFromEnum( uint32_t ) = 0;
    virtual uint32_t SetOverlayFlag( uint64_t, uint32_t, bool ) = 0;
    virtual uint32_t GetOverlayFlag( uint64_t, uint32_t, bool * ) = 0;
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
    virtual uint32_t GetOverlayVisibility( uint64_t, uint32_t * ) = 0;
    virtual uint32_t SetOverlayVisibility( uint64_t, uint32_t ) = 0;
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
    virtual uint32_t SetOverlayTexture( uint64_t, void * ) = 0;
    virtual uint32_t SetOverlayRaw( uint64_t, void *, uint32_t, uint32_t, uint32_t ) = 0;
    virtual uint32_t SetOverlayFromFile( uint64_t, const char * ) = 0;
    virtual bool IsSystemOverlayVisible(  ) = 0;
    virtual bool IsActiveSystemOverlay( uint64_t ) = 0;
    virtual uint32_t SetSystemOverlaySceneProcess( uint64_t, uint32_t ) = 0;
    virtual uint32_t GetSystemOverlaySceneProcess( uint64_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppIVROverlay_IVROverlay_001_FindOverlay( struct cppIVROverlay_IVROverlay_001_FindOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_CreateOverlay( struct cppIVROverlay_IVROverlay_001_CreateOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_DestroyOverlay( struct cppIVROverlay_IVROverlay_001_DestroyOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_SetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_GetHighQualityOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_001_SetOverlayFlag( struct cppIVROverlay_IVROverlay_001_SetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_001_GetOverlayFlag( struct cppIVROverlay_IVROverlay_001_GetOverlayFlag_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_001_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_SetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_001_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_GetOverlayAlpha_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_001_SetOverlayGamma( struct cppIVROverlay_IVROverlay_001_SetOverlayGamma_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_001_GetOverlayGamma( struct cppIVROverlay_IVROverlay_001_GetOverlayGamma_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformType_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_GetOverlayVisibility_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayVisibility( params->ulOverlayHandle, params->peOverlayVisibility );
}

void cppIVROverlay_IVROverlay_001_SetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_SetOverlayVisibility_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayVisibility( params->ulOverlayHandle, params->eOverlayVisibility );
}

void cppIVROverlay_IVROverlay_001_ShowOverlay( struct cppIVROverlay_IVROverlay_001_ShowOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_HideOverlay( struct cppIVROverlay_IVROverlay_001_HideOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_IsOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_001_PollNextOverlayEvent_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    VREvent_t lin_pEvent;
    if (params->pEvent)
        struct_VREvent_t_092_win_to_lin( params->pEvent, &lin_pEvent );
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &lin_pEvent : nullptr );
    if (params->pEvent)
        struct_VREvent_t_092_lin_to_win( &lin_pEvent, params->pEvent, -1 );
}

void cppIVROverlay_IVROverlay_001_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_GetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_001_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_SetOverlayInputMethod_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_001_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_GetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_001_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_SetOverlayMouseScale_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTexture( struct cppIVROverlay_IVROverlay_001_SetOverlayTexture_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_001_SetOverlayRaw( struct cppIVROverlay_IVROverlay_001_SetOverlayRaw_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_001_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_001_SetOverlayFromFile_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsSystemOverlayVisible(  );
}

void cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay( struct cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsActiveSystemOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetSystemOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *params )
{
    struct cppIVROverlay_IVROverlay_001 *iface = (struct cppIVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetSystemOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

#ifdef __cplusplus
}
#endif
