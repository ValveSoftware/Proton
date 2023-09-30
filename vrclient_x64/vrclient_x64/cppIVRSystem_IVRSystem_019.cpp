/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSystem_IVRSystem_019.h"
void cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_019_GetRecommendedRenderTargetSize_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_019_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_019_GetProjectionMatrix_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ );
}

void cppIVRSystem_IVRSystem_019_GetProjectionRaw( struct cppIVRSystem_IVRSystem_019_GetProjectionRaw_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_019_ComputeDistortion( struct cppIVRSystem_IVRSystem_019_ComputeDistortion_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->ComputeDistortion( params->eEye, params->fU, params->fV, params->pDistortionCoordinates );
}

void cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_019_GetEyeToHeadTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_019_GetTimeSinceLastVsync_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_019_GetD3D9AdapterIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_019_GetDXGIOutputInfo_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex );
}

void cppIVRSystem_IVRSystem_019_GetOutputDevice( struct cppIVRSystem_IVRSystem_019_GetOutputDevice_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->GetOutputDevice( params->pnDevice, params->textureType, params->pInstance );
}

void cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop( struct cppIVRSystem_IVRSystem_019_IsDisplayOnDesktop_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->IsDisplayOnDesktop(  );
}

void cppIVRSystem_IVRSystem_019_SetDisplayVisibility( struct cppIVRSystem_IVRSystem_019_SetDisplayVisibility_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->SetDisplayVisibility( params->bIsVisibleOnDesktop );
}

void cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_019_ResetSeatedZeroPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_019_GetRawZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetRawZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_019_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceActivityLevel_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceActivityLevel( params->unDeviceId );
}

void cppIVRSystem_IVRSystem_019_ApplyTransform( struct cppIVRSystem_IVRSystem_019_ApplyTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->ApplyTransform( params->pOutputPose, params->pTrackedDevicePose, params->pTransform );
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceIndexForControllerRole_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceIndexForControllerRole( params->unDeviceType );
}

void cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex( struct cppIVRSystem_IVRSystem_019_GetControllerRoleForTrackedDeviceIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetControllerRoleForTrackedDeviceIndex( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_019_GetTrackedDeviceClass_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_019_IsTrackedDeviceConnected_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetBoolTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetFloatTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetInt32TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetUint64TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetArrayTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetArrayTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->propType, params->pBuffer, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_019_GetStringTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetPropErrorNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_019_PollNextEvent( struct cppIVRSystem_IVRSystem_019_PollNextEvent_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_019_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_019_PollNextEventWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    u_VREvent_t_1322 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    uint32_t u_uncbVREvent = params->uncbVREvent ? sizeof(u_pEvent) : 0;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, u_uncbVREvent, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetEventTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_019_GetHiddenAreaMesh_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye, params->type );
}

void cppIVRSystem_IVRSystem_019_GetControllerState( struct cppIVRSystem_IVRSystem_019_GetControllerState_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_019_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_019_GetControllerStateWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    uint32_t u_unControllerStateSize = params->unControllerStateSize ? sizeof(u_pControllerState) : 0;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, u_unControllerStateSize, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_019_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_019_TriggerHapticPulse_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetButtonIdNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_019_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_019_IsInputAvailable( struct cppIVRSystem_IVRSystem_019_IsInputAvailable_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->IsInputAvailable(  );
}

void cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers( struct cppIVRSystem_IVRSystem_019_IsSteamVRDrawingControllers_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->IsSteamVRDrawingControllers(  );
}

void cppIVRSystem_IVRSystem_019_ShouldApplicationPause( struct cppIVRSystem_IVRSystem_019_ShouldApplicationPause_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationPause(  );
}

void cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork( struct cppIVRSystem_IVRSystem_019_ShouldApplicationReduceRenderingWork_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (bool)iface->ShouldApplicationReduceRenderingWork(  );
}

void cppIVRSystem_IVRSystem_019_DriverDebugRequest( struct cppIVRSystem_IVRSystem_019_DriverDebugRequest_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

void cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate( struct cppIVRSystem_IVRSystem_019_PerformFirmwareUpdate_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    params->_ret = (uint32_t)iface->PerformFirmwareUpdate( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting( struct cppIVRSystem_IVRSystem_019_AcknowledgeQuit_Exiting_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->AcknowledgeQuit_Exiting(  );
}

void cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt( struct cppIVRSystem_IVRSystem_019_AcknowledgeQuit_UserPrompt_params *params )
{
    struct u_IVRSystem_IVRSystem_019 *iface = (struct u_IVRSystem_IVRSystem_019 *)params->linux_side;
    iface->AcknowledgeQuit_UserPrompt(  );
}

