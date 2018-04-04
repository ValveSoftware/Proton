/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "vrclient_defs.h"

#include "vrclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRTrackedCamera_IVRTrackedCamera_003.h"

typedef struct __winIVRTrackedCamera_IVRTrackedCamera_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRTrackedCamera_IVRTrackedCamera_003;

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum, 8)
const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, EVRTrackedCameraError eCameraError)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraErrorNameFromEnum(_this->linux_side, eCameraError);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera, 16)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_HasCamera(_this->linux_side, nDeviceIndex, pHasCamera);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize, 36)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraFrameSize(_this->linux_side, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics, 28)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraIntrinsics(_this->linux_side, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection, 28)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetCameraProjection(_this->linux_side, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService, 16)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_AcquireVideoStreamingService(_this->linux_side, nDeviceIndex, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService, 12)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedCameraHandle_t hTrackedCamera)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamingService(_this->linux_side, hTrackedCamera);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer, 40)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamFrameBuffer(_this->linux_side, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize, 36)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, VRTextureBounds_t * pTextureBounds, uint32_t * pnWidth, uint32_t * pnHeight)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureSize(_this->linux_side, nDeviceIndex, eFrameType, pTextureBounds, pnWidth, pnHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11, 44)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pD3D11DeviceOrResource, void ** ppD3D11ShaderResourceView, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureD3D11(_this->linux_side, hTrackedCamera, eFrameType, pD3D11DeviceOrResource, ppD3D11ShaderResourceView, pFrameHeader, nFrameHeaderSize);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL, 36)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, glUInt_t * pglTextureId, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_GetVideoStreamTextureGL(_this->linux_side, hTrackedCamera, eFrameType, pglTextureId, pFrameHeader, nFrameHeaderSize);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL, 16)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(winIVRTrackedCamera_IVRTrackedCamera_003 *_this, TrackedCameraHandle_t hTrackedCamera, glUInt_t glTextureId)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_003_ReleaseVideoStreamTextureGL(_this->linux_side, hTrackedCamera, glTextureId);
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

winIVRTrackedCamera_IVRTrackedCamera_003 *create_winIVRTrackedCamera_IVRTrackedCamera_003(void *linux_side)
{
    winIVRTrackedCamera_IVRTrackedCamera_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRTrackedCamera_IVRTrackedCamera_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_003_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppIVRTrackedCamera_IVRTrackedCamera_002.h"

typedef struct __winIVRTrackedCamera_IVRTrackedCamera_002 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRTrackedCamera_IVRTrackedCamera_002;

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum, 8)
const char * __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, EVRTrackedCameraError eCameraError)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraErrorNameFromEnum(_this->linux_side, eCameraError);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera, 16)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedDeviceIndex_t nDeviceIndex, bool * pHasCamera)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_HasCamera(_this->linux_side, nDeviceIndex, pHasCamera);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize, 36)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, uint32_t * pnWidth, uint32_t * pnHeight, uint32_t * pnFrameBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraFrameSize(_this->linux_side, nDeviceIndex, eFrameType, pnWidth, pnHeight, pnFrameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics, 28)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, HmdVector2_t * pFocalLength, HmdVector2_t * pCenter)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraIntrinisics(_this->linux_side, nDeviceIndex, eFrameType, pFocalLength, pCenter);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection, 28)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedDeviceIndex_t nDeviceIndex, EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_GetCameraProjection(_this->linux_side, nDeviceIndex, eFrameType, flZNear, flZFar, pProjection);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService, 16)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedDeviceIndex_t nDeviceIndex, TrackedCameraHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_AcquireVideoStreamingService(_this->linux_side, nDeviceIndex, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService, 12)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedCameraHandle_t hTrackedCamera)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_ReleaseVideoStreamingService(_this->linux_side, hTrackedCamera);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer, 40)
EVRTrackedCameraError __thiscall winIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(winIVRTrackedCamera_IVRTrackedCamera_002 *_this, TrackedCameraHandle_t hTrackedCamera, EVRTrackedCameraFrameType eFrameType, void * pFrameBuffer, uint32_t nFrameBufferSize, CameraVideoStreamFrameHeader_t * pFrameHeader, uint32_t nFrameHeaderSize)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_002_GetVideoStreamFrameBuffer(_this->linux_side, hTrackedCamera, eFrameType, pFrameBuffer, nFrameBufferSize, pFrameHeader, nFrameHeaderSize);
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

winIVRTrackedCamera_IVRTrackedCamera_002 *create_winIVRTrackedCamera_IVRTrackedCamera_002(void *linux_side)
{
    winIVRTrackedCamera_IVRTrackedCamera_002 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRTrackedCamera_IVRTrackedCamera_002));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_002_vtable;
    r->linux_side = linux_side;
    return r;
}

#include "cppIVRTrackedCamera_IVRTrackedCamera_001.h"

typedef struct __winIVRTrackedCamera_IVRTrackedCamera_001 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRTrackedCamera_IVRTrackedCamera_001;

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_HasCamera(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription, 20)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, char * pBuffer, uint32_t nBufferLen)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFirmwareDescription(_this->linux_side, nDeviceIndex, pBuffer, nBufferLen);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions, 28)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat, uint32_t * pWidth, uint32_t * pHeight)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraFrameDimensions(_this->linux_side, nDeviceIndex, nVideoStreamFormat, pWidth, pHeight);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat, 12)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, ECameraVideoStreamFormat nVideoStreamFormat)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_SetCameraVideoStreamFormat(_this->linux_side, nDeviceIndex, nVideoStreamFormat);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat, 8)
ECameraVideoStreamFormat __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraVideoStreamFormat(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming, 9)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_EnableCameraForStreaming(_this->linux_side, nDeviceIndex, bEnable);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_StartVideoStream(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_StopVideoStream(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamActive(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime, 8)
float __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamElapsedTime(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame, 8)
const CameraVideoStreamFrame_t * __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetVideoStreamFrame(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame, 16)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, CameraVideoStreamFrame_t * pFrameImage)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_ReleaseVideoStreamFrame(_this->linux_side, nDeviceIndex, pFrameImage);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure, 9)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, bool bEnable)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_SetAutoExposure(_this->linux_side, nDeviceIndex, bEnable);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_PauseVideoStream(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_ResumeVideoStream(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused, 8)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_IsVideoStreamPaused(_this->linux_side, nDeviceIndex);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion, 32)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, float flInputU, float flInputV, float * pflOutputU, float * pflOutputV)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraDistortion(_this->linux_side, nDeviceIndex, flInputU, flInputV, pflOutputU, pflOutputV);
}

DEFINE_THISCALL_WRAPPER(winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection, 32)
bool __thiscall winIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(winIVRTrackedCamera_IVRTrackedCamera_001 *_this, TrackedDeviceIndex_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, HmdMatrix44_t * pProjection)
{
    TRACE("%p\n", _this);
    return cppIVRTrackedCamera_IVRTrackedCamera_001_GetCameraProjection(_this->linux_side, nDeviceIndex, flWidthPixels, flHeightPixels, flZNear, flZFar, pProjection);
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

winIVRTrackedCamera_IVRTrackedCamera_001 *create_winIVRTrackedCamera_IVRTrackedCamera_001(void *linux_side)
{
    winIVRTrackedCamera_IVRTrackedCamera_001 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRTrackedCamera_IVRTrackedCamera_001));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRTrackedCamera_IVRTrackedCamera_001_vtable;
    r->linux_side = linux_side;
    return r;
}

