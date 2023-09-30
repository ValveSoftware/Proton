/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVROverlay_IVROverlay_002.h"
void cppIVROverlay_IVROverlay_002_FindOverlay( struct cppIVROverlay_IVROverlay_002_FindOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_CreateOverlay( struct cppIVROverlay_IVROverlay_002_CreateOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_DestroyOverlay( struct cppIVROverlay_IVROverlay_002_DestroyOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->DestroyOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_SetHighQualityOverlay( struct cppIVROverlay_IVROverlay_002_SetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetHighQualityOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_GetHighQualityOverlay( struct cppIVROverlay_IVROverlay_002_GetHighQualityOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetHighQualityOverlay(  );
}

void cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum( struct cppIVROverlay_IVROverlay_002_GetOverlayErrorNameFromEnum_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (const char *)iface->GetOverlayErrorNameFromEnum( params->error );
}

void cppIVROverlay_IVROverlay_002_SetOverlayFlag( struct cppIVROverlay_IVROverlay_002_SetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
}

void cppIVROverlay_IVROverlay_002_GetOverlayFlag( struct cppIVROverlay_IVROverlay_002_GetOverlayFlag_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
}

void cppIVROverlay_IVROverlay_002_SetOverlayColor( struct cppIVROverlay_IVROverlay_002_SetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayColor( params->ulOverlayHandle, params->fRed, params->fGreen, params->fBlue );
}

void cppIVROverlay_IVROverlay_002_GetOverlayColor( struct cppIVROverlay_IVROverlay_002_GetOverlayColor_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayColor( params->ulOverlayHandle, params->pfRed, params->pfGreen, params->pfBlue );
}

void cppIVROverlay_IVROverlay_002_SetOverlayAlpha( struct cppIVROverlay_IVROverlay_002_SetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
}

void cppIVROverlay_IVROverlay_002_GetOverlayAlpha( struct cppIVROverlay_IVROverlay_002_GetOverlayAlpha_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
}

void cppIVROverlay_IVROverlay_002_SetOverlayGamma( struct cppIVROverlay_IVROverlay_002_SetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
}

void cppIVROverlay_IVROverlay_002_GetOverlayGamma( struct cppIVROverlay_IVROverlay_002_GetOverlayGamma_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
}

void cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_002_SetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
}

void cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters( struct cppIVROverlay_IVROverlay_002_GetOverlayWidthInMeters_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
}

void cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_002_SetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds( struct cppIVROverlay_IVROverlay_002_GetOverlayTextureBounds_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
}

void cppIVROverlay_IVROverlay_002_GetOverlayTransformType( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformType_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
}

void cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_002_SetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformAbsolute_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
}

void cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_002_SetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative( struct cppIVROverlay_IVROverlay_002_GetOverlayTransformTrackedDeviceRelative_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
}

void cppIVROverlay_IVROverlay_002_ShowOverlay( struct cppIVROverlay_IVROverlay_002_ShowOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->ShowOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_HideOverlay( struct cppIVROverlay_IVROverlay_002_HideOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->HideOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_IsOverlayVisible( struct cppIVROverlay_IVROverlay_002_IsOverlayVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (bool)iface->IsOverlayVisible( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_PollNextOverlayEvent( struct cppIVROverlay_IVROverlay_002_PollNextOverlayEvent_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    u_VREvent_t_093 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVROverlay_IVROverlay_002_GetOverlayInputMethod( struct cppIVROverlay_IVROverlay_002_GetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
}

void cppIVROverlay_IVROverlay_002_SetOverlayInputMethod( struct cppIVROverlay_IVROverlay_002_SetOverlayInputMethod_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
}

void cppIVROverlay_IVROverlay_002_GetOverlayMouseScale( struct cppIVROverlay_IVROverlay_002_GetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_002_SetOverlayMouseScale( struct cppIVROverlay_IVROverlay_002_SetOverlayMouseScale_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
}

void cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection( struct cppIVROverlay_IVROverlay_002_ComputeOverlayIntersection_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (bool)iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
}

void cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse( struct cppIVROverlay_IVROverlay_002_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
}

void cppIVROverlay_IVROverlay_002_SetOverlayTexture( struct cppIVROverlay_IVROverlay_002_SetOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayTexture( params->ulOverlayHandle, params->eTextureType, params->pTexture );
}

void cppIVROverlay_IVROverlay_002_ClearOverlayTexture( struct cppIVROverlay_IVROverlay_002_ClearOverlayTexture_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->ClearOverlayTexture( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_SetOverlayRaw( struct cppIVROverlay_IVROverlay_002_SetOverlayRaw_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
}

void cppIVROverlay_IVROverlay_002_SetOverlayFromFile( struct cppIVROverlay_IVROverlay_002_SetOverlayFromFile_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetOverlayFromFile( params->ulOverlayHandle, params->pchFilePath );
}

void cppIVROverlay_IVROverlay_002_CreateDashboardOverlay( struct cppIVROverlay_IVROverlay_002_CreateDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->CreateDashboardOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pMainHandle, params->pThumbnailHandle );
}

void cppIVROverlay_IVROverlay_002_IsDashboardVisible( struct cppIVROverlay_IVROverlay_002_IsDashboardVisible_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (bool)iface->IsDashboardVisible(  );
}

void cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay( struct cppIVROverlay_IVROverlay_002_IsActiveDashboardOverlay_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (bool)iface->IsActiveDashboardOverlay( params->ulOverlayHandle );
}

void cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_002_SetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->SetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
}

void cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess( struct cppIVROverlay_IVROverlay_002_GetDashboardOverlaySceneProcess_params *params )
{
    struct u_IVROverlay_IVROverlay_002 *iface = (struct u_IVROverlay_IVROverlay_002 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetDashboardOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
}

