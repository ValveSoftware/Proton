/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSystem_IVRSystem_005_GetWindowBounds( void *args )
{
    struct IVRSystem_IVRSystem_005_GetWindowBounds_params *params = (struct IVRSystem_IVRSystem_005_GetWindowBounds_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetEyeOutputViewport( void *args )
{
    struct IVRSystem_IVRSystem_005_GetEyeOutputViewport_params *params = (struct IVRSystem_IVRSystem_005_GetEyeOutputViewport_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_005_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_005_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_005_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_005_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_005_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_005_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_005_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_005_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_005_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_005_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_AttachToWindow( void *args )
{
    struct IVRSystem_IVRSystem_005_AttachToWindow_params *params = (struct IVRSystem_IVRSystem_005_AttachToWindow_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->AttachToWindow( params->hWnd );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_ResetSeatedZeroPose( void *args )
{
    struct IVRSystem_IVRSystem_005_ResetSeatedZeroPose_params *params = (struct IVRSystem_IVRSystem_005_ResetSeatedZeroPose_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct IVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_005_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_005_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_005_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_005_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VREvent_t_097 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_005_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_005_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VREvent_t_097 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_005_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_005_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_005_GetControllerState_params *params = (struct IVRSystem_IVRSystem_005_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_005_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_005_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_005_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_005_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_CaptureInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_005_CaptureInputFocus_params *params = (struct IVRSystem_IVRSystem_005_CaptureInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_ReleaseInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_005_ReleaseInputFocus_params *params = (struct IVRSystem_IVRSystem_005_ReleaseInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->ReleaseInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess( void *args )
{
    struct IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params *params = (struct IVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_005_DriverDebugRequest( void *args )
{
    struct IVRSystem_IVRSystem_005_DriverDebugRequest_params *params = (struct IVRSystem_IVRSystem_005_DriverDebugRequest_params *)args;
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
    return 0;
}

