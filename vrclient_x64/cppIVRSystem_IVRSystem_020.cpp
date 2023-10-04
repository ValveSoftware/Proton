/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_020_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_020_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_020_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_020_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_020_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_020_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_020_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_020_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_020_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_020_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_020_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_020_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_020_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_IsDisplayOnDesktop( void *args )
{
    struct IVRSystem_IVRSystem_020_IsDisplayOnDesktop_params *params = (struct IVRSystem_IVRSystem_020_IsDisplayOnDesktop_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->IsDisplayOnDesktop(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_SetDisplayVisibility( void *args )
{
    struct IVRSystem_IVRSystem_020_SetDisplayVisibility_params *params = (struct IVRSystem_IVRSystem_020_SetDisplayVisibility_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_020_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_ResetSeatedZeroPose( void *args )
{
    struct IVRSystem_IVRSystem_020_ResetSeatedZeroPose_params *params = (struct IVRSystem_IVRSystem_020_ResetSeatedZeroPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_020_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_020_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct IVRSystem_IVRSystem_020_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel( void *args )
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params *params = (struct IVRSystem_IVRSystem_020_GetTrackedDeviceActivityLevel_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_ApplyTransform( void *args )
{
    struct IVRSystem_IVRSystem_020_ApplyTransform_params *params = (struct IVRSystem_IVRSystem_020_ApplyTransform_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole( void *args )
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params *params = (struct IVRSystem_IVRSystem_020_GetTrackedDeviceIndexForControllerRole_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex( void *args )
{
    struct IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params *params = (struct IVRSystem_IVRSystem_020_GetControllerRoleForTrackedDeviceIndex_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_020_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_020_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_020_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetArrayTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_020_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_020_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_020_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_020_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_020_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_020_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_020_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_020_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_020_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_020_GetControllerState_params *params = (struct IVRSystem_IVRSystem_020_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_020_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_020_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_020_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_020_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_020_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_020_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_IsInputAvailable( void *args )
{
    struct IVRSystem_IVRSystem_020_IsInputAvailable_params *params = (struct IVRSystem_IVRSystem_020_IsInputAvailable_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->IsInputAvailable(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers( void *args )
{
    struct IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params *params = (struct IVRSystem_IVRSystem_020_IsSteamVRDrawingControllers_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->IsSteamVRDrawingControllers(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_ShouldApplicationPause( void *args )
{
    struct IVRSystem_IVRSystem_020_ShouldApplicationPause_params *params = (struct IVRSystem_IVRSystem_020_ShouldApplicationPause_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->ShouldApplicationPause(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork( void *args )
{
    struct IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params *params = (struct IVRSystem_IVRSystem_020_ShouldApplicationReduceRenderingWork_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->ShouldApplicationReduceRenderingWork(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_PerformFirmwareUpdate( void *args )
{
    struct IVRSystem_IVRSystem_020_PerformFirmwareUpdate_params *params = (struct IVRSystem_IVRSystem_020_PerformFirmwareUpdate_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->PerformFirmwareUpdate( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting( void *args )
{
    struct IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params *params = (struct IVRSystem_IVRSystem_020_AcknowledgeQuit_Exiting_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt( void *args )
{
    struct IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params *params = (struct IVRSystem_IVRSystem_020_AcknowledgeQuit_UserPrompt_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetAppContainerFilePaths( void *args )
{
    struct IVRSystem_IVRSystem_020_GetAppContainerFilePaths_params *params = (struct IVRSystem_IVRSystem_020_GetAppContainerFilePaths_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetAppContainerFilePaths( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_020_GetRuntimeVersion( void *args )
{
    struct IVRSystem_IVRSystem_020_GetRuntimeVersion_params *params = (struct IVRSystem_IVRSystem_020_GetRuntimeVersion_params *)args;
    struct u_IVRSystem_IVRSystem_020 *iface = (struct u_IVRSystem_IVRSystem_020 *)params->linux_side;
    params->_ret = iface->GetRuntimeVersion(  );
    return 0;
}

