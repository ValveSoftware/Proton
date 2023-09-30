/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSystem_IVRSystem_005.h"
void cppIVRSystem_IVRSystem_005_GetWindowBounds( struct cppIVRSystem_IVRSystem_005_GetWindowBounds_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_005_GetRecommendedRenderTargetSize_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_005_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_005_GetEyeOutputViewport_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_005_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_005_GetProjectionMatrix_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
}

void cppIVRSystem_IVRSystem_005_GetProjectionRaw( struct cppIVRSystem_IVRSystem_005_GetProjectionRaw_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_005_ComputeDistortion( struct cppIVRSystem_IVRSystem_005_ComputeDistortion_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
}

void cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_005_GetEyeToHeadTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_005_GetTimeSinceLastVsync_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_005_GetD3D9AdapterIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_005_GetDXGIOutputInfo_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
}

void cppIVRSystem_IVRSystem_005_AttachToWindow( struct cppIVRSystem_IVRSystem_005_AttachToWindow_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->AttachToWindow( params->hWnd );
}

void cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_005_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_005_ResetSeatedZeroPose_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_005_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass( struct cppIVRSystem_IVRSystem_005_GetSortedTrackedDeviceIndicesOfClass_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetSortedTrackedDeviceIndicesOfClass( params->eTrackedDeviceClass, params->punTrackedDeviceIndexArray, params->unTrackedDeviceIndexArrayCount, params->unRelativeToTrackedDeviceIndex );
}

void cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_005_GetTrackedDeviceClass_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_005_IsTrackedDeviceConnected_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetBoolTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetFloatTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetInt32TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetUint64TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_005_GetStringTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetPropErrorNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_005_PollNextEvent( struct cppIVRSystem_IVRSystem_005_PollNextEvent_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VREvent_t_097 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_005_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_005_PollNextEventWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VREvent_t_097 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetEventTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_005_GetHiddenAreaMesh_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
}

void cppIVRSystem_IVRSystem_005_GetControllerState( struct cppIVRSystem_IVRSystem_005_GetControllerState_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_005_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_005_GetControllerStateWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_005_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_005_TriggerHapticPulse_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetButtonIdNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_005_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_005_CaptureInputFocus( struct cppIVRSystem_IVRSystem_005_CaptureInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_005_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_005_ReleaseInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_005_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (bool)iface->IsInputFocusCapturedByAnotherProcess(  );
}

void cppIVRSystem_IVRSystem_005_DriverDebugRequest( struct cppIVRSystem_IVRSystem_005_DriverDebugRequest_params *params )
{
    struct u_IVRSystem_IVRSystem_005 *iface = (struct u_IVRSystem_IVRSystem_005 *)params->linux_side;
    params->_ret = (uint32_t)iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

