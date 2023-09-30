/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSystem_IVRSystem_015.h"
void cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_015_GetRecommendedRenderTargetSize_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_015_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_015_GetProjectionMatrix_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
}

void cppIVRSystem_IVRSystem_015_GetProjectionRaw( struct cppIVRSystem_IVRSystem_015_GetProjectionRaw_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_015_ComputeDistortion( struct cppIVRSystem_IVRSystem_015_ComputeDistortion_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
}

void cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_015_GetEyeToHeadTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_015_GetTimeSinceLastVsync_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_015_GetD3D9AdapterIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_015_GetDXGIOutputInfo_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
}

void cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_015_IsDisplayOnDesktop_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->IsDisplayOnDesktop(  );
}

void cppIVRSystem_IVRSystem_015_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_015_SetDisplayVisibility_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
}

void cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_015_ResetSeatedZeroPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_015_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_015_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceActivityLevel_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
}

void cppIVRSystem_IVRSystem_015_ApplyTransform( struct cppIVRSystem_IVRSystem_015_ApplyTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
}

void cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceIndexForControllerRole_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
}

void cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_015_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_015_GetTrackedDeviceClass_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_015_IsTrackedDeviceConnected_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetBoolTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetFloatTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetInt32TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetUint64TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_015_GetStringTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetPropErrorNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_015_PollNextEvent( struct cppIVRSystem_IVRSystem_015_PollNextEvent_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    u_VREvent_t_106 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_015_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_015_PollNextEventWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    u_VREvent_t_106 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetEventTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_015_GetHiddenAreaMesh_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
}

void cppIVRSystem_IVRSystem_015_GetControllerState( struct cppIVRSystem_IVRSystem_015_GetControllerState_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_015_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_015_GetControllerStateWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_015_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_015_TriggerHapticPulse_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetButtonIdNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_015_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_015_CaptureInputFocus( struct cppIVRSystem_IVRSystem_015_CaptureInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_015_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_015_ReleaseInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_015_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (bool)iface->IsInputFocusCapturedByAnotherProcess(  );
}

void cppIVRSystem_IVRSystem_015_DriverDebugRequest( struct cppIVRSystem_IVRSystem_015_DriverDebugRequest_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

void cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_015_PerformFirmwareUpdate_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformFirmwareUpdate( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_Exiting_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
}

void cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_015_AcknowledgeQuit_UserPrompt_params *params )
{
    struct u_IVRSystem_IVRSystem_015 *iface = (struct u_IVRSystem_IVRSystem_015 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
}

