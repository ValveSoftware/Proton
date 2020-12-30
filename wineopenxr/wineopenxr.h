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
#define XR_MIN_COMPOSITION_LAYERS_SUPPORTED 16
#define XR_KHR_composition_layer_cube_SPEC_VERSION 8
#define XR_KHR_COMPOSITION_LAYER_CUBE_EXTENSION_NAME "XR_KHR_composition_layer_cube"
#define XR_KHR_composition_layer_depth_SPEC_VERSION 5
#define XR_KHR_COMPOSITION_LAYER_DEPTH_EXTENSION_NAME "XR_KHR_composition_layer_depth"
#define XR_KHR_vulkan_swapchain_format_list_SPEC_VERSION 2
#define XR_KHR_VULKAN_SWAPCHAIN_FORMAT_LIST_EXTENSION_NAME "XR_KHR_vulkan_swapchain_format_list"
#define XR_EXT_performance_settings_SPEC_VERSION 1
#define XR_EXT_PERFORMANCE_SETTINGS_EXTENSION_NAME "XR_EXT_performance_settings"
#define XR_EXT_thermal_query_SPEC_VERSION 1
#define XR_EXT_THERMAL_QUERY_EXTENSION_NAME "XR_EXT_thermal_query"
#define XR_KHR_composition_layer_cylinder_SPEC_VERSION 4
#define XR_KHR_COMPOSITION_LAYER_CYLINDER_EXTENSION_NAME "XR_KHR_composition_layer_cylinder"
#define XR_KHR_composition_layer_equirect_SPEC_VERSION 3
#define XR_KHR_COMPOSITION_LAYER_EQUIRECT_EXTENSION_NAME "XR_KHR_composition_layer_equirect"
#define XR_KHR_opengl_enable_SPEC_VERSION 9
#define XR_KHR_OPENGL_ENABLE_EXTENSION_NAME "XR_KHR_opengl_enable"
#define XR_KHR_vulkan_enable_SPEC_VERSION 7
#define XR_KHR_VULKAN_ENABLE_EXTENSION_NAME "XR_KHR_vulkan_enable"
#define XR_KHR_D3D11_enable_SPEC_VERSION 5
#define XR_KHR_D3D11_ENABLE_EXTENSION_NAME "XR_KHR_D3D11_enable"
#define XR_KHR_D3D12_enable_SPEC_VERSION 7
#define XR_KHR_D3D12_ENABLE_EXTENSION_NAME "XR_KHR_D3D12_enable"
#define XR_EXT_eye_gaze_interaction_SPEC_VERSION 1
#define XR_EXT_EYE_GAZE_INTERACTION_EXTENSION_NAME "XR_EXT_eye_gaze_interaction"
#define XR_KHR_visibility_mask_SPEC_VERSION 2
#define XR_KHR_VISIBILITY_MASK_EXTENSION_NAME "XR_KHR_visibility_mask"
#define XR_EXTX_overlay_SPEC_VERSION 4
#define XR_EXTX_OVERLAY_EXTENSION_NAME "XR_EXTX_overlay"
#define XR_KHR_win32_convert_performance_counter_time_SPEC_VERSION 1
#define XR_KHR_WIN32_CONVERT_PERFORMANCE_COUNTER_TIME_EXTENSION_NAME "XR_KHR_win32_convert_performance_counter_time"
#define XR_VARJO_quad_views_SPEC_VERSION 1
#define XR_VARJO_QUAD_VIEWS_EXTENSION_NAME "XR_VARJO_quad_views"
#define XR_MSFT_unbounded_reference_space_SPEC_VERSION 1
#define XR_MSFT_UNBOUNDED_REFERENCE_SPACE_EXTENSION_NAME "XR_MSFT_unbounded_reference_space"
#define XR_MSFT_spatial_anchor_SPEC_VERSION 1
#define XR_MSFT_SPATIAL_ANCHOR_EXTENSION_NAME "XR_MSFT_spatial_anchor"
#define XR_MND_headless_SPEC_VERSION 2
#define XR_MND_HEADLESS_EXTENSION_NAME "XR_MND_headless"
#define XR_OCULUS_android_session_state_enable_SPEC_VERSION 1
#define XR_OCULUS_ANDROID_SESSION_STATE_ENABLE_EXTENSION_NAME "XR_OCULUS_android_session_state_enable"
#define XR_EXT_view_configuration_depth_range_SPEC_VERSION 1
#define XR_EXT_VIEW_CONFIGURATION_DEPTH_RANGE_EXTENSION_NAME "XR_EXT_view_configuration_depth_range"
#define XR_EXT_conformance_automation_SPEC_VERSION 1
#define XR_EXT_CONFORMANCE_AUTOMATION_EXTENSION_NAME "XR_EXT_conformance_automation"
#define XR_MSFT_spatial_graph_bridge_SPEC_VERSION 1
#define XR_MSFT_SPATIAL_GRAPH_BRIDGE_EXTENSION_NAME "XR_MSFT_spatial_graph_bridge"
#define XR_MSFT_hand_interaction_SPEC_VERSION 1
#define XR_MSFT_HAND_INTERACTION_EXTENSION_NAME "XR_MSFT_hand_interaction"
#define XR_EXT_hand_tracking_SPEC_VERSION 2
#define XR_EXT_HAND_TRACKING_EXTENSION_NAME "XR_EXT_hand_tracking"
#define XR_MSFT_hand_tracking_mesh_SPEC_VERSION 2
#define XR_MSFT_HAND_TRACKING_MESH_EXTENSION_NAME "XR_MSFT_hand_tracking_mesh"
#define XR_MSFT_secondary_view_configuration_SPEC_VERSION 1
#define XR_MSFT_SECONDARY_VIEW_CONFIGURATION_EXTENSION_NAME "XR_MSFT_secondary_view_configuration"
#define XR_MSFT_first_person_observer_SPEC_VERSION 1
#define XR_MSFT_FIRST_PERSON_OBSERVER_EXTENSION_NAME "XR_MSFT_first_person_observer"
#define XR_EXT_win32_appcontainer_compatible_SPEC_VERSION 1
#define XR_EXT_WIN32_APPCONTAINER_COMPATIBLE_EXTENSION_NAME "XR_EXT_win32_appcontainer_compatible"
#define XR_EPIC_view_configuration_fov_SPEC_VERSION 2
#define XR_EPIC_VIEW_CONFIGURATION_FOV_EXTENSION_NAME "XR_EPIC_view_configuration_fov"
#define XR_MSFT_holographic_window_attachment_SPEC_VERSION 1
#define XR_MSFT_HOLOGRAPHIC_WINDOW_ATTACHMENT_EXTENSION_NAME "XR_MSFT_holographic_window_attachment"
#define XR_HUAWEI_controller_interaction_SPEC_VERSION 1
#define XR_HUAWEI_CONTROLLER_INTERACTION_EXTENSION_NAME "XR_HUAWEI_controller_interaction"
#define XR_VALVE_analog_threshold_SPEC_VERSION 1
#define XR_VALVE_ANALOG_THRESHOLD_EXTENSION_NAME "XR_VALVE_analog_threshold"
#define XR_EXT_samsung_odyssey_controller_SPEC_VERSION 1
#define XR_EXT_SAMSUNG_ODYSSEY_CONTROLLER_EXTENSION_NAME "XR_EXT_samsung_odyssey_controller"
#define XR_EXT_hp_mixed_reality_controller_SPEC_VERSION 1
#define XR_EXT_HP_MIXED_REALITY_CONTROLLER_EXTENSION_NAME "XR_EXT_hp_mixed_reality_controller"
#define XR_MND_swapchain_usage_input_attachment_bit_SPEC_VERSION 2
#define XR_MND_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_EXTENSION_NAME "XR_MND_swapchain_usage_input_attachment_bit"


#define XR_MAKE_VERSION(major, minor, patch) \
    ((((major) & 0xffffULL) << 48) | (((minor) & 0xffffULL) << 32) | ((patch) & 0xffffffffULL))

#define XR_VERSION_MAJOR(version) (uint16_t)(((uint64_t)(version) >> 48)& 0xffffULL)

#define XR_VERSION_MINOR(version) (uint16_t)(((uint64_t)(version) >> 32) & 0xffffULL)

#define XR_VERSION_PATCH(version) (uint32_t)((uint64_t)(version) & 0xffffffffULL)


#define XR_CURRENT_API_VERSION XR_MAKE_VERSION(1, 0, 11)


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


#define XR_HAND_JOINT_COUNT_EXT 26
XR_DEFINE_HANDLE(XrAction)
XR_DEFINE_HANDLE(XrActionSet)
XR_DEFINE_HANDLE(XrHandTrackerEXT)
XR_DEFINE_HANDLE(XrInstance)
XR_DEFINE_HANDLE(XrSession)
XR_DEFINE_HANDLE(XrSpace)
XR_DEFINE_HANDLE(XrSpatialAnchorMSFT)
XR_DEFINE_HANDLE(XrSwapchain)

typedef uint32_t XrBool32;
typedef int64_t XrDuration;
typedef uint64_t XrFlags64;
XR_DEFINE_ATOM(XrPath)
XR_DEFINE_ATOM(XrSystemId)
typedef int64_t XrTime;
typedef uint64_t XrVersion;

typedef XrFlags64 XrCompositionLayerFlags;
typedef XrFlags64 XrDebugUtilsMessageSeverityFlagsEXT;
typedef XrFlags64 XrDebugUtilsMessageTypeFlagsEXT;
typedef XrFlags64 XrInputSourceLocalizedNameFlags;
typedef XrFlags64 XrInstanceCreateFlags;
typedef XrFlags64 XrOverlayMainSessionFlagsEXTX;
typedef XrFlags64 XrOverlaySessionCreateFlagsEXTX;
typedef XrFlags64 XrSessionCreateFlags;
typedef XrFlags64 XrSpaceLocationFlags;
typedef XrFlags64 XrSpaceVelocityFlags;
typedef XrFlags64 XrSwapchainCreateFlags;
typedef XrFlags64 XrSwapchainUsageFlags;
typedef XrFlags64 XrViewStateFlags;

typedef enum XrActionType
{
    XR_ACTION_TYPE_BOOLEAN_INPUT = 1,
    XR_ACTION_TYPE_FLOAT_INPUT = 2,
    XR_ACTION_TYPE_VECTOR2F_INPUT = 3,
    XR_ACTION_TYPE_POSE_INPUT = 4,
    XR_ACTION_TYPE_VIBRATION_OUTPUT = 100,
    XR_ACTION_TYPE_MAX_ENUM = 0x7fffffff,
} XrActionType;

typedef enum XrEnvironmentBlendMode
{
    XR_ENVIRONMENT_BLEND_MODE_OPAQUE = 1,
    XR_ENVIRONMENT_BLEND_MODE_ADDITIVE = 2,
    XR_ENVIRONMENT_BLEND_MODE_ALPHA_BLEND = 3,
    XR_ENVIRONMENT_BLEND_MODE_MAX_ENUM = 0x7fffffff,
} XrEnvironmentBlendMode;

typedef enum XrEyeVisibility
{
    XR_EYE_VISIBILITY_BOTH = 0,
    XR_EYE_VISIBILITY_LEFT = 1,
    XR_EYE_VISIBILITY_RIGHT = 2,
    XR_EYE_VISIBILITY_MAX_ENUM = 0x7fffffff,
} XrEyeVisibility;

typedef enum XrFormFactor
{
    XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY = 1,
    XR_FORM_FACTOR_HANDHELD_DISPLAY = 2,
    XR_FORM_FACTOR_MAX_ENUM = 0x7fffffff,
} XrFormFactor;

typedef enum XrHandEXT
{
    XR_HAND_LEFT_EXT = 1,
    XR_HAND_RIGHT_EXT = 2,
    XR_HAND_EXT_MAX_ENUM = 0x7fffffff,
} XrHandEXT;

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
    XR_HAND_JOINT_SET_EXT_MAX_ENUM = 0x7fffffff,
} XrHandJointSetEXT;

typedef enum XrHandPoseTypeMSFT
{
    XR_HAND_POSE_TYPE_TRACKED_MSFT = 0,
    XR_HAND_POSE_TYPE_REFERENCE_OPEN_PALM_MSFT = 1,
    XR_HAND_POSE_TYPE_MSFT_MAX_ENUM = 0x7fffffff,
} XrHandPoseTypeMSFT;

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
    XR_OBJECT_TYPE_HAND_TRACKER_EXT = 1000051000,
    XR_OBJECT_TYPE_MAX_ENUM = 0x7fffffff,
} XrObjectType;

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

typedef enum XrReferenceSpaceType
{
    XR_REFERENCE_SPACE_TYPE_VIEW = 1,
    XR_REFERENCE_SPACE_TYPE_LOCAL = 2,
    XR_REFERENCE_SPACE_TYPE_STAGE = 3,
    XR_REFERENCE_SPACE_TYPE_UNBOUNDED_MSFT = 1000038000,
    XR_REFERENCE_SPACE_TYPE_MAX_ENUM = 0x7fffffff,
} XrReferenceSpaceType;

typedef enum XrResult
{
    XR_ERROR_SECONDARY_VIEW_CONFIGURATION_TYPE_NOT_ENABLED_MSFT = -1000053000,
    XR_ERROR_CREATE_SPATIAL_ANCHOR_FAILED_MSFT = -1000039001,
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
    XR_RESULT_MAX_ENUM = 0x7fffffff,
} XrResult;

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
    XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT = 1000039000,
    XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT = 1000039001,
    XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT = 1000046000,
    XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT = 1000049000,
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
    XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC = 1000059000,
    XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT = 1000063000,
    XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE = 1000079000,
    XR_STRUCTURE_TYPE_MAX_ENUM = 0x7fffffff,
} XrStructureType;

typedef enum XrViewConfigurationType
{
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_MONO = 1,
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_STEREO = 2,
    XR_VIEW_CONFIGURATION_TYPE_PRIMARY_QUAD_VARJO = 1000037000,
    XR_VIEW_CONFIGURATION_TYPE_SECONDARY_MONO_FIRST_PERSON_OBSERVER_MSFT = 1000054000,
    XR_VIEW_CONFIGURATION_TYPE_MAX_ENUM = 0x7fffffff,
} XrViewConfigurationType;

typedef enum XrVisibilityMaskTypeKHR
{
    XR_VISIBILITY_MASK_TYPE_HIDDEN_TRIANGLE_MESH_KHR = 1,
    XR_VISIBILITY_MASK_TYPE_VISIBLE_TRIANGLE_MESH_KHR = 2,
    XR_VISIBILITY_MASK_TYPE_LINE_LOOP_KHR = 3,
    XR_VISIBILITY_MASK_TYPE_KHR_MAX_ENUM = 0x7fffffff,
} XrVisibilityMaskTypeKHR;

typedef struct XrActionCreateInfo XrActionCreateInfo;
typedef struct XrActionStateBoolean XrActionStateBoolean;
typedef struct XrActionStateGetInfo XrActionStateGetInfo;
typedef struct XrActionSuggestedBinding XrActionSuggestedBinding;
typedef struct XrActiveActionSet XrActiveActionSet;
typedef struct XrApplicationInfo XrApplicationInfo;
typedef struct XrBaseOutStructure XrBaseOutStructure;
typedef struct XrColor4f XrColor4f;
typedef struct XrDebugUtilsLabelEXT XrDebugUtilsLabelEXT;
typedef struct XrEventDataBaseHeader XrEventDataBaseHeader;
typedef struct XrEventDataEventsLost XrEventDataEventsLost;
typedef struct XrEventDataInteractionProfileChanged XrEventDataInteractionProfileChanged;
typedef struct XrEventDataPerfSettingsEXT XrEventDataPerfSettingsEXT;
typedef struct XrEventDataSessionStateChanged XrEventDataSessionStateChanged;
typedef struct XrExtensionProperties XrExtensionProperties;
typedef struct XrExtent2Di XrExtent2Di;
typedef struct XrFovf XrFovf;
typedef struct XrFrameState XrFrameState;
typedef struct XrGraphicsBindingD3D11KHR XrGraphicsBindingD3D11KHR;
typedef struct XrGraphicsBindingVulkanKHR XrGraphicsBindingVulkanKHR;
typedef struct XrGraphicsRequirementsD3D12KHR XrGraphicsRequirementsD3D12KHR;
typedef struct XrGraphicsRequirementsOpenGLKHR XrGraphicsRequirementsOpenGLKHR;
typedef struct XrHandJointsLocateInfoEXT XrHandJointsLocateInfoEXT;
typedef struct XrHandMeshUpdateInfoMSFT XrHandMeshUpdateInfoMSFT;
typedef struct XrHandPoseTypeInfoMSFT XrHandPoseTypeInfoMSFT;
typedef struct XrHapticActionInfo XrHapticActionInfo;
typedef struct XrHapticVibration XrHapticVibration;
typedef struct XrInputSourceLocalizedNameGetInfo XrInputSourceLocalizedNameGetInfo;
typedef struct XrInteractionProfileState XrInteractionProfileState;
typedef struct XrOffset2Df XrOffset2Df;
typedef struct XrQuaternionf XrQuaternionf;
typedef struct XrSecondaryViewConfigurationSessionBeginInfoMSFT XrSecondaryViewConfigurationSessionBeginInfoMSFT;
typedef struct XrSecondaryViewConfigurationSwapchainCreateInfoMSFT XrSecondaryViewConfigurationSwapchainCreateInfoMSFT;
typedef struct XrSessionBeginInfo XrSessionBeginInfo;
typedef struct XrSessionCreateInfoOverlayEXTX XrSessionCreateInfoOverlayEXTX;
typedef struct XrSwapchainCreateInfo XrSwapchainCreateInfo;
typedef struct XrSwapchainImageBaseHeader XrSwapchainImageBaseHeader;
typedef struct XrSwapchainImageD3D12KHR XrSwapchainImageD3D12KHR;
typedef struct XrSwapchainImageOpenGLKHR XrSwapchainImageOpenGLKHR;
typedef struct XrSwapchainImageVulkanKHR XrSwapchainImageVulkanKHR;
typedef struct XrSystemEyeGazeInteractionPropertiesEXT XrSystemEyeGazeInteractionPropertiesEXT;
typedef struct XrSystemGraphicsProperties XrSystemGraphicsProperties;
typedef struct XrSystemHandTrackingPropertiesEXT XrSystemHandTrackingPropertiesEXT;
typedef struct XrSystemTrackingProperties XrSystemTrackingProperties;
typedef struct XrVector3f XrVector3f;
typedef struct XrViewConfigurationDepthRangeEXT XrViewConfigurationDepthRangeEXT;
typedef struct XrViewConfigurationView XrViewConfigurationView;
typedef struct XrViewLocateInfo XrViewLocateInfo;
typedef struct XrVulkanSwapchainFormatListCreateInfoKHR XrVulkanSwapchainFormatListCreateInfoKHR;
typedef struct XrActionSetCreateInfo XrActionSetCreateInfo;
typedef struct XrActionStateFloat XrActionStateFloat;
typedef struct XrActionsSyncInfo XrActionsSyncInfo;
typedef struct XrBaseInStructure XrBaseInStructure;
typedef struct XrCompositionLayerBaseHeader XrCompositionLayerBaseHeader;
typedef struct XrDebugUtilsObjectNameInfoEXT XrDebugUtilsObjectNameInfoEXT;
typedef struct XrEventDataInstanceLossPending XrEventDataInstanceLossPending;
typedef struct XrEventDataVisibilityMaskChangedKHR XrEventDataVisibilityMaskChangedKHR;
typedef struct XrEyeGazeSampleTimeEXT XrEyeGazeSampleTimeEXT;
typedef struct XrFrameEndInfo XrFrameEndInfo;
typedef struct XrGraphicsBindingD3D12KHR XrGraphicsBindingD3D12KHR;
typedef struct XrGraphicsRequirementsD3D11KHR XrGraphicsRequirementsD3D11KHR;
typedef struct XrGraphicsRequirementsVulkanKHR XrGraphicsRequirementsVulkanKHR;
typedef struct XrHandJointVelocityEXT XrHandJointVelocityEXT;
typedef struct XrHandMeshVertexMSFT XrHandMeshVertexMSFT;
typedef struct XrHapticBaseHeader XrHapticBaseHeader;
typedef struct XrInstanceCreateInfo XrInstanceCreateInfo;
typedef struct XrInteractionProfileAnalogThresholdVALVE XrInteractionProfileAnalogThresholdVALVE;
typedef struct XrOffset2Di XrOffset2Di;
typedef struct XrRect2Di XrRect2Di;
typedef struct XrSecondaryViewConfigurationLayerInfoMSFT XrSecondaryViewConfigurationLayerInfoMSFT;
typedef struct XrSessionActionSetsAttachInfo XrSessionActionSetsAttachInfo;
typedef struct XrSpaceVelocity XrSpaceVelocity;
typedef struct XrSwapchainImageAcquireInfo XrSwapchainImageAcquireInfo;
typedef struct XrSwapchainImageWaitInfo XrSwapchainImageWaitInfo;
typedef struct XrSystemGetInfo XrSystemGetInfo;
typedef struct XrSystemProperties XrSystemProperties;
typedef struct XrVector4f XrVector4f;
typedef struct XrViewConfigurationProperties XrViewConfigurationProperties;
typedef struct XrViewState XrViewState;
typedef struct XrActionStatePose XrActionStatePose;
typedef struct XrApiLayerProperties XrApiLayerProperties;
typedef struct XrCompositionLayerCubeKHR XrCompositionLayerCubeKHR;
typedef struct XrDebugUtilsMessengerCallbackDataEXT XrDebugUtilsMessengerCallbackDataEXT;
typedef struct XrEventDataMainSessionVisibilityChangedEXTX XrEventDataMainSessionVisibilityChangedEXTX;
typedef struct XrExtent2Df XrExtent2Df;
typedef struct XrFrameWaitInfo XrFrameWaitInfo;
typedef struct XrHandJointVelocitiesEXT XrHandJointVelocitiesEXT;
typedef struct XrHandMeshVertexBufferMSFT XrHandMeshVertexBufferMSFT;
typedef struct XrHolographicWindowAttachmentMSFT XrHolographicWindowAttachmentMSFT;
typedef struct XrInteractionProfileSuggestedBinding XrInteractionProfileSuggestedBinding;
typedef struct XrRect2Df XrRect2Df;
typedef struct XrSecondaryViewConfigurationFrameEndInfoMSFT XrSecondaryViewConfigurationFrameEndInfoMSFT;
typedef struct XrSecondaryViewConfigurationStateMSFT XrSecondaryViewConfigurationStateMSFT;
typedef struct XrSwapchainImageD3D11KHR XrSwapchainImageD3D11KHR;
typedef struct XrSwapchainSubImage XrSwapchainSubImage;
typedef struct XrVector2f XrVector2f;
typedef struct XrViewConfigurationViewFovEPIC XrViewConfigurationViewFovEPIC;
typedef struct XrActionStateVector2f XrActionStateVector2f;
typedef struct XrCompositionLayerDepthInfoKHR XrCompositionLayerDepthInfoKHR;
typedef struct XrEventDataBuffer XrEventDataBuffer;
typedef struct XrFrameBeginInfo XrFrameBeginInfo;
typedef struct XrHandMeshIndexBufferMSFT XrHandMeshIndexBufferMSFT;
typedef struct XrHandTrackerCreateInfoEXT XrHandTrackerCreateInfoEXT;
typedef struct XrPosef XrPosef;
typedef struct XrSecondaryViewConfigurationFrameStateMSFT XrSecondaryViewConfigurationFrameStateMSFT;
typedef struct XrSpaceLocation XrSpaceLocation;
typedef struct XrSpatialAnchorSpaceCreateInfoMSFT XrSpatialAnchorSpaceCreateInfoMSFT;
typedef struct XrSwapchainImageReleaseInfo XrSwapchainImageReleaseInfo;
typedef struct XrView XrView;
typedef struct XrActionSpaceCreateInfo XrActionSpaceCreateInfo;
typedef struct XrCompositionLayerCylinderKHR XrCompositionLayerCylinderKHR;
typedef struct XrCompositionLayerProjectionView XrCompositionLayerProjectionView;
typedef struct XrEventDataReferenceSpaceChangePending XrEventDataReferenceSpaceChangePending;
typedef struct XrHandJointLocationEXT XrHandJointLocationEXT;
typedef struct XrHandMeshMSFT XrHandMeshMSFT;
typedef struct XrInstanceProperties XrInstanceProperties;
typedef struct XrSessionCreateInfo XrSessionCreateInfo;
typedef struct XrSpatialGraphNodeSpaceCreateInfoMSFT XrSpatialGraphNodeSpaceCreateInfoMSFT;
typedef struct XrVisibilityMaskKHR XrVisibilityMaskKHR;
typedef struct XrBoundSourcesForActionEnumerateInfo XrBoundSourcesForActionEnumerateInfo;
typedef struct XrCompositionLayerProjection XrCompositionLayerProjection;
typedef struct XrGraphicsBindingOpenGLWin32KHR XrGraphicsBindingOpenGLWin32KHR;
typedef struct XrHandMeshSpaceCreateInfoMSFT XrHandMeshSpaceCreateInfoMSFT;
typedef struct XrSpatialAnchorCreateInfoMSFT XrSpatialAnchorCreateInfoMSFT;
typedef struct XrCompositionLayerEquirectKHR XrCompositionLayerEquirectKHR;
typedef struct XrHandJointLocationsEXT XrHandJointLocationsEXT;
typedef struct XrSystemHandTrackingMeshPropertiesMSFT XrSystemHandTrackingMeshPropertiesMSFT;
typedef struct XrCompositionLayerQuad XrCompositionLayerQuad;
typedef struct XrReferenceSpaceCreateInfo XrReferenceSpaceCreateInfo;
typedef XrBool32 (XRAPI_PTR * PFN_xrDebugUtilsMessengerCallbackEXT)(
    XrDebugUtilsMessageSeverityFlagsEXT messageSeverity,
    XrDebugUtilsMessageTypeFlagsEXT messageTypes,
    const XrDebugUtilsMessengerCallbackDataEXT *callbackData,
    void *userData);
typedef void (XRAPI_PTR * PFN_xrVoidFunction)(
void);

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

struct XrColor4f
{
    float r;
    float g;
    float b;
    float a;
};

struct XrDebugUtilsLabelEXT
{
    XrStructureType type;
    const void *next;
    const char *labelName;
};

struct XrEventDataBaseHeader
{
    XrStructureType type;
    const void *next;
};

struct XrEventDataEventsLost
{
    XrStructureType type;
    const void *next;
    uint32_t lostEventCount;
};

struct XrEventDataInteractionProfileChanged
{
    XrStructureType type;
    const void *next;
    XrSession session;
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

struct XrEventDataSessionStateChanged
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrSessionState state;
    XrTime time;
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

struct XrFovf
{
    float angleLeft;
    float angleRight;
    float angleUp;
    float angleDown;
};

struct XrFrameState
{
    XrStructureType type;
    void *next;
    XrTime predictedDisplayTime;
    XrDuration predictedDisplayPeriod;
    XrBool32 shouldRender;
};

struct XrGraphicsBindingD3D11KHR
{
    XrStructureType type;
    const void *next;
    ID3D11Device *device;
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

struct XrHandJointsLocateInfoEXT
{
    XrStructureType type;
    const void *next;
    XrSpace baseSpace;
    XrTime time;
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

struct XrInputSourceLocalizedNameGetInfo
{
    XrStructureType type;
    const void *next;
    XrPath sourcePath;
    XrInputSourceLocalizedNameFlags whichComponents;
};

struct XrInteractionProfileState
{
    XrStructureType type;
    void *next;
    XrPath interactionProfile;
};

struct XrOffset2Df
{
    float x;
    float y;
};

struct XrQuaternionf
{
    float x;
    float y;
    float z;
    float w;
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

struct XrSessionBeginInfo
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType primaryViewConfigurationType;
};

struct XrSessionCreateInfoOverlayEXTX
{
    XrStructureType type;
    const void *next;
    XrOverlaySessionCreateFlagsEXTX createFlags;
    uint32_t sessionLayersPlacement;
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

struct XrSwapchainImageOpenGLKHR
{
    XrStructureType type;
    void *next;
    uint32_t image;
};

struct XrSwapchainImageVulkanKHR
{
    XrStructureType type;
    void *next;
    VkImage image;
};

struct XrSystemEyeGazeInteractionPropertiesEXT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsEyeGazeInteraction;
};

struct XrSystemGraphicsProperties
{
    uint32_t maxSwapchainImageHeight;
    uint32_t maxSwapchainImageWidth;
    uint32_t maxLayerCount;
};

struct XrSystemHandTrackingPropertiesEXT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsHandTracking;
};

struct XrSystemTrackingProperties
{
    XrBool32 orientationTracking;
    XrBool32 positionTracking;
};

struct XrVector3f
{
    float x;
    float y;
    float z;
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

struct XrViewLocateInfo
{
    XrStructureType type;
    const void *next;
    XrViewConfigurationType viewConfigurationType;
    XrTime displayTime;
    XrSpace space;
};

struct XrVulkanSwapchainFormatListCreateInfoKHR
{
    XrStructureType type;
    const void *next;
    uint32_t viewFormatCount;
    const VkFormat *viewFormats;
};

struct XrActionSetCreateInfo
{
    XrStructureType type;
    const void *next;
    char actionSetName[XR_MAX_ACTION_SET_NAME_SIZE];
    char localizedActionSetName[XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE];
    uint32_t priority;
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

struct XrBaseInStructure
{
    XrStructureType type;
    const struct XrBaseInStructure *next;
};

struct XrCompositionLayerBaseHeader
{
    XrStructureType type;
    const void *next;
    XrCompositionLayerFlags layerFlags;
    XrSpace space;
};

struct XrDebugUtilsObjectNameInfoEXT
{
    XrStructureType type;
    const void *next;
    XrObjectType objectType;
    uint64_t WINE_XR_ALIGN(8) objectHandle;
    const char *objectName;
};

struct XrEventDataInstanceLossPending
{
    XrStructureType type;
    const void *next;
    XrTime lossTime;
};

struct XrEventDataVisibilityMaskChangedKHR
{
    XrStructureType type;
    const void *next;
    XrSession session;
    XrViewConfigurationType viewConfigurationType;
    uint32_t viewIndex;
};

struct XrEyeGazeSampleTimeEXT
{
    XrStructureType type;
    void *next;
    XrTime time;
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

struct XrGraphicsBindingD3D12KHR
{
    XrStructureType type;
    const void *next;
    ID3D12Device *device;
    ID3D12CommandQueue *queue;
};

struct XrGraphicsRequirementsD3D11KHR
{
    XrStructureType type;
    void *next;
    LUID adapterLuid;
    D3D_FEATURE_LEVEL minFeatureLevel;
};

struct XrGraphicsRequirementsVulkanKHR
{
    XrStructureType type;
    void *next;
    XrVersion minApiVersionSupported;
    XrVersion maxApiVersionSupported;
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

struct XrHapticBaseHeader
{
    XrStructureType type;
    const void *next;
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

struct XrOffset2Di
{
    int32_t x;
    int32_t y;
};

struct XrRect2Di
{
    XrOffset2Di offset;
    XrExtent2Di extent;
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

struct XrSessionActionSetsAttachInfo
{
    XrStructureType type;
    const void *next;
    uint32_t countActionSets;
    const XrActionSet *actionSets;
};

struct XrSpaceVelocity
{
    XrStructureType type;
    void *next;
    XrSpaceVelocityFlags velocityFlags;
    XrVector3f linearVelocity;
    XrVector3f angularVelocity;
};

struct XrSwapchainImageAcquireInfo
{
    XrStructureType type;
    const void *next;
};

struct XrSwapchainImageWaitInfo
{
    XrStructureType type;
    const void *next;
    XrDuration timeout;
};

struct XrSystemGetInfo
{
    XrStructureType type;
    const void *next;
    XrFormFactor formFactor;
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

struct XrViewState
{
    XrStructureType type;
    void *next;
    XrViewStateFlags viewStateFlags;
};

struct XrActionStatePose
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
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

struct XrEventDataMainSessionVisibilityChangedEXTX
{
    XrStructureType type;
    const void *next;
    XrBool32 visible;
    XrOverlayMainSessionFlagsEXTX flags;
};

struct XrExtent2Df
{
    float width;
    float height;
};

struct XrFrameWaitInfo
{
    XrStructureType type;
    const void *next;
};

struct XrHandJointVelocitiesEXT
{
    XrStructureType type;
    void *next;
    uint32_t jointCount;
    XrHandJointVelocityEXT *jointVelocities;
};

struct XrHandMeshVertexBufferMSFT
{
    XrTime vertexUpdateTime;
    uint32_t vertexCapacityInput;
    uint32_t vertexCountOutput;
    XrHandMeshVertexMSFT *vertices;
};

struct XrHolographicWindowAttachmentMSFT
{
    XrStructureType type;
    const void *next;
    IUnknown *holographicSpace;
    IUnknown *coreWindow;
};

struct XrInteractionProfileSuggestedBinding
{
    XrStructureType type;
    const void *next;
    XrPath interactionProfile;
    uint32_t countSuggestedBindings;
    const XrActionSuggestedBinding *suggestedBindings;
};

struct XrRect2Df
{
    XrOffset2Df offset;
    XrExtent2Df extent;
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

struct XrSwapchainImageD3D11KHR
{
    XrStructureType type;
    void *next;
    ID3D11Texture2D *texture;
};

struct XrSwapchainSubImage
{
    XrSwapchain swapchain;
    XrRect2Di imageRect;
    uint32_t imageArrayIndex;
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

struct XrActionStateVector2f
{
    XrStructureType type;
    void *next;
    XrVector2f currentState;
    XrBool32 changedSinceLastSync;
    XrTime lastChangeTime;
    XrBool32 isActive;
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

struct XrEventDataBuffer
{
    XrStructureType type;
    const void *next;
    uint8_t varying[4000];
};

struct XrFrameBeginInfo
{
    XrStructureType type;
    const void *next;
};

struct XrHandMeshIndexBufferMSFT
{
    uint32_t indexBufferKey;
    uint32_t indexCapacityInput;
    uint32_t indexCountOutput;
    uint32_t *indices;
};

struct XrHandTrackerCreateInfoEXT
{
    XrStructureType type;
    const void *next;
    XrHandEXT hand;
    XrHandJointSetEXT handJointSet;
};

struct XrPosef
{
    XrQuaternionf orientation;
    XrVector3f position;
};

struct XrSecondaryViewConfigurationFrameStateMSFT
{
    XrStructureType type;
    void *next;
    uint32_t viewConfigurationCount;
    XrSecondaryViewConfigurationStateMSFT *viewConfigurationStates;
};

struct XrSpaceLocation
{
    XrStructureType type;
    void *next;
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
};

struct XrSpatialAnchorSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialAnchorMSFT anchor;
    XrPosef poseInAnchorSpace;
};

struct XrSwapchainImageReleaseInfo
{
    XrStructureType type;
    const void *next;
};

struct XrView
{
    XrStructureType type;
    void *next;
    XrPosef pose;
    XrFovf fov;
};

struct XrActionSpaceCreateInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
    XrPath subactionPath;
    XrPosef poseInActionSpace;
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

struct XrCompositionLayerProjectionView
{
    XrStructureType type;
    const void *next;
    XrPosef pose;
    XrFovf fov;
    XrSwapchainSubImage subImage;
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

struct XrHandJointLocationEXT
{
    XrSpaceLocationFlags locationFlags;
    XrPosef pose;
    float radius;
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

struct XrInstanceProperties
{
    XrStructureType type;
    void *next;
    XrVersion runtimeVersion;
    char runtimeName[XR_MAX_RUNTIME_NAME_SIZE];
};

struct XrSessionCreateInfo
{
    XrStructureType type;
    const void *next;
    XrSessionCreateFlags createFlags;
    XrSystemId systemId;
};

struct XrSpatialGraphNodeSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpatialGraphNodeTypeMSFT nodeType;
    uint8_t nodeId[16];
    XrPosef pose;
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

struct XrBoundSourcesForActionEnumerateInfo
{
    XrStructureType type;
    const void *next;
    XrAction action;
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

struct XrGraphicsBindingOpenGLWin32KHR
{
    XrStructureType type;
    const void *next;
    HDC hDC;
    HGLRC hGLRC;
};

struct XrHandMeshSpaceCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrHandPoseTypeMSFT handPoseType;
    XrPosef poseInHandMeshSpace;
};

struct XrSpatialAnchorCreateInfoMSFT
{
    XrStructureType type;
    const void *next;
    XrSpace space;
    XrPosef pose;
    XrTime time;
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

struct XrHandJointLocationsEXT
{
    XrStructureType type;
    void *next;
    XrBool32 isActive;
    uint32_t jointCount;
    XrHandJointLocationEXT *jointLocations;
};

struct XrSystemHandTrackingMeshPropertiesMSFT
{
    XrStructureType type;
    void *next;
    XrBool32 supportsHandTrackingMesh;
    uint32_t maxHandMeshIndexCount;
    uint32_t maxHandMeshVertexCount;
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

struct XrReferenceSpaceCreateInfo
{
    XrStructureType type;
    const void *next;
    XrReferenceSpaceType referenceSpaceType;
    XrPosef poseInReferenceSpace;
};

typedef XrResult (XRAPI_PTR *PFN_xrAcquireSwapchainImage)(XrSwapchain, const XrSwapchainImageAcquireInfo *, uint32_t *);
typedef XrResult (XRAPI_PTR *PFN_xrApplyHapticFeedback)(XrSession, const XrHapticActionInfo *, const XrHapticBaseHeader *);
typedef XrResult (XRAPI_PTR *PFN_xrAttachSessionActionSets)(XrSession, const XrSessionActionSetsAttachInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrBeginFrame)(XrSession, const XrFrameBeginInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrBeginSession)(XrSession, const XrSessionBeginInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrConvertTimeToWin32PerformanceCounterKHR)(XrInstance, XrTime, LARGE_INTEGER *);
typedef XrResult (XRAPI_PTR *PFN_xrConvertWin32PerformanceCounterToTimeKHR)(XrInstance, const LARGE_INTEGER *, XrTime *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateAction)(XrActionSet, const XrActionCreateInfo *, XrAction *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSet)(XrInstance, const XrActionSetCreateInfo *, XrActionSet *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateActionSpace)(XrSession, const XrActionSpaceCreateInfo *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandMeshSpaceMSFT)(XrHandTrackerEXT, const XrHandMeshSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateHandTrackerEXT)(XrSession, const XrHandTrackerCreateInfoEXT *, XrHandTrackerEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateInstance)(const XrInstanceCreateInfo *, XrInstance *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateReferenceSpace)(XrSession, const XrReferenceSpaceCreateInfo *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSession)(XrInstance, const XrSessionCreateInfo *, XrSession *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorMSFT)(XrSession, const XrSpatialAnchorCreateInfoMSFT *, XrSpatialAnchorMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialAnchorSpaceMSFT)(XrSession, const XrSpatialAnchorSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSpatialGraphNodeSpaceMSFT)(XrSession, const XrSpatialGraphNodeSpaceCreateInfoMSFT *, XrSpace *);
typedef XrResult (XRAPI_PTR *PFN_xrCreateSwapchain)(XrSession, const XrSwapchainCreateInfo *, XrSwapchain *);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyAction)(XrAction);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyActionSet)(XrActionSet);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyHandTrackerEXT)(XrHandTrackerEXT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroyInstance)(XrInstance);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpace)(XrSpace);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySpatialAnchorMSFT)(XrSpatialAnchorMSFT);
typedef XrResult (XRAPI_PTR *PFN_xrDestroySwapchain)(XrSwapchain);
typedef XrResult (XRAPI_PTR *PFN_xrEndFrame)(XrSession, const XrFrameEndInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrEndSession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateApiLayerProperties)(uint32_t, uint32_t *, XrApiLayerProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateBoundSourcesForAction)(XrSession, const XrBoundSourcesForActionEnumerateInfo *, uint32_t, uint32_t *, XrPath *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateEnvironmentBlendModes)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrEnvironmentBlendMode *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateInstanceExtensionProperties)(const char *, uint32_t, uint32_t *, XrExtensionProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateReferenceSpaces)(XrSession, uint32_t, uint32_t *, XrReferenceSpaceType *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainFormats)(XrSession, uint32_t, uint32_t *, int64_t *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateSwapchainImages)(XrSwapchain, uint32_t, uint32_t *, XrSwapchainImageBaseHeader *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurationViews)(XrInstance, XrSystemId, XrViewConfigurationType, uint32_t, uint32_t *, XrViewConfigurationView *);
typedef XrResult (XRAPI_PTR *PFN_xrEnumerateViewConfigurations)(XrInstance, XrSystemId, uint32_t, uint32_t *, XrViewConfigurationType *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateBoolean)(XrSession, const XrActionStateGetInfo *, XrActionStateBoolean *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateFloat)(XrSession, const XrActionStateGetInfo *, XrActionStateFloat *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStatePose)(XrSession, const XrActionStateGetInfo *, XrActionStatePose *);
typedef XrResult (XRAPI_PTR *PFN_xrGetActionStateVector2f)(XrSession, const XrActionStateGetInfo *, XrActionStateVector2f *);
typedef XrResult (XRAPI_PTR *PFN_xrGetCurrentInteractionProfile)(XrSession, XrPath, XrInteractionProfileState *);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D11GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D11KHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetD3D12GraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsD3D12KHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInputSourceLocalizedName)(XrSession, const XrInputSourceLocalizedNameGetInfo *, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProcAddr)(XrInstance, const char *, PFN_xrVoidFunction *);
typedef XrResult (XRAPI_PTR *PFN_xrGetInstanceProperties)(XrInstance, XrInstanceProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetOpenGLGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsOpenGLKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetReferenceSpaceBoundsRect)(XrSession, XrReferenceSpaceType, XrExtent2Df *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystem)(XrInstance, const XrSystemGetInfo *, XrSystemId *);
typedef XrResult (XRAPI_PTR *PFN_xrGetSystemProperties)(XrInstance, XrSystemId, XrSystemProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetViewConfigurationProperties)(XrInstance, XrSystemId, XrViewConfigurationType, XrViewConfigurationProperties *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVisibilityMaskKHR)(XrSession, XrViewConfigurationType, uint32_t, XrVisibilityMaskTypeKHR, XrVisibilityMaskKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanDeviceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsDeviceKHR)(XrInstance, XrSystemId, VkInstance, VkPhysicalDevice *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanGraphicsRequirementsKHR)(XrInstance, XrSystemId, XrGraphicsRequirementsVulkanKHR *);
typedef XrResult (XRAPI_PTR *PFN_xrGetVulkanInstanceExtensionsKHR)(XrInstance, XrSystemId, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateHandJointsEXT)(XrHandTrackerEXT, const XrHandJointsLocateInfoEXT *, XrHandJointLocationsEXT *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateSpace)(XrSpace, XrSpace, XrTime, XrSpaceLocation *);
typedef XrResult (XRAPI_PTR *PFN_xrLocateViews)(XrSession, const XrViewLocateInfo *, XrViewState *, uint32_t, uint32_t *, XrView *);
typedef XrResult (XRAPI_PTR *PFN_xrPathToString)(XrInstance, XrPath, uint32_t, uint32_t *, char *);
typedef XrResult (XRAPI_PTR *PFN_xrPerfSettingsSetPerformanceLevelEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsLevelEXT);
typedef XrResult (XRAPI_PTR *PFN_xrPollEvent)(XrInstance, XrEventDataBuffer *);
typedef XrResult (XRAPI_PTR *PFN_xrReleaseSwapchainImage)(XrSwapchain, const XrSwapchainImageReleaseInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrRequestExitSession)(XrSession);
typedef XrResult (XRAPI_PTR *PFN_xrResultToString)(XrInstance, XrResult, char[]);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceActiveEXT)(XrSession, XrPath, XrPath, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceLocationEXT)(XrSession, XrPath, XrPath, XrSpace, XrPosef);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateBoolEXT)(XrSession, XrPath, XrPath, XrBool32);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateFloatEXT)(XrSession, XrPath, XrPath, float);
typedef XrResult (XRAPI_PTR *PFN_xrSetInputDeviceStateVector2fEXT)(XrSession, XrPath, XrPath, XrVector2f);
typedef XrResult (XRAPI_PTR *PFN_xrStopHapticFeedback)(XrSession, const XrHapticActionInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrStringToPath)(XrInstance, const char *, XrPath *);
typedef XrResult (XRAPI_PTR *PFN_xrStructureTypeToString)(XrInstance, XrStructureType, char[]);
typedef XrResult (XRAPI_PTR *PFN_xrSuggestInteractionProfileBindings)(XrInstance, const XrInteractionProfileSuggestedBinding *);
typedef XrResult (XRAPI_PTR *PFN_xrSyncActions)(XrSession, const XrActionsSyncInfo *);
typedef XrResult (XRAPI_PTR *PFN_xrThermalGetTemperatureTrendEXT)(XrSession, XrPerfSettingsDomainEXT, XrPerfSettingsNotificationLevelEXT *, float *, float *);
typedef XrResult (XRAPI_PTR *PFN_xrUpdateHandMeshMSFT)(XrHandTrackerEXT, const XrHandMeshUpdateInfoMSFT *, XrHandMeshMSFT *);
typedef XrResult (XRAPI_PTR *PFN_xrWaitFrame)(XrSession, const XrFrameWaitInfo *, XrFrameState *);
typedef XrResult (XRAPI_PTR *PFN_xrWaitSwapchainImage)(XrSwapchain, const XrSwapchainImageWaitInfo *);

#ifndef XR_NO_PROTOTYPES
XrResult XRAPI_CALL xrAcquireSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageAcquireInfo *acquireInfo, uint32_t *index);
XrResult XRAPI_CALL xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo, const XrHapticBaseHeader *hapticFeedback);
XrResult XRAPI_CALL xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo *attachInfo);
XrResult XRAPI_CALL xrBeginFrame(XrSession session, const XrFrameBeginInfo *frameBeginInfo);
XrResult XRAPI_CALL xrBeginSession(XrSession session, const XrSessionBeginInfo *beginInfo);
XrResult XRAPI_CALL xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER *performanceCounter);
XrResult XRAPI_CALL xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER *performanceCounter, XrTime *time);
XrResult XRAPI_CALL xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo *createInfo, XrAction *action);
XrResult XRAPI_CALL xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo *createInfo, XrActionSet *actionSet);
XrResult XRAPI_CALL xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT *createInfo, XrHandTrackerEXT *handTracker);
XrResult XRAPI_CALL xrCreateInstance(const XrInstanceCreateInfo *createInfo, XrInstance *instance);
XrResult XRAPI_CALL xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSession(XrInstance instance, const XrSessionCreateInfo *createInfo, XrSession *session);
XrResult XRAPI_CALL xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT *createInfo, XrSpatialAnchorMSFT *anchor);
XrResult XRAPI_CALL xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT *createInfo, XrSpace *space);
XrResult XRAPI_CALL xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo *createInfo, XrSwapchain *swapchain);
XrResult XRAPI_CALL xrDestroyAction(XrAction action);
XrResult XRAPI_CALL xrDestroyActionSet(XrActionSet actionSet);
XrResult XRAPI_CALL xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker);
XrResult XRAPI_CALL xrDestroyInstance(XrInstance instance);
XrResult XRAPI_CALL xrDestroySession(XrSession session);
XrResult XRAPI_CALL xrDestroySpace(XrSpace space);
XrResult XRAPI_CALL xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor);
XrResult XRAPI_CALL xrDestroySwapchain(XrSwapchain swapchain);
XrResult XRAPI_CALL xrEndFrame(XrSession session, const XrFrameEndInfo *frameEndInfo);
XrResult XRAPI_CALL xrEndSession(XrSession session);
XrResult XRAPI_CALL xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrApiLayerProperties *properties);
XrResult XRAPI_CALL xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo *enumerateInfo, uint32_t sourceCapacityInput, uint32_t *sourceCountOutput, XrPath *sources);
XrResult XRAPI_CALL xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t *environmentBlendModeCountOutput, XrEnvironmentBlendMode *environmentBlendModes);
XrResult XRAPI_CALL xrEnumerateInstanceExtensionProperties(const char *layerName, uint32_t propertyCapacityInput, uint32_t *propertyCountOutput, XrExtensionProperties *properties);
XrResult XRAPI_CALL xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t *spaceCountOutput, XrReferenceSpaceType *spaces);
XrResult XRAPI_CALL xrEnumerateSwapchainFormats(XrSession session, uint32_t formatCapacityInput, uint32_t *formatCountOutput, int64_t *formats);
XrResult XRAPI_CALL xrEnumerateSwapchainImages(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t *imageCountOutput, XrSwapchainImageBaseHeader *images);
XrResult XRAPI_CALL xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrViewConfigurationView *views);
XrResult XRAPI_CALL xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t *viewConfigurationTypeCountOutput, XrViewConfigurationType *viewConfigurationTypes);
XrResult XRAPI_CALL xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateBoolean *state);
XrResult XRAPI_CALL xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateFloat *state);
XrResult XRAPI_CALL xrGetActionStatePose(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStatePose *state);
XrResult XRAPI_CALL xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo *getInfo, XrActionStateVector2f *state);
XrResult XRAPI_CALL xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState *interactionProfile);
XrResult XRAPI_CALL xrGetD3D11GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D11KHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetD3D12GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D12KHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo *getInfo, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetInstanceProcAddr(XrInstance instance, const char *name, PFN_xrVoidFunction *function);
XrResult XRAPI_CALL xrGetInstanceProperties(XrInstance instance, XrInstanceProperties *instanceProperties);
XrResult XRAPI_CALL xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df *bounds);
XrResult XRAPI_CALL xrGetSystem(XrInstance instance, const XrSystemGetInfo *getInfo, XrSystemId *systemId);
XrResult XRAPI_CALL xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties *properties);
XrResult XRAPI_CALL xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties *configurationProperties);
XrResult XRAPI_CALL xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR *visibilityMask);
XrResult XRAPI_CALL xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice *vkPhysicalDevice);
XrResult XRAPI_CALL xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR *graphicsRequirements);
XrResult XRAPI_CALL xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT *locateInfo, XrHandJointLocationsEXT *locations);
XrResult XRAPI_CALL xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation *location);
XrResult XRAPI_CALL xrLocateViews(XrSession session, const XrViewLocateInfo *viewLocateInfo, XrViewState *viewState, uint32_t viewCapacityInput, uint32_t *viewCountOutput, XrView *views);
XrResult XRAPI_CALL xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t *bufferCountOutput, char *buffer);
XrResult XRAPI_CALL xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level);
XrResult XRAPI_CALL xrPollEvent(XrInstance instance, XrEventDataBuffer *eventData);
XrResult XRAPI_CALL xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo *releaseInfo);
XrResult XRAPI_CALL xrRequestExitSession(XrSession session);
XrResult XRAPI_CALL xrResultToString(XrInstance instance, XrResult value, char buffer[]);
XrResult XRAPI_CALL xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive);
XrResult XRAPI_CALL xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose);
XrResult XRAPI_CALL xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state);
XrResult XRAPI_CALL xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state);
XrResult XRAPI_CALL xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state);
XrResult XRAPI_CALL xrStopHapticFeedback(XrSession session, const XrHapticActionInfo *hapticActionInfo);
XrResult XRAPI_CALL xrStringToPath(XrInstance instance, const char *pathString, XrPath *path);
XrResult XRAPI_CALL xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[]);
XrResult XRAPI_CALL xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding *suggestedBindings);
XrResult XRAPI_CALL xrSyncActions(XrSession session, const XrActionsSyncInfo *syncInfo);
XrResult XRAPI_CALL xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT *notificationLevel, float *tempHeadroom, float *tempSlope);
XrResult XRAPI_CALL xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT *updateInfo, XrHandMeshMSFT *handMesh);
XrResult XRAPI_CALL xrWaitFrame(XrSession session, const XrFrameWaitInfo *frameWaitInfo, XrFrameState *frameState);
XrResult XRAPI_CALL xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo *waitInfo);
#endif /* XR_NO_PROTOTYPES */

#endif /* __WINE_OPENXR_H */
