#include <stdlib.h>
#include <string.h>
#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.8.19/openvr.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
#pragma pack(push, 8)
struct winVREvent_t_1819 {
    uint32_t eventType;
    vr::TrackedDeviceIndex_t trackedDeviceIndex;
    float eventAgeSeconds;
    vr::VREvent_Data_t data __attribute__((aligned(8)));
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VREvent_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVREvent_t_1819 *win = (struct winVREvent_t_1819 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    win->eventType = lin->eventType;
    win->trackedDeviceIndex = lin->trackedDeviceIndex;
    win->eventAgeSeconds = lin->eventAgeSeconds;
    memcpy(&win->data, &lin->data, sz - (((char*)&win->data) - ((char*)win)));
}

void struct_VREvent_t_1819_win_to_lin(void *w, void *l)
{
    struct winVREvent_t_1819 *win = (struct winVREvent_t_1819 *)w;
    VREvent_t *lin = (VREvent_t *)l;
    lin->eventType = win->eventType;
    lin->trackedDeviceIndex = win->trackedDeviceIndex;
    lin->eventAgeSeconds = win->eventAgeSeconds;
    lin->data = win->data;
}

#pragma pack(push, 8)
struct winVRControllerState001_t_1819 {
    uint32_t unPacketNum;
    uint64_t ulButtonPressed;
    uint64_t ulButtonTouched;
    vr::VRControllerAxis_t rAxis[5];
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_VRControllerState001_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winVRControllerState001_t_1819 *win = (struct winVRControllerState001_t_1819 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    win->unPacketNum = lin->unPacketNum;
    win->ulButtonPressed = lin->ulButtonPressed;
    win->ulButtonTouched = lin->ulButtonTouched;
    memcpy(win->rAxis, lin->rAxis, sizeof(win->rAxis));
}

void struct_VRControllerState001_t_1819_win_to_lin(void *w, void *l)
{
    struct winVRControllerState001_t_1819 *win = (struct winVRControllerState001_t_1819 *)w;
    VRControllerState001_t *lin = (VRControllerState001_t *)l;
    lin->unPacketNum = win->unPacketNum;
    lin->ulButtonPressed = win->ulButtonPressed;
    lin->ulButtonTouched = win->ulButtonTouched;
    memcpy(lin->rAxis, win->rAxis, sizeof(lin->rAxis));
}

#pragma pack(push, 8)
struct winCameraVideoStreamFrameHeader_t_1819 {
    vr::EVRTrackedCameraFrameType eFrameType;
    uint32_t nWidth;
    uint32_t nHeight;
    uint32_t nBytesPerPixel;
    uint32_t nFrameSequence;
    vr::TrackedDevicePose_t trackedDevicePose __attribute__((aligned(4)));
    uint64_t ulFrameExposureTime;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_CameraVideoStreamFrameHeader_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winCameraVideoStreamFrameHeader_t_1819 *win = (struct winCameraVideoStreamFrameHeader_t_1819 *)w;
    CameraVideoStreamFrameHeader_t *lin = (CameraVideoStreamFrameHeader_t *)l;
    win->eFrameType = lin->eFrameType;
    win->nWidth = lin->nWidth;
    win->nHeight = lin->nHeight;
    win->nBytesPerPixel = lin->nBytesPerPixel;
    win->nFrameSequence = lin->nFrameSequence;
    win->trackedDevicePose = lin->trackedDevicePose;
    win->ulFrameExposureTime = lin->ulFrameExposureTime;
}

void struct_CameraVideoStreamFrameHeader_t_1819_win_to_lin(void *w, void *l)
{
    struct winCameraVideoStreamFrameHeader_t_1819 *win = (struct winCameraVideoStreamFrameHeader_t_1819 *)w;
    CameraVideoStreamFrameHeader_t *lin = (CameraVideoStreamFrameHeader_t *)l;
    lin->eFrameType = win->eFrameType;
    lin->nWidth = win->nWidth;
    lin->nHeight = win->nHeight;
    lin->nBytesPerPixel = win->nBytesPerPixel;
    lin->nFrameSequence = win->nFrameSequence;
    lin->trackedDevicePose = win->trackedDevicePose;
    lin->ulFrameExposureTime = win->ulFrameExposureTime;
}

#pragma pack(push, 8)
struct winRenderModel_TextureMap_t_1819 {
    uint16_t unWidth;
    uint16_t unHeight;
    const uint8_t * rubTextureMapData;

    RenderModel_TextureMap_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_TextureMap_t_1819_lin_to_win(void *l, void *w)
{
    struct winRenderModel_TextureMap_t_1819 *win = (struct winRenderModel_TextureMap_t_1819 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
}

void struct_RenderModel_TextureMap_t_1819_win_to_lin(void *w, void *l)
{
    struct winRenderModel_TextureMap_t_1819 *win = (struct winRenderModel_TextureMap_t_1819 *)w;
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    lin->unWidth = win->unWidth;
    lin->unHeight = win->unHeight;
    lin->rubTextureMapData = win->rubTextureMapData;
}

struct winRenderModel_TextureMap_t_1819 *struct_RenderModel_TextureMap_t_1819_wrap(void *l)
{
    struct winRenderModel_TextureMap_t_1819 *win = (struct winRenderModel_TextureMap_t_1819 *)malloc(sizeof(*win));
    RenderModel_TextureMap_t *lin = (RenderModel_TextureMap_t *)l;
    win->unWidth = lin->unWidth;
    win->unHeight = lin->unHeight;
    win->rubTextureMapData = lin->rubTextureMapData;
    win->linux_side = lin;
    return win;
}

struct RenderModel_TextureMap_t *struct_RenderModel_TextureMap_t_1819_unwrap(winRenderModel_TextureMap_t_1819 *w)
{
    RenderModel_TextureMap_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winRenderModel_t_1819 {
    const vr::RenderModel_Vertex_t * rVertexData;
    uint32_t unVertexCount;
    const uint16_t * rIndexData;
    uint32_t unTriangleCount;
    vr::TextureID_t diffuseTextureId;

    RenderModel_t *linux_side;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_RenderModel_t_1819_lin_to_win(void *l, void *w)
{
    struct winRenderModel_t_1819 *win = (struct winRenderModel_t_1819 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
}

void struct_RenderModel_t_1819_win_to_lin(void *w, void *l)
{
    struct winRenderModel_t_1819 *win = (struct winRenderModel_t_1819 *)w;
    RenderModel_t *lin = (RenderModel_t *)l;
    lin->rVertexData = win->rVertexData;
    lin->unVertexCount = win->unVertexCount;
    lin->rIndexData = win->rIndexData;
    lin->unTriangleCount = win->unTriangleCount;
    lin->diffuseTextureId = win->diffuseTextureId;
}

struct winRenderModel_t_1819 *struct_RenderModel_t_1819_wrap(void *l)
{
    struct winRenderModel_t_1819 *win = (struct winRenderModel_t_1819 *)malloc(sizeof(*win));
    RenderModel_t *lin = (RenderModel_t *)l;
    win->rVertexData = lin->rVertexData;
    win->unVertexCount = lin->unVertexCount;
    win->rIndexData = lin->rIndexData;
    win->unTriangleCount = lin->unTriangleCount;
    win->diffuseTextureId = lin->diffuseTextureId;
    win->linux_side = lin;
    return win;
}

struct RenderModel_t *struct_RenderModel_t_1819_unwrap(winRenderModel_t_1819 *w)
{
    RenderModel_t *ret = w->linux_side;
    free(w);
    return ret;
}

#pragma pack(push, 8)
struct winInputAnalogActionData_t_1819 {
    bool bActive;
    vr::VRInputValueHandle_t activeOrigin;
    float x;
    float y;
    float z;
    float deltaX;
    float deltaY;
    float deltaZ;
    float fUpdateTime;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_InputAnalogActionData_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winInputAnalogActionData_t_1819 *win = (struct winInputAnalogActionData_t_1819 *)w;
    InputAnalogActionData_t *lin = (InputAnalogActionData_t *)l;
    win->bActive = lin->bActive;
    win->activeOrigin = lin->activeOrigin;
    win->x = lin->x;
    win->y = lin->y;
    win->z = lin->z;
    win->deltaX = lin->deltaX;
    win->deltaY = lin->deltaY;
    win->deltaZ = lin->deltaZ;
    win->fUpdateTime = lin->fUpdateTime;
}

void struct_InputAnalogActionData_t_1819_win_to_lin(void *w, void *l)
{
    struct winInputAnalogActionData_t_1819 *win = (struct winInputAnalogActionData_t_1819 *)w;
    InputAnalogActionData_t *lin = (InputAnalogActionData_t *)l;
    lin->bActive = win->bActive;
    lin->activeOrigin = win->activeOrigin;
    lin->x = win->x;
    lin->y = win->y;
    lin->z = win->z;
    lin->deltaX = win->deltaX;
    lin->deltaY = win->deltaY;
    lin->deltaZ = win->deltaZ;
    lin->fUpdateTime = win->fUpdateTime;
}

#pragma pack(push, 8)
struct winInputDigitalActionData_t_1819 {
    bool bActive;
    vr::VRInputValueHandle_t activeOrigin;
    bool bState;
    bool bChanged;
    float fUpdateTime;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_InputDigitalActionData_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winInputDigitalActionData_t_1819 *win = (struct winInputDigitalActionData_t_1819 *)w;
    InputDigitalActionData_t *lin = (InputDigitalActionData_t *)l;
    win->bActive = lin->bActive;
    win->activeOrigin = lin->activeOrigin;
    win->bState = lin->bState;
    win->bChanged = lin->bChanged;
    win->fUpdateTime = lin->fUpdateTime;
}

void struct_InputDigitalActionData_t_1819_win_to_lin(void *w, void *l)
{
    struct winInputDigitalActionData_t_1819 *win = (struct winInputDigitalActionData_t_1819 *)w;
    InputDigitalActionData_t *lin = (InputDigitalActionData_t *)l;
    lin->bActive = win->bActive;
    lin->activeOrigin = win->activeOrigin;
    lin->bState = win->bState;
    lin->bChanged = win->bChanged;
    lin->fUpdateTime = win->fUpdateTime;
}

#pragma pack(push, 8)
struct winInputPoseActionData_t_1819 {
    bool bActive;
    vr::VRInputValueHandle_t activeOrigin;
    vr::TrackedDevicePose_t pose __attribute__((aligned(4)));
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_InputPoseActionData_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winInputPoseActionData_t_1819 *win = (struct winInputPoseActionData_t_1819 *)w;
    InputPoseActionData_t *lin = (InputPoseActionData_t *)l;
    win->bActive = lin->bActive;
    win->activeOrigin = lin->activeOrigin;
    win->pose = lin->pose;
}

void struct_InputPoseActionData_t_1819_win_to_lin(void *w, void *l)
{
    struct winInputPoseActionData_t_1819 *win = (struct winInputPoseActionData_t_1819 *)w;
    InputPoseActionData_t *lin = (InputPoseActionData_t *)l;
    lin->bActive = win->bActive;
    lin->activeOrigin = win->activeOrigin;
    lin->pose = win->pose;
}

#pragma pack(push, 8)
struct winInputSkeletalActionData_t_1819 {
    bool bActive;
    vr::VRInputValueHandle_t activeOrigin;
}  __attribute__ ((ms_struct));
#pragma pack(pop)

void struct_InputSkeletalActionData_t_1819_lin_to_win(void *l, void *w, uint32_t sz)
{
    struct winInputSkeletalActionData_t_1819 *win = (struct winInputSkeletalActionData_t_1819 *)w;
    InputSkeletalActionData_t *lin = (InputSkeletalActionData_t *)l;
    win->bActive = lin->bActive;
    win->activeOrigin = lin->activeOrigin;
}

void struct_InputSkeletalActionData_t_1819_win_to_lin(void *w, void *l)
{
    struct winInputSkeletalActionData_t_1819 *win = (struct winInputSkeletalActionData_t_1819 *)w;
    InputSkeletalActionData_t *lin = (InputSkeletalActionData_t *)l;
    lin->bActive = win->bActive;
    lin->activeOrigin = win->activeOrigin;
}


}
