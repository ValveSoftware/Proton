/* Automatically generated from OpenXR xr.xml; DO NOT EDIT!
 *
 * This file is generated from OpenXR xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2020 The Khronos Group Inc.
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
 * maintained in the master branch of the Khronos OpenXR GitHub project.
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

static XrResult WINAPI wine_xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    WINE_TRACE("%p, %p, %p\n", handTracker, createInfo, space);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrCreateHandMeshSpaceMSFT(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, createInfo, space);
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

static XrResult WINAPI wine_xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    WINE_TRACE("%p, %p, %p\n", session, createInfo, space);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrCreateSpatialGraphNodeSpaceMSFT(((wine_XrSession *)session)->session, createInfo, space);
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

XrResult WINAPI wine_xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    WINE_TRACE("%p, 0x%s, %#x, %u, %p, %p\n", instance, wine_dbgstr_longlong(systemId), viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
    return xrEnumerateEnvironmentBlendModes(((wine_XrInstance *)instance)->instance, systemId, viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
}

XrResult WINAPI wine_xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    WINE_TRACE("%p, %u, %p, %p\n", session, spaceCapacityInput, spaceCountOutput, spaces);
    return xrEnumerateReferenceSpaces(((wine_XrSession *)session)->session, spaceCapacityInput, spaceCountOutput, spaces);
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

XrResult WINAPI wine_xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    WINE_TRACE("%p, 0x%s, %p\n", session, wine_dbgstr_longlong(topLevelUserPath), interactionProfile);
    return xrGetCurrentInteractionProfile(((wine_XrSession *)session)->session, topLevelUserPath, interactionProfile);
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

XrResult WINAPI wine_xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    WINE_TRACE("%p, %#x, %p\n", session, referenceSpaceType, bounds);
    return xrGetReferenceSpaceBoundsRect(((wine_XrSession *)session)->session, referenceSpaceType, bounds);
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

static XrResult WINAPI wine_xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    WINE_TRACE("%p, 0x%s, %p\n", instance, wine_dbgstr_longlong(systemId), graphicsRequirements);
    return ((wine_XrInstance *)instance)->funcs.p_xrGetVulkanGraphicsRequirementsKHR(((wine_XrInstance *)instance)->instance, systemId, graphicsRequirements);
}

static XrResult WINAPI wine_xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    WINE_TRACE("%p, %p, %p\n", handTracker, locateInfo, locations);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrLocateHandJointsEXT(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, locateInfo, locations);
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

XrResult WINAPI wine_xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo)
{
    WINE_TRACE("%p, %p\n", swapchain, releaseInfo);
    return xrReleaseSwapchainImage(((wine_XrSwapchain *)swapchain)->swapchain, releaseInfo);
}

XrResult WINAPI wine_xrRequestExitSession(XrSession session)
{
    WINE_TRACE("%p\n", session);
    return xrRequestExitSession(((wine_XrSession *)session)->session);
}

XrResult WINAPI wine_xrResultToString(XrInstance instance, XrResult value, char buffer[])
{
    WINE_TRACE("%p, %#x, %p\n", instance, value, buffer);
    return xrResultToString(((wine_XrInstance *)instance)->instance, value, buffer);
}

static XrResult WINAPI wine_xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %u\n", session, wine_dbgstr_longlong(interactionProfile), wine_dbgstr_longlong(topLevelPath), isActive);
    return ((wine_XrSession *)session)->wine_instance->funcs.p_xrSetInputDeviceActiveEXT(((wine_XrSession *)session)->session, interactionProfile, topLevelPath, isActive);
}

static XrResult WINAPI wine_xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    WINE_TRACE("%p, 0x%s, 0x%s, %p, \n", session, wine_dbgstr_longlong(topLevelPath), wine_dbgstr_longlong(inputSourcePath), space, pose);
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

static XrResult WINAPI wine_xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh)
{
    WINE_TRACE("%p, %p, %p\n", handTracker, updateInfo, handMesh);
    return ((wine_XrHandTrackerEXT *)handTracker)->wine_session->wine_instance->funcs.p_xrUpdateHandMeshMSFT(((wine_XrHandTrackerEXT *)handTracker)->hand_tracker, updateInfo, handMesh);
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
    {"xrApplyHapticFeedback", &wine_xrApplyHapticFeedback},
    {"xrAttachSessionActionSets", &wine_xrAttachSessionActionSets},
    {"xrBeginFrame", &wine_xrBeginFrame},
    {"xrBeginSession", &wine_xrBeginSession},
    {"xrConvertTimeToWin32PerformanceCounterKHR", &wine_xrConvertTimeToWin32PerformanceCounterKHR},
    {"xrConvertWin32PerformanceCounterToTimeKHR", &wine_xrConvertWin32PerformanceCounterToTimeKHR},
    {"xrCreateAction", &wine_xrCreateAction},
    {"xrCreateActionSet", &wine_xrCreateActionSet},
    {"xrCreateActionSpace", &wine_xrCreateActionSpace},
    {"xrCreateHandMeshSpaceMSFT", &wine_xrCreateHandMeshSpaceMSFT},
    {"xrCreateHandTrackerEXT", &wine_xrCreateHandTrackerEXT},
    {"xrCreateInstance", &wine_xrCreateInstance},
    {"xrCreateReferenceSpace", &wine_xrCreateReferenceSpace},
    {"xrCreateSession", &wine_xrCreateSession},
    {"xrCreateSpatialAnchorMSFT", &wine_xrCreateSpatialAnchorMSFT},
    {"xrCreateSpatialAnchorSpaceMSFT", &wine_xrCreateSpatialAnchorSpaceMSFT},
    {"xrCreateSpatialGraphNodeSpaceMSFT", &wine_xrCreateSpatialGraphNodeSpaceMSFT},
    {"xrCreateSwapchain", &wine_xrCreateSwapchain},
    {"xrDestroyAction", &wine_xrDestroyAction},
    {"xrDestroyActionSet", &wine_xrDestroyActionSet},
    {"xrDestroyHandTrackerEXT", &wine_xrDestroyHandTrackerEXT},
    {"xrDestroyInstance", &wine_xrDestroyInstance},
    {"xrDestroySession", &wine_xrDestroySession},
    {"xrDestroySpace", &wine_xrDestroySpace},
    {"xrDestroySpatialAnchorMSFT", &wine_xrDestroySpatialAnchorMSFT},
    {"xrDestroySwapchain", &wine_xrDestroySwapchain},
    {"xrEndFrame", &wine_xrEndFrame},
    {"xrEndSession", &wine_xrEndSession},
    {"xrEnumerateApiLayerProperties", &wine_xrEnumerateApiLayerProperties},
    {"xrEnumerateBoundSourcesForAction", &wine_xrEnumerateBoundSourcesForAction},
    {"xrEnumerateEnvironmentBlendModes", &wine_xrEnumerateEnvironmentBlendModes},
    {"xrEnumerateInstanceExtensionProperties", &wine_xrEnumerateInstanceExtensionProperties},
    {"xrEnumerateReferenceSpaces", &wine_xrEnumerateReferenceSpaces},
    {"xrEnumerateSwapchainFormats", &wine_xrEnumerateSwapchainFormats},
    {"xrEnumerateSwapchainImages", &wine_xrEnumerateSwapchainImages},
    {"xrEnumerateViewConfigurationViews", &wine_xrEnumerateViewConfigurationViews},
    {"xrEnumerateViewConfigurations", &wine_xrEnumerateViewConfigurations},
    {"xrGetActionStateBoolean", &wine_xrGetActionStateBoolean},
    {"xrGetActionStateFloat", &wine_xrGetActionStateFloat},
    {"xrGetActionStatePose", &wine_xrGetActionStatePose},
    {"xrGetActionStateVector2f", &wine_xrGetActionStateVector2f},
    {"xrGetCurrentInteractionProfile", &wine_xrGetCurrentInteractionProfile},
    {"xrGetD3D11GraphicsRequirementsKHR", &wine_xrGetD3D11GraphicsRequirementsKHR},
    {"xrGetD3D12GraphicsRequirementsKHR", &wine_xrGetD3D12GraphicsRequirementsKHR},
    {"xrGetInputSourceLocalizedName", &wine_xrGetInputSourceLocalizedName},
    {"xrGetInstanceProcAddr", &wine_xrGetInstanceProcAddr},
    {"xrGetInstanceProperties", &wine_xrGetInstanceProperties},
    {"xrGetOpenGLGraphicsRequirementsKHR", &wine_xrGetOpenGLGraphicsRequirementsKHR},
    {"xrGetReferenceSpaceBoundsRect", &wine_xrGetReferenceSpaceBoundsRect},
    {"xrGetSystem", &wine_xrGetSystem},
    {"xrGetSystemProperties", &wine_xrGetSystemProperties},
    {"xrGetViewConfigurationProperties", &wine_xrGetViewConfigurationProperties},
    {"xrGetVisibilityMaskKHR", &wine_xrGetVisibilityMaskKHR},
    {"xrGetVulkanDeviceExtensionsKHR", &wine_xrGetVulkanDeviceExtensionsKHR},
    {"xrGetVulkanGraphicsDeviceKHR", &wine_xrGetVulkanGraphicsDeviceKHR},
    {"xrGetVulkanGraphicsRequirementsKHR", &wine_xrGetVulkanGraphicsRequirementsKHR},
    {"xrGetVulkanInstanceExtensionsKHR", &wine_xrGetVulkanInstanceExtensionsKHR},
    {"xrLocateHandJointsEXT", &wine_xrLocateHandJointsEXT},
    {"xrLocateSpace", &wine_xrLocateSpace},
    {"xrLocateViews", &wine_xrLocateViews},
    {"xrPathToString", &wine_xrPathToString},
    {"xrPerfSettingsSetPerformanceLevelEXT", &wine_xrPerfSettingsSetPerformanceLevelEXT},
    {"xrPollEvent", &wine_xrPollEvent},
    {"xrReleaseSwapchainImage", &wine_xrReleaseSwapchainImage},
    {"xrRequestExitSession", &wine_xrRequestExitSession},
    {"xrResultToString", &wine_xrResultToString},
    {"xrSetInputDeviceActiveEXT", &wine_xrSetInputDeviceActiveEXT},
    {"xrSetInputDeviceLocationEXT", &wine_xrSetInputDeviceLocationEXT},
    {"xrSetInputDeviceStateBoolEXT", &wine_xrSetInputDeviceStateBoolEXT},
    {"xrSetInputDeviceStateFloatEXT", &wine_xrSetInputDeviceStateFloatEXT},
    {"xrSetInputDeviceStateVector2fEXT", &wine_xrSetInputDeviceStateVector2fEXT},
    {"xrStopHapticFeedback", &wine_xrStopHapticFeedback},
    {"xrStringToPath", &wine_xrStringToPath},
    {"xrStructureTypeToString", &wine_xrStructureTypeToString},
    {"xrSuggestInteractionProfileBindings", &wine_xrSuggestInteractionProfileBindings},
    {"xrSyncActions", &wine_xrSyncActions},
    {"xrThermalGetTemperatureTrendEXT", &wine_xrThermalGetTemperatureTrendEXT},
    {"xrUpdateHandMeshMSFT", &wine_xrUpdateHandMeshMSFT},
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
    "XR_EPIC_view_configuration_fov",
    "XR_EXTX_overlay",
    "XR_EXT_conformance_automation",
    "XR_EXT_eye_gaze_interaction",
    "XR_EXT_hand_tracking",
    "XR_EXT_hp_mixed_reality_controller",
    "XR_EXT_performance_settings",
    "XR_EXT_samsung_odyssey_controller",
    "XR_EXT_thermal_query",
    "XR_EXT_view_configuration_depth_range",
    "XR_EXT_win32_appcontainer_compatible",
    "XR_HUAWEI_controller_interaction",
    "XR_KHR_D3D11_enable",
    "XR_KHR_D3D12_enable",
    "XR_KHR_composition_layer_cube",
    "XR_KHR_composition_layer_cylinder",
    "XR_KHR_composition_layer_depth",
    "XR_KHR_composition_layer_equirect",
    "XR_KHR_opengl_enable",
    "XR_KHR_visibility_mask",
    "XR_KHR_vulkan_enable",
    "XR_KHR_vulkan_swapchain_format_list",
    "XR_KHR_win32_convert_performance_counter_time",
    "XR_MND_headless",
    "XR_MND_swapchain_usage_input_attachment_bit",
    "XR_MSFT_first_person_observer",
    "XR_MSFT_hand_interaction",
    "XR_MSFT_hand_tracking_mesh",
    "XR_MSFT_holographic_window_attachment",
    "XR_MSFT_secondary_view_configuration",
    "XR_MSFT_spatial_anchor",
    "XR_MSFT_spatial_graph_bridge",
    "XR_MSFT_unbounded_reference_space",
    "XR_OCULUS_android_session_state_enable",
    "XR_VALVE_analog_threshold",
    "XR_VARJO_quad_views",
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
