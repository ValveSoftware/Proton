#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.1.3b/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_005.h"
#ifdef __cplusplus
extern "C" {
#endif
vr::EVRInputError cppIVRInput_IVRInput_005_SetActionManifestPath(void *linux_side, const char * pchActionManifestPath)
{
    return ((IVRInput*)linux_side)->SetActionManifestPath((const char *)pchActionManifestPath);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetActionSetHandle(void *linux_side, const char * pchActionSetName, VRActionSetHandle_t * pHandle)
{
    return ((IVRInput*)linux_side)->GetActionSetHandle((const char *)pchActionSetName, (vr::VRActionSetHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetActionHandle(void *linux_side, const char * pchActionName, VRActionHandle_t * pHandle)
{
    return ((IVRInput*)linux_side)->GetActionHandle((const char *)pchActionName, (vr::VRActionHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetInputSourceHandle(void *linux_side, const char * pchInputSourcePath, VRInputValueHandle_t * pHandle)
{
    return ((IVRInput*)linux_side)->GetInputSourceHandle((const char *)pchInputSourcePath, (vr::VRInputValueHandle_t *)pHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_005_UpdateActionState(void *linux_side, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    return ((IVRInput*)linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetDigitalActionData(void *linux_side, VRActionHandle_t action, InputDigitalActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    return ((IVRInput*)linux_side)->GetDigitalActionData((vr::VRActionHandle_t)action, (vr::InputDigitalActionData_t *)pActionData, (uint32_t)unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetAnalogActionData(void *linux_side, VRActionHandle_t action, InputAnalogActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    return ((IVRInput*)linux_side)->GetAnalogActionData((vr::VRActionHandle_t)action, (vr::InputAnalogActionData_t *)pActionData, (uint32_t)unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetPoseActionData(void *linux_side, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t * pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice)
{
    return ((IVRInput*)linux_side)->GetPoseActionData((vr::VRActionHandle_t)action, (vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsFromNow, (vr::InputPoseActionData_t *)pActionData, (uint32_t)unActionDataSize, (vr::VRInputValueHandle_t)ulRestrictToDevice);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalActionData(void *linux_side, VRActionHandle_t action, InputSkeletalActionData_t * pActionData, uint32_t unActionDataSize)
{
    return ((IVRInput*)linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)action, (vr::InputSkeletalActionData_t *)pActionData, (uint32_t)unActionDataSize);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetBoneCount(void *linux_side, VRActionHandle_t action, uint32_t * pBoneCount)
{
    return ((IVRInput*)linux_side)->GetBoneCount((vr::VRActionHandle_t)action, (uint32_t *)pBoneCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetBoneHierarchy(void *linux_side, VRActionHandle_t action, BoneIndex_t * pParentIndices, uint32_t unIndexArayCount)
{
    return ((IVRInput*)linux_side)->GetBoneHierarchy((vr::VRActionHandle_t)action, (vr::BoneIndex_t *)pParentIndices, (uint32_t)unIndexArayCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetBoneName(void *linux_side, VRActionHandle_t action, BoneIndex_t nBoneIndex, char * pchBoneName, uint32_t unNameBufferSize)
{
    return ((IVRInput*)linux_side)->GetBoneName((vr::VRActionHandle_t)action, (vr::BoneIndex_t)nBoneIndex, (char *)pchBoneName, (uint32_t)unNameBufferSize);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalReferenceTransforms(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    return ((IVRInput*)linux_side)->GetSkeletalReferenceTransforms((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::EVRSkeletalReferencePose)eReferencePose, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalTrackingLevel(void *linux_side, VRActionHandle_t action, EVRSkeletalTrackingLevel * pSkeletalTrackingLevel)
{
    return ((IVRInput*)linux_side)->GetSkeletalTrackingLevel((vr::VRActionHandle_t)action, (vr::EVRSkeletalTrackingLevel *)pSkeletalTrackingLevel);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalBoneData(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    return ((IVRInput*)linux_side)->GetSkeletalBoneData((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::EVRSkeletalMotionRange)eMotionRange, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalSummaryData(void *linux_side, VRActionHandle_t action, VRSkeletalSummaryData_t * pSkeletalSummaryData)
{
    return ((IVRInput*)linux_side)->GetSkeletalSummaryData((vr::VRActionHandle_t)action, (vr::VRSkeletalSummaryData_t *)pSkeletalSummaryData);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetSkeletalBoneDataCompressed(void *linux_side, VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, void * pvCompressedData, uint32_t unCompressedSize, uint32_t * punRequiredCompressedSize)
{
    return ((IVRInput*)linux_side)->GetSkeletalBoneDataCompressed((vr::VRActionHandle_t)action, (vr::EVRSkeletalMotionRange)eMotionRange, (void *)pvCompressedData, (uint32_t)unCompressedSize, (uint32_t *)punRequiredCompressedSize);
}

vr::EVRInputError cppIVRInput_IVRInput_005_DecompressSkeletalBoneData(void *linux_side, const void * pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VRBoneTransform_t * pTransformArray, uint32_t unTransformArrayCount)
{
    return ((IVRInput*)linux_side)->DecompressSkeletalBoneData((const void *)pvCompressedBuffer, (uint32_t)unCompressedBufferSize, (vr::EVRSkeletalTransformSpace)eTransformSpace, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_TriggerHapticVibrationAction(void *linux_side, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice)
{
    return ((IVRInput*)linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)action, (float)fStartSecondsFromNow, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude, (vr::VRInputValueHandle_t)ulRestrictToDevice);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t * originsOut, uint32_t originOutCount)
{
    return ((IVRInput*)linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)digitalActionHandle, (vr::VRInputValueHandle_t *)originsOut, (uint32_t)originOutCount);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetOriginLocalizedName(void *linux_side, VRInputValueHandle_t origin, char * pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude)
{
    return ((IVRInput*)linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)origin, (char *)pchNameArray, (uint32_t)unNameArraySize, (int32_t)unStringSectionsToInclude);
}

vr::EVRInputError cppIVRInput_IVRInput_005_GetOriginTrackedDeviceInfo(void *linux_side, VRInputValueHandle_t origin, InputOriginInfo_t * pOriginInfo, uint32_t unOriginInfoSize)
{
    return ((IVRInput*)linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)origin, (vr::InputOriginInfo_t *)pOriginInfo, (uint32_t)unOriginInfoSize);
}

vr::EVRInputError cppIVRInput_IVRInput_005_ShowActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    return ((IVRInput*)linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)ulActionHandle);
}

vr::EVRInputError cppIVRInput_IVRInput_005_ShowBindingsForActionSet(void *linux_side, VRActiveActionSet_t * pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    return ((IVRInput*)linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount, (vr::VRInputValueHandle_t)originToHighlight);
}

#ifdef __cplusplus
}
#endif
