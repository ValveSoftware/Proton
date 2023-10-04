/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVROverlay_IVROverlay_001_FindOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_FindOverlay_params *params = (struct IVROverlay_IVROverlay_001_FindOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->FindOverlay( params->pchOverlayKey, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_CreateOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_CreateOverlay_params *params = (struct IVROverlay_IVROverlay_001_CreateOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->CreateOverlay( params->pchOverlayKey, params->pchOverlayFriendlyName, params->pOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_DestroyOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_DestroyOverlay_params *params = (struct IVROverlay_IVROverlay_001_DestroyOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->DestroyOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_SetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_001_SetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetHighQualityOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetHighQualityOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_GetHighQualityOverlay_params *params = (struct IVROverlay_IVROverlay_001_GetHighQualityOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetHighQualityOverlay(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayErrorNameFromEnum_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->bEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayFlag( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayFlag_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayFlag_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayFlag( params->ulOverlayHandle, params->eOverlayFlag, params->pbEnabled );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayAlpha( params->ulOverlayHandle, params->fAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayAlpha( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayAlpha_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayAlpha_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayAlpha( params->ulOverlayHandle, params->pfAlpha );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayGamma( params->ulOverlayHandle, params->fGamma );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayGamma( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayGamma_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayGamma_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayGamma( params->ulOverlayHandle, params->pfGamma );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayWidthInMeters( params->ulOverlayHandle, params->fWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayWidthInMeters( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayWidthInMeters_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayWidthInMeters( params->ulOverlayHandle, params->pfWidthInMeters );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayTextureBounds( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayTextureBounds_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTextureBounds( params->ulOverlayHandle, params->pOverlayTextureBounds );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayTransformType( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayTransformType_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayTransformType_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformType( params->ulOverlayHandle, params->peTransformType );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformAbsolute( params->ulOverlayHandle, params->eTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayTransformAbsolute( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayTransformAbsolute_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformAbsolute( params->ulOverlayHandle, params->peTrackingOrigin, params->pmatTrackingOriginToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->unTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayTransformTrackedDeviceRelative_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayTransformTrackedDeviceRelative( params->ulOverlayHandle, params->punTrackedDevice, params->pmatTrackedDeviceToOverlayTransform );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayVisibility( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayVisibility_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayVisibility_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayVisibility( params->ulOverlayHandle, params->peOverlayVisibility );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayVisibility( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayVisibility_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayVisibility_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayVisibility( params->ulOverlayHandle, params->eOverlayVisibility );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_ShowOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_ShowOverlay_params *params = (struct IVROverlay_IVROverlay_001_ShowOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->ShowOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_HideOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_HideOverlay_params *params = (struct IVROverlay_IVROverlay_001_HideOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->HideOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_IsOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_001_IsOverlayVisible_params *params = (struct IVROverlay_IVROverlay_001_IsOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsOverlayVisible( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_PollNextOverlayEvent( void *args )
{
    struct IVROverlay_IVROverlay_001_PollNextOverlayEvent_params *params = (struct IVROverlay_IVROverlay_001_PollNextOverlayEvent_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    u_VREvent_t_092 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextOverlayEvent( params->ulOverlayHandle, params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayInputMethod( params->ulOverlayHandle, params->peInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayInputMethod( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayInputMethod_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayInputMethod_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayInputMethod( params->ulOverlayHandle, params->eInputMethod );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_001_GetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_001_GetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayMouseScale( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayMouseScale_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayMouseScale_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayMouseScale( params->ulOverlayHandle, params->pvecMouseScale );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_ComputeOverlayIntersection( void *args )
{
    struct IVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *params = (struct IVROverlay_IVROverlay_001_ComputeOverlayIntersection_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->ComputeOverlayIntersection( params->ulOverlayHandle, params->pParams, params->pResults );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVROverlay_IVROverlay_001_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->ulOverlayHandle, params->unControllerDeviceIndex );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayRaw( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayRaw_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayRaw_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetOverlayRaw( params->ulOverlayHandle, params->pvBuffer, params->unWidth, params->unHeight, params->unDepth );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetOverlayFromFile( void *args )
{
    struct IVROverlay_IVROverlay_001_SetOverlayFromFile_params *params = (struct IVROverlay_IVROverlay_001_SetOverlayFromFile_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    char *u_pchFilePath = vrclient_dos_to_unix_path( params->pchFilePath );
    params->_ret = iface->SetOverlayFromFile( params->ulOverlayHandle, u_pchFilePath );
    vrclient_free_path( u_pchFilePath );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_IsSystemOverlayVisible( void *args )
{
    struct IVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *params = (struct IVROverlay_IVROverlay_001_IsSystemOverlayVisible_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsSystemOverlayVisible(  );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_IsActiveSystemOverlay( void *args )
{
    struct IVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *params = (struct IVROverlay_IVROverlay_001_IsActiveSystemOverlay_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->IsActiveSystemOverlay( params->ulOverlayHandle );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_001_SetSystemOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->SetSystemOverlaySceneProcess( params->ulOverlayHandle, params->unProcessId );
    return 0;
}

NTSTATUS IVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess( void *args )
{
    struct IVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *params = (struct IVROverlay_IVROverlay_001_GetSystemOverlaySceneProcess_params *)args;
    struct u_IVROverlay_IVROverlay_001 *iface = (struct u_IVROverlay_IVROverlay_001 *)params->linux_side;
    params->_ret = iface->GetSystemOverlaySceneProcess( params->ulOverlayHandle, params->punProcessId );
    return 0;
}

