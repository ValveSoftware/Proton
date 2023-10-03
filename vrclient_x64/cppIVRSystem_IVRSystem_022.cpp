/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize( void *args )
{
    struct IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params *params = (struct IVRSystem_IVRSystem_022_GetRecommendedRenderTargetSize_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetProjectionMatrix( void *args )
{
    struct IVRSystem_IVRSystem_022_GetProjectionMatrix_params *params = (struct IVRSystem_IVRSystem_022_GetProjectionMatrix_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetProjectionRaw( void *args )
{
    struct IVRSystem_IVRSystem_022_GetProjectionRaw_params *params = (struct IVRSystem_IVRSystem_022_GetProjectionRaw_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_ComputeDistortion( void *args )
{
    struct IVRSystem_IVRSystem_022_ComputeDistortion_params *params = (struct IVRSystem_IVRSystem_022_ComputeDistortion_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetEyeToHeadTransform( void *args )
{
    struct IVRSystem_IVRSystem_022_GetEyeToHeadTransform_params *params = (struct IVRSystem_IVRSystem_022_GetEyeToHeadTransform_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetTimeSinceLastVsync( void *args )
{
    struct IVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params *params = (struct IVRSystem_IVRSystem_022_GetTimeSinceLastVsync_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetD3D9AdapterIndex( void *args )
{
    struct IVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params *params = (struct IVRSystem_IVRSystem_022_GetD3D9AdapterIndex_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetDXGIOutputInfo( void *args )
{
    struct IVRSystem_IVRSystem_022_GetDXGIOutputInfo_params *params = (struct IVRSystem_IVRSystem_022_GetDXGIOutputInfo_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_IsDisplayOnDesktop( void *args )
{
    struct IVRSystem_IVRSystem_022_IsDisplayOnDesktop_params *params = (struct IVRSystem_IVRSystem_022_IsDisplayOnDesktop_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->IsDisplayOnDesktop(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_SetDisplayVisibility( void *args )
{
    struct IVRSystem_IVRSystem_022_SetDisplayVisibility_params *params = (struct IVRSystem_IVRSystem_022_SetDisplayVisibility_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_022_GetDeviceToAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_022_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose( void *args )
{
    struct IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params = (struct IVRSystem_IVRSystem_022_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass( void *args )
{
    struct IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params *params = (struct IVRSystem_IVRSystem_022_GetSortedTrackedDeviceIndicesOfClass_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel( void *args )
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params *params = (struct IVRSystem_IVRSystem_022_GetTrackedDeviceActivityLevel_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_ApplyTransform( void *args )
{
    struct IVRSystem_IVRSystem_022_ApplyTransform_params *params = (struct IVRSystem_IVRSystem_022_ApplyTransform_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole( void *args )
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params *params = (struct IVRSystem_IVRSystem_022_GetTrackedDeviceIndexForControllerRole_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex( void *args )
{
    struct IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params *params = (struct IVRSystem_IVRSystem_022_GetControllerRoleForTrackedDeviceIndex_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetTrackedDeviceClass( void *args )
{
    struct IVRSystem_IVRSystem_022_GetTrackedDeviceClass_params *params = (struct IVRSystem_IVRSystem_022_GetTrackedDeviceClass_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_IsTrackedDeviceConnected( void *args )
{
    struct IVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params *params = (struct IVRSystem_IVRSystem_022_IsTrackedDeviceConnected_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetBoolTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetFloatTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetInt32TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetUint64TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetMatrix34TrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetArrayTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty( void *args )
{
    struct IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params *params = (struct IVRSystem_IVRSystem_022_GetStringTrackedDeviceProperty_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params *params = (struct IVRSystem_IVRSystem_022_GetPropErrorNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_PollNextEvent( void *args )
{
    struct IVRSystem_IVRSystem_022_PollNextEvent_params *params = (struct IVRSystem_IVRSystem_022_PollNextEvent_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    u_VREvent_t_1168 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_PollNextEventWithPose( void *args )
{
    struct IVRSystem_IVRSystem_022_PollNextEventWithPose_params *params = (struct IVRSystem_IVRSystem_022_PollNextEventWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    u_VREvent_t_1168 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_022_GetEventTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetHiddenAreaMesh( void *args )
{
    struct IVRSystem_IVRSystem_022_GetHiddenAreaMesh_params *params = (struct IVRSystem_IVRSystem_022_GetHiddenAreaMesh_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetControllerState( void *args )
{
    struct IVRSystem_IVRSystem_022_GetControllerState_params *params = (struct IVRSystem_IVRSystem_022_GetControllerState_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetControllerStateWithPose( void *args )
{
    struct IVRSystem_IVRSystem_022_GetControllerStateWithPose_params *params = (struct IVRSystem_IVRSystem_022_GetControllerStateWithPose_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_TriggerHapticPulse( void *args )
{
    struct IVRSystem_IVRSystem_022_TriggerHapticPulse_params *params = (struct IVRSystem_IVRSystem_022_TriggerHapticPulse_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params *params = (struct IVRSystem_IVRSystem_022_GetButtonIdNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum( void *args )
{
    struct IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params *params = (struct IVRSystem_IVRSystem_022_GetControllerAxisTypeNameFromEnum_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_IsInputAvailable( void *args )
{
    struct IVRSystem_IVRSystem_022_IsInputAvailable_params *params = (struct IVRSystem_IVRSystem_022_IsInputAvailable_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->IsInputAvailable(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers( void *args )
{
    struct IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params *params = (struct IVRSystem_IVRSystem_022_IsSteamVRDrawingControllers_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->IsSteamVRDrawingControllers(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_ShouldApplicationPause( void *args )
{
    struct IVRSystem_IVRSystem_022_ShouldApplicationPause_params *params = (struct IVRSystem_IVRSystem_022_ShouldApplicationPause_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationPause(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork( void *args )
{
    struct IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params *params = (struct IVRSystem_IVRSystem_022_ShouldApplicationReduceRenderingWork_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationReduceRenderingWork(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_PerformFirmwareUpdate( void *args )
{
    struct IVRSystem_IVRSystem_022_PerformFirmwareUpdate_params *params = (struct IVRSystem_IVRSystem_022_PerformFirmwareUpdate_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformFirmwareUpdate( params->unDeviceIndex );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting( void *args )
{
    struct IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params *params = (struct IVRSystem_IVRSystem_022_AcknowledgeQuit_Exiting_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetAppContainerFilePaths( void *args )
{
    struct IVRSystem_IVRSystem_022_GetAppContainerFilePaths_params *params = (struct IVRSystem_IVRSystem_022_GetAppContainerFilePaths_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetAppContainerFilePaths( params->pchBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS IVRSystem_IVRSystem_022_GetRuntimeVersion( void *args )
{
    struct IVRSystem_IVRSystem_022_GetRuntimeVersion_params *params = (struct IVRSystem_IVRSystem_022_GetRuntimeVersion_params *)args;
    struct u_IVRSystem_IVRSystem_022 *iface = (struct u_IVRSystem_IVRSystem_022 *)params->linux_side;
    params->_ret = (const char *)iface->GetRuntimeVersion(  );
    return 0;
}

