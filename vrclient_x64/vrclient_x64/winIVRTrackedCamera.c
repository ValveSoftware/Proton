/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRTrackedCamera_IVRTrackedCamera_001.h"

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

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, char *pBuffer, uint32_t nBufferLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(_this->u_iface, nDeviceIndex, pBuffer, nBufferLen);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat, uint32_t *pWidth, uint32_t *pHeight)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(_this->u_iface, nDeviceIndex, nVideoStreamFormat, pWidth, pHeight);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(_this->u_iface, nDeviceIndex, nVideoStreamFormat);
    return _ret;
}

ECameraVideoStreamFormat __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    ECameraVideoStreamFormat _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(_this->u_iface, nDeviceIndex, bEnable);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(_this->u_iface, nDeviceIndex);
    return _ret;
}

float __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    float _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(_this->u_iface, nDeviceIndex);
    return _ret;
}

const CameraVideoStreamFrame_t * __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    const CameraVideoStreamFrame_t * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, const CameraVideoStreamFrame_t *pFrameImage)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(_this->u_iface, nDeviceIndex, pFrameImage);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(_this->u_iface, nDeviceIndex, bEnable);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(_this->u_iface, nDeviceIndex);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, float flInputU, float flInputV, float *pflOutputU, float *pflOutputV)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(_this->u_iface, nDeviceIndex, flInputU, flInputV, pflOutputU, pflOutputV);
    return _ret;
}

bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(_this->u_iface, nDeviceIndex, flWidthPixels, flHeightPixels, flZNear, flZFar, pProjection);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRTrackedCamera_IVRTrackedCamera_002.h"

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics, 20)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection, 24)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService, 12)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService, 8)
DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer, 28)

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(_this->u_iface, eCameraError);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(_this->u_iface, nDeviceIndex, pHasCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(_this->u_iface, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(_this->u_iface, nDeviceIndex, eFrameType, pFocalLength, pCenter);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(_this->u_iface, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(_this->u_iface, nDeviceIndex, pHandle);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(_this->u_iface, hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(_this->u_iface, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRTrackedCamera_IVRTrackedCamera_003.h"

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

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(_this->u_iface, eCameraError);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(_this->u_iface, nDeviceIndex, pHasCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(_this->u_iface, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(_this->u_iface, nDeviceIndex, eFrameType, pFocalLength, pCenter);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(_this->u_iface, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(_this->u_iface, nDeviceIndex, pHandle);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(_this->u_iface, hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(_this->u_iface, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(_this->u_iface, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(_this->u_iface, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(_this->u_iface, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(_this->u_iface, hTrackedCamera, glTextureId);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRTrackedCamera_IVRTrackedCamera_004.h"

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

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraErrorNameFromEnum(_this->u_iface, eCameraError);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_HasCamera(_this->u_iface, nDeviceIndex, pHasCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraFrameSize(_this->u_iface, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraIntrinsics(_this->u_iface, nDeviceIndex, eFrameType, pFocalLength, pCenter);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetCameraProjection(_this->u_iface, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_AcquireVideoStreamingService(_this->u_iface, nDeviceIndex, pHandle);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamingService(_this->u_iface, hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamFrameBuffer(_this->u_iface, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureSize(_this->u_iface, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureD3D11(_this->u_iface, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, winCameraVideoStreamFrameHeader_t_1017 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_GetVideoStreamTextureGL(_this->u_iface, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_004_ReleaseVideoStreamTextureGL(_this->u_iface, hTrackedCamera, glTextureId);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRTrackedCamera_IVRTrackedCamera_005.h"

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

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraErrorNameFromEnum(_this->u_iface, eCameraError);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_HasCamera(_this->u_iface, nDeviceIndex, pHasCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraFrameSize(_this->u_iface, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraIntrinsics(_this->u_iface, nDeviceIndex, nCameraIndex, eFrameType, pFocalLength, pCenter);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetCameraProjection(_this->u_iface, nDeviceIndex, nCameraIndex, eFrameType, flZNear, flZFar, pProjection);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_AcquireVideoStreamingService(_this->u_iface, nDeviceIndex, pHandle);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamingService(_this->u_iface, hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamFrameBuffer(_this->u_iface, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureSize(_this->u_iface, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureD3D11(_this->u_iface, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, winCameraVideoStreamFrameHeader_t_1610 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_GetVideoStreamTextureGL(_this->u_iface, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_005_ReleaseVideoStreamTextureGL(_this->u_iface, hTrackedCamera, glTextureId);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRTrackedCamera_IVRTrackedCamera_006.h"

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

const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum(struct w_steam_iface *_this, EVRTrackedCameraError eCameraError)
{
    const char * _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraErrorNameFromEnum(_this->u_iface, eCameraError);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_HasCamera(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_HasCamera(_this->u_iface, nDeviceIndex, pHasCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraFrameSize(_this->u_iface, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t *pFocalLength, HmdVector2_t *pCenter)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraIntrinsics(_this->u_iface, nDeviceIndex, nCameraIndex, eFrameType, pFocalLength, pCenter);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t *pProjection)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraProjection(_this->u_iface, nDeviceIndex, nCameraIndex, eFrameType, flZNear, flZFar, pProjection);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t *pHandle)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_AcquireVideoStreamingService(_this->u_iface, nDeviceIndex, pHandle);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamingService(_this->u_iface, hTrackedCamera);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamFrameBuffer(_this->u_iface, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize(struct w_steam_iface *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureSize(_this->u_iface, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureD3D11(_this->u_iface, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t *pglTextureId, winCameraVideoStreamFrameHeader_t_1267 *pFrameHeader, uint32_t nFrameHeaderSize)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetVideoStreamTextureGL(_this->u_iface, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
    return _ret;
}

EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL(struct w_steam_iface *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    EVRTrackedCameraError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_ReleaseVideoStreamTextureGL(_this->u_iface, hTrackedCamera, glTextureId);
    return _ret;
}

void __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace(struct w_steam_iface *_this, ETrackingUniverseOrigin eUniverse)
{
    TRACE("%p\n", _this);
    cppIVRTrackedCamera_IVRTrackedCamera_006_SetCameraTrackingSpace(_this->u_iface, eUniverse);
}

ETrackingUniverseOrigin __thiscall winIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace(struct w_steam_iface *_this)
{
    ETrackingUniverseOrigin _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRTrackedCamera_IVRTrackedCamera_006_GetCameraTrackingSpace(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRTrackedCamera_IVRTrackedCamera_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

