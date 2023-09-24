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

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_004.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo, 12)

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(_this->u_iface, configFile);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(_this->u_iface);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(_this->u_iface, pSizeX, pSizeZ);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(_this->u_iface, rect);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pmatStandingZeroPoseToRawTrackingPose);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(_this->u_iface, sizeX, sizeZ);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, unQuadsCount);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(_this->u_iface, configFile);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t unTagCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(_this->u_iface, pTagsBuffer, unTagCount);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t *punTagCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(_this->u_iface, pTagsBuffer, punTagCount);
    return _ret;
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

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_005.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking, 12)

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(_this->u_iface, configFile);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(_this->u_iface);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(_this->u_iface, pSizeX, pSizeZ);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(_this->u_iface, rect);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pmatStandingZeroPoseToRawTrackingPose);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(_this->u_iface, sizeX, sizeZ);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, unQuadsCount);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(_this->u_iface, configFile);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t unTagCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(_this->u_iface, pTagsBuffer, unTagCount);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t *punTagCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(_this->u_iface, pTagsBuffer, punTagCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(_this->u_iface, pQuadsBuffer, unQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(struct w_steam_iface *_this, char *pBuffer, uint32_t *pnBufferLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(_this->u_iface, pBuffer, pnBufferLength);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(struct w_steam_iface *_this, const char *pBuffer, uint32_t nImportFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(_this->u_iface, pBuffer, nImportFlags);
    return _ret;
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

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
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
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

#include "cppIVRChaperoneSetup_IVRChaperoneSetup_006.h"

DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose, 8)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking, 12)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview, 4)
DEFINE_THISCALL_WRAPPER(winIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting, 4)

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(_this->u_iface, configFile);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(_this->u_iface);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(_this->u_iface, pSizeX, pSizeZ);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(_this->u_iface, rect);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, punQuadsCount);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pmatStandingZeroPoseToRawTrackingPose);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(_this->u_iface, sizeX, sizeZ);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(_this->u_iface, pQuadsBuffer, unQuadsCount);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(struct w_steam_iface *_this, HmdVector2_t *pPointBuffer, uint32_t unPointCount)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(_this->u_iface, pPointBuffer, unPointCount);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(_this->u_iface, pMatSeatedZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(_this->u_iface, pMatStandingZeroPoseToRawTrackingPose);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(struct w_steam_iface *_this, EChaperoneConfigFile configFile)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(_this->u_iface, configFile);
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(_this->u_iface, pmatSeatedZeroPoseToRawTrackingPose);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(struct w_steam_iface *_this, char *pBuffer, uint32_t *pnBufferLength)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(_this->u_iface, pBuffer, pnBufferLength);
    return _ret;
}

bool __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(struct w_steam_iface *_this, const char *pBuffer, uint32_t nImportFlags)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(_this->u_iface, pBuffer, nImportFlags);
    return _ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(_this->u_iface);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(_this->u_iface);
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting(struct w_steam_iface *_this)
{
    TRACE("%p\n", _this);
    cppIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting(_this->u_iface);
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
        VTABLE_ADD_FUNC(winIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRChaperoneSetup_IVRChaperoneSetup_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRChaperoneSetup_IVRChaperoneSetup_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(20);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 20 * sizeof(*vtable));
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
    init_thunk(&thunks[19], r, winIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting, 0, FALSE, FALSE);
    for (i = 0; i < 20; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRChaperoneSetup_IVRChaperoneSetup_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

