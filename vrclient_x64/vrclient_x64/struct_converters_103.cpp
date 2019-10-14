#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.3/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
#pragma pack(push, 8)
struct winVREvent_t_103 {
    uint32_t eventType;
    vr::TrackedDeviceIndex_t trackedDeviceIndex;
    float eventAgeSeconds;
    vr::VREvent_Data_t data __attribute__((aligned(8)));
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VREvent_t_103_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVREvent_t_103 *win = (struct winVREvent_t_103 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    win->eventType = lin->eventType;
    win->trackedDeviceIndex = lin->trackedDeviceIndex;
    win->eventAgeSeconds = lin->eventAgeSeconds;
    memcpy(&win->data, &lin->data, sz - (((char*)&win->data) - ((char*)win)));
}

void struct_VREvent_t_103_win_to_lin(void *w, void *l)
{
    struct winVREvent_t_103 *win = (struct winVREvent_t_103 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    lin->eventType = win->eventType;
    lin->trackedDeviceIndex = win->trackedDeviceIndex;
    lin->eventAgeSeconds = win->eventAgeSeconds;
    lin->data = win->data;
}

#pragma pack(push, 8)
struct winVRControllerState001_t_103 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VRControllerState001_t_103_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVRControllerState001_t_103 *win = (struct winVRControllerState001_t_103 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}

void struct_VRControllerState001_t_103_win_to_lin(void *w, void *l)
{
    struct winVRControllerState001_t_103 *win = (struct winVRControllerState001_t_103 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    lin->unPacketNum = win->unPacketNum;
    lin->ulButtonPressed = win->ulButtonPressed;
    lin->ulButtonTouched = win->ulButtonTouched;
    memcpy(lin->rAxis, win->rAxis, sizeof(lin->rAxis));
}

#pragma pack(push, 8)
struct winCompositor_FrameTiming_103 {
    uint32_t m_nSize;
    uint32_t m_nFrameIndex;
    uint32_t m_nNumFramePresents;
    uint32_t m_nNumDroppedFrames;
    uint32_t m_nReprojectionFlags;
    double m_flSystemTimeInSeconds;
    float m_flPreSubmitGpuMs;
    float m_flPostSubmitGpuMs;
    float m_flTotalRenderGpuMs;
    float m_flCompositorRenderGpuMs;
    float m_flCompositorRenderCpuMs;
    float m_flCompositorIdleCpuMs;
    float m_flClientFrameIntervalMs;
    float m_flPresentCallCpuMs;
    float m_flWaitForPresentCpuMs;
    float m_flSubmitFrameMs;
    float m_flWaitGetPosesCalledMs;
    float m_flNewPosesReadyMs;
    float m_flNewFrameReadyMs;
    float m_flCompositorUpdateStartMs;
    float m_flCompositorUpdateEndMs;
    float m_flCompositorRenderStartMs;
    vr::TrackedDevicePose_t m_HmdPose __attribute__((aligned(4)));
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_Compositor_FrameTiming_103_lin_to_win(void *l, void *w)
{
    struct winCompositor_FrameTiming_103 *win = (struct winCompositor_FrameTiming_103 *)w;
    Compositor_FrameTiming *lin = (Compositor_FrameTiming *)l;
    win->m_nSize = sizeof(*win);
    win->m_nFrameIndex = lin->m_nFrameIndex;
    win->m_nNumFramePresents = lin->m_nNumFramePresents;
    win->m_nNumDroppedFrames = lin->m_nNumDroppedFrames;
    win->m_nReprojectionFlags = lin->m_nReprojectionFlags;
    win->m_flSystemTimeInSeconds = lin->m_flSystemTimeInSeconds;
    win->m_flPreSubmitGpuMs = lin->m_flPreSubmitGpuMs;
    win->m_flPostSubmitGpuMs = lin->m_flPostSubmitGpuMs;
    win->m_flTotalRenderGpuMs = lin->m_flTotalRenderGpuMs;
    win->m_flCompositorRenderGpuMs = lin->m_flCompositorRenderGpuMs;
    win->m_flCompositorRenderCpuMs = lin->m_flCompositorRenderCpuMs;
    win->m_flCompositorIdleCpuMs = lin->m_flCompositorIdleCpuMs;
    win->m_flClientFrameIntervalMs = lin->m_flClientFrameIntervalMs;
    win->m_flPresentCallCpuMs = lin->m_flPresentCallCpuMs;
    win->m_flWaitForPresentCpuMs = lin->m_flWaitForPresentCpuMs;
    win->m_flSubmitFrameMs = lin->m_flSubmitFrameMs;
    win->m_flWaitGetPosesCalledMs = lin->m_flWaitGetPosesCalledMs;
    win->m_flNewPosesReadyMs = lin->m_flNewPosesReadyMs;
    win->m_flNewFrameReadyMs = lin->m_flNewFrameReadyMs;
    win->m_flCompositorUpdateStartMs = lin->m_flCompositorUpdateStartMs;
    win->m_flCompositorUpdateEndMs = lin->m_flCompositorUpdateEndMs;
    win->m_flCompositorRenderStartMs = lin->m_flCompositorRenderStartMs;
    win->m_HmdPose = lin->m_HmdPose;
}

void struct_Compositor_FrameTiming_103_win_to_lin(void *w, void *l)
{
    struct winCompositor_FrameTiming_103 *win = (struct winCompositor_FrameTiming_103 *)w;
    Compositor_FrameTiming *lin = (Compositor_FrameTiming *)l;
    lin->m_nSize = sizeof(*lin);
    lin->m_nFrameIndex = win->m_nFrameIndex;
    lin->m_nNumFramePresents = win->m_nNumFramePresents;
    lin->m_nNumDroppedFrames = win->m_nNumDroppedFrames;
    lin->m_nReprojectionFlags = win->m_nReprojectionFlags;
    lin->m_flSystemTimeInSeconds = win->m_flSystemTimeInSeconds;
    lin->m_flPreSubmitGpuMs = win->m_flPreSubmitGpuMs;
    lin->m_flPostSubmitGpuMs = win->m_flPostSubmitGpuMs;
    lin->m_flTotalRenderGpuMs = win->m_flTotalRenderGpuMs;
    lin->m_flCompositorRenderGpuMs = win->m_flCompositorRenderGpuMs;
    lin->m_flCompositorRenderCpuMs = win->m_flCompositorRenderCpuMs;
    lin->m_flCompositorIdleCpuMs = win->m_flCompositorIdleCpuMs;
    lin->m_flClientFrameIntervalMs = win->m_flClientFrameIntervalMs;
    lin->m_flPresentCallCpuMs = win->m_flPresentCallCpuMs;
    lin->m_flWaitForPresentCpuMs = win->m_flWaitForPresentCpuMs;
    lin->m_flSubmitFrameMs = win->m_flSubmitFrameMs;
    lin->m_flWaitGetPosesCalledMs = win->m_flWaitGetPosesCalledMs;
    lin->m_flNewPosesReadyMs = win->m_flNewPosesReadyMs;
    lin->m_flNewFrameReadyMs = win->m_flNewFrameReadyMs;
    lin->m_flCompositorUpdateStartMs = win->m_flCompositorUpdateStartMs;
    lin->m_flCompositorUpdateEndMs = win->m_flCompositorUpdateEndMs;
    lin->m_flCompositorRenderStartMs = win->m_flCompositorRenderStartMs;
    lin->m_HmdPose = win->m_HmdPose;
}

#pragma pack(push, 8)
struct winRenderModel_TextureMap_t_103 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_TextureMap_t_103_lin_to_win(void *l, void *w)
{
    struct winRenderModel_TextureMap_t_103 *win = (struct winRenderModel_TextureMap_t_103 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
}

void struct_RenderModel_TextureMap_t_103_win_to_lin(void *w, void *l)
{
    struct winRenderModel_TextureMap_t_103 *win = (struct winRenderModel_TextureMap_t_103 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    lin->unWidth = win->unWidth;
    lin->unHeight = win->unHeight;
    lin->rubTextureMapData = win->rubTextureMapData;
}

struct winRenderModel_TextureMap_t_103 *struct_RenderModel_TextureMap_t_103_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_103 *win = (struct winRenderModel_TextureMap_t_103 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_103_unwrap(winRenderModel_TextureMap_t_103 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winRenderModel_t_103 {
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    vr::TextureID_t diffuseTextureId;

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_t_103_lin_to_win(void *l, void *w)
{
    struct winRenderModel_t_103 *win = (struct winRenderModel_t_103 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
}

void struct_RenderModel_t_103_win_to_lin(void *w, void *l)
{
    struct winRenderModel_t_103 *win = (struct winRenderModel_t_103 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    lin->rVertexData = win->rVertexData;
    lin->unVertexCount = win->unVertexCount;
    lin->rIndexData = win->rIndexData;
    lin->unTriangleCount = win->unTriangleCount;
    lin->diffuseTextureId = win->diffuseTextureId;
}

struct winRenderModel_t_103 *struct_RenderModel_t_103_wrap(void *l)
{
    struct winRenderModel_t_103 *win = (struct winRenderModel_t_103 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_103_unwrap(winRenderModel_t_103 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}


}
