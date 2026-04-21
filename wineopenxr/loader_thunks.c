/* Automatically generated from Vulkan xr.xml; DO NOT EDIT!
 *
 * This file is generated from Vulkan xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2026 The Khronos Group Inc.
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

#include "openxr_loader.h"

WINE_DEFAULT_DEBUG_CHANNEL(openxr);

XrResult WINAPI xrAcquireEnvironmentDepthImageMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthImageAcquireInfoMETA *acquireInfo, XrEnvironmentDepthImageMETA *environmentDepthImage)
{
    struct xrAcquireEnvironmentDepthImageMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.acquireInfo = acquireInfo;
    params.environmentDepthImage = environmentDepthImage;
    _status = UNIX_CALL(xrAcquireEnvironmentDepthImageMETA, &params);
    assert(!_status && "xrAcquireEnvironmentDepthImageMETA");
    return params.result;
}

XrResult WINAPI xrAddTrackableImageDatabaseANDROID(XrTrackableTrackerANDROID tracker, XrTrackableImageDatabaseANDROID database)
{
    struct xrAddTrackableImageDatabaseANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.database = database;
    _status = UNIX_CALL(xrAddTrackableImageDatabaseANDROID, &params);
    assert(!_status && "xrAddTrackableImageDatabaseANDROID");
    return params.result;
}

XrResult WINAPI xrAllocateWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferSizeML *size, XrWorldMeshBufferML *buffer)
{
    struct xrAllocateWorldMeshBufferML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.size = size;
    params.buffer = buffer;
    _status = UNIX_CALL(xrAllocateWorldMeshBufferML, &params);
    assert(!_status && "xrAllocateWorldMeshBufferML");
    return params.result;
}

XrResult WINAPI xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations)
{
    struct xrApplyForceFeedbackCurlMNDX_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.locations = locations;
    _status = UNIX_CALL(xrApplyForceFeedbackCurlMNDX, &params);
    assert(!_status && "xrApplyForceFeedbackCurlMNDX");
    return params.result;
}

XrResult WINAPI xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback)
{
    struct xrApplyHapticFeedback_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.hapticFeedback = hapticFeedback;
    _status = UNIX_CALL(xrApplyHapticFeedback, &params);
    assert(!_status && "xrApplyHapticFeedback");
    return params.result;
}

XrResult WINAPI xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo)
{
    struct xrAttachSessionActionSets_params params;
    NTSTATUS _status;
    params.session = session;
    params.attachInfo = attachInfo;
    _status = UNIX_CALL(xrAttachSessionActionSets, &params);
    assert(!_status && "xrAttachSessionActionSets");
    return params.result;
}

XrResult WINAPI xrBeginPlaneDetectionEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT *beginInfo)
{
    struct xrBeginPlaneDetectionEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.beginInfo = beginInfo;
    _status = UNIX_CALL(xrBeginPlaneDetectionEXT, &params);
    assert(!_status && "xrBeginPlaneDetectionEXT");
    return params.result;
}

XrResult WINAPI xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo)
{
    struct xrBeginSession_params params;
    NTSTATUS _status;
    params.session = session;
    params.beginInfo = beginInfo;
    _status = UNIX_CALL(xrBeginSession, &params);
    assert(!_status && "xrBeginSession");
    return params.result;
}

XrResult WINAPI xrCancelFutureEXT(XrInstance instance, const XrFutureCancelInfoEXT *cancelInfo)
{
    struct xrCancelFutureEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.cancelInfo = cancelInfo;
    _status = UNIX_CALL(xrCancelFutureEXT, &params);
    assert(!_status && "xrCancelFutureEXT");
    return params.result;
}

XrResult WINAPI xrCaptureSceneAsyncBD(XrSenseDataProviderBD provider, const XrSceneCaptureInfoBD *info, XrFutureEXT *future)
{
    struct xrCaptureSceneAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrCaptureSceneAsyncBD, &params);
    assert(!_status && "xrCaptureSceneAsyncBD");
    return params.result;
}

XrResult WINAPI xrCaptureSceneCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrCaptureSceneCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCaptureSceneCompleteBD, &params);
    assert(!_status && "xrCaptureSceneCompleteBD");
    return params.result;
}

XrResult WINAPI xrChangeVirtualKeyboardTextContextMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.changeInfo = changeInfo;
    _status = UNIX_CALL(xrChangeVirtualKeyboardTextContextMETA, &params);
    assert(!_status && "xrChangeVirtualKeyboardTextContextMETA");
    return params.result;
}

XrResult WINAPI xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrClearSpatialAnchorStoreMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrClearSpatialAnchorStoreMSFT, &params);
    assert(!_status && "xrClearSpatialAnchorStoreMSFT");
    return params.result;
}

XrResult WINAPI xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo)
{
    struct xrComputeNewSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.computeInfo = computeInfo;
    _status = UNIX_CALL(xrComputeNewSceneMSFT, &params);
    assert(!_status && "xrComputeNewSceneMSFT");
    return params.result;
}

XrResult WINAPI xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER *performanceCounter)
{
    struct xrConvertTimeToWin32PerformanceCounterKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.time = time;
    params.performanceCounter = performanceCounter;
    _status = UNIX_CALL(xrConvertTimeToWin32PerformanceCounterKHR, &params);
    assert(!_status && "xrConvertTimeToWin32PerformanceCounterKHR");
    return params.result;
}

XrResult WINAPI xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER *performanceCounter, XrTime *time)
{
    struct xrConvertWin32PerformanceCounterToTimeKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.performanceCounter = performanceCounter;
    params.time = time;
    _status = UNIX_CALL(xrConvertWin32PerformanceCounterToTimeKHR, &params);
    assert(!_status && "xrConvertWin32PerformanceCounterToTimeKHR");
    return params.result;
}

XrResult WINAPI xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action)
{
    struct xrCreateAction_params params;
    NTSTATUS _status;
    params.actionSet = actionSet;
    params.createInfo = createInfo;
    params.action = action;
    _status = UNIX_CALL(xrCreateAction, &params);
    assert(!_status && "xrCreateAction");
    return params.result;
}

XrResult WINAPI xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet)
{
    struct xrCreateActionSet_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.createInfo = createInfo;
    params.actionSet = actionSet;
    _status = UNIX_CALL(xrCreateActionSet, &params);
    assert(!_status && "xrCreateActionSet");
    return params.result;
}

XrResult WINAPI xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateActionSpace_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateActionSpace, &params);
    assert(!_status && "xrCreateActionSpace");
    return params.result;
}

XrResult WINAPI xrCreateAnchorSpaceANDROID(XrSession session, const XrAnchorSpaceCreateInfoANDROID *createInfo, XrSpace *anchorOutput)
{
    struct xrCreateAnchorSpaceANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.anchorOutput = anchorOutput;
    _status = UNIX_CALL(xrCreateAnchorSpaceANDROID, &params);
    assert(!_status && "xrCreateAnchorSpaceANDROID");
    return params.result;
}

XrResult WINAPI xrCreateAnchorSpaceBD(XrSession session, const XrAnchorSpaceCreateInfoBD *createInfo, XrSpace *space)
{
    struct xrCreateAnchorSpaceBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateAnchorSpaceBD, &params);
    assert(!_status && "xrCreateAnchorSpaceBD");
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerBD(XrSession session, const XrBodyTrackerCreateInfoBD *createInfo, XrBodyTrackerBD *bodyTracker)
{
    struct xrCreateBodyTrackerBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrCreateBodyTrackerBD, &params);
    assert(!_status && "xrCreateBodyTrackerBD");
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerFB(XrSession session, const XrBodyTrackerCreateInfoFB *createInfo, XrBodyTrackerFB *bodyTracker)
{
    struct xrCreateBodyTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrCreateBodyTrackerFB, &params);
    assert(!_status && "xrCreateBodyTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerHTC(XrSession session, const XrBodyTrackerCreateInfoHTC *createInfo, XrBodyTrackerHTC *bodyTracker)
{
    struct xrCreateBodyTrackerHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrCreateBodyTrackerHTC, &params);
    assert(!_status && "xrCreateBodyTrackerHTC");
    return params.result;
}

XrResult WINAPI xrCreateDeviceAnchorPersistenceANDROID(XrSession session, const XrDeviceAnchorPersistenceCreateInfoANDROID *createInfo, XrDeviceAnchorPersistenceANDROID *outHandle)
{
    struct xrCreateDeviceAnchorPersistenceANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outHandle = outHandle;
    _status = UNIX_CALL(xrCreateDeviceAnchorPersistenceANDROID, &params);
    assert(!_status && "xrCreateDeviceAnchorPersistenceANDROID");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentDepthProviderMETA(XrSession session, const XrEnvironmentDepthProviderCreateInfoMETA *createInfo, XrEnvironmentDepthProviderMETA *environmentDepthProvider)
{
    struct xrCreateEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrCreateEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrCreateEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentDepthSwapchainMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthSwapchainCreateInfoMETA *createInfo, XrEnvironmentDepthSwapchainMETA *swapchain)
{
    struct xrCreateEnvironmentDepthSwapchainMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.createInfo = createInfo;
    params.swapchain = swapchain;
    _status = UNIX_CALL(xrCreateEnvironmentDepthSwapchainMETA, &params);
    assert(!_status && "xrCreateEnvironmentDepthSwapchainMETA");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentRaycasterAsyncMETA(XrSession session, const XrEnvironmentRaycasterCreateInfoMETA *info, XrFutureEXT *future)
{
    struct xrCreateEnvironmentRaycasterAsyncMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrCreateEnvironmentRaycasterAsyncMETA, &params);
    assert(!_status && "xrCreateEnvironmentRaycasterAsyncMETA");
    return params.result;
}

XrResult WINAPI xrCreateEnvironmentRaycasterCompleteMETA(XrSession session, XrFutureEXT future, XrEnvironmentRaycasterCreateCompletionMETA *completion)
{
    struct xrCreateEnvironmentRaycasterCompleteMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateEnvironmentRaycasterCompleteMETA, &params);
    assert(!_status && "xrCreateEnvironmentRaycasterCompleteMETA");
    return params.result;
}

XrResult WINAPI xrCreateExportedLocalizationMapML(XrSession session, const XrUuidEXT *mapUuid, XrExportedLocalizationMapML *map)
{
    struct xrCreateExportedLocalizationMapML_params params;
    NTSTATUS _status;
    params.session = session;
    params.mapUuid = mapUuid;
    params.map = map;
    _status = UNIX_CALL(xrCreateExportedLocalizationMapML, &params);
    assert(!_status && "xrCreateExportedLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrCreateEyeTrackerFB(XrSession session, const XrEyeTrackerCreateInfoFB *createInfo, XrEyeTrackerFB *eyeTracker)
{
    struct xrCreateEyeTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.eyeTracker = eyeTracker;
    _status = UNIX_CALL(xrCreateEyeTrackerFB, &params);
    assert(!_status && "xrCreateEyeTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateFaceTracker2FB(XrSession session, const XrFaceTrackerCreateInfo2FB *createInfo, XrFaceTracker2FB *faceTracker)
{
    struct xrCreateFaceTracker2FB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrCreateFaceTracker2FB, &params);
    assert(!_status && "xrCreateFaceTracker2FB");
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerANDROID(XrSession session, const XrFaceTrackerCreateInfoANDROID *createInfo, XrFaceTrackerANDROID *faceTracker)
{
    struct xrCreateFaceTrackerANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrCreateFaceTrackerANDROID, &params);
    assert(!_status && "xrCreateFaceTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerBD(XrSession session, const XrFaceTrackerCreateInfoBD *createInfo, XrFaceTrackerBD *tracker)
{
    struct xrCreateFaceTrackerBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.tracker = tracker;
    _status = UNIX_CALL(xrCreateFaceTrackerBD, &params);
    assert(!_status && "xrCreateFaceTrackerBD");
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerFB(XrSession session, const XrFaceTrackerCreateInfoFB *createInfo, XrFaceTrackerFB *faceTracker)
{
    struct xrCreateFaceTrackerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrCreateFaceTrackerFB, &params);
    assert(!_status && "xrCreateFaceTrackerFB");
    return params.result;
}

XrResult WINAPI xrCreateFacialExpressionClientML(XrSession session, const XrFacialExpressionClientCreateInfoML *createInfo, XrFacialExpressionClientML *facialExpressionClient)
{
    struct xrCreateFacialExpressionClientML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.facialExpressionClient = facialExpressionClient;
    _status = UNIX_CALL(xrCreateFacialExpressionClientML, &params);
    assert(!_status && "xrCreateFacialExpressionClientML");
    return params.result;
}

XrResult WINAPI xrCreateFacialTrackerHTC(XrSession session, const XrFacialTrackerCreateInfoHTC *createInfo, XrFacialTrackerHTC *facialTracker)
{
    struct xrCreateFacialTrackerHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.facialTracker = facialTracker;
    _status = UNIX_CALL(xrCreateFacialTrackerHTC, &params);
    assert(!_status && "xrCreateFacialTrackerHTC");
    return params.result;
}

XrResult WINAPI xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB *createInfo, XrFoveationProfileFB *profile)
{
    struct xrCreateFoveationProfileFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.profile = profile;
    _status = UNIX_CALL(xrCreateFoveationProfileFB, &params);
    assert(!_status && "xrCreateFoveationProfileFB");
    return params.result;
}

XrResult WINAPI xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB *createInfo, XrGeometryInstanceFB *outGeometryInstance)
{
    struct xrCreateGeometryInstanceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outGeometryInstance = outGeometryInstance;
    _status = UNIX_CALL(xrCreateGeometryInstanceFB, &params);
    assert(!_status && "xrCreateGeometryInstanceFB");
    return params.result;
}

XrResult WINAPI xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateHandMeshSpaceMSFT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateHandMeshSpaceMSFT, &params);
    assert(!_status && "xrCreateHandMeshSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker)
{
    struct xrCreateHandTrackerEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.handTracker = handTracker;
    _status = UNIX_CALL(xrCreateHandTrackerEXT, &params);
    assert(!_status && "xrCreateHandTrackerEXT");
    return params.result;
}

XrResult WINAPI xrCreateKeyboardSpaceFB(XrSession session, const XrKeyboardSpaceCreateInfoFB *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateKeyboardSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    _status = UNIX_CALL(xrCreateKeyboardSpaceFB, &params);
    assert(!_status && "xrCreateKeyboardSpaceFB");
    return params.result;
}

XrResult WINAPI xrCreateMarkerDetectorML(XrSession session, const XrMarkerDetectorCreateInfoML *createInfo, XrMarkerDetectorML *markerDetector)
{
    struct xrCreateMarkerDetectorML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.markerDetector = markerDetector;
    _status = UNIX_CALL(xrCreateMarkerDetectorML, &params);
    assert(!_status && "xrCreateMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceML(XrSession session, const XrMarkerSpaceCreateInfoML *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateMarkerSpaceML, &params);
    assert(!_status && "xrCreateMarkerSpaceML");
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceVARJO(XrSession session, const XrMarkerSpaceCreateInfoVARJO *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateMarkerSpaceVARJO, &params);
    assert(!_status && "xrCreateMarkerSpaceVARJO");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughColorLutMETA(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA *createInfo, XrPassthroughColorLutMETA *colorLut)
{
    struct xrCreatePassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    params.createInfo = createInfo;
    params.colorLut = colorLut;
    _status = UNIX_CALL(xrCreatePassthroughColorLutMETA, &params);
    assert(!_status && "xrCreatePassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB *createInfo, XrPassthroughFB *outPassthrough)
{
    struct xrCreatePassthroughFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outPassthrough = outPassthrough;
    _status = UNIX_CALL(xrCreatePassthroughFB, &params);
    assert(!_status && "xrCreatePassthroughFB");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughHTC(XrSession session, const XrPassthroughCreateInfoHTC *createInfo, XrPassthroughHTC *passthrough)
{
    struct xrCreatePassthroughHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrCreatePassthroughHTC, &params);
    assert(!_status && "xrCreatePassthroughHTC");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughLayerANDROID(XrSession session, const XrPassthroughLayerCreateInfoANDROID *createInfo, XrPassthroughLayerANDROID *layer)
{
    struct xrCreatePassthroughLayerANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.layer = layer;
    _status = UNIX_CALL(xrCreatePassthroughLayerANDROID, &params);
    assert(!_status && "xrCreatePassthroughLayerANDROID");
    return params.result;
}

XrResult WINAPI xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB *createInfo, XrPassthroughLayerFB *outLayer)
{
    struct xrCreatePassthroughLayerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outLayer = outLayer;
    _status = UNIX_CALL(xrCreatePassthroughLayerFB, &params);
    assert(!_status && "xrCreatePassthroughLayerFB");
    return params.result;
}

XrResult WINAPI xrCreatePersistedAnchorSpaceANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrPersistedAnchorSpaceCreateInfoANDROID *createInfo, XrSpace *anchorOutput)
{
    struct xrCreatePersistedAnchorSpaceANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    params.createInfo = createInfo;
    params.anchorOutput = anchorOutput;
    _status = UNIX_CALL(xrCreatePersistedAnchorSpaceANDROID, &params);
    assert(!_status && "xrCreatePersistedAnchorSpaceANDROID");
    return params.result;
}

XrResult WINAPI xrCreatePlaneDetectorEXT(XrSession session, const XrPlaneDetectorCreateInfoEXT *createInfo, XrPlaneDetectorEXT *planeDetector)
{
    struct xrCreatePlaneDetectorEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.planeDetector = planeDetector;
    _status = UNIX_CALL(xrCreatePlaneDetectorEXT, &params);
    assert(!_status && "xrCreatePlaneDetectorEXT");
    return params.result;
}

XrResult WINAPI xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateReferenceSpace_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateReferenceSpace, &params);
    assert(!_status && "xrCreateReferenceSpace");
    return params.result;
}

XrResult WINAPI xrCreateRenderModelAssetEXT(XrSession session, const XrRenderModelAssetCreateInfoEXT *createInfo, XrRenderModelAssetEXT *asset)
{
    struct xrCreateRenderModelAssetEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.asset = asset;
    _status = UNIX_CALL(xrCreateRenderModelAssetEXT, &params);
    assert(!_status && "xrCreateRenderModelAssetEXT");
    return params.result;
}

XrResult WINAPI xrCreateRenderModelEXT(XrSession session, const XrRenderModelCreateInfoEXT *createInfo, XrRenderModelEXT *renderModel)
{
    struct xrCreateRenderModelEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.renderModel = renderModel;
    _status = UNIX_CALL(xrCreateRenderModelEXT, &params);
    assert(!_status && "xrCreateRenderModelEXT");
    return params.result;
}

XrResult WINAPI xrCreateRenderModelSpaceEXT(XrSession session, const XrRenderModelSpaceCreateInfoEXT *createInfo, XrSpace *space)
{
    struct xrCreateRenderModelSpaceEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateRenderModelSpaceEXT, &params);
    assert(!_status && "xrCreateRenderModelSpaceEXT");
    return params.result;
}

XrResult WINAPI xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene)
{
    struct xrCreateSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.createInfo = createInfo;
    params.scene = scene;
    _status = UNIX_CALL(xrCreateSceneMSFT, &params);
    assert(!_status && "xrCreateSceneMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSceneMeshSnapshotANDROID(XrSceneMeshingTrackerANDROID tracker, const XrSceneMeshSnapshotCreateInfoANDROID *createInfo, XrSceneMeshSnapshotCreationResultANDROID *outSnapshotCreationResult)
{
    struct xrCreateSceneMeshSnapshotANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.createInfo = createInfo;
    params.outSnapshotCreationResult = outSnapshotCreationResult;
    _status = UNIX_CALL(xrCreateSceneMeshSnapshotANDROID, &params);
    assert(!_status && "xrCreateSceneMeshSnapshotANDROID");
    return params.result;
}

XrResult WINAPI xrCreateSceneMeshingTrackerANDROID(XrSession session, const XrSceneMeshingTrackerCreateInfoANDROID *createInfo, XrSceneMeshingTrackerANDROID *tracker)
{
    struct xrCreateSceneMeshingTrackerANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.tracker = tracker;
    _status = UNIX_CALL(xrCreateSceneMeshingTrackerANDROID, &params);
    assert(!_status && "xrCreateSceneMeshingTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver)
{
    struct xrCreateSceneObserverMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.sceneObserver = sceneObserver;
    _status = UNIX_CALL(xrCreateSceneObserverMSFT, &params);
    assert(!_status && "xrCreateSceneObserverMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSenseDataProviderBD(XrSession session, const XrSenseDataProviderCreateInfoBD *createInfo, XrSenseDataProviderBD *provider)
{
    struct xrCreateSenseDataProviderBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.provider = provider;
    _status = UNIX_CALL(xrCreateSenseDataProviderBD, &params);
    assert(!_status && "xrCreateSenseDataProviderBD");
    return params.result;
}

XrResult WINAPI xrCreateSoundFieldBD(XrSpatialAudioRendererBD renderer, const XrSoundFieldConfigBD *config, XrSoundFieldBD *soundField)
{
    struct xrCreateSoundFieldBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    params.config = config;
    params.soundField = soundField;
    _status = UNIX_CALL(xrCreateSoundFieldBD, &params);
    assert(!_status && "xrCreateSoundFieldBD");
    return params.result;
}

XrResult WINAPI xrCreateSoundObjectBD(XrSpatialAudioRendererBD renderer, const XrSoundObjectConfigBD *config, XrSoundObjectBD *soundObject)
{
    struct xrCreateSoundObjectBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    params.config = config;
    params.soundObject = soundObject;
    _status = UNIX_CALL(xrCreateSoundObjectBD, &params);
    assert(!_status && "xrCreateSoundObjectBD");
    return params.result;
}

XrResult WINAPI xrCreateSoundObstacleBD(XrSpatialAudioRendererBD renderer, const XrSoundObstacleConfigBD *config, const XrSoundTriangleMeshBD *mesh, XrSoundObstacleBD *soundObstacle)
{
    struct xrCreateSoundObstacleBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    params.config = config;
    params.mesh = mesh;
    params.soundObstacle = soundObstacle;
    _status = UNIX_CALL(xrCreateSoundObstacleBD, &params);
    assert(!_status && "xrCreateSoundObstacleBD");
    return params.result;
}

XrResult WINAPI xrCreateSoundObstacleMaterialBD(XrSpatialAudioRendererBD renderer, const XrSoundObstacleMaterialConfigBD *config, XrSoundObstacleMaterialBD *material)
{
    struct xrCreateSoundObstacleMaterialBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    params.config = config;
    params.material = material;
    _status = UNIX_CALL(xrCreateSoundObstacleMaterialBD, &params);
    assert(!_status && "xrCreateSoundObstacleMaterialBD");
    return params.result;
}

XrResult WINAPI xrCreateSpaceUserFB(XrSession session, const XrSpaceUserCreateInfoFB *info, XrSpaceUserFB *user)
{
    struct xrCreateSpaceUserFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.user = user;
    _status = UNIX_CALL(xrCreateSpaceUserFB, &params);
    assert(!_status && "xrCreateSpaceUserFB");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorCreateInfoBD *info, XrFutureEXT *future)
{
    struct xrCreateSpatialAnchorAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrCreateSpatialAnchorAsyncBD, &params);
    assert(!_status && "xrCreateSpatialAnchorAsyncBD");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSpatialAnchorCreateCompletionBD *completion)
{
    struct xrCreateSpatialAnchorCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateSpatialAnchorCompleteBD, &params);
    assert(!_status && "xrCreateSpatialAnchorCompleteBD");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorEXT(XrSpatialContextEXT spatialContext, const XrSpatialAnchorCreateInfoEXT *createInfo, XrSpatialEntityIdEXT *anchorEntityId, XrSpatialEntityEXT *anchorEntity)
{
    struct xrCreateSpatialAnchorEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorEntityId = anchorEntityId;
    params.anchorEntity = anchorEntity;
    _status = UNIX_CALL(xrCreateSpatialAnchorEXT, &params);
    assert(!_status && "xrCreateSpatialAnchorEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFB(XrSession session, const XrSpatialAnchorCreateInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrCreateSpatialAnchorFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrCreateSpatialAnchorFB, &params);
    assert(!_status && "xrCreateSpatialAnchorFB");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo, XrSpatialAnchorMSFT *spatialAnchor)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialAnchorCreateInfo = spatialAnchorCreateInfo;
    params.spatialAnchor = spatialAnchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorFromPersistedNameMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorFromPersistedNameMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorHTC(XrSession session, const XrSpatialAnchorCreateInfoHTC *createInfo, XrSpace *anchor)
{
    struct xrCreateSpatialAnchorHTC_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorHTC, &params);
    assert(!_status && "xrCreateSpatialAnchorHTC");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor)
{
    struct xrCreateSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    _status = UNIX_CALL(xrCreateSpatialAnchorMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceANDROID(XrSession session, XrSpatialContextEXT spatialContext, const XrSpatialAnchorCreateInfoEXT *createInfo, XrSpatialEntityIdEXT *anchorEntityId, XrSpace *anchorSpace)
{
    struct xrCreateSpatialAnchorSpaceANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorEntityId = anchorEntityId;
    params.anchorSpace = anchorSpace;
    _status = UNIX_CALL(xrCreateSpatialAnchorSpaceANDROID, &params);
    assert(!_status && "xrCreateSpatialAnchorSpaceANDROID");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceFromIdANDROID(XrSession session, XrSpatialContextEXT spatialContext, const XrSpatialAnchorSpaceFromIdCreateInfoANDROID *createInfo, XrSpace *anchorSpace)
{
    struct xrCreateSpatialAnchorSpaceFromIdANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorSpace = anchorSpace;
    _status = UNIX_CALL(xrCreateSpatialAnchorSpaceFromIdANDROID, &params);
    assert(!_status && "xrCreateSpatialAnchorSpaceFromIdANDROID");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateSpatialAnchorSpaceMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrCreateSpatialAnchorStoreConnectionMSFT, &params);
    assert(!_status && "xrCreateSpatialAnchorStoreConnectionMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsAsyncML(XrSession session, const XrSpatialAnchorsCreateInfoBaseHeaderML *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialAnchorsAsyncML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    _status = UNIX_CALL(xrCreateSpatialAnchorsAsyncML, &params);
    assert(!_status && "xrCreateSpatialAnchorsAsyncML");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsCompleteML(XrSession session, XrFutureEXT future, XrCreateSpatialAnchorsCompletionML *completion)
{
    struct xrCreateSpatialAnchorsCompleteML_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateSpatialAnchorsCompleteML, &params);
    assert(!_status && "xrCreateSpatialAnchorsCompleteML");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsStorageML(XrSession session, const XrSpatialAnchorsCreateStorageInfoML *createInfo, XrSpatialAnchorsStorageML *storage)
{
    struct xrCreateSpatialAnchorsStorageML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.storage = storage;
    _status = UNIX_CALL(xrCreateSpatialAnchorsStorageML, &params);
    assert(!_status && "xrCreateSpatialAnchorsStorageML");
    return params.result;
}

XrResult WINAPI xrCreateSpatialAudioRendererBD(XrSession session, const XrSpatialAudioRendererCreateInfoBD *createInfo, XrSpatialAudioRendererBD *renderer)
{
    struct xrCreateSpatialAudioRendererBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.renderer = renderer;
    _status = UNIX_CALL(xrCreateSpatialAudioRendererBD, &params);
    assert(!_status && "xrCreateSpatialAudioRendererBD");
    return params.result;
}

XrResult WINAPI xrCreateSpatialContextAsyncEXT(XrSession session, const XrSpatialContextCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialContextAsyncEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    _status = UNIX_CALL(xrCreateSpatialContextAsyncEXT, &params);
    assert(!_status && "xrCreateSpatialContextAsyncEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialContextCompleteEXT(XrSession session, XrFutureEXT future, XrCreateSpatialContextCompletionEXT *completion)
{
    struct xrCreateSpatialContextCompleteEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateSpatialContextCompleteEXT, &params);
    assert(!_status && "xrCreateSpatialContextCompleteEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialDiscoverySnapshotAsyncEXT(XrSpatialContextEXT spatialContext, const XrSpatialDiscoverySnapshotCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.future = future;
    _status = UNIX_CALL(xrCreateSpatialDiscoverySnapshotAsyncEXT, &params);
    assert(!_status && "xrCreateSpatialDiscoverySnapshotAsyncEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialDiscoverySnapshotCompleteEXT(XrSpatialContextEXT spatialContext, const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT *createSnapshotCompletionInfo, XrCreateSpatialDiscoverySnapshotCompletionEXT *completion)
{
    struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createSnapshotCompletionInfo = createSnapshotCompletionInfo;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateSpatialDiscoverySnapshotCompleteEXT, &params);
    assert(!_status && "xrCreateSpatialDiscoverySnapshotCompleteEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialEntityAnchorBD(XrSenseDataProviderBD provider, const XrSpatialEntityAnchorCreateInfoBD *createInfo, XrAnchorBD *anchor)
{
    struct xrCreateSpatialEntityAnchorBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.createInfo = createInfo;
    params.anchor = anchor;
    _status = UNIX_CALL(xrCreateSpatialEntityAnchorBD, &params);
    assert(!_status && "xrCreateSpatialEntityAnchorBD");
    return params.result;
}

XrResult WINAPI xrCreateSpatialEntityFromIdEXT(XrSpatialContextEXT spatialContext, const XrSpatialEntityFromIdCreateInfoEXT *createInfo, XrSpatialEntityEXT *spatialEntity)
{
    struct xrCreateSpatialEntityFromIdEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.spatialEntity = spatialEntity;
    _status = UNIX_CALL(xrCreateSpatialEntityFromIdEXT, &params);
    assert(!_status && "xrCreateSpatialEntityFromIdEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    _status = UNIX_CALL(xrCreateSpatialGraphNodeSpaceMSFT, &params);
    assert(!_status && "xrCreateSpatialGraphNodeSpaceMSFT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialPersistenceContextAsyncEXT(XrSession session, const XrSpatialPersistenceContextCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialPersistenceContextAsyncEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    _status = UNIX_CALL(xrCreateSpatialPersistenceContextAsyncEXT, &params);
    assert(!_status && "xrCreateSpatialPersistenceContextAsyncEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialPersistenceContextCompleteEXT(XrSession session, XrFutureEXT future, XrCreateSpatialPersistenceContextCompletionEXT *completion)
{
    struct xrCreateSpatialPersistenceContextCompleteEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateSpatialPersistenceContextCompleteEXT, &params);
    assert(!_status && "xrCreateSpatialPersistenceContextCompleteEXT");
    return params.result;
}

XrResult WINAPI xrCreateSpatialRaycastSnapshotANDROID(XrSpatialContextEXT spatialContext, const XrSpatialRaycastSnapshotCreateInfoANDROID *createInfo, XrSpatialSnapshotEXT *snapshot)
{
    struct xrCreateSpatialRaycastSnapshotANDROID_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.snapshot = snapshot;
    _status = UNIX_CALL(xrCreateSpatialRaycastSnapshotANDROID, &params);
    assert(!_status && "xrCreateSpatialRaycastSnapshotANDROID");
    return params.result;
}

XrResult WINAPI xrCreateSpatialUpdateSnapshotEXT(XrSpatialContextEXT spatialContext, const XrSpatialUpdateSnapshotCreateInfoEXT *createInfo, XrSpatialSnapshotEXT *snapshot)
{
    struct xrCreateSpatialUpdateSnapshotEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.snapshot = snapshot;
    _status = UNIX_CALL(xrCreateSpatialUpdateSnapshotEXT, &params);
    assert(!_status && "xrCreateSpatialUpdateSnapshotEXT");
    return params.result;
}

XrResult WINAPI xrCreateTrackableImageDatabaseAsyncANDROID(XrSession session, const XrTrackableImageDatabaseCreateInfoANDROID *createInfo, XrFutureEXT *future)
{
    struct xrCreateTrackableImageDatabaseAsyncANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    _status = UNIX_CALL(xrCreateTrackableImageDatabaseAsyncANDROID, &params);
    assert(!_status && "xrCreateTrackableImageDatabaseAsyncANDROID");
    return params.result;
}

XrResult WINAPI xrCreateTrackableImageDatabaseCompleteANDROID(XrSession session, XrFutureEXT future, XrCreateTrackableImageDatabaseCompletionANDROID *completion)
{
    struct xrCreateTrackableImageDatabaseCompleteANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrCreateTrackableImageDatabaseCompleteANDROID, &params);
    assert(!_status && "xrCreateTrackableImageDatabaseCompleteANDROID");
    return params.result;
}

XrResult WINAPI xrCreateTrackableTrackerANDROID(XrSession session, const XrTrackableTrackerCreateInfoANDROID *createInfo, XrTrackableTrackerANDROID *trackableTracker)
{
    struct xrCreateTrackableTrackerANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.trackableTracker = trackableTracker;
    _status = UNIX_CALL(xrCreateTrackableTrackerANDROID, &params);
    assert(!_status && "xrCreateTrackableTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrCreateTriangleMeshFB(XrSession session, const XrTriangleMeshCreateInfoFB *createInfo, XrTriangleMeshFB *outTriangleMesh)
{
    struct xrCreateTriangleMeshFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.outTriangleMesh = outTriangleMesh;
    _status = UNIX_CALL(xrCreateTriangleMeshFB, &params);
    assert(!_status && "xrCreateTriangleMeshFB");
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardMETA(XrSession session, const XrVirtualKeyboardCreateInfoMETA *createInfo, XrVirtualKeyboardMETA *keyboard)
{
    struct xrCreateVirtualKeyboardMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrCreateVirtualKeyboardMETA, &params);
    assert(!_status && "xrCreateVirtualKeyboardMETA");
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardSpaceMETA(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.keyboard = keyboard;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    _status = UNIX_CALL(xrCreateVirtualKeyboardSpaceMETA, &params);
    assert(!_status && "xrCreateVirtualKeyboardSpaceMETA");
    return params.result;
}

XrResult WINAPI xrCreateWorldMeshDetectorML(XrSession session, const XrWorldMeshDetectorCreateInfoML *createInfo, XrWorldMeshDetectorML *detector)
{
    struct xrCreateWorldMeshDetectorML_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.detector = detector;
    _status = UNIX_CALL(xrCreateWorldMeshDetectorML, &params);
    assert(!_status && "xrCreateWorldMeshDetectorML");
    return params.result;
}

XrResult WINAPI xrDeleteSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsDeleteInfoML *deleteInfo, XrFutureEXT *future)
{
    struct xrDeleteSpatialAnchorsAsyncML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.deleteInfo = deleteInfo;
    params.future = future;
    _status = UNIX_CALL(xrDeleteSpatialAnchorsAsyncML, &params);
    assert(!_status && "xrDeleteSpatialAnchorsAsyncML");
    return params.result;
}

XrResult WINAPI xrDeleteSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsDeleteCompletionML *completion)
{
    struct xrDeleteSpatialAnchorsCompleteML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrDeleteSpatialAnchorsCompleteML, &params);
    assert(!_status && "xrDeleteSpatialAnchorsCompleteML");
    return params.result;
}

XrResult WINAPI xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo)
{
    struct xrDeserializeSceneMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.deserializeInfo = deserializeInfo;
    _status = UNIX_CALL(xrDeserializeSceneMSFT, &params);
    assert(!_status && "xrDeserializeSceneMSFT");
    return params.result;
}

XrResult WINAPI xrDestroyAction(XrAction action)
{
    struct xrDestroyAction_params params;
    NTSTATUS _status;
    params.action = action;
    _status = UNIX_CALL(xrDestroyAction, &params);
    assert(!_status && "xrDestroyAction");
    return params.result;
}

XrResult WINAPI xrDestroyActionSet(XrActionSet actionSet)
{
    struct xrDestroyActionSet_params params;
    NTSTATUS _status;
    params.actionSet = actionSet;
    _status = UNIX_CALL(xrDestroyActionSet, &params);
    assert(!_status && "xrDestroyActionSet");
    return params.result;
}

XrResult WINAPI xrDestroyAnchorBD(XrAnchorBD anchor)
{
    struct xrDestroyAnchorBD_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    _status = UNIX_CALL(xrDestroyAnchorBD, &params);
    assert(!_status && "xrDestroyAnchorBD");
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerBD(XrBodyTrackerBD bodyTracker)
{
    struct xrDestroyBodyTrackerBD_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrDestroyBodyTrackerBD, &params);
    assert(!_status && "xrDestroyBodyTrackerBD");
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerFB(XrBodyTrackerFB bodyTracker)
{
    struct xrDestroyBodyTrackerFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrDestroyBodyTrackerFB, &params);
    assert(!_status && "xrDestroyBodyTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerHTC(XrBodyTrackerHTC bodyTracker)
{
    struct xrDestroyBodyTrackerHTC_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrDestroyBodyTrackerHTC, &params);
    assert(!_status && "xrDestroyBodyTrackerHTC");
    return params.result;
}

XrResult WINAPI xrDestroyDeviceAnchorPersistenceANDROID(XrDeviceAnchorPersistenceANDROID handle)
{
    struct xrDestroyDeviceAnchorPersistenceANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    _status = UNIX_CALL(xrDestroyDeviceAnchorPersistenceANDROID, &params);
    assert(!_status && "xrDestroyDeviceAnchorPersistenceANDROID");
    return params.result;
}

XrResult WINAPI xrDestroyEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrDestroyEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrDestroyEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrDestroyEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrDestroyEnvironmentDepthSwapchainMETA(XrEnvironmentDepthSwapchainMETA swapchain)
{
    struct xrDestroyEnvironmentDepthSwapchainMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    _status = UNIX_CALL(xrDestroyEnvironmentDepthSwapchainMETA, &params);
    assert(!_status && "xrDestroyEnvironmentDepthSwapchainMETA");
    return params.result;
}

XrResult WINAPI xrDestroyEnvironmentRaycasterMETA(XrEnvironmentRaycasterMETA environmentRaycaster)
{
    struct xrDestroyEnvironmentRaycasterMETA_params params;
    NTSTATUS _status;
    params.environmentRaycaster = environmentRaycaster;
    _status = UNIX_CALL(xrDestroyEnvironmentRaycasterMETA, &params);
    assert(!_status && "xrDestroyEnvironmentRaycasterMETA");
    return params.result;
}

XrResult WINAPI xrDestroyExportedLocalizationMapML(XrExportedLocalizationMapML map)
{
    struct xrDestroyExportedLocalizationMapML_params params;
    NTSTATUS _status;
    params.map = map;
    _status = UNIX_CALL(xrDestroyExportedLocalizationMapML, &params);
    assert(!_status && "xrDestroyExportedLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrDestroyEyeTrackerFB(XrEyeTrackerFB eyeTracker)
{
    struct xrDestroyEyeTrackerFB_params params;
    NTSTATUS _status;
    params.eyeTracker = eyeTracker;
    _status = UNIX_CALL(xrDestroyEyeTrackerFB, &params);
    assert(!_status && "xrDestroyEyeTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTracker2FB(XrFaceTracker2FB faceTracker)
{
    struct xrDestroyFaceTracker2FB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrDestroyFaceTracker2FB, &params);
    assert(!_status && "xrDestroyFaceTracker2FB");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerANDROID(XrFaceTrackerANDROID faceTracker)
{
    struct xrDestroyFaceTrackerANDROID_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrDestroyFaceTrackerANDROID, &params);
    assert(!_status && "xrDestroyFaceTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerBD(XrFaceTrackerBD tracker)
{
    struct xrDestroyFaceTrackerBD_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    _status = UNIX_CALL(xrDestroyFaceTrackerBD, &params);
    assert(!_status && "xrDestroyFaceTrackerBD");
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerFB(XrFaceTrackerFB faceTracker)
{
    struct xrDestroyFaceTrackerFB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    _status = UNIX_CALL(xrDestroyFaceTrackerFB, &params);
    assert(!_status && "xrDestroyFaceTrackerFB");
    return params.result;
}

XrResult WINAPI xrDestroyFacialExpressionClientML(XrFacialExpressionClientML facialExpressionClient)
{
    struct xrDestroyFacialExpressionClientML_params params;
    NTSTATUS _status;
    params.facialExpressionClient = facialExpressionClient;
    _status = UNIX_CALL(xrDestroyFacialExpressionClientML, &params);
    assert(!_status && "xrDestroyFacialExpressionClientML");
    return params.result;
}

XrResult WINAPI xrDestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker)
{
    struct xrDestroyFacialTrackerHTC_params params;
    NTSTATUS _status;
    params.facialTracker = facialTracker;
    _status = UNIX_CALL(xrDestroyFacialTrackerHTC, &params);
    assert(!_status && "xrDestroyFacialTrackerHTC");
    return params.result;
}

XrResult WINAPI xrDestroyFoveationProfileFB(XrFoveationProfileFB profile)
{
    struct xrDestroyFoveationProfileFB_params params;
    NTSTATUS _status;
    params.profile = profile;
    _status = UNIX_CALL(xrDestroyFoveationProfileFB, &params);
    assert(!_status && "xrDestroyFoveationProfileFB");
    return params.result;
}

XrResult WINAPI xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance)
{
    struct xrDestroyGeometryInstanceFB_params params;
    NTSTATUS _status;
    params.instance = instance;
    _status = UNIX_CALL(xrDestroyGeometryInstanceFB, &params);
    assert(!_status && "xrDestroyGeometryInstanceFB");
    return params.result;
}

XrResult WINAPI xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker)
{
    struct xrDestroyHandTrackerEXT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    _status = UNIX_CALL(xrDestroyHandTrackerEXT, &params);
    assert(!_status && "xrDestroyHandTrackerEXT");
    return params.result;
}

XrResult WINAPI xrDestroyMarkerDetectorML(XrMarkerDetectorML markerDetector)
{
    struct xrDestroyMarkerDetectorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    _status = UNIX_CALL(xrDestroyMarkerDetectorML, &params);
    assert(!_status && "xrDestroyMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut)
{
    struct xrDestroyPassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.colorLut = colorLut;
    _status = UNIX_CALL(xrDestroyPassthroughColorLutMETA, &params);
    assert(!_status && "xrDestroyPassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughFB(XrPassthroughFB passthrough)
{
    struct xrDestroyPassthroughFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrDestroyPassthroughFB, &params);
    assert(!_status && "xrDestroyPassthroughFB");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughHTC(XrPassthroughHTC passthrough)
{
    struct xrDestroyPassthroughHTC_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrDestroyPassthroughHTC, &params);
    assert(!_status && "xrDestroyPassthroughHTC");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughLayerANDROID(XrPassthroughLayerANDROID layer)
{
    struct xrDestroyPassthroughLayerANDROID_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrDestroyPassthroughLayerANDROID, &params);
    assert(!_status && "xrDestroyPassthroughLayerANDROID");
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer)
{
    struct xrDestroyPassthroughLayerFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrDestroyPassthroughLayerFB, &params);
    assert(!_status && "xrDestroyPassthroughLayerFB");
    return params.result;
}

XrResult WINAPI xrDestroyPlaneDetectorEXT(XrPlaneDetectorEXT planeDetector)
{
    struct xrDestroyPlaneDetectorEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    _status = UNIX_CALL(xrDestroyPlaneDetectorEXT, &params);
    assert(!_status && "xrDestroyPlaneDetectorEXT");
    return params.result;
}

XrResult WINAPI xrDestroyRenderModelAssetEXT(XrRenderModelAssetEXT asset)
{
    struct xrDestroyRenderModelAssetEXT_params params;
    NTSTATUS _status;
    params.asset = asset;
    _status = UNIX_CALL(xrDestroyRenderModelAssetEXT, &params);
    assert(!_status && "xrDestroyRenderModelAssetEXT");
    return params.result;
}

XrResult WINAPI xrDestroyRenderModelEXT(XrRenderModelEXT renderModel)
{
    struct xrDestroyRenderModelEXT_params params;
    NTSTATUS _status;
    params.renderModel = renderModel;
    _status = UNIX_CALL(xrDestroyRenderModelEXT, &params);
    assert(!_status && "xrDestroyRenderModelEXT");
    return params.result;
}

XrResult WINAPI xrDestroySceneMSFT(XrSceneMSFT scene)
{
    struct xrDestroySceneMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    _status = UNIX_CALL(xrDestroySceneMSFT, &params);
    assert(!_status && "xrDestroySceneMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySceneMeshSnapshotANDROID(XrSceneMeshSnapshotANDROID snapshot)
{
    struct xrDestroySceneMeshSnapshotANDROID_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    _status = UNIX_CALL(xrDestroySceneMeshSnapshotANDROID, &params);
    assert(!_status && "xrDestroySceneMeshSnapshotANDROID");
    return params.result;
}

XrResult WINAPI xrDestroySceneMeshingTrackerANDROID(XrSceneMeshingTrackerANDROID tracker)
{
    struct xrDestroySceneMeshingTrackerANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    _status = UNIX_CALL(xrDestroySceneMeshingTrackerANDROID, &params);
    assert(!_status && "xrDestroySceneMeshingTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver)
{
    struct xrDestroySceneObserverMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    _status = UNIX_CALL(xrDestroySceneObserverMSFT, &params);
    assert(!_status && "xrDestroySceneObserverMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySenseDataProviderBD(XrSenseDataProviderBD provider)
{
    struct xrDestroySenseDataProviderBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    _status = UNIX_CALL(xrDestroySenseDataProviderBD, &params);
    assert(!_status && "xrDestroySenseDataProviderBD");
    return params.result;
}

XrResult WINAPI xrDestroySenseDataSnapshotBD(XrSenseDataSnapshotBD snapshot)
{
    struct xrDestroySenseDataSnapshotBD_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    _status = UNIX_CALL(xrDestroySenseDataSnapshotBD, &params);
    assert(!_status && "xrDestroySenseDataSnapshotBD");
    return params.result;
}

XrResult WINAPI xrDestroySoundFieldBD(XrSoundFieldBD soundField)
{
    struct xrDestroySoundFieldBD_params params;
    NTSTATUS _status;
    params.soundField = soundField;
    _status = UNIX_CALL(xrDestroySoundFieldBD, &params);
    assert(!_status && "xrDestroySoundFieldBD");
    return params.result;
}

XrResult WINAPI xrDestroySoundObjectBD(XrSoundObjectBD soundObject)
{
    struct xrDestroySoundObjectBD_params params;
    NTSTATUS _status;
    params.soundObject = soundObject;
    _status = UNIX_CALL(xrDestroySoundObjectBD, &params);
    assert(!_status && "xrDestroySoundObjectBD");
    return params.result;
}

XrResult WINAPI xrDestroySoundObstacleBD(XrSoundObstacleBD soundObstacle)
{
    struct xrDestroySoundObstacleBD_params params;
    NTSTATUS _status;
    params.soundObstacle = soundObstacle;
    _status = UNIX_CALL(xrDestroySoundObstacleBD, &params);
    assert(!_status && "xrDestroySoundObstacleBD");
    return params.result;
}

XrResult WINAPI xrDestroySoundObstacleMaterialBD(XrSoundObstacleMaterialBD material)
{
    struct xrDestroySoundObstacleMaterialBD_params params;
    NTSTATUS _status;
    params.material = material;
    _status = UNIX_CALL(xrDestroySoundObstacleMaterialBD, &params);
    assert(!_status && "xrDestroySoundObstacleMaterialBD");
    return params.result;
}

XrResult WINAPI xrDestroySpace(XrSpace space)
{
    struct xrDestroySpace_params params;
    NTSTATUS _status;
    params.space = space;
    _status = UNIX_CALL(xrDestroySpace, &params);
    assert(!_status && "xrDestroySpace");
    return params.result;
}

XrResult WINAPI xrDestroySpaceUserFB(XrSpaceUserFB user)
{
    struct xrDestroySpaceUserFB_params params;
    NTSTATUS _status;
    params.user = user;
    _status = UNIX_CALL(xrDestroySpaceUserFB, &params);
    assert(!_status && "xrDestroySpaceUserFB");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor)
{
    struct xrDestroySpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    _status = UNIX_CALL(xrDestroySpatialAnchorMSFT, &params);
    assert(!_status && "xrDestroySpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    _status = UNIX_CALL(xrDestroySpatialAnchorStoreConnectionMSFT, &params);
    assert(!_status && "xrDestroySpatialAnchorStoreConnectionMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorsStorageML(XrSpatialAnchorsStorageML storage)
{
    struct xrDestroySpatialAnchorsStorageML_params params;
    NTSTATUS _status;
    params.storage = storage;
    _status = UNIX_CALL(xrDestroySpatialAnchorsStorageML, &params);
    assert(!_status && "xrDestroySpatialAnchorsStorageML");
    return params.result;
}

XrResult WINAPI xrDestroySpatialAudioRendererBD(XrSpatialAudioRendererBD renderer)
{
    struct xrDestroySpatialAudioRendererBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    _status = UNIX_CALL(xrDestroySpatialAudioRendererBD, &params);
    assert(!_status && "xrDestroySpatialAudioRendererBD");
    return params.result;
}

XrResult WINAPI xrDestroySpatialContextEXT(XrSpatialContextEXT spatialContext)
{
    struct xrDestroySpatialContextEXT_params params;
    NTSTATUS _status;
    params.spatialContext = spatialContext;
    _status = UNIX_CALL(xrDestroySpatialContextEXT, &params);
    assert(!_status && "xrDestroySpatialContextEXT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialEntityEXT(XrSpatialEntityEXT spatialEntity)
{
    struct xrDestroySpatialEntityEXT_params params;
    NTSTATUS _status;
    params.spatialEntity = spatialEntity;
    _status = UNIX_CALL(xrDestroySpatialEntityEXT, &params);
    assert(!_status && "xrDestroySpatialEntityEXT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialGraphNodeBindingMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params params;
    NTSTATUS _status;
    params.nodeBinding = nodeBinding;
    _status = UNIX_CALL(xrDestroySpatialGraphNodeBindingMSFT, &params);
    assert(!_status && "xrDestroySpatialGraphNodeBindingMSFT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialPersistenceContextEXT(XrSpatialPersistenceContextEXT persistenceContext)
{
    struct xrDestroySpatialPersistenceContextEXT_params params;
    NTSTATUS _status;
    params.persistenceContext = persistenceContext;
    _status = UNIX_CALL(xrDestroySpatialPersistenceContextEXT, &params);
    assert(!_status && "xrDestroySpatialPersistenceContextEXT");
    return params.result;
}

XrResult WINAPI xrDestroySpatialSnapshotEXT(XrSpatialSnapshotEXT snapshot)
{
    struct xrDestroySpatialSnapshotEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    _status = UNIX_CALL(xrDestroySpatialSnapshotEXT, &params);
    assert(!_status && "xrDestroySpatialSnapshotEXT");
    return params.result;
}

XrResult WINAPI xrDestroyTrackableImageDatabaseANDROID(XrTrackableImageDatabaseANDROID database)
{
    struct xrDestroyTrackableImageDatabaseANDROID_params params;
    NTSTATUS _status;
    params.database = database;
    _status = UNIX_CALL(xrDestroyTrackableImageDatabaseANDROID, &params);
    assert(!_status && "xrDestroyTrackableImageDatabaseANDROID");
    return params.result;
}

XrResult WINAPI xrDestroyTrackableTrackerANDROID(XrTrackableTrackerANDROID trackableTracker)
{
    struct xrDestroyTrackableTrackerANDROID_params params;
    NTSTATUS _status;
    params.trackableTracker = trackableTracker;
    _status = UNIX_CALL(xrDestroyTrackableTrackerANDROID, &params);
    assert(!_status && "xrDestroyTrackableTrackerANDROID");
    return params.result;
}

XrResult WINAPI xrDestroyTriangleMeshFB(XrTriangleMeshFB mesh)
{
    struct xrDestroyTriangleMeshFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrDestroyTriangleMeshFB, &params);
    assert(!_status && "xrDestroyTriangleMeshFB");
    return params.result;
}

XrResult WINAPI xrDestroyVirtualKeyboardMETA(XrVirtualKeyboardMETA keyboard)
{
    struct xrDestroyVirtualKeyboardMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrDestroyVirtualKeyboardMETA, &params);
    assert(!_status && "xrDestroyVirtualKeyboardMETA");
    return params.result;
}

XrResult WINAPI xrDestroyWorldMeshDetectorML(XrWorldMeshDetectorML detector)
{
    struct xrDestroyWorldMeshDetectorML_params params;
    NTSTATUS _status;
    params.detector = detector;
    _status = UNIX_CALL(xrDestroyWorldMeshDetectorML, &params);
    assert(!_status && "xrDestroyWorldMeshDetectorML");
    return params.result;
}

XrResult WINAPI xrDiscoverSpacesMETA(XrSession session, const XrSpaceDiscoveryInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrDiscoverSpacesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrDiscoverSpacesMETA, &params);
    assert(!_status && "xrDiscoverSpacesMETA");
    return params.result;
}

XrResult WINAPI xrDownloadSharedSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSharedSpatialAnchorDownloadInfoBD *info, XrFutureEXT *future)
{
    struct xrDownloadSharedSpatialAnchorAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrDownloadSharedSpatialAnchorAsyncBD, &params);
    assert(!_status && "xrDownloadSharedSpatialAnchorAsyncBD");
    return params.result;
}

XrResult WINAPI xrDownloadSharedSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrDownloadSharedSpatialAnchorCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrDownloadSharedSpatialAnchorCompleteBD, &params);
    assert(!_status && "xrDownloadSharedSpatialAnchorCompleteBD");
    return params.result;
}

XrResult WINAPI xrEnableLocalizationEventsML(XrSession session, const XrLocalizationEnableEventsInfoML *info)
{
    struct xrEnableLocalizationEventsML_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    _status = UNIX_CALL(xrEnableLocalizationEventsML, &params);
    assert(!_status && "xrEnableLocalizationEventsML");
    return params.result;
}

XrResult WINAPI xrEnableUserCalibrationEventsML(XrInstance instance, const XrUserCalibrationEnableEventsInfoML *enableInfo)
{
    struct xrEnableUserCalibrationEventsML_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.enableInfo = enableInfo;
    _status = UNIX_CALL(xrEnableUserCalibrationEventsML, &params);
    assert(!_status && "xrEnableUserCalibrationEventsML");
    return params.result;
}

XrResult WINAPI xrEndAudioPeriodBD(XrSpatialAudioRendererBD renderer)
{
    struct xrEndAudioPeriodBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    _status = UNIX_CALL(xrEndAudioPeriodBD, &params);
    assert(!_status && "xrEndAudioPeriodBD");
    return params.result;
}

XrResult WINAPI xrEndSession(XrSession session)
{
    struct xrEndSession_params params;
    NTSTATUS _status;
    params.session = session;
    _status = UNIX_CALL(xrEndSession, &params);
    assert(!_status && "xrEndSession");
    return params.result;
}

XrResult WINAPI xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties)
{
    struct xrEnumerateApiLayerProperties_params params;
    NTSTATUS _status;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    _status = UNIX_CALL(xrEnumerateApiLayerProperties, &params);
    assert(!_status && "xrEnumerateApiLayerProperties");
    return params.result;
}

XrResult WINAPI xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources)
{
    struct xrEnumerateBoundSourcesForAction_params params;
    NTSTATUS _status;
    params.session = session;
    params.enumerateInfo = enumerateInfo;
    params.sourceCapacityInput = sourceCapacityInput;
    params.sourceCountOutput = sourceCountOutput;
    params.sources = sources;
    _status = UNIX_CALL(xrEnumerateBoundSourcesForAction, &params);
    assert(!_status && "xrEnumerateBoundSourcesForAction");
    return params.result;
}

XrResult WINAPI xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces)
{
    struct xrEnumerateColorSpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.colorSpaceCapacityInput = colorSpaceCapacityInput;
    params.colorSpaceCountOutput = colorSpaceCountOutput;
    params.colorSpaces = colorSpaces;
    _status = UNIX_CALL(xrEnumerateColorSpacesFB, &params);
    assert(!_status && "xrEnumerateColorSpacesFB");
    return params.result;
}

XrResult WINAPI xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates)
{
    struct xrEnumerateDisplayRefreshRatesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRateCapacityInput = displayRefreshRateCapacityInput;
    params.displayRefreshRateCountOutput = displayRefreshRateCountOutput;
    params.displayRefreshRates = displayRefreshRates;
    _status = UNIX_CALL(xrEnumerateDisplayRefreshRatesFB, &params);
    assert(!_status && "xrEnumerateDisplayRefreshRatesFB");
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    struct xrEnumerateEnvironmentBlendModes_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.environmentBlendModeCapacityInput = environmentBlendModeCapacityInput;
    params.environmentBlendModeCountOutput = environmentBlendModeCountOutput;
    params.environmentBlendModes = environmentBlendModes;
    _status = UNIX_CALL(xrEnumerateEnvironmentBlendModes, &params);
    assert(!_status && "xrEnumerateEnvironmentBlendModes");
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentDepthSwapchainImagesMETA(XrEnvironmentDepthSwapchainMETA swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images)
{
    struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.imageCapacityInput = imageCapacityInput;
    params.imageCountOutput = imageCountOutput;
    params.images = images;
    _status = UNIX_CALL(xrEnumerateEnvironmentDepthSwapchainImagesMETA, &params);
    assert(!_status && "xrEnumerateEnvironmentDepthSwapchainImagesMETA");
    return params.result;
}

XrResult WINAPI xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras)
{
    struct xrEnumerateExternalCamerasOCULUS_params params;
    NTSTATUS _status;
    params.session = session;
    params.cameraCapacityInput = cameraCapacityInput;
    params.cameraCountOutput = cameraCountOutput;
    params.cameras = cameras;
    _status = UNIX_CALL(xrEnumerateExternalCamerasOCULUS, &params);
    assert(!_status && "xrEnumerateExternalCamerasOCULUS");
    return params.result;
}

XrResult WINAPI xrEnumerateFacialSimulationModesBD(XrSession session, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrFacialSimulationModeBD *modes)
{
    struct xrEnumerateFacialSimulationModesBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.modeCapacityInput = modeCapacityInput;
    params.modeCountOutput = modeCountOutput;
    params.modes = modes;
    _status = UNIX_CALL(xrEnumerateFacialSimulationModesBD, &params);
    assert(!_status && "xrEnumerateFacialSimulationModesBD");
    return params.result;
}

XrResult WINAPI xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties)
{
    struct xrEnumerateInstanceExtensionProperties_params params;
    NTSTATUS _status;
    params.layerName = layerName;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    _status = UNIX_CALL(xrEnumerateInstanceExtensionProperties, &params);
    assert(!_status && "xrEnumerateInstanceExtensionProperties");
    return params.result;
}

XrResult WINAPI xrEnumerateInteractionRenderModelIdsEXT(XrSession session, const XrInteractionRenderModelIdsEnumerateInfoEXT *getInfo, uint32_t renderModelIdCapacityInput, uint32_t *renderModelIdCountOutput, XrRenderModelIdEXT *renderModelIds)
{
    struct xrEnumerateInteractionRenderModelIdsEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.renderModelIdCapacityInput = renderModelIdCapacityInput;
    params.renderModelIdCountOutput = renderModelIdCountOutput;
    params.renderModelIds = renderModelIds;
    _status = UNIX_CALL(xrEnumerateInteractionRenderModelIdsEXT, &params);
    assert(!_status && "xrEnumerateInteractionRenderModelIdsEXT");
    return params.result;
}

XrResult WINAPI xrEnumeratePerformanceMetricsCounterPathsANDROID(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    struct xrEnumeratePerformanceMetricsCounterPathsANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.counterPathCapacityInput = counterPathCapacityInput;
    params.counterPathCountOutput = counterPathCountOutput;
    params.counterPaths = counterPaths;
    _status = UNIX_CALL(xrEnumeratePerformanceMetricsCounterPathsANDROID, &params);
    assert(!_status && "xrEnumeratePerformanceMetricsCounterPathsANDROID");
    return params.result;
}

XrResult WINAPI xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.counterPathCapacityInput = counterPathCapacityInput;
    params.counterPathCountOutput = counterPathCountOutput;
    params.counterPaths = counterPaths;
    _status = UNIX_CALL(xrEnumeratePerformanceMetricsCounterPathsMETA, &params);
    assert(!_status && "xrEnumeratePerformanceMetricsCounterPathsMETA");
    return params.result;
}

XrResult WINAPI xrEnumeratePersistedAnchorsANDROID(XrDeviceAnchorPersistenceANDROID handle, uint32_t anchorIdCapacityInput, uint32_t *anchorIdCountOutput, XrUuidEXT *anchorIds)
{
    struct xrEnumeratePersistedAnchorsANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    params.anchorIdCapacityInput = anchorIdCapacityInput;
    params.anchorIdCountOutput = anchorIdCountOutput;
    params.anchorIds = anchorIds;
    _status = UNIX_CALL(xrEnumeratePersistedAnchorsANDROID, &params);
    assert(!_status && "xrEnumeratePersistedAnchorsANDROID");
    return params.result;
}

XrResult WINAPI xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t *spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorNameCapacityInput = spatialAnchorNameCapacityInput;
    params.spatialAnchorNameCountOutput = spatialAnchorNameCountOutput;
    params.spatialAnchorNames = spatialAnchorNames;
    _status = UNIX_CALL(xrEnumeratePersistedSpatialAnchorNamesMSFT, &params);
    assert(!_status && "xrEnumeratePersistedSpatialAnchorNamesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateRaycastSupportedTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    _status = UNIX_CALL(xrEnumerateRaycastSupportedTrackableTypesANDROID, &params);
    assert(!_status && "xrEnumerateRaycastSupportedTrackableTypesANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    struct xrEnumerateReferenceSpaces_params params;
    NTSTATUS _status;
    params.session = session;
    params.spaceCapacityInput = spaceCapacityInput;
    params.spaceCountOutput = spaceCountOutput;
    params.spaces = spaces;
    _status = UNIX_CALL(xrEnumerateReferenceSpaces, &params);
    assert(!_status && "xrEnumerateReferenceSpaces");
    return params.result;
}

XrResult WINAPI xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths)
{
    struct xrEnumerateRenderModelPathsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    _status = UNIX_CALL(xrEnumerateRenderModelPathsFB, &params);
    assert(!_status && "xrEnumerateRenderModelPathsFB");
    return params.result;
}

XrResult WINAPI xrEnumerateRenderModelSubactionPathsEXT(XrRenderModelEXT renderModel, const XrInteractionRenderModelSubactionPathInfoEXT *info, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrPath *paths)
{
    struct xrEnumerateRenderModelSubactionPathsEXT_params params;
    NTSTATUS _status;
    params.renderModel = renderModel;
    params.info = info;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    _status = UNIX_CALL(xrEnumerateRenderModelSubactionPathsEXT, &params);
    assert(!_status && "xrEnumerateRenderModelSubactionPathsEXT");
    return params.result;
}

XrResult WINAPI xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes)
{
    struct xrEnumerateReprojectionModesMSFT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.modeCapacityInput = modeCapacityInput;
    params.modeCountOutput = modeCountOutput;
    params.modes = modes;
    _status = UNIX_CALL(xrEnumerateReprojectionModesMSFT, &params);
    assert(!_status && "xrEnumerateReprojectionModesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.featureCapacityInput = featureCapacityInput;
    params.featureCountOutput = featureCountOutput;
    params.features = features;
    _status = UNIX_CALL(xrEnumerateSceneComputeFeaturesMSFT, &params);
    assert(!_status && "xrEnumerateSceneComputeFeaturesMSFT");
    return params.result;
}

XrResult WINAPI xrEnumerateSpaceSupportedComponentsFB(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpaceComponentTypeFB *componentTypes)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.componentTypeCapacityInput = componentTypeCapacityInput;
    params.componentTypeCountOutput = componentTypeCountOutput;
    params.componentTypes = componentTypes;
    _status = UNIX_CALL(xrEnumerateSpaceSupportedComponentsFB, &params);
    assert(!_status && "xrEnumerateSpaceSupportedComponentsFB");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialAnchorAttachableComponentsANDROID(XrInstance instance, XrSystemId systemId, uint32_t attachableComponentCapacityInput, uint32_t *attachableComponentCountOutput, XrSpatialComponentTypeEXT *attachableComponents)
{
    struct xrEnumerateSpatialAnchorAttachableComponentsANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.attachableComponentCapacityInput = attachableComponentCapacityInput;
    params.attachableComponentCountOutput = attachableComponentCountOutput;
    params.attachableComponents = attachableComponents;
    _status = UNIX_CALL(xrEnumerateSpatialAnchorAttachableComponentsANDROID, &params);
    assert(!_status && "xrEnumerateSpatialAnchorAttachableComponentsANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilitiesEXT(XrInstance instance, XrSystemId systemId, uint32_t capabilityCapacityInput, uint32_t *capabilityCountOutput, XrSpatialCapabilityEXT *capabilities)
{
    struct xrEnumerateSpatialCapabilitiesEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.capabilityCapacityInput = capabilityCapacityInput;
    params.capabilityCountOutput = capabilityCountOutput;
    params.capabilities = capabilities;
    _status = UNIX_CALL(xrEnumerateSpatialCapabilitiesEXT, &params);
    assert(!_status && "xrEnumerateSpatialCapabilitiesEXT");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilityComponentTypesEXT(XrInstance instance, XrSystemId systemId, XrSpatialCapabilityEXT capability, XrSpatialCapabilityComponentTypesEXT *capabilityComponents)
{
    struct xrEnumerateSpatialCapabilityComponentTypesEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.capability = capability;
    params.capabilityComponents = capabilityComponents;
    _status = UNIX_CALL(xrEnumerateSpatialCapabilityComponentTypesEXT, &params);
    assert(!_status && "xrEnumerateSpatialCapabilityComponentTypesEXT");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilityFeaturesEXT(XrInstance instance, XrSystemId systemId, XrSpatialCapabilityEXT capability, uint32_t capabilityFeatureCapacityInput, uint32_t *capabilityFeatureCountOutput, XrSpatialCapabilityFeatureEXT *capabilityFeatures)
{
    struct xrEnumerateSpatialCapabilityFeaturesEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.capability = capability;
    params.capabilityFeatureCapacityInput = capabilityFeatureCapacityInput;
    params.capabilityFeatureCountOutput = capabilityFeatureCountOutput;
    params.capabilityFeatures = capabilityFeatures;
    _status = UNIX_CALL(xrEnumerateSpatialCapabilityFeaturesEXT, &params);
    assert(!_status && "xrEnumerateSpatialCapabilityFeaturesEXT");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialEntityComponentTypesBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpatialEntityComponentTypeBD *componentTypes)
{
    struct xrEnumerateSpatialEntityComponentTypesBD_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.entityId = entityId;
    params.componentTypeCapacityInput = componentTypeCapacityInput;
    params.componentTypeCountOutput = componentTypeCountOutput;
    params.componentTypes = componentTypes;
    _status = UNIX_CALL(xrEnumerateSpatialEntityComponentTypesBD, &params);
    assert(!_status && "xrEnumerateSpatialEntityComponentTypesBD");
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialPersistenceScopesEXT(XrInstance instance, XrSystemId systemId, uint32_t persistenceScopeCapacityInput, uint32_t *persistenceScopeCountOutput, XrSpatialPersistenceScopeEXT *persistenceScopes)
{
    struct xrEnumerateSpatialPersistenceScopesEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.persistenceScopeCapacityInput = persistenceScopeCapacityInput;
    params.persistenceScopeCountOutput = persistenceScopeCountOutput;
    params.persistenceScopes = persistenceScopes;
    _status = UNIX_CALL(xrEnumerateSpatialPersistenceScopesEXT, &params);
    assert(!_status && "xrEnumerateSpatialPersistenceScopesEXT");
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedAnchorTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    _status = UNIX_CALL(xrEnumerateSupportedAnchorTrackableTypesANDROID, &params);
    assert(!_status && "xrEnumerateSupportedAnchorTrackableTypesANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedAudioSampleRateBD(XrSession session, uint32_t sampleRateCapacityInput, uint32_t *sampleRateCountOutput, XrAudioSampleRateBD *sampleRates)
{
    struct xrEnumerateSupportedAudioSampleRateBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.sampleRateCapacityInput = sampleRateCapacityInput;
    params.sampleRateCountOutput = sampleRateCountOutput;
    params.sampleRates = sampleRates;
    _status = UNIX_CALL(xrEnumerateSupportedAudioSampleRateBD, &params);
    assert(!_status && "xrEnumerateSupportedAudioSampleRateBD");
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedPersistenceAnchorTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    _status = UNIX_CALL(xrEnumerateSupportedPersistenceAnchorTypesANDROID, &params);
    assert(!_status && "xrEnumerateSupportedPersistenceAnchorTypesANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedSemanticLabelSetsANDROID(XrInstance instance, XrSystemId systemId, uint32_t supportedSemanticLabelSetsInputCapacity, uint32_t *supportedSemanticLabelSetsOutputCount, XrSceneMeshSemanticLabelSetANDROID *supportedSemanticLabelSets)
{
    struct xrEnumerateSupportedSemanticLabelSetsANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.supportedSemanticLabelSetsInputCapacity = supportedSemanticLabelSetsInputCapacity;
    params.supportedSemanticLabelSetsOutputCount = supportedSemanticLabelSetsOutputCount;
    params.supportedSemanticLabelSets = supportedSemanticLabelSets;
    _status = UNIX_CALL(xrEnumerateSupportedSemanticLabelSetsANDROID, &params);
    assert(!_status && "xrEnumerateSupportedSemanticLabelSetsANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedTrackableTypesANDROID_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    _status = UNIX_CALL(xrEnumerateSupportedTrackableTypesANDROID, &params);
    assert(!_status && "xrEnumerateSupportedTrackableTypesANDROID");
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views)
{
    struct xrEnumerateViewConfigurationViews_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    _status = UNIX_CALL(xrEnumerateViewConfigurationViews, &params);
    assert(!_status && "xrEnumerateViewConfigurationViews");
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes)
{
    struct xrEnumerateViewConfigurations_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationTypeCapacityInput = viewConfigurationTypeCapacityInput;
    params.viewConfigurationTypeCountOutput = viewConfigurationTypeCountOutput;
    params.viewConfigurationTypes = viewConfigurationTypes;
    _status = UNIX_CALL(xrEnumerateViewConfigurations, &params);
    assert(!_status && "xrEnumerateViewConfigurations");
    return params.result;
}

XrResult WINAPI xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths)
{
    struct xrEnumerateViveTrackerPathsHTCX_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    _status = UNIX_CALL(xrEnumerateViveTrackerPathsHTCX, &params);
    assert(!_status && "xrEnumerateViveTrackerPathsHTCX");
    return params.result;
}

XrResult WINAPI xrEraseSpaceFB(XrSession session, const XrSpaceEraseInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrEraseSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrEraseSpaceFB, &params);
    assert(!_status && "xrEraseSpaceFB");
    return params.result;
}

XrResult WINAPI xrEraseSpacesMETA(XrSession session, const XrSpacesEraseInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrEraseSpacesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrEraseSpacesMETA, &params);
    assert(!_status && "xrEraseSpacesMETA");
    return params.result;
}

XrResult WINAPI xrFreeWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferML *buffer)
{
    struct xrFreeWorldMeshBufferML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.buffer = buffer;
    _status = UNIX_CALL(xrFreeWorldMeshBufferML, &params);
    assert(!_status && "xrFreeWorldMeshBufferML");
    return params.result;
}

XrResult WINAPI xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation)
{
    struct xrGeometryInstanceSetTransformFB_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.transformation = transformation;
    _status = UNIX_CALL(xrGeometryInstanceSetTransformFB, &params);
    assert(!_status && "xrGeometryInstanceSetTransformFB");
    return params.result;
}

XrResult WINAPI xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state)
{
    struct xrGetActionStateBoolean_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateBoolean, &params);
    assert(!_status && "xrGetActionStateBoolean");
    return params.result;
}

XrResult WINAPI xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state)
{
    struct xrGetActionStateFloat_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateFloat, &params);
    assert(!_status && "xrGetActionStateFloat");
    return params.result;
}

XrResult WINAPI xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state)
{
    struct xrGetActionStatePose_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStatePose, &params);
    assert(!_status && "xrGetActionStatePose");
    return params.result;
}

XrResult WINAPI xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state)
{
    struct xrGetActionStateVector2f_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetActionStateVector2f, &params);
    assert(!_status && "xrGetActionStateVector2f");
    return params.result;
}

XrResult WINAPI xrGetAllSubmeshStatesANDROID(XrSceneMeshSnapshotANDROID snapshot, uint32_t submeshStateCapacityInput, uint32_t *submeshStateCountOutput, XrSceneSubmeshStateANDROID *submeshStates)
{
    struct xrGetAllSubmeshStatesANDROID_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.submeshStateCapacityInput = submeshStateCapacityInput;
    params.submeshStateCountOutput = submeshStateCountOutput;
    params.submeshStates = submeshStates;
    _status = UNIX_CALL(xrGetAllSubmeshStatesANDROID, &params);
    assert(!_status && "xrGetAllSubmeshStatesANDROID");
    return params.result;
}

XrResult WINAPI xrGetAllTrackablesANDROID(XrTrackableTrackerANDROID trackableTracker, uint32_t trackableCapacityInput, uint32_t *trackableCountOutput, XrTrackableANDROID *trackables)
{
    struct xrGetAllTrackablesANDROID_params params;
    NTSTATUS _status;
    params.trackableTracker = trackableTracker;
    params.trackableCapacityInput = trackableCapacityInput;
    params.trackableCountOutput = trackableCountOutput;
    params.trackables = trackables;
    _status = UNIX_CALL(xrGetAllTrackablesANDROID, &params);
    assert(!_status && "xrGetAllTrackablesANDROID");
    return params.result;
}

XrResult WINAPI xrGetAnchorPersistStateANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrUuidEXT *anchorId, XrAnchorPersistStateANDROID *persistState)
{
    struct xrGetAnchorPersistStateANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    params.anchorId = anchorId;
    params.persistState = persistState;
    _status = UNIX_CALL(xrGetAnchorPersistStateANDROID, &params);
    assert(!_status && "xrGetAnchorPersistStateANDROID");
    return params.result;
}

XrResult WINAPI xrGetAnchorUuidBD(XrAnchorBD anchor, XrUuidEXT *uuid)
{
    struct xrGetAnchorUuidBD_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    params.uuid = uuid;
    _status = UNIX_CALL(xrGetAnchorUuidBD, &params);
    assert(!_status && "xrGetAnchorUuidBD");
    return params.result;
}

XrResult WINAPI xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    struct xrGetAudioInputDeviceGuidOculus_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetAudioInputDeviceGuidOculus, &params);
    assert(!_status && "xrGetAudioInputDeviceGuidOculus");
    return params.result;
}

XrResult WINAPI xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[])
{
    struct xrGetAudioOutputDeviceGuidOculus_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetAudioOutputDeviceGuidOculus, &params);
    assert(!_status && "xrGetAudioOutputDeviceGuidOculus");
    return params.result;
}

XrResult WINAPI xrGetBodySkeletonFB(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB *skeleton)
{
    struct xrGetBodySkeletonFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.skeleton = skeleton;
    _status = UNIX_CALL(xrGetBodySkeletonFB, &params);
    assert(!_status && "xrGetBodySkeletonFB");
    return params.result;
}

XrResult WINAPI xrGetBodySkeletonHTC(XrBodyTrackerHTC bodyTracker, XrSpace baseSpace, uint32_t skeletonGenerationId, XrBodySkeletonHTC *skeleton)
{
    struct xrGetBodySkeletonHTC_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.baseSpace = baseSpace;
    params.skeletonGenerationId = skeletonGenerationId;
    params.skeleton = skeleton;
    _status = UNIX_CALL(xrGetBodySkeletonHTC, &params);
    assert(!_status && "xrGetBodySkeletonHTC");
    return params.result;
}

XrResult WINAPI xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState)
{
    struct xrGetControllerModelKeyMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.controllerModelKeyState = controllerModelKeyState;
    _status = UNIX_CALL(xrGetControllerModelKeyMSFT, &params);
    assert(!_status && "xrGetControllerModelKeyMSFT");
    return params.result;
}

XrResult WINAPI xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties)
{
    struct xrGetControllerModelPropertiesMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.properties = properties;
    _status = UNIX_CALL(xrGetControllerModelPropertiesMSFT, &params);
    assert(!_status && "xrGetControllerModelPropertiesMSFT");
    return params.result;
}

XrResult WINAPI xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state)
{
    struct xrGetControllerModelStateMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.state = state;
    _status = UNIX_CALL(xrGetControllerModelStateMSFT, &params);
    assert(!_status && "xrGetControllerModelStateMSFT");
    return params.result;
}

XrResult WINAPI xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    struct xrGetCurrentInteractionProfile_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.interactionProfile = interactionProfile;
    _status = UNIX_CALL(xrGetCurrentInteractionProfile, &params);
    assert(!_status && "xrGetCurrentInteractionProfile");
    return params.result;
}

XrResult WINAPI xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate)
{
    struct xrGetDeviceSampleRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.deviceSampleRate = deviceSampleRate;
    _status = UNIX_CALL(xrGetDeviceSampleRateFB, &params);
    assert(!_status && "xrGetDeviceSampleRateFB");
    return params.result;
}

XrResult WINAPI xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate)
{
    struct xrGetDisplayRefreshRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    _status = UNIX_CALL(xrGetDisplayRefreshRateFB, &params);
    assert(!_status && "xrGetDisplayRefreshRateFB");
    return params.result;
}

XrResult WINAPI xrGetEnvironmentDepthSwapchainStateMETA(XrEnvironmentDepthSwapchainMETA swapchain, XrEnvironmentDepthSwapchainStateMETA *state)
{
    struct xrGetEnvironmentDepthSwapchainStateMETA_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrGetEnvironmentDepthSwapchainStateMETA, &params);
    assert(!_status && "xrGetEnvironmentDepthSwapchainStateMETA");
    return params.result;
}

XrResult WINAPI xrGetExportedLocalizationMapDataML(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetExportedLocalizationMapDataML_params params;
    NTSTATUS _status;
    params.map = map;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetExportedLocalizationMapDataML, &params);
    assert(!_status && "xrGetExportedLocalizationMapDataML");
    return params.result;
}

XrResult WINAPI xrGetEyeGazesFB(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB *gazeInfo, XrEyeGazesFB *eyeGazes)
{
    struct xrGetEyeGazesFB_params params;
    NTSTATUS _status;
    params.eyeTracker = eyeTracker;
    params.gazeInfo = gazeInfo;
    params.eyeGazes = eyeGazes;
    _status = UNIX_CALL(xrGetEyeGazesFB, &params);
    assert(!_status && "xrGetEyeGazesFB");
    return params.result;
}

XrResult WINAPI xrGetFaceCalibrationStateANDROID(XrFaceTrackerANDROID faceTracker, XrBool32 *faceIsCalibratedOutput)
{
    struct xrGetFaceCalibrationStateANDROID_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.faceIsCalibratedOutput = faceIsCalibratedOutput;
    _status = UNIX_CALL(xrGetFaceCalibrationStateANDROID, &params);
    assert(!_status && "xrGetFaceCalibrationStateANDROID");
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeights2FB(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB *expressionInfo, XrFaceExpressionWeights2FB *expressionWeights)
{
    struct xrGetFaceExpressionWeights2FB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    _status = UNIX_CALL(xrGetFaceExpressionWeights2FB, &params);
    assert(!_status && "xrGetFaceExpressionWeights2FB");
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeightsFB(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB *expressionInfo, XrFaceExpressionWeightsFB *expressionWeights)
{
    struct xrGetFaceExpressionWeightsFB_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    _status = UNIX_CALL(xrGetFaceExpressionWeightsFB, &params);
    assert(!_status && "xrGetFaceExpressionWeightsFB");
    return params.result;
}

XrResult WINAPI xrGetFaceStateANDROID(XrFaceTrackerANDROID faceTracker, const XrFaceStateGetInfoANDROID *getInfo, XrFaceStateANDROID *faceStateOutput)
{
    struct xrGetFaceStateANDROID_params params;
    NTSTATUS _status;
    params.faceTracker = faceTracker;
    params.getInfo = getInfo;
    params.faceStateOutput = faceStateOutput;
    _status = UNIX_CALL(xrGetFaceStateANDROID, &params);
    assert(!_status && "xrGetFaceStateANDROID");
    return params.result;
}

XrResult WINAPI xrGetFacialExpressionBlendShapePropertiesML(XrFacialExpressionClientML facialExpressionClient, const XrFacialExpressionBlendShapeGetInfoML *blendShapeGetInfo, uint32_t blendShapeCount, XrFacialExpressionBlendShapePropertiesML *blendShapes)
{
    struct xrGetFacialExpressionBlendShapePropertiesML_params params;
    NTSTATUS _status;
    params.facialExpressionClient = facialExpressionClient;
    params.blendShapeGetInfo = blendShapeGetInfo;
    params.blendShapeCount = blendShapeCount;
    params.blendShapes = blendShapes;
    _status = UNIX_CALL(xrGetFacialExpressionBlendShapePropertiesML, &params);
    assert(!_status && "xrGetFacialExpressionBlendShapePropertiesML");
    return params.result;
}

XrResult WINAPI xrGetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC *facialExpressions)
{
    struct xrGetFacialExpressionsHTC_params params;
    NTSTATUS _status;
    params.facialTracker = facialTracker;
    params.facialExpressions = facialExpressions;
    _status = UNIX_CALL(xrGetFacialExpressionsHTC, &params);
    assert(!_status && "xrGetFacialExpressionsHTC");
    return params.result;
}

XrResult WINAPI xrGetFacialSimulationDataBD(XrFaceTrackerBD tracker, const XrFacialSimulationDataGetInfoBD *info, XrFacialSimulationDataBD *facialData)
{
    struct xrGetFacialSimulationDataBD_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.info = info;
    params.facialData = facialData;
    _status = UNIX_CALL(xrGetFacialSimulationDataBD, &params);
    assert(!_status && "xrGetFacialSimulationDataBD");
    return params.result;
}

XrResult WINAPI xrGetFacialSimulationModeBD(XrFaceTrackerBD tracker, XrFacialSimulationModeBD *mode)
{
    struct xrGetFacialSimulationModeBD_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.mode = mode;
    _status = UNIX_CALL(xrGetFacialSimulationModeBD, &params);
    assert(!_status && "xrGetFacialSimulationModeBD");
    return params.result;
}

XrResult WINAPI xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState)
{
    struct xrGetFoveationEyeTrackedStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.foveationState = foveationState;
    _status = UNIX_CALL(xrGetFoveationEyeTrackedStateMETA, &params);
    assert(!_status && "xrGetFoveationEyeTrackedStateMETA");
    return params.result;
}

XrResult WINAPI xrGetHandGestureQCOM(XrHandTrackerEXT handTracker, XrTime time, XrHandGestureQCOM *handGesture)
{
    struct xrGetHandGestureQCOM_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.time = time;
    params.handGesture = handGesture;
    _status = UNIX_CALL(xrGetHandGestureQCOM, &params);
    assert(!_status && "xrGetHandGestureQCOM");
    return params.result;
}

XrResult WINAPI xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh)
{
    struct xrGetHandMeshFB_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.mesh = mesh;
    _status = UNIX_CALL(xrGetHandMeshFB, &params);
    assert(!_status && "xrGetHandMeshFB");
    return params.result;
}

XrResult WINAPI xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetInputSourceLocalizedName_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetInputSourceLocalizedName, &params);
    assert(!_status && "xrGetInputSourceLocalizedName");
    return params.result;
}

XrResult WINAPI xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties)
{
    struct xrGetInstanceProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.instanceProperties = instanceProperties;
    _status = UNIX_CALL(xrGetInstanceProperties, &params);
    assert(!_status && "xrGetInstanceProperties");
    return params.result;
}

XrResult WINAPI xrGetMarkerDetectorStateML(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML *state)
{
    struct xrGetMarkerDetectorStateML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.state = state;
    _status = UNIX_CALL(xrGetMarkerDetectorStateML, &params);
    assert(!_status && "xrGetMarkerDetectorStateML");
    return params.result;
}

XrResult WINAPI xrGetMarkerLengthML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *meters)
{
    struct xrGetMarkerLengthML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.meters = meters;
    _status = UNIX_CALL(xrGetMarkerLengthML, &params);
    assert(!_status && "xrGetMarkerLengthML");
    return params.result;
}

XrResult WINAPI xrGetMarkerNumberML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t *number)
{
    struct xrGetMarkerNumberML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.number = number;
    _status = UNIX_CALL(xrGetMarkerNumberML, &params);
    assert(!_status && "xrGetMarkerNumberML");
    return params.result;
}

XrResult WINAPI xrGetMarkerReprojectionErrorML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *reprojectionErrorMeters)
{
    struct xrGetMarkerReprojectionErrorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.reprojectionErrorMeters = reprojectionErrorMeters;
    _status = UNIX_CALL(xrGetMarkerReprojectionErrorML, &params);
    assert(!_status && "xrGetMarkerReprojectionErrorML");
    return params.result;
}

XrResult WINAPI xrGetMarkerSizeVARJO(XrSession session, uint64_t markerId, XrExtent2Df *size)
{
    struct xrGetMarkerSizeVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.size = size;
    _status = UNIX_CALL(xrGetMarkerSizeVARJO, &params);
    assert(!_status && "xrGetMarkerSizeVARJO");
    return params.result;
}

XrResult WINAPI xrGetMarkerStringML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetMarkerStringML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetMarkerStringML, &params);
    assert(!_status && "xrGetMarkerStringML");
    return params.result;
}

XrResult WINAPI xrGetMarkersML(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t *markerCountOutput, XrMarkerML *markers)
{
    struct xrGetMarkersML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.markerCapacityInput = markerCapacityInput;
    params.markerCountOutput = markerCountOutput;
    params.markers = markers;
    _status = UNIX_CALL(xrGetMarkersML, &params);
    assert(!_status && "xrGetMarkersML");
    return params.result;
}

XrResult WINAPI xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetOpenGLGraphicsRequirementsKHR, &params);
    assert(!_status && "xrGetOpenGLGraphicsRequirementsKHR");
    return params.result;
}

XrResult WINAPI xrGetPassthroughCameraStateANDROID(XrSession session, const XrPassthroughCameraStateGetInfoANDROID *getInfo, XrPassthroughCameraStateANDROID *cameraStateOutput)
{
    struct xrGetPassthroughCameraStateANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.getInfo = getInfo;
    params.cameraStateOutput = cameraStateOutput;
    _status = UNIX_CALL(xrGetPassthroughCameraStateANDROID, &params);
    assert(!_status && "xrGetPassthroughCameraStateANDROID");
    return params.result;
}

XrResult WINAPI xrGetPassthroughPreferencesMETA(XrSession session, XrPassthroughPreferencesMETA *preferences)
{
    struct xrGetPassthroughPreferencesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.preferences = preferences;
    _status = UNIX_CALL(xrGetPassthroughPreferencesMETA, &params);
    assert(!_status && "xrGetPassthroughPreferencesMETA");
    return params.result;
}

XrResult WINAPI xrGetPerformanceMetricsStateANDROID(XrSession session, XrPerformanceMetricsStateANDROID *state)
{
    struct xrGetPerformanceMetricsStateANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrGetPerformanceMetricsStateANDROID, &params);
    assert(!_status && "xrGetPerformanceMetricsStateANDROID");
    return params.result;
}

XrResult WINAPI xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state)
{
    struct xrGetPerformanceMetricsStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrGetPerformanceMetricsStateMETA, &params);
    assert(!_status && "xrGetPerformanceMetricsStateMETA");
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionStateEXT(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT *state)
{
    struct xrGetPlaneDetectionStateEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.state = state;
    _status = UNIX_CALL(xrGetPlaneDetectionStateEXT, &params);
    assert(!_status && "xrGetPlaneDetectionStateEXT");
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionsEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT *info, XrPlaneDetectorLocationsEXT *locations)
{
    struct xrGetPlaneDetectionsEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.info = info;
    params.locations = locations;
    _status = UNIX_CALL(xrGetPlaneDetectionsEXT, &params);
    assert(!_status && "xrGetPlaneDetectionsEXT");
    return params.result;
}

XrResult WINAPI xrGetPlanePolygonBufferEXT(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT *polygonBuffer)
{
    struct xrGetPlanePolygonBufferEXT_params params;
    NTSTATUS _status;
    params.planeDetector = planeDetector;
    params.planeId = planeId;
    params.polygonBufferIndex = polygonBufferIndex;
    params.polygonBuffer = polygonBuffer;
    _status = UNIX_CALL(xrGetPlanePolygonBufferEXT, &params);
    assert(!_status && "xrGetPlanePolygonBufferEXT");
    return params.result;
}

XrResult WINAPI xrGetQueriedSenseDataBD(XrSenseDataSnapshotBD snapshot, XrQueriedSenseDataGetInfoBD *getInfo, XrQueriedSenseDataBD *queriedSenseData)
{
    struct xrGetQueriedSenseDataBD_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.getInfo = getInfo;
    params.queriedSenseData = queriedSenseData;
    _status = UNIX_CALL(xrGetQueriedSenseDataBD, &params);
    assert(!_status && "xrGetQueriedSenseDataBD");
    return params.result;
}

XrResult WINAPI xrGetRecommendedLayerResolutionMETA(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA *info, XrRecommendedLayerResolutionMETA *resolution)
{
    struct xrGetRecommendedLayerResolutionMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.resolution = resolution;
    _status = UNIX_CALL(xrGetRecommendedLayerResolutionMETA, &params);
    assert(!_status && "xrGetRecommendedLayerResolutionMETA");
    return params.result;
}

XrResult WINAPI xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    struct xrGetReferenceSpaceBoundsRect_params params;
    NTSTATUS _status;
    params.session = session;
    params.referenceSpaceType = referenceSpaceType;
    params.bounds = bounds;
    _status = UNIX_CALL(xrGetReferenceSpaceBoundsRect, &params);
    assert(!_status && "xrGetReferenceSpaceBoundsRect");
    return params.result;
}

XrResult WINAPI xrGetRenderModelAssetDataEXT(XrRenderModelAssetEXT asset, const XrRenderModelAssetDataGetInfoEXT *getInfo, XrRenderModelAssetDataEXT *buffer)
{
    struct xrGetRenderModelAssetDataEXT_params params;
    NTSTATUS _status;
    params.asset = asset;
    params.getInfo = getInfo;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetRenderModelAssetDataEXT, &params);
    assert(!_status && "xrGetRenderModelAssetDataEXT");
    return params.result;
}

XrResult WINAPI xrGetRenderModelAssetPropertiesEXT(XrRenderModelAssetEXT asset, const XrRenderModelAssetPropertiesGetInfoEXT *getInfo, XrRenderModelAssetPropertiesEXT *properties)
{
    struct xrGetRenderModelAssetPropertiesEXT_params params;
    NTSTATUS _status;
    params.asset = asset;
    params.getInfo = getInfo;
    params.properties = properties;
    _status = UNIX_CALL(xrGetRenderModelAssetPropertiesEXT, &params);
    assert(!_status && "xrGetRenderModelAssetPropertiesEXT");
    return params.result;
}

XrResult WINAPI xrGetRenderModelPoseTopLevelUserPathEXT(XrRenderModelEXT renderModel, const XrInteractionRenderModelTopLevelUserPathGetInfoEXT *info, XrPath *topLevelUserPath)
{
    struct xrGetRenderModelPoseTopLevelUserPathEXT_params params;
    NTSTATUS _status;
    params.renderModel = renderModel;
    params.info = info;
    params.topLevelUserPath = topLevelUserPath;
    _status = UNIX_CALL(xrGetRenderModelPoseTopLevelUserPathEXT, &params);
    assert(!_status && "xrGetRenderModelPoseTopLevelUserPathEXT");
    return params.result;
}

XrResult WINAPI xrGetRenderModelPropertiesEXT(XrRenderModelEXT renderModel, const XrRenderModelPropertiesGetInfoEXT *getInfo, XrRenderModelPropertiesEXT *properties)
{
    struct xrGetRenderModelPropertiesEXT_params params;
    NTSTATUS _status;
    params.renderModel = renderModel;
    params.getInfo = getInfo;
    params.properties = properties;
    _status = UNIX_CALL(xrGetRenderModelPropertiesEXT, &params);
    assert(!_status && "xrGetRenderModelPropertiesEXT");
    return params.result;
}

XrResult WINAPI xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties)
{
    struct xrGetRenderModelPropertiesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.path = path;
    params.properties = properties;
    _status = UNIX_CALL(xrGetRenderModelPropertiesFB, &params);
    assert(!_status && "xrGetRenderModelPropertiesFB");
    return params.result;
}

XrResult WINAPI xrGetRenderModelStateEXT(XrRenderModelEXT renderModel, const XrRenderModelStateGetInfoEXT *getInfo, XrRenderModelStateEXT *state)
{
    struct xrGetRenderModelStateEXT_params params;
    NTSTATUS _status;
    params.renderModel = renderModel;
    params.getInfo = getInfo;
    params.state = state;
    _status = UNIX_CALL(xrGetRenderModelStateEXT, &params);
    assert(!_status && "xrGetRenderModelStateEXT");
    return params.result;
}

XrResult WINAPI xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components)
{
    struct xrGetSceneComponentsMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.components = components;
    _status = UNIX_CALL(xrGetSceneComponentsMSFT, &params);
    assert(!_status && "xrGetSceneComponentsMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state)
{
    struct xrGetSceneComputeStateMSFT_params params;
    NTSTATUS _status;
    params.sceneObserver = sceneObserver;
    params.state = state;
    _status = UNIX_CALL(xrGetSceneComputeStateMSFT, &params);
    assert(!_status && "xrGetSceneComputeStateMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerDecodedStringMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSceneMarkerDecodedStringMSFT, &params);
    assert(!_status && "xrGetSceneMarkerDecodedStringMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerRawDataMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrGetSceneMarkerRawDataMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSceneMarkerRawDataMSFT, &params);
    assert(!_status && "xrGetSceneMarkerRawDataMSFT");
    return params.result;
}

XrResult WINAPI xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers)
{
    struct xrGetSceneMeshBuffersMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.buffers = buffers;
    _status = UNIX_CALL(xrGetSceneMeshBuffersMSFT, &params);
    assert(!_status && "xrGetSceneMeshBuffersMSFT");
    return params.result;
}

XrResult WINAPI xrGetSenseDataProviderStateBD(XrSenseDataProviderBD provider, XrSenseDataProviderStateBD *state)
{
    struct xrGetSenseDataProviderStateBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.state = state;
    _status = UNIX_CALL(xrGetSenseDataProviderStateBD, &params);
    assert(!_status && "xrGetSenseDataProviderStateBD");
    return params.result;
}

XrResult WINAPI xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.getInfo = getInfo;
    params.countInput = countInput;
    params.readOutput = readOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSerializedSceneFragmentDataMSFT, &params);
    assert(!_status && "xrGetSerializedSceneFragmentDataMSFT");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundary2DFB(XrSession session, XrSpace space, XrBoundary2DFB *boundary2DOutput)
{
    struct xrGetSpaceBoundary2DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundary2DOutput = boundary2DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundary2DFB, &params);
    assert(!_status && "xrGetSpaceBoundary2DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox2DFB(XrSession session, XrSpace space, XrRect2Df *boundingBox2DOutput)
{
    struct xrGetSpaceBoundingBox2DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundingBox2DOutput = boundingBox2DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundingBox2DFB, &params);
    assert(!_status && "xrGetSpaceBoundingBox2DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox3DFB(XrSession session, XrSpace space, XrRect3DfFB *boundingBox3DOutput)
{
    struct xrGetSpaceBoundingBox3DFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.boundingBox3DOutput = boundingBox3DOutput;
    _status = UNIX_CALL(xrGetSpaceBoundingBox3DFB, &params);
    assert(!_status && "xrGetSpaceBoundingBox3DFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceComponentStatusFB(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB *status)
{
    struct xrGetSpaceComponentStatusFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.componentType = componentType;
    params.status = status;
    _status = UNIX_CALL(xrGetSpaceComponentStatusFB, &params);
    assert(!_status && "xrGetSpaceComponentStatusFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceContainerFB(XrSession session, XrSpace space, XrSpaceContainerFB *spaceContainerOutput)
{
    struct xrGetSpaceContainerFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.spaceContainerOutput = spaceContainerOutput;
    _status = UNIX_CALL(xrGetSpaceContainerFB, &params);
    assert(!_status && "xrGetSpaceContainerFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceRoomLayoutFB(XrSession session, XrSpace space, XrRoomLayoutFB *roomLayoutOutput)
{
    struct xrGetSpaceRoomLayoutFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.roomLayoutOutput = roomLayoutOutput;
    _status = UNIX_CALL(xrGetSpaceRoomLayoutFB, &params);
    assert(!_status && "xrGetSpaceRoomLayoutFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceSemanticLabelsFB(XrSession session, XrSpace space, XrSemanticLabelsFB *semanticLabelsOutput)
{
    struct xrGetSpaceSemanticLabelsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.space = space;
    params.semanticLabelsOutput = semanticLabelsOutput;
    _status = UNIX_CALL(xrGetSpaceSemanticLabelsFB, &params);
    assert(!_status && "xrGetSpaceSemanticLabelsFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceTriangleMeshMETA(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA *getInfo, XrSpaceTriangleMeshMETA *triangleMeshOutput)
{
    struct xrGetSpaceTriangleMeshMETA_params params;
    NTSTATUS _status;
    params.space = space;
    params.getInfo = getInfo;
    params.triangleMeshOutput = triangleMeshOutput;
    _status = UNIX_CALL(xrGetSpaceTriangleMeshMETA, &params);
    assert(!_status && "xrGetSpaceTriangleMeshMETA");
    return params.result;
}

XrResult WINAPI xrGetSpaceUserIdFB(XrSpaceUserFB user, XrSpaceUserIdFB *userId)
{
    struct xrGetSpaceUserIdFB_params params;
    NTSTATUS _status;
    params.user = user;
    params.userId = userId;
    _status = UNIX_CALL(xrGetSpaceUserIdFB, &params);
    assert(!_status && "xrGetSpaceUserIdFB");
    return params.result;
}

XrResult WINAPI xrGetSpaceUuidFB(XrSpace space, XrUuidEXT *uuid)
{
    struct xrGetSpaceUuidFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.uuid = uuid;
    _status = UNIX_CALL(xrGetSpaceUuidFB, &params);
    assert(!_status && "xrGetSpaceUuidFB");
    return params.result;
}

XrResult WINAPI xrGetSpatialAnchorNameHTC(XrSpace anchor, XrSpatialAnchorNameHTC *name)
{
    struct xrGetSpatialAnchorNameHTC_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    params.name = name;
    _status = UNIX_CALL(xrGetSpatialAnchorNameHTC, &params);
    assert(!_status && "xrGetSpatialAnchorNameHTC");
    return params.result;
}

XrResult WINAPI xrGetSpatialAnchorStateML(XrSpace anchor, XrSpatialAnchorStateML *state)
{
    struct xrGetSpatialAnchorStateML_params params;
    NTSTATUS _status;
    params.anchor = anchor;
    params.state = state;
    _status = UNIX_CALL(xrGetSpatialAnchorStateML, &params);
    assert(!_status && "xrGetSpatialAnchorStateML");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferFloatEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, float *buffer)
{
    struct xrGetSpatialBufferFloatEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferFloatEXT, &params);
    assert(!_status && "xrGetSpatialBufferFloatEXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferStringEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetSpatialBufferStringEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferStringEXT, &params);
    assert(!_status && "xrGetSpatialBufferStringEXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint16EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint16_t *buffer)
{
    struct xrGetSpatialBufferUint16EXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferUint16EXT, &params);
    assert(!_status && "xrGetSpatialBufferUint16EXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint32EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint32_t *buffer)
{
    struct xrGetSpatialBufferUint32EXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferUint32EXT, &params);
    assert(!_status && "xrGetSpatialBufferUint32EXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint8EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrGetSpatialBufferUint8EXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferUint8EXT, &params);
    assert(!_status && "xrGetSpatialBufferUint8EXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferVector2fEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, XrVector2f *buffer)
{
    struct xrGetSpatialBufferVector2fEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferVector2fEXT, &params);
    assert(!_status && "xrGetSpatialBufferVector2fEXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferVector3fEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, XrVector3f *buffer)
{
    struct xrGetSpatialBufferVector3fEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetSpatialBufferVector3fEXT, &params);
    assert(!_status && "xrGetSpatialBufferVector3fEXT");
    return params.result;
}

XrResult WINAPI xrGetSpatialEntityComponentDataBD(XrSenseDataSnapshotBD snapshot, const XrSpatialEntityComponentGetInfoBD *getInfo, XrSpatialEntityComponentDataBaseHeaderBD *componentData)
{
    struct xrGetSpatialEntityComponentDataBD_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.getInfo = getInfo;
    params.componentData = componentData;
    _status = UNIX_CALL(xrGetSpatialEntityComponentDataBD, &params);
    assert(!_status && "xrGetSpatialEntityComponentDataBD");
    return params.result;
}

XrResult WINAPI xrGetSpatialEntityUuidBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, XrUuidEXT *uuid)
{
    struct xrGetSpatialEntityUuidBD_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.entityId = entityId;
    params.uuid = uuid;
    _status = UNIX_CALL(xrGetSpatialEntityUuidBD, &params);
    assert(!_status && "xrGetSpatialEntityUuidBD");
    return params.result;
}

XrResult WINAPI xrGetSpatialGraphNodeBindingPropertiesMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo, XrSpatialGraphNodeBindingPropertiesMSFT *properties)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params params;
    NTSTATUS _status;
    params.nodeBinding = nodeBinding;
    params.getInfo = getInfo;
    params.properties = properties;
    _status = UNIX_CALL(xrGetSpatialGraphNodeBindingPropertiesMSFT, &params);
    assert(!_status && "xrGetSpatialGraphNodeBindingPropertiesMSFT");
    return params.result;
}

XrResult WINAPI xrGetSubmeshDataANDROID(XrSceneMeshSnapshotANDROID snapshot, uint32_t submeshDataCount, XrSceneSubmeshDataANDROID *inoutSubmeshData)
{
    struct xrGetSubmeshDataANDROID_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.submeshDataCount = submeshDataCount;
    params.inoutSubmeshData = inoutSubmeshData;
    _status = UNIX_CALL(xrGetSubmeshDataANDROID, &params);
    assert(!_status && "xrGetSubmeshDataANDROID");
    return params.result;
}

XrResult WINAPI xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state)
{
    struct xrGetSwapchainStateFB_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrGetSwapchainStateFB, &params);
    assert(!_status && "xrGetSwapchainStateFB");
    return params.result;
}

XrResult WINAPI xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties)
{
    struct xrGetSystemProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.properties = properties;
    _status = UNIX_CALL(xrGetSystemProperties, &params);
    assert(!_status && "xrGetSystemProperties");
    return params.result;
}

XrResult WINAPI xrGetTrackableImageANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableImageANDROID *trackable)
{
    struct xrGetTrackableImageANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.trackable = trackable;
    _status = UNIX_CALL(xrGetTrackableImageANDROID, &params);
    assert(!_status && "xrGetTrackableImageANDROID");
    return params.result;
}

XrResult WINAPI xrGetTrackableMarkerANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableMarkerANDROID *markerOutput)
{
    struct xrGetTrackableMarkerANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.markerOutput = markerOutput;
    _status = UNIX_CALL(xrGetTrackableMarkerANDROID, &params);
    assert(!_status && "xrGetTrackableMarkerANDROID");
    return params.result;
}

XrResult WINAPI xrGetTrackableObjectANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableObjectANDROID *objectOutput)
{
    struct xrGetTrackableObjectANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.objectOutput = objectOutput;
    _status = UNIX_CALL(xrGetTrackableObjectANDROID, &params);
    assert(!_status && "xrGetTrackableObjectANDROID");
    return params.result;
}

XrResult WINAPI xrGetTrackablePlaneANDROID(XrTrackableTrackerANDROID trackableTracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackablePlaneANDROID *planeOutput)
{
    struct xrGetTrackablePlaneANDROID_params params;
    NTSTATUS _status;
    params.trackableTracker = trackableTracker;
    params.getInfo = getInfo;
    params.planeOutput = planeOutput;
    _status = UNIX_CALL(xrGetTrackablePlaneANDROID, &params);
    assert(!_status && "xrGetTrackablePlaneANDROID");
    return params.result;
}

XrResult WINAPI xrGetTrackableQrCodeANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableQrCodeANDROID *qrCodeOutput)
{
    struct xrGetTrackableQrCodeANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.qrCodeOutput = qrCodeOutput;
    _status = UNIX_CALL(xrGetTrackableQrCodeANDROID, &params);
    assert(!_status && "xrGetTrackableQrCodeANDROID");
    return params.result;
}

XrResult WINAPI xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties)
{
    struct xrGetViewConfigurationProperties_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.configurationProperties = configurationProperties;
    _status = UNIX_CALL(xrGetViewConfigurationProperties, &params);
    assert(!_status && "xrGetViewConfigurationProperties");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardDirtyTexturesMETA(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t *textureIdCountOutput, uint64_t *textureIds)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.textureIdCapacityInput = textureIdCapacityInput;
    params.textureIdCountOutput = textureIdCountOutput;
    params.textureIds = textureIds;
    _status = UNIX_CALL(xrGetVirtualKeyboardDirtyTexturesMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardDirtyTexturesMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardModelAnimationStatesMETA(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA *animationStates)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.animationStates = animationStates;
    _status = UNIX_CALL(xrGetVirtualKeyboardModelAnimationStatesMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardModelAnimationStatesMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardScaleMETA(XrVirtualKeyboardMETA keyboard, float *scale)
{
    struct xrGetVirtualKeyboardScaleMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.scale = scale;
    _status = UNIX_CALL(xrGetVirtualKeyboardScaleMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardScaleMETA");
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardTextureDataMETA(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA *textureData)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.textureId = textureId;
    params.textureData = textureData;
    _status = UNIX_CALL(xrGetVirtualKeyboardTextureDataMETA, &params);
    assert(!_status && "xrGetVirtualKeyboardTextureDataMETA");
    return params.result;
}

XrResult WINAPI xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask)
{
    struct xrGetVisibilityMaskKHR_params params;
    NTSTATUS _status;
    params.session = session;
    params.viewConfigurationType = viewConfigurationType;
    params.viewIndex = viewIndex;
    params.visibilityMaskType = visibilityMaskType;
    params.visibilityMask = visibilityMask;
    _status = UNIX_CALL(xrGetVisibilityMaskKHR, &params);
    assert(!_status && "xrGetVisibilityMaskKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice)
{
    struct xrGetVulkanGraphicsDevice2KHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.getInfo = getInfo;
    params.vulkanPhysicalDevice = vulkanPhysicalDevice;
    _status = UNIX_CALL(xrGetVulkanGraphicsDevice2KHR, &params);
    assert(!_status && "xrGetVulkanGraphicsDevice2KHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice)
{
    struct xrGetVulkanGraphicsDeviceKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.vkInstance = vkInstance;
    params.vkPhysicalDevice = vkPhysicalDevice;
    _status = UNIX_CALL(xrGetVulkanGraphicsDeviceKHR, &params);
    assert(!_status && "xrGetVulkanGraphicsDeviceKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetVulkanGraphicsRequirements2KHR, &params);
    assert(!_status && "xrGetVulkanGraphicsRequirements2KHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    _status = UNIX_CALL(xrGetVulkanGraphicsRequirementsKHR, &params);
    assert(!_status && "xrGetVulkanGraphicsRequirementsKHR");
    return params.result;
}

XrResult WINAPI xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetVulkanInstanceExtensionsKHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.systemId = systemId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrGetVulkanInstanceExtensionsKHR, &params);
    assert(!_status && "xrGetVulkanInstanceExtensionsKHR");
    return params.result;
}

XrResult WINAPI xrGetWorldMeshBufferRecommendSizeML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferRecommendedSizeInfoML *sizeInfo, XrWorldMeshBufferSizeML *size)
{
    struct xrGetWorldMeshBufferRecommendSizeML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.sizeInfo = sizeInfo;
    params.size = size;
    _status = UNIX_CALL(xrGetWorldMeshBufferRecommendSizeML, &params);
    assert(!_status && "xrGetWorldMeshBufferRecommendSizeML");
    return params.result;
}

XrResult WINAPI xrImportLocalizationMapML(XrSession session, const XrLocalizationMapImportInfoML *importInfo, XrUuidEXT *mapUuid)
{
    struct xrImportLocalizationMapML_params params;
    NTSTATUS _status;
    params.session = session;
    params.importInfo = importInfo;
    params.mapUuid = mapUuid;
    _status = UNIX_CALL(xrImportLocalizationMapML, &params);
    assert(!_status && "xrImportLocalizationMapML");
    return params.result;
}

XrResult WINAPI xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrLoadControllerModelMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.modelKey = modelKey;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrLoadControllerModelMSFT, &params);
    assert(!_status && "xrLoadControllerModelMSFT");
    return params.result;
}

XrResult WINAPI xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer)
{
    struct xrLoadRenderModelFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.buffer = buffer;
    _status = UNIX_CALL(xrLoadRenderModelFB, &params);
    assert(!_status && "xrLoadRenderModelFB");
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsBD(XrBodyTrackerBD bodyTracker, const XrBodyJointsLocateInfoBD *locateInfo, XrBodyJointLocationsBD *locations)
{
    struct xrLocateBodyJointsBD_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateBodyJointsBD, &params);
    assert(!_status && "xrLocateBodyJointsBD");
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsFB(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB *locateInfo, XrBodyJointLocationsFB *locations)
{
    struct xrLocateBodyJointsFB_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateBodyJointsFB, &params);
    assert(!_status && "xrLocateBodyJointsFB");
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsHTC(XrBodyTrackerHTC bodyTracker, const XrBodyJointsLocateInfoHTC *locateInfo, XrBodyJointLocationsHTC *locations)
{
    struct xrLocateBodyJointsHTC_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateBodyJointsHTC, &params);
    assert(!_status && "xrLocateBodyJointsHTC");
    return params.result;
}

XrResult WINAPI xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    struct xrLocateHandJointsEXT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateHandJointsEXT, &params);
    assert(!_status && "xrLocateHandJointsEXT");
    return params.result;
}

XrResult WINAPI xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations)
{
    struct xrLocateSceneComponentsMSFT_params params;
    NTSTATUS _status;
    params.scene = scene;
    params.locateInfo = locateInfo;
    params.locations = locations;
    _status = UNIX_CALL(xrLocateSceneComponentsMSFT, &params);
    assert(!_status && "xrLocateSceneComponentsMSFT");
    return params.result;
}

XrResult WINAPI xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location)
{
    struct xrLocateSpace_params params;
    NTSTATUS _status;
    params.space = space;
    params.baseSpace = baseSpace;
    params.time = time;
    params.location = location;
    _status = UNIX_CALL(xrLocateSpace, &params);
    assert(!_status && "xrLocateSpace");
    return params.result;
}

XrResult WINAPI xrLocateSpaces(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpaces_params params;
    NTSTATUS _status;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    _status = UNIX_CALL(xrLocateSpaces, &params);
    assert(!_status && "xrLocateSpaces");
    return params.result;
}

XrResult WINAPI xrLocateSpacesKHR(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpacesKHR_params params;
    NTSTATUS _status;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    _status = UNIX_CALL(xrLocateSpacesKHR, &params);
    assert(!_status && "xrLocateSpacesKHR");
    return params.result;
}

XrResult WINAPI xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views)
{
    struct xrLocateViews_params params;
    NTSTATUS _status;
    params.session = session;
    params.viewLocateInfo = viewLocateInfo;
    params.viewState = viewState;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    _status = UNIX_CALL(xrLocateViews, &params);
    assert(!_status && "xrLocateViews");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerPauseFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrPassthroughLayerPauseFB, &params);
    assert(!_status && "xrPassthroughLayerPauseFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerResumeFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    _status = UNIX_CALL(xrPassthroughLayerResumeFB, &params);
    assert(!_status && "xrPassthroughLayerResumeFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    params.intensity = intensity;
    _status = UNIX_CALL(xrPassthroughLayerSetKeyboardHandsIntensityFB, &params);
    assert(!_status && "xrPassthroughLayerSetKeyboardHandsIntensityFB");
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style)
{
    struct xrPassthroughLayerSetStyleFB_params params;
    NTSTATUS _status;
    params.layer = layer;
    params.style = style;
    _status = UNIX_CALL(xrPassthroughLayerSetStyleFB, &params);
    assert(!_status && "xrPassthroughLayerSetStyleFB");
    return params.result;
}

XrResult WINAPI xrPassthroughPauseFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughPauseFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrPassthroughPauseFB, &params);
    assert(!_status && "xrPassthroughPauseFB");
    return params.result;
}

XrResult WINAPI xrPassthroughStartFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughStartFB_params params;
    NTSTATUS _status;
    params.passthrough = passthrough;
    _status = UNIX_CALL(xrPassthroughStartFB, &params);
    assert(!_status && "xrPassthroughStartFB");
    return params.result;
}

XrResult WINAPI xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrPathToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.path = path;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    _status = UNIX_CALL(xrPathToString, &params);
    assert(!_status && "xrPathToString");
    return params.result;
}

XrResult WINAPI xrPauseSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA *pauseInfo)
{
    struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.pauseInfo = pauseInfo;
    _status = UNIX_CALL(xrPauseSimultaneousHandsAndControllersTrackingMETA, &params);
    assert(!_status && "xrPauseSimultaneousHandsAndControllersTrackingMETA");
    return params.result;
}

XrResult WINAPI xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.level = level;
    _status = UNIX_CALL(xrPerfSettingsSetPerformanceLevelEXT, &params);
    assert(!_status && "xrPerfSettingsSetPerformanceLevelEXT");
    return params.result;
}

XrResult WINAPI xrPerformEnvironmentRaycastMETA(XrEnvironmentRaycasterMETA environmentRaycaster, const XrEnvironmentRaycastHitGetInfoMETA *info, XrEnvironmentRaycastHitMETA *hitPoint)
{
    struct xrPerformEnvironmentRaycastMETA_params params;
    NTSTATUS _status;
    params.environmentRaycaster = environmentRaycaster;
    params.info = info;
    params.hitPoint = hitPoint;
    _status = UNIX_CALL(xrPerformEnvironmentRaycastMETA, &params);
    assert(!_status && "xrPerformEnvironmentRaycastMETA");
    return params.result;
}

XrResult WINAPI xrPersistAnchorANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrPersistedAnchorSpaceInfoANDROID *persistedInfo, XrUuidEXT *anchorIdOutput)
{
    struct xrPersistAnchorANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    params.persistedInfo = persistedInfo;
    params.anchorIdOutput = anchorIdOutput;
    _status = UNIX_CALL(xrPersistAnchorANDROID, &params);
    assert(!_status && "xrPersistAnchorANDROID");
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorPersistInfoBD *info, XrFutureEXT *future)
{
    struct xrPersistSpatialAnchorAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrPersistSpatialAnchorAsyncBD, &params);
    assert(!_status && "xrPersistSpatialAnchorAsyncBD");
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrPersistSpatialAnchorCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrPersistSpatialAnchorCompleteBD, &params);
    assert(!_status && "xrPersistSpatialAnchorCompleteBD");
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo)
{
    struct xrPersistSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceInfo = spatialAnchorPersistenceInfo;
    _status = UNIX_CALL(xrPersistSpatialAnchorMSFT, &params);
    assert(!_status && "xrPersistSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrPersistSpatialEntityAsyncEXT(XrSpatialPersistenceContextEXT persistenceContext, const XrSpatialEntityPersistInfoEXT *persistInfo, XrFutureEXT *future)
{
    struct xrPersistSpatialEntityAsyncEXT_params params;
    NTSTATUS _status;
    params.persistenceContext = persistenceContext;
    params.persistInfo = persistInfo;
    params.future = future;
    _status = UNIX_CALL(xrPersistSpatialEntityAsyncEXT, &params);
    assert(!_status && "xrPersistSpatialEntityAsyncEXT");
    return params.result;
}

XrResult WINAPI xrPersistSpatialEntityCompleteEXT(XrSpatialPersistenceContextEXT persistenceContext, XrFutureEXT future, XrPersistSpatialEntityCompletionEXT *completion)
{
    struct xrPersistSpatialEntityCompleteEXT_params params;
    NTSTATUS _status;
    params.persistenceContext = persistenceContext;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrPersistSpatialEntityCompleteEXT, &params);
    assert(!_status && "xrPersistSpatialEntityCompleteEXT");
    return params.result;
}

XrResult WINAPI xrPollFutureEXT(XrInstance instance, const XrFuturePollInfoEXT *pollInfo, XrFuturePollResultEXT *pollResult)
{
    struct xrPollFutureEXT_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pollInfo = pollInfo;
    params.pollResult = pollResult;
    _status = UNIX_CALL(xrPollFutureEXT, &params);
    assert(!_status && "xrPollFutureEXT");
    return params.result;
}

XrResult WINAPI xrPublishSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsPublishInfoML *publishInfo, XrFutureEXT *future)
{
    struct xrPublishSpatialAnchorsAsyncML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.publishInfo = publishInfo;
    params.future = future;
    _status = UNIX_CALL(xrPublishSpatialAnchorsAsyncML, &params);
    assert(!_status && "xrPublishSpatialAnchorsAsyncML");
    return params.result;
}

XrResult WINAPI xrPublishSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsPublishCompletionML *completion)
{
    struct xrPublishSpatialAnchorsCompleteML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrPublishSpatialAnchorsCompleteML, &params);
    assert(!_status && "xrPublishSpatialAnchorsCompleteML");
    return params.result;
}

XrResult WINAPI xrQueryFramesPerBufferRangeBD(XrSession session, XrAudioSampleRateBD sampleRate, uint32_t *min, uint32_t *max)
{
    struct xrQueryFramesPerBufferRangeBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.sampleRate = sampleRate;
    params.min = min;
    params.max = max;
    _status = UNIX_CALL(xrQueryFramesPerBufferRangeBD, &params);
    assert(!_status && "xrQueryFramesPerBufferRangeBD");
    return params.result;
}

XrResult WINAPI xrQueryLocalizationMapsML(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo, uint32_t mapCapacityInput, uint32_t *mapCountOutput, XrLocalizationMapML *maps)
{
    struct xrQueryLocalizationMapsML_params params;
    NTSTATUS _status;
    params.session = session;
    params.queryInfo = queryInfo;
    params.mapCapacityInput = mapCapacityInput;
    params.mapCountOutput = mapCountOutput;
    params.maps = maps;
    _status = UNIX_CALL(xrQueryLocalizationMapsML, &params);
    assert(!_status && "xrQueryLocalizationMapsML");
    return params.result;
}

XrResult WINAPI xrQueryPerformanceMetricsCounterANDROID(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterANDROID *counter)
{
    struct xrQueryPerformanceMetricsCounterANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.counterPath = counterPath;
    params.counter = counter;
    _status = UNIX_CALL(xrQueryPerformanceMetricsCounterANDROID, &params);
    assert(!_status && "xrQueryPerformanceMetricsCounterANDROID");
    return params.result;
}

XrResult WINAPI xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter)
{
    struct xrQueryPerformanceMetricsCounterMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.counterPath = counterPath;
    params.counter = counter;
    _status = UNIX_CALL(xrQueryPerformanceMetricsCounterMETA, &params);
    assert(!_status && "xrQueryPerformanceMetricsCounterMETA");
    return params.result;
}

XrResult WINAPI xrQuerySenseDataAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataQueryInfoBD *queryInfo, XrFutureEXT *future)
{
    struct xrQuerySenseDataAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.queryInfo = queryInfo;
    params.future = future;
    _status = UNIX_CALL(xrQuerySenseDataAsyncBD, &params);
    assert(!_status && "xrQuerySenseDataAsyncBD");
    return params.result;
}

XrResult WINAPI xrQuerySenseDataCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSenseDataQueryCompletionBD *completion)
{
    struct xrQuerySenseDataCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrQuerySenseDataCompleteBD, &params);
    assert(!_status && "xrQuerySenseDataCompleteBD");
    return params.result;
}

XrResult WINAPI xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrQuerySpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrQuerySpacesFB, &params);
    assert(!_status && "xrQuerySpacesFB");
    return params.result;
}

XrResult WINAPI xrQuerySpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsQueryInfoBaseHeaderML *queryInfo, XrFutureEXT *future)
{
    struct xrQuerySpatialAnchorsAsyncML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.queryInfo = queryInfo;
    params.future = future;
    _status = UNIX_CALL(xrQuerySpatialAnchorsAsyncML, &params);
    assert(!_status && "xrQuerySpatialAnchorsAsyncML");
    return params.result;
}

XrResult WINAPI xrQuerySpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsQueryCompletionML *completion)
{
    struct xrQuerySpatialAnchorsCompleteML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrQuerySpatialAnchorsCompleteML, &params);
    assert(!_status && "xrQuerySpatialAnchorsCompleteML");
    return params.result;
}

XrResult WINAPI xrQuerySpatialComponentDataEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialComponentDataQueryConditionEXT *queryCondition, XrSpatialComponentDataQueryResultEXT *queryResult)
{
    struct xrQuerySpatialComponentDataEXT_params params;
    NTSTATUS _status;
    params.snapshot = snapshot;
    params.queryCondition = queryCondition;
    params.queryResult = queryResult;
    _status = UNIX_CALL(xrQuerySpatialComponentDataEXT, &params);
    assert(!_status && "xrQuerySpatialComponentDataEXT");
    return params.result;
}

XrResult WINAPI xrQuerySystemTrackedKeyboardFB(XrSession session, const XrKeyboardTrackingQueryFB *queryInfo, XrKeyboardTrackingDescriptionFB *keyboard)
{
    struct xrQuerySystemTrackedKeyboardFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.queryInfo = queryInfo;
    params.keyboard = keyboard;
    _status = UNIX_CALL(xrQuerySystemTrackedKeyboardFB, &params);
    assert(!_status && "xrQuerySystemTrackedKeyboardFB");
    return params.result;
}

XrResult WINAPI xrRaycastANDROID(XrSession session, const XrRaycastInfoANDROID *rayInfo, XrRaycastHitResultsANDROID *results)
{
    struct xrRaycastANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.rayInfo = rayInfo;
    params.results = results;
    _status = UNIX_CALL(xrRaycastANDROID, &params);
    assert(!_status && "xrRaycastANDROID");
    return params.result;
}

XrResult WINAPI xrRemoveTrackableImageDatabaseANDROID(XrTrackableTrackerANDROID tracker, XrTrackableImageDatabaseANDROID database)
{
    struct xrRemoveTrackableImageDatabaseANDROID_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.database = database;
    _status = UNIX_CALL(xrRemoveTrackableImageDatabaseANDROID, &params);
    assert(!_status && "xrRemoveTrackableImageDatabaseANDROID");
    return params.result;
}

XrResult WINAPI xrRequestBodyTrackingFidelityMETA(XrBodyTrackerFB bodyTracker, const XrBodyTrackingFidelityMETA fidelity)
{
    struct xrRequestBodyTrackingFidelityMETA_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.fidelity = fidelity;
    _status = UNIX_CALL(xrRequestBodyTrackingFidelityMETA, &params);
    assert(!_status && "xrRequestBodyTrackingFidelityMETA");
    return params.result;
}

XrResult WINAPI xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate)
{
    struct xrRequestDisplayRefreshRateFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    _status = UNIX_CALL(xrRequestDisplayRefreshRateFB, &params);
    assert(!_status && "xrRequestDisplayRefreshRateFB");
    return params.result;
}

XrResult WINAPI xrRequestExitSession(XrSession session)
{
    struct xrRequestExitSession_params params;
    NTSTATUS _status;
    params.session = session;
    _status = UNIX_CALL(xrRequestExitSession, &params);
    assert(!_status && "xrRequestExitSession");
    return params.result;
}

XrResult WINAPI xrRequestMapLocalizationML(XrSession session, const XrMapLocalizationRequestInfoML *requestInfo)
{
    struct xrRequestMapLocalizationML_params params;
    NTSTATUS _status;
    params.session = session;
    params.requestInfo = requestInfo;
    _status = UNIX_CALL(xrRequestMapLocalizationML, &params);
    assert(!_status && "xrRequestMapLocalizationML");
    return params.result;
}

XrResult WINAPI xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrRequestSceneCaptureFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrRequestSceneCaptureFB, &params);
    assert(!_status && "xrRequestSceneCaptureFB");
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshGetInfoML *getInfo, XrWorldMeshBufferML *buffer, XrFutureEXT *future)
{
    struct xrRequestWorldMeshAsyncML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.getInfo = getInfo;
    params.buffer = buffer;
    params.future = future;
    _status = UNIX_CALL(xrRequestWorldMeshAsyncML, &params);
    assert(!_status && "xrRequestWorldMeshAsyncML");
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshCompleteML(XrWorldMeshDetectorML detector, const XrWorldMeshRequestCompletionInfoML *completionInfo, XrFutureEXT future, XrWorldMeshRequestCompletionML *completion)
{
    struct xrRequestWorldMeshCompleteML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.completionInfo = completionInfo;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrRequestWorldMeshCompleteML, &params);
    assert(!_status && "xrRequestWorldMeshCompleteML");
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshStateAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshStateRequestInfoML *stateRequest, XrFutureEXT *future)
{
    struct xrRequestWorldMeshStateAsyncML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.stateRequest = stateRequest;
    params.future = future;
    _status = UNIX_CALL(xrRequestWorldMeshStateAsyncML, &params);
    assert(!_status && "xrRequestWorldMeshStateAsyncML");
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshStateCompleteML(XrWorldMeshDetectorML detector, XrFutureEXT future, XrWorldMeshStateRequestCompletionML *completion)
{
    struct xrRequestWorldMeshStateCompleteML_params params;
    NTSTATUS _status;
    params.detector = detector;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrRequestWorldMeshStateCompleteML, &params);
    assert(!_status && "xrRequestWorldMeshStateCompleteML");
    return params.result;
}

XrResult WINAPI xrResetBodyTrackingCalibrationMETA(XrBodyTrackerFB bodyTracker)
{
    struct xrResetBodyTrackingCalibrationMETA_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    _status = UNIX_CALL(xrResetBodyTrackingCalibrationMETA, &params);
    assert(!_status && "xrResetBodyTrackingCalibrationMETA");
    return params.result;
}

XrResult WINAPI xrResultToString(XrInstance instance, XrResult value, char buffer[])
{
    struct xrResultToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    _status = UNIX_CALL(xrResultToString, &params);
    assert(!_status && "xrResultToString");
    return params.result;
}

XrResult WINAPI xrResumeSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA *resumeInfo)
{
    struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.resumeInfo = resumeInfo;
    _status = UNIX_CALL(xrResumeSimultaneousHandsAndControllersTrackingMETA, &params);
    assert(!_status && "xrResumeSimultaneousHandsAndControllersTrackingMETA");
    return params.result;
}

XrResult WINAPI xrRetrieveSpaceDiscoveryResultsMETA(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceDiscoveryResultsMETA *results)
{
    struct xrRetrieveSpaceDiscoveryResultsMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.requestId = requestId;
    params.results = results;
    _status = UNIX_CALL(xrRetrieveSpaceDiscoveryResultsMETA, &params);
    assert(!_status && "xrRetrieveSpaceDiscoveryResultsMETA");
    return params.result;
}

XrResult WINAPI xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results)
{
    struct xrRetrieveSpaceQueryResultsFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.requestId = requestId;
    params.results = results;
    _status = UNIX_CALL(xrRetrieveSpaceQueryResultsFB, &params);
    assert(!_status && "xrRetrieveSpaceQueryResultsFB");
    return params.result;
}

XrResult WINAPI xrSaveSpaceFB(XrSession session, const XrSpaceSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSaveSpaceFB, &params);
    assert(!_status && "xrSaveSpaceFB");
    return params.result;
}

XrResult WINAPI xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceListFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSaveSpaceListFB, &params);
    assert(!_status && "xrSaveSpaceListFB");
    return params.result;
}

XrResult WINAPI xrSaveSpacesMETA(XrSession session, const XrSpacesSaveInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpacesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSaveSpacesMETA, &params);
    assert(!_status && "xrSaveSpacesMETA");
    return params.result;
}

XrResult WINAPI xrSendVirtualKeyboardInputMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA *info, XrPosef *interactorRootPose)
{
    struct xrSendVirtualKeyboardInputMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.info = info;
    params.interactorRootPose = interactorRootPose;
    _status = UNIX_CALL(xrSendVirtualKeyboardInputMETA, &params);
    assert(!_status && "xrSendVirtualKeyboardInputMETA");
    return params.result;
}

XrResult WINAPI xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorSpace)
{
    struct xrSetColorSpaceFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.colorSpace = colorSpace;
    _status = UNIX_CALL(xrSetColorSpaceFB, &params);
    assert(!_status && "xrSetColorSpaceFB");
    return params.result;
}

XrResult WINAPI xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl)
{
    struct xrSetDigitalLensControlALMALENCE_params params;
    NTSTATUS _status;
    params.session = session;
    params.digitalLensControl = digitalLensControl;
    _status = UNIX_CALL(xrSetDigitalLensControlALMALENCE, &params);
    assert(!_status && "xrSetDigitalLensControlALMALENCE");
    return params.result;
}

XrResult WINAPI xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.enabled = enabled;
    _status = UNIX_CALL(xrSetEnvironmentDepthEstimationVARJO, &params);
    assert(!_status && "xrSetEnvironmentDepthEstimationVARJO");
    return params.result;
}

XrResult WINAPI xrSetEnvironmentDepthHandRemovalMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthHandRemovalSetInfoMETA *setInfo)
{
    struct xrSetEnvironmentDepthHandRemovalMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    params.setInfo = setInfo;
    _status = UNIX_CALL(xrSetEnvironmentDepthHandRemovalMETA, &params);
    assert(!_status && "xrSetEnvironmentDepthHandRemovalMETA");
    return params.result;
}

XrResult WINAPI xrSetFacialSimulationModeBD(XrFaceTrackerBD tracker, XrFacialSimulationModeBD mode)
{
    struct xrSetFacialSimulationModeBD_params params;
    NTSTATUS _status;
    params.tracker = tracker;
    params.mode = mode;
    _status = UNIX_CALL(xrSetFacialSimulationModeBD, &params);
    assert(!_status && "xrSetFacialSimulationModeBD");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    struct xrSetInputDeviceActiveEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.interactionProfile = interactionProfile;
    params.topLevelPath = topLevelPath;
    params.isActive = isActive;
    _status = UNIX_CALL(xrSetInputDeviceActiveEXT, &params);
    assert(!_status && "xrSetInputDeviceActiveEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    struct xrSetInputDeviceLocationEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.space = space;
    params.pose = pose;
    _status = UNIX_CALL(xrSetInputDeviceLocationEXT, &params);
    assert(!_status && "xrSetInputDeviceLocationEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state)
{
    struct xrSetInputDeviceStateBoolEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateBoolEXT, &params);
    assert(!_status && "xrSetInputDeviceStateBoolEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state)
{
    struct xrSetInputDeviceStateFloatEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateFloatEXT, &params);
    assert(!_status && "xrSetInputDeviceStateFloatEXT");
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state)
{
    struct xrSetInputDeviceStateVector2fEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    _status = UNIX_CALL(xrSetInputDeviceStateVector2fEXT, &params);
    assert(!_status && "xrSetInputDeviceStateVector2fEXT");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingPredictionVARJO(XrSession session, uint64_t markerId, XrBool32 enable)
{
    struct xrSetMarkerTrackingPredictionVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.enable = enable;
    _status = UNIX_CALL(xrSetMarkerTrackingPredictionVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingPredictionVARJO");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingTimeoutVARJO(XrSession session, uint64_t markerId, XrDuration timeout)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.markerId = markerId;
    params.timeout = timeout;
    _status = UNIX_CALL(xrSetMarkerTrackingTimeoutVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingTimeoutVARJO");
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetMarkerTrackingVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.enabled = enabled;
    _status = UNIX_CALL(xrSetMarkerTrackingVARJO, &params);
    assert(!_status && "xrSetMarkerTrackingVARJO");
    return params.result;
}

XrResult WINAPI xrSetPassthroughLayerMeshANDROID(XrPassthroughLayerANDROID layer, const XrPassthroughLayerMeshANDROID *mesh)
{
    struct xrSetPassthroughLayerMeshANDROID_params params;
    NTSTATUS _status;
    params.layer = layer;
    params.mesh = mesh;
    _status = UNIX_CALL(xrSetPassthroughLayerMeshANDROID, &params);
    assert(!_status && "xrSetPassthroughLayerMeshANDROID");
    return params.result;
}

XrResult WINAPI xrSetPerformanceMetricsStateANDROID(XrSession session, const XrPerformanceMetricsStateANDROID *state)
{
    struct xrSetPerformanceMetricsStateANDROID_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrSetPerformanceMetricsStateANDROID, &params);
    assert(!_status && "xrSetPerformanceMetricsStateANDROID");
    return params.result;
}

XrResult WINAPI xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state)
{
    struct xrSetPerformanceMetricsStateMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.state = state;
    _status = UNIX_CALL(xrSetPerformanceMetricsStateMETA, &params);
    assert(!_status && "xrSetPerformanceMetricsStateMETA");
    return params.result;
}

XrResult WINAPI xrSetSpaceComponentStatusFB(XrSpace space, const XrSpaceComponentStatusSetInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSetSpaceComponentStatusFB_params params;
    NTSTATUS _status;
    params.space = space;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrSetSpaceComponentStatusFB, &params);
    assert(!_status && "xrSetSpaceComponentStatusFB");
    return params.result;
}

XrResult WINAPI xrSetSystemNotificationsML(XrInstance instance, const XrSystemNotificationsSetInfoML *info)
{
    struct xrSetSystemNotificationsML_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.info = info;
    _status = UNIX_CALL(xrSetSystemNotificationsML, &params);
    assert(!_status && "xrSetSystemNotificationsML");
    return params.result;
}

XrResult WINAPI xrSetTilePropertiesHintMETA(XrSession session, const XrTilePropertiesHintMETA *properties)
{
    struct xrSetTilePropertiesHintMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.properties = properties;
    _status = UNIX_CALL(xrSetTilePropertiesHintMETA, &params);
    assert(!_status && "xrSetTilePropertiesHintMETA");
    return params.result;
}

XrResult WINAPI xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.hint = hint;
    _status = UNIX_CALL(xrSetTrackingOptimizationSettingsHintQCOM, &params);
    assert(!_status && "xrSetTrackingOptimizationSettingsHintQCOM");
    return params.result;
}

XrResult WINAPI xrSetViewOffsetVARJO(XrSession session, float offset)
{
    struct xrSetViewOffsetVARJO_params params;
    NTSTATUS _status;
    params.session = session;
    params.offset = offset;
    _status = UNIX_CALL(xrSetViewOffsetVARJO, &params);
    assert(!_status && "xrSetViewOffsetVARJO");
    return params.result;
}

XrResult WINAPI xrSetVirtualKeyboardModelVisibilityMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.modelVisibility = modelVisibility;
    _status = UNIX_CALL(xrSetVirtualKeyboardModelVisibilityMETA, &params);
    assert(!_status && "xrSetVirtualKeyboardModelVisibilityMETA");
    return params.result;
}

XrResult WINAPI xrShareSpacesFB(XrSession session, const XrSpaceShareInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrShareSpacesFB_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrShareSpacesFB, &params);
    assert(!_status && "xrShareSpacesFB");
    return params.result;
}

XrResult WINAPI xrShareSpacesMETA(XrSession session, const XrShareSpacesInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrShareSpacesMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrShareSpacesMETA, &params);
    assert(!_status && "xrShareSpacesMETA");
    return params.result;
}

XrResult WINAPI xrShareSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorShareInfoBD *info, XrFutureEXT *future)
{
    struct xrShareSpatialAnchorAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrShareSpatialAnchorAsyncBD, &params);
    assert(!_status && "xrShareSpatialAnchorAsyncBD");
    return params.result;
}

XrResult WINAPI xrShareSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrShareSpatialAnchorCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrShareSpatialAnchorCompleteBD, &params);
    assert(!_status && "xrShareSpatialAnchorCompleteBD");
    return params.result;
}

XrResult WINAPI xrSnapshotMarkerDetectorML(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML *snapshotInfo)
{
    struct xrSnapshotMarkerDetectorML_params params;
    NTSTATUS _status;
    params.markerDetector = markerDetector;
    params.snapshotInfo = snapshotInfo;
    _status = UNIX_CALL(xrSnapshotMarkerDetectorML, &params);
    assert(!_status && "xrSnapshotMarkerDetectorML");
    return params.result;
}

XrResult WINAPI xrStartColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStartInfoMETA *info, XrAsyncRequestIdFB *advertisementRequestId)
{
    struct xrStartColocationAdvertisementMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.advertisementRequestId = advertisementRequestId;
    _status = UNIX_CALL(xrStartColocationAdvertisementMETA, &params);
    assert(!_status && "xrStartColocationAdvertisementMETA");
    return params.result;
}

XrResult WINAPI xrStartColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStartInfoMETA *info, XrAsyncRequestIdFB *discoveryRequestId)
{
    struct xrStartColocationDiscoveryMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.discoveryRequestId = discoveryRequestId;
    _status = UNIX_CALL(xrStartColocationDiscoveryMETA, &params);
    assert(!_status && "xrStartColocationDiscoveryMETA");
    return params.result;
}

XrResult WINAPI xrStartEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrStartEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrStartEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrStartEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrStartSenseDataProviderAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataProviderStartInfoBD *startInfo, XrFutureEXT *future)
{
    struct xrStartSenseDataProviderAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.startInfo = startInfo;
    params.future = future;
    _status = UNIX_CALL(xrStartSenseDataProviderAsyncBD, &params);
    assert(!_status && "xrStartSenseDataProviderAsyncBD");
    return params.result;
}

XrResult WINAPI xrStartSenseDataProviderCompleteBD(XrSession session, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrStartSenseDataProviderCompleteBD_params params;
    NTSTATUS _status;
    params.session = session;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrStartSenseDataProviderCompleteBD, &params);
    assert(!_status && "xrStartSenseDataProviderCompleteBD");
    return params.result;
}

XrResult WINAPI xrStopColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStopInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrStopColocationAdvertisementMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrStopColocationAdvertisementMETA, &params);
    assert(!_status && "xrStopColocationAdvertisementMETA");
    return params.result;
}

XrResult WINAPI xrStopColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStopInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrStopColocationDiscoveryMETA_params params;
    NTSTATUS _status;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    _status = UNIX_CALL(xrStopColocationDiscoveryMETA, &params);
    assert(!_status && "xrStopColocationDiscoveryMETA");
    return params.result;
}

XrResult WINAPI xrStopEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider)
{
    struct xrStopEnvironmentDepthProviderMETA_params params;
    NTSTATUS _status;
    params.environmentDepthProvider = environmentDepthProvider;
    _status = UNIX_CALL(xrStopEnvironmentDepthProviderMETA, &params);
    assert(!_status && "xrStopEnvironmentDepthProviderMETA");
    return params.result;
}

XrResult WINAPI xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo)
{
    struct xrStopHapticFeedback_params params;
    NTSTATUS _status;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    _status = UNIX_CALL(xrStopHapticFeedback, &params);
    assert(!_status && "xrStopHapticFeedback");
    return params.result;
}

XrResult WINAPI xrStopSenseDataProviderBD(XrSenseDataProviderBD provider)
{
    struct xrStopSenseDataProviderBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    _status = UNIX_CALL(xrStopSenseDataProviderBD, &params);
    assert(!_status && "xrStopSenseDataProviderBD");
    return params.result;
}

XrResult WINAPI xrStringToPath(XrInstance instance, const char *pathString, XrPath *path)
{
    struct xrStringToPath_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.pathString = pathString;
    params.path = path;
    _status = UNIX_CALL(xrStringToPath, &params);
    assert(!_status && "xrStringToPath");
    return params.result;
}

XrResult WINAPI xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[])
{
    struct xrStructureTypeToString_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    _status = UNIX_CALL(xrStructureTypeToString, &params);
    assert(!_status && "xrStructureTypeToString");
    return params.result;
}

XrResult WINAPI xrStructureTypeToString2KHR(XrInstance instance, XrStructureType value, char buffer[])
{
    struct xrStructureTypeToString2KHR_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    _status = UNIX_CALL(xrStructureTypeToString2KHR, &params);
    assert(!_status && "xrStructureTypeToString2KHR");
    return params.result;
}

XrResult WINAPI xrSubmitSoundFieldBufferBD(XrSoundFieldBD soundField, const XrAudioBufferBD *buffer)
{
    struct xrSubmitSoundFieldBufferBD_params params;
    NTSTATUS _status;
    params.soundField = soundField;
    params.buffer = buffer;
    _status = UNIX_CALL(xrSubmitSoundFieldBufferBD, &params);
    assert(!_status && "xrSubmitSoundFieldBufferBD");
    return params.result;
}

XrResult WINAPI xrSubmitSoundObjectBufferBD(XrSoundObjectBD soundObject, const XrAudioBufferBD *buffer)
{
    struct xrSubmitSoundObjectBufferBD_params params;
    NTSTATUS _status;
    params.soundObject = soundObject;
    params.buffer = buffer;
    _status = UNIX_CALL(xrSubmitSoundObjectBufferBD, &params);
    assert(!_status && "xrSubmitSoundObjectBufferBD");
    return params.result;
}

XrResult WINAPI xrSuggestBodyTrackingCalibrationOverrideMETA(XrBodyTrackerFB bodyTracker, const XrBodyTrackingCalibrationInfoMETA *calibrationInfo)
{
    struct xrSuggestBodyTrackingCalibrationOverrideMETA_params params;
    NTSTATUS _status;
    params.bodyTracker = bodyTracker;
    params.calibrationInfo = calibrationInfo;
    _status = UNIX_CALL(xrSuggestBodyTrackingCalibrationOverrideMETA, &params);
    assert(!_status && "xrSuggestBodyTrackingCalibrationOverrideMETA");
    return params.result;
}

XrResult WINAPI xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings)
{
    struct xrSuggestInteractionProfileBindings_params params;
    NTSTATUS _status;
    params.instance = instance;
    params.suggestedBindings = suggestedBindings;
    _status = UNIX_CALL(xrSuggestInteractionProfileBindings, &params);
    assert(!_status && "xrSuggestInteractionProfileBindings");
    return params.result;
}

XrResult WINAPI xrSuggestVirtualKeyboardLocationMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA *locationInfo)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params params;
    NTSTATUS _status;
    params.keyboard = keyboard;
    params.locationInfo = locationInfo;
    _status = UNIX_CALL(xrSuggestVirtualKeyboardLocationMETA, &params);
    assert(!_status && "xrSuggestVirtualKeyboardLocationMETA");
    return params.result;
}

XrResult WINAPI xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo)
{
    struct xrSyncActions_params params;
    NTSTATUS _status;
    params.session = session;
    params.syncInfo = syncInfo;
    _status = UNIX_CALL(xrSyncActions, &params);
    assert(!_status && "xrSyncActions");
    return params.result;
}

XrResult WINAPI xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope)
{
    struct xrThermalGetTemperatureTrendEXT_params params;
    NTSTATUS _status;
    params.session = session;
    params.domain = domain;
    params.notificationLevel = notificationLevel;
    params.tempHeadroom = tempHeadroom;
    params.tempSlope = tempSlope;
    _status = UNIX_CALL(xrThermalGetTemperatureTrendEXT, &params);
    assert(!_status && "xrThermalGetTemperatureTrendEXT");
    return params.result;
}

XrResult WINAPI xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh)
{
    struct xrTriangleMeshBeginUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrTriangleMeshBeginUpdateFB, &params);
    assert(!_status && "xrTriangleMeshBeginUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t *outVertexCount)
{
    struct xrTriangleMeshBeginVertexBufferUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outVertexCount = outVertexCount;
    _status = UNIX_CALL(xrTriangleMeshBeginVertexBufferUpdateFB, &params);
    assert(!_status && "xrTriangleMeshBeginVertexBufferUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount)
{
    struct xrTriangleMeshEndUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.vertexCount = vertexCount;
    params.triangleCount = triangleCount;
    _status = UNIX_CALL(xrTriangleMeshEndUpdateFB, &params);
    assert(!_status && "xrTriangleMeshEndUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh)
{
    struct xrTriangleMeshEndVertexBufferUpdateFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    _status = UNIX_CALL(xrTriangleMeshEndVertexBufferUpdateFB, &params);
    assert(!_status && "xrTriangleMeshEndVertexBufferUpdateFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t **outIndexBuffer)
{
    struct xrTriangleMeshGetIndexBufferFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outIndexBuffer = outIndexBuffer;
    _status = UNIX_CALL(xrTriangleMeshGetIndexBufferFB, &params);
    assert(!_status && "xrTriangleMeshGetIndexBufferFB");
    return params.result;
}

XrResult WINAPI xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f **outVertexBuffer)
{
    struct xrTriangleMeshGetVertexBufferFB_params params;
    NTSTATUS _status;
    params.mesh = mesh;
    params.outVertexBuffer = outVertexBuffer;
    _status = UNIX_CALL(xrTriangleMeshGetVertexBufferFB, &params);
    assert(!_status && "xrTriangleMeshGetVertexBufferFB");
    return params.result;
}

XrResult WINAPI xrTryCreateSpatialGraphStaticNodeBindingMSFT(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo, XrSpatialGraphNodeBindingMSFT *nodeBinding)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params params;
    NTSTATUS _status;
    params.session = session;
    params.createInfo = createInfo;
    params.nodeBinding = nodeBinding;
    _status = UNIX_CALL(xrTryCreateSpatialGraphStaticNodeBindingMSFT, &params);
    assert(!_status && "xrTryCreateSpatialGraphStaticNodeBindingMSFT");
    return params.result;
}

XrResult WINAPI xrUnpersistAnchorANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrUuidEXT *anchorId)
{
    struct xrUnpersistAnchorANDROID_params params;
    NTSTATUS _status;
    params.handle = handle;
    params.anchorId = anchorId;
    _status = UNIX_CALL(xrUnpersistAnchorANDROID, &params);
    assert(!_status && "xrUnpersistAnchorANDROID");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorUnpersistInfoBD *info, XrFutureEXT *future)
{
    struct xrUnpersistSpatialAnchorAsyncBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.info = info;
    params.future = future;
    _status = UNIX_CALL(xrUnpersistSpatialAnchorAsyncBD, &params);
    assert(!_status && "xrUnpersistSpatialAnchorAsyncBD");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrUnpersistSpatialAnchorCompleteBD_params params;
    NTSTATUS _status;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrUnpersistSpatialAnchorCompleteBD, &params);
    assert(!_status && "xrUnpersistSpatialAnchorCompleteBD");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName)
{
    struct xrUnpersistSpatialAnchorMSFT_params params;
    NTSTATUS _status;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceName = spatialAnchorPersistenceName;
    _status = UNIX_CALL(xrUnpersistSpatialAnchorMSFT, &params);
    assert(!_status && "xrUnpersistSpatialAnchorMSFT");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialEntityAsyncEXT(XrSpatialPersistenceContextEXT persistenceContext, const XrSpatialEntityUnpersistInfoEXT *unpersistInfo, XrFutureEXT *future)
{
    struct xrUnpersistSpatialEntityAsyncEXT_params params;
    NTSTATUS _status;
    params.persistenceContext = persistenceContext;
    params.unpersistInfo = unpersistInfo;
    params.future = future;
    _status = UNIX_CALL(xrUnpersistSpatialEntityAsyncEXT, &params);
    assert(!_status && "xrUnpersistSpatialEntityAsyncEXT");
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialEntityCompleteEXT(XrSpatialPersistenceContextEXT persistenceContext, XrFutureEXT future, XrUnpersistSpatialEntityCompletionEXT *completion)
{
    struct xrUnpersistSpatialEntityCompleteEXT_params params;
    NTSTATUS _status;
    params.persistenceContext = persistenceContext;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrUnpersistSpatialEntityCompleteEXT, &params);
    assert(!_status && "xrUnpersistSpatialEntityCompleteEXT");
    return params.result;
}

XrResult WINAPI xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh)
{
    struct xrUpdateHandMeshMSFT_params params;
    NTSTATUS _status;
    params.handTracker = handTracker;
    params.updateInfo = updateInfo;
    params.handMesh = handMesh;
    _status = UNIX_CALL(xrUpdateHandMeshMSFT, &params);
    assert(!_status && "xrUpdateHandMeshMSFT");
    return params.result;
}

XrResult WINAPI xrUpdatePassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA *updateInfo)
{
    struct xrUpdatePassthroughColorLutMETA_params params;
    NTSTATUS _status;
    params.colorLut = colorLut;
    params.updateInfo = updateInfo;
    _status = UNIX_CALL(xrUpdatePassthroughColorLutMETA, &params);
    assert(!_status && "xrUpdatePassthroughColorLutMETA");
    return params.result;
}

XrResult WINAPI xrUpdateSoundFieldConfigBD(XrSoundFieldBD soundField, const XrSoundFieldConfigBD *config, XrSoundFieldFlagsBD flags)
{
    struct xrUpdateSoundFieldConfigBD_params params;
    NTSTATUS _status;
    params.soundField = soundField;
    params.config = config;
    params.flags = flags;
    _status = UNIX_CALL(xrUpdateSoundFieldConfigBD, &params);
    assert(!_status && "xrUpdateSoundFieldConfigBD");
    return params.result;
}

XrResult WINAPI xrUpdateSoundObjectConfigBD(XrSoundObjectBD soundObject, const XrSoundObjectConfigBD *config, XrSoundObjectFlagsBD flags)
{
    struct xrUpdateSoundObjectConfigBD_params params;
    NTSTATUS _status;
    params.soundObject = soundObject;
    params.config = config;
    params.flags = flags;
    _status = UNIX_CALL(xrUpdateSoundObjectConfigBD, &params);
    assert(!_status && "xrUpdateSoundObjectConfigBD");
    return params.result;
}

XrResult WINAPI xrUpdateSoundObstacleConfigBD(XrSoundObstacleBD soundObstacle, const XrSoundObstacleConfigBD *config, const XrSoundTriangleMeshBD *mesh, XrSoundObstacleFlagsBD flags)
{
    struct xrUpdateSoundObstacleConfigBD_params params;
    NTSTATUS _status;
    params.soundObstacle = soundObstacle;
    params.config = config;
    params.mesh = mesh;
    params.flags = flags;
    _status = UNIX_CALL(xrUpdateSoundObstacleConfigBD, &params);
    assert(!_status && "xrUpdateSoundObstacleConfigBD");
    return params.result;
}

XrResult WINAPI xrUpdateSoundObstacleMaterialConfigBD(XrSoundObstacleMaterialBD material, const XrSoundObstacleMaterialConfigBD *config)
{
    struct xrUpdateSoundObstacleMaterialConfigBD_params params;
    NTSTATUS _status;
    params.material = material;
    params.config = config;
    _status = UNIX_CALL(xrUpdateSoundObstacleMaterialConfigBD, &params);
    assert(!_status && "xrUpdateSoundObstacleMaterialConfigBD");
    return params.result;
}

XrResult WINAPI xrUpdateSpatialAnchorsExpirationAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsUpdateExpirationInfoML *updateInfo, XrFutureEXT *future)
{
    struct xrUpdateSpatialAnchorsExpirationAsyncML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.updateInfo = updateInfo;
    params.future = future;
    _status = UNIX_CALL(xrUpdateSpatialAnchorsExpirationAsyncML, &params);
    assert(!_status && "xrUpdateSpatialAnchorsExpirationAsyncML");
    return params.result;
}

XrResult WINAPI xrUpdateSpatialAnchorsExpirationCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsUpdateExpirationCompletionML *completion)
{
    struct xrUpdateSpatialAnchorsExpirationCompleteML_params params;
    NTSTATUS _status;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    _status = UNIX_CALL(xrUpdateSpatialAnchorsExpirationCompleteML, &params);
    assert(!_status && "xrUpdateSpatialAnchorsExpirationCompleteML");
    return params.result;
}

XrResult WINAPI xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state)
{
    struct xrUpdateSwapchainFB_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.state = state;
    _status = UNIX_CALL(xrUpdateSwapchainFB, &params);
    assert(!_status && "xrUpdateSwapchainFB");
    return params.result;
}

XrResult WINAPI xrWaitAudioPeriodBD(XrSpatialAudioRendererBD renderer, XrDuration timeout)
{
    struct xrWaitAudioPeriodBD_params params;
    NTSTATUS _status;
    params.renderer = renderer;
    params.timeout = timeout;
    _status = UNIX_CALL(xrWaitAudioPeriodBD, &params);
    assert(!_status && "xrWaitAudioPeriodBD");
    return params.result;
}

XrResult WINAPI xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState)
{
    struct xrWaitFrame_params params;
    NTSTATUS _status;
    params.session = session;
    params.frameWaitInfo = frameWaitInfo;
    params.frameState = frameState;
    _status = UNIX_CALL(xrWaitFrame, &params);
    assert(!_status && "xrWaitFrame");
    return params.result;
}

XrResult WINAPI xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo)
{
    struct xrWaitSwapchainImage_params params;
    NTSTATUS _status;
    params.swapchain = swapchain;
    params.waitInfo = waitInfo;
    _status = UNIX_CALL(xrWaitSwapchainImage, &params);
    assert(!_status && "xrWaitSwapchainImage");
    return params.result;
}

static const struct openxr_func xr_instance_dispatch_table[] =
{
    {"xrAcquireEnvironmentDepthImageMETA", xrAcquireEnvironmentDepthImageMETA},
    {"xrAcquireSwapchainImage", xrAcquireSwapchainImage},
    {"xrAddTrackableImageDatabaseANDROID", xrAddTrackableImageDatabaseANDROID},
    {"xrAllocateWorldMeshBufferML", xrAllocateWorldMeshBufferML},
    {"xrApplyForceFeedbackCurlMNDX", xrApplyForceFeedbackCurlMNDX},
    {"xrApplyHapticFeedback", xrApplyHapticFeedback},
    {"xrAttachSessionActionSets", xrAttachSessionActionSets},
    {"xrBeginFrame", xrBeginFrame},
    {"xrBeginPlaneDetectionEXT", xrBeginPlaneDetectionEXT},
    {"xrBeginSession", xrBeginSession},
    {"xrCancelFutureEXT", xrCancelFutureEXT},
    {"xrCaptureSceneAsyncBD", xrCaptureSceneAsyncBD},
    {"xrCaptureSceneCompleteBD", xrCaptureSceneCompleteBD},
    {"xrChangeVirtualKeyboardTextContextMETA", xrChangeVirtualKeyboardTextContextMETA},
    {"xrClearSpatialAnchorStoreMSFT", xrClearSpatialAnchorStoreMSFT},
    {"xrComputeNewSceneMSFT", xrComputeNewSceneMSFT},
    {"xrConvertTimeToWin32PerformanceCounterKHR", xrConvertTimeToWin32PerformanceCounterKHR},
    {"xrConvertWin32PerformanceCounterToTimeKHR", xrConvertWin32PerformanceCounterToTimeKHR},
    {"xrCreateAction", xrCreateAction},
    {"xrCreateActionSet", xrCreateActionSet},
    {"xrCreateActionSpace", xrCreateActionSpace},
    {"xrCreateAnchorSpaceANDROID", xrCreateAnchorSpaceANDROID},
    {"xrCreateAnchorSpaceBD", xrCreateAnchorSpaceBD},
    {"xrCreateApiLayerInstance", xrCreateApiLayerInstance},
    {"xrCreateBodyTrackerBD", xrCreateBodyTrackerBD},
    {"xrCreateBodyTrackerFB", xrCreateBodyTrackerFB},
    {"xrCreateBodyTrackerHTC", xrCreateBodyTrackerHTC},
    {"xrCreateDeviceAnchorPersistenceANDROID", xrCreateDeviceAnchorPersistenceANDROID},
    {"xrCreateEnvironmentDepthProviderMETA", xrCreateEnvironmentDepthProviderMETA},
    {"xrCreateEnvironmentDepthSwapchainMETA", xrCreateEnvironmentDepthSwapchainMETA},
    {"xrCreateEnvironmentRaycasterAsyncMETA", xrCreateEnvironmentRaycasterAsyncMETA},
    {"xrCreateEnvironmentRaycasterCompleteMETA", xrCreateEnvironmentRaycasterCompleteMETA},
    {"xrCreateExportedLocalizationMapML", xrCreateExportedLocalizationMapML},
    {"xrCreateEyeTrackerFB", xrCreateEyeTrackerFB},
    {"xrCreateFaceTracker2FB", xrCreateFaceTracker2FB},
    {"xrCreateFaceTrackerANDROID", xrCreateFaceTrackerANDROID},
    {"xrCreateFaceTrackerBD", xrCreateFaceTrackerBD},
    {"xrCreateFaceTrackerFB", xrCreateFaceTrackerFB},
    {"xrCreateFacialExpressionClientML", xrCreateFacialExpressionClientML},
    {"xrCreateFacialTrackerHTC", xrCreateFacialTrackerHTC},
    {"xrCreateFoveationProfileFB", xrCreateFoveationProfileFB},
    {"xrCreateGeometryInstanceFB", xrCreateGeometryInstanceFB},
    {"xrCreateHandMeshSpaceMSFT", xrCreateHandMeshSpaceMSFT},
    {"xrCreateHandTrackerEXT", xrCreateHandTrackerEXT},
    {"xrCreateInstance", xrCreateInstance},
    {"xrCreateKeyboardSpaceFB", xrCreateKeyboardSpaceFB},
    {"xrCreateMarkerDetectorML", xrCreateMarkerDetectorML},
    {"xrCreateMarkerSpaceML", xrCreateMarkerSpaceML},
    {"xrCreateMarkerSpaceVARJO", xrCreateMarkerSpaceVARJO},
    {"xrCreatePassthroughColorLutMETA", xrCreatePassthroughColorLutMETA},
    {"xrCreatePassthroughFB", xrCreatePassthroughFB},
    {"xrCreatePassthroughHTC", xrCreatePassthroughHTC},
    {"xrCreatePassthroughLayerANDROID", xrCreatePassthroughLayerANDROID},
    {"xrCreatePassthroughLayerFB", xrCreatePassthroughLayerFB},
    {"xrCreatePersistedAnchorSpaceANDROID", xrCreatePersistedAnchorSpaceANDROID},
    {"xrCreatePlaneDetectorEXT", xrCreatePlaneDetectorEXT},
    {"xrCreateReferenceSpace", xrCreateReferenceSpace},
    {"xrCreateRenderModelAssetEXT", xrCreateRenderModelAssetEXT},
    {"xrCreateRenderModelEXT", xrCreateRenderModelEXT},
    {"xrCreateRenderModelSpaceEXT", xrCreateRenderModelSpaceEXT},
    {"xrCreateSceneMSFT", xrCreateSceneMSFT},
    {"xrCreateSceneMeshSnapshotANDROID", xrCreateSceneMeshSnapshotANDROID},
    {"xrCreateSceneMeshingTrackerANDROID", xrCreateSceneMeshingTrackerANDROID},
    {"xrCreateSceneObserverMSFT", xrCreateSceneObserverMSFT},
    {"xrCreateSenseDataProviderBD", xrCreateSenseDataProviderBD},
    {"xrCreateSession", xrCreateSession},
    {"xrCreateSoundFieldBD", xrCreateSoundFieldBD},
    {"xrCreateSoundObjectBD", xrCreateSoundObjectBD},
    {"xrCreateSoundObstacleBD", xrCreateSoundObstacleBD},
    {"xrCreateSoundObstacleMaterialBD", xrCreateSoundObstacleMaterialBD},
    {"xrCreateSpaceUserFB", xrCreateSpaceUserFB},
    {"xrCreateSpatialAnchorAsyncBD", xrCreateSpatialAnchorAsyncBD},
    {"xrCreateSpatialAnchorCompleteBD", xrCreateSpatialAnchorCompleteBD},
    {"xrCreateSpatialAnchorEXT", xrCreateSpatialAnchorEXT},
    {"xrCreateSpatialAnchorFB", xrCreateSpatialAnchorFB},
    {"xrCreateSpatialAnchorFromPersistedNameMSFT", xrCreateSpatialAnchorFromPersistedNameMSFT},
    {"xrCreateSpatialAnchorHTC", xrCreateSpatialAnchorHTC},
    {"xrCreateSpatialAnchorMSFT", xrCreateSpatialAnchorMSFT},
    {"xrCreateSpatialAnchorSpaceANDROID", xrCreateSpatialAnchorSpaceANDROID},
    {"xrCreateSpatialAnchorSpaceFromIdANDROID", xrCreateSpatialAnchorSpaceFromIdANDROID},
    {"xrCreateSpatialAnchorSpaceMSFT", xrCreateSpatialAnchorSpaceMSFT},
    {"xrCreateSpatialAnchorStoreConnectionMSFT", xrCreateSpatialAnchorStoreConnectionMSFT},
    {"xrCreateSpatialAnchorsAsyncML", xrCreateSpatialAnchorsAsyncML},
    {"xrCreateSpatialAnchorsCompleteML", xrCreateSpatialAnchorsCompleteML},
    {"xrCreateSpatialAnchorsStorageML", xrCreateSpatialAnchorsStorageML},
    {"xrCreateSpatialAudioRendererBD", xrCreateSpatialAudioRendererBD},
    {"xrCreateSpatialContextAsyncEXT", xrCreateSpatialContextAsyncEXT},
    {"xrCreateSpatialContextCompleteEXT", xrCreateSpatialContextCompleteEXT},
    {"xrCreateSpatialDiscoverySnapshotAsyncEXT", xrCreateSpatialDiscoverySnapshotAsyncEXT},
    {"xrCreateSpatialDiscoverySnapshotCompleteEXT", xrCreateSpatialDiscoverySnapshotCompleteEXT},
    {"xrCreateSpatialEntityAnchorBD", xrCreateSpatialEntityAnchorBD},
    {"xrCreateSpatialEntityFromIdEXT", xrCreateSpatialEntityFromIdEXT},
    {"xrCreateSpatialGraphNodeSpaceMSFT", xrCreateSpatialGraphNodeSpaceMSFT},
    {"xrCreateSpatialPersistenceContextAsyncEXT", xrCreateSpatialPersistenceContextAsyncEXT},
    {"xrCreateSpatialPersistenceContextCompleteEXT", xrCreateSpatialPersistenceContextCompleteEXT},
    {"xrCreateSpatialRaycastSnapshotANDROID", xrCreateSpatialRaycastSnapshotANDROID},
    {"xrCreateSpatialUpdateSnapshotEXT", xrCreateSpatialUpdateSnapshotEXT},
    {"xrCreateSwapchain", xrCreateSwapchain},
    {"xrCreateTrackableImageDatabaseAsyncANDROID", xrCreateTrackableImageDatabaseAsyncANDROID},
    {"xrCreateTrackableImageDatabaseCompleteANDROID", xrCreateTrackableImageDatabaseCompleteANDROID},
    {"xrCreateTrackableTrackerANDROID", xrCreateTrackableTrackerANDROID},
    {"xrCreateTriangleMeshFB", xrCreateTriangleMeshFB},
    {"xrCreateVirtualKeyboardMETA", xrCreateVirtualKeyboardMETA},
    {"xrCreateVirtualKeyboardSpaceMETA", xrCreateVirtualKeyboardSpaceMETA},
    {"xrCreateVulkanDeviceKHR", xrCreateVulkanDeviceKHR},
    {"xrCreateVulkanInstanceKHR", xrCreateVulkanInstanceKHR},
    {"xrCreateWorldMeshDetectorML", xrCreateWorldMeshDetectorML},
    {"xrDeleteSpatialAnchorsAsyncML", xrDeleteSpatialAnchorsAsyncML},
    {"xrDeleteSpatialAnchorsCompleteML", xrDeleteSpatialAnchorsCompleteML},
    {"xrDeserializeSceneMSFT", xrDeserializeSceneMSFT},
    {"xrDestroyAction", xrDestroyAction},
    {"xrDestroyActionSet", xrDestroyActionSet},
    {"xrDestroyAnchorBD", xrDestroyAnchorBD},
    {"xrDestroyBodyTrackerBD", xrDestroyBodyTrackerBD},
    {"xrDestroyBodyTrackerFB", xrDestroyBodyTrackerFB},
    {"xrDestroyBodyTrackerHTC", xrDestroyBodyTrackerHTC},
    {"xrDestroyDeviceAnchorPersistenceANDROID", xrDestroyDeviceAnchorPersistenceANDROID},
    {"xrDestroyEnvironmentDepthProviderMETA", xrDestroyEnvironmentDepthProviderMETA},
    {"xrDestroyEnvironmentDepthSwapchainMETA", xrDestroyEnvironmentDepthSwapchainMETA},
    {"xrDestroyEnvironmentRaycasterMETA", xrDestroyEnvironmentRaycasterMETA},
    {"xrDestroyExportedLocalizationMapML", xrDestroyExportedLocalizationMapML},
    {"xrDestroyEyeTrackerFB", xrDestroyEyeTrackerFB},
    {"xrDestroyFaceTracker2FB", xrDestroyFaceTracker2FB},
    {"xrDestroyFaceTrackerANDROID", xrDestroyFaceTrackerANDROID},
    {"xrDestroyFaceTrackerBD", xrDestroyFaceTrackerBD},
    {"xrDestroyFaceTrackerFB", xrDestroyFaceTrackerFB},
    {"xrDestroyFacialExpressionClientML", xrDestroyFacialExpressionClientML},
    {"xrDestroyFacialTrackerHTC", xrDestroyFacialTrackerHTC},
    {"xrDestroyFoveationProfileFB", xrDestroyFoveationProfileFB},
    {"xrDestroyGeometryInstanceFB", xrDestroyGeometryInstanceFB},
    {"xrDestroyHandTrackerEXT", xrDestroyHandTrackerEXT},
    {"xrDestroyInstance", xrDestroyInstance},
    {"xrDestroyMarkerDetectorML", xrDestroyMarkerDetectorML},
    {"xrDestroyPassthroughColorLutMETA", xrDestroyPassthroughColorLutMETA},
    {"xrDestroyPassthroughFB", xrDestroyPassthroughFB},
    {"xrDestroyPassthroughHTC", xrDestroyPassthroughHTC},
    {"xrDestroyPassthroughLayerANDROID", xrDestroyPassthroughLayerANDROID},
    {"xrDestroyPassthroughLayerFB", xrDestroyPassthroughLayerFB},
    {"xrDestroyPlaneDetectorEXT", xrDestroyPlaneDetectorEXT},
    {"xrDestroyRenderModelAssetEXT", xrDestroyRenderModelAssetEXT},
    {"xrDestroyRenderModelEXT", xrDestroyRenderModelEXT},
    {"xrDestroySceneMSFT", xrDestroySceneMSFT},
    {"xrDestroySceneMeshSnapshotANDROID", xrDestroySceneMeshSnapshotANDROID},
    {"xrDestroySceneMeshingTrackerANDROID", xrDestroySceneMeshingTrackerANDROID},
    {"xrDestroySceneObserverMSFT", xrDestroySceneObserverMSFT},
    {"xrDestroySenseDataProviderBD", xrDestroySenseDataProviderBD},
    {"xrDestroySenseDataSnapshotBD", xrDestroySenseDataSnapshotBD},
    {"xrDestroySession", xrDestroySession},
    {"xrDestroySoundFieldBD", xrDestroySoundFieldBD},
    {"xrDestroySoundObjectBD", xrDestroySoundObjectBD},
    {"xrDestroySoundObstacleBD", xrDestroySoundObstacleBD},
    {"xrDestroySoundObstacleMaterialBD", xrDestroySoundObstacleMaterialBD},
    {"xrDestroySpace", xrDestroySpace},
    {"xrDestroySpaceUserFB", xrDestroySpaceUserFB},
    {"xrDestroySpatialAnchorMSFT", xrDestroySpatialAnchorMSFT},
    {"xrDestroySpatialAnchorStoreConnectionMSFT", xrDestroySpatialAnchorStoreConnectionMSFT},
    {"xrDestroySpatialAnchorsStorageML", xrDestroySpatialAnchorsStorageML},
    {"xrDestroySpatialAudioRendererBD", xrDestroySpatialAudioRendererBD},
    {"xrDestroySpatialContextEXT", xrDestroySpatialContextEXT},
    {"xrDestroySpatialEntityEXT", xrDestroySpatialEntityEXT},
    {"xrDestroySpatialGraphNodeBindingMSFT", xrDestroySpatialGraphNodeBindingMSFT},
    {"xrDestroySpatialPersistenceContextEXT", xrDestroySpatialPersistenceContextEXT},
    {"xrDestroySpatialSnapshotEXT", xrDestroySpatialSnapshotEXT},
    {"xrDestroySwapchain", xrDestroySwapchain},
    {"xrDestroyTrackableImageDatabaseANDROID", xrDestroyTrackableImageDatabaseANDROID},
    {"xrDestroyTrackableTrackerANDROID", xrDestroyTrackableTrackerANDROID},
    {"xrDestroyTriangleMeshFB", xrDestroyTriangleMeshFB},
    {"xrDestroyVirtualKeyboardMETA", xrDestroyVirtualKeyboardMETA},
    {"xrDestroyWorldMeshDetectorML", xrDestroyWorldMeshDetectorML},
    {"xrDiscoverSpacesMETA", xrDiscoverSpacesMETA},
    {"xrDownloadSharedSpatialAnchorAsyncBD", xrDownloadSharedSpatialAnchorAsyncBD},
    {"xrDownloadSharedSpatialAnchorCompleteBD", xrDownloadSharedSpatialAnchorCompleteBD},
    {"xrEnableLocalizationEventsML", xrEnableLocalizationEventsML},
    {"xrEnableUserCalibrationEventsML", xrEnableUserCalibrationEventsML},
    {"xrEndAudioPeriodBD", xrEndAudioPeriodBD},
    {"xrEndFrame", xrEndFrame},
    {"xrEndSession", xrEndSession},
    {"xrEnumerateApiLayerProperties", xrEnumerateApiLayerProperties},
    {"xrEnumerateBoundSourcesForAction", xrEnumerateBoundSourcesForAction},
    {"xrEnumerateColorSpacesFB", xrEnumerateColorSpacesFB},
    {"xrEnumerateDisplayRefreshRatesFB", xrEnumerateDisplayRefreshRatesFB},
    {"xrEnumerateEnvironmentBlendModes", xrEnumerateEnvironmentBlendModes},
    {"xrEnumerateEnvironmentDepthSwapchainImagesMETA", xrEnumerateEnvironmentDepthSwapchainImagesMETA},
    {"xrEnumerateExternalCamerasOCULUS", xrEnumerateExternalCamerasOCULUS},
    {"xrEnumerateFacialSimulationModesBD", xrEnumerateFacialSimulationModesBD},
    {"xrEnumerateInstanceExtensionProperties", xrEnumerateInstanceExtensionProperties},
    {"xrEnumerateInteractionRenderModelIdsEXT", xrEnumerateInteractionRenderModelIdsEXT},
    {"xrEnumeratePerformanceMetricsCounterPathsANDROID", xrEnumeratePerformanceMetricsCounterPathsANDROID},
    {"xrEnumeratePerformanceMetricsCounterPathsMETA", xrEnumeratePerformanceMetricsCounterPathsMETA},
    {"xrEnumeratePersistedAnchorsANDROID", xrEnumeratePersistedAnchorsANDROID},
    {"xrEnumeratePersistedSpatialAnchorNamesMSFT", xrEnumeratePersistedSpatialAnchorNamesMSFT},
    {"xrEnumerateRaycastSupportedTrackableTypesANDROID", xrEnumerateRaycastSupportedTrackableTypesANDROID},
    {"xrEnumerateReferenceSpaces", xrEnumerateReferenceSpaces},
    {"xrEnumerateRenderModelPathsFB", xrEnumerateRenderModelPathsFB},
    {"xrEnumerateRenderModelSubactionPathsEXT", xrEnumerateRenderModelSubactionPathsEXT},
    {"xrEnumerateReprojectionModesMSFT", xrEnumerateReprojectionModesMSFT},
    {"xrEnumerateSceneComputeFeaturesMSFT", xrEnumerateSceneComputeFeaturesMSFT},
    {"xrEnumerateSpaceSupportedComponentsFB", xrEnumerateSpaceSupportedComponentsFB},
    {"xrEnumerateSpatialAnchorAttachableComponentsANDROID", xrEnumerateSpatialAnchorAttachableComponentsANDROID},
    {"xrEnumerateSpatialCapabilitiesEXT", xrEnumerateSpatialCapabilitiesEXT},
    {"xrEnumerateSpatialCapabilityComponentTypesEXT", xrEnumerateSpatialCapabilityComponentTypesEXT},
    {"xrEnumerateSpatialCapabilityFeaturesEXT", xrEnumerateSpatialCapabilityFeaturesEXT},
    {"xrEnumerateSpatialEntityComponentTypesBD", xrEnumerateSpatialEntityComponentTypesBD},
    {"xrEnumerateSpatialPersistenceScopesEXT", xrEnumerateSpatialPersistenceScopesEXT},
    {"xrEnumerateSupportedAnchorTrackableTypesANDROID", xrEnumerateSupportedAnchorTrackableTypesANDROID},
    {"xrEnumerateSupportedAudioSampleRateBD", xrEnumerateSupportedAudioSampleRateBD},
    {"xrEnumerateSupportedPersistenceAnchorTypesANDROID", xrEnumerateSupportedPersistenceAnchorTypesANDROID},
    {"xrEnumerateSupportedSemanticLabelSetsANDROID", xrEnumerateSupportedSemanticLabelSetsANDROID},
    {"xrEnumerateSupportedTrackableTypesANDROID", xrEnumerateSupportedTrackableTypesANDROID},
    {"xrEnumerateSwapchainFormats", xrEnumerateSwapchainFormats},
    {"xrEnumerateSwapchainImages", xrEnumerateSwapchainImages},
    {"xrEnumerateViewConfigurationViews", xrEnumerateViewConfigurationViews},
    {"xrEnumerateViewConfigurations", xrEnumerateViewConfigurations},
    {"xrEnumerateViveTrackerPathsHTCX", xrEnumerateViveTrackerPathsHTCX},
    {"xrEraseSpaceFB", xrEraseSpaceFB},
    {"xrEraseSpacesMETA", xrEraseSpacesMETA},
    {"xrFreeWorldMeshBufferML", xrFreeWorldMeshBufferML},
    {"xrGeometryInstanceSetTransformFB", xrGeometryInstanceSetTransformFB},
    {"xrGetActionStateBoolean", xrGetActionStateBoolean},
    {"xrGetActionStateFloat", xrGetActionStateFloat},
    {"xrGetActionStatePose", xrGetActionStatePose},
    {"xrGetActionStateVector2f", xrGetActionStateVector2f},
    {"xrGetAllSubmeshStatesANDROID", xrGetAllSubmeshStatesANDROID},
    {"xrGetAllTrackablesANDROID", xrGetAllTrackablesANDROID},
    {"xrGetAnchorPersistStateANDROID", xrGetAnchorPersistStateANDROID},
    {"xrGetAnchorUuidBD", xrGetAnchorUuidBD},
    {"xrGetAudioInputDeviceGuidOculus", xrGetAudioInputDeviceGuidOculus},
    {"xrGetAudioOutputDeviceGuidOculus", xrGetAudioOutputDeviceGuidOculus},
    {"xrGetBodySkeletonFB", xrGetBodySkeletonFB},
    {"xrGetBodySkeletonHTC", xrGetBodySkeletonHTC},
    {"xrGetControllerModelKeyMSFT", xrGetControllerModelKeyMSFT},
    {"xrGetControllerModelPropertiesMSFT", xrGetControllerModelPropertiesMSFT},
    {"xrGetControllerModelStateMSFT", xrGetControllerModelStateMSFT},
    {"xrGetCurrentInteractionProfile", xrGetCurrentInteractionProfile},
    {"xrGetD3D11GraphicsRequirementsKHR", xrGetD3D11GraphicsRequirementsKHR},
    {"xrGetD3D12GraphicsRequirementsKHR", xrGetD3D12GraphicsRequirementsKHR},
    {"xrGetDeviceSampleRateFB", xrGetDeviceSampleRateFB},
    {"xrGetDisplayRefreshRateFB", xrGetDisplayRefreshRateFB},
    {"xrGetEnvironmentDepthSwapchainStateMETA", xrGetEnvironmentDepthSwapchainStateMETA},
    {"xrGetExportedLocalizationMapDataML", xrGetExportedLocalizationMapDataML},
    {"xrGetEyeGazesFB", xrGetEyeGazesFB},
    {"xrGetFaceCalibrationStateANDROID", xrGetFaceCalibrationStateANDROID},
    {"xrGetFaceExpressionWeights2FB", xrGetFaceExpressionWeights2FB},
    {"xrGetFaceExpressionWeightsFB", xrGetFaceExpressionWeightsFB},
    {"xrGetFaceStateANDROID", xrGetFaceStateANDROID},
    {"xrGetFacialExpressionBlendShapePropertiesML", xrGetFacialExpressionBlendShapePropertiesML},
    {"xrGetFacialExpressionsHTC", xrGetFacialExpressionsHTC},
    {"xrGetFacialSimulationDataBD", xrGetFacialSimulationDataBD},
    {"xrGetFacialSimulationModeBD", xrGetFacialSimulationModeBD},
    {"xrGetFoveationEyeTrackedStateMETA", xrGetFoveationEyeTrackedStateMETA},
    {"xrGetHandGestureQCOM", xrGetHandGestureQCOM},
    {"xrGetHandMeshFB", xrGetHandMeshFB},
    {"xrGetInputSourceLocalizedName", xrGetInputSourceLocalizedName},
    {"xrGetInstanceProcAddr", xrGetInstanceProcAddr},
    {"xrGetInstanceProperties", xrGetInstanceProperties},
    {"xrGetMarkerDetectorStateML", xrGetMarkerDetectorStateML},
    {"xrGetMarkerLengthML", xrGetMarkerLengthML},
    {"xrGetMarkerNumberML", xrGetMarkerNumberML},
    {"xrGetMarkerReprojectionErrorML", xrGetMarkerReprojectionErrorML},
    {"xrGetMarkerSizeVARJO", xrGetMarkerSizeVARJO},
    {"xrGetMarkerStringML", xrGetMarkerStringML},
    {"xrGetMarkersML", xrGetMarkersML},
    {"xrGetOpenGLGraphicsRequirementsKHR", xrGetOpenGLGraphicsRequirementsKHR},
    {"xrGetPassthroughCameraStateANDROID", xrGetPassthroughCameraStateANDROID},
    {"xrGetPassthroughPreferencesMETA", xrGetPassthroughPreferencesMETA},
    {"xrGetPerformanceMetricsStateANDROID", xrGetPerformanceMetricsStateANDROID},
    {"xrGetPerformanceMetricsStateMETA", xrGetPerformanceMetricsStateMETA},
    {"xrGetPlaneDetectionStateEXT", xrGetPlaneDetectionStateEXT},
    {"xrGetPlaneDetectionsEXT", xrGetPlaneDetectionsEXT},
    {"xrGetPlanePolygonBufferEXT", xrGetPlanePolygonBufferEXT},
    {"xrGetQueriedSenseDataBD", xrGetQueriedSenseDataBD},
    {"xrGetRecommendedLayerResolutionMETA", xrGetRecommendedLayerResolutionMETA},
    {"xrGetReferenceSpaceBoundsRect", xrGetReferenceSpaceBoundsRect},
    {"xrGetRenderModelAssetDataEXT", xrGetRenderModelAssetDataEXT},
    {"xrGetRenderModelAssetPropertiesEXT", xrGetRenderModelAssetPropertiesEXT},
    {"xrGetRenderModelPoseTopLevelUserPathEXT", xrGetRenderModelPoseTopLevelUserPathEXT},
    {"xrGetRenderModelPropertiesEXT", xrGetRenderModelPropertiesEXT},
    {"xrGetRenderModelPropertiesFB", xrGetRenderModelPropertiesFB},
    {"xrGetRenderModelStateEXT", xrGetRenderModelStateEXT},
    {"xrGetSceneComponentsMSFT", xrGetSceneComponentsMSFT},
    {"xrGetSceneComputeStateMSFT", xrGetSceneComputeStateMSFT},
    {"xrGetSceneMarkerDecodedStringMSFT", xrGetSceneMarkerDecodedStringMSFT},
    {"xrGetSceneMarkerRawDataMSFT", xrGetSceneMarkerRawDataMSFT},
    {"xrGetSceneMeshBuffersMSFT", xrGetSceneMeshBuffersMSFT},
    {"xrGetSenseDataProviderStateBD", xrGetSenseDataProviderStateBD},
    {"xrGetSerializedSceneFragmentDataMSFT", xrGetSerializedSceneFragmentDataMSFT},
    {"xrGetSpaceBoundary2DFB", xrGetSpaceBoundary2DFB},
    {"xrGetSpaceBoundingBox2DFB", xrGetSpaceBoundingBox2DFB},
    {"xrGetSpaceBoundingBox3DFB", xrGetSpaceBoundingBox3DFB},
    {"xrGetSpaceComponentStatusFB", xrGetSpaceComponentStatusFB},
    {"xrGetSpaceContainerFB", xrGetSpaceContainerFB},
    {"xrGetSpaceRoomLayoutFB", xrGetSpaceRoomLayoutFB},
    {"xrGetSpaceSemanticLabelsFB", xrGetSpaceSemanticLabelsFB},
    {"xrGetSpaceTriangleMeshMETA", xrGetSpaceTriangleMeshMETA},
    {"xrGetSpaceUserIdFB", xrGetSpaceUserIdFB},
    {"xrGetSpaceUuidFB", xrGetSpaceUuidFB},
    {"xrGetSpatialAnchorNameHTC", xrGetSpatialAnchorNameHTC},
    {"xrGetSpatialAnchorStateML", xrGetSpatialAnchorStateML},
    {"xrGetSpatialBufferFloatEXT", xrGetSpatialBufferFloatEXT},
    {"xrGetSpatialBufferStringEXT", xrGetSpatialBufferStringEXT},
    {"xrGetSpatialBufferUint16EXT", xrGetSpatialBufferUint16EXT},
    {"xrGetSpatialBufferUint32EXT", xrGetSpatialBufferUint32EXT},
    {"xrGetSpatialBufferUint8EXT", xrGetSpatialBufferUint8EXT},
    {"xrGetSpatialBufferVector2fEXT", xrGetSpatialBufferVector2fEXT},
    {"xrGetSpatialBufferVector3fEXT", xrGetSpatialBufferVector3fEXT},
    {"xrGetSpatialEntityComponentDataBD", xrGetSpatialEntityComponentDataBD},
    {"xrGetSpatialEntityUuidBD", xrGetSpatialEntityUuidBD},
    {"xrGetSpatialGraphNodeBindingPropertiesMSFT", xrGetSpatialGraphNodeBindingPropertiesMSFT},
    {"xrGetSubmeshDataANDROID", xrGetSubmeshDataANDROID},
    {"xrGetSwapchainStateFB", xrGetSwapchainStateFB},
    {"xrGetSystem", xrGetSystem},
    {"xrGetSystemProperties", xrGetSystemProperties},
    {"xrGetTrackableImageANDROID", xrGetTrackableImageANDROID},
    {"xrGetTrackableMarkerANDROID", xrGetTrackableMarkerANDROID},
    {"xrGetTrackableObjectANDROID", xrGetTrackableObjectANDROID},
    {"xrGetTrackablePlaneANDROID", xrGetTrackablePlaneANDROID},
    {"xrGetTrackableQrCodeANDROID", xrGetTrackableQrCodeANDROID},
    {"xrGetViewConfigurationProperties", xrGetViewConfigurationProperties},
    {"xrGetVirtualKeyboardDirtyTexturesMETA", xrGetVirtualKeyboardDirtyTexturesMETA},
    {"xrGetVirtualKeyboardModelAnimationStatesMETA", xrGetVirtualKeyboardModelAnimationStatesMETA},
    {"xrGetVirtualKeyboardScaleMETA", xrGetVirtualKeyboardScaleMETA},
    {"xrGetVirtualKeyboardTextureDataMETA", xrGetVirtualKeyboardTextureDataMETA},
    {"xrGetVisibilityMaskKHR", xrGetVisibilityMaskKHR},
    {"xrGetVulkanDeviceExtensionsKHR", xrGetVulkanDeviceExtensionsKHR},
    {"xrGetVulkanGraphicsDevice2KHR", xrGetVulkanGraphicsDevice2KHR},
    {"xrGetVulkanGraphicsDeviceKHR", xrGetVulkanGraphicsDeviceKHR},
    {"xrGetVulkanGraphicsRequirements2KHR", xrGetVulkanGraphicsRequirements2KHR},
    {"xrGetVulkanGraphicsRequirementsKHR", xrGetVulkanGraphicsRequirementsKHR},
    {"xrGetVulkanInstanceExtensionsKHR", xrGetVulkanInstanceExtensionsKHR},
    {"xrGetWorldMeshBufferRecommendSizeML", xrGetWorldMeshBufferRecommendSizeML},
    {"xrImportLocalizationMapML", xrImportLocalizationMapML},
    {"xrLoadControllerModelMSFT", xrLoadControllerModelMSFT},
    {"xrLoadRenderModelFB", xrLoadRenderModelFB},
    {"xrLocateBodyJointsBD", xrLocateBodyJointsBD},
    {"xrLocateBodyJointsFB", xrLocateBodyJointsFB},
    {"xrLocateBodyJointsHTC", xrLocateBodyJointsHTC},
    {"xrLocateHandJointsEXT", xrLocateHandJointsEXT},
    {"xrLocateSceneComponentsMSFT", xrLocateSceneComponentsMSFT},
    {"xrLocateSpace", xrLocateSpace},
    {"xrLocateSpaces", xrLocateSpaces},
    {"xrLocateSpacesKHR", xrLocateSpacesKHR},
    {"xrLocateViews", xrLocateViews},
    {"xrNegotiateLoaderRuntimeInterface", xrNegotiateLoaderRuntimeInterface},
    {"xrPassthroughLayerPauseFB", xrPassthroughLayerPauseFB},
    {"xrPassthroughLayerResumeFB", xrPassthroughLayerResumeFB},
    {"xrPassthroughLayerSetKeyboardHandsIntensityFB", xrPassthroughLayerSetKeyboardHandsIntensityFB},
    {"xrPassthroughLayerSetStyleFB", xrPassthroughLayerSetStyleFB},
    {"xrPassthroughPauseFB", xrPassthroughPauseFB},
    {"xrPassthroughStartFB", xrPassthroughStartFB},
    {"xrPathToString", xrPathToString},
    {"xrPauseSimultaneousHandsAndControllersTrackingMETA", xrPauseSimultaneousHandsAndControllersTrackingMETA},
    {"xrPerfSettingsSetPerformanceLevelEXT", xrPerfSettingsSetPerformanceLevelEXT},
    {"xrPerformEnvironmentRaycastMETA", xrPerformEnvironmentRaycastMETA},
    {"xrPersistAnchorANDROID", xrPersistAnchorANDROID},
    {"xrPersistSpatialAnchorAsyncBD", xrPersistSpatialAnchorAsyncBD},
    {"xrPersistSpatialAnchorCompleteBD", xrPersistSpatialAnchorCompleteBD},
    {"xrPersistSpatialAnchorMSFT", xrPersistSpatialAnchorMSFT},
    {"xrPersistSpatialEntityAsyncEXT", xrPersistSpatialEntityAsyncEXT},
    {"xrPersistSpatialEntityCompleteEXT", xrPersistSpatialEntityCompleteEXT},
    {"xrPollEvent", xrPollEvent},
    {"xrPollFutureEXT", xrPollFutureEXT},
    {"xrPublishSpatialAnchorsAsyncML", xrPublishSpatialAnchorsAsyncML},
    {"xrPublishSpatialAnchorsCompleteML", xrPublishSpatialAnchorsCompleteML},
    {"xrQueryFramesPerBufferRangeBD", xrQueryFramesPerBufferRangeBD},
    {"xrQueryLocalizationMapsML", xrQueryLocalizationMapsML},
    {"xrQueryPerformanceMetricsCounterANDROID", xrQueryPerformanceMetricsCounterANDROID},
    {"xrQueryPerformanceMetricsCounterMETA", xrQueryPerformanceMetricsCounterMETA},
    {"xrQuerySenseDataAsyncBD", xrQuerySenseDataAsyncBD},
    {"xrQuerySenseDataCompleteBD", xrQuerySenseDataCompleteBD},
    {"xrQuerySpacesFB", xrQuerySpacesFB},
    {"xrQuerySpatialAnchorsAsyncML", xrQuerySpatialAnchorsAsyncML},
    {"xrQuerySpatialAnchorsCompleteML", xrQuerySpatialAnchorsCompleteML},
    {"xrQuerySpatialComponentDataEXT", xrQuerySpatialComponentDataEXT},
    {"xrQuerySystemTrackedKeyboardFB", xrQuerySystemTrackedKeyboardFB},
    {"xrRaycastANDROID", xrRaycastANDROID},
    {"xrReleaseSwapchainImage", xrReleaseSwapchainImage},
    {"xrRemoveTrackableImageDatabaseANDROID", xrRemoveTrackableImageDatabaseANDROID},
    {"xrRequestBodyTrackingFidelityMETA", xrRequestBodyTrackingFidelityMETA},
    {"xrRequestDisplayRefreshRateFB", xrRequestDisplayRefreshRateFB},
    {"xrRequestExitSession", xrRequestExitSession},
    {"xrRequestMapLocalizationML", xrRequestMapLocalizationML},
    {"xrRequestSceneCaptureFB", xrRequestSceneCaptureFB},
    {"xrRequestWorldMeshAsyncML", xrRequestWorldMeshAsyncML},
    {"xrRequestWorldMeshCompleteML", xrRequestWorldMeshCompleteML},
    {"xrRequestWorldMeshStateAsyncML", xrRequestWorldMeshStateAsyncML},
    {"xrRequestWorldMeshStateCompleteML", xrRequestWorldMeshStateCompleteML},
    {"xrResetBodyTrackingCalibrationMETA", xrResetBodyTrackingCalibrationMETA},
    {"xrResultToString", xrResultToString},
    {"xrResumeSimultaneousHandsAndControllersTrackingMETA", xrResumeSimultaneousHandsAndControllersTrackingMETA},
    {"xrRetrieveSpaceDiscoveryResultsMETA", xrRetrieveSpaceDiscoveryResultsMETA},
    {"xrRetrieveSpaceQueryResultsFB", xrRetrieveSpaceQueryResultsFB},
    {"xrSaveSpaceFB", xrSaveSpaceFB},
    {"xrSaveSpaceListFB", xrSaveSpaceListFB},
    {"xrSaveSpacesMETA", xrSaveSpacesMETA},
    {"xrSendVirtualKeyboardInputMETA", xrSendVirtualKeyboardInputMETA},
    {"xrSetColorSpaceFB", xrSetColorSpaceFB},
    {"xrSetDigitalLensControlALMALENCE", xrSetDigitalLensControlALMALENCE},
    {"xrSetEnvironmentDepthEstimationVARJO", xrSetEnvironmentDepthEstimationVARJO},
    {"xrSetEnvironmentDepthHandRemovalMETA", xrSetEnvironmentDepthHandRemovalMETA},
    {"xrSetFacialSimulationModeBD", xrSetFacialSimulationModeBD},
    {"xrSetInputDeviceActiveEXT", xrSetInputDeviceActiveEXT},
    {"xrSetInputDeviceLocationEXT", xrSetInputDeviceLocationEXT},
    {"xrSetInputDeviceStateBoolEXT", xrSetInputDeviceStateBoolEXT},
    {"xrSetInputDeviceStateFloatEXT", xrSetInputDeviceStateFloatEXT},
    {"xrSetInputDeviceStateVector2fEXT", xrSetInputDeviceStateVector2fEXT},
    {"xrSetMarkerTrackingPredictionVARJO", xrSetMarkerTrackingPredictionVARJO},
    {"xrSetMarkerTrackingTimeoutVARJO", xrSetMarkerTrackingTimeoutVARJO},
    {"xrSetMarkerTrackingVARJO", xrSetMarkerTrackingVARJO},
    {"xrSetPassthroughLayerMeshANDROID", xrSetPassthroughLayerMeshANDROID},
    {"xrSetPerformanceMetricsStateANDROID", xrSetPerformanceMetricsStateANDROID},
    {"xrSetPerformanceMetricsStateMETA", xrSetPerformanceMetricsStateMETA},
    {"xrSetSpaceComponentStatusFB", xrSetSpaceComponentStatusFB},
    {"xrSetSystemNotificationsML", xrSetSystemNotificationsML},
    {"xrSetTilePropertiesHintMETA", xrSetTilePropertiesHintMETA},
    {"xrSetTrackingOptimizationSettingsHintQCOM", xrSetTrackingOptimizationSettingsHintQCOM},
    {"xrSetViewOffsetVARJO", xrSetViewOffsetVARJO},
    {"xrSetVirtualKeyboardModelVisibilityMETA", xrSetVirtualKeyboardModelVisibilityMETA},
    {"xrShareSpacesFB", xrShareSpacesFB},
    {"xrShareSpacesMETA", xrShareSpacesMETA},
    {"xrShareSpatialAnchorAsyncBD", xrShareSpatialAnchorAsyncBD},
    {"xrShareSpatialAnchorCompleteBD", xrShareSpatialAnchorCompleteBD},
    {"xrSnapshotMarkerDetectorML", xrSnapshotMarkerDetectorML},
    {"xrStartColocationAdvertisementMETA", xrStartColocationAdvertisementMETA},
    {"xrStartColocationDiscoveryMETA", xrStartColocationDiscoveryMETA},
    {"xrStartEnvironmentDepthProviderMETA", xrStartEnvironmentDepthProviderMETA},
    {"xrStartSenseDataProviderAsyncBD", xrStartSenseDataProviderAsyncBD},
    {"xrStartSenseDataProviderCompleteBD", xrStartSenseDataProviderCompleteBD},
    {"xrStopColocationAdvertisementMETA", xrStopColocationAdvertisementMETA},
    {"xrStopColocationDiscoveryMETA", xrStopColocationDiscoveryMETA},
    {"xrStopEnvironmentDepthProviderMETA", xrStopEnvironmentDepthProviderMETA},
    {"xrStopHapticFeedback", xrStopHapticFeedback},
    {"xrStopSenseDataProviderBD", xrStopSenseDataProviderBD},
    {"xrStringToPath", xrStringToPath},
    {"xrStructureTypeToString", xrStructureTypeToString},
    {"xrStructureTypeToString2KHR", xrStructureTypeToString2KHR},
    {"xrSubmitSoundFieldBufferBD", xrSubmitSoundFieldBufferBD},
    {"xrSubmitSoundObjectBufferBD", xrSubmitSoundObjectBufferBD},
    {"xrSuggestBodyTrackingCalibrationOverrideMETA", xrSuggestBodyTrackingCalibrationOverrideMETA},
    {"xrSuggestInteractionProfileBindings", xrSuggestInteractionProfileBindings},
    {"xrSuggestVirtualKeyboardLocationMETA", xrSuggestVirtualKeyboardLocationMETA},
    {"xrSyncActions", xrSyncActions},
    {"xrThermalGetTemperatureTrendEXT", xrThermalGetTemperatureTrendEXT},
    {"xrTriangleMeshBeginUpdateFB", xrTriangleMeshBeginUpdateFB},
    {"xrTriangleMeshBeginVertexBufferUpdateFB", xrTriangleMeshBeginVertexBufferUpdateFB},
    {"xrTriangleMeshEndUpdateFB", xrTriangleMeshEndUpdateFB},
    {"xrTriangleMeshEndVertexBufferUpdateFB", xrTriangleMeshEndVertexBufferUpdateFB},
    {"xrTriangleMeshGetIndexBufferFB", xrTriangleMeshGetIndexBufferFB},
    {"xrTriangleMeshGetVertexBufferFB", xrTriangleMeshGetVertexBufferFB},
    {"xrTryCreateSpatialGraphStaticNodeBindingMSFT", xrTryCreateSpatialGraphStaticNodeBindingMSFT},
    {"xrUnpersistAnchorANDROID", xrUnpersistAnchorANDROID},
    {"xrUnpersistSpatialAnchorAsyncBD", xrUnpersistSpatialAnchorAsyncBD},
    {"xrUnpersistSpatialAnchorCompleteBD", xrUnpersistSpatialAnchorCompleteBD},
    {"xrUnpersistSpatialAnchorMSFT", xrUnpersistSpatialAnchorMSFT},
    {"xrUnpersistSpatialEntityAsyncEXT", xrUnpersistSpatialEntityAsyncEXT},
    {"xrUnpersistSpatialEntityCompleteEXT", xrUnpersistSpatialEntityCompleteEXT},
    {"xrUpdateHandMeshMSFT", xrUpdateHandMeshMSFT},
    {"xrUpdatePassthroughColorLutMETA", xrUpdatePassthroughColorLutMETA},
    {"xrUpdateSoundFieldConfigBD", xrUpdateSoundFieldConfigBD},
    {"xrUpdateSoundObjectConfigBD", xrUpdateSoundObjectConfigBD},
    {"xrUpdateSoundObstacleConfigBD", xrUpdateSoundObstacleConfigBD},
    {"xrUpdateSoundObstacleMaterialConfigBD", xrUpdateSoundObstacleMaterialConfigBD},
    {"xrUpdateSpatialAnchorsExpirationAsyncML", xrUpdateSpatialAnchorsExpirationAsyncML},
    {"xrUpdateSpatialAnchorsExpirationCompleteML", xrUpdateSpatialAnchorsExpirationCompleteML},
    {"xrUpdateSwapchainFB", xrUpdateSwapchainFB},
    {"xrWaitAudioPeriodBD", xrWaitAudioPeriodBD},
    {"xrWaitFrame", xrWaitFrame},
    {"xrWaitSwapchainImage", xrWaitSwapchainImage},
};

void *wine_xr_get_instance_proc_addr(const char *name)
{
    unsigned int i;
    for (i = 0; i < ARRAY_SIZE(xr_instance_dispatch_table); i++)
    {
        if (strcmp(xr_instance_dispatch_table[i].name, name) == 0)
        {
            TRACE("Found name=%s in instance table\n", debugstr_a(name));
            return xr_instance_dispatch_table[i].func;
        }
    }
    return NULL;
}
