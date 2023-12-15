/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription, 16)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions, 20)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection, 28)

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_HasCamera, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(struct w_steam_iface *_this, uint32_t nDeviceIndex, char *pBuffer, uint32_t nBufferLen)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pBuffer = pBuffer,
        .nBufferLen = nBufferLen,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nVideoStreamFormat, uint32_t *pWidth, uint32_t *pHeight)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nVideoStreamFormat = nVideoStreamFormat,
        .pWidth = pWidth,
        .pHeight = pHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nVideoStreamFormat)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nVideoStreamFormat = nVideoStreamFormat,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t bEnable)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .bEnable = bEnable,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive, &params );
    return params._ret;
}

float __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime, &params );
    return params._ret;
}

extern const w_CameraVideoStreamFrame_t_0914 * __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(struct w_steam_iface *_this, uint32_t nDeviceIndex);

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(struct w_steam_iface *_this, uint32_t nDeviceIndex, const w_CameraVideoStreamFrame_t_0914 *pFrameImage)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pFrameImage = pFrameImage,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t bEnable)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .bEnable = bEnable,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(struct w_steam_iface *_this, uint32_t nDeviceIndex)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(struct w_steam_iface *_this, uint32_t nDeviceIndex, float flInputU, float flInputV, float *pflOutputU, float *pflOutputV)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .flInputU = flInputU,
        .flInputV = flInputV,
        .pflOutputU = pflOutputU,
        .pflOutputV = pflOutputV,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion, &params );
    return params._ret;
}

int8_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .flWidthPixels = flWidthPixels,
        .flHeightPixels = flHeightPixels,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_001_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_001, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_001_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_001,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_001(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_001_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_001(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_001_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(18);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 18 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription, 3, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions, 4, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat, 1, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive, 1, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime, 1, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused, 1, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion, 5, TRUE, FALSE);
    init_thunk(&thunks[17], r, winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection, 6, TRUE, TRUE);
    for (i = 0; i < 18; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_001_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics, 20)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer, 28)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eCameraError)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eCameraError = eCameraError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t *pHasCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHasCamera = pHasCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_HasCamera, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
        .pnFrameBufferSize = pnFrameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pFocalLength = pFocalLength,
        .pCenter = pCenter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(struct w_steam_iface *_this, uint32_t nDeviceIndex, void **pHandle)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(struct w_steam_iface *_this, void *hTrackedCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, void *hTrackedCamera, uint32_t eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pFrameBuffer = pFrameBuffer,
        .nFrameBufferSize = nFrameBufferSize,
        .pFrameHeader = pFrameHeader,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_002_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_002, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_002_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_002,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_002(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_002_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_002(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_002_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(8);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 8 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection, 5, TRUE, TRUE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer, 6, FALSE, FALSE);
    for (i = 0; i < 8; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_002_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics, 20)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL, 16)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eCameraError)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eCameraError = eCameraError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t *pHasCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHasCamera = pHasCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_HasCamera, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
        .pnFrameBufferSize = pnFrameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pFocalLength = pFocalLength,
        .pCenter = pCenter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint64_t *pHandle)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(struct w_steam_iface *_this, uint64_t hTrackedCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pFrameBuffer = pFrameBuffer,
        .nFrameBufferSize = nFrameBufferSize,
        .pFrameHeader = pFrameHeader,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pTextureBounds = pTextureBounds,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
        .pFrameHeader = pFrameHeader,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, uint32_t *pglTextureId, w_CameraVideoStreamFrameHeader_t_100 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pglTextureId = pglTextureId,
        .pFrameHeader = pFrameHeader,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t glTextureId)
{
    struct IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .glTextureId = glTextureId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_003_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_003, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_003_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_003,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection, 5, TRUE, TRUE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer, 6, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11, 6, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL, 5, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL, 2, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics, 20)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL, 16)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eCameraError)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eCameraError = eCameraError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t *pHasCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHasCamera = pHasCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_HasCamera, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
        .pnFrameBufferSize = pnFrameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pFocalLength = pFocalLength,
        .pCenter = pCenter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint64_t *pHandle)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService(struct w_steam_iface *_this, uint64_t hTrackedCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pFrameBuffer = pFrameBuffer,
        .nFrameBufferSize = nFrameBufferSize,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pTextureBounds = pTextureBounds,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, uint32_t *pglTextureId, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pglTextureId = pglTextureId,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t glTextureId)
{
    struct IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .glTextureId = glTextureId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_004_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_004, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_004_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_004,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_004_HasCamera, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics, 4, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection, 5, TRUE, TRUE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer, 6, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11, 6, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL, 5, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL, 2, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL, 16)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eCameraError)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eCameraError = eCameraError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t *pHasCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHasCamera = pHasCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_HasCamera, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
        .pnFrameBufferSize = pnFrameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nCameraIndex, uint32_t eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nCameraIndex = nCameraIndex,
        .eFrameType = eFrameType,
        .pFocalLength = pFocalLength,
        .pCenter = pCenter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nCameraIndex, uint32_t eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nCameraIndex = nCameraIndex,
        .eFrameType = eFrameType,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint64_t *pHandle)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService(struct w_steam_iface *_this, uint64_t hTrackedCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pFrameBuffer = pFrameBuffer,
        .nFrameBufferSize = nFrameBufferSize,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pTextureBounds = pTextureBounds,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, uint32_t *pglTextureId, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pglTextureId = pglTextureId,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t glTextureId)
{
    struct IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .glTextureId = glTextureId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_005_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_005, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_005_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_005,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(12);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 12 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_005_HasCamera, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics, 5, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection, 6, TRUE, TRUE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer, 6, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11, 6, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL, 5, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL, 2, FALSE, FALSE);
    for (i = 0; i < 12; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11, 32)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL, 28)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL, 16)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace, 4)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, uint32_t eCameraError)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum_params params =
    {
        .linux_side = _this->u_iface,
        .eCameraError = eCameraError,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_HasCamera(struct w_steam_iface *_this, uint32_t nDeviceIndex, int8_t *pHasCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_HasCamera_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHasCamera = pHasCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_HasCamera, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
        .pnFrameBufferSize = pnFrameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nCameraIndex, uint32_t eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nCameraIndex = nCameraIndex,
        .eFrameType = eFrameType,
        .pFocalLength = pFocalLength,
        .pCenter = pCenter,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t nCameraIndex, uint32_t eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .nCameraIndex = nCameraIndex,
        .eFrameType = eFrameType,
        .flZNear = flZNear,
        .flZFar = flZFar,
        .pProjection = pProjection,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint64_t *pHandle)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService(struct w_steam_iface *_this, uint64_t hTrackedCamera)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pFrameBuffer = pFrameBuffer,
        .nFrameBufferSize = nFrameBufferSize,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize(struct w_steam_iface *_this, uint32_t nDeviceIndex, uint32_t eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize_params params =
    {
        .linux_side = _this->u_iface,
        .nDeviceIndex = nDeviceIndex,
        .eFrameType = eFrameType,
        .pTextureBounds = pTextureBounds,
        .pnWidth = pnWidth,
        .pnHeight = pnHeight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize, &params );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pD3D11DeviceOrResource = pD3D11DeviceOrResource,
        .ppD3D11ShaderResourceView = ppD3D11ShaderResourceView,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t eFrameType, uint32_t *pglTextureId, w_CameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    w_CameraVideoStreamFrameHeader_t_1017 w_pFrameHeader;
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .eFrameType = eFrameType,
        .pglTextureId = pglTextureId,
        .pFrameHeader = pFrameHeader ? &w_pFrameHeader : NULL,
        .nFrameHeaderSize = nFrameHeaderSize,
    };
    TRACE("%p\n", _this);
    nFrameHeaderSize = min( nFrameHeaderSize, sizeof(w_pFrameHeader) );
    if (pFrameHeader) memcpy( &w_pFrameHeader, pFrameHeader, nFrameHeaderSize );
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL, &params );
    if (pFrameHeader) memcpy( pFrameHeader, &w_pFrameHeader, nFrameHeaderSize );
    return params._ret;
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, uint64_t hTrackedCamera, uint32_t glTextureId)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL_params params =
    {
        .linux_side = _this->u_iface,
        .hTrackedCamera = hTrackedCamera,
        .glTextureId = glTextureId,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL, &params );
    return params._ret;
}

void __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace(struct w_steam_iface *_this, uint32_t eUniverse)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
        .eUniverse = eUniverse,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace, &params );
}

uint32_t __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace(struct w_steam_iface *_this)
{
    struct IVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace, &params );
    return params._ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_006_vtable;

DEFINE_RTTI_DATA0(winIVRTrackedCamera_IVRTrackedCamera_006, 0, ".?AVIVRTrackedCamera@@")

__ASM_BLOCK_BEGIN(winIVRTrackedCamera_IVRTrackedCamera_006_vtables)
    __ASM_VTABLE(winIVRTrackedCamera_IVRTrackedCamera_006,
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_HasCamera)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace)
        VTABLE_ADD_FUNC(winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRTrackedCamera_IVRTrackedCamera_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(14);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 14 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRTrackedCamera_IVRTrackedCamera_006_HasCamera, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize, 5, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics, 5, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection, 6, TRUE, TRUE);
    init_thunk(&thunks[5], r, winIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer, 6, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11, 6, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL, 5, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL, 2, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace, 0, FALSE, FALSE);
    for (i = 0; i < 14; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRTrackedCamera_IVRTrackedCamera_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRTrackedCamera_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRTrackedCamera_IVRTrackedCamera_001_rtti( base );
    init_winIVRTrackedCamera_IVRTrackedCamera_002_rtti( base );
    init_winIVRTrackedCamera_IVRTrackedCamera_003_rtti( base );
    init_winIVRTrackedCamera_IVRTrackedCamera_004_rtti( base );
    init_winIVRTrackedCamera_IVRTrackedCamera_005_rtti( base );
    init_winIVRTrackedCamera_IVRTrackedCamera_006_rtti( base );
#endif /* __x86_64__ */
}
