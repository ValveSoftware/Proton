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
bool cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->HasCamera((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, char * pBuffer, uint32_t nBufferLen)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraFirmwareDescription((vr::TrackedDeviceIndex_t)nDeviceIndex, (char *)pBuffer, (uint32_t)nBufferLen);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat, uint32_t * pWidth, uint32_t * pHeight)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraFrameDimensions((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::ECameraVideoStreamFormat)nVideoStreamFormat, (uint32_t *)pWidth, (uint32_t *)pHeight);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat)
{
    return ((IVRTrackedCamera*)linux_side)->SetCameraVideoStreamFormat((vr::TrackedDeviceIndex_t)nDeviceIndex, (vr::ECameraVideoStreamFormat)nVideoStreamFormat);
}

vr::ECameraVideoStreamFormat cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraVideoStreamFormat((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    return ((IVRTrackedCamera*)linux_side)->EnableCameraForStreaming((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool)bEnable);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->StartVideoStream((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->StopVideoStream((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->IsVideoStreamActive((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

float cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->GetVideoStreamElapsedTime((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

const vr::CameraVideoStreamFrame_t * cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->GetVideoStreamFrame((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, CameraVideoStreamFrame_t * pFrameImage)
{
    CameraVideoStreamFrame_t lin;
    bool _ret;
    if(pFrameImage)
        struct_CameraVideoStreamFrame_t_0914_win_to_lin(pFrameImage, &lin);
    _ret = ((IVRTrackedCamera*)linux_side)->ReleaseVideoStreamFrame((vr::TrackedDeviceIndex_t)nDeviceIndex, pFrameImage ? &lin : nullptr);
    return _ret;
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    return ((IVRTrackedCamera*)linux_side)->SetAutoExposure((vr::TrackedDeviceIndex_t)nDeviceIndex, (bool)bEnable);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->PauseVideoStream((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->ResumeVideoStream((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(void *linux_side, TrackedDeviceIndex_t nDeviceIndex)
{
    return ((IVRTrackedCamera*)linux_side)->IsVideoStreamPaused((vr::TrackedDeviceIndex_t)nDeviceIndex);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, float flInputU, float flInputV, float * pflOutputU, float * pflOutputV)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraDistortion((vr::TrackedDeviceIndex_t)nDeviceIndex, (float)flInputU, (float)flInputV, (float *)pflOutputU, (float *)pflOutputV);
}

bool cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(void *linux_side, TrackedDeviceIndex_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    return ((IVRTrackedCamera*)linux_side)->GetCameraProjection((vr::TrackedDeviceIndex_t)nDeviceIndex, (float)flWidthPixels, (float)flHeightPixels, (float)flZNear, (float)flZFar, (vr::HmdMatrix44_t *)pProjection);
}

#ifdef __cplusplus
}
#endif
