/* This file is auto-generated, do not edit. */

#include "config.h"
#include "wine/port.h"

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
    winIVRChaperoneSetup_IVRChaperoneSetup_005 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_005_vtable;
    r->linux_side = linux_side;
    return r;
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
    winIVRChaperoneSetup_IVRChaperoneSetup_004 *r = HeapAlloc(GetProcessHeap(), 0, sizeof(winIVRChaperoneSetup_IVRChaperoneSetup_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_004_vtable;
    r->linux_side = linux_side;
    return r;
}

