#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.6.10/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRTrackedCamera_IVRTrackedCamera_005.h"
#ifdef __cplusplus
extern "C" {
#endif
const char * cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum(void *linux_side, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraErrorNameFromEnum((vr::EVRTrackedCameraError)eCameraError);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->HasCamera((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool *)pHasCamera);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraFrameSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (uint32_t *)pnWidth, (uint32_t *)pnHeight, (uint32_t *)pnFrameBufferSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraIntrinsics((vr::TrackedDeviceIndex_t)nDeviceIndex, (uint32_t)nCameraIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::HmdVector2_t *)pFocalLength, (vr::HmdVector2_t *)pCenter);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)nDeviceIndex, (uint32_t)nCameraIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (float)flZNear, (float)flZFar, (vr::HmdMatrix44_t *)pProjection);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->AcquireVideoStreamingService((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::TrackedCameraHandle_t *)pHandle);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService(void *linux_side, TrackedCameraHandle_t hTrackedCamera)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamingService((vr::TrackedCameraHandle_t)hTrackedCamera);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    vr::EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamFrameBuffer((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pFrameBuffer, (uint32_t)nFrameBufferSize, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureSize((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::VRTextureBounds_t *)pTextureBounds, (uint32_t *)pnWidth, (uint32_t *)pnHeight);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    vr::EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureD3D11((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (void *)pD3D11DeviceOrResource, (void **)ppD3D11ShaderResourceView, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    vr::EVRTrackedCameraError _ret;
    CameraVideoStreamFrameHeader_t lin;
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_win_to_lin(pFrameHeader, &lin);
    uint32_t lin_nFrameHeaderSize = nFrameHeaderSize ? sizeof(lin) : 0;
    _ret = ((IVRTrackedCamera*)linux_side)->GetVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::EVRTrackedCameraFrameType)eFrameType, (vr::glUInt_t *)pglTextureId, pFrameHeader ? &lin : nullptr, lin_nFrameHeaderSize);
    if(pFrameHeader)
        struct_CameraVideoStreamFrameHeader_t_1610_lin_to_win(&lin, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

vr::EVRTrackedCameraError cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL(void *linux_side, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    vr::EVRTrackedCameraError _ret;
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamTextureGL((vr::TrackedCameraHandle_t)hTrackedCamera, (vr::glUInt_t)glTextureId);
    return _ret;
}

#ifdef __cplusplus
}
#endif
