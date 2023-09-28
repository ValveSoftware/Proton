#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_0.9.2/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRSystem_IVRSystem_004.h"
#ifdef __cplusplus
extern "C" {
#endif

struct cppIVRSystem_IVRSystem_004
{
#ifdef __cplusplus
    virtual void GetWindowBounds( int32_t *, int32_t *, uint32_t *, uint32_t * ) = 0;
    virtual void GetRecommendedRenderTargetSize( uint32_t *, uint32_t * ) = 0;
    virtual void GetEyeOutputViewport( uint32_t, uint32_t *, uint32_t *, uint32_t *, uint32_t * ) = 0;
    virtual HmdMatrix44_t GetProjectionMatrix( uint32_t, float, float, uint32_t ) = 0;
    virtual void GetProjectionRaw( uint32_t, float *, float *, float *, float * ) = 0;
    virtual DistortionCoordinates_t ComputeDistortion( uint32_t, float, float ) = 0;
    virtual HmdMatrix34_t GetEyeToHeadTransform( uint32_t ) = 0;
    virtual bool GetTimeSinceLastVsync( float *, uint64_t * ) = 0;
    virtual int32_t GetD3D9AdapterIndex(  ) = 0;
    virtual void GetDXGIOutputInfo( int32_t *, int32_t * ) = 0;
    virtual bool AttachToWindow( void * ) = 0;
    virtual void GetDeviceToAbsoluteTrackingPose( uint32_t, float, TrackedDevicePose_t *, uint32_t ) = 0;
    virtual void ResetSeatedZeroPose(  ) = 0;
    virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  ) = 0;
    virtual uint32_t GetTrackedDeviceClass( uint32_t ) = 0;
    virtual bool IsTrackedDeviceConnected( uint32_t ) = 0;
    virtual bool GetBoolTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual float GetFloatTrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual int32_t GetInt32TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint64_t GetUint64TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( uint32_t, uint32_t, uint32_t * ) = 0;
    virtual uint32_t GetStringTrackedDeviceProperty( uint32_t, uint32_t, char *, uint32_t, uint32_t * ) = 0;
    virtual const char * GetPropErrorNameFromEnum( uint32_t ) = 0;
    virtual bool PollNextEvent( VREvent_t * ) = 0;
    virtual bool PollNextEventWithPose( uint32_t, VREvent_t *, TrackedDevicePose_t * ) = 0;
    virtual const char * GetEventTypeNameFromEnum( uint32_t ) = 0;
    virtual HiddenAreaMesh_t GetHiddenAreaMesh( uint32_t ) = 0;
    virtual bool GetControllerState( uint32_t, VRControllerState_t * ) = 0;
    virtual bool GetControllerStateWithPose( uint32_t, uint32_t, VRControllerState_t *, TrackedDevicePose_t * ) = 0;
    virtual void TriggerHapticPulse( uint32_t, uint32_t, uint16_t ) = 0;
    virtual const char * GetButtonIdNameFromEnum( uint32_t ) = 0;
    virtual const char * GetControllerAxisTypeNameFromEnum( uint32_t ) = 0;
    virtual bool CaptureInputFocus(  ) = 0;
    virtual void ReleaseInputFocus(  ) = 0;
    virtual bool IsInputFocusCapturedByAnotherProcess(  ) = 0;
    virtual uint32_t DriverDebugRequest( uint32_t, const char *, char *, uint32_t ) = 0;
#endif /* __cplusplus */
};

void cppIVRSystem_IVRSystem_004_GetWindowBounds( struct cppIVRSystem_IVRSystem_004_GetWindowBounds_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetWindowBounds( params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize( struct cppIVRSystem_IVRSystem_004_GetRecommendedRenderTargetSize_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetRecommendedRenderTargetSize( params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_004_GetEyeOutputViewport( struct cppIVRSystem_IVRSystem_004_GetEyeOutputViewport_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetEyeOutputViewport( params->eEye, params->pnX, params->pnY, params->pnWidth, params->pnHeight );
}

void cppIVRSystem_IVRSystem_004_GetProjectionMatrix( struct cppIVRSystem_IVRSystem_004_GetProjectionMatrix_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->GetProjectionMatrix( params->eEye, params->fNearZ, params->fFarZ, params->eProjType );
}

void cppIVRSystem_IVRSystem_004_GetProjectionRaw( struct cppIVRSystem_IVRSystem_004_GetProjectionRaw_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetProjectionRaw( params->eEye, params->pfLeft, params->pfRight, params->pfTop, params->pfBottom );
}

void cppIVRSystem_IVRSystem_004_ComputeDistortion( struct cppIVRSystem_IVRSystem_004_ComputeDistortion_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->ComputeDistortion( params->eEye, params->fU, params->fV );
}

void cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform( struct cppIVRSystem_IVRSystem_004_GetEyeToHeadTransform_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->GetEyeToHeadTransform( params->eEye );
}

void cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync( struct cppIVRSystem_IVRSystem_004_GetTimeSinceLastVsync_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetTimeSinceLastVsync( params->pfSecondsSinceLastVsync, params->pulFrameCounter );
}

void cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex( struct cppIVRSystem_IVRSystem_004_GetD3D9AdapterIndex_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetD3D9AdapterIndex(  );
}

void cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo( struct cppIVRSystem_IVRSystem_004_GetDXGIOutputInfo_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetDXGIOutputInfo( params->pnAdapterIndex, params->pnAdapterOutputIndex );
}

void cppIVRSystem_IVRSystem_004_AttachToWindow( struct cppIVRSystem_IVRSystem_004_AttachToWindow_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->AttachToWindow( params->hWnd );
}

void cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetDeviceToAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->GetDeviceToAbsoluteTrackingPose( params->eOrigin, params->fPredictedSecondsToPhotonsFromNow, params->pTrackedDevicePoseArray, params->unTrackedDevicePoseArrayCount );
}

void cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose( struct cppIVRSystem_IVRSystem_004_ResetSeatedZeroPose_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->ResetSeatedZeroPose(  );
}

void cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose( struct cppIVRSystem_IVRSystem_004_GetSeatedZeroPoseToStandingAbsoluteTrackingPose_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->GetSeatedZeroPoseToStandingAbsoluteTrackingPose(  );
}

void cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass( struct cppIVRSystem_IVRSystem_004_GetTrackedDeviceClass_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetTrackedDeviceClass( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected( struct cppIVRSystem_IVRSystem_004_IsTrackedDeviceConnected_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->IsTrackedDeviceConnected( params->unDeviceIndex );
}

void cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetBoolTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetBoolTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetFloatTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetFloatTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetInt32TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetInt32TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetUint64TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetUint64TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetMatrix34TrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->GetMatrix34TrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty( struct cppIVRSystem_IVRSystem_004_GetStringTrackedDeviceProperty_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetStringTrackedDeviceProperty( params->unDeviceIndex, params->prop, params->pchValue, params->unBufferSize, params->pError );
}

void cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetPropErrorNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetPropErrorNameFromEnum( params->error );
}

void cppIVRSystem_IVRSystem_004_PollNextEvent( struct cppIVRSystem_IVRSystem_004_PollNextEvent_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->PollNextEvent( params->pEvent );
}

void cppIVRSystem_IVRSystem_004_PollNextEventWithPose( struct cppIVRSystem_IVRSystem_004_PollNextEventWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->PollNextEventWithPose( params->eOrigin, params->pEvent, params->pTrackedDevicePose );
}

void cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetEventTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetEventTypeNameFromEnum( params->eType );
}

void cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh( struct cppIVRSystem_IVRSystem_004_GetHiddenAreaMesh_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    *params->_ret = iface->GetHiddenAreaMesh( params->eEye );
}

void cppIVRSystem_IVRSystem_004_GetControllerState( struct cppIVRSystem_IVRSystem_004_GetControllerState_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_092_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerState( params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr );
    if (params->pControllerState)
        struct_VRControllerState001_t_092_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_004_GetControllerStateWithPose( struct cppIVRSystem_IVRSystem_004_GetControllerStateWithPose_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    VRControllerState_t lin_pControllerState;
    if (params->pControllerState)
        struct_VRControllerState001_t_092_win_to_lin( params->pControllerState, &lin_pControllerState );
    params->_ret = iface->GetControllerStateWithPose( params->eOrigin, params->unControllerDeviceIndex, params->pControllerState ? &lin_pControllerState : nullptr, params->pTrackedDevicePose );
    if (params->pControllerState)
        struct_VRControllerState001_t_092_lin_to_win( &lin_pControllerState, params->pControllerState, -1 );
}

void cppIVRSystem_IVRSystem_004_TriggerHapticPulse( struct cppIVRSystem_IVRSystem_004_TriggerHapticPulse_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->TriggerHapticPulse( params->unControllerDeviceIndex, params->unAxisId, params->usDurationMicroSec );
}

void cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetButtonIdNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetButtonIdNameFromEnum( params->eButtonId );
}

void cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum( struct cppIVRSystem_IVRSystem_004_GetControllerAxisTypeNameFromEnum_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->GetControllerAxisTypeNameFromEnum( params->eAxisType );
}

void cppIVRSystem_IVRSystem_004_CaptureInputFocus( struct cppIVRSystem_IVRSystem_004_CaptureInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->CaptureInputFocus(  );
}

void cppIVRSystem_IVRSystem_004_ReleaseInputFocus( struct cppIVRSystem_IVRSystem_004_ReleaseInputFocus_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    iface->ReleaseInputFocus(  );
}

void cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess( struct cppIVRSystem_IVRSystem_004_IsInputFocusCapturedByAnotherProcess_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->IsInputFocusCapturedByAnotherProcess(  );
}

void cppIVRSystem_IVRSystem_004_DriverDebugRequest( struct cppIVRSystem_IVRSystem_004_DriverDebugRequest_params *params )
{
    struct cppIVRSystem_IVRSystem_004 *iface = (struct cppIVRSystem_IVRSystem_004 *)params->linux_side;
    params->_ret = iface->DriverDebugRequest( params->unDeviceIndex, params->pchRequest, params->pchResponseBuffer, params->unResponseBufferSize );
}

#ifdef __cplusplus
}
#endif
