#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.8.19/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_006.h"
#ifdef __cplusplus
extern "C" {
#endif
const char * cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum(void *linux_side, EVRTrackedCameraError eCameraError)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)eCameraError);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    return ((IVRTrackedCamera*)linux_side)->HasCamera((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool *)pHasCamera);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (uint32_t *)pnWidth, (uint32_t *)pnHeight, (uint32_t *)pnFrameBufferSize);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraIntrinsics((vr::TrackedDeviceIndex_t)nDeviceIndex, (uint32_t)nCameraIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::HmdVector2_t *)pFocalLength, (vr::HmdVector2_t *)pCenter);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)nDeviceIndex, (uint32_t)nCameraIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (float)flZNear, (float)flZFar, (vr::HmdMatrix44_t *)pProjection);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    return ((IVRTrackedCamera*)linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::TrackedCameraHandle_t *)pHandle);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService(void *linux_side, TrackedCameraHandle_t hTrackedCamera)
{
    return ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)hTrackedCamera);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1819 * pFrameHeader, uint32_t nFrameHeaderSize)
{
    CameraVideoStreamFrameHeader_t lin;
    vr::EVRTrackedCameraError _ret;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_win_to_lin(pFrameHeader, &lin);
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pFrameBuffer, (uint32_t)nFrameBufferSize, pFrameHeader ? &lin : nullptr, nFrameHeaderSize ? sizeof(lin) : 0);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight)
{
    return ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::VRTextureBounds_t *)pTextureBounds, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1819 * pFrameHeader, uint32_t nFrameHeaderSize)
{
    CameraVideoStreamFrameHeader_t lin;
    vr::EVRTrackedCameraError _ret;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_win_to_lin(pFrameHeader, &lin);
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureD3D11((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView, pFrameHeader ? &lin : nullptr, nFrameHeaderSize ? sizeof(lin) : 0);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, winCameraVideoStreamFrameHeader_t_1819 * pFrameHeader, uint32_t nFrameHeaderSize)
{
    CameraVideoStreamFrameHeader_t lin;
    vr::EVRTrackedCameraError _ret;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_win_to_lin(pFrameHeader, &lin);
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::glUInt_t *)pglTextureId, pFrameHeader ? &lin : nullptr, nFrameHeaderSize ? sizeof(lin) : 0);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1819_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    return ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::glUInt_t)glTextureId);
}

void cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace(void *linux_side, ETrackingUniverseOrigin eUniverse)
{
    ((IVRTrackedCamera*)linux_side)->SetCameraTrackingSpace((vr::ETrackingUniverseOrigin)eUniverse);
}

vr::ETrackingUniverseOrigin cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace(void *linux_side)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraTrackingSpace();
}

#ifdef __cplusplus
}
#endif
