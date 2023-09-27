#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.0/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_002.h"
#ifdef __cplusplus
extern "C" {
#endif
void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)params->eCameraError);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera( struct cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->HasCamera((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (bool *)params->pHasCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (uint32_t *)params->pnWidth, (uint32_t *)params->pnHeight, (uint32_t *)params->pnFrameBufferSize);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraIntrinisics((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (vr::HmdVector2_t *)params->pFocalLength, (vr::HmdVector2_t *)params->pCenter);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::EVRTrackedCameraFrameType)params->eFrameType, (float)params->flZNear, (float)params->flZFar, (vr::HmdMatrix44_t *)params->pProjection);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)params->nDeviceIndex, (vr::TrackedCameraHandle_t *)params->pHandle);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService( struct cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)params->hTrackedCamera);
}

void cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer( struct cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params *params )
{
    params->_ret = ((IVRTrackedCamera*)params->linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)params->hTrackedCamera, (vr::EVRTrackedCameraFrameType)params->eFrameType, (void *)params->pFrameBuffer, (uint32_t)params->nFrameBufferSize, (vr::CameraVideoStreamFrameHeader_t *)params->pFrameHeader, (uint32_t)params->nFrameHeaderSize);
}

#ifdef __cplusplus
}
#endif
