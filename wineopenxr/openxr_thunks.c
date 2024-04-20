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
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", swapchain, acquireInfo, index);
    ret = xrAcquireSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, acquireInfo, index);
    return ret;
}

static XrResult WINAPI wine_xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", handTracker, locations);
    ret = (*get_dispatch_table((uint64_t)(handTracker))).p_xrApplyForceFeedbackCurlMNDX(handTracker, locations);
    return ret;
}

static XrResult WINAPI wine_xrApplyFoveationHTC(XrSession session, const XrFoveationApplyInfoHTC *applyInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, applyInfo);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrApplyFoveationHTC(((wine_XrSession *)session)->session, applyInfo);
    return ret;
}

XrResult WINAPI wine_xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, hapticActionInfo, hapticFeedback);
    ret = xrApplyHapticFeedback(((wine_XrSession *)session)->session, hapticActionInfo, hapticFeedback);
    return ret;
}

XrResult WINAPI wine_xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, attachInfo);
    ret = xrAttachSessionActionSets(((wine_XrSession *)session)->session, attachInfo);
    return ret;
}

XrResult WINAPI wine_xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, frameBeginInfo);
    ret = xrBeginFrame(((wine_XrSession *)session)->session, frameBeginInfo);
    return ret;
}

XrResult WINAPI wine_xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, beginInfo);
    ret = xrBeginSession(((wine_XrSession *)session)->session, beginInfo);
    return ret;
}

static XrResult WINAPI wine_xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    XrResult ret;

    WINE_TRACE("%p\n", spatialAnchorStore);
    ret = (*get_dispatch_table((uint64_t)(spatialAnchorStore))).p_xrClearSpatialAnchorStoreMSFT(spatialAnchorStore);
    return ret;
}

static XrResult WINAPI wine_xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", sceneObserver, computeInfo);
    ret = (*get_dispatch_table((uint64_t)(sceneObserver))).p_xrComputeNewSceneMSFT(sceneObserver, computeInfo);
    return ret;
}

XrResult WINAPI wine_xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", actionSet, createInfo, action);
    ret = xrCreateAction(actionSet, createInfo, action);
    return ret;
}

XrResult WINAPI wine_xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", instance, createInfo, actionSet);
    ret = xrCreateActionSet(((wine_XrInstance *)instance)->instance, createInfo, actionSet);
    return ret;
}

XrResult WINAPI wine_xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    ret = xrCreateActionSpace(((wine_XrSession *)session)->session, createInfo, space);
    if (!ret) register_dispatchable_handle((uint64_t)*space, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB *createInfo, XrFoveationProfileFB *profile)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, profile);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateFoveationProfileFB(((wine_XrSession *)session)->session, createInfo, profile);
    if (!ret) register_dispatchable_handle((uint64_t)*profile, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB *createInfo, XrGeometryInstanceFB *outGeometryInstance)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, outGeometryInstance);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateGeometryInstanceFB(((wine_XrSession *)session)->session, createInfo, outGeometryInstance);
    if (!ret) register_dispatchable_handle((uint64_t)*outGeometryInstance, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, handTracker);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateHandTrackerEXT(((wine_XrSession *)session)->session, createInfo, handTracker);
    if (!ret) register_dispatchable_handle((uint64_t)*handTracker, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB *createInfo, XrPassthroughFB *outPassthrough)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, outPassthrough);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreatePassthroughFB(((wine_XrSession *)session)->session, createInfo, outPassthrough);
    if (!ret) register_dispatchable_handle((uint64_t)*outPassthrough, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB *createInfo, XrPassthroughLayerFB *outLayer)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, outLayer);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreatePassthroughLayerFB(((wine_XrSession *)session)->session, createInfo, outLayer);
    if (!ret) register_dispatchable_handle((uint64_t)*outLayer, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

XrResult WINAPI wine_xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    ret = xrCreateReferenceSpace(((wine_XrSession *)session)->session, createInfo, space);
    if (!ret) register_dispatchable_handle((uint64_t)*space, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", sceneObserver, createInfo, scene);
    ret = (*get_dispatch_table((uint64_t)(sceneObserver))).p_xrCreateSceneMSFT(sceneObserver, createInfo, scene);
    if (!ret) register_dispatchable_handle((uint64_t)*scene, &((*get_dispatch_table((uint64_t)(sceneObserver)))));
    return ret;
}

static XrResult WINAPI wine_xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, sceneObserver);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSceneObserverMSFT(((wine_XrSession *)session)->session, createInfo, sceneObserver);
    if (!ret) register_dispatchable_handle((uint64_t)*sceneObserver, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo, XrSpatialAnchorMSFT *spatialAnchor)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, spatialAnchorCreateInfo, spatialAnchor);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialAnchorFromPersistedNameMSFT(((wine_XrSession *)session)->session, spatialAnchorCreateInfo, spatialAnchor);
    if (!ret) register_dispatchable_handle((uint64_t)*spatialAnchor, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, anchor);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialAnchorMSFT(((wine_XrSession *)session)->session, createInfo, anchor);
    if (!ret) register_dispatchable_handle((uint64_t)*anchor, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialAnchorSpaceMSFT(((wine_XrSession *)session)->session, createInfo, space);
    if (!ret) register_dispatchable_handle((uint64_t)*space, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, spatialAnchorStore);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialAnchorStoreConnectionMSFT(((wine_XrSession *)session)->session, spatialAnchorStore);
    if (!ret) register_dispatchable_handle((uint64_t)*spatialAnchorStore, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrCreateTriangleMeshFB(XrSession session, const XrTriangleMeshCreateInfoFB *createInfo, XrTriangleMeshFB *outTriangleMesh)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, createInfo, outTriangleMesh);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateTriangleMeshFB(((wine_XrSession *)session)->session, createInfo, outTriangleMesh);
    if (!ret) register_dispatchable_handle((uint64_t)*outTriangleMesh, &(((wine_XrSession *)session)->wine_instance->funcs));
    return ret;
}

static XrResult WINAPI wine_xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", sceneObserver, deserializeInfo);
    ret = (*get_dispatch_table((uint64_t)(sceneObserver))).p_xrDeserializeSceneMSFT(sceneObserver, deserializeInfo);
    return ret;
}

XrResult WINAPI wine_xrDestroyAction(XrAction action)
{
    XrResult ret;

    WINE_TRACE("%p\n", action);
    ret = xrDestroyAction(action);
    return ret;
}

XrResult WINAPI wine_xrDestroyActionSet(XrActionSet actionSet)
{
    XrResult ret;

    WINE_TRACE("%p\n", actionSet);
    ret = xrDestroyActionSet(actionSet);
    return ret;
}

static XrResult WINAPI wine_xrDestroyFoveationProfileFB(XrFoveationProfileFB profile)
{
    XrResult ret;

    WINE_TRACE("%p\n", profile);
    ret = (*get_dispatch_table((uint64_t)(profile))).p_xrDestroyFoveationProfileFB(profile);
    unregister_dispatchable_handle((uint64_t)profile);
    return ret;
}

static XrResult WINAPI wine_xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance)
{
    XrResult ret;

    WINE_TRACE("%p\n", instance);
    ret = (*get_dispatch_table((uint64_t)(instance))).p_xrDestroyGeometryInstanceFB(instance);
    unregister_dispatchable_handle((uint64_t)instance);
    return ret;
}

static XrResult WINAPI wine_xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker)
{
    XrResult ret;

    WINE_TRACE("%p\n", handTracker);
    ret = (*get_dispatch_table((uint64_t)(handTracker))).p_xrDestroyHandTrackerEXT(handTracker);
    unregister_dispatchable_handle((uint64_t)handTracker);
    return ret;
}

static XrResult WINAPI wine_xrDestroyPassthroughFB(XrPassthroughFB passthrough)
{
    XrResult ret;

    WINE_TRACE("%p\n", passthrough);
    ret = (*get_dispatch_table((uint64_t)(passthrough))).p_xrDestroyPassthroughFB(passthrough);
    unregister_dispatchable_handle((uint64_t)passthrough);
    return ret;
}

static XrResult WINAPI wine_xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer)
{
    XrResult ret;

    WINE_TRACE("%p\n", layer);
    ret = (*get_dispatch_table((uint64_t)(layer))).p_xrDestroyPassthroughLayerFB(layer);
    unregister_dispatchable_handle((uint64_t)layer);
    return ret;
}

static XrResult WINAPI wine_xrDestroySceneMSFT(XrSceneMSFT scene)
{
    XrResult ret;

    WINE_TRACE("%p\n", scene);
    ret = (*get_dispatch_table((uint64_t)(scene))).p_xrDestroySceneMSFT(scene);
    unregister_dispatchable_handle((uint64_t)scene);
    return ret;
}

static XrResult WINAPI wine_xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver)
{
    XrResult ret;

    WINE_TRACE("%p\n", sceneObserver);
    ret = (*get_dispatch_table((uint64_t)(sceneObserver))).p_xrDestroySceneObserverMSFT(sceneObserver);
    unregister_dispatchable_handle((uint64_t)sceneObserver);
    return ret;
}

XrResult WINAPI wine_xrDestroySpace(XrSpace space)
{
    XrResult ret;

    WINE_TRACE("%p\n", space);
    ret = xrDestroySpace(space);
    unregister_dispatchable_handle((uint64_t)space);
    return ret;
}

static XrResult WINAPI wine_xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor)
{
    XrResult ret;

    WINE_TRACE("%p\n", anchor);
    ret = (*get_dispatch_table((uint64_t)(anchor))).p_xrDestroySpatialAnchorMSFT(anchor);
    unregister_dispatchable_handle((uint64_t)anchor);
    return ret;
}

static XrResult WINAPI wine_xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    XrResult ret;

    WINE_TRACE("%p\n", spatialAnchorStore);
    ret = (*get_dispatch_table((uint64_t)(spatialAnchorStore))).p_xrDestroySpatialAnchorStoreConnectionMSFT(spatialAnchorStore);
    unregister_dispatchable_handle((uint64_t)spatialAnchorStore);
    return ret;
}

static XrResult WINAPI wine_xrDestroyTriangleMeshFB(XrTriangleMeshFB mesh)
{
    XrResult ret;

    WINE_TRACE("%p\n", mesh);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrDestroyTriangleMeshFB(mesh);
    unregister_dispatchable_handle((uint64_t)mesh);
    return ret;
}

XrResult WINAPI wine_xrEndSession(XrSession session)
{
    XrResult ret;

    WINE_TRACE("%p\n", session);
    ret = xrEndSession(((wine_XrSession *)session)->session);
    return ret;
}

XrResult WINAPI wine_xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties)
{
    XrResult ret;

    WINE_TRACE("%u, %p, %p\n", propertyCapacityInput, propertyCountOutput, properties);
    ret = xrEnumerateApiLayerProperties(propertyCapacityInput, propertyCountOutput, properties);
    return ret;
}

XrResult WINAPI wine_xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %u, %p, %p\n", session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
    ret = xrEnumerateBoundSourcesForAction(((wine_XrSession *)session)->session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", session, colorSpaceCapacityInput, colorSpaceCountOutput, colorSpaces);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateColorSpacesFB(((wine_XrSession *)session)->session, colorSpaceCapacityInput, colorSpaceCountOutput, colorSpaces);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateDisplayRefreshRatesFB(((wine_XrSession *)session)->session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
    return ret;
}

XrResult WINAPI wine_xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
    ret = xrEnumerateEnvironmentBlendModes(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", session, cameraCapacityInput, cameraCountOutput, cameras);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateExternalCamerasOCULUS(((wine_XrSession *)session)->session, cameraCapacityInput, cameraCountOutput, cameras);
    return ret;
}

static XrResult WINAPI wine_xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", instance, counterPathCapacityInput, counterPathCountOutput, counterPaths);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrEnumeratePerformanceMetricsCounterPathsMETA(((wine_XrInstance *)instance)->instance, counterPathCapacityInput, counterPathCountOutput, counterPaths);
    return ret;
}

static XrResult WINAPI wine_xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNamesCapacityInput, uint32_t *spatialAnchorNamesCountOutput, XrSpatialAnchorPersistenceNameMSFT *persistedAnchorNames)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", spatialAnchorStore, spatialAnchorNamesCapacityInput, spatialAnchorNamesCountOutput, persistedAnchorNames);
    ret = (*get_dispatch_table((uint64_t)(spatialAnchorStore))).p_xrEnumeratePersistedSpatialAnchorNamesMSFT(spatialAnchorStore, spatialAnchorNamesCapacityInput, spatialAnchorNamesCountOutput, persistedAnchorNames);
    return ret;
}

XrResult WINAPI wine_xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", session, spaceCapacityInput, spaceCountOutput, spaces);
    ret = xrEnumerateReferenceSpaces(((wine_XrSession *)session)->session, spaceCapacityInput, spaceCountOutput, spaces);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", session, pathCapacityInput, pathCountOutput, paths);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrEnumerateRenderModelPathsFB(((wine_XrSession *)session)->session, pathCapacityInput, pathCountOutput, paths);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, modeCapacityInput, modeCountOutput, modes);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrEnumerateReprojectionModesMSFT(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, modeCapacityInput, modeCountOutput, modes);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), featureCapacityInput, featureCountOutput, features);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrEnumerateSceneComputeFeaturesMSFT(((wine_XrInstance *)instance)->instance, systemId, featureCapacityInput, featureCountOutput, features);
    return ret;
}

XrResult WINAPI wine_xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, viewCapacityInput, viewCountOutput, views);
    ret = xrEnumerateViewConfigurationViews(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, viewCapacityInput, viewCountOutput, views);
    return ret;
}

XrResult WINAPI wine_xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
    ret = xrEnumerateViewConfigurations(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
    return ret;
}

static XrResult WINAPI wine_xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %p, %p\n", instance, pathCapacityInput, pathCountOutput, paths);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrEnumerateViveTrackerPathsHTCX(((wine_XrInstance *)instance)->instance, pathCapacityInput, pathCountOutput, paths);
    return ret;
}

static XrResult WINAPI wine_xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", instance, transformation);
    ret = (*get_dispatch_table((uint64_t)(instance))).p_xrGeometryInstanceSetTransformFB(instance, transformation);
    return ret;
}

XrResult WINAPI wine_xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    ret = xrGetActionStateBoolean(((wine_XrSession *)session)->session, getInfo, state);
    return ret;
}

XrResult WINAPI wine_xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    ret = xrGetActionStateFloat(((wine_XrSession *)session)->session, getInfo, state);
    return ret;
}

XrResult WINAPI wine_xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    ret = xrGetActionStatePose(((wine_XrSession *)session)->session, getInfo, state);
    return ret;
}

XrResult WINAPI wine_xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, getInfo, state);
    ret = xrGetActionStateVector2f(((wine_XrSession *)session)->session, getInfo, state);
    return ret;
}

static XrResult WINAPI wine_xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", instance, buffer);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrGetAudioInputDeviceGuidOculus(((wine_XrInstance *)instance)->instance, buffer);
    return ret;
}

static XrResult WINAPI wine_xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", instance, buffer);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrGetAudioOutputDeviceGuidOculus(((wine_XrInstance *)instance)->instance, buffer);
    return ret;
}

static XrResult WINAPI wine_xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(topLevelUserPath), controllerModelKeyState);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelKeyMSFT(((wine_XrSession *)session)->session, topLevelUserPath, controllerModelKeyState);
    return ret;
}

static XrResult WINAPI wine_xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(modelKey), properties);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelPropertiesMSFT(((wine_XrSession *)session)->session, modelKey, properties);
    return ret;
}

static XrResult WINAPI wine_xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(modelKey), state);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetControllerModelStateMSFT(((wine_XrSession *)session)->session, modelKey, state);
    return ret;
}

XrResult WINAPI wine_xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(topLevelUserPath), interactionProfile);
    ret = xrGetCurrentInteractionProfile(((wine_XrSession *)session)->session, topLevelUserPath, interactionProfile);
    return ret;
}

static XrResult WINAPI wine_xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, hapticActionInfo, deviceSampleRate);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetDeviceSampleRateFB(((wine_XrSession *)session)->session, hapticActionInfo, deviceSampleRate);
    return ret;
}

static XrResult WINAPI wine_xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, displayRefreshRate);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetDisplayRefreshRateFB(((wine_XrSession *)session)->session, displayRefreshRate);
    return ret;
}

static XrResult WINAPI wine_xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, foveationState);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetFoveationEyeTrackedStateMETA(((wine_XrSession *)session)->session, foveationState);
    return ret;
}

static XrResult WINAPI wine_xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", handTracker, mesh);
    ret = (*get_dispatch_table((uint64_t)(handTracker))).p_xrGetHandMeshFB(handTracker, mesh);
    return ret;
}

XrResult WINAPI wine_xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %u, %p, %p\n", session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
    ret = xrGetInputSourceLocalizedName(((wine_XrSession *)session)->session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
    return ret;
}

XrResult WINAPI wine_xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", instance, instanceProperties);
    ret = xrGetInstanceProperties(((wine_XrInstance *)instance)->instance, instanceProperties);
    return ret;
}

static XrResult WINAPI wine_xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrGetOpenGLGraphicsRequirementsKHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
    return ret;
}

static XrResult WINAPI wine_xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, state);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetPerformanceMetricsStateMETA(((wine_XrSession *)session)->session, state);
    return ret;
}

XrResult WINAPI wine_xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %p\n", session, referenceSpaceType, bounds);
    ret = xrGetReferenceSpaceBoundsRect(((wine_XrSession *)session)->session, referenceSpaceType, bounds);
    return ret;
}

static XrResult WINAPI wine_xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(path), properties);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetRenderModelPropertiesFB(((wine_XrSession *)session)->session, path, properties);
    return ret;
}

static XrResult WINAPI wine_xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", scene, getInfo, components);
    ret = (*get_dispatch_table((uint64_t)(scene))).p_xrGetSceneComponentsMSFT(scene, getInfo, components);
    return ret;
}

static XrResult WINAPI wine_xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", sceneObserver, state);
    ret = (*get_dispatch_table((uint64_t)(sceneObserver))).p_xrGetSceneComputeStateMSFT(sceneObserver, state);
    return ret;
}

static XrResult WINAPI wine_xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers)
{
#if defined(USE_STRUCT_CONVERSION)
    XrResult result;
    XrSceneMeshBuffersGetInfoMSFT_host getInfo_host;
    WINE_TRACE("%p, %p, %p\n", scene, getInfo, buffers);

    convert_XrSceneMeshBuffersGetInfoMSFT_win_to_host(getInfo, &getInfo_host);
    result = (*get_dispatch_table((uint64_t)(scene))).p_xrGetSceneMeshBuffersMSFT(scene, &getInfo_host, buffers);

    return result;
#else
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", scene, getInfo, buffers);
    ret = (*get_dispatch_table((uint64_t)(scene))).p_xrGetSceneMeshBuffersMSFT(scene, getInfo, buffers);
    return ret;
#endif
}

static XrResult WINAPI wine_xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %u, %p, %p\n", scene, getInfo, countInput, readOutput, buffer);
    ret = (*get_dispatch_table((uint64_t)(scene))).p_xrGetSerializedSceneFragmentDataMSFT(scene, getInfo, countInput, readOutput, buffer);
    return ret;
}

static XrResult WINAPI wine_xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", swapchain, state);
    ret = ((wine_XrSwapchain *)swapchain)->wine_session->wine_instance->funcs.p_xrGetSwapchainStateFB(((wine_XrSwapchain *)swapchain)->swapchain, state);
    return ret;
}

XrResult WINAPI wine_xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), properties);
    ret = xrGetSystemProperties(((wine_XrInstance *)instance)->instance, systemId, properties);
    return ret;
}

XrResult WINAPI wine_xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %#x, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, configurationProperties);
    ret = xrGetViewConfigurationProperties(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, configurationProperties);
    return ret;
}

static XrResult WINAPI wine_xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask)
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %u, %#x, %p\n", session, viewConfigurationType, viewIndex, visibilityMaskType, visibilityMask);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrGetVisibilityMaskKHR(((wine_XrSession *)session)->session, viewConfigurationType, viewIndex, visibilityMaskType, visibilityMask);
    return ret;
}

static XrResult WINAPI wine_xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsRequirements2KHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
    return ret;
}

static XrResult WINAPI wine_xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    ret = ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsRequirementsKHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
    return ret;
}

static XrResult WINAPI wine_xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", session, wine_dbgstr_longlong(modelKey), bufferCapacityInput, bufferCountOutput, buffer);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrLoadControllerModelMSFT(((wine_XrSession *)session)->session, modelKey, bufferCapacityInput, bufferCountOutput, buffer);
    return ret;
}

static XrResult WINAPI wine_xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, info, buffer);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrLoadRenderModelFB(((wine_XrSession *)session)->session, info, buffer);
    return ret;
}

static XrResult WINAPI wine_xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", handTracker, locateInfo, locations);
    ret = (*get_dispatch_table((uint64_t)(handTracker))).p_xrLocateHandJointsEXT(handTracker, locateInfo, locations);
    return ret;
}

static XrResult WINAPI wine_xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", scene, locateInfo, locations);
    ret = (*get_dispatch_table((uint64_t)(scene))).p_xrLocateSceneComponentsMSFT(scene, locateInfo, locations);
    return ret;
}

XrResult WINAPI wine_xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location)
{
    XrResult ret;

    WINE_TRACE("%p, %p, 0x%s, %p\n", space, baseSpace, wine_dbgstr_longlong(time), location);
    ret = xrLocateSpace(space, baseSpace, time, location);
    return ret;
}

XrResult WINAPI wine_xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p, %u, %p, %p\n", session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
    ret = xrLocateViews(((wine_XrSession *)session)->session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer)
{
    XrResult ret;

    WINE_TRACE("%p\n", layer);
    ret = (*get_dispatch_table((uint64_t)(layer))).p_xrPassthroughLayerPauseFB(layer);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer)
{
    XrResult ret;

    WINE_TRACE("%p\n", layer);
    ret = (*get_dispatch_table((uint64_t)(layer))).p_xrPassthroughLayerResumeFB(layer);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", layer, intensity);
    ret = (*get_dispatch_table((uint64_t)(layer))).p_xrPassthroughLayerSetKeyboardHandsIntensityFB(layer, intensity);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", layer, style);
    ret = (*get_dispatch_table((uint64_t)(layer))).p_xrPassthroughLayerSetStyleFB(layer, style);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughPauseFB(XrPassthroughFB passthrough)
{
    XrResult ret;

    WINE_TRACE("%p\n", passthrough);
    ret = (*get_dispatch_table((uint64_t)(passthrough))).p_xrPassthroughPauseFB(passthrough);
    return ret;
}

static XrResult WINAPI wine_xrPassthroughStartFB(XrPassthroughFB passthrough)
{
    XrResult ret;

    WINE_TRACE("%p\n", passthrough);
    ret = (*get_dispatch_table((uint64_t)(passthrough))).p_xrPassthroughStartFB(passthrough);
    return ret;
}

XrResult WINAPI wine_xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %u, %p, %p\n", instance, wine_dbgstr_longlong(path), bufferCapacityInput, bufferCountOutput, buffer);
    ret = xrPathToString(((wine_XrInstance *)instance)->instance, path, bufferCapacityInput, bufferCountOutput, buffer);
    return ret;
}

static XrResult WINAPI wine_xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level)
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %#x\n", session, domain, level);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrPerfSettingsSetPerformanceLevelEXT(((wine_XrSession *)session)->session, domain, level);
    return ret;
}

static XrResult WINAPI wine_xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", spatialAnchorStore, spatialAnchorPersistenceInfo);
    ret = (*get_dispatch_table((uint64_t)(spatialAnchorStore))).p_xrPersistSpatialAnchorMSFT(spatialAnchorStore, spatialAnchorPersistenceInfo);
    return ret;
}

static XrResult WINAPI wine_xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(counterPath), counter);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrQueryPerformanceMetricsCounterMETA(((wine_XrSession *)session)->session, counterPath, counter);
    return ret;
}

static XrResult WINAPI wine_xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrQuerySpacesFB(((wine_XrSession *)session)->session, info, requestId);
    return ret;
}

XrResult WINAPI wine_xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", swapchain, releaseInfo);
    ret = xrReleaseSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, releaseInfo);
    return ret;
}

static XrResult WINAPI wine_xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate)
{
    XrResult ret;

    WINE_TRACE("%p, %f\n", session, displayRefreshRate);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrRequestDisplayRefreshRateFB(((wine_XrSession *)session)->session, displayRefreshRate);
    return ret;
}

XrResult WINAPI wine_xrRequestExitSession(XrSession session)
{
    XrResult ret;

    WINE_TRACE("%p\n", session);
    ret = xrRequestExitSession(((wine_XrSession *)session)->session);
    return ret;
}

static XrResult WINAPI wine_xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrRequestSceneCaptureFB(((wine_XrSession *)session)->session, info, requestId);
    return ret;
}

XrResult WINAPI wine_xrResultToString(XrInstance instance, XrResult value, char buffer[])
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %p\n", instance, value, buffer);
    ret = xrResultToString(((wine_XrInstance *)instance)->instance, value, buffer);
    return ret;
}

static XrResult WINAPI wine_xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(requestId), results);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrRetrieveSpaceQueryResultsFB(((wine_XrSession *)session)->session, requestId, results);
    return ret;
}

static XrResult WINAPI wine_xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, info, requestId);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSaveSpaceListFB(((wine_XrSession *)session)->session, info, requestId);
    return ret;
}

static XrResult WINAPI wine_xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorspace)
{
    XrResult ret;

    WINE_TRACE("%p, %#x\n", session, colorspace);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetColorSpaceFB(((wine_XrSession *)session)->session, colorspace);
    return ret;
}

static XrResult WINAPI wine_xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, digitalLensControl);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetDigitalLensControlALMALENCE(((wine_XrSession *)session)->session, digitalLensControl);
    return ret;
}

static XrResult WINAPI wine_xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled)
{
    XrResult ret;

    WINE_TRACE("%p, %u\n", session, enabled);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetEnvironmentDepthEstimationVARJO(((wine_XrSession *)session)->session, enabled);
    return ret;
}

static XrResult WINAPI wine_xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, 0x%s, %u\n", session, wine_dbgstr_longlong(interactionProfile), wine_dbgstr_longlong(topLevelPath), isActive);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceActiveEXT(((wine_XrSession *)session)->session, interactionProfile, topLevelPath, isActive);
    return ret;
}

static XrResult WINAPI wine_xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, 0x%s, %p, {{%f, %f, %f, %f}, {%f %f %f}}\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), space, pose.orientation.x, pose.orientation.y, pose.orientation.z, pose.orientation.w, pose.position.x, pose.position.y, pose.position.z);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceLocationEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, space, pose);
    return ret;
}

static XrResult WINAPI wine_xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, 0x%s, %u\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateBoolEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
    return ret;
}

static XrResult WINAPI wine_xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, 0x%s, %f\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateFloatEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
    return ret;
}

static XrResult WINAPI wine_xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state)
{
    XrResult ret;

    WINE_TRACE("%p, 0x%s, 0x%s, %f, %f\n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), state.x, state.y);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceStateVector2fEXT(((wine_XrSession *)session)->session, topLevelPath, inputSourcePath, state);
    return ret;
}

static XrResult WINAPI wine_xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, state);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetPerformanceMetricsStateMETA(((wine_XrSession *)session)->session, state);
    return ret;
}

static XrResult WINAPI wine_xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint)
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %#x\n", session, domain, hint);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetTrackingOptimizationSettingsHintQCOM(((wine_XrSession *)session)->session, domain, hint);
    return ret;
}

static XrResult WINAPI wine_xrSetViewOffsetVARJO(XrSession session, float offset)
{
    XrResult ret;

    WINE_TRACE("%p, %f\n", session, offset);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetViewOffsetVARJO(((wine_XrSession *)session)->session, offset);
    return ret;
}

XrResult WINAPI wine_xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, hapticActionInfo);
    ret = xrStopHapticFeedback(((wine_XrSession *)session)->session, hapticActionInfo);
    return ret;
}

XrResult WINAPI wine_xrStringToPath(XrInstance instance, const char *pathString, XrPath *path)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", instance, pathString, path);
    ret = xrStringToPath(((wine_XrInstance *)instance)->instance, pathString, path);
    return ret;
}

XrResult WINAPI wine_xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[])
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %p\n", instance, value, buffer);
    ret = xrStructureTypeToString(((wine_XrInstance *)instance)->instance, value, buffer);
    return ret;
}

XrResult WINAPI wine_xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", instance, suggestedBindings);
    ret = xrSuggestInteractionProfileBindings(((wine_XrInstance *)instance)->instance, suggestedBindings);
    return ret;
}

XrResult WINAPI wine_xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", session, syncInfo);
    ret = xrSyncActions(((wine_XrSession *)session)->session, syncInfo);
    return ret;
}

static XrResult WINAPI wine_xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope)
{
    XrResult ret;

    WINE_TRACE("%p, %#x, %p, %p, %p\n", session, domain, notificationLevel, tempHeadroom, tempSlope);
    ret = ((wine_XrSession *)session)->wine_instance->funcs.p_xrThermalGetTemperatureTrendEXT(((wine_XrSession *)session)->session, domain, notificationLevel, tempHeadroom, tempSlope);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh)
{
    XrResult ret;

    WINE_TRACE("%p\n", mesh);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshBeginUpdateFB(mesh);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t *outVertexCount)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", mesh, outVertexCount);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshBeginVertexBufferUpdateFB(mesh, outVertexCount);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount)
{
    XrResult ret;

    WINE_TRACE("%p, %u, %u\n", mesh, vertexCount, triangleCount);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshEndUpdateFB(mesh, vertexCount, triangleCount);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh)
{
    XrResult ret;

    WINE_TRACE("%p\n", mesh);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshEndVertexBufferUpdateFB(mesh);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t **outIndexBuffer)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", mesh, outIndexBuffer);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshGetIndexBufferFB(mesh, outIndexBuffer);
    return ret;
}

static XrResult WINAPI wine_xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f **outVertexBuffer)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", mesh, outVertexBuffer);
    ret = (*get_dispatch_table((uint64_t)(mesh))).p_xrTriangleMeshGetVertexBufferFB(mesh, outVertexBuffer);
    return ret;
}

static XrResult WINAPI wine_xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", spatialAnchorStore, spatialAnchorPersistenceName);
    ret = (*get_dispatch_table((uint64_t)(spatialAnchorStore))).p_xrUnpersistSpatialAnchorMSFT(spatialAnchorStore, spatialAnchorPersistenceName);
    return ret;
}

static XrResult WINAPI wine_xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", swapchain, state);
    ret = ((wine_XrSwapchain *)swapchain)->wine_session->wine_instance->funcs.p_xrUpdateSwapchainFB(((wine_XrSwapchain *)swapchain)->swapchain, state);
    return ret;
}

XrResult WINAPI wine_xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState)
{
    XrResult ret;

    WINE_TRACE("%p, %p, %p\n", session, frameWaitInfo, frameState);
    ret = xrWaitFrame(((wine_XrSession *)session)->session, frameWaitInfo, frameState);
    return ret;
}

XrResult WINAPI wine_xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo)
{
    XrResult ret;

    WINE_TRACE("%p, %p\n", swapchain, waitInfo);
    ret = xrWaitSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, waitInfo);
    return ret;
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
