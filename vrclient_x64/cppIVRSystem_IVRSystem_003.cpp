/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSystem_IVRSystem_003_GetWindowBounds( void *args )
{
    struct IVRSystem_IVRSystem_003_GetWindowBounds_params *params = (struct IVRSystem_IVRSystem_003_GetWindowBounds_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetEyeOutputViewport( void *args )
{
    struct IVRSystem_IVRSystem_003_GetEyeOutputViewport_params *params = (struct IVRSystem_IVRSystem_003_GetEyeOutputViewport_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_003_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_003_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_003_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_003_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_003_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_003_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_003_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_003_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_003_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_003_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_AttachToWindow( void *args )
{
    struct IVRSystem_IVRSystem_003_AttachToWindow_params *params = (struct IVRSystem_IVRSystem_003_AttachToWindow_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->AttachToWindow( params->hWnd );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_ResetSeatedZeroPose( void *args )
{
    struct IVRSystem_IVRSystem_003_ResetSeatedZeroPose_params *params = (struct IVRSystem_IVRSystem_003_ResetSeatedZeroPose_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_LoadRenderModel( void *args )
{
    struct IVRSystem_IVRSystem_003_LoadRenderModel_params *params = (struct IVRSystem_IVRSystem_003_LoadRenderModel_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    params->_ret = iface->LoadRenderModel( params->pchRenderModelName, params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_FreeRenderModel( void *args )
{
    struct IVRSystem_IVRSystem_003_FreeRenderModel_params *params = (struct IVRSystem_IVRSystem_003_FreeRenderModel_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    iface->FreeRenderModel( params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_003_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_003_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_003_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_003_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VREvent_t_090 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_003_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_003_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VREvent_t_090 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_003_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_003_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_003_GetControllerState_params *params = (struct IVRSystem_IVRSystem_003_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_003_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_003_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_003_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_003_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse( void *args )
{
    struct IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params *params = (struct IVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->HandleControllerOverlayInteractionAsMouse( params->overlaySettings, params->vecWindowClientPositionOnScreen, params->vecWindowClientSize, params->unControllerDeviceIndex, params->eOutputType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_CaptureInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_003_CaptureInputFocus_params *params = (struct IVRSystem_IVRSystem_003_CaptureInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_ReleaseInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_003_ReleaseInputFocus_params *params = (struct IVRSystem_IVRSystem_003_ReleaseInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->ReleaseInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess( void *args )
{
    struct IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params *params = (struct IVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params *)args;
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
    return 0;
}

