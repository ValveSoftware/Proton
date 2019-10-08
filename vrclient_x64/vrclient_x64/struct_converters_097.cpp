#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v0.9.7/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
#pragma pack(push, 8)
struct winRenderModel_TextureMap_t_097 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_TextureMap_t_097_lin_to_win(void *l, void *w)
{
    struct winRenderModel_TextureMap_t_097 *win = (struct winRenderModel_TextureMap_t_097 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
}

void struct_RenderModel_TextureMap_t_097_win_to_lin(void *w, void *l)
{
    struct winRenderModel_TextureMap_t_097 *win = (struct winRenderModel_TextureMap_t_097 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    lin->unWidth = win->unWidth;
    lin->unHeight = win->unHeight;
    lin->rubTextureMapData = win->rubTextureMapData;
}

struct winRenderModel_TextureMap_t_097 *struct_RenderModel_TextureMap_t_097_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_097 *win = (struct winRenderModel_TextureMap_t_097 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_097_unwrap(winRenderModel_TextureMap_t_097 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winRenderModel_t_097 {
    uint64_t ulInternalHandle;
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    winRenderModel_TextureMap_t_097 diffuseTexture __attribute__((aligned(4)));

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_t_097_lin_to_win(void *l, void *w)
{
    struct winRenderModel_t_097 *win = (struct winRenderModel_t_097 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    win->ulInternalHandle = lin->ulInternalHandle;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    struct_RenderModel_TextureMap_t_097_lin_to_win(&lin->diffuseTexture, &win->diffuseTexture);
}

void struct_RenderModel_t_097_win_to_lin(void *w, void *l)
{
    struct winRenderModel_t_097 *win = (struct winRenderModel_t_097 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    lin->ulInternalHandle = win->ulInternalHandle;
    lin->rVertexData = win->rVertexData;
    lin->unVertexCount = win->unVertexCount;
    lin->rIndexData = win->rIndexData;
    lin->unTriangleCount = win->unTriangleCount;
    struct_RenderModel_TextureMap_t_097_win_to_lin(&win->diffuseTexture, &lin->diffuseTexture);
}

struct winRenderModel_t_097 *struct_RenderModel_t_097_wrap(void *l)
{
    struct winRenderModel_t_097 *win = (struct winRenderModel_t_097 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->ulInternalHandle = lin->ulInternalHandle;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    struct_RenderModel_TextureMap_t_097_lin_to_win(&lin->diffuseTexture, &win->diffuseTexture);
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_097_unwrap(winRenderModel_t_097 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winVRControllerState001_t_097 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VRControllerState001_t_097_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVRControllerState001_t_097 *win = (struct winVRControllerState001_t_097 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}

void struct_VRControllerState001_t_097_win_to_lin(void *w, void *l)
{
    struct winVRControllerState001_t_097 *win = (struct winVRControllerState001_t_097 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    lin->unPacketNum = win->unPacketNum;
    lin->ulButtonPressed = win->ulButtonPressed;
    lin->ulButtonTouched = win->ulButtonTouched;
    memcpy(lin->rAxis, win->rAxis, sizeof(lin->rAxis));
}

#pragma pack(push, 8)
struct winCompositor_FrameTiming_097 {
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
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_Compositor_FrameTiming_097_lin_to_win(void *l, void *w)
{
    struct winCompositor_FrameTiming_097 *win = (struct winCompositor_FrameTiming_097 *)w;
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
}

void struct_Compositor_FrameTiming_097_win_to_lin(void *w, void *l)
{
    struct winCompositor_FrameTiming_097 *win = (struct winCompositor_FrameTiming_097 *)w;
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
}


}
