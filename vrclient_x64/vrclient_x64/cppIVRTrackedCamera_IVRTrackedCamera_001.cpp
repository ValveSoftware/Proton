#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_001.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->HasCamera((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraFirmwareDescription((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (char *)params->pBuffer, (uint32_t)params->nBufferLen);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraFrameDimensions((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::ECameraVideoStreamFormat)params->nVideoStreamFormat, (uint32_t *)params->pWidth, (uint32_t *)params->pHeight);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->SetCameraVideoStreamFormat((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::ECameraVideoStreamFormat)params->nVideoStreamFormat);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraVideoStreamFormat((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming( struct cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->EnableCameraForStreaming((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (bool)params->bEnable);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->StartVideoStream((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->StopVideoStream((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->IsVideoStreamActive((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamElapsedTime((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamFrame((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params *params )
{
    CameraVideoStreamFrame_t lin_pFrameImage;
    if (params->pFrameImage)
        struct_CameraVideoStreamFrame_t_0914_win_to_lin( params->pFrameImage, &lin_pFrameImage );
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamFrame((vr::TrackedDeviceIndex_t)params->nDeviceIndex, params->pFrameImage ? &lin_pFrameImage : nullptr);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure( struct cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->SetAutoExposure((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (bool)params->bEnable);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->PauseVideoStream((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream( struct cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ResumeVideoStream((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused( struct cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->IsVideoStreamPaused((vr::TrackedDeviceIndex_t)params->nDeviceIndex);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraDistortion((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (float)params->flInputU, (float)params->flInputV, (float *)params->pflOutputU, (float *)params->pflOutputV);
}

void cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (float)params->flWidthPixels, (float)params->flHeightPixels, (float)params->flZNear, (float)params->flZFar, (vr::HmdMatrix44_t *)params->pProjection);
}

#ifdef __cplusplus
}
#endif
