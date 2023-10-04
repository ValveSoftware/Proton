/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_009_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_009_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_009_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_009_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_009_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_009_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_009_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_009_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_009_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_009_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_009_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_009_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_009_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_009_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_009_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_IsDisplayOnDesktop( void *args )
{
    struct IVRSystem_IVRSystem_009_IsDisplayOnDesktop_params *params = (struct IVRSystem_IVRSystem_009_IsDisplayOnDesktop_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsDisplayOnDesktop(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_SetDisplayVisibility( void *args )
{
    struct IVRSystem_IVRSystem_009_SetDisplayVisibility_params *params = (struct IVRSystem_IVRSystem_009_SetDisplayVisibility_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_009_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_ResetSeatedZeroPose( void *args )
{
    struct IVRSystem_IVRSystem_009_ResetSeatedZeroPose_params *params = (struct IVRSystem_IVRSystem_009_ResetSeatedZeroPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_009_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_009_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct IVRSystem_IVRSystem_009_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel( void *args )
{
    struct IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel_params *params = (struct IVRSystem_IVRSystem_009_GetTrackedDeviceActivityLevel_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_ApplyTransform( void *args )
{
    struct IVRSystem_IVRSystem_009_ApplyTransform_params *params = (struct IVRSystem_IVRSystem_009_ApplyTransform_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_009_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_009_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_009_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_009_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_009_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_009_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_009_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_009_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    u_VREvent_t_0912 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_009_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_009_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    u_VREvent_t_0912 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_009_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_009_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_009_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_009_GetControllerState_params *params = (struct IVRSystem_IVRSystem_009_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_009_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_009_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_009_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_009_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_009_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_009_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_CaptureInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_009_CaptureInputFocus_params *params = (struct IVRSystem_IVRSystem_009_CaptureInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_ReleaseInputFocus( void *args )
{
    struct IVRSystem_IVRSystem_009_ReleaseInputFocus_params *params = (struct IVRSystem_IVRSystem_009_ReleaseInputFocus_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->ReleaseInputFocus(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess( void *args )
{
    struct IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess_params *params = (struct IVRSystem_IVRSystem_009_IsInputFocusCapturedByAnotherProcess_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_DriverDebugRequest( void *args )
{
    struct IVRSystem_IVRSystem_009_DriverDebugRequest_params *params = (struct IVRSystem_IVRSystem_009_DriverDebugRequest_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_PerformFirmwareUpdate( void *args )
{
    struct IVRSystem_IVRSystem_009_PerformFirmwareUpdate_params *params = (struct IVRSystem_IVRSystem_009_PerformFirmwareUpdate_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting( void *args )
{
    struct IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting_params *params = (struct IVRSystem_IVRSystem_009_AcknowledgeQuit_Exiting_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt( void *args )
{
    struct IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt_params *params = (struct IVRSystem_IVRSystem_009_AcknowledgeQuit_UserPrompt_params *)args;
    struct u_IVRSystem_IVRSystem_009 *iface = (struct u_IVRSystem_IVRSystem_009 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
    return 0;
}

