#include "vrclient_private.h"
#include "vrclient_defs.h"
#include "openvr_v1.0.15/ivrclientcore.h"
using namespace vr;
extern "C" {
#include "struct_converters.h"
}
#include "cppIVRInput_IVRInput_003.h"
#ifdef __cplusplus
extern "C" {
#endif
EVRInputError cppIVRInput_IVRInput_003_SetActionManifestPath(void *linux_side, const char *pchActionManifestPath)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->SetActionManifestPath((const char *)pchActionManifestPath);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetActionSetHandle(void *linux_side, const char *pchActionSetName, VRActionSetHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionSetHandle((const char *)pchActionSetName, (vr::VRActionSetHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetActionHandle(void *linux_side, const char *pchActionName, VRActionHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionHandle((const char *)pchActionName, (vr::VRActionHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetInputSourceHandle(void *linux_side, const char *pchInputSourcePath, VRInputValueHandle_t *pHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetInputSourceHandle((const char *)pchInputSourcePath, (vr::VRInputValueHandle_t *)pHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_UpdateActionState(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->UpdateActionState((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetDigitalActionData(void *linux_side, VRActionHandle_t action, winInputDigitalActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    InputDigitalActionData_t lin;
    if(pActionData)
        struct_InputDigitalActionData_t_1015_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetDigitalActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, lin_unActionDataSize);
    if(pActionData)
        struct_InputDigitalActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetAnalogActionData(void *linux_side, VRActionHandle_t action, winInputAnalogActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    InputAnalogActionData_t lin;
    if(pActionData)
        struct_InputAnalogActionData_t_1015_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetAnalogActionData((vr::VRActionHandle_t)action, pActionData ? &lin : nullptr, lin_unActionDataSize);
    if(pActionData)
        struct_InputAnalogActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetPoseActionData(void *linux_side, VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, winInputPoseActionData_t_1015 *pActionData, uint32_t unActionDataSize)
{
    EVRInputError _ret;
    InputPoseActionData_t lin;
    if(pActionData)
        struct_InputPoseActionData_t_1015_win_to_lin(pActionData, &lin);
    uint32_t lin_unActionDataSize = unActionDataSize ? sizeof(lin) : 0;
    _ret = ((IVRInput*)linux_side)->GetPoseActionData((vr::VRActionHandle_t)action, (vr::ETrackingUniverseOrigin)eOrigin, (float)fPredictedSecondsFromNow, pActionData ? &lin : nullptr, lin_unActionDataSize);
    if(pActionData)
        struct_InputPoseActionData_t_1015_lin_to_win(&lin, pActionData, unActionDataSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionData(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, winInputSkeletonActionData_t_1015 *pActionData, uint32_t unActionDataSize, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    InputSkeletonActionData_t lin;
    if(pActionData)
        struct_InputSkeletonActionData_t_1015_win_to_lin(pActionData, &lin);
    _ret = ((IVRInput*)linux_side)->GetSkeletalActionData((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eBoneParent, (float)fPredictedSecondsFromNow, pActionData ? &lin : nullptr, (uint32_t)unActionDataSize, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    if(pActionData)
        struct_InputSkeletonActionData_t_1015_lin_to_win(&lin, pActionData);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetSkeletalActionDataCompressed(void *linux_side, VRActionHandle_t action, EVRSkeletalTransformSpace eBoneParent, float fPredictedSecondsFromNow, void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetSkeletalActionDataCompressed((vr::VRActionHandle_t)action, (vr::EVRSkeletalTransformSpace)eBoneParent, (float)fPredictedSecondsFromNow, (void *)pvCompressedData, (uint32_t)unCompressedSize, (uint32_t *)punRequiredCompressedSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_UncompressSkeletalActionData(void *linux_side, void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace *peBoneParent, VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->UncompressSkeletalActionData((void *)pvCompressedBuffer, (uint32_t)unCompressedBufferSize, (vr::EVRSkeletalTransformSpace *)peBoneParent, (vr::VRBoneTransform_t *)pTransformArray, (uint32_t)unTransformArrayCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_TriggerHapticVibrationAction(void *linux_side, VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->TriggerHapticVibrationAction((vr::VRActionHandle_t)action, (float)fStartSecondsFromNow, (float)fDurationSeconds, (float)fFrequency, (float)fAmplitude);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VRInputValueHandle_t *originsOut, uint32_t originOutCount)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)digitalActionHandle, (vr::VRInputValueHandle_t *)originsOut, (uint32_t)originOutCount);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetOriginLocalizedName(void *linux_side, VRInputValueHandle_t origin, char *pchNameArray, uint32_t unNameArraySize)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->GetOriginLocalizedName((vr::VRInputValueHandle_t)origin, (char *)pchNameArray, (uint32_t)unNameArraySize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_GetOriginTrackedDeviceInfo(void *linux_side, VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize)
{
    EVRInputError _ret;
    uint32_t lin_unOriginInfoSize = std::min(unOriginInfoSize, (uint32_t)sizeof(vr::InputOriginInfo_t));
    _ret = ((IVRInput*)linux_side)->GetOriginTrackedDeviceInfo((vr::VRInputValueHandle_t)origin, (vr::InputOriginInfo_t *)pOriginInfo, lin_unOriginInfoSize);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_ShowActionOrigins(void *linux_side, VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->ShowActionOrigins((vr::VRActionSetHandle_t)actionSetHandle, (vr::VRActionHandle_t)ulActionHandle);
    return _ret;
}

EVRInputError cppIVRInput_IVRInput_003_ShowBindingsForActionSet(void *linux_side, VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight)
{
    EVRInputError _ret;
    _ret = ((IVRInput*)linux_side)->ShowBindingsForActionSet((vr::VRActiveActionSet_t *)pSets, (uint32_t)unSizeOfVRSelectedActionSet_t, (uint32_t)unSetCount, (vr::VRInputValueHandle_t)originToHighlight);
    return _ret;
}

#ifdef __cplusplus
}
#endif
