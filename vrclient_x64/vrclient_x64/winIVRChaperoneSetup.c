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

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_006.h"

typedef struct __winIVRChaperoneSetup_IVRChaperoneSetup_006 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRChaperoneSetup_IVRChaperoneSetup_006;

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy, 8)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy, 4)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, float * pSizeX, float * pSizeZ)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(_this->linux_side, pSizeX, pSizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdQuad_t * rect)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(_this->linux_side, rect);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pmatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(_this->linux_side, sizeX, sizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, unQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdVector2_t * pPointBuffer, uint32_t unPointCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(_this->linux_side, pPointBuffer, unPointCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pMatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pMatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk, 8)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, char * pBuffer, uint32_t * pnBufferLength)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(_this->linux_side, pBuffer, pnBufferLength);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking, 16)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this, const char * pBuffer, uint32_t nImportFlags)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(_this->linux_side, pBuffer, nImportFlags);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview, 4)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview, 4)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(winIVRChaperoneSetup_IVRChaperoneSetup_006 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(_this->linux_side);
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperoneSetup_IVRChaperoneSetup_006,
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview)
    );
#ifndef __GNUC__
}
#endif

winIVRChaperoneSetup_IVRChaperoneSetup_006 *create_winIVRChaperoneSetup_IVRChaperoneSetup_006(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_006));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_006_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_006(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRChaperoneSetup_IVRChaperoneSetup_006 *create_winIVRChaperoneSetup_IVRChaperoneSetup_006_FnTable(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_006 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_006));
    struct thunk *thunks = alloc_thunks(19);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 19 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize, 2, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview, 0, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview, 0, FALSE, FALSE);
    for (i = 0; i < 19; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_006_FnTable(void *object)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_006 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_005.h"

typedef struct __winIVRChaperoneSetup_IVRChaperoneSetup_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRChaperoneSetup_IVRChaperoneSetup_005;

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy, 8)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy, 4)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, float * pSizeX, float * pSizeZ)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(_this->linux_side, pSizeX, pSizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * rect)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(_this->linux_side, rect);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pmatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(_this->linux_side, sizeX, sizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, unQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pMatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pMatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk, 8)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, uint8_t * pTagsBuffer, uint32_t unTagCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(_this->linux_side, pTagsBuffer, unTagCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, uint8_t * pTagsBuffer, uint32_t * punTagCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(_this->linux_side, pTagsBuffer, punTagCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo, 16)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(_this->linux_side, pQuadsBuffer, unQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, char * pBuffer, uint32_t * pnBufferLength)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(_this->linux_side, pBuffer, pnBufferLength);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking, 16)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(winIVRChaperoneSetup_IVRChaperoneSetup_005 *_this, const char * pBuffer, uint32_t nImportFlags)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(_this->linux_side, pBuffer, nImportFlags);
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperoneSetup_IVRChaperoneSetup_005,
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking)
    );
#ifndef __GNUC__
}
#endif

winIVRChaperoneSetup_IVRChaperoneSetup_005 *create_winIVRChaperoneSetup_IVRChaperoneSetup_005(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRChaperoneSetup_IVRChaperoneSetup_005 *create_winIVRChaperoneSetup_IVRChaperoneSetup_005_FnTable(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_005));
    struct thunk *thunks = alloc_thunks(20);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 20 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize, 2, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer, 2, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking, 2, FALSE, FALSE);
    for (i = 0; i < 20; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_005_FnTable(void *object)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_004.h"

typedef struct __winIVRChaperoneSetup_IVRChaperoneSetup_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRChaperoneSetup_IVRChaperoneSetup_004;

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy, 8)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy, 4)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(_this->linux_side);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, float * pSizeX, float * pSizeZ)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(_this->linux_side, pSizeX, pSizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdQuad_t * rect)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(_this->linux_side, rect);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdQuad_t * pQuadsBuffer, uint32_t * punQuadsCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, punQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdMatrix34_t * pmatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pmatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(_this->linux_side, sizeX, sizeZ);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdQuad_t * pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(_this->linux_side, pQuadsBuffer, unQuadsCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdMatrix34_t * pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->linux_side, pMatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose, 12)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdMatrix34_t * pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(_this->linux_side, pMatStandingZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk, 8)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(_this->linux_side, configFile);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose, 12)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, HmdMatrix34_t * pmatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(_this->linux_side, pmatSeatedZeroPoseToRawTrackingPose);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo, 16)
void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, uint8_t * pTagsBuffer, uint32_t unTagCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(_this->linux_side, pTagsBuffer, unTagCount);
}

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo, 20)
bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(winIVRChaperoneSetup_IVRChaperoneSetup_004 *_this, uint8_t * pTagsBuffer, uint32_t * punTagCount)
{
    TRACE("%p\n", _this);
    return cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(_this->linux_side, pTagsBuffer, punTagCount);
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winIVRChaperoneSetup_IVRChaperoneSetup_004,
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo)
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo)
    );
#ifndef __GNUC__
}
#endif

winIVRChaperoneSetup_IVRChaperoneSetup_004 *create_winIVRChaperoneSetup_IVRChaperoneSetup_004(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRChaperoneSetup_IVRChaperoneSetup_004 *create_winIVRChaperoneSetup_IVRChaperoneSetup_004_FnTable(void *linux_side)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_004));
    struct thunk *thunks = alloc_thunks(16);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 16 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy, 0, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect, 1, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[8], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize, 2, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk, 1, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose, 1, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo, 2, FALSE, FALSE);
    for (i = 0; i < 16; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_004_FnTable(void *object)
{
    winIVRChaperoneSetup_IVRChaperoneSetup_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

