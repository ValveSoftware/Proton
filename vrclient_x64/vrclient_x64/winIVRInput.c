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

#include "cppIVRInput_IVRInput_005.h"

typedef struct __winIVRInput_IVRInput_005 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRInput_IVRInput_005;

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_SetActionManifestPath, 12)
EVRInputError __thiscall winIVRInput_IVRInput_005_SetActionManifestPath(winIVRInput_IVRInput_005 *_this, const char * pchActionManifestPath)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_SetActionManifestPath(_this->linux_side, pchActionManifestPath);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionSetHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionSetHandle(winIVRInput_IVRInput_005 *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetActionSetHandle(_this->linux_side, pchActionSetName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionHandle(winIVRInput_IVRInput_005 *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetActionHandle(_this->linux_side, pchActionName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetInputSourceHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetInputSourceHandle(winIVRInput_IVRInput_005 *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetInputSourceHandle(_this->linux_side, pchInputSourcePath, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_UpdateActionState, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_UpdateActionState(winIVRInput_IVRInput_005 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_UpdateActionState(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetDigitalActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetDigitalActionData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetDigitalActionData(_this->linux_side, action, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetAnalogActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetAnalogActionData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetAnalogActionData(_this->linux_side, action, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetPoseActionData, 40)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetPoseActionData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetPoseActionData(_this->linux_side, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalActionData, 24)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalActionData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, InputSkeletalActionData_t * pActionData, uint32_t unActionDataSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalActionData(_this->linux_side, action, pActionData, unActionDataSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneCount, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneCount(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, uint32_t * pBoneCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetBoneCount(_this->linux_side, action, pBoneCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneHierarchy, 24)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneHierarchy(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, BoneIndex_t * pParentIndices, uint32_t unIndexArayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetBoneHierarchy(_this->linux_side, action, pParentIndices, unIndexArayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetBoneName, 28)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetBoneName(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, BoneIndex_t nBoneIndex, char * pchBoneName, uint32_t unNameBufferSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetBoneName(_this->linux_side, action, nBoneIndex, pchBoneName, unNameBufferSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(_this->linux_side, action, eTransformSpace, eReferencePose, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalTrackingLevel, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalTrackingLevel(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, EVRSkeletalTrackingLevel * pSkeletalTrackingLevel)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel(_this->linux_side, action, pSkeletalTrackingLevel);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalBoneData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalBoneData(_this->linux_side, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalSummaryData, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalSummaryData(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, VRSkeletalSummaryData_t * pSkeletalSummaryData)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalSummaryData(_this->linux_side, action, pSkeletalSummaryData);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed, 36)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(_this->linux_side, action, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_DecompressSkeletalBoneData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_DecompressSkeletalBoneData(winIVRInput_IVRInput_005 *_this, const void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_DecompressSkeletalBoneData(_this->linux_side, pvCompressedBuffer, unCompressedBufferSize, eTransformSpace, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_TriggerHapticVibrationAction, 36)
EVRInputError __thiscall winIVRInput_IVRInput_005_TriggerHapticVibrationAction(winIVRInput_IVRInput_005 *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_TriggerHapticVibrationAction(_this->linux_side, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetActionOrigins, 32)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetActionOrigins(winIVRInput_IVRInput_005 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetActionOrigins(_this->linux_side, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetOriginLocalizedName, 28)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetOriginLocalizedName(winIVRInput_IVRInput_005 *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetOriginLocalizedName(_this->linux_side, origin, pchNameArray, unNameArraySize, unStringSectionsToInclude);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo, 24)
EVRInputError __thiscall winIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(winIVRInput_IVRInput_005 *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(_this->linux_side, origin, pOriginInfo, unOriginInfoSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_ShowActionOrigins, 20)
EVRInputError __thiscall winIVRInput_IVRInput_005_ShowActionOrigins(winIVRInput_IVRInput_005 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_ShowActionOrigins(_this->linux_side, actionSetHandle, ulActionHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_005_ShowBindingsForActionSet, 28)
EVRInputError __thiscall winIVRInput_IVRInput_005_ShowBindingsForActionSet(winIVRInput_IVRInput_005 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_005_ShowBindingsForActionSet(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
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
    );
#ifndef __GNUC__
}
#endif

winIVRInput_IVRInput_005 *create_winIVRInput_IVRInput_005(void *linux_side)
{
    winIVRInput_IVRInput_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_005));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_005_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRInput_IVRInput_005(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRInput_IVRInput_005 *create_winIVRInput_IVRInput_005_FnTable(void *linux_side)
{
    winIVRInput_IVRInput_005 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_005));
    struct thunk *thunks = alloc_thunks(24);
    struct thunk **vtable = HeapAlloc(GetProcessHeap(), 0, 24 * sizeof(*vtable));
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
    for (i = 0; i < 24; i++)
        vtable[i] = &thunks[i];
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_005_FnTable(void *object)
{
    winIVRInput_IVRInput_005 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRInput_IVRInput_004.h"

typedef struct __winIVRInput_IVRInput_004 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRInput_IVRInput_004;

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_SetActionManifestPath, 12)
EVRInputError __thiscall winIVRInput_IVRInput_004_SetActionManifestPath(winIVRInput_IVRInput_004 *_this, const char * pchActionManifestPath)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_SetActionManifestPath(_this->linux_side, pchActionManifestPath);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionSetHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionSetHandle(winIVRInput_IVRInput_004 *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetActionSetHandle(_this->linux_side, pchActionSetName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionHandle(winIVRInput_IVRInput_004 *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetActionHandle(_this->linux_side, pchActionName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetInputSourceHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetInputSourceHandle(winIVRInput_IVRInput_004 *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetInputSourceHandle(_this->linux_side, pchInputSourcePath, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_UpdateActionState, 20)
EVRInputError __thiscall winIVRInput_IVRInput_004_UpdateActionState(winIVRInput_IVRInput_004 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_UpdateActionState(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetDigitalActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetDigitalActionData(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetDigitalActionData(_this->linux_side, action, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetAnalogActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetAnalogActionData(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetAnalogActionData(_this->linux_side, action, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetPoseActionData, 40)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetPoseActionData(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetPoseActionData(_this->linux_side, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalActionData(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, InputSkeletalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetSkeletalActionData(_this->linux_side, action, pActionData, unActionDataSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalBoneData, 40)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneData(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetSkeletalBoneData(_this->linux_side, action, eTransformSpace, eMotionRange, pTransformArray, unTransformArrayCount, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed, 48)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetSkeletalBoneDataCompressed(_this->linux_side, action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_DecompressSkeletalBoneData, 36)
EVRInputError __thiscall winIVRInput_IVRInput_004_DecompressSkeletalBoneData(winIVRInput_IVRInput_004 *_this, void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace * peTransformSpace, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_DecompressSkeletalBoneData(_this->linux_side, pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_TriggerHapticVibrationAction, 36)
EVRInputError __thiscall winIVRInput_IVRInput_004_TriggerHapticVibrationAction(winIVRInput_IVRInput_004 *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_TriggerHapticVibrationAction(_this->linux_side, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetActionOrigins, 32)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetActionOrigins(winIVRInput_IVRInput_004 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetActionOrigins(_this->linux_side, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetOriginLocalizedName, 24)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetOriginLocalizedName(winIVRInput_IVRInput_004 *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetOriginLocalizedName(_this->linux_side, origin, pchNameArray, unNameArraySize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo, 24)
EVRInputError __thiscall winIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(winIVRInput_IVRInput_004 *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_GetOriginTrackedDeviceInfo(_this->linux_side, origin, pOriginInfo, unOriginInfoSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_ShowActionOrigins, 20)
EVRInputError __thiscall winIVRInput_IVRInput_004_ShowActionOrigins(winIVRInput_IVRInput_004 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_ShowActionOrigins(_this->linux_side, actionSetHandle, ulActionHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_004_ShowBindingsForActionSet, 28)
EVRInputError __thiscall winIVRInput_IVRInput_004_ShowBindingsForActionSet(winIVRInput_IVRInput_004 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_004_ShowBindingsForActionSet(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
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

winIVRInput_IVRInput_004 *create_winIVRInput_IVRInput_004(void *linux_side)
{
    winIVRInput_IVRInput_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_004));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_004_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRInput_IVRInput_004(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRInput_IVRInput_004 *create_winIVRInput_IVRInput_004_FnTable(void *linux_side)
{
    winIVRInput_IVRInput_004 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_004));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_004_FnTable(void *object)
{
    winIVRInput_IVRInput_004 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

#include "cppIVRInput_IVRInput_003.h"

typedef struct __winIVRInput_IVRInput_003 {
    vtable_ptr *vtable;
    void *linux_side;
} winIVRInput_IVRInput_003;

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_SetActionManifestPath, 12)
EVRInputError __thiscall winIVRInput_IVRInput_003_SetActionManifestPath(winIVRInput_IVRInput_003 *_this, const char * pchActionManifestPath)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_SetActionManifestPath(_this->linux_side, pchActionManifestPath);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionSetHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionSetHandle(winIVRInput_IVRInput_003 *_this, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetActionSetHandle(_this->linux_side, pchActionSetName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionHandle(winIVRInput_IVRInput_003 *_this, const char * pchActionName, VRActionHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetActionHandle(_this->linux_side, pchActionName, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetInputSourceHandle, 20)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetInputSourceHandle(winIVRInput_IVRInput_003 *_this, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetInputSourceHandle(_this->linux_side, pchInputSourcePath, pHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_UpdateActionState, 20)
EVRInputError __thiscall winIVRInput_IVRInput_003_UpdateActionState(winIVRInput_IVRInput_003 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_UpdateActionState(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetDigitalActionData, 24)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetDigitalActionData(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetDigitalActionData(_this->linux_side, action, pActionData, unActionDataSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetAnalogActionData, 24)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetAnalogActionData(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetAnalogActionData(_this->linux_side, action, pActionData, unActionDataSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetPoseActionData, 32)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetPoseActionData(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetPoseActionData(_this->linux_side, action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetSkeletalActionData, 44)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetSkeletalActionData(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, InputSkeletonActionData_t * pActionData, uint32_t unActionDataSize, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetSkeletalActionData(_this->linux_side, action, eBoneParent, fPredictedSecondsFromNow, pActionData, unActionDataSize, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed, 40)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(_this->linux_side, action, eBoneParent, fPredictedSecondsFromNow, pvCompressedData, unCompressedSize, punRequiredCompressedSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_UncompressSkeletalActionData, 36)
EVRInputError __thiscall winIVRInput_IVRInput_003_UncompressSkeletalActionData(winIVRInput_IVRInput_003 *_this, void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace * peBoneParent, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_UncompressSkeletalActionData(_this->linux_side, pvCompressedBuffer, unCompressedBufferSize, peBoneParent, pTransformArray, unTransformArrayCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_TriggerHapticVibrationAction, 28)
EVRInputError __thiscall winIVRInput_IVRInput_003_TriggerHapticVibrationAction(winIVRInput_IVRInput_003 *_this, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_TriggerHapticVibrationAction(_this->linux_side, action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetActionOrigins, 32)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetActionOrigins(winIVRInput_IVRInput_003 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetActionOrigins(_this->linux_side, actionSetHandle, digitalActionHandle, originsOut, originOutCount);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetOriginLocalizedName, 24)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetOriginLocalizedName(winIVRInput_IVRInput_003 *_this, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetOriginLocalizedName(_this->linux_side, origin, pchNameArray, unNameArraySize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo, 24)
EVRInputError __thiscall winIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(winIVRInput_IVRInput_003 *_this, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(_this->linux_side, origin, pOriginInfo, unOriginInfoSize);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_ShowActionOrigins, 20)
EVRInputError __thiscall winIVRInput_IVRInput_003_ShowActionOrigins(winIVRInput_IVRInput_003 *_this, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_ShowActionOrigins(_this->linux_side, actionSetHandle, ulActionHandle);
}

DEFINE_THISCALL_WRAPPER(winIVRInput_IVRInput_003_ShowBindingsForActionSet, 28)
EVRInputError __thiscall winIVRInput_IVRInput_003_ShowBindingsForActionSet(winIVRInput_IVRInput_003 *_this, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    TRACE("%p\n", _this);
    return cppIVRInput_IVRInput_003_ShowBindingsForActionSet(_this->linux_side, pSets, unSizeOfVRSelectedActionSet_t, unSetCount, originToHighlight);
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

winIVRInput_IVRInput_003 *create_winIVRInput_IVRInput_003(void *linux_side)
{
    winIVRInput_IVRInput_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_003));
    TRACE("-> %p\n", r);
    r->vtable = &winIVRInput_IVRInput_003_vtable;
    r->linux_side = linux_side;
    return r;
}

void destroy_winIVRInput_IVRInput_003(void *object)
{
    TRACE("%p\n", object);
    HeapFree(GetProcessHeap(), 0, object);
}

winIVRInput_IVRInput_003 *create_winIVRInput_IVRInput_003_FnTable(void *linux_side)
{
    winIVRInput_IVRInput_003 *r = HeapAlloc(GetProcessHeap(), HEAP_ZERO_MEMORY, sizeof(winIVRInput_IVRInput_003));
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
    r->linux_side = linux_side;
    r->vtable = (void *)vtable;
    return r;
}

void destroy_winIVRInput_IVRInput_003_FnTable(void *object)
{
    winIVRInput_IVRInput_003 *win_object = object;
    TRACE("%p\n", win_object);
    VirtualFree(win_object->vtable[0], 0, MEM_RELEASE);
    HeapFree(GetProcessHeap(), 0, win_object->vtable);
    HeapFree(GetProcessHeap(), 0, win_object);
}

