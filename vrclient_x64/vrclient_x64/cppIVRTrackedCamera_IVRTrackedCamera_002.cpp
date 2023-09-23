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
const char * cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(void *linux_side, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)eCameraError);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->HasCamera((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool *)pHasCamera);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (uint32_t *)pnWidth, (uint32_t *)pnHeight, (uint32_t *)pnFrameBufferSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraIntrinisics((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::HmdVector2_t *)pFocalLength, (vr::HmdVector2_t *)pCenter);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (float)flZNear, (float)flZFar, (vr::HmdMatrix44_t *)pProjection);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::TrackedCameraHandle_t *)pHandle);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(void *linux_side, TrackedCameraHandle_t hTrackedCamera)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)hTrackedCamera);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pFrameBuffer, (uint32_t)nFrameBufferSize, (vr::CameraVideoStreamFrameHeader_t *)pFrameHeader, (uint32_t)nFrameHeaderSize);
    return _ret;
}

#ifdef __cplusplus
}
#endif
