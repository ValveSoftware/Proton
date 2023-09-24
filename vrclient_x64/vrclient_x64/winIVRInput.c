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

#include "cppIVRInput_IVRInput_003.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_003_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetDigitalActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetPoseActionData(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetPoseActionData(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, winInputSkeletonActionData_t_1015 *pActionData, uint32_t unActionDataSize, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetSkeletalActionData(_this->u_iface, action, eBoneParent, fPredictedSecondsFromNow, pActionData, unActionDataSize, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(_this->u_iface, action, eBoneParent, fPredictedSecondsFromNow, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_UncompressSkeletalActionData(struct w_steam_iface *_this, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace *peBoneParent, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_UncompressSkeletalActionData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, peBoneParent, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_003_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_003_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRInput_IVRInput_004.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_004_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1017 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = ivrinput_get_digital_action_data(cppIVRInput_IVRInput_004_GetDigitalActionData, _this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice, 4);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1017 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetPoseActionData(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1017 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetPoseActionData(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputSkeletalActionData_t_1017 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetSkeletalActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetSkeletalBoneData(_this->u_iface, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(_this->u_iface, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_DecompressSkeletalBoneData(struct w_steam_iface *_this, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace *peTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_DecompressSkeletalBoneData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_004_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_004_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_004_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRInput_IVRInput_005.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_005_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1322 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = ivrinput_get_digital_action_data(cppIVRInput_IVRInput_005_GetDigitalActionData, _this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice, 5);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1322 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetPoseActionData(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1322 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetPoseActionData(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputSkeletalActionData_t_1322 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneCount(struct w_steam_iface *_this, VRActionHandle_t action, uint32_t *pBoneCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetBoneCount(_this->u_iface, action, pBoneCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneHierarchy(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t *pParentIndices, uint32_t unIndexArayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetBoneHierarchy(_this->u_iface, action, pParentIndices, unIndexArayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneName(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetBoneName(_this->u_iface, action, nBoneIndex, pchBoneName, unNameBufferSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(_this->u_iface, action, eTransformSpace, eReferencePose, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalTrackingLevel(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel *pSkeletalTrackingLevel)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel(_this->u_iface, action, pSkeletalTrackingLevel);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalBoneData(_this->u_iface, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalSummaryData(struct w_steam_iface *_this, VRActionHandle_t action, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalSummaryData(_this->u_iface, action, pSkeletalSummaryData);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(_this->u_iface, action, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_DecompressSkeletalBoneData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, eTransformSpace, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize, unStringSectionsToInclude);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_005_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

bool __thiscall winIVRInput_IVRInput_005_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_005_IsUsingLegacyInput(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_005_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRInput_IVRInput_006.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_006_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = ivrinput_get_digital_action_data(cppIVRInput_IVRInput_006_GetDigitalActionData, _this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice, 6);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetPoseActionDataRelativeToNow(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, winInputPoseActionData_t_1418 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetPoseActionDataForNextFrame(_this->u_iface, action, eOrigin, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputSkeletalActionData_t_1418 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetBoneCount(struct w_steam_iface *_this, VRActionHandle_t action, uint32_t *pBoneCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetBoneCount(_this->u_iface, action, pBoneCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetBoneHierarchy(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t *pParentIndices, uint32_t unIndexArayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetBoneHierarchy(_this->u_iface, action, pParentIndices, unIndexArayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetBoneName(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetBoneName(_this->u_iface, action, nBoneIndex, pchBoneName, unNameBufferSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalReferenceTransforms(_this->u_iface, action, eTransformSpace, eReferencePose, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalTrackingLevel(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel *pSkeletalTrackingLevel)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalTrackingLevel(_this->u_iface, action, pSkeletalTrackingLevel);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalBoneData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalBoneData(_this->u_iface, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalSummaryData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSummaryType eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalSummaryData(_this->u_iface, action, eSummaryType, pSkeletalSummaryData);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetSkeletalBoneDataCompressed(_this->u_iface, action, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_DecompressSkeletalBoneData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, eTransformSpace, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize, unStringSectionsToInclude);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_006_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

bool __thiscall winIVRInput_IVRInput_006_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_006_IsUsingLegacyInput(_this->u_iface);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_006_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRInput_IVRInput_007.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_007_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1916 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = ivrinput_get_digital_action_data(cppIVRInput_IVRInput_007_GetDigitalActionData, _this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice, 7);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1916 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1916 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetPoseActionDataRelativeToNow(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, winInputPoseActionData_t_1916 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetPoseActionDataForNextFrame(_this->u_iface, action, eOrigin, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputSkeletalActionData_t_1916 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetBoneCount(struct w_steam_iface *_this, VRActionHandle_t action, uint32_t *pBoneCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetBoneCount(_this->u_iface, action, pBoneCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetBoneHierarchy(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t *pParentIndices, uint32_t unIndexArayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetBoneHierarchy(_this->u_iface, action, pParentIndices, unIndexArayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetBoneName(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetBoneName(_this->u_iface, action, nBoneIndex, pchBoneName, unNameBufferSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalReferenceTransforms(_this->u_iface, action, eTransformSpace, eReferencePose, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalTrackingLevel(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel *pSkeletalTrackingLevel)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalTrackingLevel(_this->u_iface, action, pSkeletalTrackingLevel);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalBoneData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalBoneData(_this->u_iface, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalSummaryData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSummaryType eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalSummaryData(_this->u_iface, action, eSummaryType, pSkeletalSummaryData);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetSkeletalBoneDataCompressed(_this->u_iface, action, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_DecompressSkeletalBoneData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, eTransformSpace, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize, unStringSectionsToInclude);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_GetActionBindingInfo(struct w_steam_iface *_this, VRActionHandle_t action, InputBindingInfo_t *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, uint32_t *punReturnedBindingInfoCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_GetActionBindingInfo(_this->u_iface, action, pOriginInfo, unBindingInfoSize, unBindingInfoCount, punReturnedBindingInfoCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

bool __thiscall winIVRInput_IVRInput_007_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_IsUsingLegacyInput(_this->u_iface);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_007_OpenBindingUI(struct w_steam_iface *_this, const char *pchAppKey, VRActionSetHandle_t ulActionSetHandle, VRInputValueHandle_t ulDeviceHandle, bool bShowOnDesktop)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_007_OpenBindingUI(_this->u_iface, pchAppKey, ulActionSetHandle, ulDeviceHandle, bShowOnDesktop);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_007_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

#include "cppIVRInput_IVRInput_010.h"

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

EVRInputError __thiscall winIVRInput_IVRInput_010_SetActionManifestPath(struct w_steam_iface *_this, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    char lin_pchActionManifestPath[PATH_MAX];
    vrclient_dos_path_to_unix_path(pchActionManifestPath, lin_pchActionManifestPath);
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_SetActionManifestPath(_this->u_iface, pchActionManifestPath ? lin_pchActionManifestPath : NULL);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetActionSetHandle(struct w_steam_iface *_this, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetActionSetHandle(_this->u_iface, pchActionSetName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetActionHandle(struct w_steam_iface *_this, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetActionHandle(_this->u_iface, pchActionName, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetInputSourceHandle(struct w_steam_iface *_this, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetInputSourceHandle(_this->u_iface, pchInputSourcePath, pHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_UpdateActionState(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_UpdateActionState(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetDigitalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputDigitalActionData_t_1267 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = ivrinput_get_digital_action_data(cppIVRInput_IVRInput_010_GetDigitalActionData, _this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice, 10);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetAnalogActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputAnalogActionData_t_1267 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetAnalogActionData(_this->u_iface, action, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1267 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetPoseActionDataRelativeToNow(_this->u_iface, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetPoseActionDataForNextFrame(struct w_steam_iface *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, winInputPoseActionData_t_1267 *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetPoseActionDataForNextFrame(_this->u_iface, action, eOrigin, pActionData, unActionDataSize, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalActionData(struct w_steam_iface *_this, VRActionHandle_t action, winInputSkeletalActionData_t_1267 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalActionData(_this->u_iface, action, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetDominantHand(struct w_steam_iface *_this, ETrackedControllerRole *peDominantHand)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetDominantHand(_this->u_iface, peDominantHand);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_SetDominantHand(struct w_steam_iface *_this, ETrackedControllerRole eDominantHand)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_SetDominantHand(_this->u_iface, eDominantHand);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetBoneCount(struct w_steam_iface *_this, VRActionHandle_t action, uint32_t *pBoneCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetBoneCount(_this->u_iface, action, pBoneCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetBoneHierarchy(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t *pParentIndices, uint32_t unIndexArayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetBoneHierarchy(_this->u_iface, action, pParentIndices, unIndexArayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetBoneName(struct w_steam_iface *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char *pchBoneName, uint32_t unNameBufferSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetBoneName(_this->u_iface, action, nBoneIndex, pchBoneName, unNameBufferSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalReferenceTransforms(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalReferenceTransforms(_this->u_iface, action, eTransformSpace, eReferencePose, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalTrackingLevel(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel *pSkeletalTrackingLevel)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalTrackingLevel(_this->u_iface, action, pSkeletalTrackingLevel);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalBoneData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalBoneData(_this->u_iface, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalSummaryData(struct w_steam_iface *_this, VRActionHandle_t action, EVRSummaryType eSummaryType, VRSkeletalSummaryData_t *pSkeletalSummaryData)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalSummaryData(_this->u_iface, action, eSummaryType, pSkeletalSummaryData);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed(struct w_steam_iface *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetSkeletalBoneDataCompressed(_this->u_iface, action, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_DecompressSkeletalBoneData(struct w_steam_iface *_this, const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_DecompressSkeletalBoneData(_this->u_iface, pvCompressedBuffer, unCompressedBufferSize, eTransformSpace, pTransformArray, unTransformArrayCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_TriggerHapticVibrationAction(struct w_steam_iface *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_TriggerHapticVibrationAction(_this->u_iface, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetActionOrigins(_this->u_iface, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetOriginLocalizedName(struct w_steam_iface *_this, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetOriginLocalizedName(_this->u_iface, origin, pchNameArray, unNameArraySize, unStringSectionsToInclude);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo(struct w_steam_iface *_this, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetOriginTrackedDeviceInfo(_this->u_iface, origin, pOriginInfo, unOriginInfoSize);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetActionBindingInfo(struct w_steam_iface *_this, VRActionHandle_t action, InputBindingInfo_t *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, uint32_t *punReturnedBindingInfoCount)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetActionBindingInfo(_this->u_iface, action, pOriginInfo, unBindingInfoSize, unBindingInfoCount, punReturnedBindingInfoCount);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_ShowActionOrigins(struct w_steam_iface *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_ShowActionOrigins(_this->u_iface, actionSetHandle, ulActionHandle);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_ShowBindingsForActionSet(struct w_steam_iface *_this, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_ShowBindingsForActionSet(_this->u_iface, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetComponentStateForBinding(struct w_steam_iface *_this, const char *pchRenderModelName, const char *pchComponentName, const InputBindingInfo_t *pOriginInfo, uint32_t unBindingInfoSize, uint32_t unBindingInfoCount, RenderModel_ComponentState_t *pComponentState)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetComponentStateForBinding(_this->u_iface, pchRenderModelName, pchComponentName, pOriginInfo, unBindingInfoSize, unBindingInfoCount, pComponentState);
    return _ret;
}

bool __thiscall winIVRInput_IVRInput_010_IsUsingLegacyInput(struct w_steam_iface *_this)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_IsUsingLegacyInput(_this->u_iface);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_OpenBindingUI(struct w_steam_iface *_this, const char *pchAppKey, VRActionSetHandle_t ulActionSetHandle, VRInputValueHandle_t ulDeviceHandle, bool bShowOnDesktop)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_OpenBindingUI(_this->u_iface, pchAppKey, ulActionSetHandle, ulDeviceHandle, bShowOnDesktop);
    return _ret;
}

EVRInputError __thiscall winIVRInput_IVRInput_010_GetBindingVariant(struct w_steam_iface *_this, VRInputValueHandle_t ulDevicePath, char *pchVariantArray, uint32_t unVariantArraySize)
{
    EVRInputError _ret;
    TRACE("%p\n", _this);
    _ret = cppIVRInput_IVRInput_010_GetBindingVariant(_this->u_iface, ulDevicePath, pchVariantArray, unVariantArraySize);
    return _ret;
}

extern vtable_ptr winIVRInput_IVRInput_010_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
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
#ifndef __GNUC__
}
#endif

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

