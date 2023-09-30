/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppIVRSystem_IVRSystem_003.h"
void cppIVRSystem_IVRSystem_003_GetWindowBounds( struct cppIVRSystem_IVRSystem_003_GetWindowBounds_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_003_GetRecommendedRenderTargetSize_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_003_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_003_GetEyeOutputViewport_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_003_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_003_GetProjectionMatrix_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
}

void cppIVRSystem_IVRSystem_003_GetProjectionRaw( struct cppIVRSystem_IVRSystem_003_GetProjectionRaw_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_003_ComputeDistortion( struct cppIVRSystem_IVRSystem_003_ComputeDistortion_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
}

void cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_003_GetEyeToHeadTransform_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_003_GetTimeSinceLastVsync_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_003_GetD3D9AdapterIndex_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (int32_t)iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_003_GetDXGIOutputInfo_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
}

void cppIVRSystem_IVRSystem_003_AttachToWindow( struct cppIVRSystem_IVRSystem_003_AttachToWindow_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->AttachToWindow( params->hWnd );
}

void cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_003_ResetSeatedZeroPose_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_003_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_003_LoadRenderModel( struct cppIVRSystem_IVRSystem_003_LoadRenderModel_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    params->_ret = (bool)iface->LoadRenderModel( params->pchRenderModelName, params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
}

void cppIVRSystem_IVRSystem_003_FreeRenderModel( struct cppIVRSystem_IVRSystem_003_FreeRenderModel_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_RenderModel_t_090 u_pRenderModel;
    if (params->pRenderModel) u_pRenderModel = *params->pRenderModel;
    iface->FreeRenderModel( params->pRenderModel ? &u_pRenderModel : nullptr );
    if (params->pRenderModel) *params->pRenderModel = u_pRenderModel;
}

void cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_003_GetTrackedDeviceClass_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_003_IsTrackedDeviceConnected_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetBoolTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetFloatTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (float)iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetInt32TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (int32_t)iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetUint64TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (uint64_t)iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_003_GetStringTrackedDeviceProperty_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (uint32_t)iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetPropErrorNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_003_PollNextEvent( struct cppIVRSystem_IVRSystem_003_PollNextEvent_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VREvent_t_090 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextEvent( params->pEvent ? &u_pEvent : nullptr );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_003_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_003_PollNextEventWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VREvent_t_090 u_pEvent;
    if (params->pEvent) u_pEvent = *params->pEvent;
    params->_ret = (bool)iface->PollNextEventWithPose( params->eOrigin, params->pEvent ? &u_pEvent : nullptr, params->pTrackedDevicePose );
    if (params->pEvent) *params->pEvent = u_pEvent;
}

void cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetEventTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_003_GetHiddenAreaMesh_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
}

void cppIVRSystem_IVRSystem_003_GetControllerState( struct cppIVRSystem_IVRSystem_003_GetControllerState_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_003_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_003_GetControllerStateWithPose_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    u_VRControllerState001_t u_pControllerState;
    if (params->pControllerState) u_pControllerState = *params->pControllerState;
    params->_ret = (bool)iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &u_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState) *params->pControllerState = u_pControllerState;
}

void cppIVRSystem_IVRSystem_003_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_003_TriggerHapticPulse_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetButtonIdNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_003_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (const char *)iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse( struct cppIVRSystem_IVRSystem_003_HandleControllerOverlayInteractionAsMouse_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->HandleControllerOverlayInteractionAsMouse( params->overlaySettings, params->vecWindowClientPositionOnScreen, params->vecWindowClientSize, params->unControllerDeviceIndex, params->eOutputType );
}

void cppIVRSystem_IVRSystem_003_CaptureInputFocus( struct cppIVRSystem_IVRSystem_003_CaptureInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_003_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_003_ReleaseInputFocus_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_003_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct u_IVRSystem_IVRSystem_003 *iface = (struct u_IVRSystem_IVRSystem_003 *)params->linux_side;
    params->_ret = (bool)iface->IsInputFocusCapturedByAnotherProcess(  );
}

