/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

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

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_CommitWorkingCopy, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_RevertWorkingCopy, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .pSizeX = pSizeX,
        .pSizeZ = pSizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaSize, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect_params params =
    {
        .linux_side = _this->u_iface,
        .rect = rect,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingPlayAreaRect, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatStandingZeroPoseToRawTrackingPose = pmatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetWorkingStandingZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .sizeX = sizeX,
        .sizeZ = sizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingPlayAreaSize, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .unQuadsCount = unQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingCollisionBoundsInfo, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatSeatedZeroPoseToRawTrackingPose = pMatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingSeatedZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatStandingZeroPoseToRawTrackingPose = pMatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingStandingZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_ReloadFromDisk, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t unTagCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pTagsBuffer = pTagsBuffer,
        .unTagCount = unTagCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_SetWorkingWallTagInfo, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t *punTagCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pTagsBuffer = pTagsBuffer,
        .punTagCount = punTagCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_004_GetLiveWallTagInfo, &params );
    return params._ret;
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_004_vtable;

DEFINE_RTTI_DATA0(winIVRChaperoneSetup_IVRChaperoneSetup_004, 0, ".?AVIVRChaperoneSetup@@")

__ASM_BLOCK_BEGIN(winIVRChaperoneSetup_IVRChaperoneSetup_004_vtables)
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
__ASM_BLOCK_END

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

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_CommitWorkingCopy, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_RevertWorkingCopy, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .pSizeX = pSizeX,
        .pSizeZ = pSizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaSize, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect_params params =
    {
        .linux_side = _this->u_iface,
        .rect = rect,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingPlayAreaRect, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatStandingZeroPoseToRawTrackingPose = pmatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetWorkingStandingZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .sizeX = sizeX,
        .sizeZ = sizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPlayAreaSize, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .unQuadsCount = unQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsInfo, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatSeatedZeroPoseToRawTrackingPose = pMatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingSeatedZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatStandingZeroPoseToRawTrackingPose = pMatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingStandingZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_ReloadFromDisk, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t unTagCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pTagsBuffer = pTagsBuffer,
        .unTagCount = unTagCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingCollisionBoundsTagsInfo, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo(struct w_steam_iface *_this, uint8_t *pTagsBuffer, uint32_t *punTagCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pTagsBuffer = pTagsBuffer,
        .punTagCount = punTagCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetLiveCollisionBoundsTagsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .unQuadsCount = unQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_SetWorkingPhysicalBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_GetLivePhysicalBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer(struct w_steam_iface *_this, char *pBuffer, uint32_t *pnBufferLength)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .pBuffer = pBuffer,
        .pnBufferLength = pnBufferLength,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_ExportLiveToBuffer, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking(struct w_steam_iface *_this, const char *pBuffer, uint32_t nImportFlags)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking_params params =
    {
        .linux_side = _this->u_iface,
        .pBuffer = pBuffer,
        .nImportFlags = nImportFlags,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_005_ImportFromBufferToWorking, &params );
    return params._ret;
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_005_vtable;

DEFINE_RTTI_DATA0(winIVRChaperoneSetup_IVRChaperoneSetup_005, 0, ".?AVIVRChaperoneSetup@@")

__ASM_BLOCK_BEGIN(winIVRChaperoneSetup_IVRChaperoneSetup_005_vtables)
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
__ASM_BLOCK_END

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

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_CommitWorkingCopy, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_RevertWorkingCopy, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize(struct w_steam_iface *_this, float *pSizeX, float *pSizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .pSizeX = pSizeX,
        .pSizeZ = pSizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaSize, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect(struct w_steam_iface *_this, HmdQuad_t *rect)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect_params params =
    {
        .linux_side = _this->u_iface,
        .rect = rect,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingPlayAreaRect, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t *punQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .punQuadsCount = punQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveCollisionBoundsInfo, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatStandingZeroPoseToRawTrackingPose = pmatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetWorkingStandingZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize(struct w_steam_iface *_this, float sizeX, float sizeZ)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize_params params =
    {
        .linux_side = _this->u_iface,
        .sizeX = sizeX,
        .sizeZ = sizeZ,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPlayAreaSize, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo(struct w_steam_iface *_this, HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo_params params =
    {
        .linux_side = _this->u_iface,
        .pQuadsBuffer = pQuadsBuffer,
        .unQuadsCount = unQuadsCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingCollisionBoundsInfo, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter(struct w_steam_iface *_this, HmdVector2_t *pPointBuffer, uint32_t unPointCount)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter_params params =
    {
        .linux_side = _this->u_iface,
        .pPointBuffer = pPointBuffer,
        .unPointCount = unPointCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingPerimeter, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatSeatedZeroPoseToRawTrackingPose = pMatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingSeatedZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose(struct w_steam_iface *_this, const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pMatStandingZeroPoseToRawTrackingPose = pMatStandingZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_SetWorkingStandingZeroPoseToRawTrackingPose, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk(struct w_steam_iface *_this, uint32_t configFile)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk_params params =
    {
        .linux_side = _this->u_iface,
        .configFile = configFile,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_ReloadFromDisk, &params );
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose(struct w_steam_iface *_this, HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose_params params =
    {
        .linux_side = _this->u_iface,
        .pmatSeatedZeroPoseToRawTrackingPose = pmatSeatedZeroPoseToRawTrackingPose,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_GetLiveSeatedZeroPoseToRawTrackingPose, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer(struct w_steam_iface *_this, char *pBuffer, uint32_t *pnBufferLength)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer_params params =
    {
        .linux_side = _this->u_iface,
        .pBuffer = pBuffer,
        .pnBufferLength = pnBufferLength,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_ExportLiveToBuffer, &params );
    return params._ret;
}

int8_t __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking(struct w_steam_iface *_this, const char *pBuffer, uint32_t nImportFlags)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking_params params =
    {
        .linux_side = _this->u_iface,
        .pBuffer = pBuffer,
        .nImportFlags = nImportFlags,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_ImportFromBufferToWorking, &params );
    return params._ret;
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_ShowWorkingSetPreview, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_HideWorkingSetPreview, &params );
}

void __thiscall winIVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting(struct w_steam_iface *_this)
{
    struct IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRChaperoneSetup_IVRChaperoneSetup_006_RoomSetupStarting, &params );
}

extern vtable_ptr winIVRChaperoneSetup_IVRChaperoneSetup_006_vtable;

DEFINE_RTTI_DATA0(winIVRChaperoneSetup_IVRChaperoneSetup_006, 0, ".?AVIVRChaperoneSetup@@")

__ASM_BLOCK_BEGIN(winIVRChaperoneSetup_IVRChaperoneSetup_006_vtables)
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
__ASM_BLOCK_END

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

void init_winIVRChaperoneSetup_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRChaperoneSetup_IVRChaperoneSetup_004_rtti( base );
    init_winIVRChaperoneSetup_IVRChaperoneSetup_005_rtti( base );
    init_winIVRChaperoneSetup_IVRChaperoneSetup_006_rtti( base );
#endif /* __x86_64__ */
}
