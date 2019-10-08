#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.4/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
#pragma pack(push, 8)
struct winVREvent_t_104 {
    uint32_t eventType;
    vr::TrackedDeviceIndex_t trackedDeviceIndex;
    float eventAgeSeconds;
    vr::VREvent_Data_t data __attribute__((aligned(8)));
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VREvent_t_104_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVREvent_t_104 *win = (struct winVREvent_t_104 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    win->eventType = lin->eventType;
    win->trackedDeviceIndex = lin->trackedDeviceIndex;
    win->eventAgeSeconds = lin->eventAgeSeconds;
    memcpy(&win->data, &lin->data, sz - (((char*)&win->data) - ((char*)win)));
}

void struct_VREvent_t_104_win_to_lin(void *w, void *l)
{
    struct winVREvent_t_104 *win = (struct winVREvent_t_104 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    lin->eventType = win->eventType;
    lin->trackedDeviceIndex = win->trackedDeviceIndex;
    lin->eventAgeSeconds = win->eventAgeSeconds;
    lin->data = win->data;
}

#pragma pack(push, 8)
struct winVRControllerState001_t_104 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VRControllerState001_t_104_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVRControllerState001_t_104 *win = (struct winVRControllerState001_t_104 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}

void struct_VRControllerState001_t_104_win_to_lin(void *w, void *l)
{
    struct winVRControllerState001_t_104 *win = (struct winVRControllerState001_t_104 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    lin->unPacketNum = win->unPacketNum;
    lin->ulButtonPressed = win->ulButtonPressed;
    lin->ulButtonTouched = win->ulButtonTouched;
    memcpy(lin->rAxis, win->rAxis, sizeof(lin->rAxis));
}

#pragma pack(push, 8)
struct winRenderModel_TextureMap_t_104 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_TextureMap_t_104_lin_to_win(void *l, void *w)
{
    struct winRenderModel_TextureMap_t_104 *win = (struct winRenderModel_TextureMap_t_104 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
}

void struct_RenderModel_TextureMap_t_104_win_to_lin(void *w, void *l)
{
    struct winRenderModel_TextureMap_t_104 *win = (struct winRenderModel_TextureMap_t_104 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    lin->unWidth = win->unWidth;
    lin->unHeight = win->unHeight;
    lin->rubTextureMapData = win->rubTextureMapData;
}

struct winRenderModel_TextureMap_t_104 *struct_RenderModel_TextureMap_t_104_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_104 *win = (struct winRenderModel_TextureMap_t_104 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_104_unwrap(winRenderModel_TextureMap_t_104 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winRenderModel_t_104 {
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    vr::TextureID_t diffuseTextureId;

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_t_104_lin_to_win(void *l, void *w)
{
    struct winRenderModel_t_104 *win = (struct winRenderModel_t_104 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
}

void struct_RenderModel_t_104_win_to_lin(void *w, void *l)
{
    struct winRenderModel_t_104 *win = (struct winRenderModel_t_104 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    lin->rVertexData = win->rVertexData;
    lin->unVertexCount = win->unVertexCount;
    lin->rIndexData = win->rIndexData;
    lin->unTriangleCount = win->unTriangleCount;
    lin->diffuseTextureId = win->diffuseTextureId;
}

struct winRenderModel_t_104 *struct_RenderModel_t_104_wrap(void *l)
{
    struct winRenderModel_t_104 *win = (struct winRenderModel_t_104 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_104_unwrap(winRenderModel_t_104 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}


}
