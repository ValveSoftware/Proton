/* Automatically generated from OpenXR xr.xml; DO NOT EDIT!
 *
 * This file is generated from OpenXR xr.xml file covered
 * by the following copyright and permission notice:
 *
 * Copyright (c) 2017-2024, The Khronos Group Inc.
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

#ifndef __WINE_OPENXR_H
#define __WINE_OPENXR_H

#include <windef.h>
#include <stdint.h>

/* Define WINE_XR_HOST to get 'host' headers. */
#ifdef WINE_XR_HOST
#define XRAPI_CALL
#define WINE_XR_ALIGN(x)
#endif

#ifndef XRAPI_CALL
#define XRAPI_CALL __stdcall
#endif

#ifndef XRAPI_PTR
#define XRAPI_PTR XRAPI_CALL
#endif

#ifndef WINE_XR_ALIGN
#define WINE_XR_ALIGN DECLSPEC_ALIGN
#endif

#ifdef __x86_64__
#define XR_PTR_SIZE 8
#endif

#define XR_TRUE 1
#define XR_FALSE 0
#define XR_MAX_EXTENSION_NAME_SIZE 128
#define XR_MAX_API_LAYER_NAME_SIZE 256
#define XR_MAX_API_LAYER_DESCRIPTION_SIZE 256
#define XR_MAX_SYSTEM_NAME_SIZE 256
#define XR_MAX_APPLICATION_NAME_SIZE 128
#define XR_MAX_ENGINE_NAME_SIZE 128
#define XR_MAX_RUNTIME_NAME_SIZE 128
#define XR_MAX_PATH_LENGTH 256
#define XR_MAX_STRUCTURE_NAME_SIZE 64
#define XR_MAX_RESULT_STRING_SIZE 64
#define XR_MAX_GRAPHICS_APIS_SUPPORTED 32
#define XR_MAX_ACTION_SET_NAME_SIZE 64
#define XR_MAX_ACTION_NAME_SIZE 64
#define XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE 128
#define XR_MAX_LOCALIZED_ACTION_NAME_SIZE 128
#define XR_UUID_SIZE 16
#define XR_KHR_composition_layer_cube_SPEC_VERSION 8
#define XR_KHR_COMPOSITION_LAYER_CUBE_EXTENSION_NAME "XR_KHR_composition_layer_cube"
#define XR_KHR_composition_layer_depth_SPEC_VERSION 6
#define XR_KHR_COMPOSITION_LAYER_DEPTH_EXTENSION_NAME "XR_KHR_composition_layer_depth"
#define XR_KHR_vulkan_swapchain_format_list_SPEC_VERSION 4
#define XR_KHR_VULKAN_SWAPCHAIN_FORMAT_LIST_EXTENSION_NAME "XR_KHR_vulkan_swapchain_format_list"
#define XR_EXT_performance_settings_SPEC_VERSION 4
#define XR_EXT_PERFORMANCE_SETTINGS_EXTENSION_NAME "XR_EXT_performance_settings"
#define XR_EXT_thermal_query_SPEC_VERSION 2
#define XR_EXT_THERMAL_QUERY_EXTENSION_NAME "XR_EXT_thermal_query"
#define XR_KHR_composition_layer_cylinder_SPEC_VERSION 4
#define XR_KHR_COMPOSITION_LAYER_CYLINDER_EXTENSION_NAME "XR_KHR_composition_layer_cylinder"
#define XR_KHR_composition_layer_equirect_SPEC_VERSION 3
#define XR_KHR_COMPOSITION_LAYER_EQUIRECT_EXTENSION_NAME "XR_KHR_composition_layer_equirect"
#define XR_KHR_opengl_enable_SPEC_VERSION 10
#define XR_KHR_OPENGL_ENABLE_EXTENSION_NAME "XR_KHR_opengl_enable"
#define XR_KHR_vulkan_enable_SPEC_VERSION 8
#define XR_KHR_VULKAN_ENABLE_EXTENSION_NAME "XR_KHR_vulkan_enable"
#define XR_KHR_D3D11_enable_SPEC_VERSION 9
#define XR_KHR_D3D11_ENABLE_EXTENSION_NAME "XR_KHR_D3D11_enable"
#define XR_KHR_D3D12_enable_SPEC_VERSION 9
#define XR_KHR_D3D12_ENABLE_EXTENSION_NAME "XR_KHR_D3D12_enable"
#define XR_EXT_eye_gaze_interaction_SPEC_VERSION 2
#define XR_EXT_EYE_GAZE_INTERACTION_EXTENSION_NAME "XR_EXT_eye_gaze_interaction"
#define XR_KHR_visibility_mask_SPEC_VERSION 2
#define XR_KHR_VISIBILITY_MASK_EXTENSION_NAME "XR_KHR_visibility_mask"
#define XR_EXTX_overlay_SPEC_VERSION 5
#define XR_EXTX_OVERLAY_EXTENSION_NAME "XR_EXTX_overlay"
#define XR_KHR_composition_layer_color_scale_bias_SPEC_VERSION 5
#define XR_KHR_COMPOSITION_LAYER_COLOR_SCALE_BIAS_EXTENSION_NAME "XR_KHR_composition_layer_color_scale_bias"
#define XR_KHR_win32_convert_performance_counter_time_SPEC_VERSION 1
#define XR_KHR_WIN32_CONVERT_PERFORMANCE_COUNTER_TIME_EXTENSION_NAME "XR_KHR_win32_convert_performance_counter_time"
#define XR_VARJO_quad_views_SPEC_VERSION 1
#define XR_VARJO_QUAD_VIEWS_EXTENSION_NAME "XR_VARJO_quad_views"
#define XR_MSFT_unbounded_reference_space_SPEC_VERSION 1
#define XR_MSFT_UNBOUNDED_REFERENCE_SPACE_EXTENSION_NAME "XR_MSFT_unbounded_reference_space"
#define XR_MSFT_spatial_anchor_SPEC_VERSION 2
#define XR_MSFT_SPATIAL_ANCHOR_EXTENSION_NAME "XR_MSFT_spatial_anchor"
#define XR_FB_composition_layer_image_layout_SPEC_VERSION 1
#define XR_FB_COMPOSITION_LAYER_IMAGE_LAYOUT_EXTENSION_NAME "XR_FB_composition_layer_image_layout"
#define XR_FB_composition_layer_alpha_blend_SPEC_VERSION 2
#define XR_FB_COMPOSITION_LAYER_ALPHA_BLEND_EXTENSION_NAME "XR_FB_composition_layer_alpha_blend"
#define XR_MND_headless_SPEC_VERSION 2
#define XR_MND_HEADLESS_EXTENSION_NAME "XR_MND_headless"
#define XR_OCULUS_android_session_state_enable_SPEC_VERSION 1
#define XR_OCULUS_ANDROID_SESSION_STATE_ENABLE_EXTENSION_NAME "XR_OCULUS_android_session_state_enable"
#define XR_EXT_view_configuration_depth_range_SPEC_VERSION 1
#define XR_EXT_VIEW_CONFIGURATION_DEPTH_RANGE_EXTENSION_NAME "XR_EXT_view_configuration_depth_range"
#define XR_EXT_conformance_automation_SPEC_VERSION 3
#define XR_EXT_CONFORMANCE_AUTOMATION_EXTENSION_NAME "XR_EXT_conformance_automation"
#define XR_MSFT_spatial_graph_bridge_SPEC_VERSION 2
#define XR_MSFT_SPATIAL_GRAPH_BRIDGE_EXTENSION_NAME "XR_MSFT_spatial_graph_bridge"
#define XR_GUID_SIZE_MSFT 16
#define XR_MSFT_hand_interaction_SPEC_VERSION 1
#define XR_MSFT_HAND_INTERACTION_EXTENSION_NAME "XR_MSFT_hand_interaction"
#define XR_EXT_hand_tracking_SPEC_VERSION 4
#define XR_EXT_HAND_TRACKING_EXTENSION_NAME "XR_EXT_hand_tracking"
#define XR_MSFT_hand_tracking_mesh_SPEC_VERSION 4
#define XR_MSFT_HAND_TRACKING_MESH_EXTENSION_NAME "XR_MSFT_hand_tracking_mesh"
#define XR_MSFT_secondary_view_configuration_SPEC_VERSION 1
#define XR_MSFT_SECONDARY_VIEW_CONFIGURATION_EXTENSION_NAME "XR_MSFT_secondary_view_configuration"
#define XR_MSFT_first_person_observer_SPEC_VERSION 1
#define XR_MSFT_FIRST_PERSON_OBSERVER_EXTENSION_NAME "XR_MSFT_first_person_observer"
#define XR_MSFT_controller_model_SPEC_VERSION 2
#define XR_MSFT_CONTROLLER_MODEL_EXTENSION_NAME "XR_MSFT_controller_model"
#define XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT 64
#define XR_EXT_win32_appcontainer_compatible_SPEC_VERSION 1
#define XR_EXT_WIN32_APPCONTAINER_COMPATIBLE_EXTENSION_NAME "XR_EXT_win32_appcontainer_compatible"
#define XR_EPIC_view_configuration_fov_SPEC_VERSION 2
#define XR_EPIC_VIEW_CONFIGURATION_FOV_EXTENSION_NAME "XR_EPIC_view_configuration_fov"
#define XR_MSFT_holographic_window_attachment_SPEC_VERSION 1
#define XR_MSFT_HOLOGRAPHIC_WINDOW_ATTACHMENT_EXTENSION_NAME "XR_MSFT_holographic_window_attachment"
#define XR_MSFT_composition_layer_reprojection_SPEC_VERSION 1
#define XR_MSFT_COMPOSITION_LAYER_REPROJECTION_EXTENSION_NAME "XR_MSFT_composition_layer_reprojection"
#define XR_HUAWEI_controller_interaction_SPEC_VERSION 1
#define XR_HUAWEI_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_HUAWEI_controller_interaction"
#define XR_FB_swapchain_update_state_SPEC_VERSION 3
#define XR_FB_SWAPCHAIN_UPDATE_STATE_EXTENSION_NAME "XR_FB_swapchain_update_state"
#define XR_FB_composition_layer_secure_content_SPEC_VERSION 1
#define XR_FB_COMPOSITION_LAYER_SECURE_CONTENT_EXTENSION_NAME "XR_FB_composition_layer_secure_content"
#define XR_FB_body_tracking_SPEC_VERSION 1
#define XR_FB_BODY_TRACKING_EXTENSION_NAME "XR_FB_body_tracking"
#define XR_EXT_dpad_binding_SPEC_VERSION 1
#define XR_EXT_DPAD_BINDING_EXTENSION_NAME "XR_EXT_dpad_binding"
#define XR_VALVE_analog_threshold_SPEC_VERSION 2
#define XR_VALVE_ANALOG_THRESHOLD_EXTENSION_NAME "XR_VALVE_analog_threshold"
#define XR_EXT_hand_joints_motion_range_SPEC_VERSION 1
#define XR_EXT_HAND_JOINTS_MOTION_RANGE_EXTENSION_NAME "XR_EXT_hand_joints_motion_range"
#define XR_KHR_vulkan_enable2_SPEC_VERSION 2
#define XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME "XR_KHR_vulkan_enable2"
#define XR_KHR_composition_layer_equirect2_SPEC_VERSION 1
#define XR_KHR_COMPOSITION_LAYER_EQUIRECT2_EXTENSION_NAME "XR_KHR_composition_layer_equirect2"
#define XR_EXT_samsung_odyssey_controller_SPEC_VERSION 1
#define XR_EXT_SAMSUNG_ODYSSEY_CONTROLLER_EXTENSION_NAME "XR_EXT_samsung_odyssey_controller"
#define XR_EXT_hp_mixed_reality_controller_SPEC_VERSION 1
#define XR_EXT_HP_MIXED_REALITY_CONTROLLER_EXTENSION_NAME "XR_EXT_hp_mixed_reality_controller"
#define XR_MND_swapchain_usage_input_attachment_bit_SPEC_VERSION 2
#define XR_MND_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_EXTENSION_NAME "XR_MND_swapchain_usage_input_attachment_bit"
#define XR_MSFT_scene_understanding_SPEC_VERSION 2
#define XR_MSFT_SCENE_UNDERSTANDING_EXTENSION_NAME "XR_MSFT_scene_understanding"
#define XR_MSFT_scene_understanding_serialization_SPEC_VERSION 2
#define XR_MSFT_SCENE_UNDERSTANDING_SERIALIZATION_EXTENSION_NAME "XR_MSFT_scene_understanding_serialization"
#define XR_FB_display_refresh_rate_SPEC_VERSION 1
#define XR_FB_DISPLAY_REFRESH_RATE_EXTENSION_NAME "XR_FB_display_refresh_rate"
#define XR_HTC_vive_cosmos_controller_interaction_SPEC_VERSION 1
#define XR_HTC_VIVE_COSMOS_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_HTC_vive_cosmos_controller_interaction"
#define XR_HTCX_vive_tracker_interaction_SPEC_VERSION 3
#define XR_HTCX_VIVE_TRACKER_INTERACTION_EXTENSION_NAME "XR_HTCX_vive_tracker_interaction"
#define XR_HTC_facial_tracking_SPEC_VERSION 2
#define XR_HTC_FACIAL_TRACKING_EXTENSION_NAME "XR_HTC_facial_tracking"
#define XR_HTC_vive_focus3_controller_interaction_SPEC_VERSION 2
#define XR_HTC_VIVE_FOCUS3_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_HTC_vive_focus3_controller_interaction"
#define XR_HTC_hand_interaction_SPEC_VERSION 1
#define XR_HTC_HAND_INTERACTION_EXTENSION_NAME "XR_HTC_hand_interaction"
#define XR_HTC_vive_wrist_tracker_interaction_SPEC_VERSION 1
#define XR_HTC_VIVE_WRIST_TRACKER_INTERACTION_EXTENSION_NAME "XR_HTC_vive_wrist_tracker_interaction"
#define XR_FB_color_space_SPEC_VERSION 3
#define XR_FB_COLOR_SPACE_EXTENSION_NAME "XR_FB_color_space"
#define XR_FB_hand_tracking_mesh_SPEC_VERSION 3
#define XR_FB_HAND_TRACKING_MESH_EXTENSION_NAME "XR_FB_hand_tracking_mesh"
#define XR_FB_hand_tracking_aim_SPEC_VERSION 2
#define XR_FB_HAND_TRACKING_AIM_EXTENSION_NAME "XR_FB_hand_tracking_aim"
#define XR_FB_hand_tracking_capsules_SPEC_VERSION 3
#define XR_FB_HAND_TRACKING_CAPSULES_EXTENSION_NAME "XR_FB_hand_tracking_capsules"
#define XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB 2
#define XR_HAND_TRACKING_CAPSULE_COUNT_FB 19
#define XR_FB_spatial_entity_SPEC_VERSION 3
#define XR_FB_SPATIAL_ENTITY_EXTENSION_NAME "XR_FB_spatial_entity"
#define XR_FB_foveation_SPEC_VERSION 1
#define XR_FB_FOVEATION_EXTENSION_NAME "XR_FB_foveation"
#define XR_FB_foveation_configuration_SPEC_VERSION 1
#define XR_FB_FOVEATION_CONFIGURATION_EXTENSION_NAME "XR_FB_foveation_configuration"
#define XR_FB_keyboard_tracking_SPEC_VERSION 1
#define XR_FB_KEYBOARD_TRACKING_EXTENSION_NAME "XR_FB_keyboard_tracking"
#define XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB 128
#define XR_FB_triangle_mesh_SPEC_VERSION 2
#define XR_FB_TRIANGLE_MESH_EXTENSION_NAME "XR_FB_triangle_mesh"
#define XR_FB_passthrough_SPEC_VERSION 3
#define XR_FB_PASSTHROUGH_EXTENSION_NAME "XR_FB_passthrough"
#define XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB 256
#define XR_FB_render_model_SPEC_VERSION 4
#define XR_FB_RENDER_MODEL_EXTENSION_NAME "XR_FB_render_model"
#define XR_MAX_RENDER_MODEL_NAME_SIZE_FB 64
#define XR_KHR_binding_modification_SPEC_VERSION 1
#define XR_KHR_BINDING_MODIFICATION_EXTENSION_NAME "XR_KHR_binding_modification"
#define XR_VARJO_foveated_rendering_SPEC_VERSION 3
#define XR_VARJO_FOVEATED_RENDERING_EXTENSION_NAME "XR_VARJO_foveated_rendering"
#define XR_VARJO_composition_layer_depth_test_SPEC_VERSION 2
#define XR_VARJO_COMPOSITION_LAYER_DEPTH_TEST_EXTENSION_NAME "XR_VARJO_composition_layer_depth_test"
#define XR_VARJO_environment_depth_estimation_SPEC_VERSION 1
#define XR_VARJO_ENVIRONMENT_DEPTH_ESTIMATION_EXTENSION_NAME "XR_VARJO_environment_depth_estimation"
#define XR_VARJO_marker_tracking_SPEC_VERSION 1
#define XR_VARJO_MARKER_TRACKING_EXTENSION_NAME "XR_VARJO_marker_tracking"
#define XR_VARJO_view_offset_SPEC_VERSION 1
#define XR_VARJO_VIEW_OFFSET_EXTENSION_NAME "XR_VARJO_view_offset"
#define XR_VARJO_xr4_controller_interaction_SPEC_VERSION 1
#define XR_VARJO_XR4_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_VARJO_xr4_controller_interaction"
#define XR_ML_ml2_controller_interaction_SPEC_VERSION 1
#define XR_ML_ML2_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_ML_ml2_controller_interaction"
#define XR_ML_frame_end_info_SPEC_VERSION 1
#define XR_ML_FRAME_END_INFO_EXTENSION_NAME "XR_ML_frame_end_info"
#define XR_ML_global_dimmer_SPEC_VERSION 1
#define XR_ML_GLOBAL_DIMMER_EXTENSION_NAME "XR_ML_global_dimmer"
#define XR_ML_marker_understanding_SPEC_VERSION 1
#define XR_ML_MARKER_UNDERSTANDING_EXTENSION_NAME "XR_ML_marker_understanding"
#define XR_ML_localization_map_SPEC_VERSION 1
#define XR_ML_LOCALIZATION_MAP_EXTENSION_NAME "XR_ML_localization_map"
#define XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML 64
#define XR_ML_user_calibration_SPEC_VERSION 1
#define XR_ML_USER_CALIBRATION_EXTENSION_NAME "XR_ML_user_calibration"
#define XR_MSFT_spatial_anchor_persistence_SPEC_VERSION 2
#define XR_MSFT_SPATIAL_ANCHOR_PERSISTENCE_EXTENSION_NAME "XR_MSFT_spatial_anchor_persistence"
#define XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT 256
#define XR_MSFT_scene_marker_SPEC_VERSION 1
#define XR_MSFT_SCENE_MARKER_EXTENSION_NAME "XR_MSFT_scene_marker"
#define XR_ULTRALEAP_hand_tracking_forearm_SPEC_VERSION 1
#define XR_ULTRALEAP_HAND_TRACKING_FOREARM_EXTENSION_NAME "XR_ULTRALEAP_hand_tracking_forearm"
#define XR_FB_spatial_entity_query_SPEC_VERSION 1
#define XR_FB_SPATIAL_ENTITY_QUERY_EXTENSION_NAME "XR_FB_spatial_entity_query"
#define XR_FB_spatial_entity_storage_SPEC_VERSION 1
#define XR_FB_SPATIAL_ENTITY_STORAGE_EXTENSION_NAME "XR_FB_spatial_entity_storage"
#define XR_OCULUS_audio_device_guid_SPEC_VERSION 1
#define XR_OCULUS_AUDIO_DEVICE_GUID_EXTENSION_NAME "XR_OCULUS_audio_device_guid"
#define XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS 128
#define XR_FB_foveation_vulkan_SPEC_VERSION 1
#define XR_FB_FOVEATION_VULKAN_EXTENSION_NAME "XR_FB_foveation_vulkan"
#define XR_FB_swapchain_update_state_vulkan_SPEC_VERSION 1
#define XR_FB_SWAPCHAIN_UPDATE_STATE_VULKAN_EXTENSION_NAME "XR_FB_swapchain_update_state_vulkan"
#define XR_KHR_swapchain_usage_input_attachment_bit_SPEC_VERSION 3
#define XR_KHR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_EXTENSION_NAME "XR_KHR_swapchain_usage_input_attachment_bit"
#define XR_FB_touch_controller_pro_SPEC_VERSION 1
#define XR_FB_TOUCH_CONTROLLER_PRO_EXTENSION_NAME "XR_FB_touch_controller_pro"
#define XR_FB_spatial_entity_sharing_SPEC_VERSION 1
#define XR_FB_SPATIAL_ENTITY_SHARING_EXTENSION_NAME "XR_FB_spatial_entity_sharing"
#define XR_FB_space_warp_SPEC_VERSION 2
#define XR_FB_SPACE_WARP_EXTENSION_NAME "XR_FB_space_warp"
#define XR_FB_haptic_amplitude_envelope_SPEC_VERSION 1
#define XR_FB_HAPTIC_AMPLITUDE_ENVELOPE_EXTENSION_NAME "XR_FB_haptic_amplitude_envelope"
#define XR_FB_scene_SPEC_VERSION 4
#define XR_FB_SCENE_EXTENSION_NAME "XR_FB_scene"
#define XR_EXT_palm_pose_SPEC_VERSION 3
#define XR_EXT_PALM_POSE_EXTENSION_NAME "XR_EXT_palm_pose"
#define XR_ALMALENCE_digital_lens_control_SPEC_VERSION 1
#define XR_ALMALENCE_DIGITAL_LENS_CONTROL_EXTENSION_NAME "XR_ALMALENCE_digital_lens_control"
#define XR_FB_scene_capture_SPEC_VERSION 1
#define XR_FB_SCENE_CAPTURE_EXTENSION_NAME "XR_FB_scene_capture"
#define XR_FB_spatial_entity_container_SPEC_VERSION 2
#define XR_FB_SPATIAL_ENTITY_CONTAINER_EXTENSION_NAME "XR_FB_spatial_entity_container"
#define XR_META_foveation_eye_tracked_SPEC_VERSION 1
#define XR_META_FOVEATION_EYE_TRACKED_EXTENSION_NAME "XR_META_foveation_eye_tracked"
#define XR_FOVEATION_CENTER_SIZE_META 2
#define XR_FB_face_tracking_SPEC_VERSION 1
#define XR_FB_FACE_TRACKING_EXTENSION_NAME "XR_FB_face_tracking"
#define XR_FB_eye_tracking_social_SPEC_VERSION 1
#define XR_FB_EYE_TRACKING_SOCIAL_EXTENSION_NAME "XR_FB_eye_tracking_social"
#define XR_FB_passthrough_keyboard_hands_SPEC_VERSION 2
#define XR_FB_PASSTHROUGH_KEYBOARD_HANDS_EXTENSION_NAME "XR_FB_passthrough_keyboard_hands"
#define XR_FB_composition_layer_settings_SPEC_VERSION 1
#define XR_FB_COMPOSITION_LAYER_SETTINGS_EXTENSION_NAME "XR_FB_composition_layer_settings"
#define XR_FB_touch_controller_proximity_SPEC_VERSION 1
#define XR_FB_TOUCH_CONTROLLER_PROXIMITY_EXTENSION_NAME "XR_FB_touch_controller_proximity"
#define XR_FB_haptic_pcm_SPEC_VERSION 1
#define XR_FB_HAPTIC_PCM_EXTENSION_NAME "XR_FB_haptic_pcm"
#define XR_FB_composition_layer_depth_test_SPEC_VERSION 1
#define XR_FB_COMPOSITION_LAYER_DEPTH_TEST_EXTENSION_NAME "XR_FB_composition_layer_depth_test"
#define XR_META_local_dimming_SPEC_VERSION 1
#define XR_META_LOCAL_DIMMING_EXTENSION_NAME "XR_META_local_dimming"
#define XR_META_passthrough_preferences_SPEC_VERSION 1
#define XR_META_PASSTHROUGH_PREFERENCES_EXTENSION_NAME "XR_META_passthrough_preferences"
#define XR_META_virtual_keyboard_SPEC_VERSION 1
#define XR_META_VIRTUAL_KEYBOARD_EXTENSION_NAME "XR_META_virtual_keyboard"
#define XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META 3992
#define XR_OCULUS_external_camera_SPEC_VERSION 1
#define XR_OCULUS_EXTERNAL_CAMERA_EXTENSION_NAME "XR_OCULUS_external_camera"
#define XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS 32
#define XR_META_vulkan_swapchain_create_info_SPEC_VERSION 1
#define XR_META_VULKAN_SWAPCHAIN_CREATE_INFO_EXTENSION_NAME "XR_META_vulkan_swapchain_create_info"
#define XR_META_performance_metrics_SPEC_VERSION 2
#define XR_META_PERFORMANCE_METRICS_EXTENSION_NAME "XR_META_performance_metrics"
#define XR_FB_spatial_entity_storage_batch_SPEC_VERSION 1
#define XR_FB_SPATIAL_ENTITY_STORAGE_BATCH_EXTENSION_NAME "XR_FB_spatial_entity_storage_batch"
#define XR_FB_spatial_entity_user_SPEC_VERSION 1
#define XR_FB_SPATIAL_ENTITY_USER_EXTENSION_NAME "XR_FB_spatial_entity_user"
#define XR_META_headset_id_SPEC_VERSION 2
#define XR_META_HEADSET_ID_EXTENSION_NAME "XR_META_headset_id"
#define XR_META_recommended_layer_resolution_SPEC_VERSION 1
#define XR_META_RECOMMENDED_LAYER_RESOLUTION_EXTENSION_NAME "XR_META_recommended_layer_resolution"
#define XR_META_passthrough_color_lut_SPEC_VERSION 1
#define XR_META_PASSTHROUGH_COLOR_LUT_EXTENSION_NAME "XR_META_passthrough_color_lut"
#define XR_META_spatial_entity_mesh_SPEC_VERSION 1
#define XR_META_SPATIAL_ENTITY_MESH_EXTENSION_NAME "XR_META_spatial_entity_mesh"
#define XR_META_automatic_layer_filter_SPEC_VERSION 1
#define XR_META_AUTOMATIC_LAYER_FILTER_EXTENSION_NAME "XR_META_automatic_layer_filter"
#define XR_META_touch_controller_plus_SPEC_VERSION 1
#define XR_META_TOUCH_CONTROLLER_PLUS_EXTENSION_NAME "XR_META_touch_controller_plus"
#define XR_FB_face_tracking2_SPEC_VERSION 1
#define XR_FB_FACE_TRACKING2_EXTENSION_NAME "XR_FB_face_tracking2"
#define XR_META_environment_depth_SPEC_VERSION 1
#define XR_META_ENVIRONMENT_DEPTH_EXTENSION_NAME "XR_META_environment_depth"
#define XR_EXT_uuid_SPEC_VERSION 1
#define XR_EXT_UUID_EXTENSION_NAME "XR_EXT_uuid"
#define XR_UUID_SIZE_EXT 16
#define XR_EXT_hand_interaction_SPEC_VERSION 1
#define XR_EXT_HAND_INTERACTION_EXTENSION_NAME "XR_EXT_hand_interaction"
#define XR_QCOM_tracking_optimization_settings_SPEC_VERSION 1
#define XR_QCOM_TRACKING_OPTIMIZATION_SETTINGS_EXTENSION_NAME "XR_QCOM_tracking_optimization_settings"
#define XR_HTC_passthrough_SPEC_VERSION 1
#define XR_HTC_PASSTHROUGH_EXTENSION_NAME "XR_HTC_passthrough"
#define XR_HTC_foveation_SPEC_VERSION 1
#define XR_HTC_FOVEATION_EXTENSION_NAME "XR_HTC_foveation"
#define XR_HTC_anchor_SPEC_VERSION 1
#define XR_HTC_ANCHOR_EXTENSION_NAME "XR_HTC_anchor"
#define XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC 256
#define XR_EXT_active_action_set_priority_SPEC_VERSION 1
#define XR_EXT_ACTIVE_ACTION_SET_PRIORITY_EXTENSION_NAME "XR_EXT_active_action_set_priority"
#define XR_MNDX_force_feedback_curl_SPEC_VERSION 1
#define XR_MNDX_FORCE_FEEDBACK_CURL_EXTENSION_NAME "XR_MNDX_force_feedback_curl"
#define XR_BD_controller_interaction_SPEC_VERSION 2
#define XR_BD_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_BD_controller_interaction"
#define XR_EXT_local_floor_SPEC_VERSION 1
#define XR_EXT_LOCAL_FLOOR_EXTENSION_NAME "XR_EXT_local_floor"
#define XR_EXT_hand_tracking_data_source_SPEC_VERSION 1
#define XR_EXT_HAND_TRACKING_DATA_SOURCE_EXTENSION_NAME "XR_EXT_hand_tracking_data_source"
#define XR_EXT_plane_detection_SPEC_VERSION 1
#define XR_EXT_PLANE_DETECTION_EXTENSION_NAME "XR_EXT_plane_detection"
#define XR_OPPO_controller_interaction_SPEC_VERSION 1
#define XR_OPPO_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_OPPO_controller_interaction"
#define XR_EXT_future_SPEC_VERSION 1
#define XR_EXT_FUTURE_EXTENSION_NAME "XR_EXT_future"
#define XR_NULL_FUTURE_EXT 0
#define XR_EXT_user_presence_SPEC_VERSION 1
#define XR_EXT_USER_PRESENCE_EXTENSION_NAME "XR_EXT_user_presence"
#define XR_KHR_locate_spaces_SPEC_VERSION 1
#define XR_KHR_LOCATE_SPACES_EXTENSION_NAME "XR_KHR_locate_spaces"
#define XR_YVR_controller_interaction_SPEC_VERSION 1
#define XR_YVR_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_YVR_controller_interaction"
#define XR_KHR_maintenance1_SPEC_VERSION 1
#define XR_KHR_MAINTENANCE1_EXTENSION_NAME "XR_KHR_maintenance1"


#define XR_MAKE_VERSION(major, minor, patch) \
    ((((major) & 0xffffULL) << 48) | (((minor) & 0xffffULL) << 32) | ((patch) & 0xffffffffULL))

#define XR_VERSION_MAJOR(version) (uint16_t)(((uint64_t)(version) >> 48)& 0xffffULL)

#define XR_VERSION_MINOR(version) (uint16_t)(((uint64_t)(version) >> 32) & 0xffffULL)

#define XR_VERSION_PATCH(version) (uint32_t)((uint64_t)(version) & 0xffffffffULL)


#define XR_CURRENT_API_VERSION XR_MAKE_VERSION(1, 1, 36)


#if !defined(XR_MAY_ALIAS)
#if defined(__clang__) || (defined(__GNUC__) && (__GNUC__ > 4))
#define XR_MAY_ALIAS __attribute__((__may_alias__))
#else
#define XR_MAY_ALIAS
#endif
#endif


#if !defined(XR_DEFINE_HANDLE)
#if (XR_PTR_SIZE == 8)
    #define XR_DEFINE_HANDLE(object) typedef struct object##_T* object;
#else
    #define XR_DEFINE_HANDLE(object) typedef uint64_t object;
#endif
#endif


#if !defined(XR_NULL_HANDLE)
#if (XR_PTR_SIZE == 8) && XR_CPP_NULLPTR_SUPPORTED
    #define XR_NULL_HANDLE nullptr
#else
    #define XR_NULL_HANDLE 0
#endif
#endif


#if !defined(XR_DEFINE_ATOM)
    #define XR_DEFINE_ATOM(object) typedef uint64_t object;
#endif


#if !defined(XR_DEFINE_OPAQUE_64)
    #if (XR_PTR_SIZE == 8)
        #define XR_DEFINE_OPAQUE_64(object) typedef struct object##_T* object;
    #else
        #define XR_DEFINE_OPAQUE_64(object) typedef uint64_t object;
    #endif
#endif


#define XR_EXTENSION_ENUM_BASE 1000000000


#define XR_EXTENSION_ENUM_STRIDE 1000


#define XR_NULL_PATH 0


#define XR_NULL_SYSTEM_ID 0


#define XR_SUCCEEDED(result) ((result) >= 0)


#define XR_UNQUALIFIED_SUCCESS(result) ((result) == 0)


#define XR_FAILED(result) ((result) < 0)


#define XR_NO_DURATION 0


#define XR_INFINITE_DURATION 0x7fffffffffffffffLL


#define XR_MIN_HAPTIC_DURATION -1


#define XR_FREQUENCY_UNSPECIFIED 0


#define XR_MAX_EVENT_DATA_SIZE sizeof(XrEventDataBuffer)


#define XR_MIN_COMPOSITION_LAYERS_SUPPORTED 16


#define XR_CURRENT_LOADER_API_LAYER_VERSION 1


#define XR_CURRENT_LOADER_RUNTIME_VERSION 1


#define XR_LOADER_INFO_STRUCT_VERSION 1


#define XR_API_LAYER_INFO_STRUCT_VERSION 1


#define XR_RUNTIME_INFO_STRUCT_VERSION 1


#define XR_API_LAYER_NEXT_INFO_STRUCT_VERSION 1


#define XR_API_LAYER_CREATE_INFO_STRUCT_VERSION 1


#define XR_API_LAYER_MAX_SETTINGS_PATH_SIZE 512


#define XR_HAND_JOINT_COUNT_EXT 26


#define XR_NULL_CONTROLLER_MODEL_KEY_MSFT 0


#define XR_NULL_RENDER_MODEL_KEY_FB 0


#define XR_FACIAL_EXPRESSION_EYE_COUNT_HTC 14


#define XR_FACIAL_EXPRESSION_LIP_COUNT_HTC 37


#define XR_HAND_FOREARM_JOINT_COUNT_ULTRALEAP 27


#define XR_FACE_EXPRESSSION_SET_DEFAULT_FB XR_FACE_EXPRESSION_SET_DEFAULT_FB


#define XR_MAX_HAPTIC_AMPLITUDE_ENVELOPE_SAMPLES_FB 4000u


#define XR_MAX_HAPTIC_PCM_BUFFER_SIZE_FB 4000
XR_DEFINE_HANDLE(XrAction)
XR_DEFINE_HANDLE(XrActionSet)
XR_DEFINE_HANDLE(XrBodyTrackerFB)
XR_DEFINE_HANDLE(XrEnvironmentDepthProviderMETA)
XR_DEFINE_HANDLE(XrEnvironmentDepthSwapchainMETA)
XR_DEFINE_HANDLE(XrExportedLocalizationMapML)
XR_DEFINE_HANDLE(XrEyeTrackerFB)
XR_DEFINE_HANDLE(XrFaceTracker2FB)
XR_DEFINE_HANDLE(XrFaceTrackerFB)
XR_DEFINE_HANDLE(XrFacialTrackerHTC)
XR_DEFINE_HANDLE(XrFoveationProfileFB)
XR_DEFINE_HANDLE(XrGeometryInstanceFB)
XR_DEFINE_HANDLE(XrHandTrackerEXT)
XR_DEFINE_HANDLE(XrInstance)
XR_DEFINE_HANDLE(XrMarkerDetectorML)
XR_DEFINE_HANDLE(XrPassthroughColorLutMETA)
XR_DEFINE_HANDLE(XrPassthroughFB)
XR_DEFINE_HANDLE(XrPassthroughHTC)
XR_DEFINE_HANDLE(XrPassthroughLayerFB)
XR_DEFINE_HANDLE(XrPlaneDetectorEXT)
XR_DEFINE_HANDLE(XrSceneMSFT)
XR_DEFINE_HANDLE(XrSceneObserverMSFT)
XR_DEFINE_HANDLE(XrSession)
XR_DEFINE_HANDLE(XrSpace)
XR_DEFINE_HANDLE(XrSpaceUserFB)
XR_DEFINE_HANDLE(XrSpatialAnchorMSFT)
XR_DEFINE_HANDLE(XrSpatialAnchorStoreConnectionMSFT)
XR_DEFINE_HANDLE(XrSpatialGraphNodeBindingMSFT)
XR_DEFINE_HANDLE(XrSwapchain)
XR_DEFINE_HANDLE(XrTriangleMeshFB)
XR_DEFINE_HANDLE(XrVirtualKeyboardMETA)

XR_DEFINE_ATOM(XrAsyncRequestIdFB)
typedef uint32_t XrBool32;
XR_DEFINE_ATOM(XrControllerModelKeyMSFT)
typedef int64_t XrDuration;
typedef uint64_t XrFlags64;
XR_DEFINE_OPAQUE_64(XrFutureEXT)
XR_DEFINE_ATOM(XrMarkerML)
XR_DEFINE_ATOM(XrPath)
XR_DEFINE_ATOM(XrRenderModelKeyFB)
typedef uint64_t XrSpaceUserIdFB;
XR_DEFINE_ATOM(XrSystemId)
typedef int64_t XrTime;
typedef uint64_t XrVersion;

typedef XrFlags64 XrAndroidSurfaceSwapchainFlagsFB;
typedef XrFlags64 XrCompositionLayerFlags;
typedef XrFlags64 XrCompositionLayerImageLayoutFlagsFB;
typedef XrFlags64 XrCompositionLayerSecureContentFlagsFB;
typedef XrFlags64 XrCompositionLayerSettingsFlagsFB;
typedef XrFlags64 XrCompositionLayerSpaceWarpInfoFlagsFB;
typedef XrFlags64 XrDebugUtilsMessageSeverityFlagsEXT;
typedef XrFlags64 XrDebugUtilsMessageTypeFlagsEXT;
typedef XrFlags64 XrDigitalLensControlFlagsALMALENCE;
typedef XrFlags64 XrEnvironmentDepthProviderCreateFlagsMETA;
typedef XrFlags64 XrEnvironmentDepthSwapchainCreateFlagsMETA;
typedef XrFlags64 XrExternalCameraStatusFlagsOCULUS;
typedef XrFlags64 XrFoveationDynamicFlagsHTC;
typedef XrFlags64 XrFoveationEyeTrackedProfileCreateFlagsMETA;
typedef XrFlags64 XrFoveationEyeTrackedStateFlagsMETA;
typedef XrFlags64 XrFrameEndInfoFlagsML;
typedef XrFlags64 XrGlobalDimmerFrameEndInfoFlagsML;
typedef XrFlags64 XrHandTrackingAimFlagsFB;
typedef XrFlags64 XrInputSourceLocalizedNameFlags;
typedef XrFlags64 XrInstanceCreateFlags;
typedef XrFlags64 XrKeyboardTrackingFlagsFB;
typedef XrFlags64 XrKeyboardTrackingQueryFlagsFB;
typedef XrFlags64 XrLocalizationMapErrorFlagsML;
typedef XrFlags64 XrOverlayMainSessionFlagsEXTX;
typedef XrFlags64 XrOverlaySessionCreateFlagsEXTX;
typedef XrFlags64 XrPassthroughCapabilityFlagsFB;
typedef XrFlags64 XrPassthroughFlagsFB;
typedef XrFlags64 XrPassthroughPreferenceFlagsMETA;
typedef XrFlags64 XrPassthroughStateChangedFlagsFB;
typedef XrFlags64 XrPerformanceMetricsCounterFlagsMETA;
typedef XrFlags64 XrPlaneDetectionCapabilityFlagsEXT;
typedef XrFlags64 XrPlaneDetectorFlagsEXT;
typedef XrFlags64 XrRenderModelFlagsFB;
typedef XrFlags64 XrSemanticLabelsSupportFlagsFB;
typedef XrFlags64 XrSessionCreateFlags;
typedef XrFlags64 XrSpaceLocationFlags;
typedef XrFlags64 XrSpaceVelocityFlags;
typedef XrFlags64 XrSwapchainCreateFlags;
typedef XrFlags64 XrSwapchainCreateFoveationFlagsFB;
typedef XrFlags64 XrSwapchainStateFoveationFlagsFB;
typedef XrFlags64 XrSwapchainUsageFlags;
typedef XrFlags64 XrTriangleMeshFlagsFB;
typedef XrFlags64 XrViewStateFlags;
typedef XrFlags64 XrVirtualKeyboardInputStateFlagsMETA;
typedef XrFlags64 XrVulkanDeviceCreateFlagsKHR;
typedef XrFlags64 XrVulkanInstanceCreateFlagsKHR;

typedef enum XrActionType
{
    XR_ACTION_TYPE_BOOLEAN_INPUT = 1,
    XR_ACTION_TYPE_FLOAT_INPUT = 2,
    XR_ACTION_TYPE_VECTOR2F_INPUT = 3,
    XR_ACTION_TYPE_POSE_INPUT = 4,
    XR_ACTION_TYPE_VIBRATION_OUTPUT = 100,
    XR_ACTION_TYPE_MAX_ENUM = 0x7fffffff,
} XrActionType;

typedef enum XrBlendFactorFB
{
    XR_BLEND_FACTOR_ZERO_FB = 0,
    XR_BLEND_FACTOR_ONE_FB = 1,
    XR_BLEND_FACTOR_SRC_ALPHA_FB = 2,
    XR_BLEND_FACTOR_ONE_MINUS_SRC_ALPHA_FB = 3,
    XR_BLEND_FACTOR_DST_ALPHA_FB = 4,
    XR_BLEND_FACTOR_ONE_MINUS_DST_ALPHA_FB = 5,
    XR_BLEND_FACTOR_FB_MAX_ENUM = 0x7fffffff,
} XrBlendFactorFB;

typedef enum XrBodyJointFB
{
    XR_BODY_JOINT_NONE_FB = -1,
    XR_BODY_JOINT_ROOT_FB = 0,
    XR_BODY_JOINT_HIPS_FB = 1,
    XR_BODY_JOINT_SPINE_LOWER_FB = 2,
    XR_BODY_JOINT_SPINE_MIDDLE_FB = 3,
    XR_BODY_JOINT_SPINE_UPPER_FB = 4,
    XR_BODY_JOINT_CHEST_FB = 5,
    XR_BODY_JOINT_NECK_FB = 6,
    XR_BODY_JOINT_HEAD_FB = 7,
    XR_BODY_JOINT_LEFT_SHOULDER_FB = 8,
    XR_BODY_JOINT_LEFT_SCAPULA_FB = 9,
    XR_BODY_JOINT_LEFT_ARM_UPPER_FB = 10,
    XR_BODY_JOINT_LEFT_ARM_LOWER_FB = 11,
    XR_BODY_JOINT_LEFT_HAND_WRIST_TWIST_FB = 12,
    XR_BODY_JOINT_RIGHT_SHOULDER_FB = 13,
    XR_BODY_JOINT_RIGHT_SCAPULA_FB = 14,
    XR_BODY_JOINT_RIGHT_ARM_UPPER_FB = 15,
    XR_BODY_JOINT_RIGHT_ARM_LOWER_FB = 16,
    XR_BODY_JOINT_RIGHT_HAND_WRIST_TWIST_FB = 17,
    XR_BODY_JOINT_LEFT_HAND_PALM_FB = 18,
    XR_BODY_JOINT_LEFT_HAND_WRIST_FB = 19,
    XR_BODY_JOINT_LEFT_HAND_THUMB_METACARPAL_FB = 20,
    XR_BODY_JOINT_LEFT_HAND_THUMB_PROXIMAL_FB = 21,
    XR_BODY_JOINT_LEFT_HAND_THUMB_DISTAL_FB = 22,
    XR_BODY_JOINT_LEFT_HAND_THUMB_TIP_FB = 23,
    XR_BODY_JOINT_LEFT_HAND_INDEX_METACARPAL_FB = 24,
    XR_BODY_JOINT_LEFT_HAND_INDEX_PROXIMAL_FB = 25,
    XR_BODY_JOINT_LEFT_HAND_INDEX_INTERMEDIATE_FB = 26,
    XR_BODY_JOINT_LEFT_HAND_INDEX_DISTAL_FB = 27,
    XR_BODY_JOINT_LEFT_HAND_INDEX_TIP_FB = 28,
    XR_BODY_JOINT_LEFT_HAND_MIDDLE_METACARPAL_FB = 29,
    XR_BODY_JOINT_LEFT_HAND_MIDDLE_PROXIMAL_FB = 30,
    XR_BODY_JOINT_LEFT_HAND_MIDDLE_INTERMEDIATE_FB = 31,
    XR_BODY_JOINT_LEFT_HAND_MIDDLE_DISTAL_FB = 32,
    XR_BODY_JOINT_LEFT_HAND_MIDDLE_TIP_FB = 33,
    XR_BODY_JOINT_LEFT_HAND_RING_METACARPAL_FB = 34,
    XR_BODY_JOINT_LEFT_HAND_RING_PROXIMAL_FB = 35,
    XR_BODY_JOINT_LEFT_HAND_RING_INTERMEDIATE_FB = 36,
    XR_BODY_JOINT_LEFT_HAND_RING_DISTAL_FB = 37,
    XR_BODY_JOINT_LEFT_HAND_RING_TIP_FB = 38,
    XR_BODY_JOINT_LEFT_HAND_LITTLE_METACARPAL_FB = 39,
    XR_BODY_JOINT_LEFT_HAND_LITTLE_PROXIMAL_FB = 40,
    XR_BODY_JOINT_LEFT_HAND_LITTLE_INTERMEDIATE_FB = 41,
    XR_BODY_JOINT_LEFT_HAND_LITTLE_DISTAL_FB = 42,
    XR_BODY_JOINT_LEFT_HAND_LITTLE_TIP_FB = 43,
    XR_BODY_JOINT_RIGHT_HAND_PALM_FB = 44,
    XR_BODY_JOINT_RIGHT_HAND_WRIST_FB = 45,
    XR_BODY_JOINT_RIGHT_HAND_THUMB_METACARPAL_FB = 46,
    XR_BODY_JOINT_RIGHT_HAND_THUMB_PROXIMAL_FB = 47,
    XR_BODY_JOINT_RIGHT_HAND_THUMB_DISTAL_FB = 48,
    XR_BODY_JOINT_RIGHT_HAND_THUMB_TIP_FB = 49,
    XR_BODY_JOINT_RIGHT_HAND_INDEX_METACARPAL_FB = 50,
    XR_BODY_JOINT_RIGHT_HAND_INDEX_PROXIMAL_FB = 51,
    XR_BODY_JOINT_RIGHT_HAND_INDEX_INTERMEDIATE_FB = 52,
    XR_BODY_JOINT_RIGHT_HAND_INDEX_DISTAL_FB = 53,
    XR_BODY_JOINT_RIGHT_HAND_INDEX_TIP_FB = 54,
    XR_BODY_JOINT_RIGHT_HAND_MIDDLE_METACARPAL_FB = 55,
    XR_BODY_JOINT_RIGHT_HAND_MIDDLE_PROXIMAL_FB = 56,
    XR_BODY_JOINT_RIGHT_HAND_MIDDLE_INTERMEDIATE_FB = 57,
    XR_BODY_JOINT_RIGHT_HAND_MIDDLE_DISTAL_FB = 58,
    XR_BODY_JOINT_RIGHT_HAND_MIDDLE_TIP_FB = 59,
    XR_BODY_JOINT_RIGHT_HAND_RING_METACARPAL_FB = 60,
    XR_BODY_JOINT_RIGHT_HAND_RING_PROXIMAL_FB = 61,
    XR_BODY_JOINT_RIGHT_HAND_RING_INTERMEDIATE_FB = 62,
    XR_BODY_JOINT_RIGHT_HAND_RING_DISTAL_FB = 63,
    XR_BODY_JOINT_RIGHT_HAND_RING_TIP_FB = 64,
    XR_BODY_JOINT_RIGHT_HAND_LITTLE_METACARPAL_FB = 65,
    XR_BODY_JOINT_RIGHT_HAND_LITTLE_PROXIMAL_FB = 66,
    XR_BODY_JOINT_RIGHT_HAND_LITTLE_INTERMEDIATE_FB = 67,
    XR_BODY_JOINT_RIGHT_HAND_LITTLE_DISTAL_FB = 68,
    XR_BODY_JOINT_RIGHT_HAND_LITTLE_TIP_FB = 69,
    XR_BODY_JOINT_COUNT_FB = 70,
    XR_BODY_JOINT_FB_MAX_ENUM = 0x7fffffff,
} XrBodyJointFB;

typedef enum XrBodyJointSetFB
{
    XR_BODY_JOINT_SET_DEFAULT_FB = 0,
    XR_BODY_JOINT_SET_FB_MAX_ENUM = 0x7fffffff,
} XrBodyJointSetFB;

typedef enum XrColorSpaceFB
{
    XR_COLOR_SPACE_UNMANAGED_FB = 0,
    XR_COLOR_SPACE_REC2020_FB = 1,
    XR_COLOR_SPACE_REC709_FB = 2,
    XR_COLOR_SPACE_RIFT_CV1_FB = 3,
    XR_COLOR_SPACE_RIFT_S_FB = 4,
    XR_COLOR_SPACE_QUEST_FB = 5,
    XR_COLOR_SPACE_P3_FB = 6,
    XR_COLOR_SPACE_ADOBE_RGB_FB = 7,
    XR_COLOR_SPACE_FB_MAX_ENUM = 0x7fffffff,
} XrColorSpaceFB;

typedef enum XrCompareOpFB
{
    XR_COMPARE_OP_NEVER_FB = 0,
    XR_COMPARE_OP_LESS_FB = 1,
    XR_COMPARE_OP_EQUAL_FB = 2,
    XR_COMPARE_OP_LESS_OR_EQUAL_FB = 3,
    XR_COMPARE_OP_GREATER_FB = 4,
    XR_COMPARE_OP_NOT_EQUAL_FB = 5,
    XR_COMPARE_OP_GREATER_OR_EQUAL_FB = 6,
    XR_COMPARE_OP_ALWAYS_FB = 7,
    XR_COMPARE_OP_FB_MAX_ENUM = 0x7fffffff,
} XrCompareOpFB;

typedef enum XrEnvironmentBlendMode
{
    XR_ENVIRONMENT_BLEND_MODE_OPAQUE = 1,
    XR_ENVIRONMENT_BLEND_MODE_ADDITIVE = 2,
    XR_ENVIRONMENT_BLEND_MODE_ALPHA_BLEND = 3,
    XR_ENVIRONMENT_BLEND_MODE_MAX_ENUM = 0x7fffffff,
} XrEnvironmentBlendMode;

typedef enum XrEnvironmentDepthProviderCreateFlagBitsMETA
{
    XR_ENVIRONMENT_DEPTH_PROVIDER_CREATE_FLAG_BITS_META_MAX_ENUM = 0x7fffffff,
} XrEnvironmentDepthProviderCreateFlagBitsMETA;

typedef enum XrEnvironmentDepthSwapchainCreateFlagBitsMETA
{
    XR_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_FLAG_BITS_META_MAX_ENUM = 0x7fffffff,
} XrEnvironmentDepthSwapchainCreateFlagBitsMETA;

typedef enum XrExternalCameraAttachedToDeviceOCULUS
{
    XR_EXTERNAL_CAMERA_ATTACHED_TO_DEVICE_NONE_OCULUS = 0,
    XR_EXTERNAL_CAMERA_ATTACHED_TO_DEVICE_HMD_OCULUS = 1,
    XR_EXTERNAL_CAMERA_ATTACHED_TO_DEVICE_LTOUCH_OCULUS = 2,
    XR_EXTERNAL_CAMERA_ATTACHED_TO_DEVICE_RTOUCH_OCULUS = 3,
    XR_EXTERNAL_CAMERA_ATTACHED_TO_DEVICE_OCULUS_MAX_ENUM = 0x7fffffff,
} XrExternalCameraAttachedToDeviceOCULUS;

typedef enum XrEyeCalibrationStatusML
{
    XR_EYE_CALIBRATION_STATUS_UNKNOWN_ML = 0,
    XR_EYE_CALIBRATION_STATUS_NONE_ML = 1,
    XR_EYE_CALIBRATION_STATUS_COARSE_ML = 2,
    XR_EYE_CALIBRATION_STATUS_FINE_ML = 3,
    XR_EYE_CALIBRATION_STATUS_ML_MAX_ENUM = 0x7fffffff,
} XrEyeCalibrationStatusML;

typedef enum XrEyeExpressionHTC
{
    XR_EYE_EXPRESSION_LEFT_BLINK_HTC = 0,
    XR_EYE_EXPRESSION_LEFT_WIDE_HTC = 1,
    XR_EYE_EXPRESSION_RIGHT_BLINK_HTC = 2,
    XR_EYE_EXPRESSION_RIGHT_WIDE_HTC = 3,
    XR_EYE_EXPRESSION_LEFT_SQUEEZE_HTC = 4,
    XR_EYE_EXPRESSION_RIGHT_SQUEEZE_HTC = 5,
    XR_EYE_EXPRESSION_LEFT_DOWN_HTC = 6,
    XR_EYE_EXPRESSION_RIGHT_DOWN_HTC = 7,
    XR_EYE_EXPRESSION_LEFT_OUT_HTC = 8,
    XR_EYE_EXPRESSION_RIGHT_IN_HTC = 9,
    XR_EYE_EXPRESSION_LEFT_IN_HTC = 10,
    XR_EYE_EXPRESSION_RIGHT_OUT_HTC = 11,
    XR_EYE_EXPRESSION_LEFT_UP_HTC = 12,
    XR_EYE_EXPRESSION_RIGHT_UP_HTC = 13,
    XR_EYE_EXPRESSION_HTC_MAX_ENUM = 0x7fffffff,
} XrEyeExpressionHTC;

typedef enum XrEyePositionFB
{
    XR_EYE_POSITION_LEFT_FB = 0,
    XR_EYE_POSITION_RIGHT_FB = 1,
    XR_EYE_POSITION_COUNT_FB = 2,
    XR_EYE_POSITION_FB_MAX_ENUM = 0x7fffffff,
} XrEyePositionFB;

typedef enum XrEyeVisibility
{
    XR_EYE_VISIBILITY_BOTH = 0,
    XR_EYE_VISIBILITY_LEFT = 1,
    XR_EYE_VISIBILITY_RIGHT = 2,
    XR_EYE_VISIBILITY_MAX_ENUM = 0x7fffffff,
} XrEyeVisibility;

typedef enum XrFaceConfidence2FB
{
    XR_FACE_CONFIDENCE2_LOWER_FACE_FB = 0,
    XR_FACE_CONFIDENCE2_UPPER_FACE_FB = 1,
    XR_FACE_CONFIDENCE2_COUNT_FB = 2,
    XR_FACE_CONFIDENCE_2FB_MAX_ENUM = 0x7fffffff,
} XrFaceConfidence2FB;

typedef enum XrFaceConfidenceFB
{
    XR_FACE_CONFIDENCE_LOWER_FACE_FB = 0,
    XR_FACE_CONFIDENCE_UPPER_FACE_FB = 1,
    XR_FACE_CONFIDENCE_COUNT_FB = 2,
    XR_FACE_CONFIDENCE_FB_MAX_ENUM = 0x7fffffff,
} XrFaceConfidenceFB;

typedef enum XrFaceExpression2FB
{
    XR_FACE_EXPRESSION2_BROW_LOWERER_L_FB = 0,
    XR_FACE_EXPRESSION2_BROW_LOWERER_R_FB = 1,
    XR_FACE_EXPRESSION2_CHEEK_PUFF_L_FB = 2,
    XR_FACE_EXPRESSION2_CHEEK_PUFF_R_FB = 3,
    XR_FACE_EXPRESSION2_CHEEK_RAISER_L_FB = 4,
    XR_FACE_EXPRESSION2_CHEEK_RAISER_R_FB = 5,
    XR_FACE_EXPRESSION2_CHEEK_SUCK_L_FB = 6,
    XR_FACE_EXPRESSION2_CHEEK_SUCK_R_FB = 7,
    XR_FACE_EXPRESSION2_CHIN_RAISER_B_FB = 8,
    XR_FACE_EXPRESSION2_CHIN_RAISER_T_FB = 9,
    XR_FACE_EXPRESSION2_DIMPLER_L_FB = 10,
    XR_FACE_EXPRESSION2_DIMPLER_R_FB = 11,
    XR_FACE_EXPRESSION2_EYES_CLOSED_L_FB = 12,
    XR_FACE_EXPRESSION2_EYES_CLOSED_R_FB = 13,
    XR_FACE_EXPRESSION2_EYES_LOOK_DOWN_L_FB = 14,
    XR_FACE_EXPRESSION2_EYES_LOOK_DOWN_R_FB = 15,
    XR_FACE_EXPRESSION2_EYES_LOOK_LEFT_L_FB = 16,
    XR_FACE_EXPRESSION2_EYES_LOOK_LEFT_R_FB = 17,
    XR_FACE_EXPRESSION2_EYES_LOOK_RIGHT_L_FB = 18,
    XR_FACE_EXPRESSION2_EYES_LOOK_RIGHT_R_FB = 19,
    XR_FACE_EXPRESSION2_EYES_LOOK_UP_L_FB = 20,
    XR_FACE_EXPRESSION2_EYES_LOOK_UP_R_FB = 21,
    XR_FACE_EXPRESSION2_INNER_BROW_RAISER_L_FB = 22,
    XR_FACE_EXPRESSION2_INNER_BROW_RAISER_R_FB = 23,
    XR_FACE_EXPRESSION2_JAW_DROP_FB = 24,
    XR_FACE_EXPRESSION2_JAW_SIDEWAYS_LEFT_FB = 25,
    XR_FACE_EXPRESSION2_JAW_SIDEWAYS_RIGHT_FB = 26,
    XR_FACE_EXPRESSION2_JAW_THRUST_FB = 27,
    XR_FACE_EXPRESSION2_LID_TIGHTENER_L_FB = 28,
    XR_FACE_EXPRESSION2_LID_TIGHTENER_R_FB = 29,
    XR_FACE_EXPRESSION2_LIP_CORNER_DEPRESSOR_L_FB = 30,
    XR_FACE_EXPRESSION2_LIP_CORNER_DEPRESSOR_R_FB = 31,
    XR_FACE_EXPRESSION2_LIP_CORNER_PULLER_L_FB = 32,
    XR_FACE_EXPRESSION2_LIP_CORNER_PULLER_R_FB = 33,
    XR_FACE_EXPRESSION2_LIP_FUNNELER_LB_FB = 34,
    XR_FACE_EXPRESSION2_LIP_FUNNELER_LT_FB = 35,
    XR_FACE_EXPRESSION2_LIP_FUNNELER_RB_FB = 36,
    XR_FACE_EXPRESSION2_LIP_FUNNELER_RT_FB = 37,
    XR_FACE_EXPRESSION2_LIP_PRESSOR_L_FB = 38,
    XR_FACE_EXPRESSION2_LIP_PRESSOR_R_FB = 39,
    XR_FACE_EXPRESSION2_LIP_PUCKER_L_FB = 40,
    XR_FACE_EXPRESSION2_LIP_PUCKER_R_FB = 41,
    XR_FACE_EXPRESSION2_LIP_STRETCHER_L_FB = 42,
    XR_FACE_EXPRESSION2_LIP_STRETCHER_R_FB = 43,
    XR_FACE_EXPRESSION2_LIP_SUCK_LB_FB = 44,
    XR_FACE_EXPRESSION2_LIP_SUCK_LT_FB = 45,
    XR_FACE_EXPRESSION2_LIP_SUCK_RB_FB = 46,
    XR_FACE_EXPRESSION2_LIP_SUCK_RT_FB = 47,
    XR_FACE_EXPRESSION2_LIP_TIGHTENER_L_FB = 48,
    XR_FACE_EXPRESSION2_LIP_TIGHTENER_R_FB = 49,
    XR_FACE_EXPRESSION2_LIPS_TOWARD_FB = 50,
    XR_FACE_EXPRESSION2_LOWER_LIP_DEPRESSOR_L_FB = 51,
    XR_FACE_EXPRESSION2_LOWER_LIP_DEPRESSOR_R_FB = 52,
    XR_FACE_EXPRESSION2_MOUTH_LEFT_FB = 53,
    XR_FACE_EXPRESSION2_MOUTH_RIGHT_FB = 54,
    XR_FACE_EXPRESSION2_NOSE_WRINKLER_L_FB = 55,
    XR_FACE_EXPRESSION2_NOSE_WRINKLER_R_FB = 56,
    XR_FACE_EXPRESSION2_OUTER_BROW_RAISER_L_FB = 57,
    XR_FACE_EXPRESSION2_OUTER_BROW_RAISER_R_FB = 58,
    XR_FACE_EXPRESSION2_UPPER_LID_RAISER_L_FB = 59,
    XR_FACE_EXPRESSION2_UPPER_LID_RAISER_R_FB = 60,
    XR_FACE_EXPRESSION2_UPPER_LIP_RAISER_L_FB = 61,
    XR_FACE_EXPRESSION2_UPPER_LIP_RAISER_R_FB = 62,
    XR_FACE_EXPRESSION2_TONGUE_TIP_INTERDENTAL_FB = 63,
    XR_FACE_EXPRESSION2_TONGUE_TIP_ALVEOLAR_FB = 64,
    XR_FACE_EXPRESSION2_TONGUE_FRONT_DORSAL_PALATE_FB = 65,
    XR_FACE_EXPRESSION2_TONGUE_MID_DORSAL_PALATE_FB = 66,
    XR_FACE_EXPRESSION2_TONGUE_BACK_DORSAL_VELAR_FB = 67,
    XR_FACE_EXPRESSION2_TONGUE_OUT_FB = 68,
    XR_FACE_EXPRESSION2_TONGUE_RETREAT_FB = 69,
    XR_FACE_EXPRESSION2_COUNT_FB = 70,
    XR_FACE_EXPRESSION_2FB_MAX_ENUM = 0x7fffffff,
} XrFaceExpression2FB;

typedef enum XrFaceExpressionFB
{
    XR_FACE_EXPRESSION_BROW_LOWERER_L_FB = 0,
    XR_FACE_EXPRESSION_BROW_LOWERER_R_FB = 1,
    XR_FACE_EXPRESSION_CHEEK_PUFF_L_FB = 2,
    XR_FACE_EXPRESSION_CHEEK_PUFF_R_FB = 3,
    XR_FACE_EXPRESSION_CHEEK_RAISER_L_FB = 4,
    XR_FACE_EXPRESSION_CHEEK_RAISER_R_FB = 5,
    XR_FACE_EXPRESSION_CHEEK_SUCK_L_FB = 6,
    XR_FACE_EXPRESSION_CHEEK_SUCK_R_FB = 7,
    XR_FACE_EXPRESSION_CHIN_RAISER_B_FB = 8,
    XR_FACE_EXPRESSION_CHIN_RAISER_T_FB = 9,
    XR_FACE_EXPRESSION_DIMPLER_L_FB = 10,
    XR_FACE_EXPRESSION_DIMPLER_R_FB = 11,
    XR_FACE_EXPRESSION_EYES_CLOSED_L_FB = 12,
    XR_FACE_EXPRESSION_EYES_CLOSED_R_FB = 13,
    XR_FACE_EXPRESSION_EYES_LOOK_DOWN_L_FB = 14,
    XR_FACE_EXPRESSION_EYES_LOOK_DOWN_R_FB = 15,
    XR_FACE_EXPRESSION_EYES_LOOK_LEFT_L_FB = 16,
    XR_FACE_EXPRESSION_EYES_LOOK_LEFT_R_FB = 17,
    XR_FACE_EXPRESSION_EYES_LOOK_RIGHT_L_FB = 18,
    XR_FACE_EXPRESSION_EYES_LOOK_RIGHT_R_FB = 19,
    XR_FACE_EXPRESSION_EYES_LOOK_UP_L_FB = 20,
    XR_FACE_EXPRESSION_EYES_LOOK_UP_R_FB = 21,
    XR_FACE_EXPRESSION_INNER_BROW_RAISER_L_FB = 22,
    XR_FACE_EXPRESSION_INNER_BROW_RAISER_R_FB = 23,
    XR_FACE_EXPRESSION_JAW_DROP_FB = 24,
    XR_FACE_EXPRESSION_JAW_SIDEWAYS_LEFT_FB = 25,
    XR_FACE_EXPRESSION_JAW_SIDEWAYS_RIGHT_FB = 26,
    XR_FACE_EXPRESSION_JAW_THRUST_FB = 27,
    XR_FACE_EXPRESSION_LID_TIGHTENER_L_FB = 28,
    XR_FACE_EXPRESSION_LID_TIGHTENER_R_FB = 29,
    XR_FACE_EXPRESSION_LIP_CORNER_DEPRESSOR_L_FB = 30,
    XR_FACE_EXPRESSION_LIP_CORNER_DEPRESSOR_R_FB = 31,
    XR_FACE_EXPRESSION_LIP_CORNER_PULLER_L_FB = 32,
    XR_FACE_EXPRESSION_LIP_CORNER_PULLER_R_FB = 33,
    XR_FACE_EXPRESSION_LIP_FUNNELER_LB_FB = 34,
    XR_FACE_EXPRESSION_LIP_FUNNELER_LT_FB = 35,
    XR_FACE_EXPRESSION_LIP_FUNNELER_RB_FB = 36,
    XR_FACE_EXPRESSION_LIP_FUNNELER_RT_FB = 37,
    XR_FACE_EXPRESSION_LIP_PRESSOR_L_FB = 38,
    XR_FACE_EXPRESSION_LIP_PRESSOR_R_FB = 39,
    XR_FACE_EXPRESSION_LIP_PUCKER_L_FB = 40,
    XR_FACE_EXPRESSION_LIP_PUCKER_R_FB = 41,
    XR_FACE_EXPRESSION_LIP_STRETCHER_L_FB = 42,
    XR_FACE_EXPRESSION_LIP_STRETCHER_R_FB = 43,
    XR_FACE_EXPRESSION_LIP_SUCK_LB_FB = 44,
    XR_FACE_EXPRESSION_LIP_SUCK_LT_FB = 45,
    XR_FACE_EXPRESSION_LIP_SUCK_RB_FB = 46,
    XR_FACE_EXPRESSION_LIP_SUCK_RT_FB = 47,
    XR_FACE_EXPRESSION_LIP_TIGHTENER_L_FB = 48,
    XR_FACE_EXPRESSION_LIP_TIGHTENER_R_FB = 49,
    XR_FACE_EXPRESSION_LIPS_TOWARD_FB = 50,
    XR_FACE_EXPRESSION_LOWER_LIP_DEPRESSOR_L_FB = 51,
    XR_FACE_EXPRESSION_LOWER_LIP_DEPRESSOR_R_FB = 52,
    XR_FACE_EXPRESSION_MOUTH_LEFT_FB = 53,
    XR_FACE_EXPRESSION_MOUTH_RIGHT_FB = 54,
    XR_FACE_EXPRESSION_NOSE_WRINKLER_L_FB = 55,
    XR_FACE_EXPRESSION_NOSE_WRINKLER_R_FB = 56,
    XR_FACE_EXPRESSION_OUTER_BROW_RAISER_L_FB = 57,
    XR_FACE_EXPRESSION_OUTER_BROW_RAISER_R_FB = 58,
    XR_FACE_EXPRESSION_UPPER_LID_RAISER_L_FB = 59,
    XR_FACE_EXPRESSION_UPPER_LID_RAISER_R_FB = 60,
    XR_FACE_EXPRESSION_UPPER_LIP_RAISER_L_FB = 61,
    XR_FACE_EXPRESSION_UPPER_LIP_RAISER_R_FB = 62,
    XR_FACE_EXPRESSION_COUNT_FB = 63,
    XR_FACE_EXPRESSION_FB_MAX_ENUM = 0x7fffffff,
} XrFaceExpressionFB;

typedef enum XrFaceExpressionSet2FB
{
    XR_FACE_EXPRESSION_SET2_DEFAULT_FB = 0,
    XR_FACE_EXPRESSION_SET_2FB_MAX_ENUM = 0x7fffffff,
} XrFaceExpressionSet2FB;

typedef enum XrFaceExpressionSetFB
{
    XR_FACE_EXPRESSION_SET_DEFAULT_FB = 0,
    XR_FACE_EXPRESSION_SET_FB_MAX_ENUM = 0x7fffffff,
} XrFaceExpressionSetFB;

typedef enum XrFaceTrackingDataSource2FB
{
    XR_FACE_TRACKING_DATA_SOURCE2_VISUAL_FB = 0,
    XR_FACE_TRACKING_DATA_SOURCE2_AUDIO_FB = 1,
    XR_FACE_TRACKING_DATA_SOURCE_2FB_MAX_ENUM = 0x7fffffff,
} XrFaceTrackingDataSource2FB;

typedef enum XrFacialTrackingTypeHTC
{
    XR_FACIAL_TRACKING_TYPE_EYE_DEFAULT_HTC = 1,
    XR_FACIAL_TRACKING_TYPE_LIP_DEFAULT_HTC = 2,
    XR_FACIAL_TRACKING_TYPE_HTC_MAX_ENUM = 0x7fffffff,
} XrFacialTrackingTypeHTC;

typedef enum XrForceFeedbackCurlLocationMNDX
{
    XR_FORCE_FEEDBACK_CURL_LOCATION_THUMB_CURL_MNDX = 0,
    XR_FORCE_FEEDBACK_CURL_LOCATION_INDEX_CURL_MNDX = 1,
    XR_FORCE_FEEDBACK_CURL_LOCATION_MIDDLE_CURL_MNDX = 2,
    XR_FORCE_FEEDBACK_CURL_LOCATION_RING_CURL_MNDX = 3,
    XR_FORCE_FEEDBACK_CURL_LOCATION_LITTLE_CURL_MNDX = 4,
    XR_FORCE_FEEDBACK_CURL_LOCATION_MNDX_MAX_ENUM = 0x7fffffff,
} XrForceFeedbackCurlLocationMNDX;

typedef enum XrFormFactor
{
    XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY = 1,
    XR_FORM_FACTOR_HANDHELD_DISPLAY = 2,
    XR_FORM_FACTOR_MAX_ENUM = 0x7fffffff,
} XrFormFactor;

typedef enum XrFoveationDynamicFB
{
    XR_FOVEATION_DYNAMIC_DISABLED_FB = 0,
    XR_FOVEATION_DYNAMIC_LEVEL_ENABLED_FB = 1,
    XR_FOVEATION_DYNAMIC_FB_MAX_ENUM = 0x7fffffff,
} XrFoveationDynamicFB;

typedef enum XrFoveationEyeTrackedProfileCreateFlagBitsMETA
{
    XR_FOVEATION_EYE_TRACKED_PROFILE_CREATE_FLAG_BITS_META_MAX_ENUM = 0x7fffffff,
} XrFoveationEyeTrackedProfileCreateFlagBitsMETA;

typedef enum XrFoveationEyeTrackedStateFlagBitsMETA
{
    XR_FOVEATION_EYE_TRACKED_STATE_VALID_BIT_META = 0x00000001,
    XR_FOVEATION_EYE_TRACKED_STATE_FLAG_BITS_META_MAX_ENUM = 0x7fffffff,
} XrFoveationEyeTrackedStateFlagBitsMETA;

typedef enum XrFoveationLevelFB
{
    XR_FOVEATION_LEVEL_NONE_FB = 0,
    XR_FOVEATION_LEVEL_LOW_FB = 1,
    XR_FOVEATION_LEVEL_MEDIUM_FB = 2,
    XR_FOVEATION_LEVEL_HIGH_FB = 3,
    XR_FOVEATION_LEVEL_FB_MAX_ENUM = 0x7fffffff,
} XrFoveationLevelFB;

typedef enum XrFoveationLevelHTC
{
    XR_FOVEATION_LEVEL_NONE_HTC = 0,
    XR_FOVEATION_LEVEL_LOW_HTC = 1,
    XR_FOVEATION_LEVEL_MEDIUM_HTC = 2,
    XR_FOVEATION_LEVEL_HIGH_HTC = 3,
    XR_FOVEATION_LEVEL_HTC_MAX_ENUM = 0x7fffffff,
} XrFoveationLevelHTC;

typedef enum XrFoveationModeHTC
{
    XR_FOVEATION_MODE_DISABLE_HTC = 0,
    XR_FOVEATION_MODE_FIXED_HTC = 1,
    XR_FOVEATION_MODE_DYNAMIC_HTC = 2,
    XR_FOVEATION_MODE_CUSTOM_HTC = 3,
    XR_FOVEATION_MODE_HTC_MAX_ENUM = 0x7fffffff,
} XrFoveationModeHTC;

typedef enum XrFutureStateEXT
{
    XR_FUTURE_STATE_PENDING_EXT = 1,
    XR_FUTURE_STATE_READY_EXT = 2,
    XR_FUTURE_STATE_EXT_MAX_ENUM = 0x7fffffff,
} XrFutureStateEXT;

typedef enum XrHandEXT
{
    XR_HAND_LEFT_EXT = 1,
    XR_HAND_RIGHT_EXT = 2,
    XR_HAND_EXT_MAX_ENUM = 0x7fffffff,
} XrHandEXT;

typedef enum XrHandForearmJointULTRALEAP
{
    XR_HAND_FOREARM_JOINT_PALM_ULTRALEAP = 0,
    XR_HAND_FOREARM_JOINT_WRIST_ULTRALEAP = 1,
    XR_HAND_FOREARM_JOINT_THUMB_METACARPAL_ULTRALEAP = 2,
    XR_HAND_FOREARM_JOINT_THUMB_PROXIMAL_ULTRALEAP = 3,
    XR_HAND_FOREARM_JOINT_THUMB_DISTAL_ULTRALEAP = 4,
    XR_HAND_FOREARM_JOINT_THUMB_TIP_ULTRALEAP = 5,
    XR_HAND_FOREARM_JOINT_INDEX_METACARPAL_ULTRALEAP = 6,
    XR_HAND_FOREARM_JOINT_INDEX_PROXIMAL_ULTRALEAP = 7,
    XR_HAND_FOREARM_JOINT_INDEX_INTERMEDIATE_ULTRALEAP = 8,
    XR_HAND_FOREARM_JOINT_INDEX_DISTAL_ULTRALEAP = 9,
    XR_HAND_FOREARM_JOINT_INDEX_TIP_ULTRALEAP = 10,
    XR_HAND_FOREARM_JOINT_MIDDLE_METACARPAL_ULTRALEAP = 11,
    XR_HAND_FOREARM_JOINT_MIDDLE_PROXIMAL_ULTRALEAP = 12,
    XR_HAND_FOREARM_JOINT_MIDDLE_INTERMEDIATE_ULTRALEAP = 13,
    XR_HAND_FOREARM_JOINT_MIDDLE_DISTAL_ULTRALEAP = 14,
    XR_HAND_FOREARM_JOINT_MIDDLE_TIP_ULTRALEAP = 15,
    XR_HAND_FOREARM_JOINT_RING_METACARPAL_ULTRALEAP = 16,
    XR_HAND_FOREARM_JOINT_RING_PROXIMAL_ULTRALEAP = 17,
    XR_HAND_FOREARM_JOINT_RING_INTERMEDIATE_ULTRALEAP = 18,
    XR_HAND_FOREARM_JOINT_RING_DISTAL_ULTRALEAP = 19,
    XR_HAND_FOREARM_JOINT_RING_TIP_ULTRALEAP = 20,
    XR_HAND_FOREARM_JOINT_LITTLE_METACARPAL_ULTRALEAP = 21,
    XR_HAND_FOREARM_JOINT_LITTLE_PROXIMAL_ULTRALEAP = 22,
    XR_HAND_FOREARM_JOINT_LITTLE_INTERMEDIATE_ULTRALEAP = 23,
    XR_HAND_FOREARM_JOINT_LITTLE_DISTAL_ULTRALEAP = 24,
    XR_HAND_FOREARM_JOINT_LITTLE_TIP_ULTRALEAP = 25,
    XR_HAND_FOREARM_JOINT_ELBOW_ULTRALEAP = 26,
    XR_HAND_FOREARM_JOINT_ULTRALEAP_MAX_ENUM = 0x7fffffff,
} XrHandForearmJointULTRALEAP;

typedef enum XrHandJointEXT
{
    XR_HAND_JOINT_PALM_EXT = 0,
    XR_HAND_JOINT_WRIST_EXT = 1,
    XR_HAND_JOINT_THUMB_METACARPAL_EXT = 2,
    XR_HAND_JOINT_THUMB_PROXIMAL_EXT = 3,
    XR_HAND_JOINT_THUMB_DISTAL_EXT = 4,
    XR_HAND_JOINT_THUMB_TIP_EXT = 5,
    XR_HAND_JOINT_INDEX_METACARPAL_EXT = 6,
    XR_HAND_JOINT_INDEX_PROXIMAL_EXT = 7,
    XR_HAND_JOINT_INDEX_INTERMEDIATE_EXT = 8,
    XR_HAND_JOINT_INDEX_DISTAL_EXT = 9,
    XR_HAND_JOINT_INDEX_TIP_EXT = 10,
    XR_HAND_JOINT_MIDDLE_METACARPAL_EXT = 11,
    XR_HAND_JOINT_MIDDLE_PROXIMAL_EXT = 12,
    XR_HAND_JOINT_MIDDLE_INTERMEDIATE_EXT = 13,
    XR_HAND_JOINT_MIDDLE_DISTAL_EXT = 14,
    XR_HAND_JOINT_MIDDLE_TIP_EXT = 15,
    XR_HAND_JOINT_RING_METACARPAL_EXT = 16,
    XR_HAND_JOINT_RING_PROXIMAL_EXT = 17,
    XR_HAND_JOINT_RING_INTERMEDIATE_EXT = 18,
    XR_HAND_JOINT_RING_DISTAL_EXT = 19,
    XR_HAND_JOINT_RING_TIP_EXT = 20,
    XR_HAND_JOINT_LITTLE_METACARPAL_EXT = 21,
    XR_HAND_JOINT_LITTLE_PROXIMAL_EXT = 22,
    XR_HAND_JOINT_LITTLE_INTERMEDIATE_EXT = 23,
    XR_HAND_JOINT_LITTLE_DISTAL_EXT = 24,
    XR_HAND_JOINT_LITTLE_TIP_EXT = 25,
    XR_HAND_JOINT_EXT_MAX_ENUM = 0x7fffffff,
} XrHandJointEXT;

typedef enum XrHandJointSetEXT
{
    XR_HAND_JOINT_SET_DEFAULT_EXT = 0,
    XR_HAND_JOINT_SET_HAND_WITH_FOREARM_ULTRALEAP = 1000149000,
    XR_HAND_JOINT_SET_EXT_MAX_ENUM = 0x7fffffff,
} XrHandJointSetEXT;

typedef enum XrHandJointsMotionRangeEXT
{
    XR_HAND_JOINTS_MOTION_RANGE_UNOBSTRUCTED_EXT = 1,
    XR_HAND_JOINTS_MOTION_RANGE_CONFORMING_TO_CONTROLLER_EXT = 2,
    XR_HAND_JOINTS_MOTION_RANGE_EXT_MAX_ENUM = 0x7fffffff,
} XrHandJointsMotionRangeEXT;

typedef enum XrHandPoseTypeMSFT
{
    XR_HAND_POSE_TYPE_TRACKED_MSFT = 0,
    XR_HAND_POSE_TYPE_REFERENCE_OPEN_PALM_MSFT = 1,
    XR_HAND_POSE_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrHandPoseTypeMSFT;

typedef enum XrHandTrackingDataSourceEXT
{
    XR_HAND_TRACKING_DATA_SOURCE_UNOBSTRUCTED_EXT = 1,
    XR_HAND_TRACKING_DATA_SOURCE_CONTROLLER_EXT = 2,
    XR_HAND_TRACKING_DATA_SOURCE_EXT_MAX_ENUM = 0x7fffffff,
} XrHandTrackingDataSourceEXT;

typedef enum XrHeadsetFitStatusML
{
    XR_HEADSET_FIT_STATUS_UNKNOWN_ML = 0,
    XR_HEADSET_FIT_STATUS_NOT_WORN_ML = 1,
    XR_HEADSET_FIT_STATUS_GOOD_FIT_ML = 2,
    XR_HEADSET_FIT_STATUS_BAD_FIT_ML = 3,
    XR_HEADSET_FIT_STATUS_ML_MAX_ENUM = 0x7fffffff,
} XrHeadsetFitStatusML;

typedef enum XrLipExpressionHTC
{
    XR_LIP_EXPRESSION_JAW_RIGHT_HTC = 0,
    XR_LIP_EXPRESSION_JAW_LEFT_HTC = 1,
    XR_LIP_EXPRESSION_JAW_FORWARD_HTC = 2,
    XR_LIP_EXPRESSION_JAW_OPEN_HTC = 3,
    XR_LIP_EXPRESSION_MOUTH_APE_SHAPE_HTC = 4,
    XR_LIP_EXPRESSION_MOUTH_UPPER_RIGHT_HTC = 5,
    XR_LIP_EXPRESSION_MOUTH_UPPER_LEFT_HTC = 6,
    XR_LIP_EXPRESSION_MOUTH_LOWER_RIGHT_HTC = 7,
    XR_LIP_EXPRESSION_MOUTH_LOWER_LEFT_HTC = 8,
    XR_LIP_EXPRESSION_MOUTH_UPPER_OVERTURN_HTC = 9,
    XR_LIP_EXPRESSION_MOUTH_LOWER_OVERTURN_HTC = 10,
    XR_LIP_EXPRESSION_MOUTH_POUT_HTC = 11,
    XR_LIP_EXPRESSION_MOUTH_SMILE_RIGHT_HTC = 12,
    XR_LIP_EXPRESSION_MOUTH_SMILE_LEFT_HTC = 13,
    XR_LIP_EXPRESSION_MOUTH_SAD_RIGHT_HTC = 14,
    XR_LIP_EXPRESSION_MOUTH_SAD_LEFT_HTC = 15,
    XR_LIP_EXPRESSION_CHEEK_PUFF_RIGHT_HTC = 16,
    XR_LIP_EXPRESSION_CHEEK_PUFF_LEFT_HTC = 17,
    XR_LIP_EXPRESSION_CHEEK_SUCK_HTC = 18,
    XR_LIP_EXPRESSION_MOUTH_UPPER_UPRIGHT_HTC = 19,
    XR_LIP_EXPRESSION_MOUTH_UPPER_UPLEFT_HTC = 20,
    XR_LIP_EXPRESSION_MOUTH_LOWER_DOWNRIGHT_HTC = 21,
    XR_LIP_EXPRESSION_MOUTH_LOWER_DOWNLEFT_HTC = 22,
    XR_LIP_EXPRESSION_MOUTH_UPPER_INSIDE_HTC = 23,
    XR_LIP_EXPRESSION_MOUTH_LOWER_INSIDE_HTC = 24,
    XR_LIP_EXPRESSION_MOUTH_LOWER_OVERLAY_HTC = 25,
    XR_LIP_EXPRESSION_TONGUE_LONGSTEP1_HTC = 26,
    XR_LIP_EXPRESSION_TONGUE_LEFT_HTC = 27,
    XR_LIP_EXPRESSION_TONGUE_RIGHT_HTC = 28,
    XR_LIP_EXPRESSION_TONGUE_UP_HTC = 29,
    XR_LIP_EXPRESSION_TONGUE_DOWN_HTC = 30,
    XR_LIP_EXPRESSION_TONGUE_ROLL_HTC = 31,
    XR_LIP_EXPRESSION_TONGUE_LONGSTEP2_HTC = 32,
    XR_LIP_EXPRESSION_TONGUE_UPRIGHT_MORPH_HTC = 33,
    XR_LIP_EXPRESSION_TONGUE_UPLEFT_MORPH_HTC = 34,
    XR_LIP_EXPRESSION_TONGUE_DOWNRIGHT_MORPH_HTC = 35,
    XR_LIP_EXPRESSION_TONGUE_DOWNLEFT_MORPH_HTC = 36,
    XR_LIP_EXPRESSION_HTC_MAX_ENUM = 0x7fffffff,
} XrLipExpressionHTC;

typedef enum XrLoaderInterfaceStructs
{
    XR_LOADER_INTERFACE_STRUCT_UNINTIALIZED = 0,
    XR_LOADER_INTERFACE_STRUCT_LOADER_INFO = 1,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_REQUEST = 2,
    XR_LOADER_INTERFACE_STRUCT_RUNTIME_REQUEST = 3,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_CREATE_INFO = 4,
    XR_LOADER_INTERFACE_STRUCT_API_LAYER_NEXT_INFO = 5,
    XR_LOADER_INTERFACE_STRUCTS_MAX_ENUM = 0x7fffffff,
} XrLoaderInterfaceStructs;

typedef enum XrLocalDimmingModeMETA
{
    XR_LOCAL_DIMMING_MODE_OFF_META = 0,
    XR_LOCAL_DIMMING_MODE_ON_META = 1,
    XR_LOCAL_DIMMING_MODE_META_MAX_ENUM = 0x7fffffff,
} XrLocalDimmingModeMETA;

typedef enum XrLocalizationMapConfidenceML
{
    XR_LOCALIZATION_MAP_CONFIDENCE_POOR_ML = 0,
    XR_LOCALIZATION_MAP_CONFIDENCE_FAIR_ML = 1,
    XR_LOCALIZATION_MAP_CONFIDENCE_GOOD_ML = 2,
    XR_LOCALIZATION_MAP_CONFIDENCE_EXCELLENT_ML = 3,
    XR_LOCALIZATION_MAP_CONFIDENCE_ML_MAX_ENUM = 0x7fffffff,
} XrLocalizationMapConfidenceML;

typedef enum XrLocalizationMapErrorFlagBitsML
{
    XR_LOCALIZATION_MAP_ERROR_UNKNOWN_BIT_ML = 0x00000001,
    XR_LOCALIZATION_MAP_ERROR_OUT_OF_MAPPED_AREA_BIT_ML = 0x00000002,
    XR_LOCALIZATION_MAP_ERROR_LOW_FEATURE_COUNT_BIT_ML = 0x00000004,
    XR_LOCALIZATION_MAP_ERROR_EXCESSIVE_MOTION_BIT_ML = 0x00000008,
    XR_LOCALIZATION_MAP_ERROR_LOW_LIGHT_BIT_ML = 0x00000010,
    XR_LOCALIZATION_MAP_ERROR_HEADPOSE_BIT_ML = 0x00000020,
    XR_LOCALIZATION_MAP_ERROR_FLAG_BITS_ML_MAX_ENUM = 0x7fffffff,
} XrLocalizationMapErrorFlagBitsML;

typedef enum XrLocalizationMapStateML
{
    XR_LOCALIZATION_MAP_STATE_NOT_LOCALIZED_ML = 0,
    XR_LOCALIZATION_MAP_STATE_LOCALIZED_ML = 1,
    XR_LOCALIZATION_MAP_STATE_LOCALIZATION_PENDING_ML = 2,
    XR_LOCALIZATION_MAP_STATE_LOCALIZATION_SLEEPING_BEFORE_RETRY_ML = 3,
    XR_LOCALIZATION_MAP_STATE_ML_MAX_ENUM = 0x7fffffff,
} XrLocalizationMapStateML;

typedef enum XrLocalizationMapTypeML
{
    XR_LOCALIZATION_MAP_TYPE_ON_DEVICE_ML = 0,
    XR_LOCALIZATION_MAP_TYPE_CLOUD_ML = 1,
    XR_LOCALIZATION_MAP_TYPE_ML_MAX_ENUM = 0x7fffffff,
} XrLocalizationMapTypeML;

typedef enum XrMarkerAprilTagDictML
{
    XR_MARKER_APRIL_TAG_DICT_16H5_ML = 0,
    XR_MARKER_APRIL_TAG_DICT_25H9_ML = 1,
    XR_MARKER_APRIL_TAG_DICT_36H10_ML = 2,
    XR_MARKER_APRIL_TAG_DICT_36H11_ML = 3,
    XR_MARKER_APRIL_TAG_DICT_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerAprilTagDictML;

typedef enum XrMarkerArucoDictML
{
    XR_MARKER_ARUCO_DICT_4X4_50_ML = 0,
    XR_MARKER_ARUCO_DICT_4X4_100_ML = 1,
    XR_MARKER_ARUCO_DICT_4X4_250_ML = 2,
    XR_MARKER_ARUCO_DICT_4X4_1000_ML = 3,
    XR_MARKER_ARUCO_DICT_5X5_50_ML = 4,
    XR_MARKER_ARUCO_DICT_5X5_100_ML = 5,
    XR_MARKER_ARUCO_DICT_5X5_250_ML = 6,
    XR_MARKER_ARUCO_DICT_5X5_1000_ML = 7,
    XR_MARKER_ARUCO_DICT_6X6_50_ML = 8,
    XR_MARKER_ARUCO_DICT_6X6_100_ML = 9,
    XR_MARKER_ARUCO_DICT_6X6_250_ML = 10,
    XR_MARKER_ARUCO_DICT_6X6_1000_ML = 11,
    XR_MARKER_ARUCO_DICT_7X7_50_ML = 12,
    XR_MARKER_ARUCO_DICT_7X7_100_ML = 13,
    XR_MARKER_ARUCO_DICT_7X7_250_ML = 14,
    XR_MARKER_ARUCO_DICT_7X7_1000_ML = 15,
    XR_MARKER_ARUCO_DICT_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerArucoDictML;

typedef enum XrMarkerDetectorCameraML
{
    XR_MARKER_DETECTOR_CAMERA_RGB_CAMERA_ML = 0,
    XR_MARKER_DETECTOR_CAMERA_WORLD_CAMERAS_ML = 1,
    XR_MARKER_DETECTOR_CAMERA_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorCameraML;

typedef enum XrMarkerDetectorCornerRefineMethodML
{
    XR_MARKER_DETECTOR_CORNER_REFINE_METHOD_NONE_ML = 0,
    XR_MARKER_DETECTOR_CORNER_REFINE_METHOD_SUBPIX_ML = 1,
    XR_MARKER_DETECTOR_CORNER_REFINE_METHOD_CONTOUR_ML = 2,
    XR_MARKER_DETECTOR_CORNER_REFINE_METHOD_APRIL_TAG_ML = 3,
    XR_MARKER_DETECTOR_CORNER_REFINE_METHOD_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorCornerRefineMethodML;

typedef enum XrMarkerDetectorFpsML
{
    XR_MARKER_DETECTOR_FPS_LOW_ML = 0,
    XR_MARKER_DETECTOR_FPS_MEDIUM_ML = 1,
    XR_MARKER_DETECTOR_FPS_HIGH_ML = 2,
    XR_MARKER_DETECTOR_FPS_MAX_ML = 3,
    XR_MARKER_DETECTOR_FPS_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorFpsML;

typedef enum XrMarkerDetectorFullAnalysisIntervalML
{
    XR_MARKER_DETECTOR_FULL_ANALYSIS_INTERVAL_MAX_ML = 0,
    XR_MARKER_DETECTOR_FULL_ANALYSIS_INTERVAL_FAST_ML = 1,
    XR_MARKER_DETECTOR_FULL_ANALYSIS_INTERVAL_MEDIUM_ML = 2,
    XR_MARKER_DETECTOR_FULL_ANALYSIS_INTERVAL_SLOW_ML = 3,
    XR_MARKER_DETECTOR_FULL_ANALYSIS_INTERVAL_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorFullAnalysisIntervalML;

typedef enum XrMarkerDetectorProfileML
{
    XR_MARKER_DETECTOR_PROFILE_DEFAULT_ML = 0,
    XR_MARKER_DETECTOR_PROFILE_SPEED_ML = 1,
    XR_MARKER_DETECTOR_PROFILE_ACCURACY_ML = 2,
    XR_MARKER_DETECTOR_PROFILE_SMALL_TARGETS_ML = 3,
    XR_MARKER_DETECTOR_PROFILE_LARGE_FOV_ML = 4,
    XR_MARKER_DETECTOR_PROFILE_CUSTOM_ML = 5,
    XR_MARKER_DETECTOR_PROFILE_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorProfileML;

typedef enum XrMarkerDetectorResolutionML
{
    XR_MARKER_DETECTOR_RESOLUTION_LOW_ML = 0,
    XR_MARKER_DETECTOR_RESOLUTION_MEDIUM_ML = 1,
    XR_MARKER_DETECTOR_RESOLUTION_HIGH_ML = 2,
    XR_MARKER_DETECTOR_RESOLUTION_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorResolutionML;

typedef enum XrMarkerDetectorStatusML
{
    XR_MARKER_DETECTOR_STATUS_PENDING_ML = 0,
    XR_MARKER_DETECTOR_STATUS_READY_ML = 1,
    XR_MARKER_DETECTOR_STATUS_ERROR_ML = 2,
    XR_MARKER_DETECTOR_STATUS_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerDetectorStatusML;

typedef enum XrMarkerTypeML
{
    XR_MARKER_TYPE_ARUCO_ML = 0,
    XR_MARKER_TYPE_APRIL_TAG_ML = 1,
    XR_MARKER_TYPE_QR_ML = 2,
    XR_MARKER_TYPE_EAN_13_ML = 3,
    XR_MARKER_TYPE_UPC_A_ML = 4,
    XR_MARKER_TYPE_CODE_128_ML = 5,
    XR_MARKER_TYPE_ML_MAX_ENUM = 0x7fffffff,
} XrMarkerTypeML;

typedef enum XrMeshComputeLodMSFT
{
    XR_MESH_COMPUTE_LOD_COARSE_MSFT = 1,
    XR_MESH_COMPUTE_LOD_MEDIUM_MSFT = 2,
    XR_MESH_COMPUTE_LOD_FINE_MSFT = 3,
    XR_MESH_COMPUTE_LOD_UNLIMITED_MSFT = 4,
    XR_MESH_COMPUTE_LOD_MSFT_MAX_ENUM = 0x7fffffff,
} XrMeshComputeLodMSFT;

typedef enum XrObjectType
{
    XR_OBJECT_TYPE_UNKNOWN = 0,
    XR_OBJECT_TYPE_INSTANCE = 1,
    XR_OBJECT_TYPE_SESSION = 2,
    XR_OBJECT_TYPE_SWAPCHAIN = 3,
    XR_OBJECT_TYPE_SPACE = 4,
    XR_OBJECT_TYPE_ACTION_SET = 5,
    XR_OBJECT_TYPE_ACTION = 6,
    XR_OBJECT_TYPE_SPATIAL_ANCHOR_MSFT = 1000039000,
    XR_OBJECT_TYPE_SPATIAL_GRAPH_NODE_BINDING_MSFT = 1000049000,
    XR_OBJECT_TYPE_HAND_TRACKER_EXT = 1000051000,
    XR_OBJECT_TYPE_BODY_TRACKER_FB = 1000076000,
    XR_OBJECT_TYPE_SCENE_OBSERVER_MSFT = 1000097000,
    XR_OBJECT_TYPE_SCENE_MSFT = 1000097001,
    XR_OBJECT_TYPE_FACIAL_TRACKER_HTC = 1000104000,
    XR_OBJECT_TYPE_FOVEATION_PROFILE_FB = 1000114000,
    XR_OBJECT_TYPE_TRIANGLE_MESH_FB = 1000117000,
    XR_OBJECT_TYPE_PASSTHROUGH_FB = 1000118000,
    XR_OBJECT_TYPE_PASSTHROUGH_LAYER_FB = 1000118002,
    XR_OBJECT_TYPE_GEOMETRY_INSTANCE_FB = 1000118004,
    XR_OBJECT_TYPE_MARKER_DETECTOR_ML = 1000138000,
    XR_OBJECT_TYPE_EXPORTED_LOCALIZATION_MAP_ML = 1000139000,
    XR_OBJECT_TYPE_SPATIAL_ANCHOR_STORE_CONNECTION_MSFT = 1000142000,
    XR_OBJECT_TYPE_FACE_TRACKER_FB = 1000201000,
    XR_OBJECT_TYPE_EYE_TRACKER_FB = 1000202000,
    XR_OBJECT_TYPE_VIRTUAL_KEYBOARD_META = 1000219000,
    XR_OBJECT_TYPE_SPACE_USER_FB = 1000241000,
    XR_OBJECT_TYPE_PASSTHROUGH_COLOR_LUT_META = 1000266000,
    XR_OBJECT_TYPE_FACE_TRACKER2_FB = 1000287012,
    XR_OBJECT_TYPE_ENVIRONMENT_DEPTH_PROVIDER_META = 1000291000,
    XR_OBJECT_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_META = 1000291001,
    XR_OBJECT_TYPE_PASSTHROUGH_HTC = 1000317000,
    XR_OBJECT_TYPE_PLANE_DETECTOR_EXT = 1000429000,
    XR_OBJECT_TYPE_MAX_ENUM = 0x7fffffff,
} XrObjectType;

typedef enum XrPassthroughColorLutChannelsMETA
{
    XR_PASSTHROUGH_COLOR_LUT_CHANNELS_RGB_META = 1,
    XR_PASSTHROUGH_COLOR_LUT_CHANNELS_RGBA_META = 2,
    XR_PASSTHROUGH_COLOR_LUT_CHANNELS_META_MAX_ENUM = 0x7fffffff,
} XrPassthroughColorLutChannelsMETA;

typedef enum XrPassthroughFormHTC
{
    XR_PASSTHROUGH_FORM_PLANAR_HTC = 0,
    XR_PASSTHROUGH_FORM_PROJECTED_HTC = 1,
    XR_PASSTHROUGH_FORM_HTC_MAX_ENUM = 0x7fffffff,
} XrPassthroughFormHTC;

typedef enum XrPassthroughLayerPurposeFB
{
    XR_PASSTHROUGH_LAYER_PURPOSE_RECONSTRUCTION_FB = 0,
    XR_PASSTHROUGH_LAYER_PURPOSE_PROJECTED_FB = 1,
    XR_PASSTHROUGH_LAYER_PURPOSE_TRACKED_KEYBOARD_HANDS_FB = 1000203001,
    XR_PASSTHROUGH_LAYER_PURPOSE_TRACKED_KEYBOARD_MASKED_HANDS_FB = 1000203002,
    XR_PASSTHROUGH_LAYER_PURPOSE_FB_MAX_ENUM = 0x7fffffff,
} XrPassthroughLayerPurposeFB;

typedef enum XrPassthroughPreferenceFlagBitsMETA
{
    XR_PASSTHROUGH_PREFERENCE_DEFAULT_TO_ACTIVE_BIT_META = 0x00000001,
    XR_PASSTHROUGH_PREFERENCE_FLAG_BITS_META_MAX_ENUM = 0x7fffffff,
} XrPassthroughPreferenceFlagBitsMETA;

typedef enum XrPerfSettingsDomainEXT
{
    XR_PERF_SETTINGS_DOMAIN_CPU_EXT = 1,
    XR_PERF_SETTINGS_DOMAIN_GPU_EXT = 2,
    XR_PERF_SETTINGS_DOMAIN_EXT_MAX_ENUM = 0x7fffffff,
} XrPerfSettingsDomainEXT;

typedef enum XrPerfSettingsLevelEXT
{
    XR_PERF_SETTINGS_LEVEL_POWER_SAVINGS_EXT = 0,
    XR_PERF_SETTINGS_LEVEL_SUSTAINED_LOW_EXT = 25,
    XR_PERF_SETTINGS_LEVEL_SUSTAINED_HIGH_EXT = 50,
    XR_PERF_SETTINGS_LEVEL_BOOST_EXT = 75,
    XR_PERF_SETTINGS_LEVEL_EXT_MAX_ENUM = 0x7fffffff,
} XrPerfSettingsLevelEXT;

typedef enum XrPerfSettingsNotificationLevelEXT
{
    XR_PERF_SETTINGS_NOTIF_LEVEL_NORMAL_EXT = 0,
    XR_PERF_SETTINGS_NOTIF_LEVEL_WARNING_EXT = 25,
    XR_PERF_SETTINGS_NOTIF_LEVEL_IMPAIRED_EXT = 75,
    XR_PERF_SETTINGS_NOTIFICATION_LEVEL_EXT_MAX_ENUM = 0x7fffffff,
} XrPerfSettingsNotificationLevelEXT;

typedef enum XrPerfSettingsSubDomainEXT
{
    XR_PERF_SETTINGS_SUB_DOMAIN_COMPOSITING_EXT = 1,
    XR_PERF_SETTINGS_SUB_DOMAIN_RENDERING_EXT = 2,
    XR_PERF_SETTINGS_SUB_DOMAIN_THERMAL_EXT = 3,
    XR_PERF_SETTINGS_SUB_DOMAIN_EXT_MAX_ENUM = 0x7fffffff,
} XrPerfSettingsSubDomainEXT;

typedef enum XrPerformanceMetricsCounterUnitMETA
{
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_GENERIC_META = 0,
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_PERCENTAGE_META = 1,
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_MILLISECONDS_META = 2,
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_BYTES_META = 3,
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_HERTZ_META = 4,
    XR_PERFORMANCE_METRICS_COUNTER_UNIT_META_MAX_ENUM = 0x7fffffff,
} XrPerformanceMetricsCounterUnitMETA;

typedef enum XrPlaneDetectionStateEXT
{
    XR_PLANE_DETECTION_STATE_NONE_EXT = 0,
    XR_PLANE_DETECTION_STATE_PENDING_EXT = 1,
    XR_PLANE_DETECTION_STATE_DONE_EXT = 2,
    XR_PLANE_DETECTION_STATE_ERROR_EXT = 3,
    XR_PLANE_DETECTION_STATE_FATAL_EXT = 4,
    XR_PLANE_DETECTION_STATE_EXT_MAX_ENUM = 0x7fffffff,
} XrPlaneDetectionStateEXT;

typedef enum XrPlaneDetectorOrientationEXT
{
    XR_PLANE_DETECTOR_ORIENTATION_HORIZONTAL_UPWARD_EXT = 0,
    XR_PLANE_DETECTOR_ORIENTATION_HORIZONTAL_DOWNWARD_EXT = 1,
    XR_PLANE_DETECTOR_ORIENTATION_VERTICAL_EXT = 2,
    XR_PLANE_DETECTOR_ORIENTATION_ARBITRARY_EXT = 3,
    XR_PLANE_DETECTOR_ORIENTATION_EXT_MAX_ENUM = 0x7fffffff,
} XrPlaneDetectorOrientationEXT;

typedef enum XrPlaneDetectorSemanticTypeEXT
{
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_UNDEFINED_EXT = 0,
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_CEILING_EXT = 1,
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_FLOOR_EXT = 2,
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_WALL_EXT = 3,
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_PLATFORM_EXT = 4,
    XR_PLANE_DETECTOR_SEMANTIC_TYPE_EXT_MAX_ENUM = 0x7fffffff,
} XrPlaneDetectorSemanticTypeEXT;

typedef enum XrReferenceSpaceType
{
    XR_REFERENCE_SPACE_TYPE_VIEW = 1,
    XR_REFERENCE_SPACE_TYPE_LOCAL = 2,
    XR_REFERENCE_SPACE_TYPE_STAGE = 3,
    XR_REFERENCE_SPACE_TYPE_UNBOUNDED_MSFT = 1000038000,
    XR_REFERENCE_SPACE_TYPE_COMBINED_EYE_VARJO = 1000121000,
    XR_REFERENCE_SPACE_TYPE_LOCALIZATION_MAP_ML = 1000139000,
    XR_REFERENCE_SPACE_TYPE_LOCAL_FLOOR = 1000426000,
    XR_REFERENCE_SPACE_TYPE_LOCAL_FLOOR_EXT = XR_REFERENCE_SPACE_TYPE_LOCAL_FLOOR,
    XR_REFERENCE_SPACE_TYPE_MAX_ENUM = 0x7fffffff,
} XrReferenceSpaceType;

typedef enum XrReprojectionModeMSFT
{
    XR_REPROJECTION_MODE_DEPTH_MSFT = 1,
    XR_REPROJECTION_MODE_PLANAR_FROM_DEPTH_MSFT = 2,
    XR_REPROJECTION_MODE_PLANAR_MANUAL_MSFT = 3,
    XR_REPROJECTION_MODE_ORIENTATION_ONLY_MSFT = 4,
    XR_REPROJECTION_MODE_MSFT_MAX_ENUM = 0x7fffffff,
} XrReprojectionModeMSFT;

typedef enum XrResult
{
    XR_ERROR_EXTENSION_DEPENDENCY_NOT_ENABLED = -1000710001,
    XR_ERROR_PERMISSION_INSUFFICIENT = -1000710000,
    XR_ERROR_FUTURE_INVALID_EXT = -1000469002,
    XR_ERROR_FUTURE_PENDING_EXT = -1000469001,
    XR_ERROR_PLANE_DETECTION_PERMISSION_DENIED_EXT = -1000429001,
    XR_ERROR_SPACE_NOT_LOCATABLE_EXT = -1000429000,
    XR_ERROR_NOT_AN_ANCHOR_HTC = -1000319000,
    XR_ERROR_HINT_ALREADY_SET_QCOM = -1000306000,
    XR_ERROR_PASSTHROUGH_COLOR_LUT_BUFFER_SIZE_MISMATCH_META = -1000266000,
    XR_ERROR_SPACE_CLOUD_STORAGE_DISABLED_FB = -1000169004,
    XR_ERROR_SPACE_NETWORK_REQUEST_FAILED_FB = -1000169003,
    XR_ERROR_SPACE_NETWORK_TIMEOUT_FB = -1000169002,
    XR_ERROR_SPACE_LOCALIZATION_FAILED_FB = -1000169001,
    XR_ERROR_SPACE_MAPPING_INSUFFICIENT_FB = -1000169000,
    XR_ERROR_SPATIAL_ANCHOR_NAME_INVALID_MSFT = -1000142002,
    XR_ERROR_SPATIAL_ANCHOR_NAME_NOT_FOUND_MSFT = -1000142001,
    XR_ERROR_LOCALIZATION_MAP_CANNOT_EXPORT_CLOUD_MAP_ML = -1000139006,
    XR_ERROR_LOCALIZATION_MAP_ALREADY_EXISTS_ML = -1000139005,
    XR_ERROR_LOCALIZATION_MAP_PERMISSION_DENIED_ML = -1000139004,
    XR_ERROR_LOCALIZATION_MAP_IMPORT_EXPORT_PERMISSION_DENIED_ML = -1000139003,
    XR_ERROR_LOCALIZATION_MAP_FAIL_ML = -1000139002,
    XR_ERROR_LOCALIZATION_MAP_UNAVAILABLE_ML = -1000139001,
    XR_ERROR_LOCALIZATION_MAP_INCOMPATIBLE_ML = -1000139000,
    XR_ERROR_MARKER_INVALID_ML = -1000138004,
    XR_ERROR_MARKER_DETECTOR_INVALID_CREATE_INFO_ML = -1000138003,
    XR_ERROR_MARKER_DETECTOR_INVALID_DATA_QUERY_ML = -1000138002,
    XR_ERROR_MARKER_DETECTOR_LOCATE_FAILED_ML = -1000138001,
    XR_ERROR_MARKER_DETECTOR_PERMISSION_DENIED_ML = -1000138000,
    XR_ERROR_MARKER_ID_INVALID_VARJO = -1000124001,
    XR_ERROR_MARKER_NOT_TRACKED_VARJO = -1000124000,
    XR_ERROR_RENDER_MODEL_KEY_INVALID_FB = -1000119000,
    XR_ERROR_UNKNOWN_PASSTHROUGH_FB = -1000118050,
    XR_ERROR_INSUFFICIENT_RESOURCES_PASSTHROUGH_FB = -1000118004,
    XR_ERROR_NOT_PERMITTED_PASSTHROUGH_FB = -1000118003,
    XR_ERROR_FEATURE_REQUIRED_PASSTHROUGH_FB = -1000118002,
    XR_ERROR_FEATURE_ALREADY_CREATED_PASSTHROUGH_FB = -1000118001,
    XR_ERROR_UNEXPECTED_STATE_PASSTHROUGH_FB = -1000118000,
    XR_ERROR_SPACE_COMPONENT_STATUS_ALREADY_SET_FB = -1000113003,
    XR_ERROR_SPACE_COMPONENT_STATUS_PENDING_FB = -1000113002,
    XR_ERROR_SPACE_COMPONENT_NOT_ENABLED_FB = -1000113001,
    XR_ERROR_SPACE_COMPONENT_NOT_SUPPORTED_FB = -1000113000,
    XR_ERROR_COLOR_SPACE_UNSUPPORTED_FB = -1000108000,
    XR_ERROR_DISPLAY_REFRESH_RATE_UNSUPPORTED_FB = -1000101000,
    XR_ERROR_SCENE_COMPUTE_CONSISTENCY_MISMATCH_MSFT = -1000097005,
    XR_ERROR_SCENE_COMPUTE_FEATURE_INCOMPATIBLE_MSFT = -1000097004,
    XR_ERROR_SCENE_MESH_BUFFER_ID_INVALID_MSFT = -1000097003,
    XR_ERROR_SCENE_COMPONENT_TYPE_MISMATCH_MSFT = -1000097002,
    XR_ERROR_SCENE_COMPONENT_ID_INVALID_MSFT = -1000097001,
    XR_ERROR_COMPUTE_NEW_SCENE_NOT_COMPLETED_MSFT = -1000097000,
    XR_ERROR_REPROJECTION_MODE_UNSUPPORTED_MSFT = -1000066000,
    XR_ERROR_CONTROLLER_MODEL_KEY_INVALID_MSFT = -1000055000,
    XR_ERROR_SECONDARY_VIEW_CONFIGURATION_TYPE_NOT_ENABLED_MSFT = -1000053000,
    XR_ERROR_CREATE_SPATIAL_ANCHOR_FAILED_MSFT = -1000039001,
    XR_ERROR_RUNTIME_UNAVAILABLE = -51,
    XR_ERROR_GRAPHICS_REQUIREMENTS_CALL_MISSING = -50,
    XR_ERROR_LOCALIZED_NAME_INVALID = -49,
    XR_ERROR_LOCALIZED_NAME_DUPLICATED = -48,
    XR_ERROR_ACTIONSETS_ALREADY_ATTACHED = -47,
    XR_ERROR_ACTIONSET_NOT_ATTACHED = -46,
    XR_ERROR_NAME_INVALID = -45,
    XR_ERROR_NAME_DUPLICATED = -44,
    XR_ERROR_ENVIRONMENT_BLEND_MODE_UNSUPPORTED = -42,
    XR_ERROR_VIEW_CONFIGURATION_TYPE_UNSUPPORTED = -41,
    XR_ERROR_INDEX_OUT_OF_RANGE = -40,
    XR_ERROR_POSE_INVALID = -39,
    XR_ERROR_GRAPHICS_DEVICE_INVALID = -38,
    XR_ERROR_CALL_ORDER_INVALID = -37,
    XR_ERROR_API_LAYER_NOT_PRESENT = -36,
    XR_ERROR_FORM_FACTOR_UNAVAILABLE = -35,
    XR_ERROR_FORM_FACTOR_UNSUPPORTED = -34,
    XR_ERROR_FILE_CONTENTS_INVALID = -33,
    XR_ERROR_FILE_ACCESS_ERROR = -32,
    XR_ERROR_REFERENCE_SPACE_UNSUPPORTED = -31,
    XR_ERROR_TIME_INVALID = -30,
    XR_ERROR_SESSION_NOT_STOPPING = -29,
    XR_ERROR_SESSION_NOT_READY = -28,
    XR_ERROR_ACTION_TYPE_MISMATCH = -27,
    XR_ERROR_SWAPCHAIN_FORMAT_UNSUPPORTED = -26,
    XR_ERROR_SWAPCHAIN_RECT_INVALID = -25,
    XR_ERROR_LAYER_LIMIT_EXCEEDED = -24,
    XR_ERROR_LAYER_INVALID = -23,
    XR_ERROR_PATH_UNSUPPORTED = -22,
    XR_ERROR_PATH_FORMAT_INVALID = -21,
    XR_ERROR_PATH_COUNT_EXCEEDED = -20,
    XR_ERROR_PATH_INVALID = -19,
    XR_ERROR_SYSTEM_INVALID = -18,
    XR_ERROR_SESSION_LOST = -17,
    XR_ERROR_SESSION_NOT_RUNNING = -16,
    XR_ERROR_SESSION_RUNNING = -14,
    XR_ERROR_INSTANCE_LOST = -13,
    XR_ERROR_HANDLE_INVALID = -12,
    XR_ERROR_SIZE_INSUFFICIENT = -11,
    XR_ERROR_LIMIT_REACHED = -10,
    XR_ERROR_EXTENSION_NOT_PRESENT = -9,
    XR_ERROR_FEATURE_UNSUPPORTED = -8,
    XR_ERROR_FUNCTION_UNSUPPORTED = -7,
    XR_ERROR_INITIALIZATION_FAILED = -6,
    XR_ERROR_API_VERSION_UNSUPPORTED = -4,
    XR_ERROR_OUT_OF_MEMORY = -3,
    XR_ERROR_RUNTIME_FAILURE = -2,
    XR_ERROR_VALIDATION_FAILURE = -1,
    XR_SUCCESS = 0,
    XR_TIMEOUT_EXPIRED = 1,
    XR_SESSION_LOSS_PENDING = 3,
    XR_EVENT_UNAVAILABLE = 4,
    XR_SPACE_BOUNDS_UNAVAILABLE = 7,
    XR_SESSION_NOT_FOCUSED = 8,
    XR_FRAME_DISCARDED = 9,
    XR_RENDER_MODEL_UNAVAILABLE_FB = 1000119020,
    XR_SCENE_MARKER_DATA_NOT_STRING_MSFT = 1000147000,
    XR_ENVIRONMENT_DEPTH_NOT_AVAILABLE_META = 1000291000,
    XR_ERROR_EXTENSION_DEPENDENCY_NOT_ENABLED_KHR = XR_ERROR_EXTENSION_DEPENDENCY_NOT_ENABLED,
    XR_ERROR_PERMISSION_INSUFFICIENT_KHR = XR_ERROR_PERMISSION_INSUFFICIENT,
    XR_RESULT_MAX_ENUM = 0x7fffffff,
} XrResult;

typedef enum XrSceneComponentTypeMSFT
{
    XR_SCENE_COMPONENT_TYPE_INVALID_MSFT = -1,
    XR_SCENE_COMPONENT_TYPE_OBJECT_MSFT = 1,
    XR_SCENE_COMPONENT_TYPE_PLANE_MSFT = 2,
    XR_SCENE_COMPONENT_TYPE_VISUAL_MESH_MSFT = 3,
    XR_SCENE_COMPONENT_TYPE_COLLIDER_MESH_MSFT = 4,
    XR_SCENE_COMPONENT_TYPE_SERIALIZED_SCENE_FRAGMENT_MSFT = 1000098000,
    XR_SCENE_COMPONENT_TYPE_MARKER_MSFT = 1000147000,
    XR_SCENE_COMPONENT_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneComponentTypeMSFT;

typedef enum XrSceneComputeConsistencyMSFT
{
    XR_SCENE_COMPUTE_CONSISTENCY_SNAPSHOT_COMPLETE_MSFT = 1,
    XR_SCENE_COMPUTE_CONSISTENCY_SNAPSHOT_INCOMPLETE_FAST_MSFT = 2,
    XR_SCENE_COMPUTE_CONSISTENCY_OCCLUSION_OPTIMIZED_MSFT = 3,
    XR_SCENE_COMPUTE_CONSISTENCY_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneComputeConsistencyMSFT;

typedef enum XrSceneComputeFeatureMSFT
{
    XR_SCENE_COMPUTE_FEATURE_PLANE_MSFT = 1,
    XR_SCENE_COMPUTE_FEATURE_PLANE_MESH_MSFT = 2,
    XR_SCENE_COMPUTE_FEATURE_VISUAL_MESH_MSFT = 3,
    XR_SCENE_COMPUTE_FEATURE_COLLIDER_MESH_MSFT = 4,
    XR_SCENE_COMPUTE_FEATURE_SERIALIZE_SCENE_MSFT = 1000098000,
    XR_SCENE_COMPUTE_FEATURE_MARKER_MSFT = 1000147000,
    XR_SCENE_COMPUTE_FEATURE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneComputeFeatureMSFT;

typedef enum XrSceneComputeStateMSFT
{
    XR_SCENE_COMPUTE_STATE_NONE_MSFT = 0,
    XR_SCENE_COMPUTE_STATE_UPDATING_MSFT = 1,
    XR_SCENE_COMPUTE_STATE_COMPLETED_MSFT = 2,
    XR_SCENE_COMPUTE_STATE_COMPLETED_WITH_ERROR_MSFT = 3,
    XR_SCENE_COMPUTE_STATE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneComputeStateMSFT;

typedef enum XrSceneMarkerQRCodeSymbolTypeMSFT
{
    XR_SCENE_MARKER_QR_CODE_SYMBOL_TYPE_QR_CODE_MSFT = 1,
    XR_SCENE_MARKER_QR_CODE_SYMBOL_TYPE_MICRO_QR_CODE_MSFT = 2,
    XR_SCENE_MARKER_QRCODE_SYMBOL_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneMarkerQRCodeSymbolTypeMSFT;

typedef enum XrSceneMarkerTypeMSFT
{
    XR_SCENE_MARKER_TYPE_QR_CODE_MSFT = 1,
    XR_SCENE_MARKER_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneMarkerTypeMSFT;

typedef enum XrSceneObjectTypeMSFT
{
    XR_SCENE_OBJECT_TYPE_UNCATEGORIZED_MSFT = -1,
    XR_SCENE_OBJECT_TYPE_BACKGROUND_MSFT = 1,
    XR_SCENE_OBJECT_TYPE_WALL_MSFT = 2,
    XR_SCENE_OBJECT_TYPE_FLOOR_MSFT = 3,
    XR_SCENE_OBJECT_TYPE_CEILING_MSFT = 4,
    XR_SCENE_OBJECT_TYPE_PLATFORM_MSFT = 5,
    XR_SCENE_OBJECT_TYPE_INFERRED_MSFT = 6,
    XR_SCENE_OBJECT_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSceneObjectTypeMSFT;

typedef enum XrScenePlaneAlignmentTypeMSFT
{
    XR_SCENE_PLANE_ALIGNMENT_TYPE_NON_ORTHOGONAL_MSFT = 0,
    XR_SCENE_PLANE_ALIGNMENT_TYPE_HORIZONTAL_MSFT = 1,
    XR_SCENE_PLANE_ALIGNMENT_TYPE_VERTICAL_MSFT = 2,
    XR_SCENE_PLANE_ALIGNMENT_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrScenePlaneAlignmentTypeMSFT;

typedef enum XrSemanticLabelsSupportFlagBitsFB
{
    XR_SEMANTIC_LABELS_SUPPORT_MULTIPLE_SEMANTIC_LABELS_BIT_FB = 0x00000001,
    XR_SEMANTIC_LABELS_SUPPORT_ACCEPT_DESK_TO_TABLE_MIGRATION_BIT_FB = 0x00000002,
    XR_SEMANTIC_LABELS_SUPPORT_ACCEPT_INVISIBLE_WALL_FACE_BIT_FB = 0x00000004,
    XR_SEMANTIC_LABELS_SUPPORT_FLAG_BITS_FB_MAX_ENUM = 0x7fffffff,
} XrSemanticLabelsSupportFlagBitsFB;

typedef enum XrSessionState
{
    XR_SESSION_STATE_UNKNOWN = 0,
    XR_SESSION_STATE_IDLE = 1,
    XR_SESSION_STATE_READY = 2,
    XR_SESSION_STATE_SYNCHRONIZED = 3,
    XR_SESSION_STATE_VISIBLE = 4,
    XR_SESSION_STATE_FOCUSED = 5,
    XR_SESSION_STATE_STOPPING = 6,
    XR_SESSION_STATE_LOSS_PENDING = 7,
    XR_SESSION_STATE_EXITING = 8,
    XR_SESSION_STATE_MAX_ENUM = 0x7fffffff,
} XrSessionState;

typedef enum XrSpaceComponentTypeFB
{
    XR_SPACE_COMPONENT_TYPE_LOCATABLE_FB = 0,
    XR_SPACE_COMPONENT_TYPE_STORABLE_FB = 1,
    XR_SPACE_COMPONENT_TYPE_SHARABLE_FB = 2,
    XR_SPACE_COMPONENT_TYPE_BOUNDED_2D_FB = 3,
    XR_SPACE_COMPONENT_TYPE_BOUNDED_3D_FB = 4,
    XR_SPACE_COMPONENT_TYPE_SEMANTIC_LABELS_FB = 5,
    XR_SPACE_COMPONENT_TYPE_ROOM_LAYOUT_FB = 6,
    XR_SPACE_COMPONENT_TYPE_SPACE_CONTAINER_FB = 7,
    XR_SPACE_COMPONENT_TYPE_TRIANGLE_MESH_META = 1000269000,
    XR_SPACE_COMPONENT_TYPE_FB_MAX_ENUM = 0x7fffffff,
} XrSpaceComponentTypeFB;

typedef enum XrSpacePersistenceModeFB
{
    XR_SPACE_PERSISTENCE_MODE_INVALID_FB = 0,
    XR_SPACE_PERSISTENCE_MODE_INDEFINITE_FB = 1,
    XR_SPACE_PERSISTENCE_MODE_FB_MAX_ENUM = 0x7fffffff,
} XrSpacePersistenceModeFB;

typedef enum XrSpaceQueryActionFB
{
    XR_SPACE_QUERY_ACTION_LOAD_FB = 0,
    XR_SPACE_QUERY_ACTION_FB_MAX_ENUM = 0x7fffffff,
} XrSpaceQueryActionFB;

typedef enum XrSpaceStorageLocationFB
{
    XR_SPACE_STORAGE_LOCATION_INVALID_FB = 0,
    XR_SPACE_STORAGE_LOCATION_LOCAL_FB = 1,
    XR_SPACE_STORAGE_LOCATION_CLOUD_FB = 2,
    XR_SPACE_STORAGE_LOCATION_FB_MAX_ENUM = 0x7fffffff,
} XrSpaceStorageLocationFB;

typedef enum XrSpatialGraphNodeTypeMSFT
{
    XR_SPATIAL_GRAPH_NODE_TYPE_STATIC_MSFT = 1,
    XR_SPATIAL_GRAPH_NODE_TYPE_DYNAMIC_MSFT = 2,
    XR_SPATIAL_GRAPH_NODE_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrSpatialGraphNodeTypeMSFT;

typedef enum XrStructureType
{
    XR_TYPE_UNKNOWN = 0,
    XR_TYPE_API_LAYER_PROPERTIES = 1,
    XR_TYPE_EXTENSION_PROPERTIES = 2,
    XR_TYPE_INSTANCE_CREATE_INFO = 3,
    XR_TYPE_SYSTEM_GET_INFO = 4,
    XR_TYPE_SYSTEM_PROPERTIES = 5,
    XR_TYPE_VIEW_LOCATE_INFO = 6,
    XR_TYPE_VIEW = 7,
    XR_TYPE_SESSION_CREATE_INFO = 8,
    XR_TYPE_SWAPCHAIN_CREATE_INFO = 9,
    XR_TYPE_SESSION_BEGIN_INFO = 10,
    XR_TYPE_VIEW_STATE = 11,
    XR_TYPE_FRAME_END_INFO = 12,
    XR_TYPE_HAPTIC_VIBRATION = 13,
    XR_TYPE_EVENT_DATA_BUFFER = 16,
    XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING = 17,
    XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED = 18,
    XR_TYPE_ACTION_STATE_BOOLEAN = 23,
    XR_TYPE_ACTION_STATE_FLOAT = 24,
    XR_TYPE_ACTION_STATE_VECTOR2F = 25,
    XR_TYPE_ACTION_STATE_POSE = 27,
    XR_TYPE_ACTION_SET_CREATE_INFO = 28,
    XR_TYPE_ACTION_CREATE_INFO = 29,
    XR_TYPE_INSTANCE_PROPERTIES = 32,
    XR_TYPE_FRAME_WAIT_INFO = 33,
    XR_TYPE_COMPOSITION_LAYER_PROJECTION = 35,
    XR_TYPE_COMPOSITION_LAYER_QUAD = 36,
    XR_TYPE_REFERENCE_SPACE_CREATE_INFO = 37,
    XR_TYPE_ACTION_SPACE_CREATE_INFO = 38,
    XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING = 40,
    XR_TYPE_VIEW_CONFIGURATION_VIEW = 41,
    XR_TYPE_SPACE_LOCATION = 42,
    XR_TYPE_SPACE_VELOCITY = 43,
    XR_TYPE_FRAME_STATE = 44,
    XR_TYPE_VIEW_CONFIGURATION_PROPERTIES = 45,
    XR_TYPE_FRAME_BEGIN_INFO = 46,
    XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW = 48,
    XR_TYPE_EVENT_DATA_EVENTS_LOST = 49,
    XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING = 51,
    XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED = 52,
    XR_TYPE_INTERACTION_PROFILE_STATE = 53,
    XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO = 55,
    XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO = 56,
    XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO = 57,
    XR_TYPE_ACTION_STATE_GET_INFO = 58,
    XR_TYPE_HAPTIC_ACTION_INFO = 59,
    XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO = 60,
    XR_TYPE_ACTIONS_SYNC_INFO = 61,
    XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO = 62,
    XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO = 63,
    XR_TYPE_COMPOSITION_LAYER_CUBE_KHR = 1000006000,
    XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR = 1000010000,
    XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR = 1000014000,
    XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT = 1000015000,
    XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR = 1000017000,
    XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR = 1000018000,
    XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR = 1000023000,
    XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR = 1000023001,
    XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR = 1000023002,
    XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR = 1000023003,
    XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR = 1000023004,
    XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR = 1000023005,
    XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR = 1000025000,
    XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR = 1000025001,
    XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR = 1000025002,
    XR_TYPE_GRAPHICS_BINDING_D3D11_KHR = 1000027000,
    XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR = 1000027001,
    XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR = 1000027002,
    XR_TYPE_GRAPHICS_BINDING_D3D12_KHR = 1000028000,
    XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR = 1000028001,
    XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR = 1000028002,
    XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT = 1000030000,
    XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT = 1000030001,
    XR_TYPE_VISIBILITY_MASK_KHR = 1000031000,
    XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR = 1000031001,
    XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX = 1000033000,
    XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX = 1000033003,
    XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR = 1000034000,
    XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT = 1000039000,
    XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT = 1000039001,
    XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB = 1000040000,
    XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB = 1000041001,
    XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT = 1000046000,
    XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT = 1000049000,
    XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT = 1000049001,
    XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT = 1000049002,
    XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT = 1000049003,
    XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT = 1000051000,
    XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT = 1000051001,
    XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT = 1000051002,
    XR_TYPE_HAND_JOINT_LOCATIONS_EXT = 1000051003,
    XR_TYPE_HAND_JOINT_VELOCITIES_EXT = 1000051004,
    XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT = 1000052000,
    XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT = 1000052001,
    XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT = 1000052002,
    XR_TYPE_HAND_MESH_MSFT = 1000052003,
    XR_TYPE_HAND_POSE_TYPE_INFO_MSFT = 1000052004,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT = 1000053000,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT = 1000053001,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT = 1000053002,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT = 1000053003,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT = 1000053004,
    XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT = 1000053005,
    XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT = 1000055000,
    XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT = 1000055001,
    XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT = 1000055002,
    XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT = 1000055003,
    XR_TYPE_CONTROLLER_MODEL_STATE_MSFT = 1000055004,
    XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC = 1000059000,
    XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT = 1000063000,
    XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT = 1000066000,
    XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT = 1000066001,
    XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB = 1000072000,
    XR_TYPE_BODY_TRACKER_CREATE_INFO_FB = 1000076001,
    XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB = 1000076002,
    XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB = 1000076004,
    XR_TYPE_BODY_JOINT_LOCATIONS_FB = 1000076005,
    XR_TYPE_BODY_SKELETON_FB = 1000076006,
    XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT = 1000078000,
    XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE = 1000079000,
    XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT = 1000080000,
    XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR = 1000090000,
    XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR = 1000090001,
    XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR = 1000090003,
    XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR = 1000091000,
    XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT = 1000097000,
    XR_TYPE_SCENE_CREATE_INFO_MSFT = 1000097001,
    XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT = 1000097002,
    XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT = 1000097003,
    XR_TYPE_SCENE_COMPONENTS_MSFT = 1000097004,
    XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT = 1000097005,
    XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT = 1000097006,
    XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT = 1000097007,
    XR_TYPE_SCENE_OBJECTS_MSFT = 1000097008,
    XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT = 1000097009,
    XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT = 1000097010,
    XR_TYPE_SCENE_PLANES_MSFT = 1000097011,
    XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT = 1000097012,
    XR_TYPE_SCENE_MESHES_MSFT = 1000097013,
    XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT = 1000097014,
    XR_TYPE_SCENE_MESH_BUFFERS_MSFT = 1000097015,
    XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT = 1000097016,
    XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT = 1000097017,
    XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT = 1000097018,
    XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT = 1000098000,
    XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT = 1000098001,
    XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB = 1000101000,
    XR_TYPE_VIVE_TRACKER_PATHS_HTCX = 1000103000,
    XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX = 1000103001,
    XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC = 1000104000,
    XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC = 1000104001,
    XR_TYPE_FACIAL_EXPRESSIONS_HTC = 1000104002,
    XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB = 1000108000,
    XR_TYPE_HAND_TRACKING_MESH_FB = 1000110001,
    XR_TYPE_HAND_TRACKING_SCALE_FB = 1000110003,
    XR_TYPE_HAND_TRACKING_AIM_STATE_FB = 1000111001,
    XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB = 1000112000,
    XR_TYPE_SPACE_COMPONENT_STATUS_FB = 1000113001,
    XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB = 1000113003,
    XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB = 1000113004,
    XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB = 1000113005,
    XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB = 1000113006,
    XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB = 1000113007,
    XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB = 1000114000,
    XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB = 1000114001,
    XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB = 1000114002,
    XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB = 1000115000,
    XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB = 1000116002,
    XR_TYPE_KEYBOARD_TRACKING_QUERY_FB = 1000116004,
    XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB = 1000116009,
    XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB = 1000117001,
    XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB = 1000118000,
    XR_TYPE_PASSTHROUGH_CREATE_INFO_FB = 1000118001,
    XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB = 1000118002,
    XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB = 1000118003,
    XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB = 1000118004,
    XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB = 1000118005,
    XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB = 1000118006,
    XR_TYPE_PASSTHROUGH_STYLE_FB = 1000118020,
    XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB = 1000118021,
    XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB = 1000118022,
    XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB = 1000118023,
    XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB = 1000118030,
    XR_TYPE_RENDER_MODEL_PATH_INFO_FB = 1000119000,
    XR_TYPE_RENDER_MODEL_PROPERTIES_FB = 1000119001,
    XR_TYPE_RENDER_MODEL_BUFFER_FB = 1000119002,
    XR_TYPE_RENDER_MODEL_LOAD_INFO_FB = 1000119003,
    XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB = 1000119004,
    XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB = 1000119005,
    XR_TYPE_BINDING_MODIFICATIONS_KHR = 1000120000,
    XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO = 1000121000,
    XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO = 1000121001,
    XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO = 1000121002,
    XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO = 1000122000,
    XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO = 1000124000,
    XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO = 1000124001,
    XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO = 1000124002,
    XR_TYPE_FRAME_END_INFO_ML = 1000135000,
    XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML = 1000136000,
    XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML = 1000138000,
    XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML = 1000138001,
    XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML = 1000138002,
    XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML = 1000138003,
    XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML = 1000138004,
    XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML = 1000138005,
    XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML = 1000138006,
    XR_TYPE_MARKER_DETECTOR_STATE_ML = 1000138007,
    XR_TYPE_MARKER_SPACE_CREATE_INFO_ML = 1000138008,
    XR_TYPE_LOCALIZATION_MAP_ML = 1000139000,
    XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML = 1000139001,
    XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML = 1000139002,
    XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML = 1000139003,
    XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML = 1000139004,
    XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT = 1000142000,
    XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT = 1000142001,
    XR_TYPE_SCENE_MARKERS_MSFT = 1000147000,
    XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT = 1000147001,
    XR_TYPE_SCENE_MARKER_QR_CODES_MSFT = 1000147002,
    XR_TYPE_SPACE_QUERY_INFO_FB = 1000156001,
    XR_TYPE_SPACE_QUERY_RESULTS_FB = 1000156002,
    XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB = 1000156003,
    XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB = 1000156052,
    XR_TYPE_SPACE_UUID_FILTER_INFO_FB = 1000156054,
    XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB = 1000156103,
    XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB = 1000156104,
    XR_TYPE_SPACE_SAVE_INFO_FB = 1000158000,
    XR_TYPE_SPACE_ERASE_INFO_FB = 1000158001,
    XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB = 1000158106,
    XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB = 1000158107,
    XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB = 1000160000,
    XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB = 1000163000,
    XR_TYPE_SPACE_SHARE_INFO_FB = 1000169001,
    XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB = 1000169002,
    XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB = 1000171000,
    XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB = 1000171001,
    XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB = 1000173001,
    XR_TYPE_SEMANTIC_LABELS_FB = 1000175000,
    XR_TYPE_ROOM_LAYOUT_FB = 1000175001,
    XR_TYPE_BOUNDARY_2D_FB = 1000175002,
    XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB = 1000175010,
    XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE = 1000196000,
    XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB = 1000198001,
    XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB = 1000198050,
    XR_TYPE_SPACE_CONTAINER_FB = 1000199000,
    XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META = 1000200000,
    XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META = 1000200001,
    XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META = 1000200002,
    XR_TYPE_FACE_EXPRESSION_INFO_FB = 1000201002,
    XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB = 1000201004,
    XR_TYPE_FACE_TRACKER_CREATE_INFO_FB = 1000201005,
    XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB = 1000201006,
    XR_TYPE_EYE_TRACKER_CREATE_INFO_FB = 1000202001,
    XR_TYPE_EYE_GAZES_INFO_FB = 1000202002,
    XR_TYPE_EYE_GAZES_FB = 1000202003,
    XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB = 1000202004,
    XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB = 1000203002,
    XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB = 1000204000,
    XR_TYPE_HAPTIC_PCM_VIBRATION_FB = 1000209001,
    XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB = 1000209002,
    XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB = 1000212000,
    XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META = 1000216000,
    XR_TYPE_PASSTHROUGH_PREFERENCES_META = 1000217000,
    XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META = 1000219001,
    XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META = 1000219002,
    XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META = 1000219003,
    XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META = 1000219004,
    XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META = 1000219005,
    XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META = 1000219006,
    XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META = 1000219007,
    XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META = 1000219009,
    XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META = 1000219010,
    XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META = 1000219011,
    XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META = 1000219014,
    XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META = 1000219015,
    XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META = 1000219016,
    XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META = 1000219017,
    XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META = 1000219018,
    XR_TYPE_EXTERNAL_CAMERA_OCULUS = 1000226000,
    XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META = 1000227000,
    XR_TYPE_PERFORMANCE_METRICS_STATE_META = 1000232001,
    XR_TYPE_PERFORMANCE_METRICS_COUNTER_META = 1000232002,
    XR_TYPE_SPACE_LIST_SAVE_INFO_FB = 1000238000,
    XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB = 1000238001,
    XR_TYPE_SPACE_USER_CREATE_INFO_FB = 1000241001,
    XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META = 1000245000,
    XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META = 1000254000,
    XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META = 1000254001,
    XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META = 1000266000,
    XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META = 1000266001,
    XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META = 1000266002,
    XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META = 1000266100,
    XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META = 1000266101,
    XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META = 1000269001,
    XR_TYPE_SPACE_TRIANGLE_MESH_META = 1000269002,
    XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB = 1000287013,
    XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB = 1000287014,
    XR_TYPE_FACE_EXPRESSION_INFO2_FB = 1000287015,
    XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB = 1000287016,
    XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META = 1000291000,
    XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META = 1000291001,
    XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META = 1000291002,
    XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META = 1000291003,
    XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META = 1000291004,
    XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META = 1000291005,
    XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META = 1000291006,
    XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META = 1000291007,
    XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC = 1000317001,
    XR_TYPE_PASSTHROUGH_COLOR_HTC = 1000317002,
    XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC = 1000317003,
    XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC = 1000317004,
    XR_TYPE_FOVEATION_APPLY_INFO_HTC = 1000318000,
    XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC = 1000318001,
    XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC = 1000318002,
    XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC = 1000319000,
    XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC = 1000319001,
    XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT = 1000373000,
    XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX = 1000375000,
    XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX = 1000375001,
    XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT = 1000428000,
    XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT = 1000428001,
    XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT = 1000429001,
    XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT = 1000429002,
    XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT = 1000429003,
    XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT = 1000429004,
    XR_TYPE_PLANE_DETECTOR_LOCATION_EXT = 1000429005,
    XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT = 1000429006,
    XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT = 1000429007,
    XR_TYPE_FUTURE_CANCEL_INFO_EXT = 1000469000,
    XR_TYPE_FUTURE_POLL_INFO_EXT = 1000469001,
    XR_TYPE_FUTURE_COMPLETION_EXT = 1000469002,
    XR_TYPE_FUTURE_POLL_RESULT_EXT = 1000469003,
    XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT = 1000470000,
    XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT = 1000470001,
    XR_TYPE_SPACES_LOCATE_INFO = 1000471000,
    XR_TYPE_SPACE_LOCATIONS = 1000471001,
    XR_TYPE_SPACE_VELOCITIES = 1000471002,
    XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML = 1000472000,
    XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML = 1000472001,
    XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML = 1000472002,
    XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR = XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR,
    XR_TYPE_SWAPCHAIN_IMAGE_VULKAN2_KHR = XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR,
    XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN2_KHR = XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR,
    XR_TYPE_DEVICE_PCM_SAMPLE_RATE_GET_INFO_FB = XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB,
    XR_TYPE_SPACES_LOCATE_INFO_KHR = XR_TYPE_SPACES_LOCATE_INFO,
    XR_TYPE_SPACE_LOCATIONS_KHR = XR_TYPE_SPACE_LOCATIONS,
    XR_TYPE_SPACE_VELOCITIES_KHR = XR_TYPE_SPACE_VELOCITIES,
    XR_STRUCTURE_TYPE_MAX_ENUM = 0x7fffffff,
} XrStructureType;

typedef enum XrTrackingOptimizationSettingsDomainQCOM
{
    XR_TRACKING_OPTIMIZATION_SETTINGS_DOMAIN_ALL_QCOM = 1,
    XR_TRACKING_OPTIMIZATION_SETTINGS_DOMAIN_QCOM_MAX_ENUM = 0x7fffffff,
} XrTrackingOptimizationSettingsDomainQCOM;

typedef enum XrTrackingOptimizationSettingsHintQCOM
{
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_NONE_QCOM = 0,
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_LONG_RANGE_PRIORIZATION_QCOM = 1,
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_CLOSE_RANGE_PRIORIZATION_QCOM = 2,
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_LOW_POWER_PRIORIZATION_QCOM = 3,
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_HIGH_POWER_PRIORIZATION_QCOM = 4,
    XR_TRACKING_OPTIMIZATION_SETTINGS_HINT_QCOM_MAX_ENUM = 0x7fffffff,
} XrTrackingOptimizationSettingsHintQCOM;

typedef enum XrViewConfigurationType
{
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_MONO = 1,
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO = 2,
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO_WITH_FOVEATED_INSET = 1000037000,
    XR_VIEW_CONFIGURATION_TYPE_SECONDARY_MONO_FIRST_PERSON_OBSERVER_MSFT = 1000054000,
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_QUAD_VARJO = XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO_WITH_FOVEATED_INSET,
    XR_VIEW_CONFIGURATION_TYPE_MAX_ENUM = 0x7fffffff,
} XrViewConfigurationType;

typedef enum XrVirtualKeyboardInputSourceMETA
{
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_CONTROLLER_RAY_LEFT_META = 1,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_CONTROLLER_RAY_RIGHT_META = 2,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_HAND_RAY_LEFT_META = 3,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_HAND_RAY_RIGHT_META = 4,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_CONTROLLER_DIRECT_LEFT_META = 5,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_CONTROLLER_DIRECT_RIGHT_META = 6,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_HAND_DIRECT_INDEX_TIP_LEFT_META = 7,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_HAND_DIRECT_INDEX_TIP_RIGHT_META = 8,
    XR_VIRTUAL_KEYBOARD_INPUT_SOURCE_META_MAX_ENUM = 0x7fffffff,
} XrVirtualKeyboardInputSourceMETA;

typedef enum XrVirtualKeyboardLocationTypeMETA
{
    XR_VIRTUAL_KEYBOARD_LOCATION_TYPE_CUSTOM_META = 0,
    XR_VIRTUAL_KEYBOARD_LOCATION_TYPE_FAR_META = 1,
    XR_VIRTUAL_KEYBOARD_LOCATION_TYPE_DIRECT_META = 2,
    XR_VIRTUAL_KEYBOARD_LOCATION_TYPE_META_MAX_ENUM = 0x7fffffff,
} XrVirtualKeyboardLocationTypeMETA;

typedef enum XrVisibilityMaskTypeKHR
{
    XR_VISIBILITY_MASK_TYPE_HIDDEN_TRIANGLE_MESH_KHR = 1,
    XR_VISIBILITY_MASK_TYPE_VISIBLE_TRIANGLE_MESH_KHR = 2,
    XR_VISIBILITY_MASK_TYPE_LINE_LOOP_KHR = 3,
    XR_VISIBILITY_MASK_TYPE_KHR_MAX_ENUM = 0x7fffffff,
} XrVisibilityMaskTypeKHR;

typedef enum XrWindingOrderFB
{
    XR_WINDING_ORDER_UNKNOWN_FB = 0,
    XR_WINDING_ORDER_CW_FB = 1,
    XR_WINDING_ORDER_CCW_FB = 2,
    XR_WINDING_ORDER_FB_MAX_ENUM = 0x7fffffff,
} XrWindingOrderFB;

typedef struct XrExtent3Df XrExtent3Df;
typedef XrExtent3Df XrExtent3DfEXT;
typedef XrExtent3Df XrExtent3DfFB;
typedef XrExtent3Df XrExtent3DfKHR;
typedef struct XrActionCreateInfo XrActionCreateInfo;
typedef struct XrActionStateBoolean XrActionStateBoolean;
typedef struct XrActionStateGetInfo XrActionStateGetInfo;
typedef struct XrActionSuggestedBinding XrActionSuggestedBinding;
typedef struct XrActiveActionSet XrActiveActionSet;
typedef struct XrActiveActionSetPriorityEXT XrActiveActionSetPriorityEXT;
typedef struct XrApiLayerNextInfo XrApiLayerNextInfo;
typedef struct XrApplicationInfo XrApplicationInfo;
typedef struct XrBaseOutStructure XrBaseOutStructure;
typedef struct XrBodyJointsLocateInfoFB XrBodyJointsLocateInfoFB;
typedef struct XrBodyTrackerCreateInfoFB XrBodyTrackerCreateInfoFB;
typedef struct XrCompositionLayerAlphaBlendFB XrCompositionLayerAlphaBlendFB;
typedef struct XrCompositionLayerDepthTestFB XrCompositionLayerDepthTestFB;
typedef struct XrCompositionLayerImageLayoutFB XrCompositionLayerImageLayoutFB;
typedef struct XrCompositionLayerReprojectionInfoMSFT XrCompositionLayerReprojectionInfoMSFT;
typedef struct XrCompositionLayerSecureContentFB XrCompositionLayerSecureContentFB;
typedef struct XrControllerModelKeyStateMSFT XrControllerModelKeyStateMSFT;
typedef struct XrDeserializeSceneFragmentMSFT XrDeserializeSceneFragmentMSFT;
typedef struct XrDevicePcmSampleRateStateFB XrDevicePcmSampleRateStateFB;
typedef XrDevicePcmSampleRateStateFB XrDevicePcmSampleRateGetInfoFB;
typedef struct XrEnvironmentDepthHandRemovalSetInfoMETA XrEnvironmentDepthHandRemovalSetInfoMETA;
typedef struct XrEnvironmentDepthProviderCreateInfoMETA XrEnvironmentDepthProviderCreateInfoMETA;
typedef struct XrEnvironmentDepthSwapchainStateMETA XrEnvironmentDepthSwapchainStateMETA;
typedef struct XrEventDataBuffer XrEventDataBuffer;
typedef struct XrEventDataEventsLost XrEventDataEventsLost;
typedef struct XrEventDataHeadsetFitChangedML XrEventDataHeadsetFitChangedML;
typedef struct XrEventDataInteractionProfileChanged XrEventDataInteractionProfileChanged;
typedef struct XrEventDataMainSessionVisibilityChangedEXTX XrEventDataMainSessionVisibilityChangedEXTX;
typedef struct XrEventDataPassthroughStateChangedFB XrEventDataPassthroughStateChangedFB;
typedef struct XrEventDataSceneCaptureCompleteFB XrEventDataSceneCaptureCompleteFB;
typedef struct XrEventDataSpaceListSaveCompleteFB XrEventDataSpaceListSaveCompleteFB;
typedef struct XrEventDataSpaceQueryResultsAvailableFB XrEventDataSpaceQueryResultsAvailableFB;
typedef struct XrEventDataSpaceShareCompleteFB XrEventDataSpaceShareCompleteFB;
typedef struct XrEventDataUserPresenceChangedEXT XrEventDataUserPresenceChangedEXT;
typedef struct XrEventDataVirtualKeyboardCommitTextMETA XrEventDataVirtualKeyboardCommitTextMETA;
typedef struct XrEventDataVirtualKeyboardHiddenMETA XrEventDataVirtualKeyboardHiddenMETA;
typedef struct XrEventDataVisibilityMaskChangedKHR XrEventDataVisibilityMaskChangedKHR;
typedef struct XrExtensionProperties XrExtensionProperties;
typedef struct XrExtent2Di XrExtent2Di;
typedef struct XrEyeGazeSampleTimeEXT XrEyeGazeSampleTimeEXT;
typedef struct XrEyeGazesInfoFB XrEyeGazesInfoFB;
typedef struct XrFaceExpressionInfo2FB XrFaceExpressionInfo2FB;
typedef struct XrFaceExpressionStatusFB XrFaceExpressionStatusFB;
typedef struct XrFaceExpressionWeightsFB XrFaceExpressionWeightsFB;
typedef struct XrFaceTrackerCreateInfoFB XrFaceTrackerCreateInfoFB;
typedef struct XrFacialTrackerCreateInfoHTC XrFacialTrackerCreateInfoHTC;
typedef struct XrFoveatedViewConfigurationViewVARJO XrFoveatedViewConfigurationViewVARJO;
typedef struct XrFoveationDynamicModeInfoHTC XrFoveationDynamicModeInfoHTC;
typedef struct XrFoveationLevelProfileCreateInfoFB XrFoveationLevelProfileCreateInfoFB;
typedef struct XrFovf XrFovf;
typedef struct XrFrameEndInfoML XrFrameEndInfoML;
typedef struct XrFrameWaitInfo XrFrameWaitInfo;
typedef struct XrFutureCompletionBaseHeaderEXT XrFutureCompletionBaseHeaderEXT;
typedef struct XrFuturePollInfoEXT XrFuturePollInfoEXT;
typedef struct XrGlobalDimmerFrameEndInfoML XrGlobalDimmerFrameEndInfoML;
typedef struct XrGraphicsBindingD3D12KHR XrGraphicsBindingD3D12KHR;
typedef struct XrGraphicsBindingOpenGLWin32KHR XrGraphicsBindingOpenGLWin32KHR;
typedef struct XrGraphicsBindingVulkanKHR XrGraphicsBindingVulkanKHR;
typedef XrGraphicsBindingVulkanKHR XrGraphicsBindingVulkan2KHR;
typedef struct XrGraphicsRequirementsD3D12KHR XrGraphicsRequirementsD3D12KHR;
typedef struct XrGraphicsRequirementsOpenGLKHR XrGraphicsRequirementsOpenGLKHR;
typedef struct XrGraphicsRequirementsVulkanKHR XrGraphicsRequirementsVulkanKHR;
typedef XrGraphicsRequirementsVulkanKHR XrGraphicsRequirementsVulkan2KHR;
typedef struct XrHandJointsLocateInfoEXT XrHandJointsLocateInfoEXT;
typedef struct XrHandMeshIndexBufferMSFT XrHandMeshIndexBufferMSFT;
typedef struct XrHandMeshUpdateInfoMSFT XrHandMeshUpdateInfoMSFT;
typedef struct XrHandPoseTypeInfoMSFT XrHandPoseTypeInfoMSFT;
typedef struct XrHandTrackingDataSourceInfoEXT XrHandTrackingDataSourceInfoEXT;
typedef struct XrHandTrackingScaleFB XrHandTrackingScaleFB;
typedef struct XrHapticAmplitudeEnvelopeVibrationFB XrHapticAmplitudeEnvelopeVibrationFB;
typedef struct XrHapticPcmVibrationFB XrHapticPcmVibrationFB;
typedef struct XrHolographicWindowAttachmentMSFT XrHolographicWindowAttachmentMSFT;
typedef struct XrInstanceCreateInfo XrInstanceCreateInfo;
typedef struct XrInstanceProperties XrInstanceProperties;
typedef struct XrInteractionProfileState XrInteractionProfileState;
typedef struct XrKeyboardSpaceCreateInfoFB XrKeyboardSpaceCreateInfoFB;
typedef struct XrKeyboardTrackingQueryFB XrKeyboardTrackingQueryFB;
typedef struct XrLocalizationEnableEventsInfoML XrLocalizationEnableEventsInfoML;
typedef struct XrLocalizationMapQueryInfoBaseHeaderML XrLocalizationMapQueryInfoBaseHeaderML;
typedef struct XrMarkerDetectorAprilTagInfoML XrMarkerDetectorAprilTagInfoML;
typedef struct XrMarkerDetectorCreateInfoML XrMarkerDetectorCreateInfoML;
typedef struct XrMarkerDetectorSizeInfoML XrMarkerDetectorSizeInfoML;
typedef struct XrMarkerDetectorStateML XrMarkerDetectorStateML;
typedef struct XrNegotiateApiLayerRequest XrNegotiateApiLayerRequest;
typedef struct XrNegotiateRuntimeRequest XrNegotiateRuntimeRequest;
typedef struct XrOffset2Df XrOffset2Df;
typedef struct XrOffset3DfFB XrOffset3DfFB;
typedef struct XrPassthroughColorHTC XrPassthroughColorHTC;
typedef struct XrPassthroughColorLutDataMETA XrPassthroughColorLutDataMETA;
typedef struct XrPassthroughColorMapInterpolatedLutMETA XrPassthroughColorMapInterpolatedLutMETA;
typedef struct XrPassthroughColorMapMonoToMonoFB XrPassthroughColorMapMonoToMonoFB;
typedef struct XrPassthroughCreateInfoFB XrPassthroughCreateInfoFB;
typedef struct XrPassthroughKeyboardHandsIntensityFB XrPassthroughKeyboardHandsIntensityFB;
typedef struct XrPassthroughPreferencesMETA XrPassthroughPreferencesMETA;
typedef struct XrPerformanceMetricsCounterMETA XrPerformanceMetricsCounterMETA;
typedef struct XrPlaneDetectorCreateInfoEXT XrPlaneDetectorCreateInfoEXT;
typedef struct XrQuaternionf XrQuaternionf;
typedef struct XrRecommendedLayerResolutionMETA XrRecommendedLayerResolutionMETA;
typedef struct XrRect3DfFB XrRect3DfFB;
typedef struct XrRenderModelBufferFB XrRenderModelBufferFB;
typedef struct XrRenderModelLoadInfoFB XrRenderModelLoadInfoFB;
typedef struct XrRenderModelPropertiesFB XrRenderModelPropertiesFB;
typedef struct XrSceneCaptureRequestInfoFB XrSceneCaptureRequestInfoFB;
typedef struct XrSceneComponentsGetInfoMSFT XrSceneComponentsGetInfoMSFT;
typedef struct XrSceneCreateInfoMSFT XrSceneCreateInfoMSFT;
typedef struct XrSceneMarkerQRCodeMSFT XrSceneMarkerQRCodeMSFT;
typedef struct XrSceneMarkerTypeFilterMSFT XrSceneMarkerTypeFilterMSFT;
typedef struct XrSceneMeshBuffersGetInfoMSFT XrSceneMeshBuffersGetInfoMSFT;
typedef struct XrSceneMeshIndicesUint16MSFT XrSceneMeshIndicesUint16MSFT;
typedef struct XrSceneMeshMSFT XrSceneMeshMSFT;
typedef struct XrSceneMeshesMSFT XrSceneMeshesMSFT;
typedef struct XrSceneObjectTypesFilterInfoMSFT XrSceneObjectTypesFilterInfoMSFT;
typedef struct XrSceneObserverCreateInfoMSFT XrSceneObserverCreateInfoMSFT;
typedef struct XrScenePlaneAlignmentFilterInfoMSFT XrScenePlaneAlignmentFilterInfoMSFT;
typedef struct XrSecondaryViewConfigurationSessionBeginInfoMSFT XrSecondaryViewConfigurationSessionBeginInfoMSFT;
typedef struct XrSecondaryViewConfigurationSwapchainCreateInfoMSFT XrSecondaryViewConfigurationSwapchainCreateInfoMSFT;
typedef struct XrSemanticLabelsSupportInfoFB XrSemanticLabelsSupportInfoFB;
typedef struct XrSessionActionSetsAttachInfo XrSessionActionSetsAttachInfo;
typedef struct XrSessionCreateInfo XrSessionCreateInfo;
typedef struct XrSpaceComponentFilterInfoFB XrSpaceComponentFilterInfoFB;
typedef struct XrSpaceComponentStatusSetInfoFB XrSpaceComponentStatusSetInfoFB;
typedef struct XrSpaceEraseInfoFB XrSpaceEraseInfoFB;
typedef struct XrSpaceListSaveInfoFB XrSpaceListSaveInfoFB;
typedef struct XrSpaceSaveInfoFB XrSpaceSaveInfoFB;
typedef struct XrSpaceStorageLocationFilterInfoFB XrSpaceStorageLocationFilterInfoFB;
typedef struct XrSpaceUserCreateInfoFB XrSpaceUserCreateInfoFB;
typedef struct XrSpatialAnchorNameHTC XrSpatialAnchorNameHTC;
typedef struct XrSpatialAnchorPersistenceNameMSFT XrSpatialAnchorPersistenceNameMSFT;
typedef struct XrSpatialGraphNodeBindingPropertiesGetInfoMSFT XrSpatialGraphNodeBindingPropertiesGetInfoMSFT;
typedef struct XrSwapchainCreateInfoFoveationFB XrSwapchainCreateInfoFoveationFB;
typedef struct XrSwapchainImageBaseHeader XrSwapchainImageBaseHeader;
typedef struct XrSwapchainImageD3D12KHR XrSwapchainImageD3D12KHR;
typedef struct XrSwapchainImageReleaseInfo XrSwapchainImageReleaseInfo;
typedef struct XrSwapchainImageVulkanKHR XrSwapchainImageVulkanKHR;
typedef XrSwapchainImageVulkanKHR XrSwapchainImageVulkan2KHR;
typedef struct XrSwapchainStateBaseHeaderFB XrSwapchainStateBaseHeaderFB;
typedef struct XrSystemAnchorPropertiesHTC XrSystemAnchorPropertiesHTC;
typedef struct XrSystemColorSpacePropertiesFB XrSystemColorSpacePropertiesFB;
typedef struct XrSystemEyeGazeInteractionPropertiesEXT XrSystemEyeGazeInteractionPropertiesEXT;
typedef struct XrSystemFaceTrackingProperties2FB XrSystemFaceTrackingProperties2FB;
typedef struct XrSystemFacialTrackingPropertiesHTC XrSystemFacialTrackingPropertiesHTC;
typedef struct XrSystemFoveatedRenderingPropertiesVARJO XrSystemFoveatedRenderingPropertiesVARJO;
typedef struct XrSystemGetInfo XrSystemGetInfo;
typedef struct XrSystemHandTrackingMeshPropertiesMSFT XrSystemHandTrackingMeshPropertiesMSFT;
typedef struct XrSystemKeyboardTrackingPropertiesFB XrSystemKeyboardTrackingPropertiesFB;
typedef struct XrSystemMarkerUnderstandingPropertiesML XrSystemMarkerUnderstandingPropertiesML;
typedef struct XrSystemPassthroughProperties2FB XrSystemPassthroughProperties2FB;
typedef struct XrSystemPlaneDetectionPropertiesEXT XrSystemPlaneDetectionPropertiesEXT;
typedef struct XrSystemRenderModelPropertiesFB XrSystemRenderModelPropertiesFB;
typedef struct XrSystemSpatialEntityPropertiesFB XrSystemSpatialEntityPropertiesFB;
typedef struct XrSystemUserPresencePropertiesEXT XrSystemUserPresencePropertiesEXT;
typedef struct XrUserCalibrationEnableEventsInfoML XrUserCalibrationEnableEventsInfoML;
typedef struct XrUuidMSFT XrUuidMSFT;
typedef struct XrVector3f XrVector3f;
typedef struct XrVector4sFB XrVector4sFB;
typedef struct XrViewConfigurationDepthRangeEXT XrViewConfigurationDepthRangeEXT;
typedef struct XrViewConfigurationView XrViewConfigurationView;
typedef struct XrViewLocateFoveatedRenderingVARJO XrViewLocateFoveatedRenderingVARJO;
typedef struct XrViewState XrViewState;
typedef struct XrVirtualKeyboardCreateInfoMETA XrVirtualKeyboardCreateInfoMETA;
typedef struct XrVirtualKeyboardModelVisibilitySetInfoMETA XrVirtualKeyboardModelVisibilitySetInfoMETA;
typedef struct XrVirtualKeyboardTextContextChangeInfoMETA XrVirtualKeyboardTextContextChangeInfoMETA;
typedef struct XrVisualMeshComputeLodInfoMSFT XrVisualMeshComputeLodInfoMSFT;
typedef struct XrVulkanDeviceCreateInfoKHR XrVulkanDeviceCreateInfoKHR;
typedef struct XrVulkanInstanceCreateInfoKHR XrVulkanInstanceCreateInfoKHR;
typedef struct XrVulkanSwapchainFormatListCreateInfoKHR XrVulkanSwapchainFormatListCreateInfoKHR;
typedef struct XrUuid XrUuid;
typedef XrUuid XrUuidEXT;
typedef struct XrActionStateFloat XrActionStateFloat;
typedef struct XrActionsSyncInfo XrActionsSyncInfo;
typedef struct XrApiLayerCreateInfo XrApiLayerCreateInfo;
typedef struct XrBaseInStructure XrBaseInStructure;
typedef struct XrBoundSourcesForActionEnumerateInfo XrBoundSourcesForActionEnumerateInfo;
typedef struct XrColor3f XrColor3f;
typedef XrColor3f XrColor3fKHR;
typedef struct XrCompositionLayerBaseHeader XrCompositionLayerBaseHeader;
typedef struct XrCompositionLayerCubeKHR XrCompositionLayerCubeKHR;
typedef struct XrCompositionLayerDepthTestVARJO XrCompositionLayerDepthTestVARJO;
typedef struct XrCompositionLayerPassthroughFB XrCompositionLayerPassthroughFB;
typedef struct XrCompositionLayerReprojectionPlaneOverrideMSFT XrCompositionLayerReprojectionPlaneOverrideMSFT;
typedef struct XrControllerModelNodePropertiesMSFT XrControllerModelNodePropertiesMSFT;
typedef struct XrControllerModelPropertiesMSFT XrControllerModelPropertiesMSFT;
typedef struct XrDebugUtilsLabelEXT XrDebugUtilsLabelEXT;
typedef struct XrDebugUtilsObjectNameInfoEXT XrDebugUtilsObjectNameInfoEXT;
typedef struct XrDigitalLensControlALMALENCE XrDigitalLensControlALMALENCE;
typedef struct XrEnvironmentDepthSwapchainCreateInfoMETA XrEnvironmentDepthSwapchainCreateInfoMETA;
typedef struct XrEventDataDisplayRefreshRateChangedFB XrEventDataDisplayRefreshRateChangedFB;
typedef struct XrEventDataInstanceLossPending XrEventDataInstanceLossPending;
typedef struct XrEventDataMarkerTrackingUpdateVARJO XrEventDataMarkerTrackingUpdateVARJO;
typedef struct XrEventDataSessionStateChanged XrEventDataSessionStateChanged;
typedef struct XrEventDataSpaceQueryCompleteFB XrEventDataSpaceQueryCompleteFB;
typedef struct XrEventDataVirtualKeyboardBackspaceMETA XrEventDataVirtualKeyboardBackspaceMETA;
typedef struct XrEventDataVirtualKeyboardShownMETA XrEventDataVirtualKeyboardShownMETA;
typedef struct XrExtent2Df XrExtent2Df;
typedef struct XrExternalCameraIntrinsicsOCULUS XrExternalCameraIntrinsicsOCULUS;
typedef struct XrEyeTrackerCreateInfoFB XrEyeTrackerCreateInfoFB;
typedef struct XrFaceExpressionWeights2FB XrFaceExpressionWeights2FB;
typedef struct XrFacialExpressionsHTC XrFacialExpressionsHTC;
typedef struct XrFoveationEyeTrackedProfileCreateInfoMETA XrFoveationEyeTrackedProfileCreateInfoMETA;
typedef struct XrFoveationProfileCreateInfoFB XrFoveationProfileCreateInfoFB;
typedef struct XrFrameEndInfo XrFrameEndInfo;
typedef struct XrFutureCancelInfoEXT XrFutureCancelInfoEXT;
typedef struct XrFuturePollResultEXT XrFuturePollResultEXT;
typedef struct XrGraphicsBindingD3D11KHR XrGraphicsBindingD3D11KHR;
typedef struct XrHandCapsuleFB XrHandCapsuleFB;
typedef struct XrHandJointVelocityEXT XrHandJointVelocityEXT;
typedef struct XrHandMeshVertexMSFT XrHandMeshVertexMSFT;
typedef struct XrHandTrackingCapsulesStateFB XrHandTrackingCapsulesStateFB;
typedef struct XrHapticActionInfo XrHapticActionInfo;
typedef struct XrHapticVibration XrHapticVibration;
typedef struct XrInteractionProfileSuggestedBinding XrInteractionProfileSuggestedBinding;
typedef struct XrLocalizationMapImportInfoML XrLocalizationMapImportInfoML;
typedef struct XrMarkerDetectorArucoInfoML XrMarkerDetectorArucoInfoML;
typedef struct XrMarkerDetectorSnapshotInfoML XrMarkerDetectorSnapshotInfoML;
typedef struct XrNegotiateLoaderInfo XrNegotiateLoaderInfo;
typedef struct XrOffset2Di XrOffset2Di;
typedef struct XrPassthroughColorLutCreateInfoMETA XrPassthroughColorLutCreateInfoMETA;
typedef struct XrPassthroughColorMapLutMETA XrPassthroughColorMapLutMETA;
typedef struct XrPassthroughCreateInfoHTC XrPassthroughCreateInfoHTC;
typedef struct XrPerformanceMetricsStateMETA XrPerformanceMetricsStateMETA;
typedef struct XrPlaneDetectorGetInfoEXT XrPlaneDetectorGetInfoEXT;
typedef struct XrPosef XrPosef;
typedef struct XrRect2Df XrRect2Df;
typedef struct XrReferenceSpaceCreateInfo XrReferenceSpaceCreateInfo;
typedef struct XrRenderModelPathInfoFB XrRenderModelPathInfoFB;
typedef struct XrSceneComponentLocationMSFT XrSceneComponentLocationMSFT;
typedef struct XrSceneComponentMSFT XrSceneComponentMSFT;
typedef struct XrSceneComponentsLocateInfoMSFT XrSceneComponentsLocateInfoMSFT;
typedef struct XrSceneDeserializeInfoMSFT XrSceneDeserializeInfoMSFT;
typedef struct XrSceneMarkerMSFT XrSceneMarkerMSFT;
typedef struct XrSceneMarkersMSFT XrSceneMarkersMSFT;
typedef struct XrSceneMeshIndicesUint32MSFT XrSceneMeshIndicesUint32MSFT;
typedef struct XrSceneObjectMSFT XrSceneObjectMSFT;
typedef struct XrSceneOrientedBoxBoundMSFT XrSceneOrientedBoxBoundMSFT;
typedef struct XrSceneSphereBoundMSFT XrSceneSphereBoundMSFT;
typedef struct XrSecondaryViewConfigurationLayerInfoMSFT XrSecondaryViewConfigurationLayerInfoMSFT;
typedef struct XrSemanticLabelsFB XrSemanticLabelsFB;
typedef struct XrSessionBeginInfo XrSessionBeginInfo;
typedef struct XrSpaceComponentStatusFB XrSpaceComponentStatusFB;
typedef struct XrSpaceFilterInfoBaseHeaderFB XrSpaceFilterInfoBaseHeaderFB;
typedef struct XrSpaceLocationData XrSpaceLocationData;
typedef XrSpaceLocationData XrSpaceLocationDataKHR;
typedef struct XrSpaceQueryInfoBaseHeaderFB XrSpaceQueryInfoBaseHeaderFB;
typedef struct XrSpaceShareInfoFB XrSpaceShareInfoFB;
typedef struct XrSpaceTriangleMeshMETA XrSpaceTriangleMeshMETA;
typedef struct XrSpaceVelocity XrSpaceVelocity;
typedef struct XrSpacesLocateInfo XrSpacesLocateInfo;
typedef XrSpacesLocateInfo XrSpacesLocateInfoKHR;
typedef struct XrSpatialAnchorCreateInfoHTC XrSpatialAnchorCreateInfoHTC;
typedef struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT;
typedef struct XrSpatialAnchorSpaceCreateInfoMSFT XrSpatialAnchorSpaceCreateInfoMSFT;
typedef struct XrSpatialGraphNodeSpaceCreateInfoMSFT XrSpatialGraphNodeSpaceCreateInfoMSFT;
typedef struct XrSpheref XrSpheref;
typedef XrSpheref XrSpherefKHR;
typedef struct XrSwapchainImageAcquireInfo XrSwapchainImageAcquireInfo;
typedef struct XrSwapchainImageFoveationVulkanFB XrSwapchainImageFoveationVulkanFB;
typedef struct XrSwapchainStateFoveationFB XrSwapchainStateFoveationFB;
typedef struct XrSystemBodyTrackingPropertiesFB XrSystemBodyTrackingPropertiesFB;
typedef struct XrSystemEyeTrackingPropertiesFB XrSystemEyeTrackingPropertiesFB;
typedef struct XrSystemForceFeedbackCurlPropertiesMNDX XrSystemForceFeedbackCurlPropertiesMNDX;
typedef struct XrSystemGraphicsProperties XrSystemGraphicsProperties;
typedef struct XrSystemMarkerTrackingPropertiesVARJO XrSystemMarkerTrackingPropertiesVARJO;
typedef struct XrSystemPassthroughPropertiesFB XrSystemPassthroughPropertiesFB;
typedef struct XrSystemSpaceWarpPropertiesFB XrSystemSpaceWarpPropertiesFB;
typedef struct XrSystemVirtualKeyboardPropertiesMETA XrSystemVirtualKeyboardPropertiesMETA;
typedef struct XrVector4f XrVector4f;
typedef struct XrViewConfigurationProperties XrViewConfigurationProperties;
typedef struct XrViewLocateInfo XrViewLocateInfo;
typedef struct XrVirtualKeyboardInputInfoMETA XrVirtualKeyboardInputInfoMETA;
typedef struct XrVirtualKeyboardSpaceCreateInfoMETA XrVirtualKeyboardSpaceCreateInfoMETA;
typedef struct XrViveTrackerPathsHTCX XrViveTrackerPathsHTCX;
typedef struct XrVulkanSwapchainCreateInfoMETA XrVulkanSwapchainCreateInfoMETA;
typedef struct XrActionSetCreateInfo XrActionSetCreateInfo;
typedef struct XrActionStatePose XrActionStatePose;
typedef struct XrActiveActionSetPrioritiesEXT XrActiveActionSetPrioritiesEXT;
typedef struct XrBindingModificationBaseHeaderKHR XrBindingModificationBaseHeaderKHR;
typedef struct XrBodyJointLocationFB XrBodyJointLocationFB;
typedef struct XrBodySkeletonJointFB XrBodySkeletonJointFB;
typedef struct XrBoxf XrBoxf;
typedef XrBoxf XrBoxfKHR;
typedef struct XrCompositionLayerPassthroughHTC XrCompositionLayerPassthroughHTC;
typedef struct XrCompositionLayerSettingsFB XrCompositionLayerSettingsFB;
typedef struct XrControllerModelNodeStateMSFT XrControllerModelNodeStateMSFT;
typedef struct XrDebugUtilsMessengerCallbackDataEXT XrDebugUtilsMessengerCallbackDataEXT;
typedef struct XrEnvironmentDepthImageAcquireInfoMETA XrEnvironmentDepthImageAcquireInfoMETA;
typedef struct XrEnvironmentDepthImageViewMETA XrEnvironmentDepthImageViewMETA;
typedef struct XrEventDataEyeCalibrationChangedML XrEventDataEyeCalibrationChangedML;
typedef struct XrEventDataPerfSettingsEXT XrEventDataPerfSettingsEXT;
typedef struct XrEventDataSpaceEraseCompleteFB XrEventDataSpaceEraseCompleteFB;
typedef struct XrEventDataSpaceSetStatusCompleteFB XrEventDataSpaceSetStatusCompleteFB;
typedef struct XrEventDataVirtualKeyboardEnterMETA XrEventDataVirtualKeyboardEnterMETA;
typedef struct XrEyeGazeFB XrEyeGazeFB;
typedef struct XrFaceExpressionInfoFB XrFaceExpressionInfoFB;
typedef struct XrForceFeedbackCurlApplyLocationMNDX XrForceFeedbackCurlApplyLocationMNDX;
typedef struct XrFrameBeginInfo XrFrameBeginInfo;
typedef struct XrFrustumf XrFrustumf;
typedef XrFrustumf XrFrustumfKHR;
typedef struct XrGeometryInstanceCreateInfoFB XrGeometryInstanceCreateInfoFB;
typedef struct XrHandJointVelocitiesEXT XrHandJointVelocitiesEXT;
typedef struct XrHandMeshSpaceCreateInfoMSFT XrHandMeshSpaceCreateInfoMSFT;
typedef struct XrHandTrackerCreateInfoEXT XrHandTrackerCreateInfoEXT;
typedef struct XrHandTrackingDataSourceStateEXT XrHandTrackingDataSourceStateEXT;
typedef struct XrHapticBaseHeader XrHapticBaseHeader;
typedef struct XrInteractionProfileAnalogThresholdVALVE XrInteractionProfileAnalogThresholdVALVE;
typedef struct XrKeyboardTrackingDescriptionFB XrKeyboardTrackingDescriptionFB;
typedef struct XrLocalizationMapML XrLocalizationMapML;
typedef struct XrMarkerDetectorCustomProfileInfoML XrMarkerDetectorCustomProfileInfoML;
typedef struct XrMarkerSpaceCreateInfoVARJO XrMarkerSpaceCreateInfoVARJO;
typedef struct XrPassthroughBrightnessContrastSaturationFB XrPassthroughBrightnessContrastSaturationFB;
typedef struct XrPassthroughLayerCreateInfoFB XrPassthroughLayerCreateInfoFB;
typedef struct XrPlaneDetectorBeginInfoEXT XrPlaneDetectorBeginInfoEXT;
typedef struct XrRecommendedLayerResolutionGetInfoMETA XrRecommendedLayerResolutionGetInfoMETA;
typedef struct XrRenderModelCapabilitiesRequestFB XrRenderModelCapabilitiesRequestFB;
typedef struct XrSceneComponentLocationsMSFT XrSceneComponentLocationsMSFT;
typedef struct XrSceneComponentsMSFT XrSceneComponentsMSFT;
typedef struct XrSceneMarkerQRCodesMSFT XrSceneMarkerQRCodesMSFT;
typedef struct XrSceneMeshVertexBufferMSFT XrSceneMeshVertexBufferMSFT;
typedef struct XrScenePlaneMSFT XrScenePlaneMSFT;
typedef struct XrSecondaryViewConfigurationFrameEndInfoMSFT XrSecondaryViewConfigurationFrameEndInfoMSFT;
typedef struct XrSecondaryViewConfigurationStateMSFT XrSecondaryViewConfigurationStateMSFT;
typedef struct XrSessionCreateInfoOverlayEXTX XrSessionCreateInfoOverlayEXTX;
typedef struct XrSpaceLocation XrSpaceLocation;
typedef struct XrSpaceQueryInfoFB XrSpaceQueryInfoFB;
typedef struct XrSpaceTriangleMeshGetInfoMETA XrSpaceTriangleMeshGetInfoMETA;
typedef struct XrSpaceVelocityData XrSpaceVelocityData;
typedef XrSpaceVelocityData XrSpaceVelocityDataKHR;
typedef struct XrSpatialAnchorCreateInfoMSFT XrSpatialAnchorCreateInfoMSFT;
typedef struct XrSpatialGraphNodeBindingPropertiesMSFT XrSpatialGraphNodeBindingPropertiesMSFT;
typedef struct XrSwapchainCreateInfo XrSwapchainCreateInfo;
typedef struct XrSwapchainImageOpenGLKHR XrSwapchainImageOpenGLKHR;
typedef struct XrSystemEnvironmentDepthPropertiesMETA XrSystemEnvironmentDepthPropertiesMETA;
typedef struct XrSystemFoveationEyeTrackedPropertiesMETA XrSystemFoveationEyeTrackedPropertiesMETA;
typedef struct XrSystemHeadsetIdPropertiesMETA XrSystemHeadsetIdPropertiesMETA;
typedef struct XrSystemTrackingProperties XrSystemTrackingProperties;
typedef struct XrVector2f XrVector2f;
typedef struct XrViewConfigurationViewFovEPIC XrViewConfigurationViewFovEPIC;
typedef struct XrVirtualKeyboardLocationInfoMETA XrVirtualKeyboardLocationInfoMETA;
typedef struct XrVirtualKeyboardTextureDataMETA XrVirtualKeyboardTextureDataMETA;
typedef struct XrVulkanGraphicsDeviceGetInfoKHR XrVulkanGraphicsDeviceGetInfoKHR;
typedef struct XrActionSpaceCreateInfo XrActionSpaceCreateInfo;
typedef struct XrApiLayerProperties XrApiLayerProperties;
typedef struct XrBodyJointLocationsFB XrBodyJointLocationsFB;
typedef struct XrBoundary2DFB XrBoundary2DFB;
typedef struct XrControllerModelStateMSFT XrControllerModelStateMSFT;
typedef struct XrEnvironmentDepthImageMETA XrEnvironmentDepthImageMETA;
typedef struct XrEventDataLocalizationChangedML XrEventDataLocalizationChangedML;
typedef struct XrEventDataSpaceSaveCompleteFB XrEventDataSpaceSaveCompleteFB;
typedef struct XrEventDataViveTrackerConnectedHTCX XrEventDataViveTrackerConnectedHTCX;
typedef struct XrEyeGazesFB XrEyeGazesFB;
typedef struct XrForceFeedbackCurlApplyLocationsMNDX XrForceFeedbackCurlApplyLocationsMNDX;
typedef struct XrFoveationConfigurationHTC XrFoveationConfigurationHTC;
typedef struct XrFoveationEyeTrackedStateMETA XrFoveationEyeTrackedStateMETA;
typedef struct XrFutureCompletionEXT XrFutureCompletionEXT;
typedef struct XrGraphicsRequirementsD3D11KHR XrGraphicsRequirementsD3D11KHR;
typedef struct XrHandJointsMotionRangeInfoEXT XrHandJointsMotionRangeInfoEXT;
typedef struct XrHandMeshVertexBufferMSFT XrHandMeshVertexBufferMSFT;
typedef struct XrHandTrackingMeshFB XrHandTrackingMeshFB;
typedef struct XrInteractionProfileDpadBindingEXT XrInteractionProfileDpadBindingEXT;
typedef struct XrMapLocalizationRequestInfoML XrMapLocalizationRequestInfoML;
typedef struct XrPassthroughColorLutUpdateInfoMETA XrPassthroughColorLutUpdateInfoMETA;
typedef struct XrPassthroughMeshTransformInfoHTC XrPassthroughMeshTransformInfoHTC;
typedef struct XrPlaneDetectorLocationEXT XrPlaneDetectorLocationEXT;
typedef struct XrPlaneDetectorPolygonBufferEXT XrPlaneDetectorPolygonBufferEXT;
typedef struct XrRoomLayoutFB XrRoomLayoutFB;
typedef struct XrSceneComponentParentFilterInfoMSFT XrSceneComponentParentFilterInfoMSFT;
typedef struct XrSceneMeshBuffersMSFT XrSceneMeshBuffersMSFT;
typedef struct XrScenePlanesMSFT XrScenePlanesMSFT;
typedef struct XrSerializedSceneFragmentDataGetInfoMSFT XrSerializedSceneFragmentDataGetInfoMSFT;
typedef struct XrSpaceLocations XrSpaceLocations;
typedef XrSpaceLocations XrSpaceLocationsKHR;
typedef struct XrSpaceUuidFilterInfoFB XrSpaceUuidFilterInfoFB;
typedef struct XrSpatialAnchorCreateInfoFB XrSpatialAnchorCreateInfoFB;
typedef struct XrSpatialGraphStaticNodeBindingCreateInfoMSFT XrSpatialGraphStaticNodeBindingCreateInfoMSFT;
typedef struct XrSwapchainImageWaitInfo XrSwapchainImageWaitInfo;
typedef struct XrSystemFaceTrackingPropertiesFB XrSystemFaceTrackingPropertiesFB;
typedef struct XrSystemPassthroughColorLutPropertiesMETA XrSystemPassthroughColorLutPropertiesMETA;
typedef struct XrTriangleMeshCreateInfoFB XrTriangleMeshCreateInfoFB;
typedef struct XrVirtualKeyboardAnimationStateMETA XrVirtualKeyboardAnimationStateMETA;
typedef struct XrVisibilityMaskKHR XrVisibilityMaskKHR;
typedef struct XrActionStateVector2f XrActionStateVector2f;
typedef struct XrBodySkeletonFB XrBodySkeletonFB;
typedef struct XrEventDataReferenceSpaceChangePending XrEventDataReferenceSpaceChangePending;
typedef struct XrExternalCameraExtrinsicsOCULUS XrExternalCameraExtrinsicsOCULUS;
typedef struct XrFaceTrackerCreateInfo2FB XrFaceTrackerCreateInfo2FB;
typedef struct XrFoveationCustomModeInfoHTC XrFoveationCustomModeInfoHTC;
typedef struct XrGeometryInstanceTransformFB XrGeometryInstanceTransformFB;
typedef struct XrHandMeshMSFT XrHandMeshMSFT;
typedef struct XrInputSourceLocalizedNameGetInfo XrInputSourceLocalizedNameGetInfo;
typedef struct XrMarkerSpaceCreateInfoML XrMarkerSpaceCreateInfoML;
typedef struct XrPlaneDetectorLocationsEXT XrPlaneDetectorLocationsEXT;
typedef struct XrSceneFrustumBoundMSFT XrSceneFrustumBoundMSFT;
typedef struct XrSecondaryViewConfigurationFrameStateMSFT XrSecondaryViewConfigurationFrameStateMSFT;
typedef struct XrSpaceQueryResultFB XrSpaceQueryResultFB;
typedef struct XrSpaceVelocities XrSpaceVelocities;
typedef XrSpaceVelocities XrSpaceVelocitiesKHR;
typedef struct XrSwapchainImageD3D11KHR XrSwapchainImageD3D11KHR;
typedef struct XrSystemHandTrackingPropertiesEXT XrSystemHandTrackingPropertiesEXT;
typedef struct XrView XrView;
typedef struct XrBindingModificationsKHR XrBindingModificationsKHR;
typedef struct XrEventDataBaseHeader XrEventDataBaseHeader;
typedef struct XrExternalCameraOCULUS XrExternalCameraOCULUS;
typedef struct XrFrameState XrFrameState;
typedef struct XrHandTrackingAimStateFB XrHandTrackingAimStateFB;
typedef struct XrRect2Di XrRect2Di;
typedef struct XrSceneObjectsMSFT XrSceneObjectsMSFT;
typedef struct XrSpaceQueryResultsFB XrSpaceQueryResultsFB;
typedef struct XrSwapchainSubImage XrSwapchainSubImage;
typedef struct XrVirtualKeyboardModelAnimationStatesMETA XrVirtualKeyboardModelAnimationStatesMETA;
typedef struct XrColor4f XrColor4f;
typedef struct XrCompositionLayerCylinderKHR XrCompositionLayerCylinderKHR;
typedef struct XrCompositionLayerEquirect2KHR XrCompositionLayerEquirect2KHR;
typedef struct XrCompositionLayerProjectionView XrCompositionLayerProjectionView;
typedef struct XrCompositionLayerSpaceWarpInfoFB XrCompositionLayerSpaceWarpInfoFB;
typedef struct XrFoveationApplyInfoHTC XrFoveationApplyInfoHTC;
typedef struct XrLocalDimmingFrameEndInfoMETA XrLocalDimmingFrameEndInfoMETA;
typedef struct XrPassthroughColorMapMonoToRgbaFB XrPassthroughColorMapMonoToRgbaFB;
typedef struct XrSceneBoundsMSFT XrSceneBoundsMSFT;
typedef struct XrSpatialAnchorPersistenceInfoMSFT XrSpatialAnchorPersistenceInfoMSFT;
typedef struct XrSystemProperties XrSystemProperties;
typedef struct XrCompositionLayerColorScaleBiasKHR XrCompositionLayerColorScaleBiasKHR;
typedef struct XrCompositionLayerEquirectKHR XrCompositionLayerEquirectKHR;
typedef struct XrCompositionLayerQuad XrCompositionLayerQuad;
typedef struct XrHandJointLocationEXT XrHandJointLocationEXT;
typedef struct XrNewSceneComputeInfoMSFT XrNewSceneComputeInfoMSFT;
typedef struct XrSpaceContainerFB XrSpaceContainerFB;
typedef struct XrCompositionLayerDepthInfoKHR XrCompositionLayerDepthInfoKHR;
typedef struct XrEventDataSpatialAnchorCreateCompleteFB XrEventDataSpatialAnchorCreateCompleteFB;
typedef struct XrPassthroughStyleFB XrPassthroughStyleFB;
typedef struct XrCompositionLayerProjection XrCompositionLayerProjection;
typedef struct XrSwapchainStateSamplerVulkanFB XrSwapchainStateSamplerVulkanFB;
typedef struct XrHandJointLocationsEXT XrHandJointLocationsEXT;
typedef void (XRAPI_PTR * PFN_xrVoidFunction)(
void);
typedef XrResult (XRAPI_PTR * PFN_xrGetInstanceProcAddr)(
XrInstance instance, const char* name, PFN_xrVoidFunction* function);

typedef struct XrApiLayerCreateInfo XrApiLayerCreateInfo;
typedef XrResult (XRAPI_PTR * PFN_xrCreateApiLayerInstance)(

            const XrInstanceCreateInfo* info,
            const XrApiLayerCreateInfo* apiLayerInfo,
            XrInstance* instance);
typedef XrBool32 (XRAPI_PTR * PFN_xrDebugUtilsMessengerCallbackEXT)(
    XrDebugUtilsMessageSeverityFlagsEXT messageSeverity,
    XrDebugUtilsMessageTypeFlagsEXT messageTypes,
    const XrDebugUtilsMessengerCallbackDataEXT *callbackData,
    void *userData);
typedef PFN_xrVoidFunction (* PFN_xrEglGetProcAddressMNDX)(
    char *name);

struct XrExtent3Df
{
    float width;
    float height;
    float depth;
};

struct XrActionCreateInfo
{
    XrStructureType type;
    const void *next;
    char actionName[XR_MAX_ACTION_NAME_SIZE];
    XrActionType actionType;
    uint32_t countSubactionPaths;
    const XrPath *subactionPaths;
    char localizedActionName[XR_MAX_LOCALIZED_ACTION_NAME_SIZE];
};

struct XrActionStateBoolean
{
    XrStructureType type;
    void *next;
    XrBool32 currentState;
    XrBool32 changedSinceLastSync;
    XrTime lastChangeTime;
    XrBool32 isActive;
};

struct XrActionStateGetInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
    XrPath subactionPath;
};

struct XrActionSuggestedBinding
{
    XrAction action;
    XrPath binding;
};

struct XrActiveActionSet
{
    XrActionSet actionSet;
    XrPath subactionPath;
};

struct XrActiveActionSetPriorityEXT
{
    XrActionSet actionSet;
    uint32_t priorityOverride;
};

struct XrApiLayerNextInfo
{
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    char layerName[XR_MAX_API_LAYER_NAME_SIZE];
    PFN_xrGetInstanceProcAddr nextGetInstanceProcAddr;
    PFN_xrCreateApiLayerInstance nextCreateApiLayerInstance;
    struct XrApiLayerNextInfo *next;
};

struct XrApplicationInfo
{
    char applicationName[XR_MAX_APPLICATION_NAME_SIZE];
    uint32_t applicationVersion;
    char engineName[XR_MAX_ENGINE_NAME_SIZE];
    uint32_t engineVersion;
    XrVersion apiVersion;
};

struct XrBaseOutStructure
{
    XrStructureType type;
    struct XrBaseOutStructure *next;
};

struct XrBodyJointsLocateInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
};

struct XrBodyTrackerCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrBodyJointSetFB bodyJointSet;
};

struct XrCompositionLayerAlphaBlendFB
{
    XrStructureType type;
    void *next;
    XrBlendFactorFB srcFactorColor;
    XrBlendFactorFB dstFactorColor;
    XrBlendFactorFB srcFactorAlpha;
    XrBlendFactorFB dstFactorAlpha;
};

struct XrCompositionLayerDepthTestFB
{
    XrStructureType type;
    const void *next;
    XrBool32 depthMask;
    XrCompareOpFB compareOp;
};

struct XrCompositionLayerImageLayoutFB
{
    XrStructureType type;
    void *next;
    XrCompositionLayerImageLayoutFlagsFB flags;
};

struct XrCompositionLayerReprojectionInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrReprojectionModeMSFT reprojectionMode;
};

struct XrCompositionLayerSecureContentFB
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerSecureContentFlagsFB flags;
};

struct XrControllerModelKeyStateMSFT
{
    XrStructureType type;
    void *next;
    XrControllerModelKeyMSFT modelKey;
};

struct XrDeserializeSceneFragmentMSFT
{
    uint32_t bufferSize;
    const uint8_t *buffer;
};

struct XrDevicePcmSampleRateStateFB
{
    XrStructureType type;
    void *next;
    float sampleRate;
};

struct XrEnvironmentDepthHandRemovalSetInfoMETA
{
    XrStructureType type;
    const void *next;
    XrBool32 enabled;
};

struct XrEnvironmentDepthProviderCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrEnvironmentDepthProviderCreateFlagsMETA createFlags;
};

struct XrEnvironmentDepthSwapchainStateMETA
{
    XrStructureType type;
    void *next;
    uint32_t width;
    uint32_t height;
};

struct XrEventDataBuffer
{
    XrStructureType type;
    const void *next;
    uint8_t varying[4000];
};

struct XrEventDataEventsLost
{
    XrStructureType type;
    const void *next;
    uint32_t lostEventCount;
};

struct XrEventDataHeadsetFitChangedML
{
    XrStructureType type;
    const void *next;
    XrHeadsetFitStatusML status;
    XrTime time;
};

struct XrEventDataInteractionProfileChanged
{
    XrStructureType type;
    const void *next;
    XrSession session;
};

struct XrEventDataMainSessionVisibilityChangedEXTX
{
    XrStructureType type;
    const void *next;
    XrBool32 visible;
    XrOverlayMainSessionFlagsEXTX flags;
};

struct XrEventDataPassthroughStateChangedFB
{
    XrStructureType type;
    const void *next;
    XrPassthroughStateChangedFlagsFB flags;
};

struct XrEventDataSceneCaptureCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
};

struct XrEventDataSpaceListSaveCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
};

struct XrEventDataSpaceQueryResultsAvailableFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
};

struct XrEventDataSpaceShareCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
};

struct XrEventDataUserPresenceChangedEXT
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrBool32 isUserPresent;
};

struct XrEventDataVirtualKeyboardCommitTextMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardMETA keyboard;
    char text[XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META];
};

struct XrEventDataVirtualKeyboardHiddenMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardMETA keyboard;
};

struct XrEventDataVisibilityMaskChangedKHR
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewIndex;
};

struct XrExtensionProperties
{
    XrStructureType type;
    void *next;
    char extensionName[XR_MAX_EXTENSION_NAME_SIZE];
    uint32_t extensionVersion;
};

struct XrExtent2Di
{
    int32_t width;
    int32_t height;
};

struct XrEyeGazeSampleTimeEXT
{
    XrStructureType type;
    void *next;
    XrTime time;
};

struct XrEyeGazesInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
};

struct XrFaceExpressionInfo2FB
{
    XrStructureType type;
    const void *next;
    XrTime time;
};

struct XrFaceExpressionStatusFB
{
    XrBool32 isValid;
    XrBool32 isEyeFollowingBlendshapesValid;
};

struct XrFaceExpressionWeightsFB
{
    XrStructureType type;
    void *next;
    uint32_t weightCount;
    float *weights;
    uint32_t confidenceCount;
    float *confidences;
    XrFaceExpressionStatusFB status;
    XrTime time;
};

struct XrFaceTrackerCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrFaceExpressionSetFB faceExpressionSet;
};

struct XrFacialTrackerCreateInfoHTC
{
    XrStructureType type;
    const void *next;
    XrFacialTrackingTypeHTC facialTrackingType;
};

struct XrFoveatedViewConfigurationViewVARJO
{
    XrStructureType type;
    void *next;
    XrBool32 foveatedRenderingActive;
};

struct XrFoveationDynamicModeInfoHTC
{
    XrStructureType type;
    const void *next;
    XrFoveationDynamicFlagsHTC dynamicFlags;
};

struct XrFoveationLevelProfileCreateInfoFB
{
    XrStructureType type;
    void *next;
    XrFoveationLevelFB level;
    float verticalOffset;
    XrFoveationDynamicFB dynamic;
};

struct XrFovf
{
    float angleLeft;
    float angleRight;
    float angleUp;
    float angleDown;
};

struct XrFrameEndInfoML
{
    XrStructureType type;
    const void *next;
    float focusDistance;
    XrFrameEndInfoFlagsML flags;
};

struct XrFrameWaitInfo
{
    XrStructureType type;
    const void *next;
};

struct XrFutureCompletionBaseHeaderEXT
{
    XrStructureType type;
    void *next;
    XrResult futureResult;
};

struct XrFuturePollInfoEXT
{
    XrStructureType type;
    const void *next;
    XrFutureEXT future;
};

struct XrGlobalDimmerFrameEndInfoML
{
    XrStructureType type;
    const void *next;
    float dimmerValue;
    XrGlobalDimmerFrameEndInfoFlagsML flags;
};

struct XrGraphicsBindingD3D12KHR
{
    XrStructureType type;
    const void *next;
    ID3D12Device *device;
    ID3D12CommandQueue *queue;
};

struct XrGraphicsBindingOpenGLWin32KHR
{
    XrStructureType type;
    const void *next;
    HDC hDC;
    HGLRC hGLRC;
};

struct XrGraphicsBindingVulkanKHR
{
    XrStructureType type;
    const void *next;
    VkInstance instance;
    VkPhysicalDevice physicalDevice;
    VkDevice device;
    uint32_t queueFamilyIndex;
    uint32_t queueIndex;
};

struct XrGraphicsRequirementsD3D12KHR
{
    XrStructureType type;
    void *next;
    LUID adapterLuid;
    D3D_FEATURE_LEVEL minFeatureLevel;
};

struct XrGraphicsRequirementsOpenGLKHR
{
    XrStructureType type;
    void *next;
    XrVersion minApiVersionSupported;
    XrVersion maxApiVersionSupported;
};

struct XrGraphicsRequirementsVulkanKHR
{
    XrStructureType type;
    void *next;
    XrVersion minApiVersionSupported;
    XrVersion maxApiVersionSupported;
};

struct XrHandJointsLocateInfoEXT
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
};

struct XrHandMeshIndexBufferMSFT
{
    uint32_t indexBufferKey;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint32_t *indices;
};

struct XrHandMeshUpdateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrTime time;
    XrHandPoseTypeMSFT handPoseType;
};

struct XrHandPoseTypeInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrHandPoseTypeMSFT handPoseType;
};

struct XrHandTrackingDataSourceInfoEXT
{
    XrStructureType type;
    const void *next;
    uint32_t requestedDataSourceCount;
    XrHandTrackingDataSourceEXT *requestedDataSources;
};

struct XrHandTrackingScaleFB
{
    XrStructureType type;
    void *next;
    float sensorOutput;
    float currentOutput;
    XrBool32 overrideHandScale;
    float overrideValueInput;
};

struct XrHapticAmplitudeEnvelopeVibrationFB
{
    XrStructureType type;
    const void *next;
    XrDuration duration;
    uint32_t amplitudeCount;
    const float *amplitudes;
};

struct XrHapticPcmVibrationFB
{
    XrStructureType type;
    const void *next;
    uint32_t bufferSize;
    const float *buffer;
    float sampleRate;
    XrBool32 append;
    uint32_t *samplesConsumed;
};

struct XrHolographicWindowAttachmentMSFT
{
    XrStructureType type;
    const void *next;
    IUnknown *holographicSpace;
    IUnknown *coreWindow;
};

struct XrInstanceCreateInfo
{
    XrStructureType type;
    const void *next;
    XrInstanceCreateFlags createFlags;
    XrApplicationInfo applicationInfo;
    uint32_t enabledApiLayerCount;
    const char * const*enabledApiLayerNames;
    uint32_t enabledExtensionCount;
    const char * const*enabledExtensionNames;
};

struct XrInstanceProperties
{
    XrStructureType type;
    void *next;
    XrVersion runtimeVersion;
    char runtimeName[XR_MAX_RUNTIME_NAME_SIZE];
};

struct XrInteractionProfileState
{
    XrStructureType type;
    void *next;
    XrPath interactionProfile;
};

struct XrKeyboardSpaceCreateInfoFB
{
    XrStructureType type;
    void *next;
    uint64_t WINE_XR_ALIGN(8) trackedKeyboardId;
};

struct XrKeyboardTrackingQueryFB
{
    XrStructureType type;
    void *next;
    XrKeyboardTrackingQueryFlagsFB flags;
};

struct XrLocalizationEnableEventsInfoML
{
    XrStructureType type;
    const void *next;
    XrBool32 enabled;
};

struct XrLocalizationMapQueryInfoBaseHeaderML
{
    XrStructureType type;
    const void *next;
};

struct XrMarkerDetectorAprilTagInfoML
{
    XrStructureType type;
    const void *next;
    XrMarkerAprilTagDictML aprilTagDict;
};

struct XrMarkerDetectorCreateInfoML
{
    XrStructureType type;
    const void *next;
    XrMarkerDetectorProfileML profile;
    XrMarkerTypeML markerType;
};

struct XrMarkerDetectorSizeInfoML
{
    XrStructureType type;
    const void *next;
    float markerLength;
};

struct XrMarkerDetectorStateML
{
    XrStructureType type;
    void *next;
    XrMarkerDetectorStatusML state;
};

struct XrNegotiateApiLayerRequest
{
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    uint32_t layerInterfaceVersion;
    XrVersion layerApiVersion;
    PFN_xrGetInstanceProcAddr getInstanceProcAddr;
    PFN_xrCreateApiLayerInstance createApiLayerInstance;
};

struct XrNegotiateRuntimeRequest
{
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    uint32_t runtimeInterfaceVersion;
    XrVersion runtimeApiVersion;
    PFN_xrGetInstanceProcAddr getInstanceProcAddr;
};

struct XrOffset2Df
{
    float x;
    float y;
};

struct XrOffset3DfFB
{
    float x;
    float y;
    float z;
};

struct XrPassthroughColorHTC
{
    XrStructureType type;
    const void *next;
    float alpha;
};

struct XrPassthroughColorLutDataMETA
{
    uint32_t bufferSize;
    const uint8_t *buffer;
};

struct XrPassthroughColorMapInterpolatedLutMETA
{
    XrStructureType type;
    const void *next;
    XrPassthroughColorLutMETA sourceColorLut;
    XrPassthroughColorLutMETA targetColorLut;
    float weight;
};

struct XrPassthroughColorMapMonoToMonoFB
{
    XrStructureType type;
    const void *next;
    uint8_t textureColorMap[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB];
};

struct XrPassthroughCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrPassthroughFlagsFB flags;
};

struct XrPassthroughKeyboardHandsIntensityFB
{
    XrStructureType type;
    const void *next;
    float leftHandIntensity;
    float rightHandIntensity;
};

struct XrPassthroughPreferencesMETA
{
    XrStructureType type;
    const void *next;
    XrPassthroughPreferenceFlagsMETA flags;
};

struct XrPerformanceMetricsCounterMETA
{
    XrStructureType type;
    const void *next;
    XrPerformanceMetricsCounterFlagsMETA counterFlags;
    XrPerformanceMetricsCounterUnitMETA counterUnit;
    uint32_t uintValue;
    float floatValue;
};

struct XrPlaneDetectorCreateInfoEXT
{
    XrStructureType type;
    const void *next;
    XrPlaneDetectorFlagsEXT flags;
};

struct XrQuaternionf
{
    float x;
    float y;
    float z;
    float w;
};

struct XrRecommendedLayerResolutionMETA
{
    XrStructureType type;
    void *next;
    XrExtent2Di recommendedImageDimensions;
    XrBool32 isValid;
};

struct XrRect3DfFB
{
    XrOffset3DfFB offset;
    XrExtent3DfFB extent;
};

struct XrRenderModelBufferFB
{
    XrStructureType type;
    void *next;
    uint32_t bufferCapacityInput;
    uint32_t bufferCountOutput;
    uint8_t *buffer;
};

struct XrRenderModelLoadInfoFB
{
    XrStructureType type;
    void *next;
    XrRenderModelKeyFB modelKey;
};

struct XrRenderModelPropertiesFB
{
    XrStructureType type;
    void *next;
    uint32_t vendorId;
    char modelName[XR_MAX_RENDER_MODEL_NAME_SIZE_FB];
    XrRenderModelKeyFB modelKey;
    uint32_t modelVersion;
    XrRenderModelFlagsFB flags;
};

struct XrSceneCaptureRequestInfoFB
{
    XrStructureType type;
    const void *next;
    uint32_t requestByteCount;
    const char *request;
};

struct XrSceneComponentsGetInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSceneComponentTypeMSFT componentType;
};

struct XrSceneCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
};

struct XrSceneMarkerQRCodeMSFT
{
    XrSceneMarkerQRCodeSymbolTypeMSFT symbolType;
    uint8_t version;
};

struct XrSceneMarkerTypeFilterMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t markerTypeCount;
    XrSceneMarkerTypeMSFT *markerTypes;
};

struct XrSceneMeshBuffersGetInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint64_t WINE_XR_ALIGN(8) meshBufferId;
};

struct XrSceneMeshIndicesUint16MSFT
{
    XrStructureType type;
    void *next;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint16_t *indices;
};

struct XrSceneMeshMSFT
{
    uint64_t WINE_XR_ALIGN(8) meshBufferId;
    XrBool32 supportsIndicesUint16;
};

struct XrSceneMeshesMSFT
{
    XrStructureType type;
    void *next;
    uint32_t sceneMeshCount;
    XrSceneMeshMSFT *sceneMeshes;
};

struct XrSceneObjectTypesFilterInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t objectTypeCount;
    const XrSceneObjectTypeMSFT *objectTypes;
};

struct XrSceneObserverCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
};

struct XrScenePlaneAlignmentFilterInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t alignmentCount;
    const XrScenePlaneAlignmentTypeMSFT *alignments;
};

struct XrSecondaryViewConfigurationSessionBeginInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t viewConfigurationCount;
    const XrViewConfigurationType *enabledViewConfigurationTypes;
};

struct XrSecondaryViewConfigurationSwapchainCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType viewConfigurationType;
};

struct XrSemanticLabelsSupportInfoFB
{
    XrStructureType type;
    const void *next;
    XrSemanticLabelsSupportFlagsFB flags;
    const char *recognizedLabels;
};

struct XrSessionActionSetsAttachInfo
{
    XrStructureType type;
    const void *next;
    uint32_t countActionSets;
    const XrActionSet *actionSets;
};

struct XrSessionCreateInfo
{
    XrStructureType type;
    const void *next;
    XrSessionCreateFlags createFlags;
    XrSystemId systemId;
};

struct XrSpaceComponentFilterInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpaceComponentTypeFB componentType;
};

struct XrSpaceComponentStatusSetInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpaceComponentTypeFB componentType;
    XrBool32 enabled;
    XrDuration timeout;
};

struct XrSpaceEraseInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrSpaceStorageLocationFB location;
};

struct XrSpaceListSaveInfoFB
{
    XrStructureType type;
    const void *next;
    uint32_t spaceCount;
    XrSpace *spaces;
    XrSpaceStorageLocationFB location;
};

struct XrSpaceSaveInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrSpaceStorageLocationFB location;
    XrSpacePersistenceModeFB persistenceMode;
};

struct XrSpaceStorageLocationFilterInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpaceStorageLocationFB location;
};

struct XrSpaceUserCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpaceUserIdFB userId;
};

struct XrSpatialAnchorNameHTC
{
    char name[XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC];
};

struct XrSpatialAnchorPersistenceNameMSFT
{
    char name[XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT];
};

struct XrSpatialGraphNodeBindingPropertiesGetInfoMSFT
{
    XrStructureType type;
    const void *next;
};

struct XrSwapchainCreateInfoFoveationFB
{
    XrStructureType type;
    void *next;
    XrSwapchainCreateFoveationFlagsFB flags;
};

struct XrSwapchainImageBaseHeader
{
    XrStructureType type;
    void *next;
};

struct XrSwapchainImageD3D12KHR
{
    XrStructureType type;
    void *next;
    ID3D12Resource *texture;
};

struct XrSwapchainImageReleaseInfo
{
    XrStructureType type;
    const void *next;
};

struct XrSwapchainImageVulkanKHR
{
    XrStructureType type;
    void *next;
    VkImage image;
};

struct XrSwapchainStateBaseHeaderFB
{
    XrStructureType type;
    void *next;
};

struct XrSystemAnchorPropertiesHTC
{
    XrStructureType type;
    void *next;
    XrBool32 supportsAnchor;
};

struct XrSystemColorSpacePropertiesFB
{
    XrStructureType type;
    void *next;
    XrColorSpaceFB colorSpace;
};

struct XrSystemEyeGazeInteractionPropertiesEXT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsEyeGazeInteraction;
};

struct XrSystemFaceTrackingProperties2FB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsVisualFaceTracking;
    XrBool32 supportsAudioFaceTracking;
};

struct XrSystemFacialTrackingPropertiesHTC
{
    XrStructureType type;
    void *next;
    XrBool32 supportEyeFacialTracking;
    XrBool32 supportLipFacialTracking;
};

struct XrSystemFoveatedRenderingPropertiesVARJO
{
    XrStructureType type;
    void *next;
    XrBool32 supportsFoveatedRendering;
};

struct XrSystemGetInfo
{
    XrStructureType type;
    const void *next;
    XrFormFactor formFactor;
};

struct XrSystemHandTrackingMeshPropertiesMSFT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsHandTrackingMesh;
    uint32_t maxHandMeshIndexCount;
    uint32_t maxHandMeshVertexCount;
};

struct XrSystemKeyboardTrackingPropertiesFB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsKeyboardTracking;
};

struct XrSystemMarkerUnderstandingPropertiesML
{
    XrStructureType type;
    void *next;
    XrBool32 supportsMarkerUnderstanding;
};

struct XrSystemPassthroughProperties2FB
{
    XrStructureType type;
    const void *next;
    XrPassthroughCapabilityFlagsFB capabilities;
};

struct XrSystemPlaneDetectionPropertiesEXT
{
    XrStructureType type;
    void *next;
    XrPlaneDetectionCapabilityFlagsEXT supportedFeatures;
};

struct XrSystemRenderModelPropertiesFB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsRenderModelLoading;
};

struct XrSystemSpatialEntityPropertiesFB
{
    XrStructureType type;
    const void *next;
    XrBool32 supportsSpatialEntity;
};

struct XrSystemUserPresencePropertiesEXT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsUserPresence;
};

struct XrUserCalibrationEnableEventsInfoML
{
    XrStructureType type;
    const void *next;
    XrBool32 enabled;
};

struct XrUuidMSFT
{
    uint8_t bytes[16];
};

struct XrVector3f
{
    float x;
    float y;
    float z;
};

struct XrVector4sFB
{
    int16_t x;
    int16_t y;
    int16_t z;
    int16_t w;
};

struct XrViewConfigurationDepthRangeEXT
{
    XrStructureType type;
    void *next;
    float recommendedNearZ;
    float minNearZ;
    float recommendedFarZ;
    float maxFarZ;
};

struct XrViewConfigurationView
{
    XrStructureType type;
    void *next;
    uint32_t recommendedImageRectWidth;
    uint32_t maxImageRectWidth;
    uint32_t recommendedImageRectHeight;
    uint32_t maxImageRectHeight;
    uint32_t recommendedSwapchainSampleCount;
    uint32_t maxSwapchainSampleCount;
};

struct XrViewLocateFoveatedRenderingVARJO
{
    XrStructureType type;
    const void *next;
    XrBool32 foveatedRenderingActive;
};

struct XrViewState
{
    XrStructureType type;
    void *next;
    XrViewStateFlags viewStateFlags;
};

struct XrVirtualKeyboardCreateInfoMETA
{
    XrStructureType type;
    const void *next;
};

struct XrVirtualKeyboardModelVisibilitySetInfoMETA
{
    XrStructureType type;
    const void *next;
    XrBool32 visible;
};

struct XrVirtualKeyboardTextContextChangeInfoMETA
{
    XrStructureType type;
    const void *next;
    const char *textContext;
};

struct XrVisualMeshComputeLodInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrMeshComputeLodMSFT lod;
};

struct XrVulkanDeviceCreateInfoKHR
{
    XrStructureType type;
    const void *next;
    XrSystemId systemId;
    XrVulkanDeviceCreateFlagsKHR createFlags;
    PFN_vkGetInstanceProcAddr pfnGetInstanceProcAddr;
    VkPhysicalDevice vulkanPhysicalDevice;
    const VkDeviceCreateInfo *vulkanCreateInfo;
    const VkAllocationCallbacks *vulkanAllocator;
};

struct XrVulkanInstanceCreateInfoKHR
{
    XrStructureType type;
    const void *next;
    XrSystemId systemId;
    XrVulkanInstanceCreateFlagsKHR createFlags;
    PFN_vkGetInstanceProcAddr pfnGetInstanceProcAddr;
    const VkInstanceCreateInfo *vulkanCreateInfo;
    const VkAllocationCallbacks *vulkanAllocator;
};

struct XrVulkanSwapchainFormatListCreateInfoKHR
{
    XrStructureType type;
    const void *next;
    uint32_t viewFormatCount;
    const VkFormat *viewFormats;
};

struct XrUuid
{
    uint8_t data[XR_UUID_SIZE];
};

struct XrActionStateFloat
{
    XrStructureType type;
    void *next;
    float currentState;
    XrBool32 changedSinceLastSync;
    XrTime lastChangeTime;
    XrBool32 isActive;
};

struct XrActionsSyncInfo
{
    XrStructureType type;
    const void *next;
    uint32_t countActiveActionSets;
    const XrActiveActionSet *activeActionSets;
};

struct XrApiLayerCreateInfo
{
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    void *loaderInstance;
    char settings_file_location[XR_API_LAYER_MAX_SETTINGS_PATH_SIZE];
    XrApiLayerNextInfo *nextInfo;
};

struct XrBaseInStructure
{
    XrStructureType type;
    const struct XrBaseInStructure *next;
};

struct XrBoundSourcesForActionEnumerateInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
};

struct XrColor3f
{
    float r;
    float g;
    float b;
};

struct XrCompositionLayerBaseHeader
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
};

struct XrCompositionLayerCubeKHR
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrEyeVisibility eyeVisibility;
    XrSwapchain swapchain;
    uint32_t imageArrayIndex;
    XrQuaternionf orientation;
};

struct XrCompositionLayerDepthTestVARJO
{
    XrStructureType type;
    const void *next;
    float depthTestRangeNearZ;
    float depthTestRangeFarZ;
};

struct XrCompositionLayerPassthroughFB
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags flags;
    XrSpace space;
    XrPassthroughLayerFB layerHandle;
};

struct XrCompositionLayerReprojectionPlaneOverrideMSFT
{
    XrStructureType type;
    const void *next;
    XrVector3f position;
    XrVector3f normal;
    XrVector3f velocity;
};

struct XrControllerModelNodePropertiesMSFT
{
    XrStructureType type;
    void *next;
    char parentNodeName[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT];
    char nodeName[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT];
};

struct XrControllerModelPropertiesMSFT
{
    XrStructureType type;
    void *next;
    uint32_t nodeCapacityInput;
    uint32_t nodeCountOutput;
    XrControllerModelNodePropertiesMSFT *nodeProperties;
};

struct XrDebugUtilsLabelEXT
{
    XrStructureType type;
    const void *next;
    const char *labelName;
};

struct XrDebugUtilsObjectNameInfoEXT
{
    XrStructureType type;
    const void *next;
    XrObjectType objectType;
    uint64_t WINE_XR_ALIGN(8) objectHandle;
    const char *objectName;
};

struct XrDigitalLensControlALMALENCE
{
    XrStructureType type;
    const void *next;
    XrDigitalLensControlFlagsALMALENCE flags;
};

struct XrEnvironmentDepthSwapchainCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrEnvironmentDepthSwapchainCreateFlagsMETA createFlags;
};

struct XrEventDataDisplayRefreshRateChangedFB
{
    XrStructureType type;
    const void *next;
    float fromDisplayRefreshRate;
    float toDisplayRefreshRate;
};

struct XrEventDataInstanceLossPending
{
    XrStructureType type;
    const void *next;
    XrTime lossTime;
};

struct XrEventDataMarkerTrackingUpdateVARJO
{
    XrStructureType type;
    const void *next;
    uint64_t WINE_XR_ALIGN(8) markerId;
    XrBool32 isActive;
    XrBool32 isPredicted;
    XrTime time;
};

struct XrEventDataSessionStateChanged
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrSessionState state;
    XrTime time;
};

struct XrEventDataSpaceQueryCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
};

struct XrEventDataVirtualKeyboardBackspaceMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardMETA keyboard;
};

struct XrEventDataVirtualKeyboardShownMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardMETA keyboard;
};

struct XrExtent2Df
{
    float width;
    float height;
};

struct XrExternalCameraIntrinsicsOCULUS
{
    XrTime lastChangeTime;
    XrFovf fov;
    float virtualNearPlaneDistance;
    float virtualFarPlaneDistance;
    XrExtent2Di imageSensorPixelResolution;
};

struct XrEyeTrackerCreateInfoFB
{
    XrStructureType type;
    const void *next;
};

struct XrFaceExpressionWeights2FB
{
    XrStructureType type;
    void *next;
    uint32_t weightCount;
    float *weights;
    uint32_t confidenceCount;
    float *confidences;
    XrBool32 isValid;
    XrBool32 isEyeFollowingBlendshapesValid;
    XrFaceTrackingDataSource2FB dataSource;
    XrTime time;
};

struct XrFacialExpressionsHTC
{
    XrStructureType type;
    const void *next;
    XrBool32 isActive;
    XrTime sampleTime;
    uint32_t expressionCount;
    float *expressionWeightings;
};

struct XrFoveationEyeTrackedProfileCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrFoveationEyeTrackedProfileCreateFlagsMETA flags;
};

struct XrFoveationProfileCreateInfoFB
{
    XrStructureType type;
    void *next;
};

struct XrFrameEndInfo
{
    XrStructureType type;
    const void *next;
    XrTime displayTime;
    XrEnvironmentBlendMode environmentBlendMode;
    uint32_t layerCount;
    const XrCompositionLayerBaseHeader * const*layers;
};

struct XrFutureCancelInfoEXT
{
    XrStructureType type;
    const void *next;
    XrFutureEXT future;
};

struct XrFuturePollResultEXT
{
    XrStructureType type;
    void *next;
    XrFutureStateEXT state;
};

struct XrGraphicsBindingD3D11KHR
{
    XrStructureType type;
    const void *next;
    ID3D11Device *device;
};

struct XrHandCapsuleFB
{
    XrVector3f points[XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB];
    float radius;
    XrHandJointEXT joint;
};

struct XrHandJointVelocityEXT
{
    XrSpaceVelocityFlags velocityFlags;
    XrVector3f linearVelocity;
    XrVector3f angularVelocity;
};

struct XrHandMeshVertexMSFT
{
    XrVector3f position;
    XrVector3f normal;
};

struct XrHandTrackingCapsulesStateFB
{
    XrStructureType type;
    void *next;
    XrHandCapsuleFB capsules[XR_HAND_TRACKING_CAPSULE_COUNT_FB];
};

struct XrHapticActionInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
    XrPath subactionPath;
};

struct XrHapticVibration
{
    XrStructureType type;
    const void *next;
    XrDuration duration;
    float frequency;
    float amplitude;
};

struct XrInteractionProfileSuggestedBinding
{
    XrStructureType type;
    const void *next;
    XrPath interactionProfile;
    uint32_t countSuggestedBindings;
    const XrActionSuggestedBinding *suggestedBindings;
};

struct XrLocalizationMapImportInfoML
{
    XrStructureType type;
    const void *next;
    uint32_t size;
    char *data;
};

struct XrMarkerDetectorArucoInfoML
{
    XrStructureType type;
    const void *next;
    XrMarkerArucoDictML arucoDict;
};

struct XrMarkerDetectorSnapshotInfoML
{
    XrStructureType type;
    const void *next;
};

struct XrNegotiateLoaderInfo
{
    XrLoaderInterfaceStructs structType;
    uint32_t structVersion;
    size_t structSize;
    uint32_t minInterfaceVersion;
    uint32_t maxInterfaceVersion;
    XrVersion minApiVersion;
    XrVersion maxApiVersion;
};

struct XrOffset2Di
{
    int32_t x;
    int32_t y;
};

struct XrPassthroughColorLutCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrPassthroughColorLutChannelsMETA channels;
    uint32_t resolution;
    XrPassthroughColorLutDataMETA data;
};

struct XrPassthroughColorMapLutMETA
{
    XrStructureType type;
    const void *next;
    XrPassthroughColorLutMETA colorLut;
    float weight;
};

struct XrPassthroughCreateInfoHTC
{
    XrStructureType type;
    const void *next;
    XrPassthroughFormHTC form;
};

struct XrPerformanceMetricsStateMETA
{
    XrStructureType type;
    const void *next;
    XrBool32 enabled;
};

struct XrPlaneDetectorGetInfoEXT
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
};

struct XrPosef
{
    XrQuaternionf orientation;
    XrVector3f position;
};

struct XrRect2Df
{
    XrOffset2Df offset;
    XrExtent2Df extent;
};

struct XrReferenceSpaceCreateInfo
{
    XrStructureType type;
    const void *next;
    XrReferenceSpaceType referenceSpaceType;
    XrPosef poseInReferenceSpace;
};

struct XrRenderModelPathInfoFB
{
    XrStructureType type;
    void *next;
    XrPath path;
};

struct XrSceneComponentLocationMSFT
{
    XrSpaceLocationFlags flags;
    XrPosef pose;
};

struct XrSceneComponentMSFT
{
    XrSceneComponentTypeMSFT componentType;
    XrUuidMSFT id;
    XrUuidMSFT parentId;
    XrTime updateTime;
};

struct XrSceneComponentsLocateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
    uint32_t componentIdCount;
    const XrUuidMSFT *componentIds;
};

struct XrSceneDeserializeInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t fragmentCount;
    const XrDeserializeSceneFragmentMSFT *fragments;
};

struct XrSceneMarkerMSFT
{
    XrSceneMarkerTypeMSFT markerType;
    XrTime lastSeenTime;
    XrOffset2Df center;
    XrExtent2Df size;
};

struct XrSceneMarkersMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t sceneMarkerCapacityInput;
    XrSceneMarkerMSFT *sceneMarkers;
};

struct XrSceneMeshIndicesUint32MSFT
{
    XrStructureType type;
    void *next;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint32_t *indices;
};

struct XrSceneObjectMSFT
{
    XrSceneObjectTypeMSFT objectType;
};

struct XrSceneOrientedBoxBoundMSFT
{
    XrPosef pose;
    XrVector3f extents;
};

struct XrSceneSphereBoundMSFT
{
    XrVector3f center;
    float radius;
};

struct XrSecondaryViewConfigurationLayerInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType viewConfigurationType;
    XrEnvironmentBlendMode environmentBlendMode;
    uint32_t layerCount;
    const XrCompositionLayerBaseHeader * const*layers;
};

struct XrSemanticLabelsFB
{
    XrStructureType type;
    const void *next;
    uint32_t bufferCapacityInput;
    uint32_t bufferCountOutput;
    char *buffer;
};

struct XrSessionBeginInfo
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType primaryViewConfigurationType;
};

struct XrSpaceComponentStatusFB
{
    XrStructureType type;
    void *next;
    XrBool32 enabled;
    XrBool32 changePending;
};

struct XrSpaceFilterInfoBaseHeaderFB
{
    XrStructureType type;
    const void *next;
};

struct XrSpaceLocationData
{
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
};

struct XrSpaceQueryInfoBaseHeaderFB
{
    XrStructureType type;
    const void *next;
};

struct XrSpaceShareInfoFB
{
    XrStructureType type;
    const void *next;
    uint32_t spaceCount;
    XrSpace *spaces;
    uint32_t userCount;
    XrSpaceUserFB *users;
};

struct XrSpaceTriangleMeshMETA
{
    XrStructureType type;
    void *next;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector3f *vertices;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint32_t *indices;
};

struct XrSpaceVelocity
{
    XrStructureType type;
    void *next;
    XrSpaceVelocityFlags velocityFlags;
    XrVector3f linearVelocity;
    XrVector3f angularVelocity;
};

struct XrSpacesLocateInfo
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
    uint32_t spaceCount;
    const XrSpace *spaces;
};

struct XrSpatialAnchorCreateInfoHTC
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrPosef poseInSpace;
    XrSpatialAnchorNameHTC name;
};

struct XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore;
    XrSpatialAnchorPersistenceNameMSFT spatialAnchorPersistenceName;
};

struct XrSpatialAnchorSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialAnchorMSFT anchor;
    XrPosef poseInAnchorSpace;
};

struct XrSpatialGraphNodeSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialGraphNodeTypeMSFT nodeType;
    uint8_t nodeId[XR_GUID_SIZE_MSFT];
    XrPosef pose;
};

struct XrSpheref
{
    XrPosef center;
    float radius;
};

struct XrSwapchainImageAcquireInfo
{
    XrStructureType type;
    const void *next;
};

struct XrSwapchainImageFoveationVulkanFB
{
    XrStructureType type;
    void *next;
    VkImage image;
    uint32_t width;
    uint32_t height;
};

struct XrSwapchainStateFoveationFB
{
    XrStructureType type;
    void *next;
    XrSwapchainStateFoveationFlagsFB flags;
    XrFoveationProfileFB profile;
};

struct XrSystemBodyTrackingPropertiesFB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsBodyTracking;
};

struct XrSystemEyeTrackingPropertiesFB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsEyeTracking;
};

struct XrSystemForceFeedbackCurlPropertiesMNDX
{
    XrStructureType type;
    void *next;
    XrBool32 supportsForceFeedbackCurl;
};

struct XrSystemGraphicsProperties
{
    uint32_t maxSwapchainImageHeight;
    uint32_t maxSwapchainImageWidth;
    uint32_t maxLayerCount;
};

struct XrSystemMarkerTrackingPropertiesVARJO
{
    XrStructureType type;
    void *next;
    XrBool32 supportsMarkerTracking;
};

struct XrSystemPassthroughPropertiesFB
{
    XrStructureType type;
    const void *next;
    XrBool32 supportsPassthrough;
};

struct XrSystemSpaceWarpPropertiesFB
{
    XrStructureType type;
    void *next;
    uint32_t recommendedMotionVectorImageRectWidth;
    uint32_t recommendedMotionVectorImageRectHeight;
};

struct XrSystemVirtualKeyboardPropertiesMETA
{
    XrStructureType type;
    void *next;
    XrBool32 supportsVirtualKeyboard;
};

struct XrVector4f
{
    float x;
    float y;
    float z;
    float w;
};

struct XrViewConfigurationProperties
{
    XrStructureType type;
    void *next;
    XrViewConfigurationType viewConfigurationType;
    XrBool32 fovMutable;
};

struct XrViewLocateInfo
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType viewConfigurationType;
    XrTime displayTime;
    XrSpace space;
};

struct XrVirtualKeyboardInputInfoMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardInputSourceMETA inputSource;
    XrSpace inputSpace;
    XrPosef inputPoseInSpace;
    XrVirtualKeyboardInputStateFlagsMETA inputState;
};

struct XrVirtualKeyboardSpaceCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardLocationTypeMETA locationType;
    XrSpace space;
    XrPosef poseInSpace;
};

struct XrViveTrackerPathsHTCX
{
    XrStructureType type;
    void *next;
    XrPath persistentPath;
    XrPath rolePath;
};

struct XrVulkanSwapchainCreateInfoMETA
{
    XrStructureType type;
    const void *next;
    VkImageCreateFlags additionalCreateFlags;
    VkImageUsageFlags additionalUsageFlags;
};

struct XrActionSetCreateInfo
{
    XrStructureType type;
    const void *next;
    char actionSetName[XR_MAX_ACTION_SET_NAME_SIZE];
    char localizedActionSetName[XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE];
    uint32_t priority;
};

struct XrActionStatePose
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
};

struct XrActiveActionSetPrioritiesEXT
{
    XrStructureType type;
    const void *next;
    uint32_t actionSetPriorityCount;
    const XrActiveActionSetPriorityEXT *actionSetPriorities;
};

struct XrBindingModificationBaseHeaderKHR
{
    XrStructureType type;
    const void *next;
};

struct XrBodyJointLocationFB
{
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
};

struct XrBodySkeletonJointFB
{
    int32_t joint;
    int32_t parentJoint;
    XrPosef pose;
};

struct XrBoxf
{
    XrPosef center;
    XrExtent3Df extents;
};

struct XrCompositionLayerPassthroughHTC
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrPassthroughHTC passthrough;
    XrPassthroughColorHTC color;
};

struct XrCompositionLayerSettingsFB
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerSettingsFlagsFB layerFlags;
};

struct XrControllerModelNodeStateMSFT
{
    XrStructureType type;
    void *next;
    XrPosef nodePose;
};

struct XrDebugUtilsMessengerCallbackDataEXT
{
    XrStructureType type;
    const void *next;
    const char *messageId;
    const char *functionName;
    const char *message;
    uint32_t objectCount;
    XrDebugUtilsObjectNameInfoEXT *objects;
    uint32_t sessionLabelCount;
    XrDebugUtilsLabelEXT *sessionLabels;
};

struct XrEnvironmentDepthImageAcquireInfoMETA
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrTime displayTime;
};

struct XrEnvironmentDepthImageViewMETA
{
    XrStructureType type;
    const void *next;
    XrFovf fov;
    XrPosef pose;
};

struct XrEventDataEyeCalibrationChangedML
{
    XrStructureType type;
    const void *next;
    XrEyeCalibrationStatusML status;
};

struct XrEventDataPerfSettingsEXT
{
    XrStructureType type;
    const void *next;
    XrPerfSettingsDomainEXT domain;
    XrPerfSettingsSubDomainEXT subDomain;
    XrPerfSettingsNotificationLevelEXT fromLevel;
    XrPerfSettingsNotificationLevelEXT toLevel;
};

struct XrEventDataSpaceEraseCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
    XrSpace space;
    XrUuidEXT uuid;
    XrSpaceStorageLocationFB location;
};

struct XrEventDataSpaceSetStatusCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
    XrSpace space;
    XrUuidEXT uuid;
    XrSpaceComponentTypeFB componentType;
    XrBool32 enabled;
};

struct XrEventDataVirtualKeyboardEnterMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardMETA keyboard;
};

struct XrEyeGazeFB
{
    XrBool32 isValid;
    XrPosef gazePose;
    float gazeConfidence;
};

struct XrFaceExpressionInfoFB
{
    XrStructureType type;
    const void *next;
    XrTime time;
};

struct XrForceFeedbackCurlApplyLocationMNDX
{
    XrForceFeedbackCurlLocationMNDX location;
    float value;
};

struct XrFrameBeginInfo
{
    XrStructureType type;
    const void *next;
};

struct XrFrustumf
{
    XrPosef pose;
    XrFovf fov;
    float nearZ;
    float farZ;
};

struct XrGeometryInstanceCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrPassthroughLayerFB layer;
    XrTriangleMeshFB mesh;
    XrSpace baseSpace;
    XrPosef pose;
    XrVector3f scale;
};

struct XrHandJointVelocitiesEXT
{
    XrStructureType type;
    void *next;
    uint32_t jointCount;
    XrHandJointVelocityEXT *jointVelocities;
};

struct XrHandMeshSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrHandPoseTypeMSFT handPoseType;
    XrPosef poseInHandMeshSpace;
};

struct XrHandTrackerCreateInfoEXT
{
    XrStructureType type;
    const void *next;
    XrHandEXT hand;
    XrHandJointSetEXT handJointSet;
};

struct XrHandTrackingDataSourceStateEXT
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
    XrHandTrackingDataSourceEXT dataSource;
};

struct XrHapticBaseHeader
{
    XrStructureType type;
    const void *next;
};

struct XrInteractionProfileAnalogThresholdVALVE
{
    XrStructureType type;
    const void *next;
    XrAction action;
    XrPath binding;
    float onThreshold;
    float offThreshold;
    const XrHapticBaseHeader *onHaptic;
    const XrHapticBaseHeader *offHaptic;
};

struct XrKeyboardTrackingDescriptionFB
{
    uint64_t WINE_XR_ALIGN(8) trackedKeyboardId;
    XrVector3f size;
    XrKeyboardTrackingFlagsFB flags;
    char name[XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB];
};

struct XrLocalizationMapML
{
    XrStructureType type;
    void *next;
    char name[XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML];
    XrUuidEXT mapUuid;
    XrLocalizationMapTypeML mapType;
};

struct XrMarkerDetectorCustomProfileInfoML
{
    XrStructureType type;
    const void *next;
    XrMarkerDetectorFpsML fpsHint;
    XrMarkerDetectorResolutionML resolutionHint;
    XrMarkerDetectorCameraML cameraHint;
    XrMarkerDetectorCornerRefineMethodML cornerRefineMethod;
    XrBool32 useEdgeRefinement;
    XrMarkerDetectorFullAnalysisIntervalML fullAnalysisIntervalHint;
};

struct XrMarkerSpaceCreateInfoVARJO
{
    XrStructureType type;
    const void *next;
    uint64_t WINE_XR_ALIGN(8) markerId;
    XrPosef poseInMarkerSpace;
};

struct XrPassthroughBrightnessContrastSaturationFB
{
    XrStructureType type;
    const void *next;
    float brightness;
    float contrast;
    float saturation;
};

struct XrPassthroughLayerCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrPassthroughFB passthrough;
    XrPassthroughFlagsFB flags;
    XrPassthroughLayerPurposeFB purpose;
};

struct XrPlaneDetectorBeginInfoEXT
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
    uint32_t orientationCount;
    const XrPlaneDetectorOrientationEXT *orientations;
    uint32_t semanticTypeCount;
    const XrPlaneDetectorSemanticTypeEXT *semanticTypes;
    uint32_t maxPlanes;
    float minArea;
    XrPosef boundingBoxPose;
    XrExtent3DfEXT boundingBoxExtent;
};

struct XrRecommendedLayerResolutionGetInfoMETA
{
    XrStructureType type;
    const void *next;
    const XrCompositionLayerBaseHeader *layer;
    XrTime predictedDisplayTime;
};

struct XrRenderModelCapabilitiesRequestFB
{
    XrStructureType type;
    void *next;
    XrRenderModelFlagsFB flags;
};

struct XrSceneComponentLocationsMSFT
{
    XrStructureType type;
    void *next;
    uint32_t locationCount;
    XrSceneComponentLocationMSFT *locations;
};

struct XrSceneComponentsMSFT
{
    XrStructureType type;
    void *next;
    uint32_t componentCapacityInput;
    uint32_t componentCountOutput;
    XrSceneComponentMSFT *components;
};

struct XrSceneMarkerQRCodesMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t qrCodeCapacityInput;
    XrSceneMarkerQRCodeMSFT *qrCodes;
};

struct XrSceneMeshVertexBufferMSFT
{
    XrStructureType type;
    void *next;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector3f *vertices;
};

struct XrScenePlaneMSFT
{
    XrScenePlaneAlignmentTypeMSFT alignment;
    XrExtent2Df size;
    uint64_t WINE_XR_ALIGN(8) meshBufferId;
    XrBool32 supportsIndicesUint16;
};

struct XrSecondaryViewConfigurationFrameEndInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t viewConfigurationCount;
    const XrSecondaryViewConfigurationLayerInfoMSFT *viewConfigurationLayersInfo;
};

struct XrSecondaryViewConfigurationStateMSFT
{
    XrStructureType type;
    void *next;
    XrViewConfigurationType viewConfigurationType;
    XrBool32 active;
};

struct XrSessionCreateInfoOverlayEXTX
{
    XrStructureType type;
    const void *next;
    XrOverlaySessionCreateFlagsEXTX createFlags;
    uint32_t sessionLayersPlacement;
};

struct XrSpaceLocation
{
    XrStructureType type;
    void *next;
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
};

struct XrSpaceQueryInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpaceQueryActionFB queryAction;
    uint32_t maxResultCount;
    XrDuration timeout;
    const XrSpaceFilterInfoBaseHeaderFB *filter;
    const XrSpaceFilterInfoBaseHeaderFB *excludeFilter;
};

struct XrSpaceTriangleMeshGetInfoMETA
{
    XrStructureType type;
    const void *next;
};

struct XrSpaceVelocityData
{
    XrSpaceVelocityFlags velocityFlags;
    XrVector3f linearVelocity;
    XrVector3f angularVelocity;
};

struct XrSpatialAnchorCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrPosef pose;
    XrTime time;
};

struct XrSpatialGraphNodeBindingPropertiesMSFT
{
    XrStructureType type;
    void *next;
    uint8_t nodeId[XR_GUID_SIZE_MSFT];
    XrPosef poseInNodeSpace;
};

struct XrSwapchainCreateInfo
{
    XrStructureType type;
    const void *next;
    XrSwapchainCreateFlags createFlags;
    XrSwapchainUsageFlags usageFlags;
    int64_t format;
    uint32_t sampleCount;
    uint32_t width;
    uint32_t height;
    uint32_t faceCount;
    uint32_t arraySize;
    uint32_t mipCount;
};

struct XrSwapchainImageOpenGLKHR
{
    XrStructureType type;
    void *next;
    uint32_t image;
};

struct XrSystemEnvironmentDepthPropertiesMETA
{
    XrStructureType type;
    void *next;
    XrBool32 supportsEnvironmentDepth;
    XrBool32 supportsHandRemoval;
};

struct XrSystemFoveationEyeTrackedPropertiesMETA
{
    XrStructureType type;
    void *next;
    XrBool32 supportsFoveationEyeTracked;
};

struct XrSystemHeadsetIdPropertiesMETA
{
    XrStructureType type;
    void *next;
    XrUuidEXT id;
};

struct XrSystemTrackingProperties
{
    XrBool32 orientationTracking;
    XrBool32 positionTracking;
};

struct XrVector2f
{
    float x;
    float y;
};

struct XrViewConfigurationViewFovEPIC
{
    XrStructureType type;
    const void *next;
    XrFovf recommendedFov;
    XrFovf maxMutableFov;
};

struct XrVirtualKeyboardLocationInfoMETA
{
    XrStructureType type;
    const void *next;
    XrVirtualKeyboardLocationTypeMETA locationType;
    XrSpace space;
    XrPosef poseInSpace;
    float scale;
};

struct XrVirtualKeyboardTextureDataMETA
{
    XrStructureType type;
    void *next;
    uint32_t textureWidth;
    uint32_t textureHeight;
    uint32_t bufferCapacityInput;
    uint32_t bufferCountOutput;
    uint8_t *buffer;
};

struct XrVulkanGraphicsDeviceGetInfoKHR
{
    XrStructureType type;
    const void *next;
    XrSystemId systemId;
    VkInstance vulkanInstance;
};

struct XrActionSpaceCreateInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
    XrPath subactionPath;
    XrPosef poseInActionSpace;
};

struct XrApiLayerProperties
{
    XrStructureType type;
    void *next;
    char layerName[XR_MAX_API_LAYER_NAME_SIZE];
    XrVersion specVersion;
    uint32_t layerVersion;
    char description[XR_MAX_API_LAYER_DESCRIPTION_SIZE];
};

struct XrBodyJointLocationsFB
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
    float confidence;
    uint32_t jointCount;
    XrBodyJointLocationFB *jointLocations;
    uint32_t skeletonChangedCount;
    XrTime time;
};

struct XrBoundary2DFB
{
    XrStructureType type;
    const void *next;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector2f *vertices;
};

struct XrControllerModelStateMSFT
{
    XrStructureType type;
    void *next;
    uint32_t nodeCapacityInput;
    uint32_t nodeCountOutput;
    XrControllerModelNodeStateMSFT *nodeStates;
};

struct XrEnvironmentDepthImageMETA
{
    XrStructureType type;
    const void *next;
    uint32_t swapchainIndex;
    float nearZ;
    float farZ;
    XrEnvironmentDepthImageViewMETA views[2];
};

struct XrEventDataLocalizationChangedML
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrLocalizationMapStateML state;
    XrLocalizationMapML map;
    XrLocalizationMapConfidenceML confidence;
    XrLocalizationMapErrorFlagsML errorFlags;
};

struct XrEventDataSpaceSaveCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
    XrSpace space;
    XrUuidEXT uuid;
    XrSpaceStorageLocationFB location;
};

struct XrEventDataViveTrackerConnectedHTCX
{
    XrStructureType type;
    const void *next;
    XrViveTrackerPathsHTCX *paths;
};

struct XrEyeGazesFB
{
    XrStructureType type;
    void *next;
    XrEyeGazeFB gaze[XR_EYE_POSITION_COUNT_FB];
    XrTime time;
};

struct XrForceFeedbackCurlApplyLocationsMNDX
{
    XrStructureType type;
    const void *next;
    uint32_t locationCount;
    XrForceFeedbackCurlApplyLocationMNDX *locations;
};

struct XrFoveationConfigurationHTC
{
    XrFoveationLevelHTC level;
    float clearFovDegree;
    XrVector2f focalCenterOffset;
};

struct XrFoveationEyeTrackedStateMETA
{
    XrStructureType type;
    void *next;
    XrVector2f foveationCenter[XR_FOVEATION_CENTER_SIZE_META];
    XrFoveationEyeTrackedStateFlagsMETA flags;
};

struct XrFutureCompletionEXT
{
    XrStructureType type;
    void *next;
    XrResult futureResult;
};

struct XrGraphicsRequirementsD3D11KHR
{
    XrStructureType type;
    void *next;
    LUID adapterLuid;
    D3D_FEATURE_LEVEL minFeatureLevel;
};

struct XrHandJointsMotionRangeInfoEXT
{
    XrStructureType type;
    const void *next;
    XrHandJointsMotionRangeEXT handJointsMotionRange;
};

struct XrHandMeshVertexBufferMSFT
{
    XrTime vertexUpdateTime;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrHandMeshVertexMSFT *vertices;
};

struct XrHandTrackingMeshFB
{
    XrStructureType type;
    void *next;
    uint32_t jointCapacityInput;
    uint32_t jointCountOutput;
    XrPosef *jointBindPoses;
    float *jointRadii;
    XrHandJointEXT *jointParents;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector3f *vertexPositions;
    XrVector3f *vertexNormals;
    XrVector2f *vertexUVs;
    XrVector4sFB *vertexBlendIndices;
    XrVector4f *vertexBlendWeights;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    int16_t *indices;
};

struct XrInteractionProfileDpadBindingEXT
{
    XrStructureType type;
    const void *next;
    XrPath binding;
    XrActionSet actionSet;
    float forceThreshold;
    float forceThresholdReleased;
    float centerRegion;
    float wedgeAngle;
    XrBool32 isSticky;
    const XrHapticBaseHeader *onHaptic;
    const XrHapticBaseHeader *offHaptic;
};

struct XrMapLocalizationRequestInfoML
{
    XrStructureType type;
    const void *next;
    XrUuidEXT mapUuid;
};

struct XrPassthroughColorLutUpdateInfoMETA
{
    XrStructureType type;
    const void *next;
    XrPassthroughColorLutDataMETA data;
};

struct XrPassthroughMeshTransformInfoHTC
{
    XrStructureType type;
    const void *next;
    uint32_t vertexCount;
    const XrVector3f *vertices;
    uint32_t indexCount;
    const uint32_t *indices;
    XrSpace baseSpace;
    XrTime time;
    XrPosef pose;
    XrVector3f scale;
};

struct XrPlaneDetectorLocationEXT
{
    XrStructureType type;
    void *next;
    uint64_t WINE_XR_ALIGN(8) planeId;
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
    XrExtent2Df extents;
    XrPlaneDetectorOrientationEXT orientation;
    XrPlaneDetectorSemanticTypeEXT semanticType;
    uint32_t polygonBufferCount;
};

struct XrPlaneDetectorPolygonBufferEXT
{
    XrStructureType type;
    void *next;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector2f *vertices;
};

struct XrRoomLayoutFB
{
    XrStructureType type;
    const void *next;
    XrUuidEXT floorUuid;
    XrUuidEXT ceilingUuid;
    uint32_t wallUuidCapacityInput;
    uint32_t wallUuidCountOutput;
    XrUuidEXT *wallUuids;
};

struct XrSceneComponentParentFilterInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrUuidMSFT parentId;
};

struct XrSceneMeshBuffersMSFT
{
    XrStructureType type;
    void *next;
};

struct XrScenePlanesMSFT
{
    XrStructureType type;
    void *next;
    uint32_t scenePlaneCount;
    XrScenePlaneMSFT *scenePlanes;
};

struct XrSerializedSceneFragmentDataGetInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrUuidMSFT sceneFragmentId;
};

struct XrSpaceLocations
{
    XrStructureType type;
    void *next;
    uint32_t locationCount;
    XrSpaceLocationData *locations;
};

struct XrSpaceUuidFilterInfoFB
{
    XrStructureType type;
    const void *next;
    uint32_t uuidCount;
    XrUuidEXT *uuids;
};

struct XrSpatialAnchorCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrPosef poseInSpace;
    XrTime time;
};

struct XrSpatialGraphStaticNodeBindingCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrPosef poseInSpace;
    XrTime time;
};

struct XrSwapchainImageWaitInfo
{
    XrStructureType type;
    const void *next;
    XrDuration timeout;
};

struct XrSystemFaceTrackingPropertiesFB
{
    XrStructureType type;
    void *next;
    XrBool32 supportsFaceTracking;
};

struct XrSystemPassthroughColorLutPropertiesMETA
{
    XrStructureType type;
    const void *next;
    uint32_t maxColorLutResolution;
};

struct XrTriangleMeshCreateInfoFB
{
    XrStructureType type;
    const void *next;
    XrTriangleMeshFlagsFB flags;
    XrWindingOrderFB windingOrder;
    uint32_t vertexCount;
    const XrVector3f *vertexBuffer;
    uint32_t triangleCount;
    const uint32_t *indexBuffer;
};

struct XrVirtualKeyboardAnimationStateMETA
{
    XrStructureType type;
    void *next;
    int32_t animationIndex;
    float fraction;
};

struct XrVisibilityMaskKHR
{
    XrStructureType type;
    void *next;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrVector2f *vertices;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint32_t *indices;
};

struct XrActionStateVector2f
{
    XrStructureType type;
    void *next;
    XrVector2f currentState;
    XrBool32 changedSinceLastSync;
    XrTime lastChangeTime;
    XrBool32 isActive;
};

struct XrBodySkeletonFB
{
    XrStructureType type;
    void *next;
    uint32_t jointCount;
    XrBodySkeletonJointFB *joints;
};

struct XrEventDataReferenceSpaceChangePending
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrReferenceSpaceType referenceSpaceType;
    XrTime changeTime;
    XrBool32 poseValid;
    XrPosef poseInPreviousSpace;
};

struct XrExternalCameraExtrinsicsOCULUS
{
    XrTime lastChangeTime;
    XrExternalCameraStatusFlagsOCULUS cameraStatusFlags;
    XrExternalCameraAttachedToDeviceOCULUS attachedToDevice;
    XrPosef relativePose;
};

struct XrFaceTrackerCreateInfo2FB
{
    XrStructureType type;
    const void *next;
    XrFaceExpressionSet2FB faceExpressionSet;
    uint32_t requestedDataSourceCount;
    XrFaceTrackingDataSource2FB *requestedDataSources;
};

struct XrFoveationCustomModeInfoHTC
{
    XrStructureType type;
    const void *next;
    uint32_t configCount;
    const XrFoveationConfigurationHTC *configs;
};

struct XrGeometryInstanceTransformFB
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
    XrPosef pose;
    XrVector3f scale;
};

struct XrHandMeshMSFT
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
    XrBool32 indexBufferChanged;
    XrBool32 vertexBufferChanged;
    XrHandMeshIndexBufferMSFT indexBuffer;
    XrHandMeshVertexBufferMSFT vertexBuffer;
};

struct XrInputSourceLocalizedNameGetInfo
{
    XrStructureType type;
    const void *next;
    XrPath sourcePath;
    XrInputSourceLocalizedNameFlags whichComponents;
};

struct XrMarkerSpaceCreateInfoML
{
    XrStructureType type;
    const void *next;
    XrMarkerDetectorML markerDetector;
    XrMarkerML marker;
    XrPosef poseInMarkerSpace;
};

struct XrPlaneDetectorLocationsEXT
{
    XrStructureType type;
    void *next;
    uint32_t planeLocationCapacityInput;
    uint32_t planeLocationCountOutput;
    XrPlaneDetectorLocationEXT *planeLocations;
};

struct XrSceneFrustumBoundMSFT
{
    XrPosef pose;
    XrFovf fov;
    float farDistance;
};

struct XrSecondaryViewConfigurationFrameStateMSFT
{
    XrStructureType type;
    void *next;
    uint32_t viewConfigurationCount;
    XrSecondaryViewConfigurationStateMSFT *viewConfigurationStates;
};

struct XrSpaceQueryResultFB
{
    XrSpace space;
    XrUuidEXT uuid;
};

struct XrSpaceVelocities
{
    XrStructureType type;
    void *next;
    uint32_t velocityCount;
    XrSpaceVelocityData *velocities;
};

struct XrSwapchainImageD3D11KHR
{
    XrStructureType type;
    void *next;
    ID3D11Texture2D *texture;
};

struct XrSystemHandTrackingPropertiesEXT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsHandTracking;
};

struct XrView
{
    XrStructureType type;
    void *next;
    XrPosef pose;
    XrFovf fov;
};

struct XrBindingModificationsKHR
{
    XrStructureType type;
    const void *next;
    uint32_t bindingModificationCount;
    const XrBindingModificationBaseHeaderKHR * const*bindingModifications;
};

struct XrEventDataBaseHeader
{
    XrStructureType type;
    const void *next;
};

struct XrExternalCameraOCULUS
{
    XrStructureType type;
    const void *next;
    char name[XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS];
    XrExternalCameraIntrinsicsOCULUS intrinsics;
    XrExternalCameraExtrinsicsOCULUS extrinsics;
};

struct XrFrameState
{
    XrStructureType type;
    void *next;
    XrTime predictedDisplayTime;
    XrDuration predictedDisplayPeriod;
    XrBool32 shouldRender;
};

struct XrHandTrackingAimStateFB
{
    XrStructureType type;
    void *next;
    XrHandTrackingAimFlagsFB status;
    XrPosef aimPose;
    float pinchStrengthIndex;
    float pinchStrengthMiddle;
    float pinchStrengthRing;
    float pinchStrengthLittle;
};

struct XrRect2Di
{
    XrOffset2Di offset;
    XrExtent2Di extent;
};

struct XrSceneObjectsMSFT
{
    XrStructureType type;
    void *next;
    uint32_t sceneObjectCount;
    XrSceneObjectMSFT *sceneObjects;
};

struct XrSpaceQueryResultsFB
{
    XrStructureType type;
    void *next;
    uint32_t resultCapacityInput;
    uint32_t resultCountOutput;
    XrSpaceQueryResultFB *results;
};

struct XrSwapchainSubImage
{
    XrSwapchain swapchain;
    XrRect2Di imageRect;
    uint32_t imageArrayIndex;
};

struct XrVirtualKeyboardModelAnimationStatesMETA
{
    XrStructureType type;
    void *next;
    uint32_t stateCapacityInput;
    uint32_t stateCountOutput;
    XrVirtualKeyboardAnimationStateMETA *states;
};

struct XrColor4f
{
    float r;
    float g;
    float b;
    float a;
};

struct XrCompositionLayerCylinderKHR
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrEyeVisibility eyeVisibility;
    XrSwapchainSubImage subImage;
    XrPosef pose;
    float radius;
    float centralAngle;
    float aspectRatio;
};

struct XrCompositionLayerEquirect2KHR
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrEyeVisibility eyeVisibility;
    XrSwapchainSubImage subImage;
    XrPosef pose;
    float radius;
    float centralHorizontalAngle;
    float upperVerticalAngle;
    float lowerVerticalAngle;
};

struct XrCompositionLayerProjectionView
{
    XrStructureType type;
    const void *next;
    XrPosef pose;
    XrFovf fov;
    XrSwapchainSubImage subImage;
};

struct XrCompositionLayerSpaceWarpInfoFB
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerSpaceWarpInfoFlagsFB layerFlags;
    XrSwapchainSubImage motionVectorSubImage;
    XrPosef appSpaceDeltaPose;
    XrSwapchainSubImage depthSubImage;
    float minDepth;
    float maxDepth;
    float nearZ;
    float farZ;
};

struct XrFoveationApplyInfoHTC
{
    XrStructureType type;
    const void *next;
    XrFoveationModeHTC mode;
    uint32_t subImageCount;
    XrSwapchainSubImage *subImages;
};

struct XrLocalDimmingFrameEndInfoMETA
{
    XrStructureType type;
    const void *next;
    XrLocalDimmingModeMETA localDimmingMode;
};

struct XrPassthroughColorMapMonoToRgbaFB
{
    XrStructureType type;
    const void *next;
    XrColor4f textureColorMap[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB];
};

struct XrSceneBoundsMSFT
{
    XrSpace space;
    XrTime time;
    uint32_t sphereCount;
    const XrSceneSphereBoundMSFT *spheres;
    uint32_t boxCount;
    const XrSceneOrientedBoxBoundMSFT *boxes;
    uint32_t frustumCount;
    const XrSceneFrustumBoundMSFT *frustums;
};

struct XrSpatialAnchorPersistenceInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialAnchorPersistenceNameMSFT spatialAnchorPersistenceName;
    XrSpatialAnchorMSFT spatialAnchor;
};

struct XrSystemProperties
{
    XrStructureType type;
    void *next;
    XrSystemId systemId;
    uint32_t vendorId;
    char systemName[XR_MAX_SYSTEM_NAME_SIZE];
    XrSystemGraphicsProperties graphicsProperties;
    XrSystemTrackingProperties trackingProperties;
};

struct XrCompositionLayerColorScaleBiasKHR
{
    XrStructureType type;
    const void *next;
    XrColor4f colorScale;
    XrColor4f colorBias;
};

struct XrCompositionLayerEquirectKHR
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrEyeVisibility eyeVisibility;
    XrSwapchainSubImage subImage;
    XrPosef pose;
    float radius;
    XrVector2f scale;
    XrVector2f bias;
};

struct XrCompositionLayerQuad
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    XrEyeVisibility eyeVisibility;
    XrSwapchainSubImage subImage;
    XrPosef pose;
    XrExtent2Df size;
};

struct XrHandJointLocationEXT
{
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
    float radius;
};

struct XrNewSceneComputeInfoMSFT
{
    XrStructureType type;
    const void *next;
    uint32_t requestedFeatureCount;
    const XrSceneComputeFeatureMSFT *requestedFeatures;
    XrSceneComputeConsistencyMSFT consistency;
    XrSceneBoundsMSFT bounds;
};

struct XrSpaceContainerFB
{
    XrStructureType type;
    const void *next;
    uint32_t uuidCapacityInput;
    uint32_t uuidCountOutput;
    XrUuidEXT *uuids;
};

struct XrCompositionLayerDepthInfoKHR
{
    XrStructureType type;
    const void *next;
    XrSwapchainSubImage subImage;
    float minDepth;
    float maxDepth;
    float nearZ;
    float farZ;
};

struct XrEventDataSpatialAnchorCreateCompleteFB
{
    XrStructureType type;
    const void *next;
    XrAsyncRequestIdFB requestId;
    XrResult result;
    XrSpace space;
    XrUuidEXT uuid;
};

struct XrPassthroughStyleFB
{
    XrStructureType type;
    const void *next;
    float textureOpacityFactor;
    XrColor4f edgeColor;
};

struct XrCompositionLayerProjection
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
    uint32_t viewCount;
    const XrCompositionLayerProjectionView *views;
};

struct XrSwapchainStateSamplerVulkanFB
{
    XrStructureType type;
    void *next;
    VkFilter minFilter;
    VkFilter magFilter;
    VkSamplerMipmapMode mipmapMode;
    VkSamplerAddressMode wrapModeS;
    VkSamplerAddressMode wrapModeT;
    VkComponentSwizzle swizzleRed;
    VkComponentSwizzle swizzleGreen;
    VkComponentSwizzle swizzleBlue;
    VkComponentSwizzle swizzleAlpha;
    float maxAnisotropy;
    XrColor4f borderColor;
};

struct XrHandJointLocationsEXT
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
    uint32_t jointCount;
    XrHandJointLocationEXT *jointLocations;
};

typedef XrResult (XRAPI_PTR *PFN_xrAcquireEnvironmentDepthImageMETA)(XrEnvironmentDepthProviderMETA, const XrEnvironmentDepthImageAcquireInfoMETA *, XrEnvironmentDepthImageMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrAcquireSwapchainImage)(XrSwapchain, const XrSwapchainImageAcquireInfo *, uint32_t *);
typedef XrResult (XRAPI_PTR *PFN_xrApplyForceFeedbackCurlMNDX)(XrHandTrackerEXT, const XrForceFeedbackCurlApplyLocationsMNDX *);
typedef XrResult (XRAPI_PTR *PFN_xrApplyFoveationHTC)(XrSession, const XrFoveationApplyInfoHTC *);
typedef XrResult (XRAPI_PTR *PFN_xrApplyHapticFeedback)(XrSession, const XrHapticActionInfo *, const XrHapticBaseHeader *);
typedef XrResult (XRAPI_PTR *PFN_xrAttachSessionActionSets)(XrSession, const XrSessionActionSetsAttachInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrBeginFrame)(XrSession, const XrFrameBeginInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrBeginPlaneDetectionEXT)(XrPlaneDetectorEXT, const XrPlaneDetectorBeginInfoEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrBeginSession)(XrSession, const XrSessionBeginInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrCancelFutureEXT)(XrInstance, const XrFutureCancelInfoEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrChangeVirtualKeyboardTextContextMETA)(XrVirtualKeyboardMETA, const XrVirtualKeyboardTextContextChangeInfoMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrClearSpatialAnchorStoreMSFT)(XrSpatialAnchorStoreConnectionMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrComputeNewSceneMSFT)(XrSceneObserverMSFT, const XrNewSceneComputeInfoMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrConvertTimeToWin32PerformanceCounterKHR)(XrInstance, XrTime, LARGE_INTEGER *);
typedef XrResult (XRAPI_PTR *PFN_xrConvertWin32PerformanceCounterToTimeKHR)(XrInstance, const LARGE_INTEGER *, XrTime *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateAction)(XrActionSet, const XrActionCreateInfo *, XrAction *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSet)(XrInstance, const XrActionSetCreateInfo *, XrActionSet *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSpace)(XrSession, const XrActionSpaceCreateInfo *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateApiLayerInstance)(const XrInstanceCreateInfo *, const XrApiLayerCreateInfo *, XrInstance *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateBodyTrackerFB)(XrSession, const XrBodyTrackerCreateInfoFB *, XrBodyTrackerFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEnvironmentDepthProviderMETA)(XrSession, const XrEnvironmentDepthProviderCreateInfoMETA *, XrEnvironmentDepthProviderMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEnvironmentDepthSwapchainMETA)(XrEnvironmentDepthProviderMETA, const XrEnvironmentDepthSwapchainCreateInfoMETA *, XrEnvironmentDepthSwapchainMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateExportedLocalizationMapML)(XrSession, const XrUuidEXT *, XrExportedLocalizationMapML *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateEyeTrackerFB)(XrSession, const XrEyeTrackerCreateInfoFB *, XrEyeTrackerFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFaceTracker2FB)(XrSession, const XrFaceTrackerCreateInfo2FB *, XrFaceTracker2FB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFaceTrackerFB)(XrSession, const XrFaceTrackerCreateInfoFB *, XrFaceTrackerFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFacialTrackerHTC)(XrSession, const XrFacialTrackerCreateInfoHTC *, XrFacialTrackerHTC *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateFoveationProfileFB)(XrSession, const XrFoveationProfileCreateInfoFB *, XrFoveationProfileFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateGeometryInstanceFB)(XrSession, const XrGeometryInstanceCreateInfoFB *, XrGeometryInstanceFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandMeshSpaceMSFT)(XrHandTrackerEXT, const XrHandMeshSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandTrackerEXT)(XrSession, const XrHandTrackerCreateInfoEXT *, XrHandTrackerEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateInstance)(const XrInstanceCreateInfo *, XrInstance *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateKeyboardSpaceFB)(XrSession, const XrKeyboardSpaceCreateInfoFB *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerDetectorML)(XrSession, const XrMarkerDetectorCreateInfoML *, XrMarkerDetectorML *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerSpaceML)(XrSession, const XrMarkerSpaceCreateInfoML *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateMarkerSpaceVARJO)(XrSession, const XrMarkerSpaceCreateInfoVARJO *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughColorLutMETA)(XrPassthroughFB, const XrPassthroughColorLutCreateInfoMETA *, XrPassthroughColorLutMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughFB)(XrSession, const XrPassthroughCreateInfoFB *, XrPassthroughFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughHTC)(XrSession, const XrPassthroughCreateInfoHTC *, XrPassthroughHTC *);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePassthroughLayerFB)(XrSession, const XrPassthroughLayerCreateInfoFB *, XrPassthroughLayerFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreatePlaneDetectorEXT)(XrSession, const XrPlaneDetectorCreateInfoEXT *, XrPlaneDetectorEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateReferenceSpace)(XrSession, const XrReferenceSpaceCreateInfo *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSceneMSFT)(XrSceneObserverMSFT, const XrSceneCreateInfoMSFT *, XrSceneMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSceneObserverMSFT)(XrSession, const XrSceneObserverCreateInfoMSFT *, XrSceneObserverMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSession)(XrInstance, const XrSessionCreateInfo *, XrSession *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpaceUserFB)(XrSession, const XrSpaceUserCreateInfoFB *, XrSpaceUserFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorFB)(XrSession, const XrSpatialAnchorCreateInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorFromPersistedNameMSFT)(XrSession, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *, XrSpatialAnchorMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorHTC)(XrSession, const XrSpatialAnchorCreateInfoHTC *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorMSFT)(XrSession, const XrSpatialAnchorCreateInfoMSFT *, XrSpatialAnchorMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorSpaceMSFT)(XrSession, const XrSpatialAnchorSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorStoreConnectionMSFT)(XrSession, XrSpatialAnchorStoreConnectionMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialGraphNodeSpaceMSFT)(XrSession, const XrSpatialGraphNodeSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSwapchain)(XrSession, const XrSwapchainCreateInfo *, XrSwapchain *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateTriangleMeshFB)(XrSession, const XrTriangleMeshCreateInfoFB *, XrTriangleMeshFB *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVirtualKeyboardMETA)(XrSession, const XrVirtualKeyboardCreateInfoMETA *, XrVirtualKeyboardMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVirtualKeyboardSpaceMETA)(XrSession, XrVirtualKeyboardMETA, const XrVirtualKeyboardSpaceCreateInfoMETA *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVulkanDeviceKHR)(XrInstance, const XrVulkanDeviceCreateInfoKHR *, VkDevice *, VkResult *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateVulkanInstanceKHR)(XrInstance, const XrVulkanInstanceCreateInfoKHR *, VkInstance *, VkResult *);
typedef XrResult (XRAPI_PTR *PFN_xrDeserializeSceneMSFT)(XrSceneObserverMSFT, const XrSceneDeserializeInfoMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyAction)(XrAction);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyActionSet)(XrActionSet);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyBodyTrackerFB)(XrBodyTrackerFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEnvironmentDepthSwapchainMETA)(XrEnvironmentDepthSwapchainMETA);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyExportedLocalizationMapML)(XrExportedLocalizationMapML);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyEyeTrackerFB)(XrEyeTrackerFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFaceTracker2FB)(XrFaceTracker2FB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFaceTrackerFB)(XrFaceTrackerFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFacialTrackerHTC)(XrFacialTrackerHTC);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyFoveationProfileFB)(XrFoveationProfileFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyGeometryInstanceFB)(XrGeometryInstanceFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyHandTrackerEXT)(XrHandTrackerEXT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyInstance)(XrInstance);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyMarkerDetectorML)(XrMarkerDetectorML);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughColorLutMETA)(XrPassthroughColorLutMETA);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughFB)(XrPassthroughFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughHTC)(XrPassthroughHTC);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPassthroughLayerFB)(XrPassthroughLayerFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyPlaneDetectorEXT)(XrPlaneDetectorEXT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySceneMSFT)(XrSceneMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySceneObserverMSFT)(XrSceneObserverMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpace)(XrSpace);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpaceUserFB)(XrSpaceUserFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorMSFT)(XrSpatialAnchorMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorStoreConnectionMSFT)(XrSpatialAnchorStoreConnectionMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialGraphNodeBindingMSFT)(XrSpatialGraphNodeBindingMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySwapchain)(XrSwapchain);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyTriangleMeshFB)(XrTriangleMeshFB);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyVirtualKeyboardMETA)(XrVirtualKeyboardMETA);
typedef XrResult (XRAPI_PTR *PFN_xrEnableLocalizationEventsML)(XrSession, const XrLocalizationEnableEventsInfoML *);
typedef XrResult (XRAPI_PTR *PFN_xrEnableUserCalibrationEventsML)(XrInstance, const XrUserCalibrationEnableEventsInfoML *);
typedef XrResult (XRAPI_PTR *PFN_xrEndFrame)(XrSession, const XrFrameEndInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrEndSession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateApiLayerProperties)(uint32_t, uint32_t *, XrApiLayerProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateBoundSourcesForAction)(XrSession, const XrBoundSourcesForActionEnumerateInfo *, uint32_t, uint32_t *, XrPath *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateColorSpacesFB)(XrSession, uint32_t, uint32_t *, XrColorSpaceFB *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateDisplayRefreshRatesFB)(XrSession, uint32_t, uint32_t *, float *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateEnvironmentBlendModes)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrEnvironmentBlendMode *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateEnvironmentDepthSwapchainImagesMETA)(XrEnvironmentDepthSwapchainMETA, uint32_t, uint32_t *, XrSwapchainImageBaseHeader *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateExternalCamerasOCULUS)(XrSession, uint32_t, uint32_t *, XrExternalCameraOCULUS *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateInstanceExtensionProperties)(const char *, uint32_t, uint32_t *, XrExtensionProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumeratePerformanceMetricsCounterPathsMETA)(XrInstance, uint32_t, uint32_t *, XrPath *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumeratePersistedSpatialAnchorNamesMSFT)(XrSpatialAnchorStoreConnectionMSFT, uint32_t, uint32_t *, XrSpatialAnchorPersistenceNameMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateReferenceSpaces)(XrSession, uint32_t, uint32_t *, XrReferenceSpaceType *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateRenderModelPathsFB)(XrSession, uint32_t, uint32_t *, XrRenderModelPathInfoFB *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateReprojectionModesMSFT)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrReprojectionModeMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSceneComputeFeaturesMSFT)(XrInstance, XrSystemId, uint32_t, uint32_t *, XrSceneComputeFeatureMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSpaceSupportedComponentsFB)(XrSpace, uint32_t, uint32_t *, XrSpaceComponentTypeFB *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainFormats)(XrSession, uint32_t, uint32_t *, int64_t *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainImages)(XrSwapchain, uint32_t, uint32_t *, XrSwapchainImageBaseHeader *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurationViews)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrViewConfigurationView *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurations)(XrInstance, XrSystemId, uint32_t, uint32_t *, XrViewConfigurationType *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViveTrackerPathsHTCX)(XrInstance, uint32_t, uint32_t *, XrViveTrackerPathsHTCX *);
typedef XrResult (XRAPI_PTR *PFN_xrEraseSpaceFB)(XrSession, const XrSpaceEraseInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGeometryInstanceSetTransformFB)(XrGeometryInstanceFB, const XrGeometryInstanceTransformFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateBoolean)(XrSession, const XrActionStateGetInfo *, XrActionStateBoolean *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateFloat)(XrSession, const XrActionStateGetInfo *, XrActionStateFloat *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStatePose)(XrSession, const XrActionStateGetInfo *, XrActionStatePose *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateVector2f)(XrSession, const XrActionStateGetInfo *, XrActionStateVector2f *);
typedef XrResult (XRAPI_PTR *PFN_xrGetAudioInputDeviceGuidOculus)(XrInstance, wchar_t[]);
typedef XrResult (XRAPI_PTR *PFN_xrGetAudioOutputDeviceGuidOculus)(XrInstance, wchar_t[]);
typedef XrResult (XRAPI_PTR *PFN_xrGetBodySkeletonFB)(XrBodyTrackerFB, XrBodySkeletonFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelKeyMSFT)(XrSession, XrPath, XrControllerModelKeyStateMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelPropertiesMSFT)(XrSession, XrControllerModelKeyMSFT, XrControllerModelPropertiesMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetControllerModelStateMSFT)(XrSession, XrControllerModelKeyMSFT, XrControllerModelStateMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetCurrentInteractionProfile)(XrSession, XrPath, XrInteractionProfileState *);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D11GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D11KHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D12GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D12KHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetDeviceSampleRateFB)(XrSession, const XrHapticActionInfo *, XrDevicePcmSampleRateGetInfoFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetDisplayRefreshRateFB)(XrSession, float *);
typedef XrResult (XRAPI_PTR *PFN_xrGetEnvironmentDepthSwapchainStateMETA)(XrEnvironmentDepthSwapchainMETA, XrEnvironmentDepthSwapchainStateMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetExportedLocalizationMapDataML)(XrExportedLocalizationMapML, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetEyeGazesFB)(XrEyeTrackerFB, const XrEyeGazesInfoFB *, XrEyeGazesFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetFaceExpressionWeights2FB)(XrFaceTracker2FB, const XrFaceExpressionInfo2FB *, XrFaceExpressionWeights2FB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetFaceExpressionWeightsFB)(XrFaceTrackerFB, const XrFaceExpressionInfoFB *, XrFaceExpressionWeightsFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetFacialExpressionsHTC)(XrFacialTrackerHTC, XrFacialExpressionsHTC *);
typedef XrResult (XRAPI_PTR *PFN_xrGetFoveationEyeTrackedStateMETA)(XrSession, XrFoveationEyeTrackedStateMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetHandMeshFB)(XrHandTrackerEXT, XrHandTrackingMeshFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInputSourceLocalizedName)(XrSession, const XrInputSourceLocalizedNameGetInfo *, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProcAddr)(XrInstance, const char *, PFN_xrVoidFunction *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProperties)(XrInstance, XrInstanceProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerDetectorStateML)(XrMarkerDetectorML, XrMarkerDetectorStateML *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerLengthML)(XrMarkerDetectorML, XrMarkerML, float *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerNumberML)(XrMarkerDetectorML, XrMarkerML, uint64_t *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerReprojectionErrorML)(XrMarkerDetectorML, XrMarkerML, float *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerSizeVARJO)(XrSession, uint64_t, XrExtent2Df *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkerStringML)(XrMarkerDetectorML, XrMarkerML, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetMarkersML)(XrMarkerDetectorML, uint32_t, uint32_t *, XrMarkerML *);
typedef XrResult (XRAPI_PTR *PFN_xrGetOpenGLGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsOpenGLKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetPassthroughPreferencesMETA)(XrSession, XrPassthroughPreferencesMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetPerformanceMetricsStateMETA)(XrSession, XrPerformanceMetricsStateMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlaneDetectionStateEXT)(XrPlaneDetectorEXT, XrPlaneDetectionStateEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlaneDetectionsEXT)(XrPlaneDetectorEXT, const XrPlaneDetectorGetInfoEXT *, XrPlaneDetectorLocationsEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetPlanePolygonBufferEXT)(XrPlaneDetectorEXT, uint64_t, uint32_t, XrPlaneDetectorPolygonBufferEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetRecommendedLayerResolutionMETA)(XrSession, const XrRecommendedLayerResolutionGetInfoMETA *, XrRecommendedLayerResolutionMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetReferenceSpaceBoundsRect)(XrSession, XrReferenceSpaceType, XrExtent2Df *);
typedef XrResult (XRAPI_PTR *PFN_xrGetRenderModelPropertiesFB)(XrSession, XrPath, XrRenderModelPropertiesFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneComponentsMSFT)(XrSceneMSFT, const XrSceneComponentsGetInfoMSFT *, XrSceneComponentsMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneComputeStateMSFT)(XrSceneObserverMSFT, XrSceneComputeStateMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMarkerDecodedStringMSFT)(XrSceneMSFT, const XrUuidMSFT *, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMarkerRawDataMSFT)(XrSceneMSFT, const XrUuidMSFT *, uint32_t, uint32_t *, uint8_t *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSceneMeshBuffersMSFT)(XrSceneMSFT, const XrSceneMeshBuffersGetInfoMSFT *, XrSceneMeshBuffersMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSerializedSceneFragmentDataMSFT)(XrSceneMSFT, const XrSerializedSceneFragmentDataGetInfoMSFT *, uint32_t, uint32_t *, uint8_t *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundary2DFB)(XrSession, XrSpace, XrBoundary2DFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundingBox2DFB)(XrSession, XrSpace, XrRect2Df *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceBoundingBox3DFB)(XrSession, XrSpace, XrRect3DfFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceComponentStatusFB)(XrSpace, XrSpaceComponentTypeFB, XrSpaceComponentStatusFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceContainerFB)(XrSession, XrSpace, XrSpaceContainerFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceRoomLayoutFB)(XrSession, XrSpace, XrRoomLayoutFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceSemanticLabelsFB)(XrSession, XrSpace, XrSemanticLabelsFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceTriangleMeshMETA)(XrSpace, const XrSpaceTriangleMeshGetInfoMETA *, XrSpaceTriangleMeshMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceUserIdFB)(XrSpaceUserFB, XrSpaceUserIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpaceUuidFB)(XrSpace, XrUuidEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialAnchorNameHTC)(XrSpace, XrSpatialAnchorNameHTC *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSpatialGraphNodeBindingPropertiesMSFT)(XrSpatialGraphNodeBindingMSFT, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *, XrSpatialGraphNodeBindingPropertiesMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSwapchainStateFB)(XrSwapchain, XrSwapchainStateBaseHeaderFB *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystem)(XrInstance, const XrSystemGetInfo *, XrSystemId *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystemProperties)(XrInstance, XrSystemId, XrSystemProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetViewConfigurationProperties)(XrInstance, XrSystemId, XrViewConfigurationType, XrViewConfigurationProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardDirtyTexturesMETA)(XrVirtualKeyboardMETA, uint32_t, uint32_t *, uint64_t *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardModelAnimationStatesMETA)(XrVirtualKeyboardMETA, XrVirtualKeyboardModelAnimationStatesMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardScaleMETA)(XrVirtualKeyboardMETA, float *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVirtualKeyboardTextureDataMETA)(XrVirtualKeyboardMETA, uint64_t, XrVirtualKeyboardTextureDataMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVisibilityMaskKHR)(XrSession, XrViewConfigurationType, uint32_t, XrVisibilityMaskTypeKHR, XrVisibilityMaskKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanDeviceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsDevice2KHR)(XrInstance, const XrVulkanGraphicsDeviceGetInfoKHR *, VkPhysicalDevice *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsDeviceKHR)(XrInstance, XrSystemId, VkInstance, VkPhysicalDevice *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsRequirements2KHR)(XrInstance, XrSystemId, XrGraphicsRequirementsVulkanKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsVulkanKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanInstanceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrImportLocalizationMapML)(XrSession, const XrLocalizationMapImportInfoML *, XrUuidEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrLoadControllerModelMSFT)(XrSession, XrControllerModelKeyMSFT, uint32_t, uint32_t *, uint8_t *);
typedef XrResult (XRAPI_PTR *PFN_xrLoadRenderModelFB)(XrSession, const XrRenderModelLoadInfoFB *, XrRenderModelBufferFB *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateBodyJointsFB)(XrBodyTrackerFB, const XrBodyJointsLocateInfoFB *, XrBodyJointLocationsFB *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateHandJointsEXT)(XrHandTrackerEXT, const XrHandJointsLocateInfoEXT *, XrHandJointLocationsEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSceneComponentsMSFT)(XrSceneMSFT, const XrSceneComponentsLocateInfoMSFT *, XrSceneComponentLocationsMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpace)(XrSpace, XrSpace, XrTime, XrSpaceLocation *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpaces)(XrSession, const XrSpacesLocateInfo *, XrSpaceLocations *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpacesKHR)(XrSession, const XrSpacesLocateInfo *, XrSpaceLocations *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateViews)(XrSession, const XrViewLocateInfo *, XrViewState *, uint32_t, uint32_t *, XrView *);
typedef XrResult (XRAPI_PTR *PFN_xrNegotiateLoaderApiLayerInterface)(const XrNegotiateLoaderInfo *, const char *, XrNegotiateApiLayerRequest *);
typedef XrResult (XRAPI_PTR *PFN_xrNegotiateLoaderRuntimeInterface)(const XrNegotiateLoaderInfo *, XrNegotiateRuntimeRequest *);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerPauseFB)(XrPassthroughLayerFB);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerResumeFB)(XrPassthroughLayerFB);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerSetKeyboardHandsIntensityFB)(XrPassthroughLayerFB, const XrPassthroughKeyboardHandsIntensityFB *);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughLayerSetStyleFB)(XrPassthroughLayerFB, const XrPassthroughStyleFB *);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughPauseFB)(XrPassthroughFB);
typedef XrResult (XRAPI_PTR *PFN_xrPassthroughStartFB)(XrPassthroughFB);
typedef XrResult (XRAPI_PTR *PFN_xrPathToString)(XrInstance, XrPath, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrPerfSettingsSetPerformanceLevelEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsLevelEXT);
typedef XrResult (XRAPI_PTR *PFN_xrPersistSpatialAnchorMSFT)(XrSpatialAnchorStoreConnectionMSFT, const XrSpatialAnchorPersistenceInfoMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrPollEvent)(XrInstance, XrEventDataBuffer *);
typedef XrResult (XRAPI_PTR *PFN_xrPollFutureEXT)(XrInstance, const XrFuturePollInfoEXT *, XrFuturePollResultEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrQueryLocalizationMapsML)(XrSession, const XrLocalizationMapQueryInfoBaseHeaderML *, uint32_t, uint32_t *, XrLocalizationMapML *);
typedef XrResult (XRAPI_PTR *PFN_xrQueryPerformanceMetricsCounterMETA)(XrSession, XrPath, XrPerformanceMetricsCounterMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySpacesFB)(XrSession, const XrSpaceQueryInfoBaseHeaderFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrQuerySystemTrackedKeyboardFB)(XrSession, const XrKeyboardTrackingQueryFB *, XrKeyboardTrackingDescriptionFB *);
typedef XrResult (XRAPI_PTR *PFN_xrReleaseSwapchainImage)(XrSwapchain, const XrSwapchainImageReleaseInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrRequestDisplayRefreshRateFB)(XrSession, float);
typedef XrResult (XRAPI_PTR *PFN_xrRequestExitSession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrRequestMapLocalizationML)(XrSession, const XrMapLocalizationRequestInfoML *);
typedef XrResult (XRAPI_PTR *PFN_xrRequestSceneCaptureFB)(XrSession, const XrSceneCaptureRequestInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrResultToString)(XrInstance, XrResult, char[]);
typedef XrResult (XRAPI_PTR *PFN_xrRetrieveSpaceQueryResultsFB)(XrSession, XrAsyncRequestIdFB, XrSpaceQueryResultsFB *);
typedef XrResult (XRAPI_PTR *PFN_xrSaveSpaceFB)(XrSession, const XrSpaceSaveInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrSaveSpaceListFB)(XrSession, const XrSpaceListSaveInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrSendVirtualKeyboardInputMETA)(XrVirtualKeyboardMETA, const XrVirtualKeyboardInputInfoMETA *, XrPosef *);
typedef XrResult (XRAPI_PTR *PFN_xrSetColorSpaceFB)(XrSession, const XrColorSpaceFB);
typedef XrResult (XRAPI_PTR *PFN_xrSetDigitalLensControlALMALENCE)(XrSession, const XrDigitalLensControlALMALENCE *);
typedef XrResult (XRAPI_PTR *PFN_xrSetEnvironmentDepthEstimationVARJO)(XrSession, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetEnvironmentDepthHandRemovalMETA)(XrEnvironmentDepthProviderMETA, const XrEnvironmentDepthHandRemovalSetInfoMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceActiveEXT)(XrSession, XrPath, XrPath, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceLocationEXT)(XrSession, XrPath, XrPath, XrSpace, XrPosef);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateBoolEXT)(XrSession, XrPath, XrPath, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateFloatEXT)(XrSession, XrPath, XrPath, float);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateVector2fEXT)(XrSession, XrPath, XrPath, XrVector2f);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingPredictionVARJO)(XrSession, uint64_t, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingTimeoutVARJO)(XrSession, uint64_t, XrDuration);
typedef XrResult (XRAPI_PTR *PFN_xrSetMarkerTrackingVARJO)(XrSession, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetPerformanceMetricsStateMETA)(XrSession, const XrPerformanceMetricsStateMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrSetSpaceComponentStatusFB)(XrSpace, const XrSpaceComponentStatusSetInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrSetTrackingOptimizationSettingsHintQCOM)(XrSession, XrTrackingOptimizationSettingsDomainQCOM, XrTrackingOptimizationSettingsHintQCOM);
typedef XrResult (XRAPI_PTR *PFN_xrSetViewOffsetVARJO)(XrSession, float);
typedef XrResult (XRAPI_PTR *PFN_xrSetVirtualKeyboardModelVisibilityMETA)(XrVirtualKeyboardMETA, const XrVirtualKeyboardModelVisibilitySetInfoMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrShareSpacesFB)(XrSession, const XrSpaceShareInfoFB *, XrAsyncRequestIdFB *);
typedef XrResult (XRAPI_PTR *PFN_xrSnapshotMarkerDetectorML)(XrMarkerDetectorML, XrMarkerDetectorSnapshotInfoML *);
typedef XrResult (XRAPI_PTR *PFN_xrStartEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA);
typedef XrResult (XRAPI_PTR *PFN_xrStopEnvironmentDepthProviderMETA)(XrEnvironmentDepthProviderMETA);
typedef XrResult (XRAPI_PTR *PFN_xrStopHapticFeedback)(XrSession, const XrHapticActionInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrStringToPath)(XrInstance, const char *, XrPath *);
typedef XrResult (XRAPI_PTR *PFN_xrStructureTypeToString)(XrInstance, XrStructureType, char[]);
typedef XrResult (XRAPI_PTR *PFN_xrSuggestInteractionProfileBindings)(XrInstance, const XrInteractionProfileSuggestedBinding *);
typedef XrResult (XRAPI_PTR *PFN_xrSuggestVirtualKeyboardLocationMETA)(XrVirtualKeyboardMETA, const XrVirtualKeyboardLocationInfoMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrSyncActions)(XrSession, const XrActionsSyncInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrThermalGetTemperatureTrendEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsNotificationLevelEXT *, float *, float *);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshBeginUpdateFB)(XrTriangleMeshFB);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshBeginVertexBufferUpdateFB)(XrTriangleMeshFB, uint32_t *);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshEndUpdateFB)(XrTriangleMeshFB, uint32_t, uint32_t);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshEndVertexBufferUpdateFB)(XrTriangleMeshFB);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshGetIndexBufferFB)(XrTriangleMeshFB, uint32_t **);
typedef XrResult (XRAPI_PTR *PFN_xrTriangleMeshGetVertexBufferFB)(XrTriangleMeshFB, XrVector3f **);
typedef XrResult (XRAPI_PTR *PFN_xrTryCreateSpatialGraphStaticNodeBindingMSFT)(XrSession, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *, XrSpatialGraphNodeBindingMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrUnpersistSpatialAnchorMSFT)(XrSpatialAnchorStoreConnectionMSFT, const XrSpatialAnchorPersistenceNameMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateHandMeshMSFT)(XrHandTrackerEXT, const XrHandMeshUpdateInfoMSFT *, XrHandMeshMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrUpdatePassthroughColorLutMETA)(XrPassthroughColorLutMETA, const XrPassthroughColorLutUpdateInfoMETA *);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateSwapchainFB)(XrSwapchain, const XrSwapchainStateBaseHeaderFB *);
typedef XrResult (XRAPI_PTR *PFN_xrWaitFrame)(XrSession, const XrFrameWaitInfo *, XrFrameState *);
typedef XrResult (XRAPI_PTR *PFN_xrWaitSwapchainImage)(XrSwapchain, const XrSwapchainImageWaitInfo *);

#ifndef XR_NO_PROTOTYPES
XrResult XRAPI_CALL xrAcquireEnvironmentDepthImageMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthImageAcquireInfoMETA *acquireInfo, XrEnvironmentDepthImageMETA *environmentDepthImage);
XrResult XRAPI_CALL xrAcquireSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageAcquireInfo *acquireInfo, uint32_t *index);
XrResult XRAPI_CALL xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX *locations);
XrResult XRAPI_CALL xrApplyFoveationHTC(XrSession session, const XrFoveationApplyInfoHTC *applyInfo);
XrResult XRAPI_CALL xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback);
XrResult XRAPI_CALL xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo);
XrResult XRAPI_CALL xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo);
XrResult XRAPI_CALL xrBeginPlaneDetectionEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT *beginInfo);
XrResult XRAPI_CALL xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo);
XrResult XRAPI_CALL xrCancelFutureEXT(XrInstance instance, const XrFutureCancelInfoEXT *cancelInfo);
XrResult XRAPI_CALL xrChangeVirtualKeyboardTextContextMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA *changeInfo);
XrResult XRAPI_CALL xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore);
XrResult XRAPI_CALL xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT *computeInfo);
XrResult XRAPI_CALL xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER *performanceCounter);
XrResult XRAPI_CALL xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER *performanceCounter, XrTime *time);
XrResult XRAPI_CALL xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action);
XrResult XRAPI_CALL xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet);
XrResult XRAPI_CALL xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateApiLayerInstance(const XrInstanceCreateInfo *info, const XrApiLayerCreateInfo *layerInfo, XrInstance *instance);
XrResult XRAPI_CALL xrCreateBodyTrackerFB(XrSession session, const XrBodyTrackerCreateInfoFB *createInfo, XrBodyTrackerFB *bodyTracker);
XrResult XRAPI_CALL xrCreateEnvironmentDepthProviderMETA(XrSession session, const XrEnvironmentDepthProviderCreateInfoMETA *createInfo, XrEnvironmentDepthProviderMETA *environmentDepthProvider);
XrResult XRAPI_CALL xrCreateEnvironmentDepthSwapchainMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthSwapchainCreateInfoMETA *createInfo, XrEnvironmentDepthSwapchainMETA *swapchain);
XrResult XRAPI_CALL xrCreateExportedLocalizationMapML(XrSession session, const XrUuidEXT *mapUuid, XrExportedLocalizationMapML *map);
XrResult XRAPI_CALL xrCreateEyeTrackerFB(XrSession session, const XrEyeTrackerCreateInfoFB *createInfo, XrEyeTrackerFB *eyeTracker);
XrResult XRAPI_CALL xrCreateFaceTracker2FB(XrSession session, const XrFaceTrackerCreateInfo2FB *createInfo, XrFaceTracker2FB *faceTracker);
XrResult XRAPI_CALL xrCreateFaceTrackerFB(XrSession session, const XrFaceTrackerCreateInfoFB *createInfo, XrFaceTrackerFB *faceTracker);
XrResult XRAPI_CALL xrCreateFacialTrackerHTC(XrSession session, const XrFacialTrackerCreateInfoHTC *createInfo, XrFacialTrackerHTC *facialTracker);
XrResult XRAPI_CALL xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB *createInfo, XrFoveationProfileFB *profile);
XrResult XRAPI_CALL xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB *createInfo, XrGeometryInstanceFB *outGeometryInstance);
XrResult XRAPI_CALL xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker);
XrResult XRAPI_CALL xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance);
XrResult XRAPI_CALL xrCreateKeyboardSpaceFB(XrSession session, const XrKeyboardSpaceCreateInfoFB *createInfo, XrSpace *keyboardSpace);
XrResult XRAPI_CALL xrCreateMarkerDetectorML(XrSession session, const XrMarkerDetectorCreateInfoML *createInfo, XrMarkerDetectorML *markerDetector);
XrResult XRAPI_CALL xrCreateMarkerSpaceML(XrSession session, const XrMarkerSpaceCreateInfoML *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateMarkerSpaceVARJO(XrSession session, const XrMarkerSpaceCreateInfoVARJO *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreatePassthroughColorLutMETA(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA *createInfo, XrPassthroughColorLutMETA *colorLut);
XrResult XRAPI_CALL xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB *createInfo, XrPassthroughFB *outPassthrough);
XrResult XRAPI_CALL xrCreatePassthroughHTC(XrSession session, const XrPassthroughCreateInfoHTC *createInfo, XrPassthroughHTC *passthrough);
XrResult XRAPI_CALL xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB *createInfo, XrPassthroughLayerFB *outLayer);
XrResult XRAPI_CALL xrCreatePlaneDetectorEXT(XrSession session, const XrPlaneDetectorCreateInfoEXT *createInfo, XrPlaneDetectorEXT *planeDetector);
XrResult XRAPI_CALL xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT *createInfo, XrSceneMSFT *scene);
XrResult XRAPI_CALL xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT *createInfo, XrSceneObserverMSFT *sceneObserver);
XrResult XRAPI_CALL xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session);
XrResult XRAPI_CALL xrCreateSpaceUserFB(XrSession session, const XrSpaceUserCreateInfoFB *info, XrSpaceUserFB *user);
XrResult XRAPI_CALL xrCreateSpatialAnchorFB(XrSession session, const XrSpatialAnchorCreateInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT *spatialAnchorCreateInfo, XrSpatialAnchorMSFT *spatialAnchor);
XrResult XRAPI_CALL xrCreateSpatialAnchorHTC(XrSession session, const XrSpatialAnchorCreateInfoHTC *createInfo, XrSpace *anchor);
XrResult XRAPI_CALL xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor);
XrResult XRAPI_CALL xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT *spatialAnchorStore);
XrResult XRAPI_CALL xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo *createInfo, XrSwapchain *swapchain);
XrResult XRAPI_CALL xrCreateTriangleMeshFB(XrSession session, const XrTriangleMeshCreateInfoFB *createInfo, XrTriangleMeshFB *outTriangleMesh);
XrResult XRAPI_CALL xrCreateVirtualKeyboardMETA(XrSession session, const XrVirtualKeyboardCreateInfoMETA *createInfo, XrVirtualKeyboardMETA *keyboard);
XrResult XRAPI_CALL xrCreateVirtualKeyboardSpaceMETA(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA *createInfo, XrSpace *keyboardSpace);
XrResult XRAPI_CALL xrCreateVulkanDeviceKHR(XrInstance instance, const XrVulkanDeviceCreateInfoKHR *createInfo, VkDevice *vulkanDevice, VkResult *vulkanResult);
XrResult XRAPI_CALL xrCreateVulkanInstanceKHR(XrInstance instance, const XrVulkanInstanceCreateInfoKHR *createInfo, VkInstance *vulkanInstance, VkResult *vulkanResult);
XrResult XRAPI_CALL xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT *deserializeInfo);
XrResult XRAPI_CALL xrDestroyAction(XrAction action);
XrResult XRAPI_CALL xrDestroyActionSet(XrActionSet actionSet);
XrResult XRAPI_CALL xrDestroyBodyTrackerFB(XrBodyTrackerFB bodyTracker);
XrResult XRAPI_CALL xrDestroyEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider);
XrResult XRAPI_CALL xrDestroyEnvironmentDepthSwapchainMETA(XrEnvironmentDepthSwapchainMETA swapchain);
XrResult XRAPI_CALL xrDestroyExportedLocalizationMapML(XrExportedLocalizationMapML map);
XrResult XRAPI_CALL xrDestroyEyeTrackerFB(XrEyeTrackerFB eyeTracker);
XrResult XRAPI_CALL xrDestroyFaceTracker2FB(XrFaceTracker2FB faceTracker);
XrResult XRAPI_CALL xrDestroyFaceTrackerFB(XrFaceTrackerFB faceTracker);
XrResult XRAPI_CALL xrDestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker);
XrResult XRAPI_CALL xrDestroyFoveationProfileFB(XrFoveationProfileFB profile);
XrResult XRAPI_CALL xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance);
XrResult XRAPI_CALL xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker);
XrResult XRAPI_CALL xrDestroyInstance(XrInstance instance);
XrResult XRAPI_CALL xrDestroyMarkerDetectorML(XrMarkerDetectorML markerDetector);
XrResult XRAPI_CALL xrDestroyPassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut);
XrResult XRAPI_CALL xrDestroyPassthroughFB(XrPassthroughFB passthrough);
XrResult XRAPI_CALL xrDestroyPassthroughHTC(XrPassthroughHTC passthrough);
XrResult XRAPI_CALL xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer);
XrResult XRAPI_CALL xrDestroyPlaneDetectorEXT(XrPlaneDetectorEXT planeDetector);
XrResult XRAPI_CALL xrDestroySceneMSFT(XrSceneMSFT scene);
XrResult XRAPI_CALL xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver);
XrResult XRAPI_CALL xrDestroySession(XrSession session);
XrResult XRAPI_CALL xrDestroySpace(XrSpace space);
XrResult XRAPI_CALL xrDestroySpaceUserFB(XrSpaceUserFB user);
XrResult XRAPI_CALL xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor);
XrResult XRAPI_CALL xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore);
XrResult XRAPI_CALL xrDestroySpatialGraphNodeBindingMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding);
XrResult XRAPI_CALL xrDestroySwapchain(XrSwapchain swapchain);
XrResult XRAPI_CALL xrDestroyTriangleMeshFB(XrTriangleMeshFB mesh);
XrResult XRAPI_CALL xrDestroyVirtualKeyboardMETA(XrVirtualKeyboardMETA keyboard);
XrResult XRAPI_CALL xrEnableLocalizationEventsML(XrSession session, const XrLocalizationEnableEventsInfoML *info);
XrResult XRAPI_CALL xrEnableUserCalibrationEventsML(XrInstance instance, const XrUserCalibrationEnableEventsInfoML *enableInfo);
XrResult XRAPI_CALL xrEndFrame(XrSession session, const XrFrameEndInfo *frameEndInfo);
XrResult XRAPI_CALL xrEndSession(XrSession session);
XrResult XRAPI_CALL xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties);
XrResult XRAPI_CALL xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources);
XrResult XRAPI_CALL xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t *colorSpaceCountOutput, XrColorSpaceFB *colorSpaces);
XrResult XRAPI_CALL xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t *displayRefreshRateCountOutput, float *displayRefreshRates);
XrResult XRAPI_CALL xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes);
XrResult XRAPI_CALL xrEnumerateEnvironmentDepthSwapchainImagesMETA(XrEnvironmentDepthSwapchainMETA swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images);
XrResult XRAPI_CALL xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t *cameraCountOutput, XrExternalCameraOCULUS *cameras);
XrResult XRAPI_CALL xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties);
XrResult XRAPI_CALL xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t *counterPathCountOutput, XrPath *counterPaths);
XrResult XRAPI_CALL xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t *spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT *spatialAnchorNames);
XrResult XRAPI_CALL xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces);
XrResult XRAPI_CALL xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrRenderModelPathInfoFB *paths);
XrResult XRAPI_CALL xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t *modeCountOutput, XrReprojectionModeMSFT *modes);
XrResult XRAPI_CALL xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t *featureCountOutput, XrSceneComputeFeatureMSFT *features);
XrResult XRAPI_CALL xrEnumerateSpaceSupportedComponentsFB(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t *componentTypeCountOutput, XrSpaceComponentTypeFB *componentTypes);
XrResult XRAPI_CALL xrEnumerateSwapchainFormats(XrSession session, uint32_t formatCapacityInput, uint32_t *formatCountOutput, int64_t *formats);
XrResult XRAPI_CALL xrEnumerateSwapchainImages(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images);
XrResult XRAPI_CALL xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views);
XrResult XRAPI_CALL xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes);
XrResult XRAPI_CALL xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t *pathCountOutput, XrViveTrackerPathsHTCX *paths);
XrResult XRAPI_CALL xrEraseSpaceFB(XrSession session, const XrSpaceEraseInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB *transformation);
XrResult XRAPI_CALL xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state);
XrResult XRAPI_CALL xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state);
XrResult XRAPI_CALL xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state);
XrResult XRAPI_CALL xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state);
XrResult XRAPI_CALL xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[]);
XrResult XRAPI_CALL xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[]);
XrResult XRAPI_CALL xrGetBodySkeletonFB(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB *skeleton);
XrResult XRAPI_CALL xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT *controllerModelKeyState);
XrResult XRAPI_CALL xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT *properties);
XrResult XRAPI_CALL xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT *state);
XrResult XRAPI_CALL xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile);
XrResult XRAPI_CALL xrGetD3D11GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D11KHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetD3D12GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D12KHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo *hapticActionInfo, XrDevicePcmSampleRateGetInfoFB *deviceSampleRate);
XrResult XRAPI_CALL xrGetDisplayRefreshRateFB(XrSession session, float *displayRefreshRate);
XrResult XRAPI_CALL xrGetEnvironmentDepthSwapchainStateMETA(XrEnvironmentDepthSwapchainMETA swapchain, XrEnvironmentDepthSwapchainStateMETA *state);
XrResult XRAPI_CALL xrGetExportedLocalizationMapDataML(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetEyeGazesFB(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB *gazeInfo, XrEyeGazesFB *eyeGazes);
XrResult XRAPI_CALL xrGetFaceExpressionWeights2FB(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB *expressionInfo, XrFaceExpressionWeights2FB *expressionWeights);
XrResult XRAPI_CALL xrGetFaceExpressionWeightsFB(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB *expressionInfo, XrFaceExpressionWeightsFB *expressionWeights);
XrResult XRAPI_CALL xrGetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC *facialExpressions);
XrResult XRAPI_CALL xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA *foveationState);
XrResult XRAPI_CALL xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB *mesh);
XrResult XRAPI_CALL xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetInstanceProcAddr(XrInstance instance, const char *name, PFN_xrVoidFunction *function);
XrResult XRAPI_CALL xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties);
XrResult XRAPI_CALL xrGetMarkerDetectorStateML(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML *state);
XrResult XRAPI_CALL xrGetMarkerLengthML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *meters);
XrResult XRAPI_CALL xrGetMarkerNumberML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t *number);
XrResult XRAPI_CALL xrGetMarkerReprojectionErrorML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float *reprojectionErrorMeters);
XrResult XRAPI_CALL xrGetMarkerSizeVARJO(XrSession session, uint64_t markerId, XrExtent2Df *size);
XrResult XRAPI_CALL xrGetMarkerStringML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetMarkersML(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t *markerCountOutput, XrMarkerML *markers);
XrResult XRAPI_CALL xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetPassthroughPreferencesMETA(XrSession session, XrPassthroughPreferencesMETA *preferences);
XrResult XRAPI_CALL xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA *state);
XrResult XRAPI_CALL xrGetPlaneDetectionStateEXT(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT *state);
XrResult XRAPI_CALL xrGetPlaneDetectionsEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT *info, XrPlaneDetectorLocationsEXT *locations);
XrResult XRAPI_CALL xrGetPlanePolygonBufferEXT(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT *polygonBuffer);
XrResult XRAPI_CALL xrGetRecommendedLayerResolutionMETA(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA *info, XrRecommendedLayerResolutionMETA *resolution);
XrResult XRAPI_CALL xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds);
XrResult XRAPI_CALL xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB *properties);
XrResult XRAPI_CALL xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT *getInfo, XrSceneComponentsMSFT *components);
XrResult XRAPI_CALL xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT *state);
XrResult XRAPI_CALL xrGetSceneMarkerDecodedStringMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetSceneMarkerRawDataMSFT(XrSceneMSFT scene, const XrUuidMSFT *markerId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer);
XrResult XRAPI_CALL xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT *getInfo, XrSceneMeshBuffersMSFT *buffers);
XrResult XRAPI_CALL xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT *getInfo, uint32_t countInput, uint32_t *readOutput, uint8_t *buffer);
XrResult XRAPI_CALL xrGetSpaceBoundary2DFB(XrSession session, XrSpace space, XrBoundary2DFB *boundary2DOutput);
XrResult XRAPI_CALL xrGetSpaceBoundingBox2DFB(XrSession session, XrSpace space, XrRect2Df *boundingBox2DOutput);
XrResult XRAPI_CALL xrGetSpaceBoundingBox3DFB(XrSession session, XrSpace space, XrRect3DfFB *boundingBox3DOutput);
XrResult XRAPI_CALL xrGetSpaceComponentStatusFB(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB *status);
XrResult XRAPI_CALL xrGetSpaceContainerFB(XrSession session, XrSpace space, XrSpaceContainerFB *spaceContainerOutput);
XrResult XRAPI_CALL xrGetSpaceRoomLayoutFB(XrSession session, XrSpace space, XrRoomLayoutFB *roomLayoutOutput);
XrResult XRAPI_CALL xrGetSpaceSemanticLabelsFB(XrSession session, XrSpace space, XrSemanticLabelsFB *semanticLabelsOutput);
XrResult XRAPI_CALL xrGetSpaceTriangleMeshMETA(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA *getInfo, XrSpaceTriangleMeshMETA *triangleMeshOutput);
XrResult XRAPI_CALL xrGetSpaceUserIdFB(XrSpaceUserFB user, XrSpaceUserIdFB *userId);
XrResult XRAPI_CALL xrGetSpaceUuidFB(XrSpace space, XrUuidEXT *uuid);
XrResult XRAPI_CALL xrGetSpatialAnchorNameHTC(XrSpace anchor, XrSpatialAnchorNameHTC *name);
XrResult XRAPI_CALL xrGetSpatialGraphNodeBindingPropertiesMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT *getInfo, XrSpatialGraphNodeBindingPropertiesMSFT *properties);
XrResult XRAPI_CALL xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB *state);
XrResult XRAPI_CALL xrGetSystem(XrInstance instance, const XrSystemGetInfo *getInfo, XrSystemId *systemId);
XrResult XRAPI_CALL xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties);
XrResult XRAPI_CALL xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties);
XrResult XRAPI_CALL xrGetVirtualKeyboardDirtyTexturesMETA(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t *textureIdCountOutput, uint64_t *textureIds);
XrResult XRAPI_CALL xrGetVirtualKeyboardModelAnimationStatesMETA(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA *animationStates);
XrResult XRAPI_CALL xrGetVirtualKeyboardScaleMETA(XrVirtualKeyboardMETA keyboard, float *scale);
XrResult XRAPI_CALL xrGetVirtualKeyboardTextureDataMETA(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA *textureData);
XrResult XRAPI_CALL xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask);
XrResult XRAPI_CALL xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR *getInfo, VkPhysicalDevice *vulkanPhysicalDevice);
XrResult XRAPI_CALL xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice);
XrResult XRAPI_CALL xrGetVulkanGraphicsRequirements2KHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrImportLocalizationMapML(XrSession session, const XrLocalizationMapImportInfoML *importInfo, XrUuidEXT *mapUuid);
XrResult XRAPI_CALL xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, uint8_t *buffer);
XrResult XRAPI_CALL xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB *info, XrRenderModelBufferFB *buffer);
XrResult XRAPI_CALL xrLocateBodyJointsFB(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB *locateInfo, XrBodyJointLocationsFB *locations);
XrResult XRAPI_CALL xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations);
XrResult XRAPI_CALL xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT *locateInfo, XrSceneComponentLocationsMSFT *locations);
XrResult XRAPI_CALL xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location);
XrResult XRAPI_CALL xrLocateSpaces(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations);
XrResult XRAPI_CALL xrLocateSpacesKHR(XrSession session, const XrSpacesLocateInfo *locateInfo, XrSpaceLocations *spaceLocations);
XrResult XRAPI_CALL xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views);
XrResult XRAPI_CALL xrNegotiateLoaderApiLayerInterface(const XrNegotiateLoaderInfo *loaderInfo, const char *layerName, XrNegotiateApiLayerRequest *apiLayerRequest);
XrResult XRAPI_CALL xrNegotiateLoaderRuntimeInterface(const XrNegotiateLoaderInfo *loaderInfo, XrNegotiateRuntimeRequest *runtimeRequest);
XrResult XRAPI_CALL xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer);
XrResult XRAPI_CALL xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer);
XrResult XRAPI_CALL xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB *intensity);
XrResult XRAPI_CALL xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB *style);
XrResult XRAPI_CALL xrPassthroughPauseFB(XrPassthroughFB passthrough);
XrResult XRAPI_CALL xrPassthroughStartFB(XrPassthroughFB passthrough);
XrResult XRAPI_CALL xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level);
XrResult XRAPI_CALL xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT *spatialAnchorPersistenceInfo);
XrResult XRAPI_CALL xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData);
XrResult XRAPI_CALL xrPollFutureEXT(XrInstance instance, const XrFuturePollInfoEXT *pollInfo, XrFuturePollResultEXT *pollResult);
XrResult XRAPI_CALL xrQueryLocalizationMapsML(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML *queryInfo, uint32_t mapCapacityInput, uint32_t *mapCountOutput, XrLocalizationMapML *maps);
XrResult XRAPI_CALL xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA *counter);
XrResult XRAPI_CALL xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrQuerySystemTrackedKeyboardFB(XrSession session, const XrKeyboardTrackingQueryFB *queryInfo, XrKeyboardTrackingDescriptionFB *keyboard);
XrResult XRAPI_CALL xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo);
XrResult XRAPI_CALL xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate);
XrResult XRAPI_CALL xrRequestExitSession(XrSession session);
XrResult XRAPI_CALL xrRequestMapLocalizationML(XrSession session, const XrMapLocalizationRequestInfoML *requestInfo);
XrResult XRAPI_CALL xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrResultToString(XrInstance instance, XrResult value, char buffer[]);
XrResult XRAPI_CALL xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB *results);
XrResult XRAPI_CALL xrSaveSpaceFB(XrSession session, const XrSpaceSaveInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrSendVirtualKeyboardInputMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA *info, XrPosef *interactorRootPose);
XrResult XRAPI_CALL xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorSpace);
XrResult XRAPI_CALL xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE *digitalLensControl);
XrResult XRAPI_CALL xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled);
XrResult XRAPI_CALL xrSetEnvironmentDepthHandRemovalMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthHandRemovalSetInfoMETA *setInfo);
XrResult XRAPI_CALL xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive);
XrResult XRAPI_CALL xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose);
XrResult XRAPI_CALL xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state);
XrResult XRAPI_CALL xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state);
XrResult XRAPI_CALL xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state);
XrResult XRAPI_CALL xrSetMarkerTrackingPredictionVARJO(XrSession session, uint64_t markerId, XrBool32 enable);
XrResult XRAPI_CALL xrSetMarkerTrackingTimeoutVARJO(XrSession session, uint64_t markerId, XrDuration timeout);
XrResult XRAPI_CALL xrSetMarkerTrackingVARJO(XrSession session, XrBool32 enabled);
XrResult XRAPI_CALL xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA *state);
XrResult XRAPI_CALL xrSetSpaceComponentStatusFB(XrSpace space, const XrSpaceComponentStatusSetInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint);
XrResult XRAPI_CALL xrSetViewOffsetVARJO(XrSession session, float offset);
XrResult XRAPI_CALL xrSetVirtualKeyboardModelVisibilityMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA *modelVisibility);
XrResult XRAPI_CALL xrShareSpacesFB(XrSession session, const XrSpaceShareInfoFB *info, XrAsyncRequestIdFB *requestId);
XrResult XRAPI_CALL xrSnapshotMarkerDetectorML(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML *snapshotInfo);
XrResult XRAPI_CALL xrStartEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider);
XrResult XRAPI_CALL xrStopEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider);
XrResult XRAPI_CALL xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo);
XrResult XRAPI_CALL xrStringToPath(XrInstance instance, const char *pathString, XrPath *path);
XrResult XRAPI_CALL xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[]);
XrResult XRAPI_CALL xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings);
XrResult XRAPI_CALL xrSuggestVirtualKeyboardLocationMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA *locationInfo);
XrResult XRAPI_CALL xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo);
XrResult XRAPI_CALL xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope);
XrResult XRAPI_CALL xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh);
XrResult XRAPI_CALL xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t *outVertexCount);
XrResult XRAPI_CALL xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount);
XrResult XRAPI_CALL xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh);
XrResult XRAPI_CALL xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t **outIndexBuffer);
XrResult XRAPI_CALL xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f **outVertexBuffer);
XrResult XRAPI_CALL xrTryCreateSpatialGraphStaticNodeBindingMSFT(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT *createInfo, XrSpatialGraphNodeBindingMSFT *nodeBinding);
XrResult XRAPI_CALL xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT *spatialAnchorPersistenceName);
XrResult XRAPI_CALL xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh);
XrResult XRAPI_CALL xrUpdatePassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA *updateInfo);
XrResult XRAPI_CALL xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB *state);
XrResult XRAPI_CALL xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState);
XrResult XRAPI_CALL xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo);
#endif /* XR_NO_PROTOTYPES */

#endif /* __WINE_OPENXR_H */
