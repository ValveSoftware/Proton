/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stdint.h>

#include "vrclient_private.h"

#include "flatapi.h"

WINE_DEFAULT_DEBUG_CHANNEL(vrclient);

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetDigitalActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetAnalogActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetPoseActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetSkeletalActionData, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed, 32)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_UncompressSkeletalActionData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_TriggerHapticVibrationAction, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetOriginLocalizedName, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_ShowBindingsForActionSet, 24)

uint32_t __thiscall winIVRInput_IVRInput_003_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_003_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_003_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_003_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_003_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1015 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_003_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_UpdateActionState, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize)
{
    w_InputDigitalActionData_t w_pActionData;
    struct IVRInput_IVRInput_003_GetDigitalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetDigitalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_003_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetPoseActionData(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_003_GetPoseActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetPoseActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, uint32_t eBoneParent, float fPredictedSecondsFromNow, w_InputSkeletonActionData_t *pActionData, uint32_t unActionDataSize, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_003_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eBoneParent = eBoneParent,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData,
        .unActionDataSize = unActionDataSize,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetSkeletalActionData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eBoneParent, float fPredictedSecondsFromNow, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    struct IVRInput_IVRInput_003_GetSkeletalActionDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eBoneParent = eBoneParent,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetSkeletalActionDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_UncompressSkeletalActionData(struct w_steam_iface *_this, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t *peBoneParent, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_003_UncompressSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .peBoneParent = peBoneParent,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_UncompressSkeletalActionData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    struct IVRInput_IVRInput_003_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_003_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    struct IVRInput_IVRInput_003_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_003_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_003_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_003_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1015 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_003_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_003_ShowBindingsForActionSet, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_003_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_003, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_003_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_003,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetPoseActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_UncompressSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_003_ShowBindingsForActionSet)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_003(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_003_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_003(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_003_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(17);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 17 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_003_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_003_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_003_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_003_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_003_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_003_GetDigitalActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_003_GetAnalogActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_003_GetPoseActionData, 5, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_003_GetSkeletalActionData, 7, TRUE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed, 6, TRUE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_003_UncompressSkeletalActionData, 5, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_003_TriggerHapticVibrationAction, 5, TRUE, TRUE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_003_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_003_GetOriginLocalizedName, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_003_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_003_ShowBindingsForActionSet, 4, FALSE, FALSE);
    for (i = 0; i < 17; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_003_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetDigitalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetAnalogActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetPoseActionData, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalBoneData, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed, 40)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_DecompressSkeletalBoneData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_TriggerHapticVibrationAction, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetOriginLocalizedName, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_ShowBindingsForActionSet, 24)

uint32_t __thiscall winIVRInput_IVRInput_004_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_004_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_004_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_004_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_004_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_004_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_UpdateActionState, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRInput_IVRInput_004_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

uint32_t __thiscall winIVRInput_IVRInput_004_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_004_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetPoseActionData(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_004_GetPoseActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetPoseActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, w_InputSkeletalActionData_t_1016 *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputSkeletalActionData_t_1016 w_pActionData;
    struct IVRInput_IVRInput_004_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetSkeletalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneData(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_004_GetSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_004_GetSkeletalBoneDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetSkeletalBoneDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_DecompressSkeletalBoneData(struct w_steam_iface *_this, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t *peTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_004_DecompressSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .peTransformSpace = peTransformSpace,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_DecompressSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_004_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_004_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    struct IVRInput_IVRInput_004_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_004_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_004_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_004_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_004_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_004_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_004_ShowBindingsForActionSet, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_004_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_004, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_004_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_004,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetPoseActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_DecompressSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_004_ShowBindingsForActionSet)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_004(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_004_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_004(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_004_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(18);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 18 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_004_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_004_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_004_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_004_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_004_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_004_GetDigitalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_004_GetAnalogActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_004_GetPoseActionData, 6, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_004_GetSkeletalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_004_GetSkeletalBoneData, 6, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed, 7, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_004_DecompressSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_004_TriggerHapticVibrationAction, 6, TRUE, TRUE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_004_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_004_GetOriginLocalizedName, 3, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_004_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRInput_IVRInput_004_ShowBindingsForActionSet, 4, FALSE, FALSE);
    for (i = 0; i < 18; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_004_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetDigitalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetAnalogActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetPoseActionData, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneCount, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneHierarchy, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalTrackingLevel, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalBoneData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalSummaryData, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_DecompressSkeletalBoneData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_TriggerHapticVibrationAction, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetOriginLocalizedName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_ShowBindingsForActionSet, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_IsUsingLegacyInput, 4)

uint32_t __thiscall winIVRInput_IVRInput_005_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_005_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_005_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_005_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_005_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_005_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_UpdateActionState, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRInput_IVRInput_005_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

uint32_t __thiscall winIVRInput_IVRInput_005_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_005_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetPoseActionData(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_005_GetPoseActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetPoseActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, w_InputSkeletalActionData_t_113b *pActionData, uint32_t unActionDataSize)
{
    w_InputSkeletalActionData_t_113b w_pActionData;
    struct IVRInput_IVRInput_005_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetBoneCount(struct w_steam_iface *_this, uint64_t action, uint32_t *pBoneCount)
{
    struct IVRInput_IVRInput_005_GetBoneCount_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pBoneCount = pBoneCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetBoneCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetBoneHierarchy(struct w_steam_iface *_this, uint64_t action, int32_t *pParentIndices, uint32_t unIndexArayCount)
{
    struct IVRInput_IVRInput_005_GetBoneHierarchy_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pParentIndices = pParentIndices,
        .unIndexArayCount = unIndexArayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetBoneHierarchy, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetBoneName(struct w_steam_iface *_this, uint64_t action, int32_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    struct IVRInput_IVRInput_005_GetBoneName_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .nBoneIndex = nBoneIndex,
        .pchBoneName = pchBoneName,
        .unNameBufferSize = unNameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetBoneName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_005_GetSkeletalReferenceTransforms_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eReferencePose = eReferencePose,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalReferenceTransforms, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalTrackingLevel(struct w_steam_iface *_this, uint64_t action, uint32_t *pSkeletalTrackingLevel)
{
    struct IVRInput_IVRInput_005_GetSkeletalTrackingLevel_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pSkeletalTrackingLevel = pSkeletalTrackingLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalTrackingLevel, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneData(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_005_GetSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalSummaryData(struct w_steam_iface *_this, uint64_t action, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    struct IVRInput_IVRInput_005_GetSkeletalSummaryData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pSkeletalSummaryData = pSkeletalSummaryData,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalSummaryData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    struct IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eMotionRange = eMotionRange,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetSkeletalBoneDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_005_DecompressSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .eTransformSpace = eTransformSpace,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_DecompressSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_005_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_005_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    struct IVRInput_IVRInput_005_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
        .unStringSectionsToInclude = unStringSectionsToInclude,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_005_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_005_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_005_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_005_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_ShowBindingsForActionSet, &params );
    return params._ret;
}

int8_t __thiscall winIVRInput_IVRInput_005_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    struct IVRInput_IVRInput_005_IsUsingLegacyInput_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_005_IsUsingLegacyInput, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_005_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_005, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_005_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_005,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetPoseActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetBoneCount)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetBoneHierarchy)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetBoneName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalTrackingLevel)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalSummaryData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_DecompressSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_ShowBindingsForActionSet)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_005_IsUsingLegacyInput)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_005(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_005_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_005(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_005_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(25);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 25 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_005_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_005_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_005_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_005_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_005_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_005_GetDigitalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_005_GetAnalogActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_005_GetPoseActionData, 6, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_005_GetSkeletalActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_005_GetBoneCount, 2, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_005_GetBoneHierarchy, 3, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_005_GetBoneName, 4, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms, 5, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_005_GetSkeletalTrackingLevel, 2, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_005_GetSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_005_GetSkeletalSummaryData, 2, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed, 5, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRInput_IVRInput_005_DecompressSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRInput_IVRInput_005_TriggerHapticVibrationAction, 6, TRUE, TRUE);
    init_thunk(&thunks[19], r, winIVRInput_IVRInput_005_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRInput_IVRInput_005_GetOriginLocalizedName, 4, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRInput_IVRInput_005_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRInput_IVRInput_005_ShowBindingsForActionSet, 4, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRInput_IVRInput_005_IsUsingLegacyInput, 0, FALSE, FALSE);
    for (i = 0; i < 25; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_005_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetDigitalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetAnalogActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetPoseActionDataForNextFrame, 32)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetBoneCount, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetBoneHierarchy, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetBoneName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalReferenceTransforms, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalTrackingLevel, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalBoneData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalSummaryData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_DecompressSkeletalBoneData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_TriggerHapticVibrationAction, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetOriginLocalizedName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_ShowBindingsForActionSet, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_006_IsUsingLegacyInput, 4)

uint32_t __thiscall winIVRInput_IVRInput_006_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_006_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_006_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_006_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_006_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_006_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_UpdateActionState, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRInput_IVRInput_006_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

uint32_t __thiscall winIVRInput_IVRInput_006_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_006_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_006_GetPoseActionDataRelativeToNow_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetPoseActionDataRelativeToNow, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_006_GetPoseActionDataForNextFrame_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetPoseActionDataForNextFrame, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, w_InputSkeletalActionData_t_113b *pActionData, uint32_t unActionDataSize)
{
    w_InputSkeletalActionData_t_113b w_pActionData;
    struct IVRInput_IVRInput_006_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetBoneCount(struct w_steam_iface *_this, uint64_t action, uint32_t *pBoneCount)
{
    struct IVRInput_IVRInput_006_GetBoneCount_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pBoneCount = pBoneCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetBoneCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetBoneHierarchy(struct w_steam_iface *_this, uint64_t action, int32_t *pParentIndices, uint32_t unIndexArayCount)
{
    struct IVRInput_IVRInput_006_GetBoneHierarchy_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pParentIndices = pParentIndices,
        .unIndexArayCount = unIndexArayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetBoneHierarchy, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetBoneName(struct w_steam_iface *_this, uint64_t action, int32_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    struct IVRInput_IVRInput_006_GetBoneName_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .nBoneIndex = nBoneIndex,
        .pchBoneName = pchBoneName,
        .unNameBufferSize = unNameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetBoneName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_006_GetSkeletalReferenceTransforms_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eReferencePose = eReferencePose,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalReferenceTransforms, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalTrackingLevel(struct w_steam_iface *_this, uint64_t action, uint32_t *pSkeletalTrackingLevel)
{
    struct IVRInput_IVRInput_006_GetSkeletalTrackingLevel_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pSkeletalTrackingLevel = pSkeletalTrackingLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalTrackingLevel, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalBoneData(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_006_GetSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalSummaryData(struct w_steam_iface *_this, uint64_t action, uint32_t eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    struct IVRInput_IVRInput_006_GetSkeletalSummaryData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eSummaryType = eSummaryType,
        .pSkeletalSummaryData = pSkeletalSummaryData,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalSummaryData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    struct IVRInput_IVRInput_006_GetSkeletalBoneDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eMotionRange = eMotionRange,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetSkeletalBoneDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_006_DecompressSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .eTransformSpace = eTransformSpace,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_DecompressSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_006_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_006_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    struct IVRInput_IVRInput_006_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
        .unStringSectionsToInclude = unStringSectionsToInclude,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_006_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_006_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_006_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_006_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_006_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_ShowBindingsForActionSet, &params );
    return params._ret;
}

int8_t __thiscall winIVRInput_IVRInput_006_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    struct IVRInput_IVRInput_006_IsUsingLegacyInput_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_006_IsUsingLegacyInput, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_006_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_006, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_006_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_006,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetPoseActionDataForNextFrame)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetBoneCount)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetBoneHierarchy)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetBoneName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalReferenceTransforms)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalTrackingLevel)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalSummaryData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_DecompressSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_ShowBindingsForActionSet)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_006_IsUsingLegacyInput)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_006(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_006_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_006(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_006_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(26);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 26 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_006_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_006_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_006_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_006_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_006_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_006_GetDigitalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_006_GetAnalogActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow, 6, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_006_GetPoseActionDataForNextFrame, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_006_GetSkeletalActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_006_GetBoneCount, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_006_GetBoneHierarchy, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_006_GetBoneName, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_006_GetSkeletalReferenceTransforms, 5, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_006_GetSkeletalTrackingLevel, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_006_GetSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_006_GetSkeletalSummaryData, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed, 5, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRInput_IVRInput_006_DecompressSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRInput_IVRInput_006_TriggerHapticVibrationAction, 6, TRUE, TRUE);
    init_thunk(&thunks[20], r, winIVRInput_IVRInput_006_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRInput_IVRInput_006_GetOriginLocalizedName, 4, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRInput_IVRInput_006_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRInput_IVRInput_006_ShowBindingsForActionSet, 4, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRInput_IVRInput_006_IsUsingLegacyInput, 0, FALSE, FALSE);
    for (i = 0; i < 26; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_006_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetDigitalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetAnalogActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetPoseActionDataForNextFrame, 32)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetBoneCount, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetBoneHierarchy, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetBoneName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalReferenceTransforms, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalTrackingLevel, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalBoneData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalSummaryData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_DecompressSkeletalBoneData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_TriggerHapticVibrationAction, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetOriginLocalizedName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_GetActionBindingInfo, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_ShowBindingsForActionSet, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_IsUsingLegacyInput, 4)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_007_OpenBindingUI, 28)

uint32_t __thiscall winIVRInput_IVRInput_007_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_007_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_007_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_007_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_007_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_007_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_UpdateActionState, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRInput_IVRInput_007_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

uint32_t __thiscall winIVRInput_IVRInput_007_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_007_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_007_GetPoseActionDataRelativeToNow_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetPoseActionDataRelativeToNow, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_007_GetPoseActionDataForNextFrame_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetPoseActionDataForNextFrame, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, w_InputSkeletalActionData_t_113b *pActionData, uint32_t unActionDataSize)
{
    w_InputSkeletalActionData_t_113b w_pActionData;
    struct IVRInput_IVRInput_007_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetBoneCount(struct w_steam_iface *_this, uint64_t action, uint32_t *pBoneCount)
{
    struct IVRInput_IVRInput_007_GetBoneCount_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pBoneCount = pBoneCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetBoneCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetBoneHierarchy(struct w_steam_iface *_this, uint64_t action, int32_t *pParentIndices, uint32_t unIndexArayCount)
{
    struct IVRInput_IVRInput_007_GetBoneHierarchy_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pParentIndices = pParentIndices,
        .unIndexArayCount = unIndexArayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetBoneHierarchy, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetBoneName(struct w_steam_iface *_this, uint64_t action, int32_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    struct IVRInput_IVRInput_007_GetBoneName_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .nBoneIndex = nBoneIndex,
        .pchBoneName = pchBoneName,
        .unNameBufferSize = unNameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetBoneName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_007_GetSkeletalReferenceTransforms_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eReferencePose = eReferencePose,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalReferenceTransforms, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalTrackingLevel(struct w_steam_iface *_this, uint64_t action, uint32_t *pSkeletalTrackingLevel)
{
    struct IVRInput_IVRInput_007_GetSkeletalTrackingLevel_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pSkeletalTrackingLevel = pSkeletalTrackingLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalTrackingLevel, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalBoneData(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_007_GetSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalSummaryData(struct w_steam_iface *_this, uint64_t action, uint32_t eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    struct IVRInput_IVRInput_007_GetSkeletalSummaryData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eSummaryType = eSummaryType,
        .pSkeletalSummaryData = pSkeletalSummaryData,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalSummaryData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    struct IVRInput_IVRInput_007_GetSkeletalBoneDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eMotionRange = eMotionRange,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetSkeletalBoneDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_007_DecompressSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .eTransformSpace = eTransformSpace,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_DecompressSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_007_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_007_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    struct IVRInput_IVRInput_007_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
        .unStringSectionsToInclude = unStringSectionsToInclude,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_007_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_GetActionBindingInfo(struct w_steam_iface *_this, uint64_t action, InputBindingInfo_t_1517 *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, uint32_t *punReturnedBindingInfoCount)
{
    struct IVRInput_IVRInput_007_GetActionBindingInfo_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pOriginInfo = pOriginInfo,
        .unBindingInfoSize = unBindingInfoSize,
        .unBindingInfoCount = unBindingInfoCount,
        .punReturnedBindingInfoCount = punReturnedBindingInfoCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_GetActionBindingInfo, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_007_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_007_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_ShowBindingsForActionSet, &params );
    return params._ret;
}

int8_t __thiscall winIVRInput_IVRInput_007_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    struct IVRInput_IVRInput_007_IsUsingLegacyInput_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_IsUsingLegacyInput, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_007_OpenBindingUI(struct w_steam_iface *_this, const char *pchAppKey, uint64_t ulActionSetHandle, uint64_t ulDeviceHandle, int8_t bShowOnDesktop)
{
    struct IVRInput_IVRInput_007_OpenBindingUI_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .ulActionSetHandle = ulActionSetHandle,
        .ulDeviceHandle = ulDeviceHandle,
        .bShowOnDesktop = bShowOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_007_OpenBindingUI, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_007_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_007, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_007_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_007,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetPoseActionDataForNextFrame)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetBoneCount)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetBoneHierarchy)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetBoneName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalReferenceTransforms)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalTrackingLevel)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalSummaryData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_DecompressSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_GetActionBindingInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_ShowBindingsForActionSet)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_IsUsingLegacyInput)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_007_OpenBindingUI)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_007(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_007_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_007(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_007_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(28);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 28 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_007_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_007_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_007_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_007_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_007_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_007_GetDigitalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_007_GetAnalogActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow, 6, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_007_GetPoseActionDataForNextFrame, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_007_GetSkeletalActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_007_GetBoneCount, 2, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_007_GetBoneHierarchy, 3, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_007_GetBoneName, 4, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_007_GetSkeletalReferenceTransforms, 5, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_007_GetSkeletalTrackingLevel, 2, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_007_GetSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_007_GetSkeletalSummaryData, 3, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed, 5, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRInput_IVRInput_007_DecompressSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRInput_IVRInput_007_TriggerHapticVibrationAction, 6, TRUE, TRUE);
    init_thunk(&thunks[20], r, winIVRInput_IVRInput_007_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRInput_IVRInput_007_GetOriginLocalizedName, 4, FALSE, FALSE);
    init_thunk(&thunks[22], r, winIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRInput_IVRInput_007_GetActionBindingInfo, 5, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRInput_IVRInput_007_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRInput_IVRInput_007_ShowBindingsForActionSet, 4, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRInput_IVRInput_007_IsUsingLegacyInput, 0, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRInput_IVRInput_007_OpenBindingUI, 4, FALSE, FALSE);
    for (i = 0; i < 28; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_007_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_SetActionManifestPath, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetActionSetHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetActionHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetInputSourceHandle, 12)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_UpdateActionState, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetDigitalActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetAnalogActionData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetPoseActionDataForNextFrame, 32)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalActionData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetDominantHand, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_SetDominantHand, 8)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetBoneCount, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetBoneHierarchy, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetBoneName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalReferenceTransforms, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalTrackingLevel, 16)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalBoneData, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalSummaryData, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_DecompressSkeletalBoneData, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_TriggerHapticVibrationAction, 36)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetActionOrigins, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetOriginLocalizedName, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetActionBindingInfo, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_ShowActionOrigins, 20)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_ShowBindingsForActionSet, 24)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetComponentStateForBinding, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_IsUsingLegacyInput, 4)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_OpenBindingUI, 28)
DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_010_GetBindingVariant, 20)

uint32_t __thiscall winIVRInput_IVRInput_010_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    struct IVRInput_IVRInput_010_SetActionManifestPath_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionManifestPath = pchActionManifestPath,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_SetActionManifestPath, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_010_GetActionSetHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionSetName = pchActionSetName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetActionSetHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_010_GetActionHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchActionName = pchActionName,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetActionHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, uint64_t *pHandle)
{
    struct IVRInput_IVRInput_010_GetInputSourceHandle_params params =
    {
        .linux_side = _this->u_iface,
        .pchInputSourcePath = pchInputSourcePath,
        .pHandle = pHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetInputSourceHandle, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    struct IVRInput_IVRInput_010_UpdateActionState_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_UpdateActionState, &params );
    return params._ret;
}

extern uint32_t __thiscall winIVRInput_IVRInput_010_GetDigitalActionData(struct w_steam_iface *_this, uint64_t action, w_InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice);

uint32_t __thiscall winIVRInput_IVRInput_010_GetAnalogActionData(struct w_steam_iface *_this, uint64_t action, w_InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputAnalogActionData_t w_pActionData;
    struct IVRInput_IVRInput_010_GetAnalogActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetAnalogActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, float fPredictedSecondsFromNow, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_010_GetPoseActionDataRelativeToNow_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .fPredictedSecondsFromNow = fPredictedSecondsFromNow,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetPoseActionDataRelativeToNow, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, uint64_t action, uint32_t eOrigin, w_InputPoseActionData_t *pActionData, uint32_t unActionDataSize, uint64_t ulRestrictToDevice)
{
    w_InputPoseActionData_t w_pActionData;
    struct IVRInput_IVRInput_010_GetPoseActionDataForNextFrame_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eOrigin = eOrigin,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetPoseActionDataForNextFrame, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalActionData(struct w_steam_iface *_this, uint64_t action, w_InputSkeletalActionData_t_113b *pActionData, uint32_t unActionDataSize)
{
    w_InputSkeletalActionData_t_113b w_pActionData;
    struct IVRInput_IVRInput_010_GetSkeletalActionData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pActionData = pActionData ? &w_pActionData : NULL,
        .unActionDataSize = unActionDataSize,
    };
    TRACE("%p\n", _this);
    unActionDataSize = min( unActionDataSize, sizeof(w_pActionData) );
    if (pActionData) memcpy( &w_pActionData, pActionData, unActionDataSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalActionData, &params );
    if (pActionData) memcpy( pActionData, &w_pActionData, unActionDataSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetDominantHand(struct w_steam_iface *_this, uint32_t *peDominantHand)
{
    struct IVRInput_IVRInput_010_GetDominantHand_params params =
    {
        .linux_side = _this->u_iface,
        .peDominantHand = peDominantHand,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetDominantHand, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_SetDominantHand(struct w_steam_iface *_this, uint32_t eDominantHand)
{
    struct IVRInput_IVRInput_010_SetDominantHand_params params =
    {
        .linux_side = _this->u_iface,
        .eDominantHand = eDominantHand,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_SetDominantHand, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetBoneCount(struct w_steam_iface *_this, uint64_t action, uint32_t *pBoneCount)
{
    struct IVRInput_IVRInput_010_GetBoneCount_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pBoneCount = pBoneCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetBoneCount, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetBoneHierarchy(struct w_steam_iface *_this, uint64_t action, int32_t *pParentIndices, uint32_t unIndexArayCount)
{
    struct IVRInput_IVRInput_010_GetBoneHierarchy_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pParentIndices = pParentIndices,
        .unIndexArayCount = unIndexArayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetBoneHierarchy, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetBoneName(struct w_steam_iface *_this, uint64_t action, int32_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    struct IVRInput_IVRInput_010_GetBoneName_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .nBoneIndex = nBoneIndex,
        .pchBoneName = pchBoneName,
        .unNameBufferSize = unNameBufferSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetBoneName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_010_GetSkeletalReferenceTransforms_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eReferencePose = eReferencePose,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalReferenceTransforms, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalTrackingLevel(struct w_steam_iface *_this, uint64_t action, uint32_t *pSkeletalTrackingLevel)
{
    struct IVRInput_IVRInput_010_GetSkeletalTrackingLevel_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pSkeletalTrackingLevel = pSkeletalTrackingLevel,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalTrackingLevel, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalBoneData(struct w_steam_iface *_this, uint64_t action, uint32_t eTransformSpace, uint32_t eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_010_GetSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eTransformSpace = eTransformSpace,
        .eMotionRange = eMotionRange,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalSummaryData(struct w_steam_iface *_this, uint64_t action, uint32_t eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    struct IVRInput_IVRInput_010_GetSkeletalSummaryData_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eSummaryType = eSummaryType,
        .pSkeletalSummaryData = pSkeletalSummaryData,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalSummaryData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, uint64_t action, uint32_t eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    struct IVRInput_IVRInput_010_GetSkeletalBoneDataCompressed_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .eMotionRange = eMotionRange,
        .pvCompressedData = pvCompressedData,
        .unCompressedSize = unCompressedSize,
        .punRequiredCompressedSize = punRequiredCompressedSize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetSkeletalBoneDataCompressed, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, uint32_t eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    struct IVRInput_IVRInput_010_DecompressSkeletalBoneData_params params =
    {
        .linux_side = _this->u_iface,
        .pvCompressedBuffer = pvCompressedBuffer,
        .unCompressedBufferSize = unCompressedBufferSize,
        .eTransformSpace = eTransformSpace,
        .pTransformArray = pTransformArray,
        .unTransformArrayCount = unTransformArrayCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_DecompressSkeletalBoneData, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_TriggerHapticVibrationAction(struct w_steam_iface *_this, uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice)
{
    struct IVRInput_IVRInput_010_TriggerHapticVibrationAction_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .fStartSecondsFromNow = fStartSecondsFromNow,
        .fDurationSeconds = fDurationSeconds,
        .fFrequency = fFrequency,
        .fAmplitude = fAmplitude,
        .ulRestrictToDevice = ulRestrictToDevice,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_TriggerHapticVibrationAction, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t digitalActionHandle, uint64_t *originsOut, uint32_t originOutCount)
{
    struct IVRInput_IVRInput_010_GetActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .digitalActionHandle = digitalActionHandle,
        .originsOut = originsOut,
        .originOutCount = originOutCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetOriginLocalizedName(struct w_steam_iface *_this, uint64_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    struct IVRInput_IVRInput_010_GetOriginLocalizedName_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pchNameArray = pchNameArray,
        .unNameArraySize = unNameArraySize,
        .unStringSectionsToInclude = unStringSectionsToInclude,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetOriginLocalizedName, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, uint64_t origin, w_InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    w_InputOriginInfo_t w_pOriginInfo;
    struct IVRInput_IVRInput_010_GetOriginTrackedDeviceInfo_params params =
    {
        .linux_side = _this->u_iface,
        .origin = origin,
        .pOriginInfo = pOriginInfo ? &w_pOriginInfo : NULL,
        .unOriginInfoSize = unOriginInfoSize,
    };
    TRACE("%p\n", _this);
    unOriginInfoSize = min( unOriginInfoSize, sizeof(w_pOriginInfo) );
    if (pOriginInfo) memcpy( &w_pOriginInfo, pOriginInfo, unOriginInfoSize );
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetOriginTrackedDeviceInfo, &params );
    if (pOriginInfo) memcpy( pOriginInfo, &w_pOriginInfo, unOriginInfoSize );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetActionBindingInfo(struct w_steam_iface *_this, uint64_t action, InputBindingInfo_t_11030 *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, uint32_t *punReturnedBindingInfoCount)
{
    struct IVRInput_IVRInput_010_GetActionBindingInfo_params params =
    {
        .linux_side = _this->u_iface,
        .action = action,
        .pOriginInfo = pOriginInfo,
        .unBindingInfoSize = unBindingInfoSize,
        .unBindingInfoCount = unBindingInfoCount,
        .punReturnedBindingInfoCount = punReturnedBindingInfoCount,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetActionBindingInfo, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_ShowActionOrigins(struct w_steam_iface *_this, uint64_t actionSetHandle, uint64_t ulActionHandle)
{
    struct IVRInput_IVRInput_010_ShowActionOrigins_params params =
    {
        .linux_side = _this->u_iface,
        .actionSetHandle = actionSetHandle,
        .ulActionHandle = ulActionHandle,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_ShowActionOrigins, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t_1016 *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, uint64_t originToHighlight)
{
    struct IVRInput_IVRInput_010_ShowBindingsForActionSet_params params =
    {
        .linux_side = _this->u_iface,
        .pSets = pSets,
        .unSizeOfVRSelectedActionSet_t = unSizeOfVRSelectedActionSet_t,
        .unSetCount = unSetCount,
        .originToHighlight = originToHighlight,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_ShowBindingsForActionSet, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetComponentStateForBinding(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const InputBindingInfo_t_11030 *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, RenderModel_ComponentState_t *pComponentState)
{
    struct IVRInput_IVRInput_010_GetComponentStateForBinding_params params =
    {
        .linux_side = _this->u_iface,
        .pchRenderModelName = pchRenderModelName,
        .pchComponentName = pchComponentName,
        .pOriginInfo = pOriginInfo,
        .unBindingInfoSize = unBindingInfoSize,
        .unBindingInfoCount = unBindingInfoCount,
        .pComponentState = pComponentState,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetComponentStateForBinding, &params );
    return params._ret;
}

int8_t __thiscall winIVRInput_IVRInput_010_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    struct IVRInput_IVRInput_010_IsUsingLegacyInput_params params =
    {
        .linux_side = _this->u_iface,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_IsUsingLegacyInput, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_OpenBindingUI(struct w_steam_iface *_this, const char *pchAppKey, uint64_t ulActionSetHandle, uint64_t ulDeviceHandle, int8_t bShowOnDesktop)
{
    struct IVRInput_IVRInput_010_OpenBindingUI_params params =
    {
        .linux_side = _this->u_iface,
        .pchAppKey = pchAppKey,
        .ulActionSetHandle = ulActionSetHandle,
        .ulDeviceHandle = ulDeviceHandle,
        .bShowOnDesktop = bShowOnDesktop,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_OpenBindingUI, &params );
    return params._ret;
}

uint32_t __thiscall winIVRInput_IVRInput_010_GetBindingVariant(struct w_steam_iface *_this, uint64_t ulDevicePath, char *pchVariantArray, uint32_t unVariantArraySize)
{
    struct IVRInput_IVRInput_010_GetBindingVariant_params params =
    {
        .linux_side = _this->u_iface,
        .ulDevicePath = ulDevicePath,
        .pchVariantArray = pchVariantArray,
        .unVariantArraySize = unVariantArraySize,
    };
    TRACE("%p\n", _this);
    VRCLIENT_CALL( IVRInput_IVRInput_010_GetBindingVariant, &params );
    return params._ret;
}

extern vtable_ptr winIVRInput_IVRInput_010_vtable;

DEFINE_RTTI_DATA0(winIVRInput_IVRInput_010, 0, ".?AVIVRInput@@")

__ASM_BLOCK_BEGIN(winIVRInput_IVRInput_010_vtables)
    __ASM_VTABLE(winIVRInput_IVRInput_010,
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_SetActionManifestPath)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetActionSetHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetActionHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetInputSourceHandle)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_UpdateActionState)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetDigitalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetAnalogActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetPoseActionDataForNextFrame)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalActionData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetDominantHand)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_SetDominantHand)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetBoneCount)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetBoneHierarchy)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetBoneName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalReferenceTransforms)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalTrackingLevel)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalSummaryData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_DecompressSkeletalBoneData)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_TriggerHapticVibrationAction)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetOriginLocalizedName)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetActionBindingInfo)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_ShowActionOrigins)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_ShowBindingsForActionSet)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetComponentStateForBinding)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_IsUsingLegacyInput)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_OpenBindingUI)
        VTABLE_ADD_FUNC(winIVRInput_IVRInput_010_GetBindingVariant)
    );
__ASM_BLOCK_END

struct w_steam_iface *create_winIVRInput_IVRInput_010(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_010_vtable;
    r->u_iface = u_iface;
    return r;
}

void destroy_winIVRInput_IVRInput_010(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

struct w_steam_iface *create_winIVRInput_IVRInput_010_FnTable(void *u_iface)
{
    struct w_steam_iface *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(*r));
    struct thunk *thunks = alloc_thunks(32);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 32 * sizeof(*vtable));
    int i;

    TRACE("-> %p, vtable %p, thunks %p\n", r, vtable, thunks);
    init_thunk(&thunks[0], r, winIVRInput_IVRInput_010_SetActionManifestPath, 1, FALSE, FALSE);
    init_thunk(&thunks[1], r, winIVRInput_IVRInput_010_GetActionSetHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[2], r, winIVRInput_IVRInput_010_GetActionHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[3], r, winIVRInput_IVRInput_010_GetInputSourceHandle, 2, FALSE, FALSE);
    init_thunk(&thunks[4], r, winIVRInput_IVRInput_010_UpdateActionState, 3, FALSE, FALSE);
    init_thunk(&thunks[5], r, winIVRInput_IVRInput_010_GetDigitalActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[6], r, winIVRInput_IVRInput_010_GetAnalogActionData, 4, FALSE, FALSE);
    init_thunk(&thunks[7], r, winIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow, 6, TRUE, FALSE);
    init_thunk(&thunks[8], r, winIVRInput_IVRInput_010_GetPoseActionDataForNextFrame, 5, FALSE, FALSE);
    init_thunk(&thunks[9], r, winIVRInput_IVRInput_010_GetSkeletalActionData, 3, FALSE, FALSE);
    init_thunk(&thunks[10], r, winIVRInput_IVRInput_010_GetDominantHand, 1, FALSE, FALSE);
    init_thunk(&thunks[11], r, winIVRInput_IVRInput_010_SetDominantHand, 1, FALSE, FALSE);
    init_thunk(&thunks[12], r, winIVRInput_IVRInput_010_GetBoneCount, 2, FALSE, FALSE);
    init_thunk(&thunks[13], r, winIVRInput_IVRInput_010_GetBoneHierarchy, 3, FALSE, FALSE);
    init_thunk(&thunks[14], r, winIVRInput_IVRInput_010_GetBoneName, 4, FALSE, FALSE);
    init_thunk(&thunks[15], r, winIVRInput_IVRInput_010_GetSkeletalReferenceTransforms, 5, FALSE, FALSE);
    init_thunk(&thunks[16], r, winIVRInput_IVRInput_010_GetSkeletalTrackingLevel, 2, FALSE, FALSE);
    init_thunk(&thunks[17], r, winIVRInput_IVRInput_010_GetSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[18], r, winIVRInput_IVRInput_010_GetSkeletalSummaryData, 3, FALSE, FALSE);
    init_thunk(&thunks[19], r, winIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed, 5, FALSE, FALSE);
    init_thunk(&thunks[20], r, winIVRInput_IVRInput_010_DecompressSkeletalBoneData, 5, FALSE, FALSE);
    init_thunk(&thunks[21], r, winIVRInput_IVRInput_010_TriggerHapticVibrationAction, 6, TRUE, TRUE);
    init_thunk(&thunks[22], r, winIVRInput_IVRInput_010_GetActionOrigins, 4, FALSE, FALSE);
    init_thunk(&thunks[23], r, winIVRInput_IVRInput_010_GetOriginLocalizedName, 4, FALSE, FALSE);
    init_thunk(&thunks[24], r, winIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo, 3, FALSE, FALSE);
    init_thunk(&thunks[25], r, winIVRInput_IVRInput_010_GetActionBindingInfo, 5, FALSE, FALSE);
    init_thunk(&thunks[26], r, winIVRInput_IVRInput_010_ShowActionOrigins, 2, FALSE, FALSE);
    init_thunk(&thunks[27], r, winIVRInput_IVRInput_010_ShowBindingsForActionSet, 4, FALSE, FALSE);
    init_thunk(&thunks[28], r, winIVRInput_IVRInput_010_GetComponentStateForBinding, 6, FALSE, FALSE);
    init_thunk(&thunks[29], r, winIVRInput_IVRInput_010_IsUsingLegacyInput, 0, FALSE, FALSE);
    init_thunk(&thunks[30], r, winIVRInput_IVRInput_010_OpenBindingUI, 4, FALSE, FALSE);
    init_thunk(&thunks[31], r, winIVRInput_IVRInput_010_GetBindingVariant, 3, FALSE, FALSE);
    for (i = 0; i < 32; i++)
        vtable[i] = &thunks[i];
    r->u_iface = u_iface;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_010_FnTable(struct w_steam_iface *object)
{
    TRACE("%p\n", object);
    VirtualFree(object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, object->vtable);
    HeapFree(GetProcessHeap(), 0, object);
}

void init_winIVRInput_rtti( char *base )
{
#ifdef __x86_64__
    init_winIVRInput_IVRInput_003_rtti( base );
    init_winIVRInput_IVRInput_004_rtti( base );
    init_winIVRInput_IVRInput_005_rtti( base );
    init_winIVRInput_IVRInput_006_rtti( base );
    init_winIVRInput_IVRInput_007_rtti( base );
    init_winIVRInput_IVRInput_010_rtti( base );
#endif /* __x86_64__ */
}
