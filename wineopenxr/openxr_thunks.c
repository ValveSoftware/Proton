/* Automatically generated from OpenXR xr.xml; DO NOT EDIT!
 *
 * This file is generated from OpenXR xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2023, The Khronos Group Inc.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 * ------------------------------------------------------------------------
 *
 * This file, xr.xml, is the OpenXR API Registry. It is a critically important
 * and normative part of the OpenXR Specification, including a canonical
 * machine-readable definition of the API, parameter and member validation
 * language incorporated into the Specification and reference pages, and other
 * material which is registered by Khronos, such as tags used by extension and
 * layer authors. The only authoritative version of xr.xml is the one
 * maintained in the default branch of the Khronos OpenXR GitHub project.
 *
 */

#include "wine/debug.h"
#include "wine/vulkan.h"
#include "d3d11.h"
#include "d3d12.h"
#define WINE_XR_HOST
#include "wineopenxr.h"
#include "openxr_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

#if defined(USE_STRUCT_CONVERSION)
static inline void convert_XrSceneMeshBuffersGetInfoMSFT_win_to_host(const XrSceneMeshBuffersGetInfoMSFT *in, XrSceneMeshBuffersGetInfoMSFT_host *out)
{
    if (!in) return;

    out->type = in->type;
    out->next = in->next;
    out->meshBufferId = in->meshBufferId;
}

#endif /* USE_STRUCT_CONVERSION */

XrResult convert_XrInstanceCreateInfo_struct_chain(const void *next, XrInstanceCreateInfo *out_struct)
{
    XrBaseOutStructure *out_header = (XrBaseOutStructure *)out_struct;
    const XrBaseInStructure *in_header;

    out_header->next = NULL;

    for (in_header = next; in_header; in_header = in_header->next)
    {
        switch (in_header->type)
        {
        case XR_TYPE_INSTANCE_CREATE_INFO:
            break;

        default:
            WINE_FIXME("Application requested a linked structure of type %u.\n", in_header->type);
        }
    }

    return XR_SUCCESS;
}

void free_XrInstanceCreateInfo_struct_chain(XrInstanceCreateInfo *s)
{
    XrBaseOutStructure *header = (void *)s->next;

    while (header)
    {
        void *prev = header;
        header = header->next;
        HeapFree(GetProcessHeap(), 0, prev);
    }

    s->next = NULL;
}

XrResult WINAPI wine_xrAcquireSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageAcquireInfo *acquireInfo, uint32_t *index)
{
    WINE_TRACE("%p, %p, %p\n", swapchain, acquireInfo, index);
    return xrAcquireSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, acquireInfo, index);
}

static XrResult WINAPI wine_xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations)
{
    WINE_TRACE("%p, %p\n", handTracker, locations);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrApplyForceFeedbackCurlMNDX(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, locations);
}

static XrResult WINAPI wine_xrApplyFoveationHTC(XrSession session, const XrFoveationApplyInfoHTC *applyInfo)
{
    WINE_TRACE("%p, %p\n", session, applyInfo);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrApplyFoveationHTC(((wine_XrSession *)session)->session, applyInfo);
}

XrResult WINAPI wine_xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback)
{
    WINE_TRACE("%p, %p, %p\n", session, hapticActionInfo, hapticFeedback);
    return xrApplyHapticFeedback(((wine_XrSession *)session)->session, hapticActionInfo, hapticFeedback);
}

XrResult WINAPI wine_xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo)
{
    WINE_TRACE("%p, %p\n", session, attachInfo);
    return xrAttachSessionActionSets(((wine_XrSession *)session)->session, attachInfo);
}

XrResult WINAPI wine_xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo)
{
    WINE_TRACE("%p, %p\n", session, frameBeginInfo);
    return xrBeginFrame(((wine_XrSession *)session)->session, frameBeginInfo);
}

XrResult WINAPI wine_xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo)
{
    WINE_TRACE("%p, %p\n", session, beginInfo);
    return xrBeginSession(((wine_XrSession *)session)->session, beginInfo);
}

static XrResult WINAPI wine_xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    WINE_TRACE("%p\n", spatialAnchorStore);
    return ((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->wine_session->wine_instance->funcs.p_xrClearSpatialAnchorStoreMSFT(((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->spatial_anchor_store_connection);
}

static XrResult WINAPI wine_xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo)
{
    WINE_TRACE("%p, %p\n", sceneObserver, computeInfo);
    return ((wine_XrSceneObserverMSFT *)sceneObserver)->wine_session->wine_instance->funcs.p_xrComputeNewSceneMSFT(((wine_XrSceneObserverMSFT *)sceneObserver)->scene_observer_msft, computeInfo);
}

XrResult WINAPI wine_xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action)
{
    WINE_TRACE("%p, %p, %p\n", actionSet, createInfo, action);
    return xrCreateAction(actionSet, createInfo, action);
}

XrResult WINAPI wine_xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet)
{
    WINE_TRACE("%p, %p, %p\n", instance, createInfo, actionSet);
    return xrCreateActionSet(((wine_XrInstance *)instance)->instance, createInfo, actionSet);
}

XrResult WINAPI wine_xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space)
{
    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    return xrCreateActionSpace(((wine_XrSession *)session)->session, createInfo, space);
}

XrResult WINAPI wine_xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space)
{
    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    return xrCreateReferenceSpace(((wine_XrSession *)session)->session, createInfo, space);
}

static XrResult WINAPI wine_xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialAnchorSpaceMSFT(((wine_XrSession *)session)->session, createInfo, space);
}

static XrResult WINAPI wine_xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo)
{
    WINE_TRACE("%p, %p\n", sceneObserver, deserializeInfo);
    return ((wine_XrSceneObserverMSFT *)sceneObserver)->wine_session->wine_instance->funcs.p_xrDeserializeSceneMSFT(((wine_XrSceneObserverMSFT *)sceneObserver)->scene_observer_msft, deserializeInfo);
}

XrResult WINAPI wine_xrDestroyAction(XrAction action)
{
    WINE_TRACE("%p\n", action);
    return xrDestroyAction(action);
}

XrResult WINAPI wine_xrDestroyActionSet(XrActionSet actionSet)
{
    WINE_TRACE("%p\n", actionSet);
    return xrDestroyActionSet(actionSet);
}

XrResult WINAPI wine_xrDestroySpace(XrSpace space)
{
    WINE_TRACE("%p\n", space);
    return xrDestroySpace(space);
}

XrResult WINAPI wine_xrEndSession(XrSession session)
{
    WINE_TRACE("%p\n", session);
    return xrEndSession(((wine_XrSession *)session)->session);
}

XrResult WINAPI wine_xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties)
{
    WINE_TRACE("%u, %p, %p\n", propertyCapacityInput, propertyCountOutput, properties);
    return xrEnumerateApiLayerProperties(propertyCapacityInput, propertyCountOutput, properties);
}

XrResult WINAPI wine_xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources)
{
    WINE_TRACE("%p, %p, %u, %p, %p\n", session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
    return xrEnumerateBoundSourcesForAction(((wine_XrSession *)session)->session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
}

static XrResult WINAPI wine_xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, colorSpaceCapacityInput, colorSpaceCountOutput, colorSpaces);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateColorSpacesFB(((wine_XrSession *)session)->session, colorSpaceCapacityInput, colorSpaceCountOutput, colorSpaces);
}

static XrResult WINAPI wine_xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateDisplayRefreshRatesFB(((wine_XrSession *)session)->session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
}

XrResult WINAPI wine_xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
    return xrEnumerateEnvironmentBlendModes(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
}

static XrResult WINAPI wine_xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, cameraCapacityInput, cameraCountOutput, cameras);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateExternalCamerasOCULUS(((wine_XrSession *)session)->session, cameraCapacityInput, cameraCountOutput, cameras);
}

static XrResult WINAPI wine_xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    WINE_TRACE("%p, %u, %p, %p\n", instance, counterPathCapacityInput, counterPathCountOutput, counterPaths);
    return ((wine_XrInstance *)instance)->funcs.p_xrEnumeratePerformanceMetricsCounterPathsMETA(((wine_XrInstance *)instance)->instance, counterPathCapacityInput, counterPathCountOutput, counterPaths);
}

static XrResult WINAPI wine_xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNamesCapacityInput, uint32_t *spatialAnchorNamesCountOutput, XrSpatialAnchorPersistenceNameMSFT *persistedAnchorNames)
{
    WINE_TRACE("%p, %u, %p, %p\n", spatialAnchorStore, spatialAnchorNamesCapacityInput, spatialAnchorNamesCountOutput, persistedAnchorNames);
    return ((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->wine_session->wine_instance->funcs.p_xrEnumeratePersistedSpatialAnchorNamesMSFT(((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->spatial_anchor_store_connection, spatialAnchorNamesCapacityInput, spatialAnchorNamesCountOutput, persistedAnchorNames);
}

XrResult WINAPI wine_xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, spaceCapacityInput, spaceCountOutput, spaces);
    return xrEnumerateReferenceSpaces(((wine_XrSession *)session)->session, spaceCapacityInput, spaceCountOutput, spaces);
}

static XrResult WINAPI wine_xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, pathCapacityInput, pathCountOutput, paths);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateRenderModelPathsFB(((wine_XrSession *)session)->session, pathCapacityInput, pathCountOutput, paths);
}

static XrResult WINAPI wine_xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes)
{
    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, modeCapacityInput, modeCountOutput, modes);
    return ((wine_XrInstance *)instance)->funcs.p_xrEnumerateReprojectionModesMSFT(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, modeCapacityInput, modeCountOutput, modes);
}

static XrResult WINAPI wine_xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features)
{
    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), featureCapacityInput, featureCountOutput, features);
    return ((wine_XrInstance *)instance)->funcs.p_xrEnumerateSceneComputeFeaturesMSFT(((wine_XrInstance *)instance)->instance, systemId, featureCapacityInput, featureCountOutput, features);
}

XrResult WINAPI wine_xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views)
{
    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, viewCapacityInput, viewCountOutput, views);
    return xrEnumerateViewConfigurationViews(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, viewCapacityInput, viewCountOutput, views);
}

XrResult WINAPI wine_xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes)
{
    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
    return xrEnumerateViewConfigurations(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
}

static XrResult WINAPI wine_xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths)
{
    WINE_TRACE("%p, %u, %p, %p\n", instance, pathCapacityInput, pathCountOutput, paths);
    return ((wine_XrInstance *)instance)->funcs.p_xrEnumerateViveTrackerPathsHTCX(((wine_XrInstance *)instance)->instance, pathCapacityInput, pathCountOutput, paths);
}

static XrResult WINAPI wine_xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation)
{
    WINE_TRACE("%p, %p\n", instance, transformation);
    return ((wine_XrGeometryInstanceFB *)instance)->wine_session->wine_instance->funcs.p_xrGeometryInstanceSetTransformFB(((wine_XrGeometryInstanceFB *)instance)->instance, transformation);
}

XrResult WINAPI wine_xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state)
{
    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    return xrGetActionStateBoolean(((wine_XrSession *)session)->session, getInfo, state);
}

XrResult WINAPI wine_xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state)
{
    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    return xrGetActionStateFloat(((wine_XrSession *)session)->session, getInfo, state);
}

XrResult WINAPI wine_xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state)
{
    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    return xrGetActionStatePose(((wine_XrSession *)session)->session, getInfo, state);
}

XrResult WINAPI wine_xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state)
{
    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    return xrGetActionStateVector2f(((wine_XrSession *)session)->session, getInfo, state);
}

static XrResult WINAPI wine_xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    WINE_TRACE("%p, %p\n", instance, buffer);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetAudioInputDeviceGuidOculus(((wine_XrInstance *)instance)->instance, buffer);
}

static XrResult WINAPI wine_xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    WINE_TRACE("%p, %p\n", instance, buffer);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetAudioOutputDeviceGuidOculus(((wine_XrInstance *)instance)->instance, buffer);
}

static XrResult WINAPI wine_xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(topLevelUserPath), controllerModelKeyState);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelKeyMSFT(((wine_XrSession *)session)->session, topLevelUserPath, controllerModelKeyState);
}

static XrResult WINAPI wine_xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(modelKey), properties);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelPropertiesMSFT(((wine_XrSession *)session)->session, modelKey, properties);
}

static XrResult WINAPI wine_xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(modelKey), state);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelStateMSFT(((wine_XrSession *)session)->session, modelKey, state);
}

XrResult WINAPI wine_xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(topLevelUserPath), interactionProfile);
    return xrGetCurrentInteractionProfile(((wine_XrSession *)session)->session, topLevelUserPath, interactionProfile);
}

static XrResult WINAPI wine_xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate)
{
    WINE_TRACE("%p, %p, %p\n", session, hapticActionInfo, deviceSampleRate);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetDeviceSampleRateFB(((wine_XrSession *)session)->session, hapticActionInfo, deviceSampleRate);
}

static XrResult WINAPI wine_xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate)
{
    WINE_TRACE("%p, %p\n", session, displayRefreshRate);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetDisplayRefreshRateFB(((wine_XrSession *)session)->session, displayRefreshRate);
}

static XrResult WINAPI wine_xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState)
{
    WINE_TRACE("%p, %p\n", session, foveationState);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetFoveationEyeTrackedStateMETA(((wine_XrSession *)session)->session, foveationState);
}

static XrResult WINAPI wine_xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh)
{
    WINE_TRACE("%p, %p\n", handTracker, mesh);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrGetHandMeshFB(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, mesh);
}

XrResult WINAPI wine_xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    WINE_TRACE("%p, %p, %u, %p, %p\n", session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
    return xrGetInputSourceLocalizedName(((wine_XrSession *)session)->session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
}

XrResult WINAPI wine_xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties)
{
    WINE_TRACE("%p, %p\n", instance, instanceProperties);
    return xrGetInstanceProperties(((wine_XrInstance *)instance)->instance, instanceProperties);
}

static XrResult WINAPI wine_xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements)
{
    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetOpenGLGraphicsRequirementsKHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
}

static XrResult WINAPI wine_xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state)
{
    WINE_TRACE("%p, %p\n", session, state);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetPerformanceMetricsStateMETA(((wine_XrSession *)session)->session, state);
}

XrResult WINAPI wine_xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    WINE_TRACE("%p, %#x, %p\n", session, referenceSpaceType, bounds);
    return xrGetReferenceSpaceBoundsRect(((wine_XrSession *)session)->session, referenceSpaceType, bounds);
}

static XrResult WINAPI wine_xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(path), properties);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetRenderModelPropertiesFB(((wine_XrSession *)session)->session, path, properties);
}

static XrResult WINAPI wine_xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components)
{
    WINE_TRACE("%p, %p, %p\n", scene, getInfo, components);
    return ((wine_XrSceneMSFT *)scene)->wine_scene_observer_msft->wine_session->wine_instance->funcs.p_xrGetSceneComponentsMSFT(((wine_XrSceneMSFT *)scene)->scene_msft, getInfo, components);
}

static XrResult WINAPI wine_xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state)
{
    WINE_TRACE("%p, %p\n", sceneObserver, state);
    return ((wine_XrSceneObserverMSFT *)sceneObserver)->wine_session->wine_instance->funcs.p_xrGetSceneComputeStateMSFT(((wine_XrSceneObserverMSFT *)sceneObserver)->scene_observer_msft, state);
}

static XrResult WINAPI wine_xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers)
{
#if defined(USE_STRUCT_CONVERSION)
    XrResult result;
    XrSceneMeshBuffersGetInfoMSFT_host getInfo_host;
    WINE_TRACE("%p, %p, %p\n", scene, getInfo, buffers);

    convert_XrSceneMeshBuffersGetInfoMSFT_win_to_host(getInfo, &getInfo_host);
    result = ((wine_XrSceneMSFT *)scene)->wine_scene_observer_msft->wine_session->wine_instance->funcs.p_xrGetSceneMeshBuffersMSFT(((wine_XrSceneMSFT *)scene)->scene_msft, &getInfo_host, buffers);

    return result;
#else
    WINE_TRACE("%p, %p, %p\n", scene, getInfo, buffers);
    return ((wine_XrSceneMSFT *)scene)->wine_scene_observer_msft->wine_session->wine_instance->funcs.p_xrGetSceneMeshBuffersMSFT(((wine_XrSceneMSFT *)scene)->scene_msft, getInfo, buffers);
#endif
}

static XrResult WINAPI wine_xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer)
{
    WINE_TRACE("%p, %p, %u, %p, %p\n", scene, getInfo, countInput, readOutput, buffer);
    return ((wine_XrSceneMSFT *)scene)->wine_scene_observer_msft->wine_session->wine_instance->funcs.p_xrGetSerializedSceneFragmentDataMSFT(((wine_XrSceneMSFT *)scene)->scene_msft, getInfo, countInput, readOutput, buffer);
}

static XrResult WINAPI wine_xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state)
{
    WINE_TRACE("%p, %p\n", swapchain, state);
    return ((wine_XrSwapchain *)swapchain)->wine_session->wine_instance->funcs.p_xrGetSwapchainStateFB(((wine_XrSwapchain *)swapchain)->swapchain, state);
}

XrResult WINAPI wine_xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties)
{
    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), properties);
    return xrGetSystemProperties(((wine_XrInstance *)instance)->instance, systemId, properties);
}

XrResult WINAPI wine_xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties)
{
    WINE_TRACE("%p, 0x%s, %#x, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, configurationProperties);
    return xrGetViewConfigurationProperties(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, configurationProperties);
}

static XrResult WINAPI wine_xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask)
{
    WINE_TRACE("%p, %#x, %u, %#x, %p\n", session, viewConfigurationType, viewIndex, visibilityMaskType, visibilityMask);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetVisibilityMaskKHR(((wine_XrSession *)session)->session, viewConfigurationType, viewIndex, visibilityMaskType, visibilityMask);
}

static XrResult WINAPI wine_xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsRequirements2KHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
}

static XrResult WINAPI wine_xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsRequirementsKHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
}

static XrResult WINAPI wine_xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", session, wine_dbgstr_longlong(modelKey), bufferCapacityInput, bufferCountOutput, buffer);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrLoadControllerModelMSFT(((wine_XrSession *)session)->session, modelKey, bufferCapacityInput, bufferCountOutput, buffer);
}

static XrResult WINAPI wine_xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer)
{
    WINE_TRACE("%p, %p, %p\n", session, info, buffer);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrLoadRenderModelFB(((wine_XrSession *)session)->session, info, buffer);
}

static XrResult WINAPI wine_xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    WINE_TRACE("%p, %p, %p\n", handTracker, locateInfo, locations);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrLocateHandJointsEXT(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, locateInfo, locations);
}

static XrResult WINAPI wine_xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations)
{
    WINE_TRACE("%p, %p, %p\n", scene, locateInfo, locations);
    return ((wine_XrSceneMSFT *)scene)->wine_scene_observer_msft->wine_session->wine_instance->funcs.p_xrLocateSceneComponentsMSFT(((wine_XrSceneMSFT *)scene)->scene_msft, locateInfo, locations);
}

XrResult WINAPI wine_xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location)
{
    WINE_TRACE("%p, %p, 0x%s, %p\n", space, baseSpace, wine_dbgstr_longlong(time), location);
    return xrLocateSpace(space, baseSpace, time, location);
}

XrResult WINAPI wine_xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views)
{
    WINE_TRACE("%p, %p, %p, %u, %p, %p\n", session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
    return xrLocateViews(((wine_XrSession *)session)->session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
}

static XrResult WINAPI wine_xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer)
{
    WINE_TRACE("%p\n", layer);
    return ((wine_XrPassthroughLayerFB *)layer)->wine_session->wine_instance->funcs.p_xrPassthroughLayerPauseFB(((wine_XrPassthroughLayerFB *)layer)->layer);
}

static XrResult WINAPI wine_xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer)
{
    WINE_TRACE("%p\n", layer);
    return ((wine_XrPassthroughLayerFB *)layer)->wine_session->wine_instance->funcs.p_xrPassthroughLayerResumeFB(((wine_XrPassthroughLayerFB *)layer)->layer);
}

static XrResult WINAPI wine_xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity)
{
    WINE_TRACE("%p, %p\n", layer, intensity);
    return ((wine_XrPassthroughLayerFB *)layer)->wine_session->wine_instance->funcs.p_xrPassthroughLayerSetKeyboardHandsIntensityFB(((wine_XrPassthroughLayerFB *)layer)->layer, intensity);
}

static XrResult WINAPI wine_xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style)
{
    WINE_TRACE("%p, %p\n", layer, style);
    return ((wine_XrPassthroughLayerFB *)layer)->wine_session->wine_instance->funcs.p_xrPassthroughLayerSetStyleFB(((wine_XrPassthroughLayerFB *)layer)->layer, style);
}

static XrResult WINAPI wine_xrPassthroughPauseFB(XrPassthroughFB passthrough)
{
    WINE_TRACE("%p\n", passthrough);
    return ((wine_XrPassthroughFB *)passthrough)->wine_session->wine_instance->funcs.p_xrPassthroughPauseFB(((wine_XrPassthroughFB *)passthrough)->passthrough);
}

static XrResult WINAPI wine_xrPassthroughStartFB(XrPassthroughFB passthrough)
{
    WINE_TRACE("%p\n", passthrough);
    return ((wine_XrPassthroughFB *)passthrough)->wine_session->wine_instance->funcs.p_xrPassthroughStartFB(((wine_XrPassthroughFB *)passthrough)->passthrough);
}

XrResult WINAPI wine_xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(path), bufferCapacityInput, bufferCountOutput, buffer);
    return xrPathToString(((wine_XrInstance *)instance)->instance, path, bufferCapacityInput, bufferCountOutput, buffer);
}

static XrResult WINAPI wine_xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level)
{
    WINE_TRACE("%p, %#x, %#x\n", session, domain, level);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrPerfSettingsSetPerformanceLevelEXT(((wine_XrSession *)session)->session, domain, level);
}

static XrResult WINAPI wine_xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo)
{
    WINE_TRACE("%p, %p\n", spatialAnchorStore, spatialAnchorPersistenceInfo);
    return ((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->wine_session->wine_instance->funcs.p_xrPersistSpatialAnchorMSFT(((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->spatial_anchor_store_connection, spatialAnchorPersistenceInfo);
}

static XrResult WINAPI wine_xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(counterPath), counter);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrQueryPerformanceMetricsCounterMETA(((wine_XrSession *)session)->session, counterPath, counter);
}

static XrResult WINAPI wine_xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId)
{
    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrQuerySpacesFB(((wine_XrSession *)session)->session, info, requestId);
}

XrResult WINAPI wine_xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo)
{
    WINE_TRACE("%p, %p\n", swapchain, releaseInfo);
    return xrReleaseSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, releaseInfo);
}

static XrResult WINAPI wine_xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate)
{
    WINE_TRACE("%p, %f\n", session, displayRefreshRate);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrRequestDisplayRefreshRateFB(((wine_XrSession *)session)->session, displayRefreshRate);
}

XrResult WINAPI wine_xrRequestExitSession(XrSession session)
{
    WINE_TRACE("%p\n", session);
    return xrRequestExitSession(((wine_XrSession *)session)->session);
}

static XrResult WINAPI wine_xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrRequestSceneCaptureFB(((wine_XrSession *)session)->session, info, requestId);
}

XrResult WINAPI wine_xrResultToString(XrInstance instance, XrResult value, char buffer[])
{
    WINE_TRACE("%p, %#x, %p\n", instance, value, buffer);
    return xrResultToString(((wine_XrInstance *)instance)->instance, value, buffer);
}

static XrResult WINAPI wine_xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(requestId), results);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrRetrieveSpaceQueryResultsFB(((wine_XrSession *)session)->session, requestId, results);
}

static XrResult WINAPI wine_xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSaveSpaceListFB(((wine_XrSession *)session)->session, info, requestId);
}

static XrResult WINAPI wine_xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorspace)
{
    WINE_TRACE("%p, %#x\n", session, colorspace);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetColorSpaceFB(((wine_XrSession *)session)->session, colorspace);
}

static XrResult WINAPI wine_xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl)
{
    WINE_TRACE("%p, %p\n", session, digitalLensControl);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetDigitalLensControlALMALENCE(((wine_XrSession *)session)->session, digitalLensControl);
}

static XrResult WINAPI wine_xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled)
{
    WINE_TRACE("%p, %u\n", session, enabled);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetEnvironmentDepthEstimationVARJO(((wine_XrSession *)session)->session, enabled);
}

static XrResult WINAPI wine_xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %u\n", session, wine_dbgstr_longlong(interactionProfile), wine_dbgstr_longlong(topLevelPath), isActive);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceActiveEXT(((wine_XrSession *)session)->session, interactionProfile, topLevelPath, isActive);
}

static XrResult WINAPI wine_xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %p, {{%f, %f, %f, %f}, {%f %f %f}}\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), space, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w, pose.position.x, pose.position.y, pose.position.z);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceLocationEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, space, pose);
}

static XrResult WINAPI wine_xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %u\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateBoolEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
}

static XrResult WINAPI wine_xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %f\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateFloatEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
}

static XrResult WINAPI wine_xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %f, %f\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state.x, state.y);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateVector2fEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
}

static XrResult WINAPI wine_xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state)
{
    WINE_TRACE("%p, %p\n", session, state);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetPerformanceMetricsStateMETA(((wine_XrSession *)session)->session, state);
}

static XrResult WINAPI wine_xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint)
{
    WINE_TRACE("%p, %#x, %#x\n", session, domain, hint);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetTrackingOptimizationSettingsHintQCOM(((wine_XrSession *)session)->session, domain, hint);
}

static XrResult WINAPI wine_xrSetViewOffsetVARJO(XrSession session, float offset)
{
    WINE_TRACE("%p, %f\n", session, offset);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetViewOffsetVARJO(((wine_XrSession *)session)->session, offset);
}

XrResult WINAPI wine_xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo)
{
    WINE_TRACE("%p, %p\n", session, hapticActionInfo);
    return xrStopHapticFeedback(((wine_XrSession *)session)->session, hapticActionInfo);
}

XrResult WINAPI wine_xrStringToPath(XrInstance instance, const char *pathString, XrPath *path)
{
    WINE_TRACE("%p, %p, %p\n", instance, pathString, path);
    return xrStringToPath(((wine_XrInstance *)instance)->instance, pathString, path);
}

XrResult WINAPI wine_xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[])
{
    WINE_TRACE("%p, %#x, %p\n", instance, value, buffer);
    return xrStructureTypeToString(((wine_XrInstance *)instance)->instance, value, buffer);
}

XrResult WINAPI wine_xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings)
{
    WINE_TRACE("%p, %p\n", instance, suggestedBindings);
    return xrSuggestInteractionProfileBindings(((wine_XrInstance *)instance)->instance, suggestedBindings);
}

XrResult WINAPI wine_xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo)
{
    WINE_TRACE("%p, %p\n", session, syncInfo);
    return xrSyncActions(((wine_XrSession *)session)->session, syncInfo);
}

static XrResult WINAPI wine_xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope)
{
    WINE_TRACE("%p, %#x, %p, %p, %p\n", session, domain, notificationLevel, tempHeadroom, tempSlope);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrThermalGetTemperatureTrendEXT(((wine_XrSession *)session)->session, domain, notificationLevel, tempHeadroom, tempSlope);
}

static XrResult WINAPI wine_xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh)
{
    WINE_TRACE("%p\n", mesh);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshBeginUpdateFB(((wine_XrTriangleMeshFB *)mesh)->mesh);
}

static XrResult WINAPI wine_xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t *outVertexCount)
{
    WINE_TRACE("%p, %p\n", mesh, outVertexCount);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshBeginVertexBufferUpdateFB(((wine_XrTriangleMeshFB *)mesh)->mesh, outVertexCount);
}

static XrResult WINAPI wine_xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount)
{
    WINE_TRACE("%p, %u, %u\n", mesh, vertexCount, triangleCount);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshEndUpdateFB(((wine_XrTriangleMeshFB *)mesh)->mesh, vertexCount, triangleCount);
}

static XrResult WINAPI wine_xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh)
{
    WINE_TRACE("%p\n", mesh);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshEndVertexBufferUpdateFB(((wine_XrTriangleMeshFB *)mesh)->mesh);
}

static XrResult WINAPI wine_xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t **outIndexBuffer)
{
    WINE_TRACE("%p, %p\n", mesh, outIndexBuffer);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshGetIndexBufferFB(((wine_XrTriangleMeshFB *)mesh)->mesh, outIndexBuffer);
}

static XrResult WINAPI wine_xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f **outVertexBuffer)
{
    WINE_TRACE("%p, %p\n", mesh, outVertexBuffer);
    return ((wine_XrTriangleMeshFB *)mesh)->wine_session->wine_instance->funcs.p_xrTriangleMeshGetVertexBufferFB(((wine_XrTriangleMeshFB *)mesh)->mesh, outVertexBuffer);
}

static XrResult WINAPI wine_xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName)
{
    WINE_TRACE("%p, %p\n", spatialAnchorStore, spatialAnchorPersistenceName);
    return ((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->wine_session->wine_instance->funcs.p_xrUnpersistSpatialAnchorMSFT(((wine_XrSpatialAnchorStoreConnectionMSFT *)spatialAnchorStore)->spatial_anchor_store_connection, spatialAnchorPersistenceName);
}

static XrResult WINAPI wine_xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state)
{
    WINE_TRACE("%p, %p\n", swapchain, state);
    return ((wine_XrSwapchain *)swapchain)->wine_session->wine_instance->funcs.p_xrUpdateSwapchainFB(((wine_XrSwapchain *)swapchain)->swapchain, state);
}

XrResult WINAPI wine_xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState)
{
    WINE_TRACE("%p, %p, %p\n", session, frameWaitInfo, frameState);
    return xrWaitFrame(((wine_XrSession *)session)->session, frameWaitInfo, frameState);
}

XrResult WINAPI wine_xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo)
{
    WINE_TRACE("%p, %p\n", swapchain, waitInfo);
    return xrWaitSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, waitInfo);
}

static const struct openxr_func xr_dispatch_table[] =
{
    {"xrAcquireSwapchainImage", &wine_xrAcquireSwapchainImage},
    {"xrApplyForceFeedbackCurlMNDX", &wine_xrApplyForceFeedbackCurlMNDX},
    {"xrApplyFoveationHTC", &wine_xrApplyFoveationHTC},
    {"xrApplyHapticFeedback", &wine_xrApplyHapticFeedback},
    {"xrAttachSessionActionSets", &wine_xrAttachSessionActionSets},
    {"xrBeginFrame", &wine_xrBeginFrame},
    {"xrBeginSession", &wine_xrBeginSession},
    {"xrClearSpatialAnchorStoreMSFT", &wine_xrClearSpatialAnchorStoreMSFT},
    {"xrComputeNewSceneMSFT", &wine_xrComputeNewSceneMSFT},
    {"xrConvertTimeToWin32PerformanceCounterKHR", &wine_xrConvertTimeToWin32PerformanceCounterKHR},
    {"xrConvertWin32PerformanceCounterToTimeKHR", &wine_xrConvertWin32PerformanceCounterToTimeKHR},
    {"xrCreateAction", &wine_xrCreateAction},
    {"xrCreateActionSet", &wine_xrCreateActionSet},
    {"xrCreateActionSpace", &wine_xrCreateActionSpace},
    {"xrCreateFoveationProfileFB", &wine_xrCreateFoveationProfileFB},
    {"xrCreateGeometryInstanceFB", &wine_xrCreateGeometryInstanceFB},
    {"xrCreateHandTrackerEXT", &wine_xrCreateHandTrackerEXT},
    {"xrCreateInstance", &wine_xrCreateInstance},
    {"xrCreatePassthroughFB", &wine_xrCreatePassthroughFB},
    {"xrCreatePassthroughLayerFB", &wine_xrCreatePassthroughLayerFB},
    {"xrCreateReferenceSpace", &wine_xrCreateReferenceSpace},
    {"xrCreateSceneMSFT", &wine_xrCreateSceneMSFT},
    {"xrCreateSceneObserverMSFT", &wine_xrCreateSceneObserverMSFT},
    {"xrCreateSession", &wine_xrCreateSession},
    {"xrCreateSpatialAnchorFromPersistedNameMSFT", &wine_xrCreateSpatialAnchorFromPersistedNameMSFT},
    {"xrCreateSpatialAnchorMSFT", &wine_xrCreateSpatialAnchorMSFT},
    {"xrCreateSpatialAnchorSpaceMSFT", &wine_xrCreateSpatialAnchorSpaceMSFT},
    {"xrCreateSpatialAnchorStoreConnectionMSFT", &wine_xrCreateSpatialAnchorStoreConnectionMSFT},
    {"xrCreateSwapchain", &wine_xrCreateSwapchain},
    {"xrCreateTriangleMeshFB", &wine_xrCreateTriangleMeshFB},
    {"xrCreateVulkanDeviceKHR", &wine_xrCreateVulkanDeviceKHR},
    {"xrCreateVulkanInstanceKHR", &wine_xrCreateVulkanInstanceKHR},
    {"xrDeserializeSceneMSFT", &wine_xrDeserializeSceneMSFT},
    {"xrDestroyAction", &wine_xrDestroyAction},
    {"xrDestroyActionSet", &wine_xrDestroyActionSet},
    {"xrDestroyFoveationProfileFB", &wine_xrDestroyFoveationProfileFB},
    {"xrDestroyGeometryInstanceFB", &wine_xrDestroyGeometryInstanceFB},
    {"xrDestroyHandTrackerEXT", &wine_xrDestroyHandTrackerEXT},
    {"xrDestroyInstance", &wine_xrDestroyInstance},
    {"xrDestroyPassthroughFB", &wine_xrDestroyPassthroughFB},
    {"xrDestroyPassthroughLayerFB", &wine_xrDestroyPassthroughLayerFB},
    {"xrDestroySceneMSFT", &wine_xrDestroySceneMSFT},
    {"xrDestroySceneObserverMSFT", &wine_xrDestroySceneObserverMSFT},
    {"xrDestroySession", &wine_xrDestroySession},
    {"xrDestroySpace", &wine_xrDestroySpace},
    {"xrDestroySpatialAnchorMSFT", &wine_xrDestroySpatialAnchorMSFT},
    {"xrDestroySpatialAnchorStoreConnectionMSFT", &wine_xrDestroySpatialAnchorStoreConnectionMSFT},
    {"xrDestroySwapchain", &wine_xrDestroySwapchain},
    {"xrDestroyTriangleMeshFB", &wine_xrDestroyTriangleMeshFB},
    {"xrEndFrame", &wine_xrEndFrame},
    {"xrEndSession", &wine_xrEndSession},
    {"xrEnumerateApiLayerProperties", &wine_xrEnumerateApiLayerProperties},
    {"xrEnumerateBoundSourcesForAction", &wine_xrEnumerateBoundSourcesForAction},
    {"xrEnumerateColorSpacesFB", &wine_xrEnumerateColorSpacesFB},
    {"xrEnumerateDisplayRefreshRatesFB", &wine_xrEnumerateDisplayRefreshRatesFB},
    {"xrEnumerateEnvironmentBlendModes", &wine_xrEnumerateEnvironmentBlendModes},
    {"xrEnumerateExternalCamerasOCULUS", &wine_xrEnumerateExternalCamerasOCULUS},
    {"xrEnumerateInstanceExtensionProperties", &wine_xrEnumerateInstanceExtensionProperties},
    {"xrEnumeratePerformanceMetricsCounterPathsMETA", &wine_xrEnumeratePerformanceMetricsCounterPathsMETA},
    {"xrEnumeratePersistedSpatialAnchorNamesMSFT", &wine_xrEnumeratePersistedSpatialAnchorNamesMSFT},
    {"xrEnumerateReferenceSpaces", &wine_xrEnumerateReferenceSpaces},
    {"xrEnumerateRenderModelPathsFB", &wine_xrEnumerateRenderModelPathsFB},
    {"xrEnumerateReprojectionModesMSFT", &wine_xrEnumerateReprojectionModesMSFT},
    {"xrEnumerateSceneComputeFeaturesMSFT", &wine_xrEnumerateSceneComputeFeaturesMSFT},
    {"xrEnumerateSwapchainFormats", &wine_xrEnumerateSwapchainFormats},
    {"xrEnumerateSwapchainImages", &wine_xrEnumerateSwapchainImages},
    {"xrEnumerateViewConfigurationViews", &wine_xrEnumerateViewConfigurationViews},
    {"xrEnumerateViewConfigurations", &wine_xrEnumerateViewConfigurations},
    {"xrEnumerateViveTrackerPathsHTCX", &wine_xrEnumerateViveTrackerPathsHTCX},
    {"xrGeometryInstanceSetTransformFB", &wine_xrGeometryInstanceSetTransformFB},
    {"xrGetActionStateBoolean", &wine_xrGetActionStateBoolean},
    {"xrGetActionStateFloat", &wine_xrGetActionStateFloat},
    {"xrGetActionStatePose", &wine_xrGetActionStatePose},
    {"xrGetActionStateVector2f", &wine_xrGetActionStateVector2f},
    {"xrGetAudioInputDeviceGuidOculus", &wine_xrGetAudioInputDeviceGuidOculus},
    {"xrGetAudioOutputDeviceGuidOculus", &wine_xrGetAudioOutputDeviceGuidOculus},
    {"xrGetControllerModelKeyMSFT", &wine_xrGetControllerModelKeyMSFT},
    {"xrGetControllerModelPropertiesMSFT", &wine_xrGetControllerModelPropertiesMSFT},
    {"xrGetControllerModelStateMSFT", &wine_xrGetControllerModelStateMSFT},
    {"xrGetCurrentInteractionProfile", &wine_xrGetCurrentInteractionProfile},
    {"xrGetD3D11GraphicsRequirementsKHR", &wine_xrGetD3D11GraphicsRequirementsKHR},
    {"xrGetD3D12GraphicsRequirementsKHR", &wine_xrGetD3D12GraphicsRequirementsKHR},
    {"xrGetDeviceSampleRateFB", &wine_xrGetDeviceSampleRateFB},
    {"xrGetDisplayRefreshRateFB", &wine_xrGetDisplayRefreshRateFB},
    {"xrGetFoveationEyeTrackedStateMETA", &wine_xrGetFoveationEyeTrackedStateMETA},
    {"xrGetHandMeshFB", &wine_xrGetHandMeshFB},
    {"xrGetInputSourceLocalizedName", &wine_xrGetInputSourceLocalizedName},
    {"xrGetInstanceProcAddr", &wine_xrGetInstanceProcAddr},
    {"xrGetInstanceProperties", &wine_xrGetInstanceProperties},
    {"xrGetOpenGLGraphicsRequirementsKHR", &wine_xrGetOpenGLGraphicsRequirementsKHR},
    {"xrGetPerformanceMetricsStateMETA", &wine_xrGetPerformanceMetricsStateMETA},
    {"xrGetReferenceSpaceBoundsRect", &wine_xrGetReferenceSpaceBoundsRect},
    {"xrGetRenderModelPropertiesFB", &wine_xrGetRenderModelPropertiesFB},
    {"xrGetSceneComponentsMSFT", &wine_xrGetSceneComponentsMSFT},
    {"xrGetSceneComputeStateMSFT", &wine_xrGetSceneComputeStateMSFT},
    {"xrGetSceneMeshBuffersMSFT", &wine_xrGetSceneMeshBuffersMSFT},
    {"xrGetSerializedSceneFragmentDataMSFT", &wine_xrGetSerializedSceneFragmentDataMSFT},
    {"xrGetSwapchainStateFB", &wine_xrGetSwapchainStateFB},
    {"xrGetSystem", &wine_xrGetSystem},
    {"xrGetSystemProperties", &wine_xrGetSystemProperties},
    {"xrGetViewConfigurationProperties", &wine_xrGetViewConfigurationProperties},
    {"xrGetVisibilityMaskKHR", &wine_xrGetVisibilityMaskKHR},
    {"xrGetVulkanDeviceExtensionsKHR", &wine_xrGetVulkanDeviceExtensionsKHR},
    {"xrGetVulkanGraphicsDevice2KHR", &wine_xrGetVulkanGraphicsDevice2KHR},
    {"xrGetVulkanGraphicsDeviceKHR", &wine_xrGetVulkanGraphicsDeviceKHR},
    {"xrGetVulkanGraphicsRequirements2KHR", &wine_xrGetVulkanGraphicsRequirements2KHR},
    {"xrGetVulkanGraphicsRequirementsKHR", &wine_xrGetVulkanGraphicsRequirementsKHR},
    {"xrGetVulkanInstanceExtensionsKHR", &wine_xrGetVulkanInstanceExtensionsKHR},
    {"xrLoadControllerModelMSFT", &wine_xrLoadControllerModelMSFT},
    {"xrLoadRenderModelFB", &wine_xrLoadRenderModelFB},
    {"xrLocateHandJointsEXT", &wine_xrLocateHandJointsEXT},
    {"xrLocateSceneComponentsMSFT", &wine_xrLocateSceneComponentsMSFT},
    {"xrLocateSpace", &wine_xrLocateSpace},
    {"xrLocateViews", &wine_xrLocateViews},
    {"xrPassthroughLayerPauseFB", &wine_xrPassthroughLayerPauseFB},
    {"xrPassthroughLayerResumeFB", &wine_xrPassthroughLayerResumeFB},
    {"xrPassthroughLayerSetKeyboardHandsIntensityFB", &wine_xrPassthroughLayerSetKeyboardHandsIntensityFB},
    {"xrPassthroughLayerSetStyleFB", &wine_xrPassthroughLayerSetStyleFB},
    {"xrPassthroughPauseFB", &wine_xrPassthroughPauseFB},
    {"xrPassthroughStartFB", &wine_xrPassthroughStartFB},
    {"xrPathToString", &wine_xrPathToString},
    {"xrPerfSettingsSetPerformanceLevelEXT", &wine_xrPerfSettingsSetPerformanceLevelEXT},
    {"xrPersistSpatialAnchorMSFT", &wine_xrPersistSpatialAnchorMSFT},
    {"xrPollEvent", &wine_xrPollEvent},
    {"xrQueryPerformanceMetricsCounterMETA", &wine_xrQueryPerformanceMetricsCounterMETA},
    {"xrQuerySpacesFB", &wine_xrQuerySpacesFB},
    {"xrReleaseSwapchainImage", &wine_xrReleaseSwapchainImage},
    {"xrRequestDisplayRefreshRateFB", &wine_xrRequestDisplayRefreshRateFB},
    {"xrRequestExitSession", &wine_xrRequestExitSession},
    {"xrRequestSceneCaptureFB", &wine_xrRequestSceneCaptureFB},
    {"xrResultToString", &wine_xrResultToString},
    {"xrRetrieveSpaceQueryResultsFB", &wine_xrRetrieveSpaceQueryResultsFB},
    {"xrSaveSpaceListFB", &wine_xrSaveSpaceListFB},
    {"xrSetColorSpaceFB", &wine_xrSetColorSpaceFB},
    {"xrSetDigitalLensControlALMALENCE", &wine_xrSetDigitalLensControlALMALENCE},
    {"xrSetEnvironmentDepthEstimationVARJO", &wine_xrSetEnvironmentDepthEstimationVARJO},
    {"xrSetInputDeviceActiveEXT", &wine_xrSetInputDeviceActiveEXT},
    {"xrSetInputDeviceLocationEXT", &wine_xrSetInputDeviceLocationEXT},
    {"xrSetInputDeviceStateBoolEXT", &wine_xrSetInputDeviceStateBoolEXT},
    {"xrSetInputDeviceStateFloatEXT", &wine_xrSetInputDeviceStateFloatEXT},
    {"xrSetInputDeviceStateVector2fEXT", &wine_xrSetInputDeviceStateVector2fEXT},
    {"xrSetPerformanceMetricsStateMETA", &wine_xrSetPerformanceMetricsStateMETA},
    {"xrSetTrackingOptimizationSettingsHintQCOM", &wine_xrSetTrackingOptimizationSettingsHintQCOM},
    {"xrSetViewOffsetVARJO", &wine_xrSetViewOffsetVARJO},
    {"xrStopHapticFeedback", &wine_xrStopHapticFeedback},
    {"xrStringToPath", &wine_xrStringToPath},
    {"xrStructureTypeToString", &wine_xrStructureTypeToString},
    {"xrSuggestInteractionProfileBindings", &wine_xrSuggestInteractionProfileBindings},
    {"xrSyncActions", &wine_xrSyncActions},
    {"xrThermalGetTemperatureTrendEXT", &wine_xrThermalGetTemperatureTrendEXT},
    {"xrTriangleMeshBeginUpdateFB", &wine_xrTriangleMeshBeginUpdateFB},
    {"xrTriangleMeshBeginVertexBufferUpdateFB", &wine_xrTriangleMeshBeginVertexBufferUpdateFB},
    {"xrTriangleMeshEndUpdateFB", &wine_xrTriangleMeshEndUpdateFB},
    {"xrTriangleMeshEndVertexBufferUpdateFB", &wine_xrTriangleMeshEndVertexBufferUpdateFB},
    {"xrTriangleMeshGetIndexBufferFB", &wine_xrTriangleMeshGetIndexBufferFB},
    {"xrTriangleMeshGetVertexBufferFB", &wine_xrTriangleMeshGetVertexBufferFB},
    {"xrUnpersistSpatialAnchorMSFT", &wine_xrUnpersistSpatialAnchorMSFT},
    {"xrUpdateSwapchainFB", &wine_xrUpdateSwapchainFB},
    {"xrWaitFrame", &wine_xrWaitFrame},
    {"xrWaitSwapchainImage", &wine_xrWaitSwapchainImage},
};

void *wine_xr_proc_addr(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_dispatch_table); i++)
    {
        if (strcmp(xr_dispatch_table[i].name, name) == 0)
        {
            WINE_TRACE("Found name=%s in instance table\n", wine_dbgstr_a(name));
            return xr_dispatch_table[i].func;
        }
    }
    return NULL;
}

static const char * const xr_extensions[] =
{
    "XR_ALMALENCE_digital_lens_control",
    "XR_BD_controller_interaction",
    "XR_EPIC_view_configuration_fov",
    "XR_EXTX_overlay",
    "XR_EXT_active_action_set_priority",
    "XR_EXT_conformance_automation",
    "XR_EXT_dpad_binding",
    "XR_EXT_eye_gaze_interaction",
    "XR_EXT_hand_joints_motion_range",
    "XR_EXT_hand_tracking",
    "XR_EXT_hp_mixed_reality_controller",
    "XR_EXT_local_floor",
    "XR_EXT_palm_pose",
    "XR_EXT_performance_settings",
    "XR_EXT_samsung_odyssey_controller",
    "XR_EXT_thermal_query",
    "XR_EXT_uuid",
    "XR_EXT_view_configuration_depth_range",
    "XR_EXT_win32_appcontainer_compatible",
    "XR_FB_color_space",
    "XR_FB_composition_layer_alpha_blend",
    "XR_FB_composition_layer_depth_test",
    "XR_FB_composition_layer_image_layout",
    "XR_FB_composition_layer_secure_content",
    "XR_FB_composition_layer_settings",
    "XR_FB_display_refresh_rate",
    "XR_FB_foveation",
    "XR_FB_foveation_configuration",
    "XR_FB_foveation_vulkan",
    "XR_FB_hand_tracking_aim",
    "XR_FB_hand_tracking_capsules",
    "XR_FB_hand_tracking_mesh",
    "XR_FB_haptic_amplitude_envelope",
    "XR_FB_haptic_pcm",
    "XR_FB_passthrough",
    "XR_FB_passthrough_keyboard_hands",
    "XR_FB_render_model",
    "XR_FB_scene_capture",
    "XR_FB_space_warp",
    "XR_FB_spatial_entity_query",
    "XR_FB_spatial_entity_storage_batch",
    "XR_FB_swapchain_update_state",
    "XR_FB_swapchain_update_state_vulkan",
    "XR_FB_touch_controller_pro",
    "XR_FB_touch_controller_proximity",
    "XR_FB_triangle_mesh",
    "XR_HTCX_vive_tracker_interaction",
    "XR_HTC_foveation",
    "XR_HTC_hand_interaction",
    "XR_HTC_vive_cosmos_controller_interaction",
    "XR_HTC_vive_focus3_controller_interaction",
    "XR_HTC_vive_wrist_tracker_interaction",
    "XR_HUAWEI_controller_interaction",
    "XR_KHR_D3D11_enable",
    "XR_KHR_D3D12_enable",
    "XR_KHR_binding_modification",
    "XR_KHR_composition_layer_color_scale_bias",
    "XR_KHR_composition_layer_cube",
    "XR_KHR_composition_layer_cylinder",
    "XR_KHR_composition_layer_depth",
    "XR_KHR_composition_layer_equirect",
    "XR_KHR_composition_layer_equirect2",
    "XR_KHR_opengl_enable",
    "XR_KHR_swapchain_usage_input_attachment_bit",
    "XR_KHR_visibility_mask",
    "XR_KHR_vulkan_enable",
    "XR_KHR_vulkan_enable2",
    "XR_KHR_vulkan_swapchain_format_list",
    "XR_KHR_win32_convert_performance_counter_time",
    "XR_META_foveation_eye_tracked",
    "XR_META_headset_id",
    "XR_META_local_dimming",
    "XR_META_performance_metrics",
    "XR_META_vulkan_swapchain_create_info",
    "XR_ML_frame_end_info",
    "XR_ML_global_dimmer",
    "XR_ML_ml2_controller_interaction",
    "XR_MNDX_force_feedback_curl",
    "XR_MND_headless",
    "XR_MND_swapchain_usage_input_attachment_bit",
    "XR_MSFT_composition_layer_reprojection",
    "XR_MSFT_controller_model",
    "XR_MSFT_first_person_observer",
    "XR_MSFT_hand_interaction",
    "XR_MSFT_holographic_window_attachment",
    "XR_MSFT_scene_understanding",
    "XR_MSFT_scene_understanding_serialization",
    "XR_MSFT_secondary_view_configuration",
    "XR_MSFT_spatial_anchor",
    "XR_MSFT_spatial_anchor_persistence",
    "XR_MSFT_unbounded_reference_space",
    "XR_OCULUS_android_session_state_enable",
    "XR_OCULUS_audio_device_guid",
    "XR_OCULUS_external_camera",
    "XR_QCOM_tracking_optimization_settings",
    "XR_ULTRALEAP_hand_tracking_forearm",
    "XR_VALVE_analog_threshold",
    "XR_VARJO_composition_layer_depth_test",
    "XR_VARJO_environment_depth_estimation",
    "XR_VARJO_foveated_rendering",
    "XR_VARJO_quad_views",
    "XR_VARJO_view_offset",
};

BOOL wine_xr_extension_supported(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_extensions); i++)
    {
        if (strcmp(xr_extensions[i], name) == 0)
            return TRUE;
    }
    return FALSE;
}
