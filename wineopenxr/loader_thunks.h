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

#ifndef __WINE_OPENXR_LOADER_THUNKS_H
#define __WINE_OPENXR_LOADER_THUNKS_H

enum unix_call
{
    unix_init,
    unix_is_available_instance_function,
    unix_xrAcquireEnvironmentDepthImageMETA,
    unix_xrAcquireSwapchainImage,
    unix_xrAddTrackableImageDatabaseANDROID,
    unix_xrAllocateWorldMeshBufferML,
    unix_xrApplyForceFeedbackCurlMNDX,
    unix_xrApplyHapticFeedback,
    unix_xrAttachSessionActionSets,
    unix_xrBeginFrame,
    unix_xrBeginPlaneDetectionEXT,
    unix_xrBeginSession,
    unix_xrCancelFutureEXT,
    unix_xrCaptureSceneAsyncBD,
    unix_xrCaptureSceneCompleteBD,
    unix_xrChangeVirtualKeyboardTextContextMETA,
    unix_xrClearSpatialAnchorStoreMSFT,
    unix_xrComputeNewSceneMSFT,
    unix_xrConvertTimeToWin32PerformanceCounterKHR,
    unix_xrConvertWin32PerformanceCounterToTimeKHR,
    unix_xrCreateAction,
    unix_xrCreateActionSet,
    unix_xrCreateActionSpace,
    unix_xrCreateAnchorSpaceANDROID,
    unix_xrCreateAnchorSpaceBD,
    unix_xrCreateBodyTrackerBD,
    unix_xrCreateBodyTrackerFB,
    unix_xrCreateBodyTrackerHTC,
    unix_xrCreateDeviceAnchorPersistenceANDROID,
    unix_xrCreateEnvironmentDepthProviderMETA,
    unix_xrCreateEnvironmentDepthSwapchainMETA,
    unix_xrCreateEnvironmentRaycasterAsyncMETA,
    unix_xrCreateEnvironmentRaycasterCompleteMETA,
    unix_xrCreateExportedLocalizationMapML,
    unix_xrCreateEyeTrackerFB,
    unix_xrCreateFaceTracker2FB,
    unix_xrCreateFaceTrackerANDROID,
    unix_xrCreateFaceTrackerBD,
    unix_xrCreateFaceTrackerFB,
    unix_xrCreateFacialExpressionClientML,
    unix_xrCreateFacialTrackerHTC,
    unix_xrCreateFoveationProfileFB,
    unix_xrCreateGeometryInstanceFB,
    unix_xrCreateHandMeshSpaceMSFT,
    unix_xrCreateHandTrackerEXT,
    unix_xrCreateInstance,
    unix_xrCreateKeyboardSpaceFB,
    unix_xrCreateMarkerDetectorML,
    unix_xrCreateMarkerSpaceML,
    unix_xrCreateMarkerSpaceVARJO,
    unix_xrCreatePassthroughColorLutMETA,
    unix_xrCreatePassthroughFB,
    unix_xrCreatePassthroughHTC,
    unix_xrCreatePassthroughLayerANDROID,
    unix_xrCreatePassthroughLayerFB,
    unix_xrCreatePersistedAnchorSpaceANDROID,
    unix_xrCreatePlaneDetectorEXT,
    unix_xrCreateReferenceSpace,
    unix_xrCreateRenderModelAssetEXT,
    unix_xrCreateRenderModelEXT,
    unix_xrCreateRenderModelSpaceEXT,
    unix_xrCreateSceneMSFT,
    unix_xrCreateSceneMeshSnapshotANDROID,
    unix_xrCreateSceneMeshingTrackerANDROID,
    unix_xrCreateSceneObserverMSFT,
    unix_xrCreateSenseDataProviderBD,
    unix_xrCreateSession,
    unix_xrCreateSoundFieldBD,
    unix_xrCreateSoundObjectBD,
    unix_xrCreateSoundObstacleBD,
    unix_xrCreateSoundObstacleMaterialBD,
    unix_xrCreateSpaceUserFB,
    unix_xrCreateSpatialAnchorAsyncBD,
    unix_xrCreateSpatialAnchorCompleteBD,
    unix_xrCreateSpatialAnchorEXT,
    unix_xrCreateSpatialAnchorFB,
    unix_xrCreateSpatialAnchorFromPersistedNameMSFT,
    unix_xrCreateSpatialAnchorHTC,
    unix_xrCreateSpatialAnchorMSFT,
    unix_xrCreateSpatialAnchorSpaceANDROID,
    unix_xrCreateSpatialAnchorSpaceFromIdANDROID,
    unix_xrCreateSpatialAnchorSpaceMSFT,
    unix_xrCreateSpatialAnchorStoreConnectionMSFT,
    unix_xrCreateSpatialAnchorsAsyncML,
    unix_xrCreateSpatialAnchorsCompleteML,
    unix_xrCreateSpatialAnchorsStorageML,
    unix_xrCreateSpatialAudioRendererBD,
    unix_xrCreateSpatialContextAsyncEXT,
    unix_xrCreateSpatialContextCompleteEXT,
    unix_xrCreateSpatialDiscoverySnapshotAsyncEXT,
    unix_xrCreateSpatialDiscoverySnapshotCompleteEXT,
    unix_xrCreateSpatialEntityAnchorBD,
    unix_xrCreateSpatialEntityFromIdEXT,
    unix_xrCreateSpatialGraphNodeSpaceMSFT,
    unix_xrCreateSpatialPersistenceContextAsyncEXT,
    unix_xrCreateSpatialPersistenceContextCompleteEXT,
    unix_xrCreateSpatialRaycastSnapshotANDROID,
    unix_xrCreateSpatialUpdateSnapshotEXT,
    unix_xrCreateSwapchain,
    unix_xrCreateTrackableImageDatabaseAsyncANDROID,
    unix_xrCreateTrackableImageDatabaseCompleteANDROID,
    unix_xrCreateTrackableTrackerANDROID,
    unix_xrCreateTriangleMeshFB,
    unix_xrCreateVirtualKeyboardMETA,
    unix_xrCreateVirtualKeyboardSpaceMETA,
    unix_xrCreateWorldMeshDetectorML,
    unix_xrDeleteSpatialAnchorsAsyncML,
    unix_xrDeleteSpatialAnchorsCompleteML,
    unix_xrDeserializeSceneMSFT,
    unix_xrDestroyAction,
    unix_xrDestroyActionSet,
    unix_xrDestroyAnchorBD,
    unix_xrDestroyBodyTrackerBD,
    unix_xrDestroyBodyTrackerFB,
    unix_xrDestroyBodyTrackerHTC,
    unix_xrDestroyDeviceAnchorPersistenceANDROID,
    unix_xrDestroyEnvironmentDepthProviderMETA,
    unix_xrDestroyEnvironmentDepthSwapchainMETA,
    unix_xrDestroyEnvironmentRaycasterMETA,
    unix_xrDestroyExportedLocalizationMapML,
    unix_xrDestroyEyeTrackerFB,
    unix_xrDestroyFaceTracker2FB,
    unix_xrDestroyFaceTrackerANDROID,
    unix_xrDestroyFaceTrackerBD,
    unix_xrDestroyFaceTrackerFB,
    unix_xrDestroyFacialExpressionClientML,
    unix_xrDestroyFacialTrackerHTC,
    unix_xrDestroyFoveationProfileFB,
    unix_xrDestroyGeometryInstanceFB,
    unix_xrDestroyHandTrackerEXT,
    unix_xrDestroyInstance,
    unix_xrDestroyMarkerDetectorML,
    unix_xrDestroyPassthroughColorLutMETA,
    unix_xrDestroyPassthroughFB,
    unix_xrDestroyPassthroughHTC,
    unix_xrDestroyPassthroughLayerANDROID,
    unix_xrDestroyPassthroughLayerFB,
    unix_xrDestroyPlaneDetectorEXT,
    unix_xrDestroyRenderModelAssetEXT,
    unix_xrDestroyRenderModelEXT,
    unix_xrDestroySceneMSFT,
    unix_xrDestroySceneMeshSnapshotANDROID,
    unix_xrDestroySceneMeshingTrackerANDROID,
    unix_xrDestroySceneObserverMSFT,
    unix_xrDestroySenseDataProviderBD,
    unix_xrDestroySenseDataSnapshotBD,
    unix_xrDestroySession,
    unix_xrDestroySoundFieldBD,
    unix_xrDestroySoundObjectBD,
    unix_xrDestroySoundObstacleBD,
    unix_xrDestroySoundObstacleMaterialBD,
    unix_xrDestroySpace,
    unix_xrDestroySpaceUserFB,
    unix_xrDestroySpatialAnchorMSFT,
    unix_xrDestroySpatialAnchorStoreConnectionMSFT,
    unix_xrDestroySpatialAnchorsStorageML,
    unix_xrDestroySpatialAudioRendererBD,
    unix_xrDestroySpatialContextEXT,
    unix_xrDestroySpatialEntityEXT,
    unix_xrDestroySpatialGraphNodeBindingMSFT,
    unix_xrDestroySpatialPersistenceContextEXT,
    unix_xrDestroySpatialSnapshotEXT,
    unix_xrDestroySwapchain,
    unix_xrDestroyTrackableImageDatabaseANDROID,
    unix_xrDestroyTrackableTrackerANDROID,
    unix_xrDestroyTriangleMeshFB,
    unix_xrDestroyVirtualKeyboardMETA,
    unix_xrDestroyWorldMeshDetectorML,
    unix_xrDiscoverSpacesMETA,
    unix_xrDownloadSharedSpatialAnchorAsyncBD,
    unix_xrDownloadSharedSpatialAnchorCompleteBD,
    unix_xrEnableLocalizationEventsML,
    unix_xrEnableUserCalibrationEventsML,
    unix_xrEndAudioPeriodBD,
    unix_xrEndFrame,
    unix_xrEndSession,
    unix_xrEnumerateApiLayerProperties,
    unix_xrEnumerateBoundSourcesForAction,
    unix_xrEnumerateColorSpacesFB,
    unix_xrEnumerateDisplayRefreshRatesFB,
    unix_xrEnumerateEnvironmentBlendModes,
    unix_xrEnumerateEnvironmentDepthSwapchainImagesMETA,
    unix_xrEnumerateExternalCamerasOCULUS,
    unix_xrEnumerateFacialSimulationModesBD,
    unix_xrEnumerateInstanceExtensionProperties,
    unix_xrEnumerateInteractionRenderModelIdsEXT,
    unix_xrEnumeratePerformanceMetricsCounterPathsANDROID,
    unix_xrEnumeratePerformanceMetricsCounterPathsMETA,
    unix_xrEnumeratePersistedAnchorsANDROID,
    unix_xrEnumeratePersistedSpatialAnchorNamesMSFT,
    unix_xrEnumerateRaycastSupportedTrackableTypesANDROID,
    unix_xrEnumerateReferenceSpaces,
    unix_xrEnumerateRenderModelPathsFB,
    unix_xrEnumerateRenderModelSubactionPathsEXT,
    unix_xrEnumerateReprojectionModesMSFT,
    unix_xrEnumerateSceneComputeFeaturesMSFT,
    unix_xrEnumerateSpaceSupportedComponentsFB,
    unix_xrEnumerateSpatialAnchorAttachableComponentsANDROID,
    unix_xrEnumerateSpatialCapabilitiesEXT,
    unix_xrEnumerateSpatialCapabilityComponentTypesEXT,
    unix_xrEnumerateSpatialCapabilityFeaturesEXT,
    unix_xrEnumerateSpatialEntityComponentTypesBD,
    unix_xrEnumerateSpatialPersistenceScopesEXT,
    unix_xrEnumerateSupportedAnchorTrackableTypesANDROID,
    unix_xrEnumerateSupportedAudioSampleRateBD,
    unix_xrEnumerateSupportedPersistenceAnchorTypesANDROID,
    unix_xrEnumerateSupportedSemanticLabelSetsANDROID,
    unix_xrEnumerateSupportedTrackableTypesANDROID,
    unix_xrEnumerateSwapchainFormats,
    unix_xrEnumerateSwapchainImages,
    unix_xrEnumerateViewConfigurationViews,
    unix_xrEnumerateViewConfigurations,
    unix_xrEnumerateViveTrackerPathsHTCX,
    unix_xrEraseSpaceFB,
    unix_xrEraseSpacesMETA,
    unix_xrFreeWorldMeshBufferML,
    unix_xrGeometryInstanceSetTransformFB,
    unix_xrGetActionStateBoolean,
    unix_xrGetActionStateFloat,
    unix_xrGetActionStatePose,
    unix_xrGetActionStateVector2f,
    unix_xrGetAllSubmeshStatesANDROID,
    unix_xrGetAllTrackablesANDROID,
    unix_xrGetAnchorPersistStateANDROID,
    unix_xrGetAnchorUuidBD,
    unix_xrGetAudioInputDeviceGuidOculus,
    unix_xrGetAudioOutputDeviceGuidOculus,
    unix_xrGetBodySkeletonFB,
    unix_xrGetBodySkeletonHTC,
    unix_xrGetControllerModelKeyMSFT,
    unix_xrGetControllerModelPropertiesMSFT,
    unix_xrGetControllerModelStateMSFT,
    unix_xrGetCurrentInteractionProfile,
    unix_xrGetDeviceSampleRateFB,
    unix_xrGetDisplayRefreshRateFB,
    unix_xrGetEnvironmentDepthSwapchainStateMETA,
    unix_xrGetExportedLocalizationMapDataML,
    unix_xrGetEyeGazesFB,
    unix_xrGetFaceCalibrationStateANDROID,
    unix_xrGetFaceExpressionWeights2FB,
    unix_xrGetFaceExpressionWeightsFB,
    unix_xrGetFaceStateANDROID,
    unix_xrGetFacialExpressionBlendShapePropertiesML,
    unix_xrGetFacialExpressionsHTC,
    unix_xrGetFacialSimulationDataBD,
    unix_xrGetFacialSimulationModeBD,
    unix_xrGetFoveationEyeTrackedStateMETA,
    unix_xrGetHandGestureQCOM,
    unix_xrGetHandMeshFB,
    unix_xrGetInputSourceLocalizedName,
    unix_xrGetInstanceProperties,
    unix_xrGetMarkerDetectorStateML,
    unix_xrGetMarkerLengthML,
    unix_xrGetMarkerNumberML,
    unix_xrGetMarkerReprojectionErrorML,
    unix_xrGetMarkerSizeVARJO,
    unix_xrGetMarkerStringML,
    unix_xrGetMarkersML,
    unix_xrGetOpenGLGraphicsRequirementsKHR,
    unix_xrGetPassthroughCameraStateANDROID,
    unix_xrGetPassthroughPreferencesMETA,
    unix_xrGetPerformanceMetricsStateANDROID,
    unix_xrGetPerformanceMetricsStateMETA,
    unix_xrGetPlaneDetectionStateEXT,
    unix_xrGetPlaneDetectionsEXT,
    unix_xrGetPlanePolygonBufferEXT,
    unix_xrGetQueriedSenseDataBD,
    unix_xrGetRecommendedLayerResolutionMETA,
    unix_xrGetReferenceSpaceBoundsRect,
    unix_xrGetRenderModelAssetDataEXT,
    unix_xrGetRenderModelAssetPropertiesEXT,
    unix_xrGetRenderModelPoseTopLevelUserPathEXT,
    unix_xrGetRenderModelPropertiesEXT,
    unix_xrGetRenderModelPropertiesFB,
    unix_xrGetRenderModelStateEXT,
    unix_xrGetSceneComponentsMSFT,
    unix_xrGetSceneComputeStateMSFT,
    unix_xrGetSceneMarkerDecodedStringMSFT,
    unix_xrGetSceneMarkerRawDataMSFT,
    unix_xrGetSceneMeshBuffersMSFT,
    unix_xrGetSenseDataProviderStateBD,
    unix_xrGetSerializedSceneFragmentDataMSFT,
    unix_xrGetSpaceBoundary2DFB,
    unix_xrGetSpaceBoundingBox2DFB,
    unix_xrGetSpaceBoundingBox3DFB,
    unix_xrGetSpaceComponentStatusFB,
    unix_xrGetSpaceContainerFB,
    unix_xrGetSpaceRoomLayoutFB,
    unix_xrGetSpaceSemanticLabelsFB,
    unix_xrGetSpaceTriangleMeshMETA,
    unix_xrGetSpaceUserIdFB,
    unix_xrGetSpaceUuidFB,
    unix_xrGetSpatialAnchorNameHTC,
    unix_xrGetSpatialAnchorStateML,
    unix_xrGetSpatialBufferFloatEXT,
    unix_xrGetSpatialBufferStringEXT,
    unix_xrGetSpatialBufferUint16EXT,
    unix_xrGetSpatialBufferUint32EXT,
    unix_xrGetSpatialBufferUint8EXT,
    unix_xrGetSpatialBufferVector2fEXT,
    unix_xrGetSpatialBufferVector3fEXT,
    unix_xrGetSpatialEntityComponentDataBD,
    unix_xrGetSpatialEntityUuidBD,
    unix_xrGetSpatialGraphNodeBindingPropertiesMSFT,
    unix_xrGetSubmeshDataANDROID,
    unix_xrGetSwapchainStateFB,
    unix_xrGetSystem,
    unix_xrGetSystemProperties,
    unix_xrGetTrackableImageANDROID,
    unix_xrGetTrackableMarkerANDROID,
    unix_xrGetTrackableObjectANDROID,
    unix_xrGetTrackablePlaneANDROID,
    unix_xrGetTrackableQrCodeANDROID,
    unix_xrGetViewConfigurationProperties,
    unix_xrGetVirtualKeyboardDirtyTexturesMETA,
    unix_xrGetVirtualKeyboardModelAnimationStatesMETA,
    unix_xrGetVirtualKeyboardScaleMETA,
    unix_xrGetVirtualKeyboardTextureDataMETA,
    unix_xrGetVisibilityMaskKHR,
    unix_xrGetVulkanDeviceExtensionsKHR,
    unix_xrGetVulkanGraphicsDevice2KHR,
    unix_xrGetVulkanGraphicsDeviceKHR,
    unix_xrGetVulkanGraphicsRequirements2KHR,
    unix_xrGetVulkanGraphicsRequirementsKHR,
    unix_xrGetVulkanInstanceExtensionsKHR,
    unix_xrGetWorldMeshBufferRecommendSizeML,
    unix_xrImportLocalizationMapML,
    unix_xrLoadControllerModelMSFT,
    unix_xrLoadRenderModelFB,
    unix_xrLocateBodyJointsBD,
    unix_xrLocateBodyJointsFB,
    unix_xrLocateBodyJointsHTC,
    unix_xrLocateHandJointsEXT,
    unix_xrLocateSceneComponentsMSFT,
    unix_xrLocateSpace,
    unix_xrLocateSpaces,
    unix_xrLocateSpacesKHR,
    unix_xrLocateViews,
    unix_xrPassthroughLayerPauseFB,
    unix_xrPassthroughLayerResumeFB,
    unix_xrPassthroughLayerSetKeyboardHandsIntensityFB,
    unix_xrPassthroughLayerSetStyleFB,
    unix_xrPassthroughPauseFB,
    unix_xrPassthroughStartFB,
    unix_xrPathToString,
    unix_xrPauseSimultaneousHandsAndControllersTrackingMETA,
    unix_xrPerfSettingsSetPerformanceLevelEXT,
    unix_xrPerformEnvironmentRaycastMETA,
    unix_xrPersistAnchorANDROID,
    unix_xrPersistSpatialAnchorAsyncBD,
    unix_xrPersistSpatialAnchorCompleteBD,
    unix_xrPersistSpatialAnchorMSFT,
    unix_xrPersistSpatialEntityAsyncEXT,
    unix_xrPersistSpatialEntityCompleteEXT,
    unix_xrPollEvent,
    unix_xrPollFutureEXT,
    unix_xrPublishSpatialAnchorsAsyncML,
    unix_xrPublishSpatialAnchorsCompleteML,
    unix_xrQueryFramesPerBufferRangeBD,
    unix_xrQueryLocalizationMapsML,
    unix_xrQueryPerformanceMetricsCounterANDROID,
    unix_xrQueryPerformanceMetricsCounterMETA,
    unix_xrQuerySenseDataAsyncBD,
    unix_xrQuerySenseDataCompleteBD,
    unix_xrQuerySpacesFB,
    unix_xrQuerySpatialAnchorsAsyncML,
    unix_xrQuerySpatialAnchorsCompleteML,
    unix_xrQuerySpatialComponentDataEXT,
    unix_xrQuerySystemTrackedKeyboardFB,
    unix_xrRaycastANDROID,
    unix_xrReleaseSwapchainImage,
    unix_xrRemoveTrackableImageDatabaseANDROID,
    unix_xrRequestBodyTrackingFidelityMETA,
    unix_xrRequestDisplayRefreshRateFB,
    unix_xrRequestExitSession,
    unix_xrRequestMapLocalizationML,
    unix_xrRequestSceneCaptureFB,
    unix_xrRequestWorldMeshAsyncML,
    unix_xrRequestWorldMeshCompleteML,
    unix_xrRequestWorldMeshStateAsyncML,
    unix_xrRequestWorldMeshStateCompleteML,
    unix_xrResetBodyTrackingCalibrationMETA,
    unix_xrResultToString,
    unix_xrResumeSimultaneousHandsAndControllersTrackingMETA,
    unix_xrRetrieveSpaceDiscoveryResultsMETA,
    unix_xrRetrieveSpaceQueryResultsFB,
    unix_xrSaveSpaceFB,
    unix_xrSaveSpaceListFB,
    unix_xrSaveSpacesMETA,
    unix_xrSendVirtualKeyboardInputMETA,
    unix_xrSetColorSpaceFB,
    unix_xrSetDigitalLensControlALMALENCE,
    unix_xrSetEnvironmentDepthEstimationVARJO,
    unix_xrSetEnvironmentDepthHandRemovalMETA,
    unix_xrSetFacialSimulationModeBD,
    unix_xrSetInputDeviceActiveEXT,
    unix_xrSetInputDeviceLocationEXT,
    unix_xrSetInputDeviceStateBoolEXT,
    unix_xrSetInputDeviceStateFloatEXT,
    unix_xrSetInputDeviceStateVector2fEXT,
    unix_xrSetMarkerTrackingPredictionVARJO,
    unix_xrSetMarkerTrackingTimeoutVARJO,
    unix_xrSetMarkerTrackingVARJO,
    unix_xrSetPassthroughLayerMeshANDROID,
    unix_xrSetPerformanceMetricsStateANDROID,
    unix_xrSetPerformanceMetricsStateMETA,
    unix_xrSetSpaceComponentStatusFB,
    unix_xrSetSystemNotificationsML,
    unix_xrSetTilePropertiesHintMETA,
    unix_xrSetTrackingOptimizationSettingsHintQCOM,
    unix_xrSetViewOffsetVARJO,
    unix_xrSetVirtualKeyboardModelVisibilityMETA,
    unix_xrShareSpacesFB,
    unix_xrShareSpacesMETA,
    unix_xrShareSpatialAnchorAsyncBD,
    unix_xrShareSpatialAnchorCompleteBD,
    unix_xrSnapshotMarkerDetectorML,
    unix_xrStartColocationAdvertisementMETA,
    unix_xrStartColocationDiscoveryMETA,
    unix_xrStartEnvironmentDepthProviderMETA,
    unix_xrStartSenseDataProviderAsyncBD,
    unix_xrStartSenseDataProviderCompleteBD,
    unix_xrStopColocationAdvertisementMETA,
    unix_xrStopColocationDiscoveryMETA,
    unix_xrStopEnvironmentDepthProviderMETA,
    unix_xrStopHapticFeedback,
    unix_xrStopSenseDataProviderBD,
    unix_xrStringToPath,
    unix_xrStructureTypeToString,
    unix_xrStructureTypeToString2KHR,
    unix_xrSubmitSoundFieldBufferBD,
    unix_xrSubmitSoundObjectBufferBD,
    unix_xrSuggestBodyTrackingCalibrationOverrideMETA,
    unix_xrSuggestInteractionProfileBindings,
    unix_xrSuggestVirtualKeyboardLocationMETA,
    unix_xrSyncActions,
    unix_xrThermalGetTemperatureTrendEXT,
    unix_xrTriangleMeshBeginUpdateFB,
    unix_xrTriangleMeshBeginVertexBufferUpdateFB,
    unix_xrTriangleMeshEndUpdateFB,
    unix_xrTriangleMeshEndVertexBufferUpdateFB,
    unix_xrTriangleMeshGetIndexBufferFB,
    unix_xrTriangleMeshGetVertexBufferFB,
    unix_xrTryCreateSpatialGraphStaticNodeBindingMSFT,
    unix_xrUnpersistAnchorANDROID,
    unix_xrUnpersistSpatialAnchorAsyncBD,
    unix_xrUnpersistSpatialAnchorCompleteBD,
    unix_xrUnpersistSpatialAnchorMSFT,
    unix_xrUnpersistSpatialEntityAsyncEXT,
    unix_xrUnpersistSpatialEntityCompleteEXT,
    unix_xrUpdateHandMeshMSFT,
    unix_xrUpdatePassthroughColorLutMETA,
    unix_xrUpdateSoundFieldConfigBD,
    unix_xrUpdateSoundObjectConfigBD,
    unix_xrUpdateSoundObstacleConfigBD,
    unix_xrUpdateSoundObstacleMaterialConfigBD,
    unix_xrUpdateSpatialAnchorsExpirationAsyncML,
    unix_xrUpdateSpatialAnchorsExpirationCompleteML,
    unix_xrUpdateSwapchainFB,
    unix_xrWaitAudioPeriodBD,
    unix_xrWaitFrame,
    unix_xrWaitSwapchainImage,
    unix_count,
};

struct xrAcquireEnvironmentDepthImageMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    const XrEnvironmentDepthImageAcquireInfoMETA *acquireInfo;
    XrEnvironmentDepthImageMETA *environmentDepthImage;
    XrResult result;
};

struct xrAcquireSwapchainImage_params
{
    XrSwapchain swapchain;
    const XrSwapchainImageAcquireInfo *acquireInfo;
    uint32_t *index;
    XrResult result;
};

struct xrAddTrackableImageDatabaseANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    XrTrackableImageDatabaseANDROID database;
    XrResult result;
};

struct xrAllocateWorldMeshBufferML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshBufferSizeML *size;
    XrWorldMeshBufferML *buffer;
    XrResult result;
};

struct xrApplyForceFeedbackCurlMNDX_params
{
    XrHandTrackerEXT handTracker;
    const XrForceFeedbackCurlApplyLocationsMNDX *locations;
    XrResult result;
};

struct xrApplyHapticFeedback_params
{
    XrSession session;
    const XrHapticActionInfo *hapticActionInfo;
    const XrHapticBaseHeader *hapticFeedback;
    XrResult result;
};

struct xrAttachSessionActionSets_params
{
    XrSession session;
    const XrSessionActionSetsAttachInfo *attachInfo;
    XrResult result;
};

struct xrBeginFrame_params
{
    XrSession session;
    const XrFrameBeginInfo *frameBeginInfo;
    XrResult result;
};

struct xrBeginPlaneDetectionEXT_params
{
    XrPlaneDetectorEXT planeDetector;
    const XrPlaneDetectorBeginInfoEXT *beginInfo;
    XrResult result;
};

struct xrBeginSession_params
{
    XrSession session;
    const XrSessionBeginInfo *beginInfo;
    XrResult result;
};

struct xrCancelFutureEXT_params
{
    XrInstance instance;
    const XrFutureCancelInfoEXT *cancelInfo;
    XrResult result;
};

struct xrCaptureSceneAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSceneCaptureInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCaptureSceneCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrChangeVirtualKeyboardTextContextMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo;
    XrResult result;
};

struct xrClearSpatialAnchorStoreMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    XrResult result;
};

struct xrComputeNewSceneMSFT_params
{
    XrSceneObserverMSFT sceneObserver;
    const XrNewSceneComputeInfoMSFT *computeInfo;
    XrResult result;
};

struct xrConvertTimeToWin32PerformanceCounterKHR_params
{
    XrInstance instance;
    XrTime time;
    LARGE_INTEGER *performanceCounter;
    XrResult result;
};

struct xrConvertWin32PerformanceCounterToTimeKHR_params
{
    XrInstance instance;
    const LARGE_INTEGER *performanceCounter;
    XrTime *time;
    XrResult result;
};

struct xrCreateAction_params
{
    XrActionSet actionSet;
    const XrActionCreateInfo *createInfo;
    XrAction *action;
    XrResult result;
};

struct xrCreateActionSet_params
{
    XrInstance instance;
    const XrActionSetCreateInfo *createInfo;
    XrActionSet *actionSet;
    XrResult result;
};

struct xrCreateActionSpace_params
{
    XrSession session;
    const XrActionSpaceCreateInfo *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateAnchorSpaceANDROID_params
{
    XrSession session;
    const XrAnchorSpaceCreateInfoANDROID *createInfo;
    XrSpace *anchorOutput;
    XrResult result;
};

struct xrCreateAnchorSpaceBD_params
{
    XrSession session;
    const XrAnchorSpaceCreateInfoBD *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateBodyTrackerBD_params
{
    XrSession session;
    const XrBodyTrackerCreateInfoBD *createInfo;
    XrBodyTrackerBD *bodyTracker;
    XrResult result;
};

struct xrCreateBodyTrackerFB_params
{
    XrSession session;
    const XrBodyTrackerCreateInfoFB *createInfo;
    XrBodyTrackerFB *bodyTracker;
    XrResult result;
};

struct xrCreateBodyTrackerHTC_params
{
    XrSession session;
    const XrBodyTrackerCreateInfoHTC *createInfo;
    XrBodyTrackerHTC *bodyTracker;
    XrResult result;
};

struct xrCreateDeviceAnchorPersistenceANDROID_params
{
    XrSession session;
    const XrDeviceAnchorPersistenceCreateInfoANDROID *createInfo;
    XrDeviceAnchorPersistenceANDROID *outHandle;
    XrResult result;
};

struct xrCreateEnvironmentDepthProviderMETA_params
{
    XrSession session;
    const XrEnvironmentDepthProviderCreateInfoMETA *createInfo;
    XrEnvironmentDepthProviderMETA *environmentDepthProvider;
    XrResult result;
};

struct xrCreateEnvironmentDepthSwapchainMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    const XrEnvironmentDepthSwapchainCreateInfoMETA *createInfo;
    XrEnvironmentDepthSwapchainMETA *swapchain;
    XrResult result;
};

struct xrCreateEnvironmentRaycasterAsyncMETA_params
{
    XrSession session;
    const XrEnvironmentRaycasterCreateInfoMETA *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateEnvironmentRaycasterCompleteMETA_params
{
    XrSession session;
    XrFutureEXT future;
    XrEnvironmentRaycasterCreateCompletionMETA *completion;
    XrResult result;
};

struct xrCreateExportedLocalizationMapML_params
{
    XrSession session;
    const XrUuidEXT *mapUuid;
    XrExportedLocalizationMapML *map;
    XrResult result;
};

struct xrCreateEyeTrackerFB_params
{
    XrSession session;
    const XrEyeTrackerCreateInfoFB *createInfo;
    XrEyeTrackerFB *eyeTracker;
    XrResult result;
};

struct xrCreateFaceTracker2FB_params
{
    XrSession session;
    const XrFaceTrackerCreateInfo2FB *createInfo;
    XrFaceTracker2FB *faceTracker;
    XrResult result;
};

struct xrCreateFaceTrackerANDROID_params
{
    XrSession session;
    const XrFaceTrackerCreateInfoANDROID *createInfo;
    XrFaceTrackerANDROID *faceTracker;
    XrResult result;
};

struct xrCreateFaceTrackerBD_params
{
    XrSession session;
    const XrFaceTrackerCreateInfoBD *createInfo;
    XrFaceTrackerBD *tracker;
    XrResult result;
};

struct xrCreateFaceTrackerFB_params
{
    XrSession session;
    const XrFaceTrackerCreateInfoFB *createInfo;
    XrFaceTrackerFB *faceTracker;
    XrResult result;
};

struct xrCreateFacialExpressionClientML_params
{
    XrSession session;
    const XrFacialExpressionClientCreateInfoML *createInfo;
    XrFacialExpressionClientML *facialExpressionClient;
    XrResult result;
};

struct xrCreateFacialTrackerHTC_params
{
    XrSession session;
    const XrFacialTrackerCreateInfoHTC *createInfo;
    XrFacialTrackerHTC *facialTracker;
    XrResult result;
};

struct xrCreateFoveationProfileFB_params
{
    XrSession session;
    const XrFoveationProfileCreateInfoFB *createInfo;
    XrFoveationProfileFB *profile;
    XrResult result;
};

struct xrCreateGeometryInstanceFB_params
{
    XrSession session;
    const XrGeometryInstanceCreateInfoFB *createInfo;
    XrGeometryInstanceFB *outGeometryInstance;
    XrResult result;
};

struct xrCreateHandMeshSpaceMSFT_params
{
    XrHandTrackerEXT handTracker;
    const XrHandMeshSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateHandTrackerEXT_params
{
    XrSession session;
    const XrHandTrackerCreateInfoEXT *createInfo;
    XrHandTrackerEXT *handTracker;
    XrResult result;
};

struct xrCreateInstance_params
{
    const XrInstanceCreateInfo *createInfo;
    XrInstance *instance;
    XrResult result;
};

struct xrCreateKeyboardSpaceFB_params
{
    XrSession session;
    const XrKeyboardSpaceCreateInfoFB *createInfo;
    XrSpace *keyboardSpace;
    XrResult result;
};

struct xrCreateMarkerDetectorML_params
{
    XrSession session;
    const XrMarkerDetectorCreateInfoML *createInfo;
    XrMarkerDetectorML *markerDetector;
    XrResult result;
};

struct xrCreateMarkerSpaceML_params
{
    XrSession session;
    const XrMarkerSpaceCreateInfoML *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateMarkerSpaceVARJO_params
{
    XrSession session;
    const XrMarkerSpaceCreateInfoVARJO *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreatePassthroughColorLutMETA_params
{
    XrPassthroughFB passthrough;
    const XrPassthroughColorLutCreateInfoMETA *createInfo;
    XrPassthroughColorLutMETA *colorLut;
    XrResult result;
};

struct xrCreatePassthroughFB_params
{
    XrSession session;
    const XrPassthroughCreateInfoFB *createInfo;
    XrPassthroughFB *outPassthrough;
    XrResult result;
};

struct xrCreatePassthroughHTC_params
{
    XrSession session;
    const XrPassthroughCreateInfoHTC *createInfo;
    XrPassthroughHTC *passthrough;
    XrResult result;
};

struct xrCreatePassthroughLayerANDROID_params
{
    XrSession session;
    const XrPassthroughLayerCreateInfoANDROID *createInfo;
    XrPassthroughLayerANDROID *layer;
    XrResult result;
};

struct xrCreatePassthroughLayerFB_params
{
    XrSession session;
    const XrPassthroughLayerCreateInfoFB *createInfo;
    XrPassthroughLayerFB *outLayer;
    XrResult result;
};

struct xrCreatePersistedAnchorSpaceANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    const XrPersistedAnchorSpaceCreateInfoANDROID *createInfo;
    XrSpace *anchorOutput;
    XrResult result;
};

struct xrCreatePlaneDetectorEXT_params
{
    XrSession session;
    const XrPlaneDetectorCreateInfoEXT *createInfo;
    XrPlaneDetectorEXT *planeDetector;
    XrResult result;
};

struct xrCreateReferenceSpace_params
{
    XrSession session;
    const XrReferenceSpaceCreateInfo *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateRenderModelAssetEXT_params
{
    XrSession session;
    const XrRenderModelAssetCreateInfoEXT *createInfo;
    XrRenderModelAssetEXT *asset;
    XrResult result;
};

struct xrCreateRenderModelEXT_params
{
    XrSession session;
    const XrRenderModelCreateInfoEXT *createInfo;
    XrRenderModelEXT *renderModel;
    XrResult result;
};

struct xrCreateRenderModelSpaceEXT_params
{
    XrSession session;
    const XrRenderModelSpaceCreateInfoEXT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSceneMSFT_params
{
    XrSceneObserverMSFT sceneObserver;
    const XrSceneCreateInfoMSFT *createInfo;
    XrSceneMSFT *scene;
    XrResult result;
};

struct xrCreateSceneMeshSnapshotANDROID_params
{
    XrSceneMeshingTrackerANDROID tracker;
    const XrSceneMeshSnapshotCreateInfoANDROID *createInfo;
    XrSceneMeshSnapshotCreationResultANDROID *outSnapshotCreationResult;
    XrResult result;
};

struct xrCreateSceneMeshingTrackerANDROID_params
{
    XrSession session;
    const XrSceneMeshingTrackerCreateInfoANDROID *createInfo;
    XrSceneMeshingTrackerANDROID *tracker;
    XrResult result;
};

struct xrCreateSceneObserverMSFT_params
{
    XrSession session;
    const XrSceneObserverCreateInfoMSFT *createInfo;
    XrSceneObserverMSFT *sceneObserver;
    XrResult result;
};

struct xrCreateSenseDataProviderBD_params
{
    XrSession session;
    const XrSenseDataProviderCreateInfoBD *createInfo;
    XrSenseDataProviderBD *provider;
    XrResult result;
};

struct xrCreateSession_params
{
    XrInstance instance;
    const XrSessionCreateInfo *createInfo;
    XrSession *session;
    XrResult result;
};

struct xrCreateSoundFieldBD_params
{
    XrSpatialAudioRendererBD renderer;
    const XrSoundFieldConfigBD *config;
    XrSoundFieldBD *soundField;
    XrResult result;
};

struct xrCreateSoundObjectBD_params
{
    XrSpatialAudioRendererBD renderer;
    const XrSoundObjectConfigBD *config;
    XrSoundObjectBD *soundObject;
    XrResult result;
};

struct xrCreateSoundObstacleBD_params
{
    XrSpatialAudioRendererBD renderer;
    const XrSoundObstacleConfigBD *config;
    const XrSoundTriangleMeshBD *mesh;
    XrSoundObstacleBD *soundObstacle;
    XrResult result;
};

struct xrCreateSoundObstacleMaterialBD_params
{
    XrSpatialAudioRendererBD renderer;
    const XrSoundObstacleMaterialConfigBD *config;
    XrSoundObstacleMaterialBD *material;
    XrResult result;
};

struct xrCreateSpaceUserFB_params
{
    XrSession session;
    const XrSpaceUserCreateInfoFB *info;
    XrSpaceUserFB *user;
    XrResult result;
};

struct xrCreateSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSpatialAnchorCreateInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrSpatialAnchorCreateCompletionBD *completion;
    XrResult result;
};

struct xrCreateSpatialAnchorEXT_params
{
    XrSpatialContextEXT spatialContext;
    const XrSpatialAnchorCreateInfoEXT *createInfo;
    XrSpatialEntityIdEXT *anchorEntityId;
    XrSpatialEntityEXT *anchorEntity;
    XrResult result;
};

struct xrCreateSpatialAnchorFB_params
{
    XrSession session;
    const XrSpatialAnchorCreateInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrCreateSpatialAnchorFromPersistedNameMSFT_params
{
    XrSession session;
    const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo;
    XrSpatialAnchorMSFT *spatialAnchor;
    XrResult result;
};

struct xrCreateSpatialAnchorHTC_params
{
    XrSession session;
    const XrSpatialAnchorCreateInfoHTC *createInfo;
    XrSpace *anchor;
    XrResult result;
};

struct xrCreateSpatialAnchorMSFT_params
{
    XrSession session;
    const XrSpatialAnchorCreateInfoMSFT *createInfo;
    XrSpatialAnchorMSFT *anchor;
    XrResult result;
};

struct xrCreateSpatialAnchorSpaceANDROID_params
{
    XrSession session;
    XrSpatialContextEXT spatialContext;
    const XrSpatialAnchorCreateInfoEXT *createInfo;
    XrSpatialEntityIdEXT *anchorEntityId;
    XrSpace *anchorSpace;
    XrResult result;
};

struct xrCreateSpatialAnchorSpaceFromIdANDROID_params
{
    XrSession session;
    XrSpatialContextEXT spatialContext;
    const XrSpatialAnchorSpaceFromIdCreateInfoANDROID *createInfo;
    XrSpace *anchorSpace;
    XrResult result;
};

struct xrCreateSpatialAnchorSpaceMSFT_params
{
    XrSession session;
    const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSpatialAnchorStoreConnectionMSFT_params
{
    XrSession session;
    XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore;
    XrResult result;
};

struct xrCreateSpatialAnchorsAsyncML_params
{
    XrSession session;
    const XrSpatialAnchorsCreateInfoBaseHeaderML *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialAnchorsCompleteML_params
{
    XrSession session;
    XrFutureEXT future;
    XrCreateSpatialAnchorsCompletionML *completion;
    XrResult result;
};

struct xrCreateSpatialAnchorsStorageML_params
{
    XrSession session;
    const XrSpatialAnchorsCreateStorageInfoML *createInfo;
    XrSpatialAnchorsStorageML *storage;
    XrResult result;
};

struct xrCreateSpatialAudioRendererBD_params
{
    XrSession session;
    const XrSpatialAudioRendererCreateInfoBD *createInfo;
    XrSpatialAudioRendererBD *renderer;
    XrResult result;
};

struct xrCreateSpatialContextAsyncEXT_params
{
    XrSession session;
    const XrSpatialContextCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialContextCompleteEXT_params
{
    XrSession session;
    XrFutureEXT future;
    XrCreateSpatialContextCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialDiscoverySnapshotAsyncEXT_params
{
    XrSpatialContextEXT spatialContext;
    const XrSpatialDiscoverySnapshotCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialDiscoverySnapshotCompleteEXT_params
{
    XrSpatialContextEXT spatialContext;
    const XrCreateSpatialDiscoverySnapshotCompletionInfoEXT *createSnapshotCompletionInfo;
    XrCreateSpatialDiscoverySnapshotCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialEntityAnchorBD_params
{
    XrSenseDataProviderBD provider;
    const XrSpatialEntityAnchorCreateInfoBD *createInfo;
    XrAnchorBD *anchor;
    XrResult result;
};

struct xrCreateSpatialEntityFromIdEXT_params
{
    XrSpatialContextEXT spatialContext;
    const XrSpatialEntityFromIdCreateInfoEXT *createInfo;
    XrSpatialEntityEXT *spatialEntity;
    XrResult result;
};

struct xrCreateSpatialGraphNodeSpaceMSFT_params
{
    XrSession session;
    const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo;
    XrSpace *space;
    XrResult result;
};

struct xrCreateSpatialPersistenceContextAsyncEXT_params
{
    XrSession session;
    const XrSpatialPersistenceContextCreateInfoEXT *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateSpatialPersistenceContextCompleteEXT_params
{
    XrSession session;
    XrFutureEXT future;
    XrCreateSpatialPersistenceContextCompletionEXT *completion;
    XrResult result;
};

struct xrCreateSpatialRaycastSnapshotANDROID_params
{
    XrSpatialContextEXT spatialContext;
    const XrSpatialRaycastSnapshotCreateInfoANDROID *createInfo;
    XrSpatialSnapshotEXT *snapshot;
    XrResult result;
};

struct xrCreateSpatialUpdateSnapshotEXT_params
{
    XrSpatialContextEXT spatialContext;
    const XrSpatialUpdateSnapshotCreateInfoEXT *createInfo;
    XrSpatialSnapshotEXT *snapshot;
    XrResult result;
};

struct xrCreateSwapchain_params
{
    XrSession session;
    const XrSwapchainCreateInfo *createInfo;
    XrSwapchain *swapchain;
    XrResult result;
};

struct xrCreateTrackableImageDatabaseAsyncANDROID_params
{
    XrSession session;
    const XrTrackableImageDatabaseCreateInfoANDROID *createInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrCreateTrackableImageDatabaseCompleteANDROID_params
{
    XrSession session;
    XrFutureEXT future;
    XrCreateTrackableImageDatabaseCompletionANDROID *completion;
    XrResult result;
};

struct xrCreateTrackableTrackerANDROID_params
{
    XrSession session;
    const XrTrackableTrackerCreateInfoANDROID *createInfo;
    XrTrackableTrackerANDROID *trackableTracker;
    XrResult result;
};

struct xrCreateTriangleMeshFB_params
{
    XrSession session;
    const XrTriangleMeshCreateInfoFB *createInfo;
    XrTriangleMeshFB *outTriangleMesh;
    XrResult result;
};

struct xrCreateVirtualKeyboardMETA_params
{
    XrSession session;
    const XrVirtualKeyboardCreateInfoMETA *createInfo;
    XrVirtualKeyboardMETA *keyboard;
    XrResult result;
};

struct xrCreateVirtualKeyboardSpaceMETA_params
{
    XrSession session;
    XrVirtualKeyboardMETA keyboard;
    const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo;
    XrSpace *keyboardSpace;
    XrResult result;
};

struct xrCreateWorldMeshDetectorML_params
{
    XrSession session;
    const XrWorldMeshDetectorCreateInfoML *createInfo;
    XrWorldMeshDetectorML *detector;
    XrResult result;
};

struct xrDeleteSpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML storage;
    const XrSpatialAnchorsDeleteInfoML *deleteInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrDeleteSpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML storage;
    XrFutureEXT future;
    XrSpatialAnchorsDeleteCompletionML *completion;
    XrResult result;
};

struct xrDeserializeSceneMSFT_params
{
    XrSceneObserverMSFT sceneObserver;
    const XrSceneDeserializeInfoMSFT *deserializeInfo;
    XrResult result;
};

struct xrDestroyAction_params
{
    XrAction action;
    XrResult result;
};

struct xrDestroyActionSet_params
{
    XrActionSet actionSet;
    XrResult result;
};

struct xrDestroyAnchorBD_params
{
    XrAnchorBD anchor;
    XrResult result;
};

struct xrDestroyBodyTrackerBD_params
{
    XrBodyTrackerBD bodyTracker;
    XrResult result;
};

struct xrDestroyBodyTrackerFB_params
{
    XrBodyTrackerFB bodyTracker;
    XrResult result;
};

struct xrDestroyBodyTrackerHTC_params
{
    XrBodyTrackerHTC bodyTracker;
    XrResult result;
};

struct xrDestroyDeviceAnchorPersistenceANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    XrResult result;
};

struct xrDestroyEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    XrResult result;
};

struct xrDestroyEnvironmentDepthSwapchainMETA_params
{
    XrEnvironmentDepthSwapchainMETA swapchain;
    XrResult result;
};

struct xrDestroyEnvironmentRaycasterMETA_params
{
    XrEnvironmentRaycasterMETA environmentRaycaster;
    XrResult result;
};

struct xrDestroyExportedLocalizationMapML_params
{
    XrExportedLocalizationMapML map;
    XrResult result;
};

struct xrDestroyEyeTrackerFB_params
{
    XrEyeTrackerFB eyeTracker;
    XrResult result;
};

struct xrDestroyFaceTracker2FB_params
{
    XrFaceTracker2FB faceTracker;
    XrResult result;
};

struct xrDestroyFaceTrackerANDROID_params
{
    XrFaceTrackerANDROID faceTracker;
    XrResult result;
};

struct xrDestroyFaceTrackerBD_params
{
    XrFaceTrackerBD tracker;
    XrResult result;
};

struct xrDestroyFaceTrackerFB_params
{
    XrFaceTrackerFB faceTracker;
    XrResult result;
};

struct xrDestroyFacialExpressionClientML_params
{
    XrFacialExpressionClientML facialExpressionClient;
    XrResult result;
};

struct xrDestroyFacialTrackerHTC_params
{
    XrFacialTrackerHTC facialTracker;
    XrResult result;
};

struct xrDestroyFoveationProfileFB_params
{
    XrFoveationProfileFB profile;
    XrResult result;
};

struct xrDestroyGeometryInstanceFB_params
{
    XrGeometryInstanceFB instance;
    XrResult result;
};

struct xrDestroyHandTrackerEXT_params
{
    XrHandTrackerEXT handTracker;
    XrResult result;
};

struct xrDestroyInstance_params
{
    XrInstance instance;
    XrResult result;
};

struct xrDestroyMarkerDetectorML_params
{
    XrMarkerDetectorML markerDetector;
    XrResult result;
};

struct xrDestroyPassthroughColorLutMETA_params
{
    XrPassthroughColorLutMETA colorLut;
    XrResult result;
};

struct xrDestroyPassthroughFB_params
{
    XrPassthroughFB passthrough;
    XrResult result;
};

struct xrDestroyPassthroughHTC_params
{
    XrPassthroughHTC passthrough;
    XrResult result;
};

struct xrDestroyPassthroughLayerANDROID_params
{
    XrPassthroughLayerANDROID layer;
    XrResult result;
};

struct xrDestroyPassthroughLayerFB_params
{
    XrPassthroughLayerFB layer;
    XrResult result;
};

struct xrDestroyPlaneDetectorEXT_params
{
    XrPlaneDetectorEXT planeDetector;
    XrResult result;
};

struct xrDestroyRenderModelAssetEXT_params
{
    XrRenderModelAssetEXT asset;
    XrResult result;
};

struct xrDestroyRenderModelEXT_params
{
    XrRenderModelEXT renderModel;
    XrResult result;
};

struct xrDestroySceneMSFT_params
{
    XrSceneMSFT scene;
    XrResult result;
};

struct xrDestroySceneMeshSnapshotANDROID_params
{
    XrSceneMeshSnapshotANDROID snapshot;
    XrResult result;
};

struct xrDestroySceneMeshingTrackerANDROID_params
{
    XrSceneMeshingTrackerANDROID tracker;
    XrResult result;
};

struct xrDestroySceneObserverMSFT_params
{
    XrSceneObserverMSFT sceneObserver;
    XrResult result;
};

struct xrDestroySenseDataProviderBD_params
{
    XrSenseDataProviderBD provider;
    XrResult result;
};

struct xrDestroySenseDataSnapshotBD_params
{
    XrSenseDataSnapshotBD snapshot;
    XrResult result;
};

struct xrDestroySession_params
{
    XrSession session;
    XrResult result;
};

struct xrDestroySoundFieldBD_params
{
    XrSoundFieldBD soundField;
    XrResult result;
};

struct xrDestroySoundObjectBD_params
{
    XrSoundObjectBD soundObject;
    XrResult result;
};

struct xrDestroySoundObstacleBD_params
{
    XrSoundObstacleBD soundObstacle;
    XrResult result;
};

struct xrDestroySoundObstacleMaterialBD_params
{
    XrSoundObstacleMaterialBD material;
    XrResult result;
};

struct xrDestroySpace_params
{
    XrSpace space;
    XrResult result;
};

struct xrDestroySpaceUserFB_params
{
    XrSpaceUserFB user;
    XrResult result;
};

struct xrDestroySpatialAnchorMSFT_params
{
    XrSpatialAnchorMSFT anchor;
    XrResult result;
};

struct xrDestroySpatialAnchorStoreConnectionMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    XrResult result;
};

struct xrDestroySpatialAnchorsStorageML_params
{
    XrSpatialAnchorsStorageML storage;
    XrResult result;
};

struct xrDestroySpatialAudioRendererBD_params
{
    XrSpatialAudioRendererBD renderer;
    XrResult result;
};

struct xrDestroySpatialContextEXT_params
{
    XrSpatialContextEXT spatialContext;
    XrResult result;
};

struct xrDestroySpatialEntityEXT_params
{
    XrSpatialEntityEXT spatialEntity;
    XrResult result;
};

struct xrDestroySpatialGraphNodeBindingMSFT_params
{
    XrSpatialGraphNodeBindingMSFT nodeBinding;
    XrResult result;
};

struct xrDestroySpatialPersistenceContextEXT_params
{
    XrSpatialPersistenceContextEXT persistenceContext;
    XrResult result;
};

struct xrDestroySpatialSnapshotEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    XrResult result;
};

struct xrDestroySwapchain_params
{
    XrSwapchain swapchain;
    XrResult result;
};

struct xrDestroyTrackableImageDatabaseANDROID_params
{
    XrTrackableImageDatabaseANDROID database;
    XrResult result;
};

struct xrDestroyTrackableTrackerANDROID_params
{
    XrTrackableTrackerANDROID trackableTracker;
    XrResult result;
};

struct xrDestroyTriangleMeshFB_params
{
    XrTriangleMeshFB mesh;
    XrResult result;
};

struct xrDestroyVirtualKeyboardMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    XrResult result;
};

struct xrDestroyWorldMeshDetectorML_params
{
    XrWorldMeshDetectorML detector;
    XrResult result;
};

struct xrDiscoverSpacesMETA_params
{
    XrSession session;
    const XrSpaceDiscoveryInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrDownloadSharedSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSharedSpatialAnchorDownloadInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrDownloadSharedSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrEnableLocalizationEventsML_params
{
    XrSession session;
    const XrLocalizationEnableEventsInfoML *info;
    XrResult result;
};

struct xrEnableUserCalibrationEventsML_params
{
    XrInstance instance;
    const XrUserCalibrationEnableEventsInfoML *enableInfo;
    XrResult result;
};

struct xrEndAudioPeriodBD_params
{
    XrSpatialAudioRendererBD renderer;
    XrResult result;
};

struct xrEndFrame_params
{
    XrSession session;
    const XrFrameEndInfo *frameEndInfo;
    XrResult result;
};

struct xrEndSession_params
{
    XrSession session;
    XrResult result;
};

struct xrEnumerateApiLayerProperties_params
{
    uint32_t propertyCapacityInput;
    uint32_t *propertyCountOutput;
    XrApiLayerProperties *properties;
    XrResult result;
};

struct xrEnumerateBoundSourcesForAction_params
{
    XrSession session;
    const XrBoundSourcesForActionEnumerateInfo *enumerateInfo;
    uint32_t sourceCapacityInput;
    uint32_t *sourceCountOutput;
    XrPath *sources;
    XrResult result;
};

struct xrEnumerateColorSpacesFB_params
{
    XrSession session;
    uint32_t colorSpaceCapacityInput;
    uint32_t *colorSpaceCountOutput;
    XrColorSpaceFB *colorSpaces;
    XrResult result;
};

struct xrEnumerateDisplayRefreshRatesFB_params
{
    XrSession session;
    uint32_t displayRefreshRateCapacityInput;
    uint32_t *displayRefreshRateCountOutput;
    float *displayRefreshRates;
    XrResult result;
};

struct xrEnumerateEnvironmentBlendModes_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t environmentBlendModeCapacityInput;
    uint32_t *environmentBlendModeCountOutput;
    XrEnvironmentBlendMode *environmentBlendModes;
    XrResult result;
};

struct xrEnumerateEnvironmentDepthSwapchainImagesMETA_params
{
    XrEnvironmentDepthSwapchainMETA swapchain;
    uint32_t imageCapacityInput;
    uint32_t *imageCountOutput;
    XrSwapchainImageBaseHeader *images;
    XrResult result;
};

struct xrEnumerateExternalCamerasOCULUS_params
{
    XrSession session;
    uint32_t cameraCapacityInput;
    uint32_t *cameraCountOutput;
    XrExternalCameraOCULUS *cameras;
    XrResult result;
};

struct xrEnumerateFacialSimulationModesBD_params
{
    XrSession session;
    uint32_t modeCapacityInput;
    uint32_t *modeCountOutput;
    XrFacialSimulationModeBD *modes;
    XrResult result;
};

struct xrEnumerateInstanceExtensionProperties_params
{
    const char *layerName;
    uint32_t propertyCapacityInput;
    uint32_t *propertyCountOutput;
    XrExtensionProperties *properties;
    XrResult result;
};

struct xrEnumerateInteractionRenderModelIdsEXT_params
{
    XrSession session;
    const XrInteractionRenderModelIdsEnumerateInfoEXT *getInfo;
    uint32_t renderModelIdCapacityInput;
    uint32_t *renderModelIdCountOutput;
    XrRenderModelIdEXT *renderModelIds;
    XrResult result;
};

struct xrEnumeratePerformanceMetricsCounterPathsANDROID_params
{
    XrInstance instance;
    uint32_t counterPathCapacityInput;
    uint32_t *counterPathCountOutput;
    XrPath *counterPaths;
    XrResult result;
};

struct xrEnumeratePerformanceMetricsCounterPathsMETA_params
{
    XrInstance instance;
    uint32_t counterPathCapacityInput;
    uint32_t *counterPathCountOutput;
    XrPath *counterPaths;
    XrResult result;
};

struct xrEnumeratePersistedAnchorsANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    uint32_t anchorIdCapacityInput;
    uint32_t *anchorIdCountOutput;
    XrUuidEXT *anchorIds;
    XrResult result;
};

struct xrEnumeratePersistedSpatialAnchorNamesMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    uint32_t spatialAnchorNameCapacityInput;
    uint32_t *spatialAnchorNameCountOutput;
    XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames;
    XrResult result;
};

struct xrEnumerateRaycastSupportedTrackableTypesANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateReferenceSpaces_params
{
    XrSession session;
    uint32_t spaceCapacityInput;
    uint32_t *spaceCountOutput;
    XrReferenceSpaceType *spaces;
    XrResult result;
};

struct xrEnumerateRenderModelPathsFB_params
{
    XrSession session;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrRenderModelPathInfoFB *paths;
    XrResult result;
};

struct xrEnumerateRenderModelSubactionPathsEXT_params
{
    XrRenderModelEXT renderModel;
    const XrInteractionRenderModelSubactionPathInfoEXT *info;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrPath *paths;
    XrResult result;
};

struct xrEnumerateReprojectionModesMSFT_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t modeCapacityInput;
    uint32_t *modeCountOutput;
    XrReprojectionModeMSFT *modes;
    XrResult result;
};

struct xrEnumerateSceneComputeFeaturesMSFT_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t featureCapacityInput;
    uint32_t *featureCountOutput;
    XrSceneComputeFeatureMSFT *features;
    XrResult result;
};

struct xrEnumerateSpaceSupportedComponentsFB_params
{
    XrSpace space;
    uint32_t componentTypeCapacityInput;
    uint32_t *componentTypeCountOutput;
    XrSpaceComponentTypeFB *componentTypes;
    XrResult result;
};

struct xrEnumerateSpatialAnchorAttachableComponentsANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t attachableComponentCapacityInput;
    uint32_t *attachableComponentCountOutput;
    XrSpatialComponentTypeEXT *attachableComponents;
    XrResult result;
};

struct xrEnumerateSpatialCapabilitiesEXT_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t capabilityCapacityInput;
    uint32_t *capabilityCountOutput;
    XrSpatialCapabilityEXT *capabilities;
    XrResult result;
};

struct xrEnumerateSpatialCapabilityComponentTypesEXT_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrSpatialCapabilityEXT capability;
    XrSpatialCapabilityComponentTypesEXT *capabilityComponents;
    XrResult result;
};

struct xrEnumerateSpatialCapabilityFeaturesEXT_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrSpatialCapabilityEXT capability;
    uint32_t capabilityFeatureCapacityInput;
    uint32_t *capabilityFeatureCountOutput;
    XrSpatialCapabilityFeatureEXT *capabilityFeatures;
    XrResult result;
};

struct xrEnumerateSpatialEntityComponentTypesBD_params
{
    XrSenseDataSnapshotBD snapshot;
    XrSpatialEntityIdBD entityId;
    uint32_t componentTypeCapacityInput;
    uint32_t *componentTypeCountOutput;
    XrSpatialEntityComponentTypeBD *componentTypes;
    XrResult result;
};

struct xrEnumerateSpatialPersistenceScopesEXT_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t persistenceScopeCapacityInput;
    uint32_t *persistenceScopeCountOutput;
    XrSpatialPersistenceScopeEXT *persistenceScopes;
    XrResult result;
};

struct xrEnumerateSupportedAnchorTrackableTypesANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSupportedAudioSampleRateBD_params
{
    XrSession session;
    uint32_t sampleRateCapacityInput;
    uint32_t *sampleRateCountOutput;
    XrAudioSampleRateBD *sampleRates;
    XrResult result;
};

struct xrEnumerateSupportedPersistenceAnchorTypesANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSupportedSemanticLabelSetsANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t supportedSemanticLabelSetsInputCapacity;
    uint32_t *supportedSemanticLabelSetsOutputCount;
    XrSceneMeshSemanticLabelSetANDROID *supportedSemanticLabelSets;
    XrResult result;
};

struct xrEnumerateSupportedTrackableTypesANDROID_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t trackableTypeCapacityInput;
    uint32_t *trackableTypeCountOutput;
    XrTrackableTypeANDROID *trackableTypes;
    XrResult result;
};

struct xrEnumerateSwapchainFormats_params
{
    XrSession session;
    uint32_t formatCapacityInput;
    uint32_t *formatCountOutput;
    int64_t *formats;
    XrResult result;
};

struct xrEnumerateSwapchainImages_params
{
    XrSwapchain swapchain;
    uint32_t imageCapacityInput;
    uint32_t *imageCountOutput;
    XrSwapchainImageBaseHeader *images;
    XrResult result;
};

struct xrEnumerateViewConfigurationViews_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewCapacityInput;
    uint32_t *viewCountOutput;
    XrViewConfigurationView *views;
    XrResult result;
};

struct xrEnumerateViewConfigurations_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t viewConfigurationTypeCapacityInput;
    uint32_t *viewConfigurationTypeCountOutput;
    XrViewConfigurationType *viewConfigurationTypes;
    XrResult result;
};

struct xrEnumerateViveTrackerPathsHTCX_params
{
    XrInstance instance;
    uint32_t pathCapacityInput;
    uint32_t *pathCountOutput;
    XrViveTrackerPathsHTCX *paths;
    XrResult result;
};

struct xrEraseSpaceFB_params
{
    XrSession session;
    const XrSpaceEraseInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrEraseSpacesMETA_params
{
    XrSession session;
    const XrSpacesEraseInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrFreeWorldMeshBufferML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshBufferML *buffer;
    XrResult result;
};

struct xrGeometryInstanceSetTransformFB_params
{
    XrGeometryInstanceFB instance;
    const XrGeometryInstanceTransformFB *transformation;
    XrResult result;
};

struct xrGetActionStateBoolean_params
{
    XrSession session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateBoolean *state;
    XrResult result;
};

struct xrGetActionStateFloat_params
{
    XrSession session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateFloat *state;
    XrResult result;
};

struct xrGetActionStatePose_params
{
    XrSession session;
    const XrActionStateGetInfo *getInfo;
    XrActionStatePose *state;
    XrResult result;
};

struct xrGetActionStateVector2f_params
{
    XrSession session;
    const XrActionStateGetInfo *getInfo;
    XrActionStateVector2f *state;
    XrResult result;
};

struct xrGetAllSubmeshStatesANDROID_params
{
    XrSceneMeshSnapshotANDROID snapshot;
    uint32_t submeshStateCapacityInput;
    uint32_t *submeshStateCountOutput;
    XrSceneSubmeshStateANDROID *submeshStates;
    XrResult result;
};

struct xrGetAllTrackablesANDROID_params
{
    XrTrackableTrackerANDROID trackableTracker;
    uint32_t trackableCapacityInput;
    uint32_t *trackableCountOutput;
    XrTrackableANDROID *trackables;
    XrResult result;
};

struct xrGetAnchorPersistStateANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    const XrUuidEXT *anchorId;
    XrAnchorPersistStateANDROID *persistState;
    XrResult result;
};

struct xrGetAnchorUuidBD_params
{
    XrAnchorBD anchor;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetAudioInputDeviceGuidOculus_params
{
    XrInstance instance;
    wchar_t *buffer;
    XrResult result;
};

struct xrGetAudioOutputDeviceGuidOculus_params
{
    XrInstance instance;
    wchar_t *buffer;
    XrResult result;
};

struct xrGetBodySkeletonFB_params
{
    XrBodyTrackerFB bodyTracker;
    XrBodySkeletonFB *skeleton;
    XrResult result;
};

struct xrGetBodySkeletonHTC_params
{
    XrBodyTrackerHTC bodyTracker;
    XrSpace baseSpace;
    uint32_t skeletonGenerationId;
    XrBodySkeletonHTC *skeleton;
    XrResult result;
};

struct xrGetControllerModelKeyMSFT_params
{
    XrSession session;
    XrPath topLevelUserPath;
    XrControllerModelKeyStateMSFT *controllerModelKeyState;
    XrResult result;
};

struct xrGetControllerModelPropertiesMSFT_params
{
    XrSession session;
    XrControllerModelKeyMSFT modelKey;
    XrControllerModelPropertiesMSFT *properties;
    XrResult result;
};

struct xrGetControllerModelStateMSFT_params
{
    XrSession session;
    XrControllerModelKeyMSFT modelKey;
    XrControllerModelStateMSFT *state;
    XrResult result;
};

struct xrGetCurrentInteractionProfile_params
{
    XrSession session;
    XrPath topLevelUserPath;
    XrInteractionProfileState *interactionProfile;
    XrResult result;
};

struct xrGetDeviceSampleRateFB_params
{
    XrSession session;
    const XrHapticActionInfo *hapticActionInfo;
    XrDevicePcmSampleRateGetInfoFB *deviceSampleRate;
    XrResult result;
};

struct xrGetDisplayRefreshRateFB_params
{
    XrSession session;
    float *displayRefreshRate;
    XrResult result;
};

struct xrGetEnvironmentDepthSwapchainStateMETA_params
{
    XrEnvironmentDepthSwapchainMETA swapchain;
    XrEnvironmentDepthSwapchainStateMETA *state;
    XrResult result;
};

struct xrGetExportedLocalizationMapDataML_params
{
    XrExportedLocalizationMapML map;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetEyeGazesFB_params
{
    XrEyeTrackerFB eyeTracker;
    const XrEyeGazesInfoFB *gazeInfo;
    XrEyeGazesFB *eyeGazes;
    XrResult result;
};

struct xrGetFaceCalibrationStateANDROID_params
{
    XrFaceTrackerANDROID faceTracker;
    XrBool32 *faceIsCalibratedOutput;
    XrResult result;
};

struct xrGetFaceExpressionWeights2FB_params
{
    XrFaceTracker2FB faceTracker;
    const XrFaceExpressionInfo2FB *expressionInfo;
    XrFaceExpressionWeights2FB *expressionWeights;
    XrResult result;
};

struct xrGetFaceExpressionWeightsFB_params
{
    XrFaceTrackerFB faceTracker;
    const XrFaceExpressionInfoFB *expressionInfo;
    XrFaceExpressionWeightsFB *expressionWeights;
    XrResult result;
};

struct xrGetFaceStateANDROID_params
{
    XrFaceTrackerANDROID faceTracker;
    const XrFaceStateGetInfoANDROID *getInfo;
    XrFaceStateANDROID *faceStateOutput;
    XrResult result;
};

struct xrGetFacialExpressionBlendShapePropertiesML_params
{
    XrFacialExpressionClientML facialExpressionClient;
    const XrFacialExpressionBlendShapeGetInfoML *blendShapeGetInfo;
    uint32_t blendShapeCount;
    XrFacialExpressionBlendShapePropertiesML *blendShapes;
    XrResult result;
};

struct xrGetFacialExpressionsHTC_params
{
    XrFacialTrackerHTC facialTracker;
    XrFacialExpressionsHTC *facialExpressions;
    XrResult result;
};

struct xrGetFacialSimulationDataBD_params
{
    XrFaceTrackerBD tracker;
    const XrFacialSimulationDataGetInfoBD *info;
    XrFacialSimulationDataBD *facialData;
    XrResult result;
};

struct xrGetFacialSimulationModeBD_params
{
    XrFaceTrackerBD tracker;
    XrFacialSimulationModeBD *mode;
    XrResult result;
};

struct xrGetFoveationEyeTrackedStateMETA_params
{
    XrSession session;
    XrFoveationEyeTrackedStateMETA *foveationState;
    XrResult result;
};

struct xrGetHandGestureQCOM_params
{
    XrHandTrackerEXT handTracker;
    XrTime time;
    XrHandGestureQCOM *handGesture;
    XrResult result;
};

struct xrGetHandMeshFB_params
{
    XrHandTrackerEXT handTracker;
    XrHandTrackingMeshFB *mesh;
    XrResult result;
};

struct xrGetInputSourceLocalizedName_params
{
    XrSession session;
    const XrInputSourceLocalizedNameGetInfo *getInfo;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetInstanceProperties_params
{
    XrInstance instance;
    XrInstanceProperties *instanceProperties;
    XrResult result;
};

struct xrGetMarkerDetectorStateML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerDetectorStateML *state;
    XrResult result;
};

struct xrGetMarkerLengthML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerML marker;
    float *meters;
    XrResult result;
};

struct xrGetMarkerNumberML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerML marker;
    uint64_t *number;
    XrResult result;
};

struct xrGetMarkerReprojectionErrorML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerML marker;
    float *reprojectionErrorMeters;
    XrResult result;
};

struct xrGetMarkerSizeVARJO_params
{
    XrSession session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrExtent2Df *size;
    XrResult result;
};

struct xrGetMarkerStringML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerML marker;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetMarkersML_params
{
    XrMarkerDetectorML markerDetector;
    uint32_t markerCapacityInput;
    uint32_t *markerCountOutput;
    XrMarkerML *markers;
    XrResult result;
};

struct xrGetOpenGLGraphicsRequirementsKHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrGraphicsRequirementsOpenGLKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetPassthroughCameraStateANDROID_params
{
    XrSession session;
    const XrPassthroughCameraStateGetInfoANDROID *getInfo;
    XrPassthroughCameraStateANDROID *cameraStateOutput;
    XrResult result;
};

struct xrGetPassthroughPreferencesMETA_params
{
    XrSession session;
    XrPassthroughPreferencesMETA *preferences;
    XrResult result;
};

struct xrGetPerformanceMetricsStateANDROID_params
{
    XrSession session;
    XrPerformanceMetricsStateANDROID *state;
    XrResult result;
};

struct xrGetPerformanceMetricsStateMETA_params
{
    XrSession session;
    XrPerformanceMetricsStateMETA *state;
    XrResult result;
};

struct xrGetPlaneDetectionStateEXT_params
{
    XrPlaneDetectorEXT planeDetector;
    XrPlaneDetectionStateEXT *state;
    XrResult result;
};

struct xrGetPlaneDetectionsEXT_params
{
    XrPlaneDetectorEXT planeDetector;
    const XrPlaneDetectorGetInfoEXT *info;
    XrPlaneDetectorLocationsEXT *locations;
    XrResult result;
};

struct xrGetPlanePolygonBufferEXT_params
{
    XrPlaneDetectorEXT planeDetector;
    uint64_t DECLSPEC_ALIGN(8) planeId;
    uint32_t polygonBufferIndex;
    XrPlaneDetectorPolygonBufferEXT *polygonBuffer;
    XrResult result;
};

struct xrGetQueriedSenseDataBD_params
{
    XrSenseDataSnapshotBD snapshot;
    XrQueriedSenseDataGetInfoBD *getInfo;
    XrQueriedSenseDataBD *queriedSenseData;
    XrResult result;
};

struct xrGetRecommendedLayerResolutionMETA_params
{
    XrSession session;
    const XrRecommendedLayerResolutionGetInfoMETA *info;
    XrRecommendedLayerResolutionMETA *resolution;
    XrResult result;
};

struct xrGetReferenceSpaceBoundsRect_params
{
    XrSession session;
    XrReferenceSpaceType referenceSpaceType;
    XrExtent2Df *bounds;
    XrResult result;
};

struct xrGetRenderModelAssetDataEXT_params
{
    XrRenderModelAssetEXT asset;
    const XrRenderModelAssetDataGetInfoEXT *getInfo;
    XrRenderModelAssetDataEXT *buffer;
    XrResult result;
};

struct xrGetRenderModelAssetPropertiesEXT_params
{
    XrRenderModelAssetEXT asset;
    const XrRenderModelAssetPropertiesGetInfoEXT *getInfo;
    XrRenderModelAssetPropertiesEXT *properties;
    XrResult result;
};

struct xrGetRenderModelPoseTopLevelUserPathEXT_params
{
    XrRenderModelEXT renderModel;
    const XrInteractionRenderModelTopLevelUserPathGetInfoEXT *info;
    XrPath *topLevelUserPath;
    XrResult result;
};

struct xrGetRenderModelPropertiesEXT_params
{
    XrRenderModelEXT renderModel;
    const XrRenderModelPropertiesGetInfoEXT *getInfo;
    XrRenderModelPropertiesEXT *properties;
    XrResult result;
};

struct xrGetRenderModelPropertiesFB_params
{
    XrSession session;
    XrPath path;
    XrRenderModelPropertiesFB *properties;
    XrResult result;
};

struct xrGetRenderModelStateEXT_params
{
    XrRenderModelEXT renderModel;
    const XrRenderModelStateGetInfoEXT *getInfo;
    XrRenderModelStateEXT *state;
    XrResult result;
};

struct xrGetSceneComponentsMSFT_params
{
    XrSceneMSFT scene;
    const XrSceneComponentsGetInfoMSFT *getInfo;
    XrSceneComponentsMSFT *components;
    XrResult result;
};

struct xrGetSceneComputeStateMSFT_params
{
    XrSceneObserverMSFT sceneObserver;
    XrSceneComputeStateMSFT *state;
    XrResult result;
};

struct xrGetSceneMarkerDecodedStringMSFT_params
{
    XrSceneMSFT scene;
    const XrUuidMSFT *markerId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetSceneMarkerRawDataMSFT_params
{
    XrSceneMSFT scene;
    const XrUuidMSFT *markerId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSceneMeshBuffersMSFT_params
{
    XrSceneMSFT scene;
    const XrSceneMeshBuffersGetInfoMSFT *getInfo;
    XrSceneMeshBuffersMSFT *buffers;
    XrResult result;
};

struct xrGetSenseDataProviderStateBD_params
{
    XrSenseDataProviderBD provider;
    XrSenseDataProviderStateBD *state;
    XrResult result;
};

struct xrGetSerializedSceneFragmentDataMSFT_params
{
    XrSceneMSFT scene;
    const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo;
    uint32_t countInput;
    uint32_t *readOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSpaceBoundary2DFB_params
{
    XrSession session;
    XrSpace space;
    XrBoundary2DFB *boundary2DOutput;
    XrResult result;
};

struct xrGetSpaceBoundingBox2DFB_params
{
    XrSession session;
    XrSpace space;
    XrRect2Df *boundingBox2DOutput;
    XrResult result;
};

struct xrGetSpaceBoundingBox3DFB_params
{
    XrSession session;
    XrSpace space;
    XrRect3DfFB *boundingBox3DOutput;
    XrResult result;
};

struct xrGetSpaceComponentStatusFB_params
{
    XrSpace space;
    XrSpaceComponentTypeFB componentType;
    XrSpaceComponentStatusFB *status;
    XrResult result;
};

struct xrGetSpaceContainerFB_params
{
    XrSession session;
    XrSpace space;
    XrSpaceContainerFB *spaceContainerOutput;
    XrResult result;
};

struct xrGetSpaceRoomLayoutFB_params
{
    XrSession session;
    XrSpace space;
    XrRoomLayoutFB *roomLayoutOutput;
    XrResult result;
};

struct xrGetSpaceSemanticLabelsFB_params
{
    XrSession session;
    XrSpace space;
    XrSemanticLabelsFB *semanticLabelsOutput;
    XrResult result;
};

struct xrGetSpaceTriangleMeshMETA_params
{
    XrSpace space;
    const XrSpaceTriangleMeshGetInfoMETA *getInfo;
    XrSpaceTriangleMeshMETA *triangleMeshOutput;
    XrResult result;
};

struct xrGetSpaceUserIdFB_params
{
    XrSpaceUserFB user;
    XrSpaceUserIdFB *userId;
    XrResult result;
};

struct xrGetSpaceUuidFB_params
{
    XrSpace space;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetSpatialAnchorNameHTC_params
{
    XrSpace anchor;
    XrSpatialAnchorNameHTC *name;
    XrResult result;
};

struct xrGetSpatialAnchorStateML_params
{
    XrSpace anchor;
    XrSpatialAnchorStateML *state;
    XrResult result;
};

struct xrGetSpatialBufferFloatEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    float *buffer;
    XrResult result;
};

struct xrGetSpatialBufferStringEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint16EXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint16_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint32EXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint32_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferUint8EXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrGetSpatialBufferVector2fEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    XrVector2f *buffer;
    XrResult result;
};

struct xrGetSpatialBufferVector3fEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialBufferGetInfoEXT *info;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    XrVector3f *buffer;
    XrResult result;
};

struct xrGetSpatialEntityComponentDataBD_params
{
    XrSenseDataSnapshotBD snapshot;
    const XrSpatialEntityComponentGetInfoBD *getInfo;
    XrSpatialEntityComponentDataBaseHeaderBD *componentData;
    XrResult result;
};

struct xrGetSpatialEntityUuidBD_params
{
    XrSenseDataSnapshotBD snapshot;
    XrSpatialEntityIdBD entityId;
    XrUuidEXT *uuid;
    XrResult result;
};

struct xrGetSpatialGraphNodeBindingPropertiesMSFT_params
{
    XrSpatialGraphNodeBindingMSFT nodeBinding;
    const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo;
    XrSpatialGraphNodeBindingPropertiesMSFT *properties;
    XrResult result;
};

struct xrGetSubmeshDataANDROID_params
{
    XrSceneMeshSnapshotANDROID snapshot;
    uint32_t submeshDataCount;
    XrSceneSubmeshDataANDROID *inoutSubmeshData;
    XrResult result;
};

struct xrGetSwapchainStateFB_params
{
    XrSwapchain swapchain;
    XrSwapchainStateBaseHeaderFB *state;
    XrResult result;
};

struct xrGetSystem_params
{
    XrInstance instance;
    const XrSystemGetInfo *getInfo;
    XrSystemId *systemId;
    XrResult result;
};

struct xrGetSystemProperties_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrSystemProperties *properties;
    XrResult result;
};

struct xrGetTrackableImageANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableImageANDROID *trackable;
    XrResult result;
};

struct xrGetTrackableMarkerANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableMarkerANDROID *markerOutput;
    XrResult result;
};

struct xrGetTrackableObjectANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableObjectANDROID *objectOutput;
    XrResult result;
};

struct xrGetTrackablePlaneANDROID_params
{
    XrTrackableTrackerANDROID trackableTracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackablePlaneANDROID *planeOutput;
    XrResult result;
};

struct xrGetTrackableQrCodeANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    const XrTrackableGetInfoANDROID *getInfo;
    XrTrackableQrCodeANDROID *qrCodeOutput;
    XrResult result;
};

struct xrGetViewConfigurationProperties_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrViewConfigurationType viewConfigurationType;
    XrViewConfigurationProperties *configurationProperties;
    XrResult result;
};

struct xrGetVirtualKeyboardDirtyTexturesMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    uint32_t textureIdCapacityInput;
    uint32_t *textureIdCountOutput;
    uint64_t *textureIds;
    XrResult result;
};

struct xrGetVirtualKeyboardModelAnimationStatesMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    XrVirtualKeyboardModelAnimationStatesMETA *animationStates;
    XrResult result;
};

struct xrGetVirtualKeyboardScaleMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    float *scale;
    XrResult result;
};

struct xrGetVirtualKeyboardTextureDataMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    uint64_t DECLSPEC_ALIGN(8) textureId;
    XrVirtualKeyboardTextureDataMETA *textureData;
    XrResult result;
};

struct xrGetVisibilityMaskKHR_params
{
    XrSession session;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewIndex;
    XrVisibilityMaskTypeKHR visibilityMaskType;
    XrVisibilityMaskKHR *visibilityMask;
    XrResult result;
};

struct xrGetVulkanDeviceExtensionsKHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetVulkanGraphicsDevice2KHR_params
{
    XrInstance instance;
    const XrVulkanGraphicsDeviceGetInfoKHR *getInfo;
    VkPhysicalDevice *vulkanPhysicalDevice;
    XrResult result;
};

struct xrGetVulkanGraphicsDeviceKHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    VkInstance vkInstance;
    VkPhysicalDevice *vkPhysicalDevice;
    XrResult result;
};

struct xrGetVulkanGraphicsRequirements2KHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrGraphicsRequirementsVulkanKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetVulkanGraphicsRequirementsKHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    XrGraphicsRequirementsVulkanKHR *graphicsRequirements;
    XrResult result;
};

struct xrGetVulkanInstanceExtensionsKHR_params
{
    XrInstance instance;
    XrSystemId systemId;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrGetWorldMeshBufferRecommendSizeML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshBufferRecommendedSizeInfoML *sizeInfo;
    XrWorldMeshBufferSizeML *size;
    XrResult result;
};

struct xrImportLocalizationMapML_params
{
    XrSession session;
    const XrLocalizationMapImportInfoML *importInfo;
    XrUuidEXT *mapUuid;
    XrResult result;
};

struct xrLoadControllerModelMSFT_params
{
    XrSession session;
    XrControllerModelKeyMSFT modelKey;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    uint8_t *buffer;
    XrResult result;
};

struct xrLoadRenderModelFB_params
{
    XrSession session;
    const XrRenderModelLoadInfoFB *info;
    XrRenderModelBufferFB *buffer;
    XrResult result;
};

struct xrLocateBodyJointsBD_params
{
    XrBodyTrackerBD bodyTracker;
    const XrBodyJointsLocateInfoBD *locateInfo;
    XrBodyJointLocationsBD *locations;
    XrResult result;
};

struct xrLocateBodyJointsFB_params
{
    XrBodyTrackerFB bodyTracker;
    const XrBodyJointsLocateInfoFB *locateInfo;
    XrBodyJointLocationsFB *locations;
    XrResult result;
};

struct xrLocateBodyJointsHTC_params
{
    XrBodyTrackerHTC bodyTracker;
    const XrBodyJointsLocateInfoHTC *locateInfo;
    XrBodyJointLocationsHTC *locations;
    XrResult result;
};

struct xrLocateHandJointsEXT_params
{
    XrHandTrackerEXT handTracker;
    const XrHandJointsLocateInfoEXT *locateInfo;
    XrHandJointLocationsEXT *locations;
    XrResult result;
};

struct xrLocateSceneComponentsMSFT_params
{
    XrSceneMSFT scene;
    const XrSceneComponentsLocateInfoMSFT *locateInfo;
    XrSceneComponentLocationsMSFT *locations;
    XrResult result;
};

struct xrLocateSpace_params
{
    XrSpace space;
    XrSpace baseSpace;
    XrTime time;
    XrSpaceLocation *location;
    XrResult result;
};

struct xrLocateSpaces_params
{
    XrSession session;
    const XrSpacesLocateInfo *locateInfo;
    XrSpaceLocations *spaceLocations;
    XrResult result;
};

struct xrLocateSpacesKHR_params
{
    XrSession session;
    const XrSpacesLocateInfo *locateInfo;
    XrSpaceLocations *spaceLocations;
    XrResult result;
};

struct xrLocateViews_params
{
    XrSession session;
    const XrViewLocateInfo *viewLocateInfo;
    XrViewState *viewState;
    uint32_t viewCapacityInput;
    uint32_t *viewCountOutput;
    XrView *views;
    XrResult result;
};

struct xrPassthroughLayerPauseFB_params
{
    XrPassthroughLayerFB layer;
    XrResult result;
};

struct xrPassthroughLayerResumeFB_params
{
    XrPassthroughLayerFB layer;
    XrResult result;
};

struct xrPassthroughLayerSetKeyboardHandsIntensityFB_params
{
    XrPassthroughLayerFB layer;
    const XrPassthroughKeyboardHandsIntensityFB *intensity;
    XrResult result;
};

struct xrPassthroughLayerSetStyleFB_params
{
    XrPassthroughLayerFB layer;
    const XrPassthroughStyleFB *style;
    XrResult result;
};

struct xrPassthroughPauseFB_params
{
    XrPassthroughFB passthrough;
    XrResult result;
};

struct xrPassthroughStartFB_params
{
    XrPassthroughFB passthrough;
    XrResult result;
};

struct xrPathToString_params
{
    XrInstance instance;
    XrPath path;
    uint32_t bufferCapacityInput;
    uint32_t *bufferCountOutput;
    char *buffer;
    XrResult result;
};

struct xrPauseSimultaneousHandsAndControllersTrackingMETA_params
{
    XrSession session;
    const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA *pauseInfo;
    XrResult result;
};

struct xrPerfSettingsSetPerformanceLevelEXT_params
{
    XrSession session;
    XrPerfSettingsDomainEXT domain;
    XrPerfSettingsLevelEXT level;
    XrResult result;
};

struct xrPerformEnvironmentRaycastMETA_params
{
    XrEnvironmentRaycasterMETA environmentRaycaster;
    const XrEnvironmentRaycastHitGetInfoMETA *info;
    XrEnvironmentRaycastHitMETA *hitPoint;
    XrResult result;
};

struct xrPersistAnchorANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    const XrPersistedAnchorSpaceInfoANDROID *persistedInfo;
    XrUuidEXT *anchorIdOutput;
    XrResult result;
};

struct xrPersistSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSpatialAnchorPersistInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPersistSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrPersistSpatialAnchorMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo;
    XrResult result;
};

struct xrPersistSpatialEntityAsyncEXT_params
{
    XrSpatialPersistenceContextEXT persistenceContext;
    const XrSpatialEntityPersistInfoEXT *persistInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPersistSpatialEntityCompleteEXT_params
{
    XrSpatialPersistenceContextEXT persistenceContext;
    XrFutureEXT future;
    XrPersistSpatialEntityCompletionEXT *completion;
    XrResult result;
};

struct xrPollEvent_params
{
    XrInstance instance;
    XrEventDataBuffer *eventData;
    XrResult result;
};

struct xrPollFutureEXT_params
{
    XrInstance instance;
    const XrFuturePollInfoEXT *pollInfo;
    XrFuturePollResultEXT *pollResult;
    XrResult result;
};

struct xrPublishSpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML storage;
    const XrSpatialAnchorsPublishInfoML *publishInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrPublishSpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML storage;
    XrFutureEXT future;
    XrSpatialAnchorsPublishCompletionML *completion;
    XrResult result;
};

struct xrQueryFramesPerBufferRangeBD_params
{
    XrSession session;
    XrAudioSampleRateBD sampleRate;
    uint32_t *min;
    uint32_t *max;
    XrResult result;
};

struct xrQueryLocalizationMapsML_params
{
    XrSession session;
    const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo;
    uint32_t mapCapacityInput;
    uint32_t *mapCountOutput;
    XrLocalizationMapML *maps;
    XrResult result;
};

struct xrQueryPerformanceMetricsCounterANDROID_params
{
    XrSession session;
    XrPath counterPath;
    XrPerformanceMetricsCounterANDROID *counter;
    XrResult result;
};

struct xrQueryPerformanceMetricsCounterMETA_params
{
    XrSession session;
    XrPath counterPath;
    XrPerformanceMetricsCounterMETA *counter;
    XrResult result;
};

struct xrQuerySenseDataAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSenseDataQueryInfoBD *queryInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrQuerySenseDataCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrSenseDataQueryCompletionBD *completion;
    XrResult result;
};

struct xrQuerySpacesFB_params
{
    XrSession session;
    const XrSpaceQueryInfoBaseHeaderFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrQuerySpatialAnchorsAsyncML_params
{
    XrSpatialAnchorsStorageML storage;
    const XrSpatialAnchorsQueryInfoBaseHeaderML *queryInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrQuerySpatialAnchorsCompleteML_params
{
    XrSpatialAnchorsStorageML storage;
    XrFutureEXT future;
    XrSpatialAnchorsQueryCompletionML *completion;
    XrResult result;
};

struct xrQuerySpatialComponentDataEXT_params
{
    XrSpatialSnapshotEXT snapshot;
    const XrSpatialComponentDataQueryConditionEXT *queryCondition;
    XrSpatialComponentDataQueryResultEXT *queryResult;
    XrResult result;
};

struct xrQuerySystemTrackedKeyboardFB_params
{
    XrSession session;
    const XrKeyboardTrackingQueryFB *queryInfo;
    XrKeyboardTrackingDescriptionFB *keyboard;
    XrResult result;
};

struct xrRaycastANDROID_params
{
    XrSession session;
    const XrRaycastInfoANDROID *rayInfo;
    XrRaycastHitResultsANDROID *results;
    XrResult result;
};

struct xrReleaseSwapchainImage_params
{
    XrSwapchain swapchain;
    const XrSwapchainImageReleaseInfo *releaseInfo;
    XrResult result;
};

struct xrRemoveTrackableImageDatabaseANDROID_params
{
    XrTrackableTrackerANDROID tracker;
    XrTrackableImageDatabaseANDROID database;
    XrResult result;
};

struct xrRequestBodyTrackingFidelityMETA_params
{
    XrBodyTrackerFB bodyTracker;
    XrBodyTrackingFidelityMETA fidelity;
    XrResult result;
};

struct xrRequestDisplayRefreshRateFB_params
{
    XrSession session;
    float displayRefreshRate;
    XrResult result;
};

struct xrRequestExitSession_params
{
    XrSession session;
    XrResult result;
};

struct xrRequestMapLocalizationML_params
{
    XrSession session;
    const XrMapLocalizationRequestInfoML *requestInfo;
    XrResult result;
};

struct xrRequestSceneCaptureFB_params
{
    XrSession session;
    const XrSceneCaptureRequestInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrRequestWorldMeshAsyncML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshGetInfoML *getInfo;
    XrWorldMeshBufferML *buffer;
    XrFutureEXT *future;
    XrResult result;
};

struct xrRequestWorldMeshCompleteML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshRequestCompletionInfoML *completionInfo;
    XrFutureEXT future;
    XrWorldMeshRequestCompletionML *completion;
    XrResult result;
};

struct xrRequestWorldMeshStateAsyncML_params
{
    XrWorldMeshDetectorML detector;
    const XrWorldMeshStateRequestInfoML *stateRequest;
    XrFutureEXT *future;
    XrResult result;
};

struct xrRequestWorldMeshStateCompleteML_params
{
    XrWorldMeshDetectorML detector;
    XrFutureEXT future;
    XrWorldMeshStateRequestCompletionML *completion;
    XrResult result;
};

struct xrResetBodyTrackingCalibrationMETA_params
{
    XrBodyTrackerFB bodyTracker;
    XrResult result;
};

struct xrResultToString_params
{
    XrInstance instance;
    XrResult value;
    char *buffer;
    XrResult result;
};

struct xrResumeSimultaneousHandsAndControllersTrackingMETA_params
{
    XrSession session;
    const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA *resumeInfo;
    XrResult result;
};

struct xrRetrieveSpaceDiscoveryResultsMETA_params
{
    XrSession session;
    XrAsyncRequestIdFB requestId;
    XrSpaceDiscoveryResultsMETA *results;
    XrResult result;
};

struct xrRetrieveSpaceQueryResultsFB_params
{
    XrSession session;
    XrAsyncRequestIdFB requestId;
    XrSpaceQueryResultsFB *results;
    XrResult result;
};

struct xrSaveSpaceFB_params
{
    XrSession session;
    const XrSpaceSaveInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSaveSpaceListFB_params
{
    XrSession session;
    const XrSpaceListSaveInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSaveSpacesMETA_params
{
    XrSession session;
    const XrSpacesSaveInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSendVirtualKeyboardInputMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    const XrVirtualKeyboardInputInfoMETA *info;
    XrPosef *interactorRootPose;
    XrResult result;
};

struct xrSetColorSpaceFB_params
{
    XrSession session;
    XrColorSpaceFB colorSpace;
    XrResult result;
};

struct xrSetDigitalLensControlALMALENCE_params
{
    XrSession session;
    const XrDigitalLensControlALMALENCE *digitalLensControl;
    XrResult result;
};

struct xrSetEnvironmentDepthEstimationVARJO_params
{
    XrSession session;
    XrBool32 enabled;
    XrResult result;
};

struct xrSetEnvironmentDepthHandRemovalMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    const XrEnvironmentDepthHandRemovalSetInfoMETA *setInfo;
    XrResult result;
};

struct xrSetFacialSimulationModeBD_params
{
    XrFaceTrackerBD tracker;
    XrFacialSimulationModeBD mode;
    XrResult result;
};

struct xrSetInputDeviceActiveEXT_params
{
    XrSession session;
    XrPath interactionProfile;
    XrPath topLevelPath;
    XrBool32 isActive;
    XrResult result;
};

struct xrSetInputDeviceLocationEXT_params
{
    XrSession session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrSpace space;
    XrPosef pose;
    XrResult result;
};

struct xrSetInputDeviceStateBoolEXT_params
{
    XrSession session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrBool32 state;
    XrResult result;
};

struct xrSetInputDeviceStateFloatEXT_params
{
    XrSession session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    float state;
    XrResult result;
};

struct xrSetInputDeviceStateVector2fEXT_params
{
    XrSession session;
    XrPath topLevelPath;
    XrPath inputSourcePath;
    XrVector2f state;
    XrResult result;
};

struct xrSetMarkerTrackingPredictionVARJO_params
{
    XrSession session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrBool32 enable;
    XrResult result;
};

struct xrSetMarkerTrackingTimeoutVARJO_params
{
    XrSession session;
    uint64_t DECLSPEC_ALIGN(8) markerId;
    XrDuration timeout;
    XrResult result;
};

struct xrSetMarkerTrackingVARJO_params
{
    XrSession session;
    XrBool32 enabled;
    XrResult result;
};

struct xrSetPassthroughLayerMeshANDROID_params
{
    XrPassthroughLayerANDROID layer;
    const XrPassthroughLayerMeshANDROID *mesh;
    XrResult result;
};

struct xrSetPerformanceMetricsStateANDROID_params
{
    XrSession session;
    const XrPerformanceMetricsStateANDROID *state;
    XrResult result;
};

struct xrSetPerformanceMetricsStateMETA_params
{
    XrSession session;
    const XrPerformanceMetricsStateMETA *state;
    XrResult result;
};

struct xrSetSpaceComponentStatusFB_params
{
    XrSpace space;
    const XrSpaceComponentStatusSetInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrSetSystemNotificationsML_params
{
    XrInstance instance;
    const XrSystemNotificationsSetInfoML *info;
    XrResult result;
};

struct xrSetTilePropertiesHintMETA_params
{
    XrSession session;
    const XrTilePropertiesHintMETA *properties;
    XrResult result;
};

struct xrSetTrackingOptimizationSettingsHintQCOM_params
{
    XrSession session;
    XrTrackingOptimizationSettingsDomainQCOM domain;
    XrTrackingOptimizationSettingsHintQCOM hint;
    XrResult result;
};

struct xrSetViewOffsetVARJO_params
{
    XrSession session;
    float offset;
    XrResult result;
};

struct xrSetVirtualKeyboardModelVisibilityMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility;
    XrResult result;
};

struct xrShareSpacesFB_params
{
    XrSession session;
    const XrSpaceShareInfoFB *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrShareSpacesMETA_params
{
    XrSession session;
    const XrShareSpacesInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrShareSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSpatialAnchorShareInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrShareSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrSnapshotMarkerDetectorML_params
{
    XrMarkerDetectorML markerDetector;
    XrMarkerDetectorSnapshotInfoML *snapshotInfo;
    XrResult result;
};

struct xrStartColocationAdvertisementMETA_params
{
    XrSession session;
    const XrColocationAdvertisementStartInfoMETA *info;
    XrAsyncRequestIdFB *advertisementRequestId;
    XrResult result;
};

struct xrStartColocationDiscoveryMETA_params
{
    XrSession session;
    const XrColocationDiscoveryStartInfoMETA *info;
    XrAsyncRequestIdFB *discoveryRequestId;
    XrResult result;
};

struct xrStartEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    XrResult result;
};

struct xrStartSenseDataProviderAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSenseDataProviderStartInfoBD *startInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrStartSenseDataProviderCompleteBD_params
{
    XrSession session;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrStopColocationAdvertisementMETA_params
{
    XrSession session;
    const XrColocationAdvertisementStopInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrStopColocationDiscoveryMETA_params
{
    XrSession session;
    const XrColocationDiscoveryStopInfoMETA *info;
    XrAsyncRequestIdFB *requestId;
    XrResult result;
};

struct xrStopEnvironmentDepthProviderMETA_params
{
    XrEnvironmentDepthProviderMETA environmentDepthProvider;
    XrResult result;
};

struct xrStopHapticFeedback_params
{
    XrSession session;
    const XrHapticActionInfo *hapticActionInfo;
    XrResult result;
};

struct xrStopSenseDataProviderBD_params
{
    XrSenseDataProviderBD provider;
    XrResult result;
};

struct xrStringToPath_params
{
    XrInstance instance;
    const char *pathString;
    XrPath *path;
    XrResult result;
};

struct xrStructureTypeToString_params
{
    XrInstance instance;
    XrStructureType value;
    char *buffer;
    XrResult result;
};

struct xrStructureTypeToString2KHR_params
{
    XrInstance instance;
    XrStructureType value;
    char *buffer;
    XrResult result;
};

struct xrSubmitSoundFieldBufferBD_params
{
    XrSoundFieldBD soundField;
    const XrAudioBufferBD *buffer;
    XrResult result;
};

struct xrSubmitSoundObjectBufferBD_params
{
    XrSoundObjectBD soundObject;
    const XrAudioBufferBD *buffer;
    XrResult result;
};

struct xrSuggestBodyTrackingCalibrationOverrideMETA_params
{
    XrBodyTrackerFB bodyTracker;
    const XrBodyTrackingCalibrationInfoMETA *calibrationInfo;
    XrResult result;
};

struct xrSuggestInteractionProfileBindings_params
{
    XrInstance instance;
    const XrInteractionProfileSuggestedBinding *suggestedBindings;
    XrResult result;
};

struct xrSuggestVirtualKeyboardLocationMETA_params
{
    XrVirtualKeyboardMETA keyboard;
    const XrVirtualKeyboardLocationInfoMETA *locationInfo;
    XrResult result;
};

struct xrSyncActions_params
{
    XrSession session;
    const XrActionsSyncInfo *syncInfo;
    XrResult result;
};

struct xrThermalGetTemperatureTrendEXT_params
{
    XrSession session;
    XrPerfSettingsDomainEXT domain;
    XrPerfSettingsNotificationLevelEXT *notificationLevel;
    float *tempHeadroom;
    float *tempSlope;
    XrResult result;
};

struct xrTriangleMeshBeginUpdateFB_params
{
    XrTriangleMeshFB mesh;
    XrResult result;
};

struct xrTriangleMeshBeginVertexBufferUpdateFB_params
{
    XrTriangleMeshFB mesh;
    uint32_t *outVertexCount;
    XrResult result;
};

struct xrTriangleMeshEndUpdateFB_params
{
    XrTriangleMeshFB mesh;
    uint32_t vertexCount;
    uint32_t triangleCount;
    XrResult result;
};

struct xrTriangleMeshEndVertexBufferUpdateFB_params
{
    XrTriangleMeshFB mesh;
    XrResult result;
};

struct xrTriangleMeshGetIndexBufferFB_params
{
    XrTriangleMeshFB mesh;
    uint32_t **outIndexBuffer;
    XrResult result;
};

struct xrTriangleMeshGetVertexBufferFB_params
{
    XrTriangleMeshFB mesh;
    XrVector3f **outVertexBuffer;
    XrResult result;
};

struct xrTryCreateSpatialGraphStaticNodeBindingMSFT_params
{
    XrSession session;
    const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo;
    XrSpatialGraphNodeBindingMSFT *nodeBinding;
    XrResult result;
};

struct xrUnpersistAnchorANDROID_params
{
    XrDeviceAnchorPersistenceANDROID handle;
    const XrUuidEXT *anchorId;
    XrResult result;
};

struct xrUnpersistSpatialAnchorAsyncBD_params
{
    XrSenseDataProviderBD provider;
    const XrSpatialAnchorUnpersistInfoBD *info;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUnpersistSpatialAnchorCompleteBD_params
{
    XrSenseDataProviderBD provider;
    XrFutureEXT future;
    XrFutureCompletionEXT *completion;
    XrResult result;
};

struct xrUnpersistSpatialAnchorMSFT_params
{
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName;
    XrResult result;
};

struct xrUnpersistSpatialEntityAsyncEXT_params
{
    XrSpatialPersistenceContextEXT persistenceContext;
    const XrSpatialEntityUnpersistInfoEXT *unpersistInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUnpersistSpatialEntityCompleteEXT_params
{
    XrSpatialPersistenceContextEXT persistenceContext;
    XrFutureEXT future;
    XrUnpersistSpatialEntityCompletionEXT *completion;
    XrResult result;
};

struct xrUpdateHandMeshMSFT_params
{
    XrHandTrackerEXT handTracker;
    const XrHandMeshUpdateInfoMSFT *updateInfo;
    XrHandMeshMSFT *handMesh;
    XrResult result;
};

struct xrUpdatePassthroughColorLutMETA_params
{
    XrPassthroughColorLutMETA colorLut;
    const XrPassthroughColorLutUpdateInfoMETA *updateInfo;
    XrResult result;
};

struct xrUpdateSoundFieldConfigBD_params
{
    XrSoundFieldBD soundField;
    const XrSoundFieldConfigBD *config;
    XrSoundFieldFlagsBD DECLSPEC_ALIGN(8) flags;
    XrResult result;
};

struct xrUpdateSoundObjectConfigBD_params
{
    XrSoundObjectBD soundObject;
    const XrSoundObjectConfigBD *config;
    XrSoundObjectFlagsBD DECLSPEC_ALIGN(8) flags;
    XrResult result;
};

struct xrUpdateSoundObstacleConfigBD_params
{
    XrSoundObstacleBD soundObstacle;
    const XrSoundObstacleConfigBD *config;
    const XrSoundTriangleMeshBD *mesh;
    XrSoundObstacleFlagsBD DECLSPEC_ALIGN(8) flags;
    XrResult result;
};

struct xrUpdateSoundObstacleMaterialConfigBD_params
{
    XrSoundObstacleMaterialBD material;
    const XrSoundObstacleMaterialConfigBD *config;
    XrResult result;
};

struct xrUpdateSpatialAnchorsExpirationAsyncML_params
{
    XrSpatialAnchorsStorageML storage;
    const XrSpatialAnchorsUpdateExpirationInfoML *updateInfo;
    XrFutureEXT *future;
    XrResult result;
};

struct xrUpdateSpatialAnchorsExpirationCompleteML_params
{
    XrSpatialAnchorsStorageML storage;
    XrFutureEXT future;
    XrSpatialAnchorsUpdateExpirationCompletionML *completion;
    XrResult result;
};

struct xrUpdateSwapchainFB_params
{
    XrSwapchain swapchain;
    const XrSwapchainStateBaseHeaderFB *state;
    XrResult result;
};

struct xrWaitAudioPeriodBD_params
{
    XrSpatialAudioRendererBD renderer;
    XrDuration timeout;
    XrResult result;
};

struct xrWaitFrame_params
{
    XrSession session;
    const XrFrameWaitInfo *frameWaitInfo;
    XrFrameState *frameState;
    XrResult result;
};

struct xrWaitSwapchainImage_params
{
    XrSwapchain swapchain;
    const XrSwapchainImageWaitInfo *waitInfo;
    XrResult result;
};

#endif /* __WINE_OPENXR_LOADER_THUNKS_H */
