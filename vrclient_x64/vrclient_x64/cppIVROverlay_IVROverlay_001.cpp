/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_001.h"
void cppIVROverlay_IVROverlay_001_FindOverlay( struct cppIVROverlay_IVROverlay_001_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_CreateOverlay( struct cppIVROverlay_IVROverlay_001_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_DestroyOverlay( struct cppIVROverlay_IVROverlay_001_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_001_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_001_SetOverlayFlag( struct cppIVROverlay_IVROverlay_001_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_001_GetOverlayFlag( struct cppIVROverlay_IVROverlay_001_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_001_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_001_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_001_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_001_SetOverlayGamma( struct cppIVROverlay_IVROverlay_001_SetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_001_GetOverlayGamma( struct cppIVROverlay_IVROverlay_001_GetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_001_GetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_GetOverlayVisibility_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayVisibility( params->ulOverlayHandle, params->peOverlayVisibility );
}

void cppIVROverlay_IVROverlay_001_SetOverlayVisibility( struct cppIVROverlay_IVROverlay_001_SetOverlayVisibility_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayVisibility( params->ulOverlayHandle, params->eOverlayVisibility );
}

void cppIVROverlay_IVROverlay_001_ShowOverlay( struct cppIVROverlay_IVROverlay_001_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_HideOverlay( struct cppIVROverlay_IVROverlay_001_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_IsOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_001_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    u_VREvent_t_092 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_001_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_001_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_001_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_001_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_001_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_001_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_001_SetOverlayTexture( struct cppIVROverlay_IVROverlay_001_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->pTexture );
}

void cppIVROverlay_IVROverlay_001_SetOverlayRaw( struct cppIVROverlay_IVROverlay_001_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_001_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_001_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible( struct cppIVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (bool)iface->IsSystemOverlayVisible(  );
}

void cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay( struct cppIVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveSystemOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetSystemOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess( struct cppIVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSystemOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

