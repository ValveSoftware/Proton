/* Automatically generated from OpenXR xr.xml; DO NOT EDIT!
 *
 * This file is generated from OpenXR xr.xml file covered
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

XrResult WINAPI xrAddTrackableImageDatabaseANDROID(XrTrackableTrackerANDROID tracker, XrTrackableImageDatabaseANDROID database)
{
    struct xrAddTrackableImageDatabaseANDROID_params params;
    params.tracker = tracker;
    params.database = database;
    UNIX_CALL_CHECKED(xrAddTrackableImageDatabaseANDROID, &params);
    return params.result;
}

XrResult WINAPI xrAllocateWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferSizeML *size, XrWorldMeshBufferML *buffer)
{
    struct xrAllocateWorldMeshBufferML_params params;
    params.detector = detector;
    params.size = size;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrAllocateWorldMeshBufferML, &params);
    return params.result;
}

XrResult WINAPI xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations)
{
    struct xrApplyForceFeedbackCurlMNDX_params params;
    params.handTracker = handTracker;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrApplyForceFeedbackCurlMNDX, &params);
    return params.result;
}

XrResult WINAPI xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback)
{
    struct xrApplyHapticFeedback_params params;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.hapticFeedback = hapticFeedback;
    UNIX_CALL_CHECKED(xrApplyHapticFeedback, &params);
    return params.result;
}

XrResult WINAPI xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo)
{
    struct xrAttachSessionActionSets_params params;
    params.session = session;
    params.attachInfo = attachInfo;
    UNIX_CALL_CHECKED(xrAttachSessionActionSets, &params);
    return params.result;
}

XrResult WINAPI xrBeginPlaneDetectionEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT *beginInfo)
{
    struct xrBeginPlaneDetectionEXT_params params;
    params.planeDetector = planeDetector;
    params.beginInfo = beginInfo;
    UNIX_CALL_CHECKED(xrBeginPlaneDetectionEXT, &params);
    return params.result;
}

XrResult WINAPI xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo)
{
    struct xrBeginSession_params params;
    params.session = session;
    params.beginInfo = beginInfo;
    UNIX_CALL_CHECKED(xrBeginSession, &params);
    return params.result;
}

XrResult WINAPI xrBeginSpatialContainerRenderingEXT(XrSession session, const XrSpatialContainerBeginInfoEXT *beginInfo)
{
    struct xrBeginSpatialContainerRenderingEXT_params params;
    params.session = session;
    params.beginInfo = beginInfo;
    UNIX_CALL_CHECKED(xrBeginSpatialContainerRenderingEXT, &params);
    return params.result;
}

XrResult WINAPI xrCancelFutureEXT(XrInstance instance, const XrFutureCancelInfoEXT *cancelInfo)
{
    struct xrCancelFutureEXT_params params;
    params.instance = instance;
    params.cancelInfo = cancelInfo;
    UNIX_CALL_CHECKED(xrCancelFutureEXT, &params);
    return params.result;
}

XrResult WINAPI xrCaptureSceneAsyncBD(XrSenseDataProviderBD provider, const XrSceneCaptureInfoBD *info, XrFutureEXT *future)
{
    struct xrCaptureSceneAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrCaptureSceneAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrCaptureSceneCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrCaptureSceneCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCaptureSceneCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrChangeVirtualKeyboardTextContextMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo)
{
    struct xrChangeVirtualKeyboardTextContextMETA_params params;
    params.keyboard = keyboard;
    params.changeInfo = changeInfo;
    UNIX_CALL_CHECKED(xrChangeVirtualKeyboardTextContextMETA, &params);
    return params.result;
}

XrResult WINAPI xrCheckVpsAvailabilityAsyncANDROID(XrSession session, double latitude, double longitude, XrFutureEXT *future)
{
    struct xrCheckVpsAvailabilityAsyncANDROID_params params;
    params.session = session;
    params.latitude = latitude;
    params.longitude = longitude;
    params.future = future;
    UNIX_CALL_CHECKED(xrCheckVpsAvailabilityAsyncANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCheckVpsAvailabilityCompleteANDROID(XrSession session, XrFutureEXT future, XrVPSAvailabilityCheckCompletionANDROID *completion)
{
    struct xrCheckVpsAvailabilityCompleteANDROID_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCheckVpsAvailabilityCompleteANDROID, &params);
    return params.result;
}

XrResult WINAPI xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrClearSpatialAnchorStoreMSFT_params params;
    params.spatialAnchorStore = spatialAnchorStore;
    UNIX_CALL_CHECKED(xrClearSpatialAnchorStoreMSFT, &params);
    return params.result;
}

XrResult WINAPI xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo)
{
    struct xrComputeNewSceneMSFT_params params;
    params.sceneObserver = sceneObserver;
    params.computeInfo = computeInfo;
    UNIX_CALL_CHECKED(xrComputeNewSceneMSFT, &params);
    return params.result;
}

XrResult WINAPI xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER *performanceCounter)
{
    struct xrConvertTimeToWin32PerformanceCounterKHR_params params;
    params.instance = instance;
    params.time = time;
    params.performanceCounter = performanceCounter;
    UNIX_CALL_CHECKED(xrConvertTimeToWin32PerformanceCounterKHR, &params);
    return params.result;
}

XrResult WINAPI xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER *performanceCounter, XrTime *time)
{
    struct xrConvertWin32PerformanceCounterToTimeKHR_params params;
    params.instance = instance;
    params.performanceCounter = performanceCounter;
    params.time = time;
    UNIX_CALL_CHECKED(xrConvertWin32PerformanceCounterToTimeKHR, &params);
    return params.result;
}

XrResult WINAPI xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action)
{
    struct xrCreateAction_params params;
    params.actionSet = actionSet;
    params.createInfo = createInfo;
    params.action = action;
    UNIX_CALL_CHECKED(xrCreateAction, &params);
    return params.result;
}

XrResult WINAPI xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet)
{
    struct xrCreateActionSet_params params;
    params.instance = instance;
    params.createInfo = createInfo;
    params.actionSet = actionSet;
    UNIX_CALL_CHECKED(xrCreateActionSet, &params);
    return params.result;
}

XrResult WINAPI xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateActionSpace_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateActionSpace, &params);
    return params.result;
}

XrResult WINAPI xrCreateAnchorSpaceANDROID(XrSession session, const XrAnchorSpaceCreateInfoANDROID *createInfo, XrSpace *anchorOutput)
{
    struct xrCreateAnchorSpaceANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.anchorOutput = anchorOutput;
    UNIX_CALL_CHECKED(xrCreateAnchorSpaceANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateAnchorSpaceBD(XrSession session, const XrAnchorSpaceCreateInfoBD *createInfo, XrSpace *space)
{
    struct xrCreateAnchorSpaceBD_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateAnchorSpaceBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerBD(XrSession session, const XrBodyTrackerCreateInfoBD *createInfo, XrBodyTrackerBD *bodyTracker)
{
    struct xrCreateBodyTrackerBD_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrCreateBodyTrackerBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerFB(XrSession session, const XrBodyTrackerCreateInfoFB *createInfo, XrBodyTrackerFB *bodyTracker)
{
    struct xrCreateBodyTrackerFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrCreateBodyTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateBodyTrackerHTC(XrSession session, const XrBodyTrackerCreateInfoHTC *createInfo, XrBodyTrackerHTC *bodyTracker)
{
    struct xrCreateBodyTrackerHTC_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrCreateBodyTrackerHTC, &params);
    return params.result;
}

XrResult WINAPI xrCreateDeviceAnchorPersistenceANDROID(XrSession session, const XrDeviceAnchorPersistenceCreateInfoANDROID *createInfo, XrDeviceAnchorPersistenceANDROID *outHandle)
{
    struct xrCreateDeviceAnchorPersistenceANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.outHandle = outHandle;
    UNIX_CALL_CHECKED(xrCreateDeviceAnchorPersistenceANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateExportedLocalizationMapML(XrSession session, const XrUuidEXT *mapUuid, XrExportedLocalizationMapML *map)
{
    struct xrCreateExportedLocalizationMapML_params params;
    params.session = session;
    params.mapUuid = mapUuid;
    params.map = map;
    UNIX_CALL_CHECKED(xrCreateExportedLocalizationMapML, &params);
    return params.result;
}

XrResult WINAPI xrCreateEyeTrackerANDROID(XrSession session, const XrEyeTrackerCreateInfoANDROID *createInfo, XrEyeTrackerANDROID *eyeTracker)
{
    struct xrCreateEyeTrackerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.eyeTracker = eyeTracker;
    UNIX_CALL_CHECKED(xrCreateEyeTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateEyeTrackerFB(XrSession session, const XrEyeTrackerCreateInfoFB *createInfo, XrEyeTrackerFB *eyeTracker)
{
    struct xrCreateEyeTrackerFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.eyeTracker = eyeTracker;
    UNIX_CALL_CHECKED(xrCreateEyeTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateFaceTracker2FB(XrSession session, const XrFaceTrackerCreateInfo2FB *createInfo, XrFaceTracker2FB *faceTracker)
{
    struct xrCreateFaceTracker2FB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrCreateFaceTracker2FB, &params);
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerANDROID(XrSession session, const XrFaceTrackerCreateInfoANDROID *createInfo, XrFaceTrackerANDROID *faceTracker)
{
    struct xrCreateFaceTrackerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrCreateFaceTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerBD(XrSession session, const XrFaceTrackerCreateInfoBD *createInfo, XrFaceTrackerBD *tracker)
{
    struct xrCreateFaceTrackerBD_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.tracker = tracker;
    UNIX_CALL_CHECKED(xrCreateFaceTrackerBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateFaceTrackerFB(XrSession session, const XrFaceTrackerCreateInfoFB *createInfo, XrFaceTrackerFB *faceTracker)
{
    struct xrCreateFaceTrackerFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrCreateFaceTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateFacialExpressionClientML(XrSession session, const XrFacialExpressionClientCreateInfoML *createInfo, XrFacialExpressionClientML *facialExpressionClient)
{
    struct xrCreateFacialExpressionClientML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.facialExpressionClient = facialExpressionClient;
    UNIX_CALL_CHECKED(xrCreateFacialExpressionClientML, &params);
    return params.result;
}

XrResult WINAPI xrCreateFacialTrackerHTC(XrSession session, const XrFacialTrackerCreateInfoHTC *createInfo, XrFacialTrackerHTC *facialTracker)
{
    struct xrCreateFacialTrackerHTC_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.facialTracker = facialTracker;
    UNIX_CALL_CHECKED(xrCreateFacialTrackerHTC, &params);
    return params.result;
}

XrResult WINAPI xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB *createInfo, XrFoveationProfileFB *profile)
{
    struct xrCreateFoveationProfileFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.profile = profile;
    UNIX_CALL_CHECKED(xrCreateFoveationProfileFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB *createInfo, XrGeometryInstanceFB *outGeometryInstance)
{
    struct xrCreateGeometryInstanceFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.outGeometryInstance = outGeometryInstance;
    UNIX_CALL_CHECKED(xrCreateGeometryInstanceFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateGeospatialAnchorANDROID(XrSpatialContextEXT spatialContext, const XrGeospatialAnchorCreateInfoANDROID *createInfo, XrSpatialEntityIdEXT *anchorEntityId)
{
    struct xrCreateGeospatialAnchorANDROID_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorEntityId = anchorEntityId;
    UNIX_CALL_CHECKED(xrCreateGeospatialAnchorANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateGeospatialTrackerANDROID(XrSession session, const XrGeospatialTrackerCreateInfoANDROID *createInfo, XrGeospatialTrackerANDROID *geospatialTrackerOutput)
{
    struct xrCreateGeospatialTrackerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.geospatialTrackerOutput = geospatialTrackerOutput;
    UNIX_CALL_CHECKED(xrCreateGeospatialTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateHandMeshSpaceMSFT_params params;
    params.handTracker = handTracker;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateHandMeshSpaceMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker)
{
    struct xrCreateHandTrackerEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.handTracker = handTracker;
    UNIX_CALL_CHECKED(xrCreateHandTrackerEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateKeyboardSpaceFB(XrSession session, const XrKeyboardSpaceCreateInfoFB *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateKeyboardSpaceFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    UNIX_CALL_CHECKED(xrCreateKeyboardSpaceFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateLightEstimatorANDROID(XrSession session, XrLightEstimatorCreateInfoANDROID *createInfo, XrLightEstimatorANDROID *outHandle)
{
    struct xrCreateLightEstimatorANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.outHandle = outHandle;
    UNIX_CALL_CHECKED(xrCreateLightEstimatorANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateMarkerDetectorML(XrSession session, const XrMarkerDetectorCreateInfoML *createInfo, XrMarkerDetectorML *markerDetector)
{
    struct xrCreateMarkerDetectorML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.markerDetector = markerDetector;
    UNIX_CALL_CHECKED(xrCreateMarkerDetectorML, &params);
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceML(XrSession session, const XrMarkerSpaceCreateInfoML *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateMarkerSpaceML, &params);
    return params.result;
}

XrResult WINAPI xrCreateMarkerSpaceVARJO(XrSession session, const XrMarkerSpaceCreateInfoVARJO *createInfo, XrSpace *space)
{
    struct xrCreateMarkerSpaceVARJO_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateMarkerSpaceVARJO, &params);
    return params.result;
}

XrResult WINAPI xrCreatePassthroughColorLutMETA(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA *createInfo, XrPassthroughColorLutMETA *colorLut)
{
    struct xrCreatePassthroughColorLutMETA_params params;
    params.passthrough = passthrough;
    params.createInfo = createInfo;
    params.colorLut = colorLut;
    UNIX_CALL_CHECKED(xrCreatePassthroughColorLutMETA, &params);
    return params.result;
}

XrResult WINAPI xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB *createInfo, XrPassthroughFB *outPassthrough)
{
    struct xrCreatePassthroughFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.outPassthrough = outPassthrough;
    UNIX_CALL_CHECKED(xrCreatePassthroughFB, &params);
    return params.result;
}

XrResult WINAPI xrCreatePassthroughHTC(XrSession session, const XrPassthroughCreateInfoHTC *createInfo, XrPassthroughHTC *passthrough)
{
    struct xrCreatePassthroughHTC_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.passthrough = passthrough;
    UNIX_CALL_CHECKED(xrCreatePassthroughHTC, &params);
    return params.result;
}

XrResult WINAPI xrCreatePassthroughLayerANDROID(XrSession session, const XrPassthroughLayerCreateInfoANDROID *createInfo, XrPassthroughLayerANDROID *layer)
{
    struct xrCreatePassthroughLayerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.layer = layer;
    UNIX_CALL_CHECKED(xrCreatePassthroughLayerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB *createInfo, XrPassthroughLayerFB *outLayer)
{
    struct xrCreatePassthroughLayerFB_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.outLayer = outLayer;
    UNIX_CALL_CHECKED(xrCreatePassthroughLayerFB, &params);
    return params.result;
}

XrResult WINAPI xrCreatePersistedAnchorSpaceANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrPersistedAnchorSpaceCreateInfoANDROID *createInfo, XrSpace *anchorOutput)
{
    struct xrCreatePersistedAnchorSpaceANDROID_params params;
    params.handle = handle;
    params.createInfo = createInfo;
    params.anchorOutput = anchorOutput;
    UNIX_CALL_CHECKED(xrCreatePersistedAnchorSpaceANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreatePlaneDetectorEXT(XrSession session, const XrPlaneDetectorCreateInfoEXT *createInfo, XrPlaneDetectorEXT *planeDetector)
{
    struct xrCreatePlaneDetectorEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.planeDetector = planeDetector;
    UNIX_CALL_CHECKED(xrCreatePlaneDetectorEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space)
{
    struct xrCreateReferenceSpace_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateReferenceSpace, &params);
    return params.result;
}

XrResult WINAPI xrCreateRenderModelAssetEXT(XrSession session, const XrRenderModelAssetCreateInfoEXT *createInfo, XrRenderModelAssetEXT *asset)
{
    struct xrCreateRenderModelAssetEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.asset = asset;
    UNIX_CALL_CHECKED(xrCreateRenderModelAssetEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateRenderModelEXT(XrSession session, const XrRenderModelCreateInfoEXT *createInfo, XrRenderModelEXT *renderModel)
{
    struct xrCreateRenderModelEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.renderModel = renderModel;
    UNIX_CALL_CHECKED(xrCreateRenderModelEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateRenderModelSpaceEXT(XrSession session, const XrRenderModelSpaceCreateInfoEXT *createInfo, XrSpace *space)
{
    struct xrCreateRenderModelSpaceEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateRenderModelSpaceEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene)
{
    struct xrCreateSceneMSFT_params params;
    params.sceneObserver = sceneObserver;
    params.createInfo = createInfo;
    params.scene = scene;
    UNIX_CALL_CHECKED(xrCreateSceneMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSceneMeshSnapshotANDROID(XrSceneMeshingTrackerANDROID tracker, const XrSceneMeshSnapshotCreateInfoANDROID *createInfo, XrSceneMeshSnapshotCreationResultANDROID *outSnapshotCreationResult)
{
    struct xrCreateSceneMeshSnapshotANDROID_params params;
    params.tracker = tracker;
    params.createInfo = createInfo;
    params.outSnapshotCreationResult = outSnapshotCreationResult;
    UNIX_CALL_CHECKED(xrCreateSceneMeshSnapshotANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSceneMeshingTrackerANDROID(XrSession session, const XrSceneMeshingTrackerCreateInfoANDROID *createInfo, XrSceneMeshingTrackerANDROID *tracker)
{
    struct xrCreateSceneMeshingTrackerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.tracker = tracker;
    UNIX_CALL_CHECKED(xrCreateSceneMeshingTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver)
{
    struct xrCreateSceneObserverMSFT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.sceneObserver = sceneObserver;
    UNIX_CALL_CHECKED(xrCreateSceneObserverMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSenseDataProviderBD(XrSession session, const XrSenseDataProviderCreateInfoBD *createInfo, XrSenseDataProviderBD *provider)
{
    struct xrCreateSenseDataProviderBD_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.provider = provider;
    UNIX_CALL_CHECKED(xrCreateSenseDataProviderBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSoundFieldBD(XrSpatialAudioRendererBD renderer, const XrSoundFieldConfigBD *config, XrSoundFieldBD *soundField)
{
    struct xrCreateSoundFieldBD_params params;
    params.renderer = renderer;
    params.config = config;
    params.soundField = soundField;
    UNIX_CALL_CHECKED(xrCreateSoundFieldBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSoundObjectBD(XrSpatialAudioRendererBD renderer, const XrSoundObjectConfigBD *config, XrSoundObjectBD *soundObject)
{
    struct xrCreateSoundObjectBD_params params;
    params.renderer = renderer;
    params.config = config;
    params.soundObject = soundObject;
    UNIX_CALL_CHECKED(xrCreateSoundObjectBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSoundObstacleBD(XrSpatialAudioRendererBD renderer, const XrSoundObstacleConfigBD *config, const XrSoundTriangleMeshBD *mesh, XrSoundObstacleBD *soundObstacle)
{
    struct xrCreateSoundObstacleBD_params params;
    params.renderer = renderer;
    params.config = config;
    params.mesh = mesh;
    params.soundObstacle = soundObstacle;
    UNIX_CALL_CHECKED(xrCreateSoundObstacleBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSoundObstacleMaterialBD(XrSpatialAudioRendererBD renderer, const XrSoundObstacleMaterialConfigBD *config, XrSoundObstacleMaterialBD *material)
{
    struct xrCreateSoundObstacleMaterialBD_params params;
    params.renderer = renderer;
    params.config = config;
    params.material = material;
    UNIX_CALL_CHECKED(xrCreateSoundObstacleMaterialBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpaceUserFB(XrSession session, const XrSpaceUserCreateInfoFB *info, XrSpaceUserFB *user)
{
    struct xrCreateSpaceUserFB_params params;
    params.session = session;
    params.info = info;
    params.user = user;
    UNIX_CALL_CHECKED(xrCreateSpaceUserFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorCreateInfoBD *info, XrFutureEXT *future)
{
    struct xrCreateSpatialAnchorAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSpatialAnchorCreateCompletionBD *completion)
{
    struct xrCreateSpatialAnchorCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorEXT(XrSpatialContextEXT spatialContext, const XrSpatialAnchorCreateInfoEXT *createInfo, XrSpatialEntityIdEXT *anchorEntityId, XrSpatialEntityEXT *anchorEntity)
{
    struct xrCreateSpatialAnchorEXT_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorEntityId = anchorEntityId;
    params.anchorEntity = anchorEntity;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFB(XrSession session, const XrSpatialAnchorCreateInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrCreateSpatialAnchorFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorFB, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo, XrSpatialAnchorMSFT *spatialAnchor)
{
    struct xrCreateSpatialAnchorFromPersistedNameMSFT_params params;
    params.session = session;
    params.spatialAnchorCreateInfo = spatialAnchorCreateInfo;
    params.spatialAnchor = spatialAnchor;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorFromPersistedNameMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorHTC(XrSession session, const XrSpatialAnchorCreateInfoHTC *createInfo, XrSpace *anchor)
{
    struct xrCreateSpatialAnchorHTC_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorHTC, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor)
{
    struct xrCreateSpatialAnchorMSFT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.anchor = anchor;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceANDROID(XrSession session, XrSpatialContextEXT spatialContext, const XrSpatialAnchorCreateInfoEXT *createInfo, XrSpatialEntityIdEXT *anchorEntityId, XrSpace *anchorSpace)
{
    struct xrCreateSpatialAnchorSpaceANDROID_params params;
    params.session = session;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorEntityId = anchorEntityId;
    params.anchorSpace = anchorSpace;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorSpaceANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceFromIdANDROID(XrSession session, XrSpatialContextEXT spatialContext, const XrSpatialAnchorSpaceFromIdCreateInfoANDROID *createInfo, XrSpace *anchorSpace)
{
    struct xrCreateSpatialAnchorSpaceFromIdANDROID_params params;
    params.session = session;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.anchorSpace = anchorSpace;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorSpaceFromIdANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialAnchorSpaceMSFT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorSpaceMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore)
{
    struct xrCreateSpatialAnchorStoreConnectionMSFT_params params;
    params.session = session;
    params.spatialAnchorStore = spatialAnchorStore;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorStoreConnectionMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsAsyncML(XrSession session, const XrSpatialAnchorsCreateInfoBaseHeaderML *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialAnchorsAsyncML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorsAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsCompleteML(XrSession session, XrFutureEXT future, XrCreateSpatialAnchorsCompletionML *completion)
{
    struct xrCreateSpatialAnchorsCompleteML_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorsCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAnchorsStorageML(XrSession session, const XrSpatialAnchorsCreateStorageInfoML *createInfo, XrSpatialAnchorsStorageML *storage)
{
    struct xrCreateSpatialAnchorsStorageML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.storage = storage;
    UNIX_CALL_CHECKED(xrCreateSpatialAnchorsStorageML, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialAudioRendererBD(XrSession session, const XrSpatialAudioRendererCreateInfoBD *createInfo, XrSpatialAudioRendererBD *renderer)
{
    struct xrCreateSpatialAudioRendererBD_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.renderer = renderer;
    UNIX_CALL_CHECKED(xrCreateSpatialAudioRendererBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialContainerEXT(XrSession session, const XrSpatialContainerCreateInfoEXT *createInfo, XrSpatialContainerEXT *spatialContainer)
{
    struct xrCreateSpatialContainerEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.spatialContainer = spatialContainer;
    UNIX_CALL_CHECKED(xrCreateSpatialContainerEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialContainerSpaceEXT(XrSession session, const XrSpatialContainerSpaceCreateInfoEXT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialContainerSpaceEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateSpatialContainerSpaceEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialContextAsyncEXT(XrSession session, const XrSpatialContextCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialContextAsyncEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialContextAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialContextCompleteEXT(XrSession session, XrFutureEXT future, XrCreateSpatialContextCompletionEXT *completion)
{
    struct xrCreateSpatialContextCompleteEXT_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialContextCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialDiscoverySnapshotAsyncEXT(XrSpatialContextEXT spatialContext, const XrSpatialDiscoverySnapshotCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialDiscoverySnapshotAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialDiscoverySnapshotCompleteEXT(XrSpatialContextEXT spatialContext, const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT *createSnapshotCompletionInfo, XrCreateSpatialDiscoverySnapshotCompletionEXT *completion)
{
    struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params params;
    params.spatialContext = spatialContext;
    params.createSnapshotCompletionInfo = createSnapshotCompletionInfo;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialDiscoverySnapshotCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialEntityAnchorBD(XrSenseDataProviderBD provider, const XrSpatialEntityAnchorCreateInfoBD *createInfo, XrAnchorBD *anchor)
{
    struct xrCreateSpatialEntityAnchorBD_params params;
    params.provider = provider;
    params.createInfo = createInfo;
    params.anchor = anchor;
    UNIX_CALL_CHECKED(xrCreateSpatialEntityAnchorBD, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialEntityFromIdEXT(XrSpatialContextEXT spatialContext, const XrSpatialEntityFromIdCreateInfoEXT *createInfo, XrSpatialEntityEXT *spatialEntity)
{
    struct xrCreateSpatialEntityFromIdEXT_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.spatialEntity = spatialEntity;
    UNIX_CALL_CHECKED(xrCreateSpatialEntityFromIdEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space)
{
    struct xrCreateSpatialGraphNodeSpaceMSFT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.space = space;
    UNIX_CALL_CHECKED(xrCreateSpatialGraphNodeSpaceMSFT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialImageTrackingDatabaseAsyncEXT(XrSession session, const XrSpatialImageTrackingDatabaseCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialImageTrackingDatabaseAsyncEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialImageTrackingDatabaseAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialImageTrackingDatabaseCompleteEXT(XrSession session, XrFutureEXT future, XrCreateSpatialImageTrackingDatabaseCompletionEXT *completion)
{
    struct xrCreateSpatialImageTrackingDatabaseCompleteEXT_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialImageTrackingDatabaseCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialPersistenceContextAsyncEXT(XrSession session, const XrSpatialPersistenceContextCreateInfoEXT *createInfo, XrFutureEXT *future)
{
    struct xrCreateSpatialPersistenceContextAsyncEXT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSpatialPersistenceContextAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialPersistenceContextCompleteEXT(XrSession session, XrFutureEXT future, XrCreateSpatialPersistenceContextCompletionEXT *completion)
{
    struct xrCreateSpatialPersistenceContextCompleteEXT_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSpatialPersistenceContextCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialRaycastSnapshotANDROID(XrSpatialContextEXT spatialContext, const XrSpatialRaycastSnapshotCreateInfoANDROID *createInfo, XrSpatialSnapshotEXT *snapshot)
{
    struct xrCreateSpatialRaycastSnapshotANDROID_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.snapshot = snapshot;
    UNIX_CALL_CHECKED(xrCreateSpatialRaycastSnapshotANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSpatialUpdateSnapshotEXT(XrSpatialContextEXT spatialContext, const XrSpatialUpdateSnapshotCreateInfoEXT *createInfo, XrSpatialSnapshotEXT *snapshot)
{
    struct xrCreateSpatialUpdateSnapshotEXT_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.snapshot = snapshot;
    UNIX_CALL_CHECKED(xrCreateSpatialUpdateSnapshotEXT, &params);
    return params.result;
}

XrResult WINAPI xrCreateSurfaceAnchorAsyncANDROID(XrSpatialContextEXT spatialContext, const XrSurfaceAnchorCreateInfoANDROID *createInfo, XrFutureEXT *future)
{
    struct xrCreateSurfaceAnchorAsyncANDROID_params params;
    params.spatialContext = spatialContext;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateSurfaceAnchorAsyncANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateSurfaceAnchorCompleteANDROID(XrSpatialContextEXT spatialContext, XrFutureEXT future, XrSurfaceAnchorCreateCompletionANDROID *completion)
{
    struct xrCreateSurfaceAnchorCompleteANDROID_params params;
    params.spatialContext = spatialContext;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateSurfaceAnchorCompleteANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateTrackableImageDatabaseAsyncANDROID(XrSession session, const XrTrackableImageDatabaseCreateInfoANDROID *createInfo, XrFutureEXT *future)
{
    struct xrCreateTrackableImageDatabaseAsyncANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrCreateTrackableImageDatabaseAsyncANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateTrackableImageDatabaseCompleteANDROID(XrSession session, XrFutureEXT future, XrCreateTrackableImageDatabaseCompletionANDROID *completion)
{
    struct xrCreateTrackableImageDatabaseCompleteANDROID_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrCreateTrackableImageDatabaseCompleteANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateTrackableTrackerANDROID(XrSession session, const XrTrackableTrackerCreateInfoANDROID *createInfo, XrTrackableTrackerANDROID *trackableTracker)
{
    struct xrCreateTrackableTrackerANDROID_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.trackableTracker = trackableTracker;
    UNIX_CALL_CHECKED(xrCreateTrackableTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardMETA(XrSession session, const XrVirtualKeyboardCreateInfoMETA *createInfo, XrVirtualKeyboardMETA *keyboard)
{
    struct xrCreateVirtualKeyboardMETA_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.keyboard = keyboard;
    UNIX_CALL_CHECKED(xrCreateVirtualKeyboardMETA, &params);
    return params.result;
}

XrResult WINAPI xrCreateVirtualKeyboardSpaceMETA(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo, XrSpace *keyboardSpace)
{
    struct xrCreateVirtualKeyboardSpaceMETA_params params;
    params.session = session;
    params.keyboard = keyboard;
    params.createInfo = createInfo;
    params.keyboardSpace = keyboardSpace;
    UNIX_CALL_CHECKED(xrCreateVirtualKeyboardSpaceMETA, &params);
    return params.result;
}

XrResult WINAPI xrCreateWorldMeshDetectorML(XrSession session, const XrWorldMeshDetectorCreateInfoML *createInfo, XrWorldMeshDetectorML *detector)
{
    struct xrCreateWorldMeshDetectorML_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.detector = detector;
    UNIX_CALL_CHECKED(xrCreateWorldMeshDetectorML, &params);
    return params.result;
}

XrResult WINAPI xrDeleteSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsDeleteInfoML *deleteInfo, XrFutureEXT *future)
{
    struct xrDeleteSpatialAnchorsAsyncML_params params;
    params.storage = storage;
    params.deleteInfo = deleteInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrDeleteSpatialAnchorsAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrDeleteSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsDeleteCompletionML *completion)
{
    struct xrDeleteSpatialAnchorsCompleteML_params params;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrDeleteSpatialAnchorsCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo)
{
    struct xrDeserializeSceneMSFT_params params;
    params.sceneObserver = sceneObserver;
    params.deserializeInfo = deserializeInfo;
    UNIX_CALL_CHECKED(xrDeserializeSceneMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroyAction(XrAction action)
{
    struct xrDestroyAction_params params;
    params.action = action;
    UNIX_CALL_CHECKED(xrDestroyAction, &params);
    return params.result;
}

XrResult WINAPI xrDestroyActionSet(XrActionSet actionSet)
{
    struct xrDestroyActionSet_params params;
    params.actionSet = actionSet;
    UNIX_CALL_CHECKED(xrDestroyActionSet, &params);
    return params.result;
}

XrResult WINAPI xrDestroyAnchorBD(XrAnchorBD anchor)
{
    struct xrDestroyAnchorBD_params params;
    params.anchor = anchor;
    UNIX_CALL_CHECKED(xrDestroyAnchorBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerBD(XrBodyTrackerBD bodyTracker)
{
    struct xrDestroyBodyTrackerBD_params params;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrDestroyBodyTrackerBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerFB(XrBodyTrackerFB bodyTracker)
{
    struct xrDestroyBodyTrackerFB_params params;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrDestroyBodyTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyBodyTrackerHTC(XrBodyTrackerHTC bodyTracker)
{
    struct xrDestroyBodyTrackerHTC_params params;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrDestroyBodyTrackerHTC, &params);
    return params.result;
}

XrResult WINAPI xrDestroyDeviceAnchorPersistenceANDROID(XrDeviceAnchorPersistenceANDROID handle)
{
    struct xrDestroyDeviceAnchorPersistenceANDROID_params params;
    params.handle = handle;
    UNIX_CALL_CHECKED(xrDestroyDeviceAnchorPersistenceANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyExportedLocalizationMapML(XrExportedLocalizationMapML map)
{
    struct xrDestroyExportedLocalizationMapML_params params;
    params.map = map;
    UNIX_CALL_CHECKED(xrDestroyExportedLocalizationMapML, &params);
    return params.result;
}

XrResult WINAPI xrDestroyEyeTrackerANDROID(XrEyeTrackerANDROID eyeTracker)
{
    struct xrDestroyEyeTrackerANDROID_params params;
    params.eyeTracker = eyeTracker;
    UNIX_CALL_CHECKED(xrDestroyEyeTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyEyeTrackerFB(XrEyeTrackerFB eyeTracker)
{
    struct xrDestroyEyeTrackerFB_params params;
    params.eyeTracker = eyeTracker;
    UNIX_CALL_CHECKED(xrDestroyEyeTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFaceTracker2FB(XrFaceTracker2FB faceTracker)
{
    struct xrDestroyFaceTracker2FB_params params;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrDestroyFaceTracker2FB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerANDROID(XrFaceTrackerANDROID faceTracker)
{
    struct xrDestroyFaceTrackerANDROID_params params;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrDestroyFaceTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerBD(XrFaceTrackerBD tracker)
{
    struct xrDestroyFaceTrackerBD_params params;
    params.tracker = tracker;
    UNIX_CALL_CHECKED(xrDestroyFaceTrackerBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFaceTrackerFB(XrFaceTrackerFB faceTracker)
{
    struct xrDestroyFaceTrackerFB_params params;
    params.faceTracker = faceTracker;
    UNIX_CALL_CHECKED(xrDestroyFaceTrackerFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFacialExpressionClientML(XrFacialExpressionClientML facialExpressionClient)
{
    struct xrDestroyFacialExpressionClientML_params params;
    params.facialExpressionClient = facialExpressionClient;
    UNIX_CALL_CHECKED(xrDestroyFacialExpressionClientML, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker)
{
    struct xrDestroyFacialTrackerHTC_params params;
    params.facialTracker = facialTracker;
    UNIX_CALL_CHECKED(xrDestroyFacialTrackerHTC, &params);
    return params.result;
}

XrResult WINAPI xrDestroyFoveationProfileFB(XrFoveationProfileFB profile)
{
    struct xrDestroyFoveationProfileFB_params params;
    params.profile = profile;
    UNIX_CALL_CHECKED(xrDestroyFoveationProfileFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance)
{
    struct xrDestroyGeometryInstanceFB_params params;
    params.instance = instance;
    UNIX_CALL_CHECKED(xrDestroyGeometryInstanceFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyGeospatialTrackerANDROID(XrGeospatialTrackerANDROID geospatialTracker)
{
    struct xrDestroyGeospatialTrackerANDROID_params params;
    params.geospatialTracker = geospatialTracker;
    UNIX_CALL_CHECKED(xrDestroyGeospatialTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker)
{
    struct xrDestroyHandTrackerEXT_params params;
    params.handTracker = handTracker;
    UNIX_CALL_CHECKED(xrDestroyHandTrackerEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroyLightEstimatorANDROID(XrLightEstimatorANDROID estimator)
{
    struct xrDestroyLightEstimatorANDROID_params params;
    params.estimator = estimator;
    UNIX_CALL_CHECKED(xrDestroyLightEstimatorANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyMarkerDetectorML(XrMarkerDetectorML markerDetector)
{
    struct xrDestroyMarkerDetectorML_params params;
    params.markerDetector = markerDetector;
    UNIX_CALL_CHECKED(xrDestroyMarkerDetectorML, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut)
{
    struct xrDestroyPassthroughColorLutMETA_params params;
    params.colorLut = colorLut;
    UNIX_CALL_CHECKED(xrDestroyPassthroughColorLutMETA, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughFB(XrPassthroughFB passthrough)
{
    struct xrDestroyPassthroughFB_params params;
    params.passthrough = passthrough;
    UNIX_CALL_CHECKED(xrDestroyPassthroughFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughHTC(XrPassthroughHTC passthrough)
{
    struct xrDestroyPassthroughHTC_params params;
    params.passthrough = passthrough;
    UNIX_CALL_CHECKED(xrDestroyPassthroughHTC, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughLayerANDROID(XrPassthroughLayerANDROID layer)
{
    struct xrDestroyPassthroughLayerANDROID_params params;
    params.layer = layer;
    UNIX_CALL_CHECKED(xrDestroyPassthroughLayerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer)
{
    struct xrDestroyPassthroughLayerFB_params params;
    params.layer = layer;
    UNIX_CALL_CHECKED(xrDestroyPassthroughLayerFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroyPlaneDetectorEXT(XrPlaneDetectorEXT planeDetector)
{
    struct xrDestroyPlaneDetectorEXT_params params;
    params.planeDetector = planeDetector;
    UNIX_CALL_CHECKED(xrDestroyPlaneDetectorEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroyRenderModelAssetEXT(XrRenderModelAssetEXT asset)
{
    struct xrDestroyRenderModelAssetEXT_params params;
    params.asset = asset;
    UNIX_CALL_CHECKED(xrDestroyRenderModelAssetEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroyRenderModelEXT(XrRenderModelEXT renderModel)
{
    struct xrDestroyRenderModelEXT_params params;
    params.renderModel = renderModel;
    UNIX_CALL_CHECKED(xrDestroyRenderModelEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySceneMSFT(XrSceneMSFT scene)
{
    struct xrDestroySceneMSFT_params params;
    params.scene = scene;
    UNIX_CALL_CHECKED(xrDestroySceneMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySceneMeshSnapshotANDROID(XrSceneMeshSnapshotANDROID snapshot)
{
    struct xrDestroySceneMeshSnapshotANDROID_params params;
    params.snapshot = snapshot;
    UNIX_CALL_CHECKED(xrDestroySceneMeshSnapshotANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroySceneMeshingTrackerANDROID(XrSceneMeshingTrackerANDROID tracker)
{
    struct xrDestroySceneMeshingTrackerANDROID_params params;
    params.tracker = tracker;
    UNIX_CALL_CHECKED(xrDestroySceneMeshingTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver)
{
    struct xrDestroySceneObserverMSFT_params params;
    params.sceneObserver = sceneObserver;
    UNIX_CALL_CHECKED(xrDestroySceneObserverMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySenseDataProviderBD(XrSenseDataProviderBD provider)
{
    struct xrDestroySenseDataProviderBD_params params;
    params.provider = provider;
    UNIX_CALL_CHECKED(xrDestroySenseDataProviderBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySenseDataSnapshotBD(XrSenseDataSnapshotBD snapshot)
{
    struct xrDestroySenseDataSnapshotBD_params params;
    params.snapshot = snapshot;
    UNIX_CALL_CHECKED(xrDestroySenseDataSnapshotBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySoundFieldBD(XrSoundFieldBD soundField)
{
    struct xrDestroySoundFieldBD_params params;
    params.soundField = soundField;
    UNIX_CALL_CHECKED(xrDestroySoundFieldBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySoundObjectBD(XrSoundObjectBD soundObject)
{
    struct xrDestroySoundObjectBD_params params;
    params.soundObject = soundObject;
    UNIX_CALL_CHECKED(xrDestroySoundObjectBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySoundObstacleBD(XrSoundObstacleBD soundObstacle)
{
    struct xrDestroySoundObstacleBD_params params;
    params.soundObstacle = soundObstacle;
    UNIX_CALL_CHECKED(xrDestroySoundObstacleBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySoundObstacleMaterialBD(XrSoundObstacleMaterialBD material)
{
    struct xrDestroySoundObstacleMaterialBD_params params;
    params.material = material;
    UNIX_CALL_CHECKED(xrDestroySoundObstacleMaterialBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpace(XrSpace space)
{
    struct xrDestroySpace_params params;
    params.space = space;
    UNIX_CALL_CHECKED(xrDestroySpace, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpaceUserFB(XrSpaceUserFB user)
{
    struct xrDestroySpaceUserFB_params params;
    params.user = user;
    UNIX_CALL_CHECKED(xrDestroySpaceUserFB, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor)
{
    struct xrDestroySpatialAnchorMSFT_params params;
    params.anchor = anchor;
    UNIX_CALL_CHECKED(xrDestroySpatialAnchorMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore)
{
    struct xrDestroySpatialAnchorStoreConnectionMSFT_params params;
    params.spatialAnchorStore = spatialAnchorStore;
    UNIX_CALL_CHECKED(xrDestroySpatialAnchorStoreConnectionMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialAnchorsStorageML(XrSpatialAnchorsStorageML storage)
{
    struct xrDestroySpatialAnchorsStorageML_params params;
    params.storage = storage;
    UNIX_CALL_CHECKED(xrDestroySpatialAnchorsStorageML, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialAudioRendererBD(XrSpatialAudioRendererBD renderer)
{
    struct xrDestroySpatialAudioRendererBD_params params;
    params.renderer = renderer;
    UNIX_CALL_CHECKED(xrDestroySpatialAudioRendererBD, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialContainerEXT(XrSpatialContainerEXT spatialContainer)
{
    struct xrDestroySpatialContainerEXT_params params;
    params.spatialContainer = spatialContainer;
    UNIX_CALL_CHECKED(xrDestroySpatialContainerEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialContextEXT(XrSpatialContextEXT spatialContext)
{
    struct xrDestroySpatialContextEXT_params params;
    params.spatialContext = spatialContext;
    UNIX_CALL_CHECKED(xrDestroySpatialContextEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialEntityEXT(XrSpatialEntityEXT spatialEntity)
{
    struct xrDestroySpatialEntityEXT_params params;
    params.spatialEntity = spatialEntity;
    UNIX_CALL_CHECKED(xrDestroySpatialEntityEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialGraphNodeBindingMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding)
{
    struct xrDestroySpatialGraphNodeBindingMSFT_params params;
    params.nodeBinding = nodeBinding;
    UNIX_CALL_CHECKED(xrDestroySpatialGraphNodeBindingMSFT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialImageTrackingDatabaseEXT(XrSpatialImageTrackingDatabaseEXT database)
{
    struct xrDestroySpatialImageTrackingDatabaseEXT_params params;
    params.database = database;
    UNIX_CALL_CHECKED(xrDestroySpatialImageTrackingDatabaseEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialPersistenceContextEXT(XrSpatialPersistenceContextEXT persistenceContext)
{
    struct xrDestroySpatialPersistenceContextEXT_params params;
    params.persistenceContext = persistenceContext;
    UNIX_CALL_CHECKED(xrDestroySpatialPersistenceContextEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroySpatialSnapshotEXT(XrSpatialSnapshotEXT snapshot)
{
    struct xrDestroySpatialSnapshotEXT_params params;
    params.snapshot = snapshot;
    UNIX_CALL_CHECKED(xrDestroySpatialSnapshotEXT, &params);
    return params.result;
}

XrResult WINAPI xrDestroyTrackableImageDatabaseANDROID(XrTrackableImageDatabaseANDROID database)
{
    struct xrDestroyTrackableImageDatabaseANDROID_params params;
    params.database = database;
    UNIX_CALL_CHECKED(xrDestroyTrackableImageDatabaseANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyTrackableTrackerANDROID(XrTrackableTrackerANDROID trackableTracker)
{
    struct xrDestroyTrackableTrackerANDROID_params params;
    params.trackableTracker = trackableTracker;
    UNIX_CALL_CHECKED(xrDestroyTrackableTrackerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrDestroyVirtualKeyboardMETA(XrVirtualKeyboardMETA keyboard)
{
    struct xrDestroyVirtualKeyboardMETA_params params;
    params.keyboard = keyboard;
    UNIX_CALL_CHECKED(xrDestroyVirtualKeyboardMETA, &params);
    return params.result;
}

XrResult WINAPI xrDestroyWorldMeshDetectorML(XrWorldMeshDetectorML detector)
{
    struct xrDestroyWorldMeshDetectorML_params params;
    params.detector = detector;
    UNIX_CALL_CHECKED(xrDestroyWorldMeshDetectorML, &params);
    return params.result;
}

XrResult WINAPI xrDownloadSharedSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSharedSpatialAnchorDownloadInfoBD *info, XrFutureEXT *future)
{
    struct xrDownloadSharedSpatialAnchorAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrDownloadSharedSpatialAnchorAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrDownloadSharedSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrDownloadSharedSpatialAnchorCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrDownloadSharedSpatialAnchorCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrEnableLocalizationEventsML(XrSession session, const XrLocalizationEnableEventsInfoML *info)
{
    struct xrEnableLocalizationEventsML_params params;
    params.session = session;
    params.info = info;
    UNIX_CALL_CHECKED(xrEnableLocalizationEventsML, &params);
    return params.result;
}

XrResult WINAPI xrEnableUserCalibrationEventsML(XrInstance instance, const XrUserCalibrationEnableEventsInfoML *enableInfo)
{
    struct xrEnableUserCalibrationEventsML_params params;
    params.instance = instance;
    params.enableInfo = enableInfo;
    UNIX_CALL_CHECKED(xrEnableUserCalibrationEventsML, &params);
    return params.result;
}

XrResult WINAPI xrEndAudioPeriodBD(XrSpatialAudioRendererBD renderer)
{
    struct xrEndAudioPeriodBD_params params;
    params.renderer = renderer;
    UNIX_CALL_CHECKED(xrEndAudioPeriodBD, &params);
    return params.result;
}

XrResult WINAPI xrEndSession(XrSession session)
{
    struct xrEndSession_params params;
    params.session = session;
    UNIX_CALL_CHECKED(xrEndSession, &params);
    return params.result;
}

XrResult WINAPI xrEndSpatialContainerRenderingEXT(XrSession session, const XrSpatialContainerEndInfoEXT *endInfo)
{
    struct xrEndSpatialContainerRenderingEXT_params params;
    params.session = session;
    params.endInfo = endInfo;
    UNIX_CALL_CHECKED(xrEndSpatialContainerRenderingEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties)
{
    struct xrEnumerateApiLayerProperties_params params;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrEnumerateApiLayerProperties, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources)
{
    struct xrEnumerateBoundSourcesForAction_params params;
    params.session = session;
    params.enumerateInfo = enumerateInfo;
    params.sourceCapacityInput = sourceCapacityInput;
    params.sourceCountOutput = sourceCountOutput;
    params.sources = sources;
    UNIX_CALL_CHECKED(xrEnumerateBoundSourcesForAction, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces)
{
    struct xrEnumerateColorSpacesFB_params params;
    params.session = session;
    params.colorSpaceCapacityInput = colorSpaceCapacityInput;
    params.colorSpaceCountOutput = colorSpaceCountOutput;
    params.colorSpaces = colorSpaces;
    UNIX_CALL_CHECKED(xrEnumerateColorSpacesFB, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateColorSpacesSONY(XrSession session, const XrColorSpacesEnumerateInfoSONY *enumerateInfo, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceSONY *colorSpaces)
{
    struct xrEnumerateColorSpacesSONY_params params;
    params.session = session;
    params.enumerateInfo = enumerateInfo;
    params.colorSpaceCapacityInput = colorSpaceCapacityInput;
    params.colorSpaceCountOutput = colorSpaceCountOutput;
    params.colorSpaces = colorSpaces;
    UNIX_CALL_CHECKED(xrEnumerateColorSpacesSONY, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates)
{
    struct xrEnumerateDisplayRefreshRatesFB_params params;
    params.session = session;
    params.displayRefreshRateCapacityInput = displayRefreshRateCapacityInput;
    params.displayRefreshRateCountOutput = displayRefreshRateCountOutput;
    params.displayRefreshRates = displayRefreshRates;
    UNIX_CALL_CHECKED(xrEnumerateDisplayRefreshRatesFB, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes)
{
    struct xrEnumerateEnvironmentBlendModes_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.environmentBlendModeCapacityInput = environmentBlendModeCapacityInput;
    params.environmentBlendModeCountOutput = environmentBlendModeCountOutput;
    params.environmentBlendModes = environmentBlendModes;
    UNIX_CALL_CHECKED(xrEnumerateEnvironmentBlendModes, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentTexturePixelFormatsBD(XrSession session, uint32_t pixelFormatCapacityInput, uint32_t *pixelFormatCountOutput, XrEnvironmentTexturePixelFormatBD *pixelFormats)
{
    struct xrEnumerateEnvironmentTexturePixelFormatsBD_params params;
    params.session = session;
    params.pixelFormatCapacityInput = pixelFormatCapacityInput;
    params.pixelFormatCountOutput = pixelFormatCountOutput;
    params.pixelFormats = pixelFormats;
    UNIX_CALL_CHECKED(xrEnumerateEnvironmentTexturePixelFormatsBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentTextureResolutionsBD(XrSession session, uint32_t resolutionCapacityInput, uint32_t *resolutionCountOutput, XrEnvironmentTextureResolutionBD *resolutions)
{
    struct xrEnumerateEnvironmentTextureResolutionsBD_params params;
    params.session = session;
    params.resolutionCapacityInput = resolutionCapacityInput;
    params.resolutionCountOutput = resolutionCountOutput;
    params.resolutions = resolutions;
    UNIX_CALL_CHECKED(xrEnumerateEnvironmentTextureResolutionsBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateEnvironmentTextureTransferTypesBD(XrSession session, uint32_t transferTypeCapacityInput, uint32_t *transferTypeCountOutput, XrEnvironmentTextureTransferTypeBD *transferTypes)
{
    struct xrEnumerateEnvironmentTextureTransferTypesBD_params params;
    params.session = session;
    params.transferTypeCapacityInput = transferTypeCapacityInput;
    params.transferTypeCountOutput = transferTypeCountOutput;
    params.transferTypes = transferTypes;
    UNIX_CALL_CHECKED(xrEnumerateEnvironmentTextureTransferTypesBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras)
{
    struct xrEnumerateExternalCamerasOCULUS_params params;
    params.session = session;
    params.cameraCapacityInput = cameraCapacityInput;
    params.cameraCountOutput = cameraCountOutput;
    params.cameras = cameras;
    UNIX_CALL_CHECKED(xrEnumerateExternalCamerasOCULUS, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateFacialSimulationModesBD(XrSession session, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrFacialSimulationModeBD *modes)
{
    struct xrEnumerateFacialSimulationModesBD_params params;
    params.session = session;
    params.modeCapacityInput = modeCapacityInput;
    params.modeCountOutput = modeCountOutput;
    params.modes = modes;
    UNIX_CALL_CHECKED(xrEnumerateFacialSimulationModesBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties)
{
    struct xrEnumerateInstanceExtensionProperties_params params;
    params.layerName = layerName;
    params.propertyCapacityInput = propertyCapacityInput;
    params.propertyCountOutput = propertyCountOutput;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrEnumerateInstanceExtensionProperties, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateInteractionRenderModelIdsEXT(XrSession session, const XrInteractionRenderModelIdsEnumerateInfoEXT *getInfo, uint32_t renderModelIdCapacityInput, uint32_t *renderModelIdCountOutput, XrRenderModelIdEXT *renderModelIds)
{
    struct xrEnumerateInteractionRenderModelIdsEXT_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.renderModelIdCapacityInput = renderModelIdCapacityInput;
    params.renderModelIdCountOutput = renderModelIdCountOutput;
    params.renderModelIds = renderModelIds;
    UNIX_CALL_CHECKED(xrEnumerateInteractionRenderModelIdsEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumeratePerformanceMetricsCounterPathsANDROID(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    struct xrEnumeratePerformanceMetricsCounterPathsANDROID_params params;
    params.instance = instance;
    params.counterPathCapacityInput = counterPathCapacityInput;
    params.counterPathCountOutput = counterPathCountOutput;
    params.counterPaths = counterPaths;
    UNIX_CALL_CHECKED(xrEnumeratePerformanceMetricsCounterPathsANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths)
{
    struct xrEnumeratePerformanceMetricsCounterPathsMETA_params params;
    params.instance = instance;
    params.counterPathCapacityInput = counterPathCapacityInput;
    params.counterPathCountOutput = counterPathCountOutput;
    params.counterPaths = counterPaths;
    UNIX_CALL_CHECKED(xrEnumeratePerformanceMetricsCounterPathsMETA, &params);
    return params.result;
}

XrResult WINAPI xrEnumeratePersistedAnchorsANDROID(XrDeviceAnchorPersistenceANDROID handle, uint32_t anchorIdCapacityInput, uint32_t *anchorIdCountOutput, XrUuidEXT *anchorIds)
{
    struct xrEnumeratePersistedAnchorsANDROID_params params;
    params.handle = handle;
    params.anchorIdCapacityInput = anchorIdCapacityInput;
    params.anchorIdCountOutput = anchorIdCountOutput;
    params.anchorIds = anchorIds;
    UNIX_CALL_CHECKED(xrEnumeratePersistedAnchorsANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t *spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames)
{
    struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params params;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorNameCapacityInput = spatialAnchorNameCapacityInput;
    params.spatialAnchorNameCountOutput = spatialAnchorNameCountOutput;
    params.spatialAnchorNames = spatialAnchorNames;
    UNIX_CALL_CHECKED(xrEnumeratePersistedSpatialAnchorNamesMSFT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateRaycastSupportedTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    UNIX_CALL_CHECKED(xrEnumerateRaycastSupportedTrackableTypesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces)
{
    struct xrEnumerateReferenceSpaces_params params;
    params.session = session;
    params.spaceCapacityInput = spaceCapacityInput;
    params.spaceCountOutput = spaceCountOutput;
    params.spaces = spaces;
    UNIX_CALL_CHECKED(xrEnumerateReferenceSpaces, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths)
{
    struct xrEnumerateRenderModelPathsFB_params params;
    params.session = session;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    UNIX_CALL_CHECKED(xrEnumerateRenderModelPathsFB, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateRenderModelSubactionPathsEXT(XrRenderModelEXT renderModel, const XrInteractionRenderModelSubactionPathInfoEXT *info, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrPath *paths)
{
    struct xrEnumerateRenderModelSubactionPathsEXT_params params;
    params.renderModel = renderModel;
    params.info = info;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    UNIX_CALL_CHECKED(xrEnumerateRenderModelSubactionPathsEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes)
{
    struct xrEnumerateReprojectionModesMSFT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.modeCapacityInput = modeCapacityInput;
    params.modeCountOutput = modeCountOutput;
    params.modes = modes;
    UNIX_CALL_CHECKED(xrEnumerateReprojectionModesMSFT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features)
{
    struct xrEnumerateSceneComputeFeaturesMSFT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.featureCapacityInput = featureCapacityInput;
    params.featureCountOutput = featureCountOutput;
    params.features = features;
    UNIX_CALL_CHECKED(xrEnumerateSceneComputeFeaturesMSFT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpaceSupportedComponentsFB(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpaceComponentTypeFB *componentTypes)
{
    struct xrEnumerateSpaceSupportedComponentsFB_params params;
    params.space = space;
    params.componentTypeCapacityInput = componentTypeCapacityInput;
    params.componentTypeCountOutput = componentTypeCountOutput;
    params.componentTypes = componentTypes;
    UNIX_CALL_CHECKED(xrEnumerateSpaceSupportedComponentsFB, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialAnchorAttachableComponentsANDROID(XrInstance instance, XrSystemId systemId, uint32_t attachableComponentCapacityInput, uint32_t *attachableComponentCountOutput, XrSpatialComponentTypeEXT *attachableComponents)
{
    struct xrEnumerateSpatialAnchorAttachableComponentsANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.attachableComponentCapacityInput = attachableComponentCapacityInput;
    params.attachableComponentCountOutput = attachableComponentCountOutput;
    params.attachableComponents = attachableComponents;
    UNIX_CALL_CHECKED(xrEnumerateSpatialAnchorAttachableComponentsANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilitiesEXT(XrInstance instance, XrSystemId systemId, uint32_t capabilityCapacityInput, uint32_t *capabilityCountOutput, XrSpatialCapabilityEXT *capabilities)
{
    struct xrEnumerateSpatialCapabilitiesEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.capabilityCapacityInput = capabilityCapacityInput;
    params.capabilityCountOutput = capabilityCountOutput;
    params.capabilities = capabilities;
    UNIX_CALL_CHECKED(xrEnumerateSpatialCapabilitiesEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilityComponentTypesEXT(XrInstance instance, XrSystemId systemId, XrSpatialCapabilityEXT capability, XrSpatialCapabilityComponentTypesEXT *capabilityComponents)
{
    struct xrEnumerateSpatialCapabilityComponentTypesEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.capability = capability;
    params.capabilityComponents = capabilityComponents;
    UNIX_CALL_CHECKED(xrEnumerateSpatialCapabilityComponentTypesEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialCapabilityFeaturesEXT(XrInstance instance, XrSystemId systemId, XrSpatialCapabilityEXT capability, uint32_t capabilityFeatureCapacityInput, uint32_t *capabilityFeatureCountOutput, XrSpatialCapabilityFeatureEXT *capabilityFeatures)
{
    struct xrEnumerateSpatialCapabilityFeaturesEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.capability = capability;
    params.capabilityFeatureCapacityInput = capabilityFeatureCapacityInput;
    params.capabilityFeatureCountOutput = capabilityFeatureCountOutput;
    params.capabilityFeatures = capabilityFeatures;
    UNIX_CALL_CHECKED(xrEnumerateSpatialCapabilityFeaturesEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialEntityComponentTypesBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpatialEntityComponentTypeBD *componentTypes)
{
    struct xrEnumerateSpatialEntityComponentTypesBD_params params;
    params.snapshot = snapshot;
    params.entityId = entityId;
    params.componentTypeCapacityInput = componentTypeCapacityInput;
    params.componentTypeCountOutput = componentTypeCountOutput;
    params.componentTypes = componentTypes;
    UNIX_CALL_CHECKED(xrEnumerateSpatialEntityComponentTypesBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialPersistenceScopesEXT(XrInstance instance, XrSystemId systemId, uint32_t persistenceScopeCapacityInput, uint32_t *persistenceScopeCountOutput, XrSpatialPersistenceScopeEXT *persistenceScopes)
{
    struct xrEnumerateSpatialPersistenceScopesEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.persistenceScopeCapacityInput = persistenceScopeCapacityInput;
    params.persistenceScopeCountOutput = persistenceScopeCountOutput;
    params.persistenceScopes = persistenceScopes;
    UNIX_CALL_CHECKED(xrEnumerateSpatialPersistenceScopesEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSpatialReferenceImageFormatsEXT(XrInstance instance, XrSystemId systemId, XrSpatialCapabilityEXT capability, uint32_t formatCapacityInput, uint32_t *formatCountOutput, XrSpatialReferenceImageFormatEXT *formats)
{
    struct xrEnumerateSpatialReferenceImageFormatsEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.capability = capability;
    params.formatCapacityInput = formatCapacityInput;
    params.formatCountOutput = formatCountOutput;
    params.formats = formats;
    UNIX_CALL_CHECKED(xrEnumerateSpatialReferenceImageFormatsEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedAnchorTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    UNIX_CALL_CHECKED(xrEnumerateSupportedAnchorTrackableTypesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedAudioSampleRateBD(XrSession session, uint32_t sampleRateCapacityInput, uint32_t *sampleRateCountOutput, XrAudioSampleRateBD *sampleRates)
{
    struct xrEnumerateSupportedAudioSampleRateBD_params params;
    params.session = session;
    params.sampleRateCapacityInput = sampleRateCapacityInput;
    params.sampleRateCountOutput = sampleRateCountOutput;
    params.sampleRates = sampleRates;
    UNIX_CALL_CHECKED(xrEnumerateSupportedAudioSampleRateBD, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedPersistenceAnchorTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    UNIX_CALL_CHECKED(xrEnumerateSupportedPersistenceAnchorTypesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedSemanticLabelSetsANDROID(XrInstance instance, XrSystemId systemId, uint32_t supportedSemanticLabelSetsInputCapacity, uint32_t *supportedSemanticLabelSetsOutputCount, XrSceneMeshSemanticLabelSetANDROID *supportedSemanticLabelSets)
{
    struct xrEnumerateSupportedSemanticLabelSetsANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.supportedSemanticLabelSetsInputCapacity = supportedSemanticLabelSetsInputCapacity;
    params.supportedSemanticLabelSetsOutputCount = supportedSemanticLabelSetsOutputCount;
    params.supportedSemanticLabelSets = supportedSemanticLabelSets;
    UNIX_CALL_CHECKED(xrEnumerateSupportedSemanticLabelSetsANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedSpatialContainerGraphicsPresentationsEXT(XrInstance instance, XrSystemId systemId, uint32_t graphicsPresentationCapacityInput, uint32_t *graphicsPresentationCountOutput, XrSpatialContainerGraphicsPresentationEXT *graphicsPresentations)
{
    struct xrEnumerateSupportedSpatialContainerGraphicsPresentationsEXT_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsPresentationCapacityInput = graphicsPresentationCapacityInput;
    params.graphicsPresentationCountOutput = graphicsPresentationCountOutput;
    params.graphicsPresentations = graphicsPresentations;
    UNIX_CALL_CHECKED(xrEnumerateSupportedSpatialContainerGraphicsPresentationsEXT, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateSupportedTrackableTypesANDROID(XrInstance instance, XrSystemId systemId, uint32_t trackableTypeCapacityInput, uint32_t *trackableTypeCountOutput, XrTrackableTypeANDROID *trackableTypes)
{
    struct xrEnumerateSupportedTrackableTypesANDROID_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.trackableTypeCapacityInput = trackableTypeCapacityInput;
    params.trackableTypeCountOutput = trackableTypeCountOutput;
    params.trackableTypes = trackableTypes;
    UNIX_CALL_CHECKED(xrEnumerateSupportedTrackableTypesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views)
{
    struct xrEnumerateViewConfigurationViews_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    UNIX_CALL_CHECKED(xrEnumerateViewConfigurationViews, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes)
{
    struct xrEnumerateViewConfigurations_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationTypeCapacityInput = viewConfigurationTypeCapacityInput;
    params.viewConfigurationTypeCountOutput = viewConfigurationTypeCountOutput;
    params.viewConfigurationTypes = viewConfigurationTypes;
    UNIX_CALL_CHECKED(xrEnumerateViewConfigurations, &params);
    return params.result;
}

XrResult WINAPI xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths)
{
    struct xrEnumerateViveTrackerPathsHTCX_params params;
    params.instance = instance;
    params.pathCapacityInput = pathCapacityInput;
    params.pathCountOutput = pathCountOutput;
    params.paths = paths;
    UNIX_CALL_CHECKED(xrEnumerateViveTrackerPathsHTCX, &params);
    return params.result;
}

XrResult WINAPI xrEraseSpaceFB(XrSession session, const XrSpaceEraseInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrEraseSpaceFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrEraseSpaceFB, &params);
    return params.result;
}

XrResult WINAPI xrEraseSpacesMETA(XrSession session, const XrSpacesEraseInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrEraseSpacesMETA_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrEraseSpacesMETA, &params);
    return params.result;
}

XrResult WINAPI xrFreeWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferML *buffer)
{
    struct xrFreeWorldMeshBufferML_params params;
    params.detector = detector;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrFreeWorldMeshBufferML, &params);
    return params.result;
}

XrResult WINAPI xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation)
{
    struct xrGeometryInstanceSetTransformFB_params params;
    params.instance = instance;
    params.transformation = transformation;
    UNIX_CALL_CHECKED(xrGeometryInstanceSetTransformFB, &params);
    return params.result;
}

XrResult WINAPI xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state)
{
    struct xrGetActionStateBoolean_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetActionStateBoolean, &params);
    return params.result;
}

XrResult WINAPI xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state)
{
    struct xrGetActionStateFloat_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetActionStateFloat, &params);
    return params.result;
}

XrResult WINAPI xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state)
{
    struct xrGetActionStatePose_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetActionStatePose, &params);
    return params.result;
}

XrResult WINAPI xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state)
{
    struct xrGetActionStateVector2f_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetActionStateVector2f, &params);
    return params.result;
}

XrResult WINAPI xrGetAllSubmeshStatesANDROID(XrSceneMeshSnapshotANDROID snapshot, uint32_t submeshStateCapacityInput, uint32_t *submeshStateCountOutput, XrSceneSubmeshStateANDROID *submeshStates)
{
    struct xrGetAllSubmeshStatesANDROID_params params;
    params.snapshot = snapshot;
    params.submeshStateCapacityInput = submeshStateCapacityInput;
    params.submeshStateCountOutput = submeshStateCountOutput;
    params.submeshStates = submeshStates;
    UNIX_CALL_CHECKED(xrGetAllSubmeshStatesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetAllTrackablesANDROID(XrTrackableTrackerANDROID trackableTracker, uint32_t trackableCapacityInput, uint32_t *trackableCountOutput, XrTrackableANDROID *trackables)
{
    struct xrGetAllTrackablesANDROID_params params;
    params.trackableTracker = trackableTracker;
    params.trackableCapacityInput = trackableCapacityInput;
    params.trackableCountOutput = trackableCountOutput;
    params.trackables = trackables;
    UNIX_CALL_CHECKED(xrGetAllTrackablesANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetAnchorPersistStateANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrUuidEXT *anchorId, XrAnchorPersistStateANDROID *persistState)
{
    struct xrGetAnchorPersistStateANDROID_params params;
    params.handle = handle;
    params.anchorId = anchorId;
    params.persistState = persistState;
    UNIX_CALL_CHECKED(xrGetAnchorPersistStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetAnchorUuidBD(XrAnchorBD anchor, XrUuidEXT *uuid)
{
    struct xrGetAnchorUuidBD_params params;
    params.anchor = anchor;
    params.uuid = uuid;
    UNIX_CALL_CHECKED(xrGetAnchorUuidBD, &params);
    return params.result;
}

XrResult WINAPI xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS])
{
    struct xrGetAudioInputDeviceGuidOculus_params params;
    params.instance = instance;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetAudioInputDeviceGuidOculus, &params);
    return params.result;
}

XrResult WINAPI xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS])
{
    struct xrGetAudioOutputDeviceGuidOculus_params params;
    params.instance = instance;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetAudioOutputDeviceGuidOculus, &params);
    return params.result;
}

XrResult WINAPI xrGetBodySkeletonFB(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB *skeleton)
{
    struct xrGetBodySkeletonFB_params params;
    params.bodyTracker = bodyTracker;
    params.skeleton = skeleton;
    UNIX_CALL_CHECKED(xrGetBodySkeletonFB, &params);
    return params.result;
}

XrResult WINAPI xrGetBodySkeletonHTC(XrBodyTrackerHTC bodyTracker, XrSpace baseSpace, uint32_t skeletonGenerationId, XrBodySkeletonHTC *skeleton)
{
    struct xrGetBodySkeletonHTC_params params;
    params.bodyTracker = bodyTracker;
    params.baseSpace = baseSpace;
    params.skeletonGenerationId = skeletonGenerationId;
    params.skeleton = skeleton;
    UNIX_CALL_CHECKED(xrGetBodySkeletonHTC, &params);
    return params.result;
}

XrResult WINAPI xrGetBodyTrackingStateBD(XrSession session, XrBodyTrackingStateBD *state)
{
    struct xrGetBodyTrackingStateBD_params params;
    params.session = session;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetBodyTrackingStateBD, &params);
    return params.result;
}

XrResult WINAPI xrGetCoarseTrackingEyesInfoANDROID(XrEyeTrackerANDROID eyeTracker, const XrEyesGetInfoANDROID *getInfo, XrEyesANDROID *eyesOutput)
{
    struct xrGetCoarseTrackingEyesInfoANDROID_params params;
    params.eyeTracker = eyeTracker;
    params.getInfo = getInfo;
    params.eyesOutput = eyesOutput;
    UNIX_CALL_CHECKED(xrGetCoarseTrackingEyesInfoANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState)
{
    struct xrGetControllerModelKeyMSFT_params params;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.controllerModelKeyState = controllerModelKeyState;
    UNIX_CALL_CHECKED(xrGetControllerModelKeyMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties)
{
    struct xrGetControllerModelPropertiesMSFT_params params;
    params.session = session;
    params.modelKey = modelKey;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetControllerModelPropertiesMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state)
{
    struct xrGetControllerModelStateMSFT_params params;
    params.session = session;
    params.modelKey = modelKey;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetControllerModelStateMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile)
{
    struct xrGetCurrentInteractionProfile_params params;
    params.session = session;
    params.topLevelUserPath = topLevelUserPath;
    params.interactionProfile = interactionProfile;
    UNIX_CALL_CHECKED(xrGetCurrentInteractionProfile, &params);
    return params.result;
}

XrResult WINAPI xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate)
{
    struct xrGetDeviceSampleRateFB_params params;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.deviceSampleRate = deviceSampleRate;
    UNIX_CALL_CHECKED(xrGetDeviceSampleRateFB, &params);
    return params.result;
}

XrResult WINAPI xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate)
{
    struct xrGetDisplayRefreshRateFB_params params;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    UNIX_CALL_CHECKED(xrGetDisplayRefreshRateFB, &params);
    return params.result;
}

XrResult WINAPI xrGetExportedLocalizationMapDataML(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetExportedLocalizationMapDataML_params params;
    params.map = map;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetExportedLocalizationMapDataML, &params);
    return params.result;
}

XrResult WINAPI xrGetEyeGazesFB(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB *gazeInfo, XrEyeGazesFB *eyeGazes)
{
    struct xrGetEyeGazesFB_params params;
    params.eyeTracker = eyeTracker;
    params.gazeInfo = gazeInfo;
    params.eyeGazes = eyeGazes;
    UNIX_CALL_CHECKED(xrGetEyeGazesFB, &params);
    return params.result;
}

XrResult WINAPI xrGetFaceCalibrationStateANDROID(XrFaceTrackerANDROID faceTracker, XrBool32 *faceIsCalibratedOutput)
{
    struct xrGetFaceCalibrationStateANDROID_params params;
    params.faceTracker = faceTracker;
    params.faceIsCalibratedOutput = faceIsCalibratedOutput;
    UNIX_CALL_CHECKED(xrGetFaceCalibrationStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeights2FB(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB *expressionInfo, XrFaceExpressionWeights2FB *expressionWeights)
{
    struct xrGetFaceExpressionWeights2FB_params params;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    UNIX_CALL_CHECKED(xrGetFaceExpressionWeights2FB, &params);
    return params.result;
}

XrResult WINAPI xrGetFaceExpressionWeightsFB(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB *expressionInfo, XrFaceExpressionWeightsFB *expressionWeights)
{
    struct xrGetFaceExpressionWeightsFB_params params;
    params.faceTracker = faceTracker;
    params.expressionInfo = expressionInfo;
    params.expressionWeights = expressionWeights;
    UNIX_CALL_CHECKED(xrGetFaceExpressionWeightsFB, &params);
    return params.result;
}

XrResult WINAPI xrGetFaceStateANDROID(XrFaceTrackerANDROID faceTracker, const XrFaceStateGetInfoANDROID *getInfo, XrFaceStateANDROID *faceStateOutput)
{
    struct xrGetFaceStateANDROID_params params;
    params.faceTracker = faceTracker;
    params.getInfo = getInfo;
    params.faceStateOutput = faceStateOutput;
    UNIX_CALL_CHECKED(xrGetFaceStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetFacialExpressionBlendShapePropertiesML(XrFacialExpressionClientML facialExpressionClient, const XrFacialExpressionBlendShapeGetInfoML *blendShapeGetInfo, uint32_t blendShapeCount, XrFacialExpressionBlendShapePropertiesML *blendShapes)
{
    struct xrGetFacialExpressionBlendShapePropertiesML_params params;
    params.facialExpressionClient = facialExpressionClient;
    params.blendShapeGetInfo = blendShapeGetInfo;
    params.blendShapeCount = blendShapeCount;
    params.blendShapes = blendShapes;
    UNIX_CALL_CHECKED(xrGetFacialExpressionBlendShapePropertiesML, &params);
    return params.result;
}

XrResult WINAPI xrGetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC *facialExpressions)
{
    struct xrGetFacialExpressionsHTC_params params;
    params.facialTracker = facialTracker;
    params.facialExpressions = facialExpressions;
    UNIX_CALL_CHECKED(xrGetFacialExpressionsHTC, &params);
    return params.result;
}

XrResult WINAPI xrGetFacialSimulationDataBD(XrFaceTrackerBD tracker, const XrFacialSimulationDataGetInfoBD *info, XrFacialSimulationDataBD *facialData)
{
    struct xrGetFacialSimulationDataBD_params params;
    params.tracker = tracker;
    params.info = info;
    params.facialData = facialData;
    UNIX_CALL_CHECKED(xrGetFacialSimulationDataBD, &params);
    return params.result;
}

XrResult WINAPI xrGetFacialSimulationModeBD(XrFaceTrackerBD tracker, XrFacialSimulationModeBD *mode)
{
    struct xrGetFacialSimulationModeBD_params params;
    params.tracker = tracker;
    params.mode = mode;
    UNIX_CALL_CHECKED(xrGetFacialSimulationModeBD, &params);
    return params.result;
}

XrResult WINAPI xrGetFineTrackingEyesInfoANDROID(XrEyeTrackerANDROID eyeTracker, const XrEyesGetInfoANDROID *getInfo, XrEyesANDROID *eyesOutput)
{
    struct xrGetFineTrackingEyesInfoANDROID_params params;
    params.eyeTracker = eyeTracker;
    params.getInfo = getInfo;
    params.eyesOutput = eyesOutput;
    UNIX_CALL_CHECKED(xrGetFineTrackingEyesInfoANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState)
{
    struct xrGetFoveationEyeTrackedStateMETA_params params;
    params.session = session;
    params.foveationState = foveationState;
    UNIX_CALL_CHECKED(xrGetFoveationEyeTrackedStateMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetHandGestureQCOM(XrHandTrackerEXT handTracker, XrTime time, XrHandGestureQCOM *handGesture)
{
    struct xrGetHandGestureQCOM_params params;
    params.handTracker = handTracker;
    params.time = time;
    params.handGesture = handGesture;
    UNIX_CALL_CHECKED(xrGetHandGestureQCOM, &params);
    return params.result;
}

XrResult WINAPI xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh)
{
    struct xrGetHandMeshFB_params params;
    params.handTracker = handTracker;
    params.mesh = mesh;
    UNIX_CALL_CHECKED(xrGetHandMeshFB, &params);
    return params.result;
}

XrResult WINAPI xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetInputSourceLocalizedName_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetInputSourceLocalizedName, &params);
    return params.result;
}

XrResult WINAPI xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties)
{
    struct xrGetInstanceProperties_params params;
    params.instance = instance;
    params.instanceProperties = instanceProperties;
    UNIX_CALL_CHECKED(xrGetInstanceProperties, &params);
    return params.result;
}

XrResult WINAPI xrGetLightEstimateANDROID(XrLightEstimatorANDROID estimator, const XrLightEstimateGetInfoANDROID *input, XrLightEstimateANDROID *output)
{
    struct xrGetLightEstimateANDROID_params params;
    params.estimator = estimator;
    params.input = input;
    params.output = output;
    UNIX_CALL_CHECKED(xrGetLightEstimateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerDetectorStateML(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML *state)
{
    struct xrGetMarkerDetectorStateML_params params;
    params.markerDetector = markerDetector;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetMarkerDetectorStateML, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerLengthML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *meters)
{
    struct xrGetMarkerLengthML_params params;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.meters = meters;
    UNIX_CALL_CHECKED(xrGetMarkerLengthML, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerNumberML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t *number)
{
    struct xrGetMarkerNumberML_params params;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.number = number;
    UNIX_CALL_CHECKED(xrGetMarkerNumberML, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerReprojectionErrorML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *reprojectionErrorMeters)
{
    struct xrGetMarkerReprojectionErrorML_params params;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.reprojectionErrorMeters = reprojectionErrorMeters;
    UNIX_CALL_CHECKED(xrGetMarkerReprojectionErrorML, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerSizeVARJO(XrSession session, uint64_t markerId, XrExtent2Df *size)
{
    struct xrGetMarkerSizeVARJO_params params;
    params.session = session;
    params.markerId = markerId;
    params.size = size;
    UNIX_CALL_CHECKED(xrGetMarkerSizeVARJO, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkerStringML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetMarkerStringML_params params;
    params.markerDetector = markerDetector;
    params.marker = marker;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetMarkerStringML, &params);
    return params.result;
}

XrResult WINAPI xrGetMarkersML(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t *markerCountOutput, XrMarkerML *markers)
{
    struct xrGetMarkersML_params params;
    params.markerDetector = markerDetector;
    params.markerCapacityInput = markerCapacityInput;
    params.markerCountOutput = markerCountOutput;
    params.markers = markers;
    UNIX_CALL_CHECKED(xrGetMarkersML, &params);
    return params.result;
}

XrResult WINAPI xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements)
{
    struct xrGetOpenGLGraphicsRequirementsKHR_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    UNIX_CALL_CHECKED(xrGetOpenGLGraphicsRequirementsKHR, &params);
    return params.result;
}

XrResult WINAPI xrGetPassthroughCameraStateANDROID(XrSession session, const XrPassthroughCameraStateGetInfoANDROID *getInfo, XrPassthroughCameraStateANDROID *cameraStateOutput)
{
    struct xrGetPassthroughCameraStateANDROID_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.cameraStateOutput = cameraStateOutput;
    UNIX_CALL_CHECKED(xrGetPassthroughCameraStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetPassthroughPreferencesMETA(XrSession session, XrPassthroughPreferencesMETA *preferences)
{
    struct xrGetPassthroughPreferencesMETA_params params;
    params.session = session;
    params.preferences = preferences;
    UNIX_CALL_CHECKED(xrGetPassthroughPreferencesMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetPerformanceMetricsStateANDROID(XrSession session, XrPerformanceMetricsStateANDROID *state)
{
    struct xrGetPerformanceMetricsStateANDROID_params params;
    params.session = session;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetPerformanceMetricsStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state)
{
    struct xrGetPerformanceMetricsStateMETA_params params;
    params.session = session;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetPerformanceMetricsStateMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionStateEXT(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT *state)
{
    struct xrGetPlaneDetectionStateEXT_params params;
    params.planeDetector = planeDetector;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetPlaneDetectionStateEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetPlaneDetectionsEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT *info, XrPlaneDetectorLocationsEXT *locations)
{
    struct xrGetPlaneDetectionsEXT_params params;
    params.planeDetector = planeDetector;
    params.info = info;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrGetPlaneDetectionsEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetPlanePolygonBufferEXT(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT *polygonBuffer)
{
    struct xrGetPlanePolygonBufferEXT_params params;
    params.planeDetector = planeDetector;
    params.planeId = planeId;
    params.polygonBufferIndex = polygonBufferIndex;
    params.polygonBuffer = polygonBuffer;
    UNIX_CALL_CHECKED(xrGetPlanePolygonBufferEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetQueriedSenseDataBD(XrSenseDataSnapshotBD snapshot, XrQueriedSenseDataGetInfoBD *getInfo, XrQueriedSenseDataBD *queriedSenseData)
{
    struct xrGetQueriedSenseDataBD_params params;
    params.snapshot = snapshot;
    params.getInfo = getInfo;
    params.queriedSenseData = queriedSenseData;
    UNIX_CALL_CHECKED(xrGetQueriedSenseDataBD, &params);
    return params.result;
}

XrResult WINAPI xrGetRecommendedLayerResolutionMETA(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA *info, XrRecommendedLayerResolutionMETA *resolution)
{
    struct xrGetRecommendedLayerResolutionMETA_params params;
    params.session = session;
    params.info = info;
    params.resolution = resolution;
    UNIX_CALL_CHECKED(xrGetRecommendedLayerResolutionMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds)
{
    struct xrGetReferenceSpaceBoundsRect_params params;
    params.session = session;
    params.referenceSpaceType = referenceSpaceType;
    params.bounds = bounds;
    UNIX_CALL_CHECKED(xrGetReferenceSpaceBoundsRect, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelAssetDataEXT(XrRenderModelAssetEXT asset, const XrRenderModelAssetDataGetInfoEXT *getInfo, XrRenderModelAssetDataEXT *buffer)
{
    struct xrGetRenderModelAssetDataEXT_params params;
    params.asset = asset;
    params.getInfo = getInfo;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetRenderModelAssetDataEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelAssetPropertiesEXT(XrRenderModelAssetEXT asset, const XrRenderModelAssetPropertiesGetInfoEXT *getInfo, XrRenderModelAssetPropertiesEXT *properties)
{
    struct xrGetRenderModelAssetPropertiesEXT_params params;
    params.asset = asset;
    params.getInfo = getInfo;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetRenderModelAssetPropertiesEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelPoseTopLevelUserPathEXT(XrRenderModelEXT renderModel, const XrInteractionRenderModelTopLevelUserPathGetInfoEXT *info, XrPath *topLevelUserPath)
{
    struct xrGetRenderModelPoseTopLevelUserPathEXT_params params;
    params.renderModel = renderModel;
    params.info = info;
    params.topLevelUserPath = topLevelUserPath;
    UNIX_CALL_CHECKED(xrGetRenderModelPoseTopLevelUserPathEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelPropertiesEXT(XrRenderModelEXT renderModel, const XrRenderModelPropertiesGetInfoEXT *getInfo, XrRenderModelPropertiesEXT *properties)
{
    struct xrGetRenderModelPropertiesEXT_params params;
    params.renderModel = renderModel;
    params.getInfo = getInfo;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetRenderModelPropertiesEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties)
{
    struct xrGetRenderModelPropertiesFB_params params;
    params.session = session;
    params.path = path;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetRenderModelPropertiesFB, &params);
    return params.result;
}

XrResult WINAPI xrGetRenderModelStateEXT(XrRenderModelEXT renderModel, const XrRenderModelStateGetInfoEXT *getInfo, XrRenderModelStateEXT *state)
{
    struct xrGetRenderModelStateEXT_params params;
    params.renderModel = renderModel;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetRenderModelStateEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components)
{
    struct xrGetSceneComponentsMSFT_params params;
    params.scene = scene;
    params.getInfo = getInfo;
    params.components = components;
    UNIX_CALL_CHECKED(xrGetSceneComponentsMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state)
{
    struct xrGetSceneComputeStateMSFT_params params;
    params.sceneObserver = sceneObserver;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetSceneComputeStateMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerDecodedStringMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetSceneMarkerDecodedStringMSFT_params params;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSceneMarkerDecodedStringMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSceneMarkerRawDataMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrGetSceneMarkerRawDataMSFT_params params;
    params.scene = scene;
    params.markerId = markerId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSceneMarkerRawDataMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers)
{
    struct xrGetSceneMeshBuffersMSFT_params params;
    params.scene = scene;
    params.getInfo = getInfo;
    params.buffers = buffers;
    UNIX_CALL_CHECKED(xrGetSceneMeshBuffersMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSenseDataProviderStateBD(XrSenseDataProviderBD provider, XrSenseDataProviderStateBD *state)
{
    struct xrGetSenseDataProviderStateBD_params params;
    params.provider = provider;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetSenseDataProviderStateBD, &params);
    return params.result;
}

XrResult WINAPI xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer)
{
    struct xrGetSerializedSceneFragmentDataMSFT_params params;
    params.scene = scene;
    params.getInfo = getInfo;
    params.countInput = countInput;
    params.readOutput = readOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSerializedSceneFragmentDataMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundary2DFB(XrSession session, XrSpace space, XrBoundary2DFB *boundary2DOutput)
{
    struct xrGetSpaceBoundary2DFB_params params;
    params.session = session;
    params.space = space;
    params.boundary2DOutput = boundary2DOutput;
    UNIX_CALL_CHECKED(xrGetSpaceBoundary2DFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox2DFB(XrSession session, XrSpace space, XrRect2Df *boundingBox2DOutput)
{
    struct xrGetSpaceBoundingBox2DFB_params params;
    params.session = session;
    params.space = space;
    params.boundingBox2DOutput = boundingBox2DOutput;
    UNIX_CALL_CHECKED(xrGetSpaceBoundingBox2DFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceBoundingBox3DFB(XrSession session, XrSpace space, XrRect3DfFB *boundingBox3DOutput)
{
    struct xrGetSpaceBoundingBox3DFB_params params;
    params.session = session;
    params.space = space;
    params.boundingBox3DOutput = boundingBox3DOutput;
    UNIX_CALL_CHECKED(xrGetSpaceBoundingBox3DFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceComponentStatusFB(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB *status)
{
    struct xrGetSpaceComponentStatusFB_params params;
    params.space = space;
    params.componentType = componentType;
    params.status = status;
    UNIX_CALL_CHECKED(xrGetSpaceComponentStatusFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceContainerFB(XrSession session, XrSpace space, XrSpaceContainerFB *spaceContainerOutput)
{
    struct xrGetSpaceContainerFB_params params;
    params.session = session;
    params.space = space;
    params.spaceContainerOutput = spaceContainerOutput;
    UNIX_CALL_CHECKED(xrGetSpaceContainerFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceRoomLayoutFB(XrSession session, XrSpace space, XrRoomLayoutFB *roomLayoutOutput)
{
    struct xrGetSpaceRoomLayoutFB_params params;
    params.session = session;
    params.space = space;
    params.roomLayoutOutput = roomLayoutOutput;
    UNIX_CALL_CHECKED(xrGetSpaceRoomLayoutFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceRoomMeshFaceIndicesMETA(XrSpace space, const XrUuid *faceUuid, XrRoomMeshFaceIndicesMETA *roomMeshFaceIndicesOutput)
{
    struct xrGetSpaceRoomMeshFaceIndicesMETA_params params;
    params.space = space;
    params.faceUuid = faceUuid;
    params.roomMeshFaceIndicesOutput = roomMeshFaceIndicesOutput;
    UNIX_CALL_CHECKED(xrGetSpaceRoomMeshFaceIndicesMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceRoomMeshMETA(XrSpace space, const XrSpaceRoomMeshGetInfoMETA *getInfo, XrRoomMeshMETA *roomMeshOutput)
{
    struct xrGetSpaceRoomMeshMETA_params params;
    params.space = space;
    params.getInfo = getInfo;
    params.roomMeshOutput = roomMeshOutput;
    UNIX_CALL_CHECKED(xrGetSpaceRoomMeshMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceSemanticLabelsFB(XrSession session, XrSpace space, XrSemanticLabelsFB *semanticLabelsOutput)
{
    struct xrGetSpaceSemanticLabelsFB_params params;
    params.session = session;
    params.space = space;
    params.semanticLabelsOutput = semanticLabelsOutput;
    UNIX_CALL_CHECKED(xrGetSpaceSemanticLabelsFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceTriangleMeshMETA(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA *getInfo, XrSpaceTriangleMeshMETA *triangleMeshOutput)
{
    struct xrGetSpaceTriangleMeshMETA_params params;
    params.space = space;
    params.getInfo = getInfo;
    params.triangleMeshOutput = triangleMeshOutput;
    UNIX_CALL_CHECKED(xrGetSpaceTriangleMeshMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceUserIdFB(XrSpaceUserFB user, XrSpaceUserIdFB *userId)
{
    struct xrGetSpaceUserIdFB_params params;
    params.user = user;
    params.userId = userId;
    UNIX_CALL_CHECKED(xrGetSpaceUserIdFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpaceUuidFB(XrSpace space, XrUuidEXT *uuid)
{
    struct xrGetSpaceUuidFB_params params;
    params.space = space;
    params.uuid = uuid;
    UNIX_CALL_CHECKED(xrGetSpaceUuidFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialAnchorNameHTC(XrSpace anchor, XrSpatialAnchorNameHTC *name)
{
    struct xrGetSpatialAnchorNameHTC_params params;
    params.anchor = anchor;
    params.name = name;
    UNIX_CALL_CHECKED(xrGetSpatialAnchorNameHTC, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialAnchorStateML(XrSpace anchor, XrSpatialAnchorStateML *state)
{
    struct xrGetSpatialAnchorStateML_params params;
    params.anchor = anchor;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetSpatialAnchorStateML, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferFloatEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, float *buffer)
{
    struct xrGetSpatialBufferFloatEXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferFloatEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferStringEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetSpatialBufferStringEXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferStringEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint16EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint16_t *buffer)
{
    struct xrGetSpatialBufferUint16EXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferUint16EXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint32EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint32_t *buffer)
{
    struct xrGetSpatialBufferUint32EXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferUint32EXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferUint8EXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrGetSpatialBufferUint8EXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferUint8EXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferVector2fEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, XrVector2f *buffer)
{
    struct xrGetSpatialBufferVector2fEXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferVector2fEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialBufferVector3fEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialBufferGetInfoEXT *info, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, XrVector3f *buffer)
{
    struct xrGetSpatialBufferVector3fEXT_params params;
    params.snapshot = snapshot;
    params.info = info;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetSpatialBufferVector3fEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialContainerBoundsEXT(XrSpatialContainerEXT spatialContainer, const XrSpatialContainerBoundsGetInfoEXT *getInfo, XrSpatialContainerBoundsEXT *bounds)
{
    struct xrGetSpatialContainerBoundsEXT_params params;
    params.spatialContainer = spatialContainer;
    params.getInfo = getInfo;
    params.bounds = bounds;
    UNIX_CALL_CHECKED(xrGetSpatialContainerBoundsEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialContainerStateEXT(XrSpatialContainerEXT spatialContainer, const XrSpatialContainerStateGetInfoEXT *getInfo, XrSpatialContainerStateEXT *state)
{
    struct xrGetSpatialContainerStateEXT_params params;
    params.spatialContainer = spatialContainer;
    params.getInfo = getInfo;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetSpatialContainerStateEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialEntityComponentDataBD(XrSenseDataSnapshotBD snapshot, const XrSpatialEntityComponentGetInfoBD *getInfo, XrSpatialEntityComponentDataBaseHeaderBD *componentData)
{
    struct xrGetSpatialEntityComponentDataBD_params params;
    params.snapshot = snapshot;
    params.getInfo = getInfo;
    params.componentData = componentData;
    UNIX_CALL_CHECKED(xrGetSpatialEntityComponentDataBD, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialEntityUuidBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, XrUuidEXT *uuid)
{
    struct xrGetSpatialEntityUuidBD_params params;
    params.snapshot = snapshot;
    params.entityId = entityId;
    params.uuid = uuid;
    UNIX_CALL_CHECKED(xrGetSpatialEntityUuidBD, &params);
    return params.result;
}

XrResult WINAPI xrGetSpatialGraphNodeBindingPropertiesMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo, XrSpatialGraphNodeBindingPropertiesMSFT *properties)
{
    struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params params;
    params.nodeBinding = nodeBinding;
    params.getInfo = getInfo;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetSpatialGraphNodeBindingPropertiesMSFT, &params);
    return params.result;
}

XrResult WINAPI xrGetStationaryReferenceSpaceGenerationIdEXT(XrSession session, const XrStationaryReferenceSpaceGenerationIdGetInfoEXT *getInfo, XrStationaryReferenceSpaceGenerationIdResultEXT *generationIdResult)
{
    struct xrGetStationaryReferenceSpaceGenerationIdEXT_params params;
    params.session = session;
    params.getInfo = getInfo;
    params.generationIdResult = generationIdResult;
    UNIX_CALL_CHECKED(xrGetStationaryReferenceSpaceGenerationIdEXT, &params);
    return params.result;
}

XrResult WINAPI xrGetSubmeshDataANDROID(XrSceneMeshSnapshotANDROID snapshot, uint32_t submeshDataCount, XrSceneSubmeshDataANDROID *inoutSubmeshData)
{
    struct xrGetSubmeshDataANDROID_params params;
    params.snapshot = snapshot;
    params.submeshDataCount = submeshDataCount;
    params.inoutSubmeshData = inoutSubmeshData;
    UNIX_CALL_CHECKED(xrGetSubmeshDataANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state)
{
    struct xrGetSwapchainStateFB_params params;
    params.swapchain = swapchain;
    params.state = state;
    UNIX_CALL_CHECKED(xrGetSwapchainStateFB, &params);
    return params.result;
}

XrResult WINAPI xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties)
{
    struct xrGetSystemProperties_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrGetSystemProperties, &params);
    return params.result;
}

XrResult WINAPI xrGetTrackableImageANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableImageANDROID *trackable)
{
    struct xrGetTrackableImageANDROID_params params;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.trackable = trackable;
    UNIX_CALL_CHECKED(xrGetTrackableImageANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetTrackableMarkerANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableMarkerANDROID *markerOutput)
{
    struct xrGetTrackableMarkerANDROID_params params;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.markerOutput = markerOutput;
    UNIX_CALL_CHECKED(xrGetTrackableMarkerANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetTrackableObjectANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableObjectANDROID *objectOutput)
{
    struct xrGetTrackableObjectANDROID_params params;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.objectOutput = objectOutput;
    UNIX_CALL_CHECKED(xrGetTrackableObjectANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetTrackablePlaneANDROID(XrTrackableTrackerANDROID trackableTracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackablePlaneANDROID *planeOutput)
{
    struct xrGetTrackablePlaneANDROID_params params;
    params.trackableTracker = trackableTracker;
    params.getInfo = getInfo;
    params.planeOutput = planeOutput;
    UNIX_CALL_CHECKED(xrGetTrackablePlaneANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetTrackableQrCodeANDROID(XrTrackableTrackerANDROID tracker, const XrTrackableGetInfoANDROID *getInfo, XrTrackableQrCodeANDROID *qrCodeOutput)
{
    struct xrGetTrackableQrCodeANDROID_params params;
    params.tracker = tracker;
    params.getInfo = getInfo;
    params.qrCodeOutput = qrCodeOutput;
    UNIX_CALL_CHECKED(xrGetTrackableQrCodeANDROID, &params);
    return params.result;
}

XrResult WINAPI xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties)
{
    struct xrGetViewConfigurationProperties_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.viewConfigurationType = viewConfigurationType;
    params.configurationProperties = configurationProperties;
    UNIX_CALL_CHECKED(xrGetViewConfigurationProperties, &params);
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardDirtyTexturesMETA(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t *textureIdCountOutput, uint64_t *textureIds)
{
    struct xrGetVirtualKeyboardDirtyTexturesMETA_params params;
    params.keyboard = keyboard;
    params.textureIdCapacityInput = textureIdCapacityInput;
    params.textureIdCountOutput = textureIdCountOutput;
    params.textureIds = textureIds;
    UNIX_CALL_CHECKED(xrGetVirtualKeyboardDirtyTexturesMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardModelAnimationStatesMETA(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA *animationStates)
{
    struct xrGetVirtualKeyboardModelAnimationStatesMETA_params params;
    params.keyboard = keyboard;
    params.animationStates = animationStates;
    UNIX_CALL_CHECKED(xrGetVirtualKeyboardModelAnimationStatesMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardScaleMETA(XrVirtualKeyboardMETA keyboard, float *scale)
{
    struct xrGetVirtualKeyboardScaleMETA_params params;
    params.keyboard = keyboard;
    params.scale = scale;
    UNIX_CALL_CHECKED(xrGetVirtualKeyboardScaleMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetVirtualKeyboardTextureDataMETA(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA *textureData)
{
    struct xrGetVirtualKeyboardTextureDataMETA_params params;
    params.keyboard = keyboard;
    params.textureId = textureId;
    params.textureData = textureData;
    UNIX_CALL_CHECKED(xrGetVirtualKeyboardTextureDataMETA, &params);
    return params.result;
}

XrResult WINAPI xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask)
{
    struct xrGetVisibilityMaskKHR_params params;
    params.session = session;
    params.viewConfigurationType = viewConfigurationType;
    params.viewIndex = viewIndex;
    params.visibilityMaskType = visibilityMaskType;
    params.visibilityMask = visibilityMask;
    UNIX_CALL_CHECKED(xrGetVisibilityMaskKHR, &params);
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice)
{
    struct xrGetVulkanGraphicsDevice2KHR_params params;
    params.instance = instance;
    params.getInfo = getInfo;
    params.vulkanPhysicalDevice = vulkanPhysicalDevice;
    UNIX_CALL_CHECKED(xrGetVulkanGraphicsDevice2KHR, &params);
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice)
{
    struct xrGetVulkanGraphicsDeviceKHR_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.vkInstance = vkInstance;
    params.vkPhysicalDevice = vkPhysicalDevice;
    UNIX_CALL_CHECKED(xrGetVulkanGraphicsDeviceKHR, &params);
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirements2KHR_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    UNIX_CALL_CHECKED(xrGetVulkanGraphicsRequirements2KHR, &params);
    return params.result;
}

XrResult WINAPI xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements)
{
    struct xrGetVulkanGraphicsRequirementsKHR_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.graphicsRequirements = graphicsRequirements;
    UNIX_CALL_CHECKED(xrGetVulkanGraphicsRequirementsKHR, &params);
    return params.result;
}

XrResult WINAPI xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrGetVulkanInstanceExtensionsKHR_params params;
    params.instance = instance;
    params.systemId = systemId;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrGetVulkanInstanceExtensionsKHR, &params);
    return params.result;
}

XrResult WINAPI xrGetWorldMeshBufferRecommendSizeML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferRecommendedSizeInfoML *sizeInfo, XrWorldMeshBufferSizeML *size)
{
    struct xrGetWorldMeshBufferRecommendSizeML_params params;
    params.detector = detector;
    params.sizeInfo = sizeInfo;
    params.size = size;
    UNIX_CALL_CHECKED(xrGetWorldMeshBufferRecommendSizeML, &params);
    return params.result;
}

XrResult WINAPI xrHapticParametricGetPropertiesEXT(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrHapticParametricPropertiesEXT *parametricProperties)
{
    struct xrHapticParametricGetPropertiesEXT_params params;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    params.parametricProperties = parametricProperties;
    UNIX_CALL_CHECKED(xrHapticParametricGetPropertiesEXT, &params);
    return params.result;
}

XrResult WINAPI xrImportLocalizationMapML(XrSession session, const XrLocalizationMapImportInfoML *importInfo, XrUuidEXT *mapUuid)
{
    struct xrImportLocalizationMapML_params params;
    params.session = session;
    params.importInfo = importInfo;
    params.mapUuid = mapUuid;
    UNIX_CALL_CHECKED(xrImportLocalizationMapML, &params);
    return params.result;
}

XrResult WINAPI xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer)
{
    struct xrLoadControllerModelMSFT_params params;
    params.session = session;
    params.modelKey = modelKey;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrLoadControllerModelMSFT, &params);
    return params.result;
}

XrResult WINAPI xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer)
{
    struct xrLoadRenderModelFB_params params;
    params.session = session;
    params.info = info;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrLoadRenderModelFB, &params);
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsBD(XrBodyTrackerBD bodyTracker, const XrBodyJointsLocateInfoBD *locateInfo, XrBodyJointLocationsBD *locations)
{
    struct xrLocateBodyJointsBD_params params;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrLocateBodyJointsBD, &params);
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsFB(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB *locateInfo, XrBodyJointLocationsFB *locations)
{
    struct xrLocateBodyJointsFB_params params;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrLocateBodyJointsFB, &params);
    return params.result;
}

XrResult WINAPI xrLocateBodyJointsHTC(XrBodyTrackerHTC bodyTracker, const XrBodyJointsLocateInfoHTC *locateInfo, XrBodyJointLocationsHTC *locations)
{
    struct xrLocateBodyJointsHTC_params params;
    params.bodyTracker = bodyTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrLocateBodyJointsHTC, &params);
    return params.result;
}

XrResult WINAPI xrLocateGeospatialPoseANDROID(XrGeospatialTrackerANDROID geospatialTracker, const XrGeospatialPoseLocateInfoANDROID *locateInfo, XrSpaceLocation *location)
{
    struct xrLocateGeospatialPoseANDROID_params params;
    params.geospatialTracker = geospatialTracker;
    params.locateInfo = locateInfo;
    params.location = location;
    UNIX_CALL_CHECKED(xrLocateGeospatialPoseANDROID, &params);
    return params.result;
}

XrResult WINAPI xrLocateGeospatialPoseFromPoseANDROID(XrGeospatialTrackerANDROID geospatialTracker, const XrGeospatialPoseFromPoseLocateInfoANDROID *locateInfo, XrGeospatialPoseResultANDROID *geospatialPoseResult)
{
    struct xrLocateGeospatialPoseFromPoseANDROID_params params;
    params.geospatialTracker = geospatialTracker;
    params.locateInfo = locateInfo;
    params.geospatialPoseResult = geospatialPoseResult;
    UNIX_CALL_CHECKED(xrLocateGeospatialPoseFromPoseANDROID, &params);
    return params.result;
}

XrResult WINAPI xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations)
{
    struct xrLocateHandJointsEXT_params params;
    params.handTracker = handTracker;
    params.locateInfo = locateInfo;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrLocateHandJointsEXT, &params);
    return params.result;
}

XrResult WINAPI xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations)
{
    struct xrLocateSceneComponentsMSFT_params params;
    params.scene = scene;
    params.locateInfo = locateInfo;
    params.locations = locations;
    UNIX_CALL_CHECKED(xrLocateSceneComponentsMSFT, &params);
    return params.result;
}

XrResult WINAPI xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location)
{
    struct xrLocateSpace_params params;
    params.space = space;
    params.baseSpace = baseSpace;
    params.time = time;
    params.location = location;
    UNIX_CALL_CHECKED(xrLocateSpace, &params);
    return params.result;
}

XrResult WINAPI xrLocateSpaces(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpaces_params params;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    UNIX_CALL_CHECKED(xrLocateSpaces, &params);
    return params.result;
}

XrResult WINAPI xrLocateSpacesKHR(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations)
{
    struct xrLocateSpacesKHR_params params;
    params.session = session;
    params.locateInfo = locateInfo;
    params.spaceLocations = spaceLocations;
    UNIX_CALL_CHECKED(xrLocateSpacesKHR, &params);
    return params.result;
}

XrResult WINAPI xrLocateSpatialContainerViewsEXT(XrSession session, const XrSpatialContainerViewsLocateInfoEXT *locateInfo, uint32_t viewStateCount, XrSpatialContainerViewStateEXT *viewStates, uint32_t viewCount, XrView *views)
{
    struct xrLocateSpatialContainerViewsEXT_params params;
    params.session = session;
    params.locateInfo = locateInfo;
    params.viewStateCount = viewStateCount;
    params.viewStates = viewStates;
    params.viewCount = viewCount;
    params.views = views;
    UNIX_CALL_CHECKED(xrLocateSpatialContainerViewsEXT, &params);
    return params.result;
}

XrResult WINAPI xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views)
{
    struct xrLocateViews_params params;
    params.session = session;
    params.viewLocateInfo = viewLocateInfo;
    params.viewState = viewState;
    params.viewCapacityInput = viewCapacityInput;
    params.viewCountOutput = viewCountOutput;
    params.views = views;
    UNIX_CALL_CHECKED(xrLocateViews, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerPauseFB_params params;
    params.layer = layer;
    UNIX_CALL_CHECKED(xrPassthroughLayerPauseFB, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer)
{
    struct xrPassthroughLayerResumeFB_params params;
    params.layer = layer;
    UNIX_CALL_CHECKED(xrPassthroughLayerResumeFB, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity)
{
    struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params params;
    params.layer = layer;
    params.intensity = intensity;
    UNIX_CALL_CHECKED(xrPassthroughLayerSetKeyboardHandsIntensityFB, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style)
{
    struct xrPassthroughLayerSetStyleFB_params params;
    params.layer = layer;
    params.style = style;
    UNIX_CALL_CHECKED(xrPassthroughLayerSetStyleFB, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughPauseFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughPauseFB_params params;
    params.passthrough = passthrough;
    UNIX_CALL_CHECKED(xrPassthroughPauseFB, &params);
    return params.result;
}

XrResult WINAPI xrPassthroughStartFB(XrPassthroughFB passthrough)
{
    struct xrPassthroughStartFB_params params;
    params.passthrough = passthrough;
    UNIX_CALL_CHECKED(xrPassthroughStartFB, &params);
    return params.result;
}

XrResult WINAPI xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer)
{
    struct xrPathToString_params params;
    params.instance = instance;
    params.path = path;
    params.bufferCapacityInput = bufferCapacityInput;
    params.bufferCountOutput = bufferCountOutput;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrPathToString, &params);
    return params.result;
}

XrResult WINAPI xrPauseSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA *pauseInfo)
{
    struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params params;
    params.session = session;
    params.pauseInfo = pauseInfo;
    UNIX_CALL_CHECKED(xrPauseSimultaneousHandsAndControllersTrackingMETA, &params);
    return params.result;
}

XrResult WINAPI xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level)
{
    struct xrPerfSettingsSetPerformanceLevelEXT_params params;
    params.session = session;
    params.domain = domain;
    params.level = level;
    UNIX_CALL_CHECKED(xrPerfSettingsSetPerformanceLevelEXT, &params);
    return params.result;
}

XrResult WINAPI xrPersistAnchorANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrPersistedAnchorSpaceInfoANDROID *persistedInfo, XrUuidEXT *anchorIdOutput)
{
    struct xrPersistAnchorANDROID_params params;
    params.handle = handle;
    params.persistedInfo = persistedInfo;
    params.anchorIdOutput = anchorIdOutput;
    UNIX_CALL_CHECKED(xrPersistAnchorANDROID, &params);
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorPersistInfoBD *info, XrFutureEXT *future)
{
    struct xrPersistSpatialAnchorAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrPersistSpatialAnchorAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrPersistSpatialAnchorCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrPersistSpatialAnchorCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo)
{
    struct xrPersistSpatialAnchorMSFT_params params;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceInfo = spatialAnchorPersistenceInfo;
    UNIX_CALL_CHECKED(xrPersistSpatialAnchorMSFT, &params);
    return params.result;
}

XrResult WINAPI xrPersistSpatialEntityAsyncEXT(XrSpatialPersistenceContextEXT persistenceContext, const XrSpatialEntityPersistInfoEXT *persistInfo, XrFutureEXT *future)
{
    struct xrPersistSpatialEntityAsyncEXT_params params;
    params.persistenceContext = persistenceContext;
    params.persistInfo = persistInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrPersistSpatialEntityAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrPersistSpatialEntityCompleteEXT(XrSpatialPersistenceContextEXT persistenceContext, XrFutureEXT future, XrPersistSpatialEntityCompletionEXT *completion)
{
    struct xrPersistSpatialEntityCompleteEXT_params params;
    params.persistenceContext = persistenceContext;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrPersistSpatialEntityCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData)
{
    struct xrPollEvent_params params;
    params.instance = instance;
    params.eventData = eventData;
    UNIX_CALL_CHECKED(xrPollEvent, &params);
    return params.result;
}

XrResult WINAPI xrPollFutureEXT(XrInstance instance, const XrFuturePollInfoEXT *pollInfo, XrFuturePollResultEXT *pollResult)
{
    struct xrPollFutureEXT_params params;
    params.instance = instance;
    params.pollInfo = pollInfo;
    params.pollResult = pollResult;
    UNIX_CALL_CHECKED(xrPollFutureEXT, &params);
    return params.result;
}

XrResult WINAPI xrPublishSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsPublishInfoML *publishInfo, XrFutureEXT *future)
{
    struct xrPublishSpatialAnchorsAsyncML_params params;
    params.storage = storage;
    params.publishInfo = publishInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrPublishSpatialAnchorsAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrPublishSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsPublishCompletionML *completion)
{
    struct xrPublishSpatialAnchorsCompleteML_params params;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrPublishSpatialAnchorsCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrQueryFramesPerBufferRangeBD(XrSession session, XrAudioSampleRateBD sampleRate, uint32_t *min, uint32_t *max)
{
    struct xrQueryFramesPerBufferRangeBD_params params;
    params.session = session;
    params.sampleRate = sampleRate;
    params.min = min;
    params.max = max;
    UNIX_CALL_CHECKED(xrQueryFramesPerBufferRangeBD, &params);
    return params.result;
}

XrResult WINAPI xrQueryLocalizationMapsML(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo, uint32_t mapCapacityInput, uint32_t *mapCountOutput, XrLocalizationMapML *maps)
{
    struct xrQueryLocalizationMapsML_params params;
    params.session = session;
    params.queryInfo = queryInfo;
    params.mapCapacityInput = mapCapacityInput;
    params.mapCountOutput = mapCountOutput;
    params.maps = maps;
    UNIX_CALL_CHECKED(xrQueryLocalizationMapsML, &params);
    return params.result;
}

XrResult WINAPI xrQueryPerformanceMetricsCounterANDROID(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterANDROID *counter)
{
    struct xrQueryPerformanceMetricsCounterANDROID_params params;
    params.session = session;
    params.counterPath = counterPath;
    params.counter = counter;
    UNIX_CALL_CHECKED(xrQueryPerformanceMetricsCounterANDROID, &params);
    return params.result;
}

XrResult WINAPI xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter)
{
    struct xrQueryPerformanceMetricsCounterMETA_params params;
    params.session = session;
    params.counterPath = counterPath;
    params.counter = counter;
    UNIX_CALL_CHECKED(xrQueryPerformanceMetricsCounterMETA, &params);
    return params.result;
}

XrResult WINAPI xrQuerySenseDataAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataQueryInfoBD *queryInfo, XrFutureEXT *future)
{
    struct xrQuerySenseDataAsyncBD_params params;
    params.provider = provider;
    params.queryInfo = queryInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrQuerySenseDataAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrQuerySenseDataCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSenseDataQueryCompletionBD *completion)
{
    struct xrQuerySenseDataCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrQuerySenseDataCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrQuerySpacesFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrQuerySpacesFB, &params);
    return params.result;
}

XrResult WINAPI xrQuerySpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsQueryInfoBaseHeaderML *queryInfo, XrFutureEXT *future)
{
    struct xrQuerySpatialAnchorsAsyncML_params params;
    params.storage = storage;
    params.queryInfo = queryInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrQuerySpatialAnchorsAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrQuerySpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsQueryCompletionML *completion)
{
    struct xrQuerySpatialAnchorsCompleteML_params params;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrQuerySpatialAnchorsCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrQuerySpatialComponentDataEXT(XrSpatialSnapshotEXT snapshot, const XrSpatialComponentDataQueryConditionEXT *queryCondition, XrSpatialComponentDataQueryResultEXT *queryResult)
{
    struct xrQuerySpatialComponentDataEXT_params params;
    params.snapshot = snapshot;
    params.queryCondition = queryCondition;
    params.queryResult = queryResult;
    UNIX_CALL_CHECKED(xrQuerySpatialComponentDataEXT, &params);
    return params.result;
}

XrResult WINAPI xrQuerySystemTrackedKeyboardFB(XrSession session, const XrKeyboardTrackingQueryFB *queryInfo, XrKeyboardTrackingDescriptionFB *keyboard)
{
    struct xrQuerySystemTrackedKeyboardFB_params params;
    params.session = session;
    params.queryInfo = queryInfo;
    params.keyboard = keyboard;
    UNIX_CALL_CHECKED(xrQuerySystemTrackedKeyboardFB, &params);
    return params.result;
}

XrResult WINAPI xrRaycastANDROID(XrSession session, const XrRaycastInfoANDROID *rayInfo, XrRaycastHitResultsANDROID *results)
{
    struct xrRaycastANDROID_params params;
    params.session = session;
    params.rayInfo = rayInfo;
    params.results = results;
    UNIX_CALL_CHECKED(xrRaycastANDROID, &params);
    return params.result;
}

XrResult WINAPI xrRemoveTrackableImageDatabaseANDROID(XrTrackableTrackerANDROID tracker, XrTrackableImageDatabaseANDROID database)
{
    struct xrRemoveTrackableImageDatabaseANDROID_params params;
    params.tracker = tracker;
    params.database = database;
    UNIX_CALL_CHECKED(xrRemoveTrackableImageDatabaseANDROID, &params);
    return params.result;
}

XrResult WINAPI xrRequestBodyTrackingFidelityMETA(XrBodyTrackerFB bodyTracker, const XrBodyTrackingFidelityMETA fidelity)
{
    struct xrRequestBodyTrackingFidelityMETA_params params;
    params.bodyTracker = bodyTracker;
    params.fidelity = fidelity;
    UNIX_CALL_CHECKED(xrRequestBodyTrackingFidelityMETA, &params);
    return params.result;
}

XrResult WINAPI xrRequestBoundaryVisibilityMETA(XrSession session, XrBoundaryVisibilityMETA boundaryVisibility)
{
    struct xrRequestBoundaryVisibilityMETA_params params;
    params.session = session;
    params.boundaryVisibility = boundaryVisibility;
    UNIX_CALL_CHECKED(xrRequestBoundaryVisibilityMETA, &params);
    return params.result;
}

XrResult WINAPI xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate)
{
    struct xrRequestDisplayRefreshRateFB_params params;
    params.session = session;
    params.displayRefreshRate = displayRefreshRate;
    UNIX_CALL_CHECKED(xrRequestDisplayRefreshRateFB, &params);
    return params.result;
}

XrResult WINAPI xrRequestExitSession(XrSession session)
{
    struct xrRequestExitSession_params params;
    params.session = session;
    UNIX_CALL_CHECKED(xrRequestExitSession, &params);
    return params.result;
}

XrResult WINAPI xrRequestMapLocalizationML(XrSession session, const XrMapLocalizationRequestInfoML *requestInfo)
{
    struct xrRequestMapLocalizationML_params params;
    params.session = session;
    params.requestInfo = requestInfo;
    UNIX_CALL_CHECKED(xrRequestMapLocalizationML, &params);
    return params.result;
}

XrResult WINAPI xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrRequestSceneCaptureFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrRequestSceneCaptureFB, &params);
    return params.result;
}

XrResult WINAPI xrRequestSpatialContainerBoundsModeEXT(XrSpatialContainerEXT spatialContainer, const XrSpatialContainerBoundsModeRequestInfoEXT *info)
{
    struct xrRequestSpatialContainerBoundsModeEXT_params params;
    params.spatialContainer = spatialContainer;
    params.info = info;
    UNIX_CALL_CHECKED(xrRequestSpatialContainerBoundsModeEXT, &params);
    return params.result;
}

XrResult WINAPI xrRequestSpatialContainerVisibleEXT(XrSpatialContainerEXT spatialContainer, const XrSpatialContainerVisibleRequestInfoEXT *info)
{
    struct xrRequestSpatialContainerVisibleEXT_params params;
    params.spatialContainer = spatialContainer;
    params.info = info;
    UNIX_CALL_CHECKED(xrRequestSpatialContainerVisibleEXT, &params);
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshGetInfoML *getInfo, XrWorldMeshBufferML *buffer, XrFutureEXT *future)
{
    struct xrRequestWorldMeshAsyncML_params params;
    params.detector = detector;
    params.getInfo = getInfo;
    params.buffer = buffer;
    params.future = future;
    UNIX_CALL_CHECKED(xrRequestWorldMeshAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshCompleteML(XrWorldMeshDetectorML detector, const XrWorldMeshRequestCompletionInfoML *completionInfo, XrFutureEXT future, XrWorldMeshRequestCompletionML *completion)
{
    struct xrRequestWorldMeshCompleteML_params params;
    params.detector = detector;
    params.completionInfo = completionInfo;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrRequestWorldMeshCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshStateAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshStateRequestInfoML *stateRequest, XrFutureEXT *future)
{
    struct xrRequestWorldMeshStateAsyncML_params params;
    params.detector = detector;
    params.stateRequest = stateRequest;
    params.future = future;
    UNIX_CALL_CHECKED(xrRequestWorldMeshStateAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrRequestWorldMeshStateCompleteML(XrWorldMeshDetectorML detector, XrFutureEXT future, XrWorldMeshStateRequestCompletionML *completion)
{
    struct xrRequestWorldMeshStateCompleteML_params params;
    params.detector = detector;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrRequestWorldMeshStateCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrResetBodyTrackingCalibrationMETA(XrBodyTrackerFB bodyTracker)
{
    struct xrResetBodyTrackingCalibrationMETA_params params;
    params.bodyTracker = bodyTracker;
    UNIX_CALL_CHECKED(xrResetBodyTrackingCalibrationMETA, &params);
    return params.result;
}

XrResult WINAPI xrResultToString(XrInstance instance, XrResult value, char buffer[XR_MAX_RESULT_STRING_SIZE])
{
    struct xrResultToString_params params;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrResultToString, &params);
    return params.result;
}

XrResult WINAPI xrResultToString2KHR(XrInstance instance, XrResult value, char buffer[XR_MAX_RESULT_STRING_SIZE_EXTENDED_KHR])
{
    struct xrResultToString2KHR_params params;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrResultToString2KHR, &params);
    return params.result;
}

XrResult WINAPI xrResumeSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA *resumeInfo)
{
    struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params params;
    params.session = session;
    params.resumeInfo = resumeInfo;
    UNIX_CALL_CHECKED(xrResumeSimultaneousHandsAndControllersTrackingMETA, &params);
    return params.result;
}

XrResult WINAPI xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results)
{
    struct xrRetrieveSpaceQueryResultsFB_params params;
    params.session = session;
    params.requestId = requestId;
    params.results = results;
    UNIX_CALL_CHECKED(xrRetrieveSpaceQueryResultsFB, &params);
    return params.result;
}

XrResult WINAPI xrSaveSpaceFB(XrSession session, const XrSpaceSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrSaveSpaceFB, &params);
    return params.result;
}

XrResult WINAPI xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpaceListFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrSaveSpaceListFB, &params);
    return params.result;
}

XrResult WINAPI xrSaveSpacesMETA(XrSession session, const XrSpacesSaveInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSaveSpacesMETA_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrSaveSpacesMETA, &params);
    return params.result;
}

XrResult WINAPI xrSendVirtualKeyboardInputMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA *info, XrPosef *interactorRootPose)
{
    struct xrSendVirtualKeyboardInputMETA_params params;
    params.keyboard = keyboard;
    params.info = info;
    params.interactorRootPose = interactorRootPose;
    UNIX_CALL_CHECKED(xrSendVirtualKeyboardInputMETA, &params);
    return params.result;
}

XrResult WINAPI xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorSpace)
{
    struct xrSetColorSpaceFB_params params;
    params.session = session;
    params.colorSpace = colorSpace;
    UNIX_CALL_CHECKED(xrSetColorSpaceFB, &params);
    return params.result;
}

XrResult WINAPI xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl)
{
    struct xrSetDigitalLensControlALMALENCE_params params;
    params.session = session;
    params.digitalLensControl = digitalLensControl;
    UNIX_CALL_CHECKED(xrSetDigitalLensControlALMALENCE, &params);
    return params.result;
}

XrResult WINAPI xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetEnvironmentDepthEstimationVARJO_params params;
    params.session = session;
    params.enabled = enabled;
    UNIX_CALL_CHECKED(xrSetEnvironmentDepthEstimationVARJO, &params);
    return params.result;
}

XrResult WINAPI xrSetFacialSimulationModeBD(XrFaceTrackerBD tracker, XrFacialSimulationModeBD mode)
{
    struct xrSetFacialSimulationModeBD_params params;
    params.tracker = tracker;
    params.mode = mode;
    UNIX_CALL_CHECKED(xrSetFacialSimulationModeBD, &params);
    return params.result;
}

XrResult WINAPI xrSetGoogleCloudAuthAsyncANDROID(XrSession session, const XrGoogleCloudAuthInfoBaseHeaderANDROID *authInfo, XrFutureEXT *future)
{
    struct xrSetGoogleCloudAuthAsyncANDROID_params params;
    params.session = session;
    params.authInfo = authInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrSetGoogleCloudAuthAsyncANDROID, &params);
    return params.result;
}

XrResult WINAPI xrSetGoogleCloudAuthCompleteANDROID(XrSession session, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrSetGoogleCloudAuthCompleteANDROID_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrSetGoogleCloudAuthCompleteANDROID, &params);
    return params.result;
}

XrResult WINAPI xrSetHandTrackingFrequencyHintMETA(XrSession session, XrHandTrackingFrequencyHintMETA frequencyHint)
{
    struct xrSetHandTrackingFrequencyHintMETA_params params;
    params.session = session;
    params.frequencyHint = frequencyHint;
    UNIX_CALL_CHECKED(xrSetHandTrackingFrequencyHintMETA, &params);
    return params.result;
}

XrResult WINAPI xrSetHdrMetadataSONY(XrSwapchain swapchain, const XrHdrMetadataSONY *hdrMetadata)
{
    struct xrSetHdrMetadataSONY_params params;
    params.swapchain = swapchain;
    params.hdrMetadata = hdrMetadata;
    UNIX_CALL_CHECKED(xrSetHdrMetadataSONY, &params);
    return params.result;
}

XrResult WINAPI xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive)
{
    struct xrSetInputDeviceActiveEXT_params params;
    params.session = session;
    params.interactionProfile = interactionProfile;
    params.topLevelPath = topLevelPath;
    params.isActive = isActive;
    UNIX_CALL_CHECKED(xrSetInputDeviceActiveEXT, &params);
    return params.result;
}

XrResult WINAPI xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose)
{
    struct xrSetInputDeviceLocationEXT_params params;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.space = space;
    params.pose = pose;
    UNIX_CALL_CHECKED(xrSetInputDeviceLocationEXT, &params);
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state)
{
    struct xrSetInputDeviceStateBoolEXT_params params;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    UNIX_CALL_CHECKED(xrSetInputDeviceStateBoolEXT, &params);
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state)
{
    struct xrSetInputDeviceStateFloatEXT_params params;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    UNIX_CALL_CHECKED(xrSetInputDeviceStateFloatEXT, &params);
    return params.result;
}

XrResult WINAPI xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state)
{
    struct xrSetInputDeviceStateVector2fEXT_params params;
    params.session = session;
    params.topLevelPath = topLevelPath;
    params.inputSourcePath = inputSourcePath;
    params.state = state;
    UNIX_CALL_CHECKED(xrSetInputDeviceStateVector2fEXT, &params);
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingPredictionVARJO(XrSession session, uint64_t markerId, XrBool32 enable)
{
    struct xrSetMarkerTrackingPredictionVARJO_params params;
    params.session = session;
    params.markerId = markerId;
    params.enable = enable;
    UNIX_CALL_CHECKED(xrSetMarkerTrackingPredictionVARJO, &params);
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingTimeoutVARJO(XrSession session, uint64_t markerId, XrDuration timeout)
{
    struct xrSetMarkerTrackingTimeoutVARJO_params params;
    params.session = session;
    params.markerId = markerId;
    params.timeout = timeout;
    UNIX_CALL_CHECKED(xrSetMarkerTrackingTimeoutVARJO, &params);
    return params.result;
}

XrResult WINAPI xrSetMarkerTrackingVARJO(XrSession session, XrBool32 enabled)
{
    struct xrSetMarkerTrackingVARJO_params params;
    params.session = session;
    params.enabled = enabled;
    UNIX_CALL_CHECKED(xrSetMarkerTrackingVARJO, &params);
    return params.result;
}

XrResult WINAPI xrSetPassthroughLayerMeshANDROID(XrPassthroughLayerANDROID layer, const XrPassthroughLayerMeshANDROID *mesh)
{
    struct xrSetPassthroughLayerMeshANDROID_params params;
    params.layer = layer;
    params.mesh = mesh;
    UNIX_CALL_CHECKED(xrSetPassthroughLayerMeshANDROID, &params);
    return params.result;
}

XrResult WINAPI xrSetPerformanceMetricsStateANDROID(XrSession session, const XrPerformanceMetricsStateANDROID *state)
{
    struct xrSetPerformanceMetricsStateANDROID_params params;
    params.session = session;
    params.state = state;
    UNIX_CALL_CHECKED(xrSetPerformanceMetricsStateANDROID, &params);
    return params.result;
}

XrResult WINAPI xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state)
{
    struct xrSetPerformanceMetricsStateMETA_params params;
    params.session = session;
    params.state = state;
    UNIX_CALL_CHECKED(xrSetPerformanceMetricsStateMETA, &params);
    return params.result;
}

XrResult WINAPI xrSetSpaceComponentStatusFB(XrSpace space, const XrSpaceComponentStatusSetInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrSetSpaceComponentStatusFB_params params;
    params.space = space;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrSetSpaceComponentStatusFB, &params);
    return params.result;
}

XrResult WINAPI xrSetSystemNotificationsML(XrInstance instance, const XrSystemNotificationsSetInfoML *info)
{
    struct xrSetSystemNotificationsML_params params;
    params.instance = instance;
    params.info = info;
    UNIX_CALL_CHECKED(xrSetSystemNotificationsML, &params);
    return params.result;
}

XrResult WINAPI xrSetTilePropertiesHintMETA(XrSession session, const XrTilePropertiesHintMETA *properties)
{
    struct xrSetTilePropertiesHintMETA_params params;
    params.session = session;
    params.properties = properties;
    UNIX_CALL_CHECKED(xrSetTilePropertiesHintMETA, &params);
    return params.result;
}

XrResult WINAPI xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint)
{
    struct xrSetTrackingOptimizationSettingsHintQCOM_params params;
    params.session = session;
    params.domain = domain;
    params.hint = hint;
    UNIX_CALL_CHECKED(xrSetTrackingOptimizationSettingsHintQCOM, &params);
    return params.result;
}

XrResult WINAPI xrSetViewOffsetVARJO(XrSession session, float offset)
{
    struct xrSetViewOffsetVARJO_params params;
    params.session = session;
    params.offset = offset;
    UNIX_CALL_CHECKED(xrSetViewOffsetVARJO, &params);
    return params.result;
}

XrResult WINAPI xrSetVirtualKeyboardModelVisibilityMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility)
{
    struct xrSetVirtualKeyboardModelVisibilityMETA_params params;
    params.keyboard = keyboard;
    params.modelVisibility = modelVisibility;
    UNIX_CALL_CHECKED(xrSetVirtualKeyboardModelVisibilityMETA, &params);
    return params.result;
}

XrResult WINAPI xrShareSpacesFB(XrSession session, const XrSpaceShareInfoFB *info, XrAsyncRequestIdFB *requestId)
{
    struct xrShareSpacesFB_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrShareSpacesFB, &params);
    return params.result;
}

XrResult WINAPI xrShareSpacesMETA(XrSession session, const XrShareSpacesInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrShareSpacesMETA_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrShareSpacesMETA, &params);
    return params.result;
}

XrResult WINAPI xrShareSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorShareInfoBD *info, XrFutureEXT *future)
{
    struct xrShareSpatialAnchorAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrShareSpatialAnchorAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrShareSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrShareSpatialAnchorCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrShareSpatialAnchorCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrSnapshotMarkerDetectorML(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML *snapshotInfo)
{
    struct xrSnapshotMarkerDetectorML_params params;
    params.markerDetector = markerDetector;
    params.snapshotInfo = snapshotInfo;
    UNIX_CALL_CHECKED(xrSnapshotMarkerDetectorML, &params);
    return params.result;
}

XrResult WINAPI xrStartBodyTrackingCalibrationAppBD(XrSession session)
{
    struct xrStartBodyTrackingCalibrationAppBD_params params;
    params.session = session;
    UNIX_CALL_CHECKED(xrStartBodyTrackingCalibrationAppBD, &params);
    return params.result;
}

XrResult WINAPI xrStartColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStartInfoMETA *info, XrAsyncRequestIdFB *advertisementRequestId)
{
    struct xrStartColocationAdvertisementMETA_params params;
    params.session = session;
    params.info = info;
    params.advertisementRequestId = advertisementRequestId;
    UNIX_CALL_CHECKED(xrStartColocationAdvertisementMETA, &params);
    return params.result;
}

XrResult WINAPI xrStartColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStartInfoMETA *info, XrAsyncRequestIdFB *discoveryRequestId)
{
    struct xrStartColocationDiscoveryMETA_params params;
    params.session = session;
    params.info = info;
    params.discoveryRequestId = discoveryRequestId;
    UNIX_CALL_CHECKED(xrStartColocationDiscoveryMETA, &params);
    return params.result;
}

XrResult WINAPI xrStartSenseDataProviderAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataProviderStartInfoBD *startInfo, XrFutureEXT *future)
{
    struct xrStartSenseDataProviderAsyncBD_params params;
    params.provider = provider;
    params.startInfo = startInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrStartSenseDataProviderAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrStartSenseDataProviderCompleteBD(XrSession session, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrStartSenseDataProviderCompleteBD_params params;
    params.session = session;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrStartSenseDataProviderCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrStopColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStopInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrStopColocationAdvertisementMETA_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrStopColocationAdvertisementMETA, &params);
    return params.result;
}

XrResult WINAPI xrStopColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStopInfoMETA *info, XrAsyncRequestIdFB *requestId)
{
    struct xrStopColocationDiscoveryMETA_params params;
    params.session = session;
    params.info = info;
    params.requestId = requestId;
    UNIX_CALL_CHECKED(xrStopColocationDiscoveryMETA, &params);
    return params.result;
}

XrResult WINAPI xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo)
{
    struct xrStopHapticFeedback_params params;
    params.session = session;
    params.hapticActionInfo = hapticActionInfo;
    UNIX_CALL_CHECKED(xrStopHapticFeedback, &params);
    return params.result;
}

XrResult WINAPI xrStopSenseDataProviderBD(XrSenseDataProviderBD provider)
{
    struct xrStopSenseDataProviderBD_params params;
    params.provider = provider;
    UNIX_CALL_CHECKED(xrStopSenseDataProviderBD, &params);
    return params.result;
}

XrResult WINAPI xrStringToPath(XrInstance instance, const char *pathString, XrPath *path)
{
    struct xrStringToPath_params params;
    params.instance = instance;
    params.pathString = pathString;
    params.path = path;
    UNIX_CALL_CHECKED(xrStringToPath, &params);
    return params.result;
}

XrResult WINAPI xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[XR_MAX_STRUCTURE_NAME_SIZE])
{
    struct xrStructureTypeToString_params params;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrStructureTypeToString, &params);
    return params.result;
}

XrResult WINAPI xrStructureTypeToString2KHR(XrInstance instance, XrStructureType value, char buffer[XR_MAX_STRUCTURE_NAME_SIZE_EXTENDED_KHR])
{
    struct xrStructureTypeToString2KHR_params params;
    params.instance = instance;
    params.value = value;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrStructureTypeToString2KHR, &params);
    return params.result;
}

XrResult WINAPI xrSubmitSoundFieldBufferBD(XrSoundFieldBD soundField, const XrAudioBufferBD *buffer)
{
    struct xrSubmitSoundFieldBufferBD_params params;
    params.soundField = soundField;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrSubmitSoundFieldBufferBD, &params);
    return params.result;
}

XrResult WINAPI xrSubmitSoundObjectBufferBD(XrSoundObjectBD soundObject, const XrAudioBufferBD *buffer)
{
    struct xrSubmitSoundObjectBufferBD_params params;
    params.soundObject = soundObject;
    params.buffer = buffer;
    UNIX_CALL_CHECKED(xrSubmitSoundObjectBufferBD, &params);
    return params.result;
}

XrResult WINAPI xrSuggestBodyTrackingCalibrationOverrideMETA(XrBodyTrackerFB bodyTracker, const XrBodyTrackingCalibrationInfoMETA *calibrationInfo)
{
    struct xrSuggestBodyTrackingCalibrationOverrideMETA_params params;
    params.bodyTracker = bodyTracker;
    params.calibrationInfo = calibrationInfo;
    UNIX_CALL_CHECKED(xrSuggestBodyTrackingCalibrationOverrideMETA, &params);
    return params.result;
}

XrResult WINAPI xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings)
{
    struct xrSuggestInteractionProfileBindings_params params;
    params.instance = instance;
    params.suggestedBindings = suggestedBindings;
    UNIX_CALL_CHECKED(xrSuggestInteractionProfileBindings, &params);
    return params.result;
}

XrResult WINAPI xrSuggestVirtualKeyboardLocationMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA *locationInfo)
{
    struct xrSuggestVirtualKeyboardLocationMETA_params params;
    params.keyboard = keyboard;
    params.locationInfo = locationInfo;
    UNIX_CALL_CHECKED(xrSuggestVirtualKeyboardLocationMETA, &params);
    return params.result;
}

XrResult WINAPI xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo)
{
    struct xrSyncActions_params params;
    params.session = session;
    params.syncInfo = syncInfo;
    UNIX_CALL_CHECKED(xrSyncActions, &params);
    return params.result;
}

XrResult WINAPI xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope)
{
    struct xrThermalGetTemperatureTrendEXT_params params;
    params.session = session;
    params.domain = domain;
    params.notificationLevel = notificationLevel;
    params.tempHeadroom = tempHeadroom;
    params.tempSlope = tempSlope;
    UNIX_CALL_CHECKED(xrThermalGetTemperatureTrendEXT, &params);
    return params.result;
}

XrResult WINAPI xrTryCreateSpatialGraphStaticNodeBindingMSFT(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo, XrSpatialGraphNodeBindingMSFT *nodeBinding)
{
    struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params params;
    params.session = session;
    params.createInfo = createInfo;
    params.nodeBinding = nodeBinding;
    UNIX_CALL_CHECKED(xrTryCreateSpatialGraphStaticNodeBindingMSFT, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistAnchorANDROID(XrDeviceAnchorPersistenceANDROID handle, const XrUuidEXT *anchorId)
{
    struct xrUnpersistAnchorANDROID_params params;
    params.handle = handle;
    params.anchorId = anchorId;
    UNIX_CALL_CHECKED(xrUnpersistAnchorANDROID, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorUnpersistInfoBD *info, XrFutureEXT *future)
{
    struct xrUnpersistSpatialAnchorAsyncBD_params params;
    params.provider = provider;
    params.info = info;
    params.future = future;
    UNIX_CALL_CHECKED(xrUnpersistSpatialAnchorAsyncBD, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT *completion)
{
    struct xrUnpersistSpatialAnchorCompleteBD_params params;
    params.provider = provider;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrUnpersistSpatialAnchorCompleteBD, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName)
{
    struct xrUnpersistSpatialAnchorMSFT_params params;
    params.spatialAnchorStore = spatialAnchorStore;
    params.spatialAnchorPersistenceName = spatialAnchorPersistenceName;
    UNIX_CALL_CHECKED(xrUnpersistSpatialAnchorMSFT, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialEntityAsyncEXT(XrSpatialPersistenceContextEXT persistenceContext, const XrSpatialEntityUnpersistInfoEXT *unpersistInfo, XrFutureEXT *future)
{
    struct xrUnpersistSpatialEntityAsyncEXT_params params;
    params.persistenceContext = persistenceContext;
    params.unpersistInfo = unpersistInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrUnpersistSpatialEntityAsyncEXT, &params);
    return params.result;
}

XrResult WINAPI xrUnpersistSpatialEntityCompleteEXT(XrSpatialPersistenceContextEXT persistenceContext, XrFutureEXT future, XrUnpersistSpatialEntityCompletionEXT *completion)
{
    struct xrUnpersistSpatialEntityCompleteEXT_params params;
    params.persistenceContext = persistenceContext;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrUnpersistSpatialEntityCompleteEXT, &params);
    return params.result;
}

XrResult WINAPI xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh)
{
    struct xrUpdateHandMeshMSFT_params params;
    params.handTracker = handTracker;
    params.updateInfo = updateInfo;
    params.handMesh = handMesh;
    UNIX_CALL_CHECKED(xrUpdateHandMeshMSFT, &params);
    return params.result;
}

XrResult WINAPI xrUpdatePassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA *updateInfo)
{
    struct xrUpdatePassthroughColorLutMETA_params params;
    params.colorLut = colorLut;
    params.updateInfo = updateInfo;
    UNIX_CALL_CHECKED(xrUpdatePassthroughColorLutMETA, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSoundFieldConfigBD(XrSoundFieldBD soundField, const XrSoundFieldConfigBD *config, XrSoundFieldFlagsBD flags)
{
    struct xrUpdateSoundFieldConfigBD_params params;
    params.soundField = soundField;
    params.config = config;
    params.flags = flags;
    UNIX_CALL_CHECKED(xrUpdateSoundFieldConfigBD, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSoundObjectConfigBD(XrSoundObjectBD soundObject, const XrSoundObjectConfigBD *config, XrSoundObjectFlagsBD flags)
{
    struct xrUpdateSoundObjectConfigBD_params params;
    params.soundObject = soundObject;
    params.config = config;
    params.flags = flags;
    UNIX_CALL_CHECKED(xrUpdateSoundObjectConfigBD, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSoundObstacleConfigBD(XrSoundObstacleBD soundObstacle, const XrSoundObstacleConfigBD *config, const XrSoundTriangleMeshBD *mesh, XrSoundObstacleFlagsBD flags)
{
    struct xrUpdateSoundObstacleConfigBD_params params;
    params.soundObstacle = soundObstacle;
    params.config = config;
    params.mesh = mesh;
    params.flags = flags;
    UNIX_CALL_CHECKED(xrUpdateSoundObstacleConfigBD, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSoundObstacleMaterialConfigBD(XrSoundObstacleMaterialBD material, const XrSoundObstacleMaterialConfigBD *config)
{
    struct xrUpdateSoundObstacleMaterialConfigBD_params params;
    params.material = material;
    params.config = config;
    UNIX_CALL_CHECKED(xrUpdateSoundObstacleMaterialConfigBD, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSpatialAnchorsExpirationAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsUpdateExpirationInfoML *updateInfo, XrFutureEXT *future)
{
    struct xrUpdateSpatialAnchorsExpirationAsyncML_params params;
    params.storage = storage;
    params.updateInfo = updateInfo;
    params.future = future;
    UNIX_CALL_CHECKED(xrUpdateSpatialAnchorsExpirationAsyncML, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSpatialAnchorsExpirationCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsUpdateExpirationCompletionML *completion)
{
    struct xrUpdateSpatialAnchorsExpirationCompleteML_params params;
    params.storage = storage;
    params.future = future;
    params.completion = completion;
    UNIX_CALL_CHECKED(xrUpdateSpatialAnchorsExpirationCompleteML, &params);
    return params.result;
}

XrResult WINAPI xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state)
{
    struct xrUpdateSwapchainFB_params params;
    params.swapchain = swapchain;
    params.state = state;
    UNIX_CALL_CHECKED(xrUpdateSwapchainFB, &params);
    return params.result;
}

XrResult WINAPI xrWaitAudioPeriodBD(XrSpatialAudioRendererBD renderer, XrDuration timeout)
{
    struct xrWaitAudioPeriodBD_params params;
    params.renderer = renderer;
    params.timeout = timeout;
    UNIX_CALL_CHECKED(xrWaitAudioPeriodBD, &params);
    return params.result;
}

XrResult WINAPI xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState)
{
    struct xrWaitFrame_params params;
    params.session = session;
    params.frameWaitInfo = frameWaitInfo;
    params.frameState = frameState;
    UNIX_CALL_CHECKED(xrWaitFrame, &params);
    return params.result;
}

XrResult WINAPI xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo)
{
    struct xrWaitSwapchainImage_params params;
    params.swapchain = swapchain;
    params.waitInfo = waitInfo;
    UNIX_CALL_CHECKED(xrWaitSwapchainImage, &params);
    return params.result;
}

static const struct openxr_func xr_instance_dispatch_table[] =
{
    {"xrAcquireSwapchainImage", xrAcquireSwapchainImage},
    {"xrAddTrackableImageDatabaseANDROID", xrAddTrackableImageDatabaseANDROID},
    {"xrAllocateWorldMeshBufferML", xrAllocateWorldMeshBufferML},
    {"xrApplyForceFeedbackCurlMNDX", xrApplyForceFeedbackCurlMNDX},
    {"xrApplyHapticFeedback", xrApplyHapticFeedback},
    {"xrAttachSessionActionSets", xrAttachSessionActionSets},
    {"xrBeginFrame", xrBeginFrame},
    {"xrBeginPlaneDetectionEXT", xrBeginPlaneDetectionEXT},
    {"xrBeginSession", xrBeginSession},
    {"xrBeginSpatialContainerRenderingEXT", xrBeginSpatialContainerRenderingEXT},
    {"xrCancelFutureEXT", xrCancelFutureEXT},
    {"xrCaptureSceneAsyncBD", xrCaptureSceneAsyncBD},
    {"xrCaptureSceneCompleteBD", xrCaptureSceneCompleteBD},
    {"xrChangeVirtualKeyboardTextContextMETA", xrChangeVirtualKeyboardTextContextMETA},
    {"xrCheckVpsAvailabilityAsyncANDROID", xrCheckVpsAvailabilityAsyncANDROID},
    {"xrCheckVpsAvailabilityCompleteANDROID", xrCheckVpsAvailabilityCompleteANDROID},
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
    {"xrCreateExportedLocalizationMapML", xrCreateExportedLocalizationMapML},
    {"xrCreateEyeTrackerANDROID", xrCreateEyeTrackerANDROID},
    {"xrCreateEyeTrackerFB", xrCreateEyeTrackerFB},
    {"xrCreateFaceTracker2FB", xrCreateFaceTracker2FB},
    {"xrCreateFaceTrackerANDROID", xrCreateFaceTrackerANDROID},
    {"xrCreateFaceTrackerBD", xrCreateFaceTrackerBD},
    {"xrCreateFaceTrackerFB", xrCreateFaceTrackerFB},
    {"xrCreateFacialExpressionClientML", xrCreateFacialExpressionClientML},
    {"xrCreateFacialTrackerHTC", xrCreateFacialTrackerHTC},
    {"xrCreateFoveationProfileFB", xrCreateFoveationProfileFB},
    {"xrCreateGeometryInstanceFB", xrCreateGeometryInstanceFB},
    {"xrCreateGeospatialAnchorANDROID", xrCreateGeospatialAnchorANDROID},
    {"xrCreateGeospatialTrackerANDROID", xrCreateGeospatialTrackerANDROID},
    {"xrCreateHandMeshSpaceMSFT", xrCreateHandMeshSpaceMSFT},
    {"xrCreateHandTrackerEXT", xrCreateHandTrackerEXT},
    {"xrCreateInstance", xrCreateInstance},
    {"xrCreateKeyboardSpaceFB", xrCreateKeyboardSpaceFB},
    {"xrCreateLightEstimatorANDROID", xrCreateLightEstimatorANDROID},
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
    {"xrCreateSpatialContainerEXT", xrCreateSpatialContainerEXT},
    {"xrCreateSpatialContainerSpaceEXT", xrCreateSpatialContainerSpaceEXT},
    {"xrCreateSpatialContextAsyncEXT", xrCreateSpatialContextAsyncEXT},
    {"xrCreateSpatialContextCompleteEXT", xrCreateSpatialContextCompleteEXT},
    {"xrCreateSpatialDiscoverySnapshotAsyncEXT", xrCreateSpatialDiscoverySnapshotAsyncEXT},
    {"xrCreateSpatialDiscoverySnapshotCompleteEXT", xrCreateSpatialDiscoverySnapshotCompleteEXT},
    {"xrCreateSpatialEntityAnchorBD", xrCreateSpatialEntityAnchorBD},
    {"xrCreateSpatialEntityFromIdEXT", xrCreateSpatialEntityFromIdEXT},
    {"xrCreateSpatialGraphNodeSpaceMSFT", xrCreateSpatialGraphNodeSpaceMSFT},
    {"xrCreateSpatialImageTrackingDatabaseAsyncEXT", xrCreateSpatialImageTrackingDatabaseAsyncEXT},
    {"xrCreateSpatialImageTrackingDatabaseCompleteEXT", xrCreateSpatialImageTrackingDatabaseCompleteEXT},
    {"xrCreateSpatialPersistenceContextAsyncEXT", xrCreateSpatialPersistenceContextAsyncEXT},
    {"xrCreateSpatialPersistenceContextCompleteEXT", xrCreateSpatialPersistenceContextCompleteEXT},
    {"xrCreateSpatialRaycastSnapshotANDROID", xrCreateSpatialRaycastSnapshotANDROID},
    {"xrCreateSpatialUpdateSnapshotEXT", xrCreateSpatialUpdateSnapshotEXT},
    {"xrCreateSurfaceAnchorAsyncANDROID", xrCreateSurfaceAnchorAsyncANDROID},
    {"xrCreateSurfaceAnchorCompleteANDROID", xrCreateSurfaceAnchorCompleteANDROID},
    {"xrCreateSwapchain", xrCreateSwapchain},
    {"xrCreateTrackableImageDatabaseAsyncANDROID", xrCreateTrackableImageDatabaseAsyncANDROID},
    {"xrCreateTrackableImageDatabaseCompleteANDROID", xrCreateTrackableImageDatabaseCompleteANDROID},
    {"xrCreateTrackableTrackerANDROID", xrCreateTrackableTrackerANDROID},
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
    {"xrDestroyExportedLocalizationMapML", xrDestroyExportedLocalizationMapML},
    {"xrDestroyEyeTrackerANDROID", xrDestroyEyeTrackerANDROID},
    {"xrDestroyEyeTrackerFB", xrDestroyEyeTrackerFB},
    {"xrDestroyFaceTracker2FB", xrDestroyFaceTracker2FB},
    {"xrDestroyFaceTrackerANDROID", xrDestroyFaceTrackerANDROID},
    {"xrDestroyFaceTrackerBD", xrDestroyFaceTrackerBD},
    {"xrDestroyFaceTrackerFB", xrDestroyFaceTrackerFB},
    {"xrDestroyFacialExpressionClientML", xrDestroyFacialExpressionClientML},
    {"xrDestroyFacialTrackerHTC", xrDestroyFacialTrackerHTC},
    {"xrDestroyFoveationProfileFB", xrDestroyFoveationProfileFB},
    {"xrDestroyGeometryInstanceFB", xrDestroyGeometryInstanceFB},
    {"xrDestroyGeospatialTrackerANDROID", xrDestroyGeospatialTrackerANDROID},
    {"xrDestroyHandTrackerEXT", xrDestroyHandTrackerEXT},
    {"xrDestroyInstance", xrDestroyInstance},
    {"xrDestroyLightEstimatorANDROID", xrDestroyLightEstimatorANDROID},
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
    {"xrDestroySpatialContainerEXT", xrDestroySpatialContainerEXT},
    {"xrDestroySpatialContextEXT", xrDestroySpatialContextEXT},
    {"xrDestroySpatialEntityEXT", xrDestroySpatialEntityEXT},
    {"xrDestroySpatialGraphNodeBindingMSFT", xrDestroySpatialGraphNodeBindingMSFT},
    {"xrDestroySpatialImageTrackingDatabaseEXT", xrDestroySpatialImageTrackingDatabaseEXT},
    {"xrDestroySpatialPersistenceContextEXT", xrDestroySpatialPersistenceContextEXT},
    {"xrDestroySpatialSnapshotEXT", xrDestroySpatialSnapshotEXT},
    {"xrDestroySwapchain", xrDestroySwapchain},
    {"xrDestroyTrackableImageDatabaseANDROID", xrDestroyTrackableImageDatabaseANDROID},
    {"xrDestroyTrackableTrackerANDROID", xrDestroyTrackableTrackerANDROID},
    {"xrDestroyVirtualKeyboardMETA", xrDestroyVirtualKeyboardMETA},
    {"xrDestroyWorldMeshDetectorML", xrDestroyWorldMeshDetectorML},
    {"xrDownloadSharedSpatialAnchorAsyncBD", xrDownloadSharedSpatialAnchorAsyncBD},
    {"xrDownloadSharedSpatialAnchorCompleteBD", xrDownloadSharedSpatialAnchorCompleteBD},
    {"xrEnableLocalizationEventsML", xrEnableLocalizationEventsML},
    {"xrEnableUserCalibrationEventsML", xrEnableUserCalibrationEventsML},
    {"xrEndAudioPeriodBD", xrEndAudioPeriodBD},
    {"xrEndFrame", xrEndFrame},
    {"xrEndSession", xrEndSession},
    {"xrEndSpatialContainerRenderingEXT", xrEndSpatialContainerRenderingEXT},
    {"xrEnumerateApiLayerProperties", xrEnumerateApiLayerProperties},
    {"xrEnumerateBoundSourcesForAction", xrEnumerateBoundSourcesForAction},
    {"xrEnumerateColorSpacesFB", xrEnumerateColorSpacesFB},
    {"xrEnumerateColorSpacesSONY", xrEnumerateColorSpacesSONY},
    {"xrEnumerateDisplayRefreshRatesFB", xrEnumerateDisplayRefreshRatesFB},
    {"xrEnumerateEnvironmentBlendModes", xrEnumerateEnvironmentBlendModes},
    {"xrEnumerateEnvironmentTexturePixelFormatsBD", xrEnumerateEnvironmentTexturePixelFormatsBD},
    {"xrEnumerateEnvironmentTextureResolutionsBD", xrEnumerateEnvironmentTextureResolutionsBD},
    {"xrEnumerateEnvironmentTextureTransferTypesBD", xrEnumerateEnvironmentTextureTransferTypesBD},
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
    {"xrEnumerateSpatialReferenceImageFormatsEXT", xrEnumerateSpatialReferenceImageFormatsEXT},
    {"xrEnumerateSupportedAnchorTrackableTypesANDROID", xrEnumerateSupportedAnchorTrackableTypesANDROID},
    {"xrEnumerateSupportedAudioSampleRateBD", xrEnumerateSupportedAudioSampleRateBD},
    {"xrEnumerateSupportedPersistenceAnchorTypesANDROID", xrEnumerateSupportedPersistenceAnchorTypesANDROID},
    {"xrEnumerateSupportedSemanticLabelSetsANDROID", xrEnumerateSupportedSemanticLabelSetsANDROID},
    {"xrEnumerateSupportedSpatialContainerGraphicsPresentationsEXT", xrEnumerateSupportedSpatialContainerGraphicsPresentationsEXT},
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
    {"xrGetBodyTrackingStateBD", xrGetBodyTrackingStateBD},
    {"xrGetCoarseTrackingEyesInfoANDROID", xrGetCoarseTrackingEyesInfoANDROID},
    {"xrGetControllerModelKeyMSFT", xrGetControllerModelKeyMSFT},
    {"xrGetControllerModelPropertiesMSFT", xrGetControllerModelPropertiesMSFT},
    {"xrGetControllerModelStateMSFT", xrGetControllerModelStateMSFT},
    {"xrGetCurrentInteractionProfile", xrGetCurrentInteractionProfile},
    {"xrGetD3D11GraphicsRequirementsKHR", xrGetD3D11GraphicsRequirementsKHR},
    {"xrGetD3D12GraphicsRequirementsKHR", xrGetD3D12GraphicsRequirementsKHR},
    {"xrGetDeviceSampleRateFB", xrGetDeviceSampleRateFB},
    {"xrGetDisplayRefreshRateFB", xrGetDisplayRefreshRateFB},
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
    {"xrGetFineTrackingEyesInfoANDROID", xrGetFineTrackingEyesInfoANDROID},
    {"xrGetFoveationEyeTrackedStateMETA", xrGetFoveationEyeTrackedStateMETA},
    {"xrGetHandGestureQCOM", xrGetHandGestureQCOM},
    {"xrGetHandMeshFB", xrGetHandMeshFB},
    {"xrGetInputSourceLocalizedName", xrGetInputSourceLocalizedName},
    {"xrGetInstanceProcAddr", xrGetInstanceProcAddr},
    {"xrGetInstanceProperties", xrGetInstanceProperties},
    {"xrGetLightEstimateANDROID", xrGetLightEstimateANDROID},
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
    {"xrGetSpaceRoomMeshFaceIndicesMETA", xrGetSpaceRoomMeshFaceIndicesMETA},
    {"xrGetSpaceRoomMeshMETA", xrGetSpaceRoomMeshMETA},
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
    {"xrGetSpatialContainerBoundsEXT", xrGetSpatialContainerBoundsEXT},
    {"xrGetSpatialContainerStateEXT", xrGetSpatialContainerStateEXT},
    {"xrGetSpatialEntityComponentDataBD", xrGetSpatialEntityComponentDataBD},
    {"xrGetSpatialEntityUuidBD", xrGetSpatialEntityUuidBD},
    {"xrGetSpatialGraphNodeBindingPropertiesMSFT", xrGetSpatialGraphNodeBindingPropertiesMSFT},
    {"xrGetStationaryReferenceSpaceGenerationIdEXT", xrGetStationaryReferenceSpaceGenerationIdEXT},
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
    {"xrHapticParametricGetPropertiesEXT", xrHapticParametricGetPropertiesEXT},
    {"xrImportLocalizationMapML", xrImportLocalizationMapML},
    {"xrLoadControllerModelMSFT", xrLoadControllerModelMSFT},
    {"xrLoadRenderModelFB", xrLoadRenderModelFB},
    {"xrLocateBodyJointsBD", xrLocateBodyJointsBD},
    {"xrLocateBodyJointsFB", xrLocateBodyJointsFB},
    {"xrLocateBodyJointsHTC", xrLocateBodyJointsHTC},
    {"xrLocateGeospatialPoseANDROID", xrLocateGeospatialPoseANDROID},
    {"xrLocateGeospatialPoseFromPoseANDROID", xrLocateGeospatialPoseFromPoseANDROID},
    {"xrLocateHandJointsEXT", xrLocateHandJointsEXT},
    {"xrLocateSceneComponentsMSFT", xrLocateSceneComponentsMSFT},
    {"xrLocateSpace", xrLocateSpace},
    {"xrLocateSpaces", xrLocateSpaces},
    {"xrLocateSpacesKHR", xrLocateSpacesKHR},
    {"xrLocateSpatialContainerViewsEXT", xrLocateSpatialContainerViewsEXT},
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
    {"xrRequestBoundaryVisibilityMETA", xrRequestBoundaryVisibilityMETA},
    {"xrRequestDisplayRefreshRateFB", xrRequestDisplayRefreshRateFB},
    {"xrRequestExitSession", xrRequestExitSession},
    {"xrRequestMapLocalizationML", xrRequestMapLocalizationML},
    {"xrRequestSceneCaptureFB", xrRequestSceneCaptureFB},
    {"xrRequestSpatialContainerBoundsModeEXT", xrRequestSpatialContainerBoundsModeEXT},
    {"xrRequestSpatialContainerVisibleEXT", xrRequestSpatialContainerVisibleEXT},
    {"xrRequestWorldMeshAsyncML", xrRequestWorldMeshAsyncML},
    {"xrRequestWorldMeshCompleteML", xrRequestWorldMeshCompleteML},
    {"xrRequestWorldMeshStateAsyncML", xrRequestWorldMeshStateAsyncML},
    {"xrRequestWorldMeshStateCompleteML", xrRequestWorldMeshStateCompleteML},
    {"xrResetBodyTrackingCalibrationMETA", xrResetBodyTrackingCalibrationMETA},
    {"xrResultToString", xrResultToString},
    {"xrResultToString2KHR", xrResultToString2KHR},
    {"xrResumeSimultaneousHandsAndControllersTrackingMETA", xrResumeSimultaneousHandsAndControllersTrackingMETA},
    {"xrRetrieveSpaceQueryResultsFB", xrRetrieveSpaceQueryResultsFB},
    {"xrSaveSpaceFB", xrSaveSpaceFB},
    {"xrSaveSpaceListFB", xrSaveSpaceListFB},
    {"xrSaveSpacesMETA", xrSaveSpacesMETA},
    {"xrSendVirtualKeyboardInputMETA", xrSendVirtualKeyboardInputMETA},
    {"xrSetColorSpaceFB", xrSetColorSpaceFB},
    {"xrSetDigitalLensControlALMALENCE", xrSetDigitalLensControlALMALENCE},
    {"xrSetEnvironmentDepthEstimationVARJO", xrSetEnvironmentDepthEstimationVARJO},
    {"xrSetFacialSimulationModeBD", xrSetFacialSimulationModeBD},
    {"xrSetGoogleCloudAuthAsyncANDROID", xrSetGoogleCloudAuthAsyncANDROID},
    {"xrSetGoogleCloudAuthCompleteANDROID", xrSetGoogleCloudAuthCompleteANDROID},
    {"xrSetHandTrackingFrequencyHintMETA", xrSetHandTrackingFrequencyHintMETA},
    {"xrSetHdrMetadataSONY", xrSetHdrMetadataSONY},
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
    {"xrStartBodyTrackingCalibrationAppBD", xrStartBodyTrackingCalibrationAppBD},
    {"xrStartColocationAdvertisementMETA", xrStartColocationAdvertisementMETA},
    {"xrStartColocationDiscoveryMETA", xrStartColocationDiscoveryMETA},
    {"xrStartSenseDataProviderAsyncBD", xrStartSenseDataProviderAsyncBD},
    {"xrStartSenseDataProviderCompleteBD", xrStartSenseDataProviderCompleteBD},
    {"xrStopColocationAdvertisementMETA", xrStopColocationAdvertisementMETA},
    {"xrStopColocationDiscoveryMETA", xrStopColocationDiscoveryMETA},
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
