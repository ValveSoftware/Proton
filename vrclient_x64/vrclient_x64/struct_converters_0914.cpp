#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.14/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
#pragma pack(push, 8)
struct winVRControllerState001_t_0914 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VRControllerState001_t_0914_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVRControllerState001_t_0914 *win = (struct winVRControllerState001_t_0914 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}

void struct_VRControllerState001_t_0914_win_to_lin(void *w, void *l)
{
    struct winVRControllerState001_t_0914 *win = (struct winVRControllerState001_t_0914 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    lin->unPacketNum = win->unPacketNum;
    lin->ulButtonPressed = win->ulButtonPressed;
    lin->ulButtonTouched = win->ulButtonTouched;
    memcpy(lin->rAxis, win->rAxis, sizeof(lin->rAxis));
}

#pragma pack(push, 8)
struct winCameraVideoStreamFrame_t_0914 {
    vr::ECameraVideoStreamFormat m_nStreamFormat;
    uint32_t m_nWidth;
    uint32_t m_nHeight;
    uint32_t m_nImageDataSize;
    uint32_t m_nFrameSequence;
    uint32_t m_nISPFrameTimeStamp;
    uint32_t m_nISPReferenceTimeStamp;
    uint32_t m_nSyncCounter;
    uint32_t m_nExposureTime;
    uint32_t m_nBufferIndex;
    uint32_t m_nBufferCount;
    double m_flFrameElapsedTime;
    double m_flFrameCaptureTime;
    uint64_t m_nFrameCaptureTicks;
    bool m_bPoseIsValid;
    vr::HmdMatrix34_t m_matDeviceToAbsoluteTracking __attribute__((aligned(4)));
    float m_Pad[4];
    void * m_pImageData;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_CameraVideoStreamFrame_t_0914_lin_to_win(void *l, void *w)
{
    struct winCameraVideoStreamFrame_t_0914 *win = (struct winCameraVideoStreamFrame_t_0914 *)w;
    CameraVideoStreamFrame_t *lin = (CameraVideoStreamFrame_t *)l;
    win->m_nStreamFormat = lin->m_nStreamFormat;
    win->m_nWidth = lin->m_nWidth;
    win->m_nHeight = lin->m_nHeight;
    win->m_nImageDataSize = lin->m_nImageDataSize;
    win->m_nFrameSequence = lin->m_nFrameSequence;
    win->m_nISPFrameTimeStamp = lin->m_nISPFrameTimeStamp;
    win->m_nISPReferenceTimeStamp = lin->m_nISPReferenceTimeStamp;
    win->m_nSyncCounter = lin->m_nSyncCounter;
    win->m_nExposureTime = lin->m_nExposureTime;
    win->m_nBufferIndex = lin->m_nBufferIndex;
    win->m_nBufferCount = lin->m_nBufferCount;
    win->m_flFrameElapsedTime = lin->m_flFrameElapsedTime;
    win->m_flFrameCaptureTime = lin->m_flFrameCaptureTime;
    win->m_nFrameCaptureTicks = lin->m_nFrameCaptureTicks;
    win->m_bPoseIsValid = lin->m_bPoseIsValid;
    win->m_matDeviceToAbsoluteTracking = lin->m_matDeviceToAbsoluteTracking;
    memcpy(win->m_Pad, lin->m_Pad, sizeof(win->m_Pad));
    win->m_pImageData = lin->m_pImageData;
}

void struct_CameraVideoStreamFrame_t_0914_win_to_lin(void *w, void *l)
{
    struct winCameraVideoStreamFrame_t_0914 *win = (struct winCameraVideoStreamFrame_t_0914 *)w;
    CameraVideoStreamFrame_t *lin = (CameraVideoStreamFrame_t *)l;
    lin->m_nStreamFormat = win->m_nStreamFormat;
    lin->m_nWidth = win->m_nWidth;
    lin->m_nHeight = win->m_nHeight;
    lin->m_nImageDataSize = win->m_nImageDataSize;
    lin->m_nFrameSequence = win->m_nFrameSequence;
    lin->m_nISPFrameTimeStamp = win->m_nISPFrameTimeStamp;
    lin->m_nISPReferenceTimeStamp = win->m_nISPReferenceTimeStamp;
    lin->m_nSyncCounter = win->m_nSyncCounter;
    lin->m_nExposureTime = win->m_nExposureTime;
    lin->m_nBufferIndex = win->m_nBufferIndex;
    lin->m_nBufferCount = win->m_nBufferCount;
    lin->m_flFrameElapsedTime = win->m_flFrameElapsedTime;
    lin->m_flFrameCaptureTime = win->m_flFrameCaptureTime;
    lin->m_nFrameCaptureTicks = win->m_nFrameCaptureTicks;
    lin->m_bPoseIsValid = win->m_bPoseIsValid;
    lin->m_matDeviceToAbsoluteTracking = win->m_matDeviceToAbsoluteTracking;
    memcpy(lin->m_Pad, win->m_Pad, sizeof(lin->m_Pad));
    lin->m_pImageData = win->m_pImageData;
}

#pragma pack(push, 8)
struct winCompositor_FrameTiming_0914 {
    uint32_t size;
    double frameStart;
    float frameVSync;
    uint32_t droppedFrames;
    uint32_t frameIndex;
    vr::TrackedDevicePose_t pose __attribute__((aligned(4)));
    float prediction;
    float m_flFrameIntervalMs;
    float m_flSceneRenderCpuMs;
    float m_flSceneRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flPresentCallCpuMs;
    float m_flRunningStartMs;
    float m_flHandoffStartMs;
    float m_flHandoffEndMs;
    float m_flCompositorUpdateCpuMs;
    uint32_t m_nPresents;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_Compositor_FrameTiming_0914_lin_to_win(void *l, void *w)
{
    struct winCompositor_FrameTiming_0914 *win = (struct winCompositor_FrameTiming_0914 *)w;
    Compositor_FrameTiming *lin = (Compositor_FrameTiming *)l;
    win->size = sizeof(*win);
    win->frameStart = lin->frameStart;
    win->frameVSync = lin->frameVSync;
    win->droppedFrames = lin->droppedFrames;
    win->frameIndex = lin->frameIndex;
    win->pose = lin->pose;
    win->prediction = lin->prediction;
    win->m_flFrameIntervalMs = lin->m_flFrameIntervalMs;
    win->m_flSceneRenderCpuMs = lin->m_flSceneRenderCpuMs;
    win->m_flSceneRenderGpuMs = lin->m_flSceneRenderGpuMs;
    win->m_flCompositorRenderCpuMs = lin->m_flCompositorRenderCpuMs;
    win->m_flCompositorRenderGpuMs = lin->m_flCompositorRenderGpuMs;
    win->m_flPresentCallCpuMs = lin->m_flPresentCallCpuMs;
    win->m_flRunningStartMs = lin->m_flRunningStartMs;
    win->m_flHandoffStartMs = lin->m_flHandoffStartMs;
    win->m_flHandoffEndMs = lin->m_flHandoffEndMs;
    win->m_flCompositorUpdateCpuMs = lin->m_flCompositorUpdateCpuMs;
    win->m_nPresents = lin->m_nPresents;
}

void struct_Compositor_FrameTiming_0914_win_to_lin(void *w, void *l)
{
    struct winCompositor_FrameTiming_0914 *win = (struct winCompositor_FrameTiming_0914 *)w;
    Compositor_FrameTiming *lin = (Compositor_FrameTiming *)l;
    lin->size = sizeof(*lin);
    lin->frameStart = win->frameStart;
    lin->frameVSync = win->frameVSync;
    lin->droppedFrames = win->droppedFrames;
    lin->frameIndex = win->frameIndex;
    lin->pose = win->pose;
    lin->prediction = win->prediction;
    lin->m_flFrameIntervalMs = win->m_flFrameIntervalMs;
    lin->m_flSceneRenderCpuMs = win->m_flSceneRenderCpuMs;
    lin->m_flSceneRenderGpuMs = win->m_flSceneRenderGpuMs;
    lin->m_flCompositorRenderCpuMs = win->m_flCompositorRenderCpuMs;
    lin->m_flCompositorRenderGpuMs = win->m_flCompositorRenderGpuMs;
    lin->m_flPresentCallCpuMs = win->m_flPresentCallCpuMs;
    lin->m_flRunningStartMs = win->m_flRunningStartMs;
    lin->m_flHandoffStartMs = win->m_flHandoffStartMs;
    lin->m_flHandoffEndMs = win->m_flHandoffEndMs;
    lin->m_flCompositorUpdateCpuMs = win->m_flCompositorUpdateCpuMs;
    lin->m_nPresents = win->m_nPresents;
}

#pragma pack(push, 8)
struct winRenderModel_TextureMap_t_0914 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_TextureMap_t_0914_lin_to_win(void *l, void *w)
{
    struct winRenderModel_TextureMap_t_0914 *win = (struct winRenderModel_TextureMap_t_0914 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
}

void struct_RenderModel_TextureMap_t_0914_win_to_lin(void *w, void *l)
{
    struct winRenderModel_TextureMap_t_0914 *win = (struct winRenderModel_TextureMap_t_0914 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    lin->unWidth = win->unWidth;
    lin->unHeight = win->unHeight;
    lin->rubTextureMapData = win->rubTextureMapData;
}

struct winRenderModel_TextureMap_t_0914 *struct_RenderModel_TextureMap_t_0914_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_0914 *win = (struct winRenderModel_TextureMap_t_0914 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_0914_unwrap(winRenderModel_TextureMap_t_0914 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winRenderModel_t_0914 {
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    vr::TextureID_t diffuseTextureId;

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_t_0914_lin_to_win(void *l, void *w)
{
    struct winRenderModel_t_0914 *win = (struct winRenderModel_t_0914 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
}

void struct_RenderModel_t_0914_win_to_lin(void *w, void *l)
{
    struct winRenderModel_t_0914 *win = (struct winRenderModel_t_0914 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    lin->rVertexData = win->rVertexData;
    lin->unVertexCount = win->unVertexCount;
    lin->rIndexData = win->rIndexData;
    lin->unTriangleCount = win->unTriangleCount;
    lin->diffuseTextureId = win->diffuseTextureId;
}

struct winRenderModel_t_0914 *struct_RenderModel_t_0914_wrap(void *l)
{
    struct winRenderModel_t_0914 *win = (struct winRenderModel_t_0914 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_0914_unwrap(winRenderModel_t_0914 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}


}
