
// openvr.h
//========= Copyright Valve Corporation ============//
// Dynamically generated file. Do not modify this file directly.

#ifndef _OPENVR_API
#define _OPENVR_API

#include <stdint.h>



// version.h
namespace vr
{
	static const uint32_t k_nSteamVRVersionMajor = 1;
	static const uint32_t k_nSteamVRVersionMinor = 1;
	static const uint32_t k_nSteamVRVersionBuild = 3;
} // namespace vr

// vrtypes.h
#ifndef _INCLUDE_VRTYPES_H
#define _INCLUDE_VRTYPES_H

// Forward declarations to avoid requiring vulkan.h
struct VkDevice_T;
struct VkPhysicalDevice_T;
struct VkInstance_T;
struct VkQueue_T;

// Forward declarations to avoid requiring d3d12.h
struct ID3D12Resource;
struct ID3D12CommandQueue;

namespace vr
{
#pragma pack( push, 8 )

/** A handle for a spatial anchor.  This handle is only valid during the session it was created in.
* Anchors that live beyond one session should be saved by their string descriptors. */
typedef uint32_t SpatialAnchorHandle_t;

typedef void* glSharedTextureHandle_t;
typedef int32_t glInt_t;
typedef uint32_t glUInt_t;

// right-handed system
// +y is up
// +x is to the right
// -z is forward
// Distance unit is  meters
struct HmdMatrix34_t
{
	float m[3][4];
};

struct HmdMatrix33_t
{
	float m[3][3];
};

struct HmdMatrix44_t
{
	float m[4][4];
};

struct HmdVector3_t
{
	float v[3];
};

struct HmdVector4_t
{
	float v[4];
};

struct HmdVector3d_t
{
	double v[3];
};

struct HmdVector2_t
{
	float v[2];
};

struct HmdQuaternion_t
{
	double w, x, y, z;
};

struct HmdQuaternionf_t
{
	float w, x, y, z;
};

struct HmdColor_t
{
	float r, g, b, a;
};

struct HmdQuad_t
{
	HmdVector3_t vCorners[ 4 ];
};

struct HmdRect2_t
{
	HmdVector2_t vTopLeft;
	HmdVector2_t vBottomRight;
};

/** Used to return the post-distortion UVs for each color channel. 
* UVs range from 0 to 1 with 0,0 in the upper left corner of the 
* source render target. The 0,0 to 1,1 range covers a single eye. */
struct DistortionCoordinates_t
{
	float rfRed[2];
	float rfGreen[2];
	float rfBlue[2];
};

enum EVREye
{
	Eye_Left = 0,
	Eye_Right = 1
};

enum ETextureType
{
	TextureType_Invalid = -1, // Handle has been invalidated
	TextureType_DirectX = 0, // Handle is an ID3D11Texture
	TextureType_OpenGL = 1,  // Handle is an OpenGL texture name or an OpenGL render buffer name, depending on submit flags
	TextureType_Vulkan = 2, // Handle is a pointer to a VRVulkanTextureData_t structure
	TextureType_IOSurface = 3, // Handle is a macOS cross-process-sharable IOSurfaceRef, deprecated in favor of TextureType_Metal on supported platforms
	TextureType_DirectX12 = 4, // Handle is a pointer to a D3D12TextureData_t structure
	TextureType_DXGISharedHandle = 5, // Handle is a HANDLE DXGI share handle, only supported for Overlay render targets. 
									  // this texture is used directly by our renderer, so only perform atomic (copyresource or resolve) on it
	TextureType_Metal = 6, // Handle is a MTLTexture conforming to the MTLSharedTexture protocol. Textures submitted to IVRCompositor::Submit which
						   // are of type MTLTextureType2DArray assume layer 0 is the left eye texture (vr::EVREye::Eye_left), layer 1 is the right
						   // eye texture (vr::EVREye::Eye_Right)
};

enum EColorSpace
{
	ColorSpace_Auto = 0,	// Assumes 'gamma' for 8-bit per component formats, otherwise 'linear'.  This mirrors the DXGI formats which have _SRGB variants.
	ColorSpace_Gamma = 1,	// Texture data can be displayed directly on the display without any conversion (a.k.a. display native format).
	ColorSpace_Linear = 2,	// Same as gamma but has been converted to a linear representation using DXGI's sRGB conversion algorithm.
};

struct Texture_t
{
	void* handle; // See ETextureType definition above
	ETextureType eType;
	EColorSpace eColorSpace;
};

// Handle to a shared texture (HANDLE on Windows obtained using OpenSharedResource).
typedef uint64_t SharedTextureHandle_t;
#define INVALID_SHARED_TEXTURE_HANDLE	((vr::SharedTextureHandle_t)0)

enum ETrackingResult
{
	TrackingResult_Uninitialized			= 1,

	TrackingResult_Calibrating_InProgress	= 100,
	TrackingResult_Calibrating_OutOfRange	= 101,

	TrackingResult_Running_OK				= 200,
	TrackingResult_Running_OutOfRange		= 201,

	TrackingResult_Fallback_RotationOnly	= 300,
};

typedef uint32_t DriverId_t;
static const uint32_t k_nDriverNone = 0xFFFFFFFF;

static const uint32_t k_unMaxDriverDebugResponseSize = 32768;

/** Used to pass device IDs to API calls */
typedef uint32_t TrackedDeviceIndex_t;
static const uint32_t k_unTrackedDeviceIndex_Hmd = 0;
static const uint32_t k_unMaxTrackedDeviceCount = 64;
static const uint32_t k_unTrackedDeviceIndexOther = 0xFFFFFFFE;
static const uint32_t k_unTrackedDeviceIndexInvalid = 0xFFFFFFFF;

/** Describes what kind of object is being tracked at a given ID */
enum ETrackedDeviceClass
{
	TrackedDeviceClass_Invalid = 0,				// the ID was not valid.
	TrackedDeviceClass_HMD = 1,					// Head-Mounted Displays
	TrackedDeviceClass_Controller = 2,			// Tracked controllers
	TrackedDeviceClass_GenericTracker = 3,		// Generic trackers, similar to controllers
	TrackedDeviceClass_TrackingReference = 4,	// Camera and base stations that serve as tracking reference points
	TrackedDeviceClass_DisplayRedirect = 5,		// Accessories that aren't necessarily tracked themselves, but may redirect video output from other tracked devices

	TrackedDeviceClass_Max
};


/** Describes what specific role associated with a tracked device */
enum ETrackedControllerRole
{
	TrackedControllerRole_Invalid = 0,					// Invalid value for controller type
	TrackedControllerRole_LeftHand = 1,					// Tracked device associated with the left hand
	TrackedControllerRole_RightHand = 2,				// Tracked device associated with the right hand
	TrackedControllerRole_OptOut = 3,					// Tracked device is opting out of left/right hand selection
	TrackedControllerRole_Treadmill = 4,				// Tracked device is a treadmill
	TrackedControllerRole_Max = 4
};


/** Returns true if the tracked controller role is allowed to be a hand */
inline bool IsRoleAllowedAsHand( ETrackedControllerRole eRole )
{
	switch ( eRole )
	{
	case TrackedControllerRole_Invalid:
	case TrackedControllerRole_LeftHand:
	case TrackedControllerRole_RightHand:
		return true;
	default:
		return false;
	}
}


/** describes a single pose for a tracked object */
struct TrackedDevicePose_t
{
	HmdMatrix34_t mDeviceToAbsoluteTracking;
	HmdVector3_t vVelocity;				// velocity in tracker space in m/s
	HmdVector3_t vAngularVelocity;		// angular velocity in radians/s (?)
	ETrackingResult eTrackingResult;
	bool bPoseIsValid;

	// This indicates that there is a device connected for this spot in the pose array.
	// It could go from true to false if the user unplugs the device.
	bool bDeviceIsConnected;
};

/** Identifies which style of tracking origin the application wants to use
* for the poses it is requesting */
enum ETrackingUniverseOrigin
{
	TrackingUniverseSeated = 0,		// Poses are provided relative to the seated zero pose
	TrackingUniverseStanding = 1,	// Poses are provided relative to the safe bounds configured by the user
	TrackingUniverseRawAndUncalibrated = 2,	// Poses are provided in the coordinate system defined by the driver.  It has Y up and is unified for devices of the same driver. You usually don't want this one.
};

typedef uint64_t WebConsoleHandle_t;
#define INVALID_WEB_CONSOLE_HANDLE	((vr::WebConsoleHandle_t)0)

// Refers to a single container of properties
typedef uint64_t PropertyContainerHandle_t;
typedef uint32_t PropertyTypeTag_t;

static const PropertyContainerHandle_t k_ulInvalidPropertyContainer = 0;
static const PropertyTypeTag_t k_unInvalidPropertyTag = 0;

typedef PropertyContainerHandle_t DriverHandle_t;
static const PropertyContainerHandle_t k_ulInvalidDriverHandle = 0;

// Use these tags to set/get common types as struct properties
static const PropertyTypeTag_t k_unFloatPropertyTag = 1;
static const PropertyTypeTag_t k_unInt32PropertyTag = 2;
static const PropertyTypeTag_t k_unUint64PropertyTag = 3;
static const PropertyTypeTag_t k_unBoolPropertyTag = 4;
static const PropertyTypeTag_t k_unStringPropertyTag = 5;

static const PropertyTypeTag_t k_unHmdMatrix34PropertyTag = 20;
static const PropertyTypeTag_t k_unHmdMatrix44PropertyTag = 21;
static const PropertyTypeTag_t k_unHmdVector3PropertyTag = 22;
static const PropertyTypeTag_t k_unHmdVector4PropertyTag = 23;
static const PropertyTypeTag_t k_unHmdVector2PropertyTag = 24;
static const PropertyTypeTag_t k_unHmdQuadPropertyTag = 25;

static const PropertyTypeTag_t k_unHiddenAreaPropertyTag = 30;
static const PropertyTypeTag_t k_unPathHandleInfoTag = 31;
static const PropertyTypeTag_t k_unActionPropertyTag = 32;
static const PropertyTypeTag_t k_unInputValuePropertyTag = 33;
static const PropertyTypeTag_t k_unWildcardPropertyTag = 34;
static const PropertyTypeTag_t k_unHapticVibrationPropertyTag = 35;
static const PropertyTypeTag_t k_unSkeletonPropertyTag = 36;

static const PropertyTypeTag_t k_unSpatialAnchorPosePropertyTag = 40;
static const PropertyTypeTag_t k_unJsonPropertyTag = 41;

static const PropertyTypeTag_t k_unOpenVRInternalReserved_Start = 1000;
static const PropertyTypeTag_t k_unOpenVRInternalReserved_End = 10000;


/** Each entry in this enum represents a property that can be retrieved about a
* tracked device. Many fields are only valid for one ETrackedDeviceClass. */
enum ETrackedDeviceProperty
{
	Prop_Invalid								= 0,

	// general properties that apply to all device classes
	Prop_TrackingSystemName_String				= 1000,
	Prop_ModelNumber_String						= 1001,
	Prop_SerialNumber_String					= 1002,
	Prop_RenderModelName_String					= 1003,
	Prop_WillDriftInYaw_Bool					= 1004,
	Prop_ManufacturerName_String				= 1005,
	Prop_TrackingFirmwareVersion_String			= 1006,
	Prop_HardwareRevision_String				= 1007,
	Prop_AllWirelessDongleDescriptions_String	= 1008,
	Prop_ConnectedWirelessDongle_String			= 1009,
	Prop_DeviceIsWireless_Bool					= 1010,
	Prop_DeviceIsCharging_Bool					= 1011,
	Prop_DeviceBatteryPercentage_Float			= 1012, // 0 is empty, 1 is full
	Prop_StatusDisplayTransform_Matrix34		= 1013,
	Prop_Firmware_UpdateAvailable_Bool			= 1014,
	Prop_Firmware_ManualUpdate_Bool				= 1015,
	Prop_Firmware_ManualUpdateURL_String		= 1016,
	Prop_HardwareRevision_Uint64				= 1017,
	Prop_FirmwareVersion_Uint64					= 1018,
	Prop_FPGAVersion_Uint64						= 1019,
	Prop_VRCVersion_Uint64						= 1020,
	Prop_RadioVersion_Uint64					= 1021,
	Prop_DongleVersion_Uint64					= 1022,
	Prop_BlockServerShutdown_Bool				= 1023,
	Prop_CanUnifyCoordinateSystemWithHmd_Bool	= 1024,
	Prop_ContainsProximitySensor_Bool			= 1025,
	Prop_DeviceProvidesBatteryStatus_Bool		= 1026,
	Prop_DeviceCanPowerOff_Bool					= 1027,
	Prop_Firmware_ProgrammingTarget_String		= 1028,
	Prop_DeviceClass_Int32						= 1029,
	Prop_HasCamera_Bool							= 1030,
	Prop_DriverVersion_String                   = 1031,
	Prop_Firmware_ForceUpdateRequired_Bool      = 1032,
	Prop_ViveSystemButtonFixRequired_Bool		= 1033,
	Prop_ParentDriver_Uint64					= 1034,
	Prop_ResourceRoot_String					= 1035,
	Prop_RegisteredDeviceType_String			= 1036,
	Prop_InputProfilePath_String				= 1037, // input profile to use for this device in the input system. Will default to tracking system name if this isn't provided
	Prop_NeverTracked_Bool						= 1038, // Used for devices that will never have a valid pose by design
	Prop_NumCameras_Int32						= 1039,
	Prop_CameraFrameLayout_Int32				= 1040, // EVRTrackedCameraFrameLayout value
	Prop_CameraStreamFormat_Int32				= 1041, // ECameraVideoStreamFormat value
	Prop_AdditionalDeviceSettingsPath_String	= 1042, // driver-relative path to additional device and global configuration settings
	Prop_Identifiable_Bool						= 1043, // Whether device supports being identified from vrmonitor (e.g. blink LED, vibrate haptics, etc)

	// Properties that are unique to TrackedDeviceClass_HMD
	Prop_ReportsTimeSinceVSync_Bool				= 2000,
	Prop_SecondsFromVsyncToPhotons_Float		= 2001,
	Prop_DisplayFrequency_Float					= 2002,
	Prop_UserIpdMeters_Float					= 2003,
	Prop_CurrentUniverseId_Uint64				= 2004, 
	Prop_PreviousUniverseId_Uint64				= 2005, 
	Prop_DisplayFirmwareVersion_Uint64			= 2006,
	Prop_IsOnDesktop_Bool						= 2007,
	Prop_DisplayMCType_Int32					= 2008,
	Prop_DisplayMCOffset_Float					= 2009,
	Prop_DisplayMCScale_Float					= 2010,
	Prop_EdidVendorID_Int32						= 2011,
	Prop_DisplayMCImageLeft_String              = 2012,
	Prop_DisplayMCImageRight_String             = 2013,
	Prop_DisplayGCBlackClamp_Float				= 2014,
	Prop_EdidProductID_Int32					= 2015,
	Prop_CameraToHeadTransform_Matrix34			= 2016,
	Prop_DisplayGCType_Int32					= 2017,
	Prop_DisplayGCOffset_Float					= 2018,
	Prop_DisplayGCScale_Float					= 2019,
	Prop_DisplayGCPrescale_Float				= 2020,
	Prop_DisplayGCImage_String					= 2021,
	Prop_LensCenterLeftU_Float					= 2022,
	Prop_LensCenterLeftV_Float					= 2023,
	Prop_LensCenterRightU_Float					= 2024,
	Prop_LensCenterRightV_Float					= 2025,
	Prop_UserHeadToEyeDepthMeters_Float			= 2026,
	Prop_CameraFirmwareVersion_Uint64			= 2027,
	Prop_CameraFirmwareDescription_String		= 2028,
	Prop_DisplayFPGAVersion_Uint64				= 2029,
	Prop_DisplayBootloaderVersion_Uint64		= 2030,
	Prop_DisplayHardwareVersion_Uint64			= 2031,
	Prop_AudioFirmwareVersion_Uint64			= 2032,
	Prop_CameraCompatibilityMode_Int32			= 2033,
	Prop_ScreenshotHorizontalFieldOfViewDegrees_Float = 2034,
	Prop_ScreenshotVerticalFieldOfViewDegrees_Float = 2035,
	Prop_DisplaySuppressed_Bool					= 2036,
	Prop_DisplayAllowNightMode_Bool				= 2037,
	Prop_DisplayMCImageWidth_Int32				= 2038,
	Prop_DisplayMCImageHeight_Int32				= 2039,
	Prop_DisplayMCImageNumChannels_Int32		= 2040,
	Prop_DisplayMCImageData_Binary				= 2041,
	Prop_SecondsFromPhotonsToVblank_Float		= 2042,
	Prop_DriverDirectModeSendsVsyncEvents_Bool	= 2043,
	Prop_DisplayDebugMode_Bool					= 2044,
	Prop_GraphicsAdapterLuid_Uint64				= 2045,
	Prop_DriverProvidedChaperonePath_String		= 2048,
	Prop_ExpectedTrackingReferenceCount_Int32	= 2049, // expected number of sensors or basestations to reserve UI space for
	Prop_ExpectedControllerCount_Int32			= 2050, // expected number of tracked controllers to reserve UI space for
	Prop_NamedIconPathControllerLeftDeviceOff_String	= 2051, // placeholder icon for "left" controller if not yet detected/loaded
	Prop_NamedIconPathControllerRightDeviceOff_String	= 2052, // placeholder icon for "right" controller if not yet detected/loaded
	Prop_NamedIconPathTrackingReferenceDeviceOff_String	= 2053, // placeholder icon for sensor/base if not yet detected/loaded
	Prop_DoNotApplyPrediction_Bool				= 2054,
	Prop_CameraToHeadTransforms_Matrix34_Array	= 2055,
	Prop_DistortionMeshResolution_Int32			= 2056, // custom resolution of compositor calls to IVRSystem::ComputeDistortion
	Prop_DriverIsDrawingControllers_Bool		= 2057,
	Prop_DriverRequestsApplicationPause_Bool	= 2058,
	Prop_DriverRequestsReducedRendering_Bool	= 2059,
	Prop_MinimumIpdStepMeters_Float				= 2060,
	Prop_AudioBridgeFirmwareVersion_Uint64		= 2061,
	Prop_ImageBridgeFirmwareVersion_Uint64		= 2062,
	Prop_ImuToHeadTransform_Matrix34			= 2063,
	Prop_ImuFactoryGyroBias_Vector3				= 2064,
	Prop_ImuFactoryGyroScale_Vector3			= 2065,
	Prop_ImuFactoryAccelerometerBias_Vector3	= 2066,
	Prop_ImuFactoryAccelerometerScale_Vector3	= 2067,
	// reserved 2068
	Prop_ConfigurationIncludesLighthouse20Features_Bool = 2069,

	// Driver requested mura correction properties
	Prop_DriverRequestedMuraCorrectionMode_Int32		= 2200,
	Prop_DriverRequestedMuraFeather_InnerLeft_Int32		= 2201,
	Prop_DriverRequestedMuraFeather_InnerRight_Int32	= 2202,
	Prop_DriverRequestedMuraFeather_InnerTop_Int32		= 2203,
	Prop_DriverRequestedMuraFeather_InnerBottom_Int32	= 2204,
	Prop_DriverRequestedMuraFeather_OuterLeft_Int32		= 2205,
	Prop_DriverRequestedMuraFeather_OuterRight_Int32	= 2206,
	Prop_DriverRequestedMuraFeather_OuterTop_Int32		= 2207,
	Prop_DriverRequestedMuraFeather_OuterBottom_Int32	= 2208,

	// Properties that are unique to TrackedDeviceClass_Controller
	Prop_AttachedDeviceId_String				= 3000,
	Prop_SupportedButtons_Uint64				= 3001,
	Prop_Axis0Type_Int32						= 3002, // Return value is of type EVRControllerAxisType
	Prop_Axis1Type_Int32						= 3003, // Return value is of type EVRControllerAxisType
	Prop_Axis2Type_Int32						= 3004, // Return value is of type EVRControllerAxisType
	Prop_Axis3Type_Int32						= 3005, // Return value is of type EVRControllerAxisType
	Prop_Axis4Type_Int32						= 3006, // Return value is of type EVRControllerAxisType
	Prop_ControllerRoleHint_Int32				= 3007, // Return value is of type ETrackedControllerRole

	// Properties that are unique to TrackedDeviceClass_TrackingReference
	Prop_FieldOfViewLeftDegrees_Float			= 4000,
	Prop_FieldOfViewRightDegrees_Float			= 4001,
	Prop_FieldOfViewTopDegrees_Float			= 4002,
	Prop_FieldOfViewBottomDegrees_Float			= 4003,
	Prop_TrackingRangeMinimumMeters_Float		= 4004,
	Prop_TrackingRangeMaximumMeters_Float		= 4005,
	Prop_ModeLabel_String						= 4006,

	// Properties that are used for user interface like icons names
	Prop_IconPathName_String						= 5000, // DEPRECATED. Value not referenced. Now expected to be part of icon path properties.
	Prop_NamedIconPathDeviceOff_String				= 5001, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceSearching_String		= 5002, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceSearchingAlert_String	= 5003, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceReady_String			= 5004, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceReadyAlert_String		= 5005, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceNotReady_String			= 5006, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceStandby_String			= 5007, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others
	Prop_NamedIconPathDeviceAlertLow_String			= 5008, // {driver}/icons/icon_filename - PNG for static icon, or GIF for animation, 50x32 for headsets and 32x32 for others

	// Properties that are used by helpers, but are opaque to applications
	Prop_DisplayHiddenArea_Binary_Start				= 5100,
	Prop_DisplayHiddenArea_Binary_End				= 5150,
	Prop_ParentContainer							= 5151,

	// Properties that are unique to drivers
	Prop_UserConfigPath_String					= 6000,
	Prop_InstallPath_String						= 6001,
	Prop_HasDisplayComponent_Bool				= 6002,
	Prop_HasControllerComponent_Bool			= 6003,
	Prop_HasCameraComponent_Bool				= 6004,
	Prop_HasDriverDirectModeComponent_Bool		= 6005,
	Prop_HasVirtualDisplayComponent_Bool		= 6006,
	Prop_HasSpatialAnchorsSupport_Bool		    = 6007,

	// Properties that are set internally based on other information provided by drivers
	Prop_ControllerType_String					= 7000,
	Prop_LegacyInputProfile_String				= 7001,
	Prop_ControllerHandSelectionPriority_Int32	= 7002, // Allows hand assignments to prefer some controllers over others. High numbers are selected over low numbers

	// Vendors are free to expose private debug data in this reserved region
	Prop_VendorSpecific_Reserved_Start			= 10000,
	Prop_VendorSpecific_Reserved_End			= 10999,
	
	Prop_TrackedDeviceProperty_Max				= 1000000,
};

/** No string property will ever be longer than this length */
static const uint32_t k_unMaxPropertyStringSize = 32 * 1024;

/** Used to return errors that occur when reading properties. */
enum ETrackedPropertyError
{
	TrackedProp_Success						= 0,
	TrackedProp_WrongDataType				= 1,
	TrackedProp_WrongDeviceClass			= 2,
	TrackedProp_BufferTooSmall				= 3,
	TrackedProp_UnknownProperty				= 4, // Driver has not set the property (and may not ever).
	TrackedProp_InvalidDevice				= 5,
	TrackedProp_CouldNotContactServer		= 6,
	TrackedProp_ValueNotProvidedByDevice	= 7,
	TrackedProp_StringExceedsMaximumLength	= 8,
	TrackedProp_NotYetAvailable				= 9, // The property value isn't known yet, but is expected soon. Call again later.
	TrackedProp_PermissionDenied			= 10,
	TrackedProp_InvalidOperation			= 11,
	TrackedProp_CannotWriteToWildcards		= 12,
	TrackedProp_IPCReadFailure				= 13,
};


typedef uint64_t VRActionHandle_t;
typedef uint64_t VRActionSetHandle_t;
typedef uint64_t VRInputValueHandle_t;

static const VRActionHandle_t k_ulInvalidActionHandle = 0;
static const VRActionSetHandle_t k_ulInvalidActionSetHandle = 0;
static const VRInputValueHandle_t k_ulInvalidInputValueHandle = 0;


/** Allows the application to control what part of the provided texture will be used in the
* frame buffer. */
struct VRTextureBounds_t
{
	float uMin, vMin;
	float uMax, vMax;
};

/** Allows specifying pose used to render provided scene texture (if different from value returned by WaitGetPoses). */
struct VRTextureWithPose_t : public Texture_t
{
	HmdMatrix34_t mDeviceToAbsoluteTracking; // Actual pose used to render scene textures.
};

struct VRTextureDepthInfo_t
{
	void* handle; // See ETextureType definition above
	HmdMatrix44_t mProjection;
	HmdVector2_t vRange; // 0..1
};

struct VRTextureWithDepth_t : public Texture_t
{
	VRTextureDepthInfo_t depth;
};

struct VRTextureWithPoseAndDepth_t : public VRTextureWithPose_t
{
	VRTextureDepthInfo_t depth;
};

/** Allows the application to control how scene textures are used by the compositor when calling Submit. */
enum EVRSubmitFlags
{
	// Simple render path. App submits rendered left and right eye images with no lens distortion correction applied.
	Submit_Default = 0x00,

	// App submits final left and right eye images with lens distortion already applied (lens distortion makes the images appear
	// barrel distorted with chromatic aberration correction applied). The app would have used the data returned by
	// vr::IVRSystem::ComputeDistortion() to apply the correct distortion to the rendered images before calling Submit().
	Submit_LensDistortionAlreadyApplied = 0x01,

	// If the texture pointer passed in is actually a renderbuffer (e.g. for MSAA in OpenGL) then set this flag.
	Submit_GlRenderBuffer = 0x02,

	// Do not use
	Submit_Reserved = 0x04,

	// Set to indicate that pTexture is a pointer to a VRTextureWithPose_t.
	// This flag can be combined with Submit_TextureWithDepth to pass a VRTextureWithPoseAndDepth_t.
	Submit_TextureWithPose = 0x08,

	// Set to indicate that pTexture is a pointer to a VRTextureWithDepth_t.
	// This flag can be combined with Submit_TextureWithPose to pass a VRTextureWithPoseAndDepth_t.
	Submit_TextureWithDepth = 0x10,
};

/** Data required for passing Vulkan textures to IVRCompositor::Submit.
* Be sure to call OpenVR_Shutdown before destroying these resources. 
* Please see https://github.com/ValveSoftware/openvr/wiki/Vulkan for Vulkan-specific documentation */
struct VRVulkanTextureData_t
{
	uint64_t m_nImage; // VkImage
	VkDevice_T *m_pDevice;
	VkPhysicalDevice_T *m_pPhysicalDevice;
	VkInstance_T *m_pInstance;
	VkQueue_T *m_pQueue;
	uint32_t m_nQueueFamilyIndex;
	uint32_t m_nWidth, m_nHeight, m_nFormat, m_nSampleCount;
};

/** Data required for passing D3D12 textures to IVRCompositor::Submit.
* Be sure to call OpenVR_Shutdown before destroying these resources. */
struct D3D12TextureData_t
{
	ID3D12Resource *m_pResource;
	ID3D12CommandQueue *m_pCommandQueue;
	uint32_t m_nNodeMask;
};

/** Status of the overall system or tracked objects */
enum EVRState
{
	VRState_Undefined = -1,
	VRState_Off = 0,
	VRState_Searching = 1,
	VRState_Searching_Alert = 2,
	VRState_Ready = 3,
	VRState_Ready_Alert = 4,
	VRState_NotReady = 5,
	VRState_Standby = 6,
	VRState_Ready_Alert_Low = 7,
};

/** The types of events that could be posted (and what the parameters mean for each event type) */
enum EVREventType
{
	VREvent_None = 0,

	VREvent_TrackedDeviceActivated		= 100,
	VREvent_TrackedDeviceDeactivated	= 101,
	VREvent_TrackedDeviceUpdated		= 102,
	VREvent_TrackedDeviceUserInteractionStarted	= 103,
	VREvent_TrackedDeviceUserInteractionEnded	= 104,
	VREvent_IpdChanged					= 105,
	VREvent_EnterStandbyMode			= 106,
	VREvent_LeaveStandbyMode			= 107,
	VREvent_TrackedDeviceRoleChanged	= 108,
	VREvent_WatchdogWakeUpRequested		= 109,
	VREvent_LensDistortionChanged		= 110,
	VREvent_PropertyChanged				= 111,
	VREvent_WirelessDisconnect			= 112,
	VREvent_WirelessReconnect			= 113,

	VREvent_ButtonPress					= 200, // data is controller
	VREvent_ButtonUnpress				= 201, // data is controller
	VREvent_ButtonTouch					= 202, // data is controller
	VREvent_ButtonUntouch				= 203, // data is controller

	VREvent_DualAnalog_Press			= 250, // data is dualAnalog
	VREvent_DualAnalog_Unpress			= 251, // data is dualAnalog
	VREvent_DualAnalog_Touch			= 252, // data is dualAnalog
	VREvent_DualAnalog_Untouch			= 253, // data is dualAnalog
	VREvent_DualAnalog_Move				= 254, // data is dualAnalog
	VREvent_DualAnalog_ModeSwitch1		= 255, // data is dualAnalog
	VREvent_DualAnalog_ModeSwitch2		= 256, // data is dualAnalog
	VREvent_DualAnalog_Cancel			= 257, // data is dualAnalog

	VREvent_MouseMove					= 300, // data is mouse
	VREvent_MouseButtonDown				= 301, // data is mouse
	VREvent_MouseButtonUp				= 302, // data is mouse
	VREvent_FocusEnter					= 303, // data is overlay
	VREvent_FocusLeave					= 304, // data is overlay
	VREvent_Scroll						= 305, // data is mouse
	VREvent_TouchPadMove				= 306, // data is mouse
	VREvent_OverlayFocusChanged			= 307, // data is overlay, global event
	VREvent_ReloadOverlays				= 308, 

	VREvent_InputFocusCaptured			= 400, // data is process DEPRECATED
	VREvent_InputFocusReleased			= 401, // data is process DEPRECATED
	VREvent_SceneFocusLost				= 402, // data is process
	VREvent_SceneFocusGained			= 403, // data is process
	VREvent_SceneApplicationChanged		= 404, // data is process - The App actually drawing the scene changed (usually to or from the compositor)
	VREvent_SceneFocusChanged			= 405, // data is process - New app got access to draw the scene
	VREvent_InputFocusChanged			= 406, // data is process
	VREvent_SceneApplicationSecondaryRenderingStarted = 407, // data is process
	VREvent_SceneApplicationUsingWrongGraphicsAdapter = 408, // data is process
	VREvent_ActionBindingReloaded		 = 409, // data is process - The App that action binds reloaded for

	VREvent_HideRenderModels			= 410, // Sent to the scene application to request hiding render models temporarily
	VREvent_ShowRenderModels			= 411, // Sent to the scene application to request restoring render model visibility

	VREvent_ConsoleOpened               = 420,
	VREvent_ConsoleClosed               = 421,

	VREvent_OverlayShown				= 500,
	VREvent_OverlayHidden				= 501,
	VREvent_DashboardActivated			= 502,
	VREvent_DashboardDeactivated		= 503,
	VREvent_DashboardThumbSelected		= 504, // Sent to the overlay manager - data is overlay
	VREvent_DashboardRequested			= 505, // Sent to the overlay manager - data is overlay
	VREvent_ResetDashboard				= 506, // Send to the overlay manager
	VREvent_RenderToast					= 507, // Send to the dashboard to render a toast - data is the notification ID
	VREvent_ImageLoaded					= 508, // Sent to overlays when a SetOverlayRaw or SetOverlayFromFile call finishes loading
	VREvent_ShowKeyboard				= 509, // Sent to keyboard renderer in the dashboard to invoke it
	VREvent_HideKeyboard				= 510, // Sent to keyboard renderer in the dashboard to hide it
	VREvent_OverlayGamepadFocusGained	= 511, // Sent to an overlay when IVROverlay::SetFocusOverlay is called on it
	VREvent_OverlayGamepadFocusLost		= 512, // Send to an overlay when it previously had focus and IVROverlay::SetFocusOverlay is called on something else
	VREvent_OverlaySharedTextureChanged = 513,
	//VREvent_DashboardGuideButtonDown	= 514, // These are no longer sent
	//VREvent_DashboardGuideButtonUp		= 515,
	VREvent_ScreenshotTriggered			= 516, // Screenshot button combo was pressed, Dashboard should request a screenshot
	VREvent_ImageFailed					= 517, // Sent to overlays when a SetOverlayRaw or SetOverlayfromFail fails to load
	VREvent_DashboardOverlayCreated		= 518,
	VREvent_SwitchGamepadFocus			= 519,

	// Screenshot API
	VREvent_RequestScreenshot				= 520, // Sent by vrclient application to compositor to take a screenshot
	VREvent_ScreenshotTaken					= 521, // Sent by compositor to the application that the screenshot has been taken
	VREvent_ScreenshotFailed				= 522, // Sent by compositor to the application that the screenshot failed to be taken
	VREvent_SubmitScreenshotToDashboard		= 523, // Sent by compositor to the dashboard that a completed screenshot was submitted
	VREvent_ScreenshotProgressToDashboard	= 524, // Sent by compositor to the dashboard that a completed screenshot was submitted

	VREvent_PrimaryDashboardDeviceChanged	= 525,
	VREvent_RoomViewShown					= 526, // Sent by compositor whenever room-view is enabled
	VREvent_RoomViewHidden					= 527, // Sent by compositor whenever room-view is disabled
	VREvent_ShowUI							= 528, // data is showUi

	VREvent_Notification_Shown				= 600,
	VREvent_Notification_Hidden				= 601,
	VREvent_Notification_BeginInteraction	= 602,
	VREvent_Notification_Destroyed			= 603,

	VREvent_Quit							= 700, // data is process
	VREvent_ProcessQuit						= 701, // data is process
	VREvent_QuitAborted_UserPrompt			= 702, // data is process
	VREvent_QuitAcknowledged				= 703, // data is process
	VREvent_DriverRequestedQuit				= 704, // The driver has requested that SteamVR shut down

	VREvent_ChaperoneDataHasChanged			= 800, // Sent when the process needs to call VRChaperone()->ReloadInfo()
	VREvent_ChaperoneUniverseHasChanged		= 801,
	VREvent_ChaperoneTempDataHasChanged		= 802,
	VREvent_ChaperoneSettingsHaveChanged	= 803,
	VREvent_SeatedZeroPoseReset				= 804,
	VREvent_ChaperoneFlushCache				= 805, // Sent when the process needs to reload any cached data it retrieved from VRChaperone()

	VREvent_AudioSettingsHaveChanged		= 820,

	VREvent_BackgroundSettingHasChanged		   = 850,
	VREvent_CameraSettingsHaveChanged		   = 851,
	VREvent_ReprojectionSettingHasChanged	   = 852,
	VREvent_ModelSkinSettingsHaveChanged	   = 853,
	VREvent_EnvironmentSettingsHaveChanged	   = 854,
	VREvent_PowerSettingsHaveChanged		   = 855,
	VREvent_EnableHomeAppSettingsHaveChanged   = 856,
	VREvent_SteamVRSectionSettingChanged       = 857,
	VREvent_LighthouseSectionSettingChanged    = 858,
	VREvent_NullSectionSettingChanged          = 859,
	VREvent_UserInterfaceSectionSettingChanged = 860,
	VREvent_NotificationsSectionSettingChanged = 861,
	VREvent_KeyboardSectionSettingChanged      = 862,
	VREvent_PerfSectionSettingChanged          = 863,
	VREvent_DashboardSectionSettingChanged     = 864,
	VREvent_WebInterfaceSectionSettingChanged  = 865,
	VREvent_TrackersSectionSettingChanged	   = 866,
	VREvent_LastKnownSectionSettingChanged	   = 867,

	VREvent_StatusUpdate					= 900,

	VREvent_WebInterface_InstallDriverCompleted = 950,

	VREvent_MCImageUpdated					= 1000,

	VREvent_FirmwareUpdateStarted			= 1100,
	VREvent_FirmwareUpdateFinished			= 1101,

	VREvent_KeyboardClosed					= 1200,
	VREvent_KeyboardCharInput				= 1201,
	VREvent_KeyboardDone					= 1202, // Sent when DONE button clicked on keyboard

	VREvent_ApplicationTransitionStarted		= 1300,
	VREvent_ApplicationTransitionAborted		= 1301,
	VREvent_ApplicationTransitionNewAppStarted	= 1302,
	VREvent_ApplicationListUpdated				= 1303,
	VREvent_ApplicationMimeTypeLoad				= 1304,
	VREvent_ApplicationTransitionNewAppLaunchComplete = 1305,
	VREvent_ProcessConnected					= 1306,
	VREvent_ProcessDisconnected					= 1307,

	VREvent_Compositor_MirrorWindowShown		= 1400,
	VREvent_Compositor_MirrorWindowHidden		= 1401,
	VREvent_Compositor_ChaperoneBoundsShown		= 1410,
	VREvent_Compositor_ChaperoneBoundsHidden	= 1411,

	VREvent_TrackedCamera_StartVideoStream  = 1500,
	VREvent_TrackedCamera_StopVideoStream   = 1501,
	VREvent_TrackedCamera_PauseVideoStream  = 1502,
	VREvent_TrackedCamera_ResumeVideoStream = 1503,
	VREvent_TrackedCamera_EditingSurface    = 1550,

	VREvent_PerformanceTest_EnableCapture	= 1600,
	VREvent_PerformanceTest_DisableCapture	= 1601,
	VREvent_PerformanceTest_FidelityLevel	= 1602,

	VREvent_MessageOverlay_Closed			= 1650,
	VREvent_MessageOverlayCloseRequested	= 1651,
	
	VREvent_Input_HapticVibration			= 1700, // data is hapticVibration
	VREvent_Input_BindingLoadFailed			= 1701, // data is inputBinding
	VREvent_Input_BindingLoadSuccessful		= 1702, // data is inputBinding
	VREvent_Input_ActionManifestReloaded	= 1703, // no data
	VREvent_Input_ActionManifestLoadFailed	= 1704, // data is actionManifest
	VREvent_Input_ProgressUpdate			= 1705, // data is progressUpdate
	VREvent_Input_TrackerActivated			= 1706,

	VREvent_SpatialAnchors_PoseUpdated		= 1800,        // data is spatialAnchor. broadcast
	VREvent_SpatialAnchors_DescriptorUpdated = 1801,       // data is spatialAnchor. broadcast
	VREvent_SpatialAnchors_RequestPoseUpdate = 1802,       // data is spatialAnchor. sent to specific driver
	VREvent_SpatialAnchors_RequestDescriptorUpdate = 1803, // data is spatialAnchor. sent to specific driver

	// Vendors are free to expose private events in this reserved region
	VREvent_VendorSpecific_Reserved_Start	= 10000,
	VREvent_VendorSpecific_Reserved_End		= 19999,
};


/** Level of Hmd activity */
// UserInteraction_Timeout means the device is in the process of timing out.
// InUse = ( k_EDeviceActivityLevel_UserInteraction || k_EDeviceActivityLevel_UserInteraction_Timeout )
// VREvent_TrackedDeviceUserInteractionStarted fires when the devices transitions from Standby -> UserInteraction or Idle -> UserInteraction.
// VREvent_TrackedDeviceUserInteractionEnded fires when the devices transitions from UserInteraction_Timeout -> Idle
enum EDeviceActivityLevel
{	
	k_EDeviceActivityLevel_Unknown = -1,									
	k_EDeviceActivityLevel_Idle = 0,						// No activity for the last 10 seconds
	k_EDeviceActivityLevel_UserInteraction = 1,				// Activity (movement or prox sensor) is happening now	
	k_EDeviceActivityLevel_UserInteraction_Timeout = 2,		// No activity for the last 0.5 seconds
	k_EDeviceActivityLevel_Standby = 3,						// Idle for at least 5 seconds (configurable in Settings -> Power Management)
};


/** VR controller button and axis IDs */
enum EVRButtonId
{
	k_EButton_System			= 0,
	k_EButton_ApplicationMenu	= 1,
	k_EButton_Grip				= 2,
	k_EButton_DPad_Left			= 3,
	k_EButton_DPad_Up			= 4,
	k_EButton_DPad_Right		= 5,
	k_EButton_DPad_Down			= 6,
	k_EButton_A					= 7,
	
	k_EButton_ProximitySensor   = 31,

	k_EButton_Axis0				= 32,
	k_EButton_Axis1				= 33,
	k_EButton_Axis2				= 34,
	k_EButton_Axis3				= 35,
	k_EButton_Axis4				= 36,

	// aliases for well known controllers
	k_EButton_SteamVR_Touchpad	= k_EButton_Axis0,
	k_EButton_SteamVR_Trigger	= k_EButton_Axis1,

	k_EButton_Dashboard_Back	= k_EButton_Grip,

	k_EButton_Knuckles_A		= k_EButton_Grip,
	k_EButton_Knuckles_B		= k_EButton_ApplicationMenu,
	k_EButton_Knuckles_JoyStick	= k_EButton_Axis3,

	k_EButton_Max				= 64
};

inline uint64_t ButtonMaskFromId( EVRButtonId id ) { return 1ull << id; }

/** used for controller button events */
struct VREvent_Controller_t
{
	uint32_t button; // EVRButtonId enum
};


/** used for simulated mouse events in overlay space */
enum EVRMouseButton
{
	VRMouseButton_Left					= 0x0001,
	VRMouseButton_Right					= 0x0002,
	VRMouseButton_Middle				= 0x0004,
};


/** used for simulated mouse events in overlay space */
struct VREvent_Mouse_t
{
	float x, y; // co-ords are in GL space, bottom left of the texture is 0,0
	uint32_t button; // EVRMouseButton enum
};

/** used for simulated mouse wheel scroll in overlay space */
struct VREvent_Scroll_t
{
	float xdelta, ydelta; // movement in fraction of the pad traversed since last delta, 1.0 for a full swipe
	uint32_t repeatCount;
};

/** when in mouse input mode you can receive data from the touchpad, these events are only sent if the users finger
   is on the touchpad (or just released from it). These events are sent to overlays with the VROverlayFlags_SendVRTouchpadEvents
   flag set.
**/
struct VREvent_TouchPadMove_t
{
	// true if the users finger is detected on the touch pad
	bool bFingerDown;

	// How long the finger has been down in seconds
	float flSecondsFingerDown;

	// These values indicate the starting finger position (so you can do some basic swipe stuff)
	float fValueXFirst;
	float fValueYFirst;

	// This is the raw sampled coordinate without deadzoning
	float fValueXRaw;
	float fValueYRaw;
};

/** notification related events. Details will still change at this point */
struct VREvent_Notification_t
{
	uint64_t ulUserValue;
	uint32_t notificationId;
};

/** Used for events about processes */
struct VREvent_Process_t
{
	uint32_t pid;
	uint32_t oldPid;
	bool bForced;
};


/** Used for a few events about overlays */
struct VREvent_Overlay_t
{
	uint64_t overlayHandle;
	uint64_t devicePath;
};


/** Used for a few events about overlays */
struct VREvent_Status_t
{
	uint32_t statusState; // EVRState enum
};

/** Used for keyboard events **/
struct VREvent_Keyboard_t
{
	char cNewInput[8];	// Up to 11 bytes of new input
	uint64_t uUserValue;	// Possible flags about the new input
};

struct VREvent_Ipd_t
{
	float ipdMeters;
};

struct VREvent_Chaperone_t
{
	uint64_t m_nPreviousUniverse;
	uint64_t m_nCurrentUniverse;
};

/** Not actually used for any events */
struct VREvent_Reserved_t
{
	uint64_t reserved0;
	uint64_t reserved1;
	uint64_t reserved2;
	uint64_t reserved3;
	uint64_t reserved4;
	uint64_t reserved5;
};

struct VREvent_PerformanceTest_t
{
	uint32_t m_nFidelityLevel;
};

struct VREvent_SeatedZeroPoseReset_t
{
	bool bResetBySystemMenu;
};

struct VREvent_Screenshot_t
{
	uint32_t handle;
	uint32_t type;
};

struct VREvent_ScreenshotProgress_t
{
	float progress;
};

struct VREvent_ApplicationLaunch_t
{
	uint32_t pid;
	uint32_t unArgsHandle;
};

struct VREvent_EditingCameraSurface_t
{
	uint64_t overlayHandle;
	uint32_t nVisualMode;
};

struct VREvent_MessageOverlay_t
{
	uint32_t unVRMessageOverlayResponse; // vr::VRMessageOverlayResponse enum
};

struct VREvent_Property_t
{
	PropertyContainerHandle_t container;
	ETrackedDeviceProperty prop;
};

enum EDualAnalogWhich
{
	k_EDualAnalog_Left = 0,
	k_EDualAnalog_Right = 1,
};

struct VREvent_DualAnalog_t
{
	float x, y; // coordinates are -1..1 analog values
	float transformedX, transformedY; // transformed by the center and radius numbers provided by the overlay
	EDualAnalogWhich which;
};

struct VREvent_HapticVibration_t
{
	uint64_t containerHandle; // property container handle of the device with the haptic component
	uint64_t componentHandle; // Which haptic component needs to vibrate
	float fDurationSeconds;
	float fFrequency;
	float fAmplitude;
};

struct VREvent_WebConsole_t
{
	WebConsoleHandle_t webConsoleHandle;
};

struct VREvent_InputBindingLoad_t
{
	vr::PropertyContainerHandle_t ulAppContainer;
	uint64_t pathMessage;
	uint64_t pathUrl;
	uint64_t pathControllerType;
};

struct VREvent_InputActionManifestLoad_t
{
	uint64_t pathAppKey;
	uint64_t pathMessage;
	uint64_t pathMessageParam;
	uint64_t pathManifestPath;
};

struct VREvent_SpatialAnchor_t
{
	SpatialAnchorHandle_t unHandle;
};

struct VREvent_ProgressUpdate_t
{
	uint64_t ulApplicationPropertyContainer;
	uint64_t pathDevice;
	uint64_t pathInputSource;
	uint64_t pathProgressAction;
	uint64_t pathIcon;
	float fProgress;
};

enum EShowUIType
{
	ShowUI_ControllerBinding = 0,
	ShowUI_ManageTrackers = 1,
	ShowUI_QuickStart = 2,
};

struct VREvent_ShowUI_t
{
	EShowUIType eType;
};

typedef union
{
	VREvent_Reserved_t reserved;
	VREvent_Controller_t controller;
	VREvent_Mouse_t mouse;
	VREvent_Scroll_t scroll;
	VREvent_Process_t process;
	VREvent_Notification_t notification;
	VREvent_Overlay_t overlay;
	VREvent_Status_t status;
	VREvent_Keyboard_t keyboard;
	VREvent_Ipd_t ipd;
	VREvent_Chaperone_t chaperone;
	VREvent_PerformanceTest_t performanceTest;
	VREvent_TouchPadMove_t touchPadMove;
	VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset;
	VREvent_Screenshot_t screenshot;
	VREvent_ScreenshotProgress_t screenshotProgress;
	VREvent_ApplicationLaunch_t applicationLaunch;
	VREvent_EditingCameraSurface_t cameraSurface;
	VREvent_MessageOverlay_t messageOverlay;
	VREvent_Property_t property;
	VREvent_DualAnalog_t dualAnalog;
	VREvent_HapticVibration_t hapticVibration;
	VREvent_WebConsole_t webConsole;
	VREvent_InputBindingLoad_t inputBinding;
	VREvent_InputActionManifestLoad_t actionManifest;
	VREvent_SpatialAnchor_t spatialAnchor;
	VREvent_ProgressUpdate_t progressUpdate;
	VREvent_ShowUI_t showUi;
    /** NOTE!!! If you change this you MUST manually update openvr_interop.cs.py */
} VREvent_Data_t;


#if defined(__linux__) || defined(__APPLE__) 
// This structure was originally defined mis-packed on Linux, preserved for 
// compatibility. 
#pragma pack( push, 4 )
#endif

/** An event posted by the server to all running applications */
struct VREvent_t
{
	uint32_t eventType; // EVREventType enum
	TrackedDeviceIndex_t trackedDeviceIndex;
	float eventAgeSeconds;
	// event data must be the end of the struct as its size is variable
	VREvent_Data_t data;
};

#if defined(__linux__) || defined(__APPLE__) 
#pragma pack( pop )
#endif

enum EVRInputError
{
	VRInputError_None = 0,
	VRInputError_NameNotFound = 1,
	VRInputError_WrongType = 2,
	VRInputError_InvalidHandle = 3,
	VRInputError_InvalidParam = 4,
	VRInputError_NoSteam = 5,
	VRInputError_MaxCapacityReached = 6,
	VRInputError_IPCError = 7,
	VRInputError_NoActiveActionSet = 8,
	VRInputError_InvalidDevice = 9,
	VRInputError_InvalidSkeleton = 10,
	VRInputError_InvalidBoneCount = 11,
	VRInputError_InvalidCompressedData = 12,
	VRInputError_NoData = 13,
	VRInputError_BufferTooSmall = 14,
	VRInputError_MismatchedActionManifest = 15,
	VRInputError_MissingSkeletonData = 16,
	VRInputError_InvalidBoneIndex = 17,
};

enum EVRSpatialAnchorError
{
	VRSpatialAnchorError_Success = 0,
	VRSpatialAnchorError_Internal = 1,
	VRSpatialAnchorError_UnknownHandle = 2,
	VRSpatialAnchorError_ArrayTooSmall = 3,
	VRSpatialAnchorError_InvalidDescriptorChar = 4,
	VRSpatialAnchorError_NotYetAvailable = 5,
	VRSpatialAnchorError_NotAvailableInThisUniverse = 6,
	VRSpatialAnchorError_PermanentlyUnavailable = 7,
	VRSpatialAnchorError_WrongDriver = 8,
	VRSpatialAnchorError_DescriptorTooLong = 9,
	VRSpatialAnchorError_Unknown = 10,
	VRSpatialAnchorError_NoRoomCalibration = 11,
	VRSpatialAnchorError_InvalidArgument = 12,
	VRSpatialAnchorError_UnknownDriver = 13,
};

/** The mesh to draw into the stencil (or depth) buffer to perform 
* early stencil (or depth) kills of pixels that will never appear on the HMD.
* This mesh draws on all the pixels that will be hidden after distortion. 
*
* If the HMD does not provide a visible area mesh pVertexData will be
* NULL and unTriangleCount will be 0. */
struct HiddenAreaMesh_t
{
	const HmdVector2_t *pVertexData;
	uint32_t unTriangleCount;
};


enum EHiddenAreaMeshType
{
	k_eHiddenAreaMesh_Standard = 0,
	k_eHiddenAreaMesh_Inverse = 1,
	k_eHiddenAreaMesh_LineLoop = 2,

	k_eHiddenAreaMesh_Max = 3,
};


/** Identifies what kind of axis is on the controller at index n. Read this type 
* with pVRSystem->Get( nControllerDeviceIndex, Prop_Axis0Type_Int32 + n );
*/
enum EVRControllerAxisType
{
	k_eControllerAxis_None = 0,
	k_eControllerAxis_TrackPad = 1,
	k_eControllerAxis_Joystick = 2,
	k_eControllerAxis_Trigger = 3, // Analog trigger data is in the X axis
};


/** contains information about one axis on the controller */
struct VRControllerAxis_t
{
	float x; // Ranges from -1.0 to 1.0 for joysticks and track pads. Ranges from 0.0 to 1.0 for triggers were 0 is fully released.
	float y; // Ranges from -1.0 to 1.0 for joysticks and track pads. Is always 0.0 for triggers.
};


/** the number of axes in the controller state */
static const uint32_t k_unControllerStateAxisCount = 5;


#if defined(__linux__) || defined(__APPLE__) 
// This structure was originally defined mis-packed on Linux, preserved for 
// compatibility. 
#pragma pack( push, 4 )
#endif

/** Holds all the state of a controller at one moment in time. */
struct VRControllerState001_t
{
	// If packet num matches that on your prior call, then the controller state hasn't been changed since 
	// your last call and there is no need to process it
	uint32_t unPacketNum;

	// bit flags for each of the buttons. Use ButtonMaskFromId to turn an ID into a mask
	uint64_t ulButtonPressed;
	uint64_t ulButtonTouched;

	// Axis data for the controller's analog inputs
	VRControllerAxis_t rAxis[ k_unControllerStateAxisCount ];
};
#if defined(__linux__) || defined(__APPLE__) 
#pragma pack( pop )
#endif


typedef VRControllerState001_t VRControllerState_t;


/** determines how to provide output to the application of various event processing functions. */
enum EVRControllerEventOutputType
{
	ControllerEventOutput_OSEvents = 0,
	ControllerEventOutput_VREvents = 1,
};



/** Collision Bounds Style */
enum ECollisionBoundsStyle
{
	COLLISION_BOUNDS_STYLE_BEGINNER = 0,
	COLLISION_BOUNDS_STYLE_INTERMEDIATE,
	COLLISION_BOUNDS_STYLE_SQUARES,
	COLLISION_BOUNDS_STYLE_ADVANCED,
	COLLISION_BOUNDS_STYLE_NONE,

	COLLISION_BOUNDS_STYLE_COUNT
};

/** Allows the application to customize how the overlay appears in the compositor */
struct Compositor_OverlaySettings
{
	uint32_t size; // sizeof(Compositor_OverlaySettings)
	bool curved, antialias;
	float scale, distance, alpha;
	float uOffset, vOffset, uScale, vScale;
	float gridDivs, gridWidth, gridScale;
	HmdMatrix44_t transform;
};

/** used to refer to a single VR overlay */
typedef uint64_t VROverlayHandle_t;

static const VROverlayHandle_t k_ulOverlayHandleInvalid = 0;

/** Errors that can occur around VR overlays */
enum EVROverlayError
{
	VROverlayError_None						= 0,

	VROverlayError_UnknownOverlay			= 10,
	VROverlayError_InvalidHandle			= 11,
	VROverlayError_PermissionDenied			= 12,
	VROverlayError_OverlayLimitExceeded		= 13, // No more overlays could be created because the maximum number already exist
	VROverlayError_WrongVisibilityType		= 14,
	VROverlayError_KeyTooLong				= 15,
	VROverlayError_NameTooLong				= 16,
	VROverlayError_KeyInUse					= 17,
	VROverlayError_WrongTransformType		= 18,
	VROverlayError_InvalidTrackedDevice		= 19,
	VROverlayError_InvalidParameter			= 20,
	VROverlayError_ThumbnailCantBeDestroyed	= 21,
	VROverlayError_ArrayTooSmall			= 22,
	VROverlayError_RequestFailed			= 23,
	VROverlayError_InvalidTexture			= 24,
	VROverlayError_UnableToLoadFile			= 25,
	VROverlayError_KeyboardAlreadyInUse		= 26,
	VROverlayError_NoNeighbor				= 27,
	VROverlayError_TooManyMaskPrimitives	= 29,
	VROverlayError_BadMaskPrimitive			= 30,
	VROverlayError_TextureAlreadyLocked		= 31,
	VROverlayError_TextureLockCapacityReached = 32,
	VROverlayError_TextureNotLocked			= 33,
};

/** enum values to pass in to VR_Init to identify whether the application will 
* draw a 3D scene. */
enum EVRApplicationType
{
	VRApplication_Other = 0,		// Some other kind of application that isn't covered by the other entries 
	VRApplication_Scene	= 1,		// Application will submit 3D frames 
	VRApplication_Overlay = 2,		// Application only interacts with overlays
	VRApplication_Background = 3,	// Application should not start SteamVR if it's not already running, and should not
									// keep it running if everything else quits.
	VRApplication_Utility = 4,		// Init should not try to load any drivers. The application needs access to utility
									// interfaces (like IVRSettings and IVRApplications) but not hardware.
	VRApplication_VRMonitor = 5,	// Reserved for vrmonitor
	VRApplication_SteamWatchdog = 6,// Reserved for Steam
	VRApplication_Bootstrapper = 7, // reserved for vrstartup
	VRApplication_WebHelper = 8,	// reserved for vrwebhelper

	VRApplication_Max
};


/** error codes for firmware */
enum EVRFirmwareError
{
	VRFirmwareError_None = 0,
	VRFirmwareError_Success = 1,
	VRFirmwareError_Fail = 2,
};


/** error codes for notifications */
enum EVRNotificationError
{
	VRNotificationError_OK = 0,
	VRNotificationError_InvalidNotificationId = 100,
	VRNotificationError_NotificationQueueFull = 101,
	VRNotificationError_InvalidOverlayHandle = 102,
	VRNotificationError_SystemWithUserValueAlreadyExists = 103,
};


enum EVRSkeletalMotionRange
{
	// The range of motion of the skeleton takes into account any physical limits imposed by
	// the controller itself.  This will tend to be the most accurate pose compared to the user's
	// actual hand pose, but might not allow a closed fist for example
	VRSkeletalMotionRange_WithController = 0,

	// Retarget the range of motion provided by the input device to make the hand appear to move
	// as if it was not holding a controller.  eg: map "hand grasping controller" to "closed fist"
	VRSkeletalMotionRange_WithoutController = 1,
};

enum EVRSkeletalTrackingLevel
{
	// body part location cant be directly determined by the device. Any skeletal pose provided by 
	// the device is estimated by assuming the position required to active buttons, triggers, joysticks, 
	// or other input sensors. 
	// E.g. Vive Controller, Gamepad
	VRSkeletalTracking_Estimated = 0,

	// body part location can be measured directly but with fewer degrees of freedom than the actual body 
	// part. Certain body part positions may be unmeasured by the device and estimated from other input data. 
	// E.g. Knuckles, gloves that only measure finger curl
	VRSkeletalTracking_Partial,

	// Body part location can be measured directly throughout the entire range of motion of the body part. 
	// E.g. Mocap suit for the full body, gloves that measure rotation of each finger segment
	VRSkeletalTracking_Full,

	VRSkeletalTrackingLevel_Count,
	VRSkeletalTrackingLevel_Max = VRSkeletalTrackingLevel_Count - 1
};



/** Holds the transform for a single bone */
struct VRBoneTransform_t
{
	HmdVector4_t position;
	HmdQuaternionf_t orientation;
};

/** Type used for referring to bones by their index */
typedef int32_t BoneIndex_t;
const BoneIndex_t k_unInvalidBoneIndex = -1;


/** error codes returned by Vr_Init */

// Please add adequate error description to https://developer.valvesoftware.com/w/index.php?title=Category:SteamVRHelp
enum EVRInitError
{
	VRInitError_None	= 0,
	VRInitError_Unknown = 1,

	VRInitError_Init_InstallationNotFound			= 100,
	VRInitError_Init_InstallationCorrupt			= 101,
	VRInitError_Init_VRClientDLLNotFound			= 102,
	VRInitError_Init_FileNotFound					= 103,
	VRInitError_Init_FactoryNotFound				= 104,
	VRInitError_Init_InterfaceNotFound				= 105,
	VRInitError_Init_InvalidInterface				= 106,
	VRInitError_Init_UserConfigDirectoryInvalid		= 107,
	VRInitError_Init_HmdNotFound					= 108,
	VRInitError_Init_NotInitialized					= 109,
	VRInitError_Init_PathRegistryNotFound			= 110,
	VRInitError_Init_NoConfigPath					= 111,
	VRInitError_Init_NoLogPath						= 112,
	VRInitError_Init_PathRegistryNotWritable		= 113,
	VRInitError_Init_AppInfoInitFailed				= 114,
	VRInitError_Init_Retry							= 115, // Used internally to cause retries to vrserver
	VRInitError_Init_InitCanceledByUser				= 116, // The calling application should silently exit. The user canceled app startup
	VRInitError_Init_AnotherAppLaunching			= 117, 
	VRInitError_Init_SettingsInitFailed				= 118, 
	VRInitError_Init_ShuttingDown					= 119,
	VRInitError_Init_TooManyObjects					= 120,
	VRInitError_Init_NoServerForBackgroundApp		= 121,
	VRInitError_Init_NotSupportedWithCompositor		= 122,
	VRInitError_Init_NotAvailableToUtilityApps		= 123,
	VRInitError_Init_Internal				 		= 124,
	VRInitError_Init_HmdDriverIdIsNone		 		= 125,
	VRInitError_Init_HmdNotFoundPresenceFailed 		= 126,
	VRInitError_Init_VRMonitorNotFound				= 127,
	VRInitError_Init_VRMonitorStartupFailed			= 128,
	VRInitError_Init_LowPowerWatchdogNotSupported	= 129, 
	VRInitError_Init_InvalidApplicationType			= 130,
	VRInitError_Init_NotAvailableToWatchdogApps		= 131,
	VRInitError_Init_WatchdogDisabledInSettings		= 132,
	VRInitError_Init_VRDashboardNotFound			= 133,
	VRInitError_Init_VRDashboardStartupFailed		= 134,
	VRInitError_Init_VRHomeNotFound					= 135,
	VRInitError_Init_VRHomeStartupFailed			= 136,
	VRInitError_Init_RebootingBusy					= 137,
	VRInitError_Init_FirmwareUpdateBusy				= 138,
	VRInitError_Init_FirmwareRecoveryBusy			= 139,
	VRInitError_Init_USBServiceBusy					= 140,
	VRInitError_Init_VRWebHelperStartupFailed		= 141,
	VRInitError_Init_TrackerManagerInitFailed		= 142,

	VRInitError_Driver_Failed						= 200,
	VRInitError_Driver_Unknown						= 201,
	VRInitError_Driver_HmdUnknown					= 202,
	VRInitError_Driver_NotLoaded					= 203,
	VRInitError_Driver_RuntimeOutOfDate				= 204,
	VRInitError_Driver_HmdInUse						= 205,
	VRInitError_Driver_NotCalibrated				= 206,
	VRInitError_Driver_CalibrationInvalid			= 207,
	VRInitError_Driver_HmdDisplayNotFound			= 208,
	VRInitError_Driver_TrackedDeviceInterfaceUnknown = 209,
	// VRInitError_Driver_HmdDisplayNotFoundAfterFix = 210, // not needed: here for historic reasons
	VRInitError_Driver_HmdDriverIdOutOfBounds		= 211,
	VRInitError_Driver_HmdDisplayMirrored			= 212,

	VRInitError_IPC_ServerInitFailed				= 300,
	VRInitError_IPC_ConnectFailed					= 301,
	VRInitError_IPC_SharedStateInitFailed			= 302,
	VRInitError_IPC_CompositorInitFailed			= 303,
	VRInitError_IPC_MutexInitFailed					= 304,
	VRInitError_IPC_Failed							= 305,
	VRInitError_IPC_CompositorConnectFailed			= 306,
	VRInitError_IPC_CompositorInvalidConnectResponse = 307,
	VRInitError_IPC_ConnectFailedAfterMultipleAttempts = 308,

	VRInitError_Compositor_Failed					= 400,
	VRInitError_Compositor_D3D11HardwareRequired	= 401,
	VRInitError_Compositor_FirmwareRequiresUpdate	= 402,
	VRInitError_Compositor_OverlayInitFailed		= 403,
	VRInitError_Compositor_ScreenshotsInitFailed	= 404,
	VRInitError_Compositor_UnableToCreateDevice		= 405,

	VRInitError_VendorSpecific_UnableToConnectToOculusRuntime		= 1000,
	VRInitError_VendorSpecific_WindowsNotInDevMode					= 1001,

	VRInitError_VendorSpecific_HmdFound_CantOpenDevice 				= 1101,
	VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart	= 1102,
	VRInitError_VendorSpecific_HmdFound_NoStoredConfig 				= 1103,
	VRInitError_VendorSpecific_HmdFound_ConfigTooBig 				= 1104,
	VRInitError_VendorSpecific_HmdFound_ConfigTooSmall 				= 1105,
	VRInitError_VendorSpecific_HmdFound_UnableToInitZLib 			= 1106,
	VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion 	= 1107,
	VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart	= 1108,
	VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart	= 1109,
	VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext		= 1110,
	VRInitError_VendorSpecific_HmdFound_UserDataAddressRange		= 1111,
	VRInitError_VendorSpecific_HmdFound_UserDataError				= 1112,
	VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck		= 1113,

	VRInitError_Steam_SteamInstallationNotFound = 2000,
};

enum EVRScreenshotType
{
	VRScreenshotType_None = 0,
	VRScreenshotType_Mono = 1, // left eye only
	VRScreenshotType_Stereo = 2,
	VRScreenshotType_Cubemap = 3,
	VRScreenshotType_MonoPanorama = 4,
	VRScreenshotType_StereoPanorama = 5
};

enum EVRScreenshotPropertyFilenames
{
	VRScreenshotPropertyFilenames_Preview = 0,
	VRScreenshotPropertyFilenames_VR = 1,
};

enum EVRTrackedCameraError
{
	VRTrackedCameraError_None                       = 0,
	VRTrackedCameraError_OperationFailed            = 100,
	VRTrackedCameraError_InvalidHandle              = 101,	
	VRTrackedCameraError_InvalidFrameHeaderVersion  = 102,
	VRTrackedCameraError_OutOfHandles               = 103,
	VRTrackedCameraError_IPCFailure                 = 104,
	VRTrackedCameraError_NotSupportedForThisDevice  = 105,
	VRTrackedCameraError_SharedMemoryFailure        = 106,
	VRTrackedCameraError_FrameBufferingFailure      = 107,
	VRTrackedCameraError_StreamSetupFailure         = 108,
	VRTrackedCameraError_InvalidGLTextureId         = 109,
	VRTrackedCameraError_InvalidSharedTextureHandle = 110,
	VRTrackedCameraError_FailedToGetGLTextureId     = 111,
	VRTrackedCameraError_SharedTextureFailure       = 112,
	VRTrackedCameraError_NoFrameAvailable           = 113,
	VRTrackedCameraError_InvalidArgument            = 114,
	VRTrackedCameraError_InvalidFrameBufferSize     = 115,
};

enum EVRTrackedCameraFrameLayout
{
	EVRTrackedCameraFrameLayout_Mono				= 0x0001,
	EVRTrackedCameraFrameLayout_Stereo				= 0x0002,
	EVRTrackedCameraFrameLayout_VerticalLayout		= 0x0010,	// Stereo frames are Top/Bottom (left/right)
	EVRTrackedCameraFrameLayout_HorizontalLayout	= 0x0020,	// Stereo frames are Left/Right
};
	
enum EVRTrackedCameraFrameType
{
	VRTrackedCameraFrameType_Distorted = 0,			// This is the camera video frame size in pixels, still distorted.
	VRTrackedCameraFrameType_Undistorted,			// In pixels, an undistorted inscribed rectangle region without invalid regions. This size is subject to changes shortly.
	VRTrackedCameraFrameType_MaximumUndistorted,	// In pixels, maximum undistorted with invalid regions. Non zero alpha component identifies valid regions.
	MAX_CAMERA_FRAME_TYPES
};

enum EVRDistortionFunctionType
{
	VRDistortionFunctionType_None,
	VRDistortionFunctionType_FTheta,
	VRDistortionFucntionType_Extended_FTheta,
	MAX_DISTORTION_FUNCTION_TYPES,
};

static const uint32_t k_unMaxDistortionFunctionParameters = 8;

typedef uint64_t TrackedCameraHandle_t;
#define INVALID_TRACKED_CAMERA_HANDLE	((vr::TrackedCameraHandle_t)0)

struct CameraVideoStreamFrameHeader_t
{
	EVRTrackedCameraFrameType eFrameType;

	uint32_t nWidth;
	uint32_t nHeight;
	uint32_t nBytesPerPixel;

	uint32_t nFrameSequence;

	TrackedDevicePose_t standingTrackedDevicePose;
	
	uint64_t ulFrameExposureTime;						// mid-point of the exposure of the image in host system ticks
};

// Screenshot types
typedef uint32_t ScreenshotHandle_t;

static const uint32_t k_unScreenshotHandleInvalid = 0;

/** Frame timing data provided by direct mode drivers. */
struct DriverDirectMode_FrameTiming
{
	uint32_t m_nSize; // Set to sizeof( DriverDirectMode_FrameTiming )
	uint32_t m_nNumFramePresents; // number of times frame was presented
	uint32_t m_nNumMisPresented; // number of times frame was presented on a vsync other than it was originally predicted to
	uint32_t m_nNumDroppedFrames; // number of additional times previous frame was scanned out (i.e. compositor missed vsync)
	uint32_t m_nReprojectionFlags;
};

enum EVSync
{
	VSync_None,
	VSync_WaitRender,	// block following render work until vsync
	VSync_NoWaitRender,	// do not block following render work (allow to get started early)
};

enum EVRMuraCorrectionMode
{
	EVRMuraCorrectionMode_Default = 0,
	EVRMuraCorrectionMode_NoCorrection
};

/** raw IMU data provided by IVRIOBuffer from paths to tracked devices with IMUs */
enum Imu_OffScaleFlags
{
	OffScale_AccelX	= 0x01,
	OffScale_AccelY	= 0x02,
	OffScale_AccelZ	= 0x04,
	OffScale_GyroX	= 0x08,
	OffScale_GyroY	= 0x10,
	OffScale_GyroZ	= 0x20,
};
	
struct ImuSample_t
{
	double fSampleTime;
	HmdVector3d_t vAccel;
	HmdVector3d_t vGyro;
	uint32_t unOffScaleFlags;
};

#pragma pack( pop )

// figure out how to import from the VR API dll
#if defined(_WIN32)

#ifdef VR_API_EXPORT
#define VR_INTERFACE extern "C" __declspec( dllexport )
#else
#define VR_INTERFACE extern "C" __declspec( dllimport )
#endif

#elif defined(__GNUC__) || defined(COMPILER_GCC) || defined(__APPLE__)

#ifdef VR_API_EXPORT
#define VR_INTERFACE extern "C" __attribute__((visibility("default")))
#else
#define VR_INTERFACE extern "C" 
#endif

#else
#error "Unsupported Platform."
#endif


#if defined( _WIN32 )
#define VR_CALLTYPE __cdecl
#else
#define VR_CALLTYPE 
#endif

} // namespace vr

#endif // _INCLUDE_VRTYPES_H


// vrannotation.h
#ifdef API_GEN
# define VR_CLANG_ATTR(ATTR) __attribute__((annotate( ATTR )))
#else
# define VR_CLANG_ATTR(ATTR)
#endif

#define VR_METHOD_DESC(DESC) VR_CLANG_ATTR( "desc:" #DESC ";" )
#define VR_IGNOREATTR() VR_CLANG_ATTR( "ignore" )
#define VR_OUT_STRUCT() VR_CLANG_ATTR( "out_struct: ;" )
#define VR_OUT_STRING() VR_CLANG_ATTR( "out_string: ;" )
#define VR_OUT_ARRAY_CALL(COUNTER,FUNCTION,PARAMS) VR_CLANG_ATTR( "out_array_call:" #COUNTER "," #FUNCTION "," #PARAMS ";" )
#define VR_OUT_ARRAY_COUNT(COUNTER) VR_CLANG_ATTR( "out_array_count:" #COUNTER ";" )
#define VR_ARRAY_COUNT(COUNTER) VR_CLANG_ATTR( "array_count:" #COUNTER ";" )
#define VR_ARRAY_COUNT_D(COUNTER, DESC) VR_CLANG_ATTR( "array_count:" #COUNTER ";desc:" #DESC )
#define VR_BUFFER_COUNT(COUNTER) VR_CLANG_ATTR( "buffer_count:" #COUNTER ";" )
#define VR_OUT_BUFFER_COUNT(COUNTER) VR_CLANG_ATTR( "out_buffer_count:" #COUNTER ";" )
#define VR_OUT_STRING_COUNT(COUNTER) VR_CLANG_ATTR( "out_string_count:" #COUNTER ";" )

// ivrsystem.h
namespace vr
{

class IVRSystem
{
public:


	// ------------------------------------
	// Display Methods
	// ------------------------------------

	/** Suggested size for the intermediate render target that the distortion pulls from. */
	virtual void GetRecommendedRenderTargetSize( uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

	/** The projection matrix for the specified eye */
	virtual HmdMatrix44_t GetProjectionMatrix( EVREye eEye, float fNearZ, float fFarZ ) = 0;

	/** The components necessary to build your own projection matrix in case your
	* application is doing something fancy like infinite Z */
	virtual void GetProjectionRaw( EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom ) = 0;

	/** Gets the result of the distortion function for the specified eye and input UVs. UVs go from 0,0 in 
	* the upper left of that eye's viewport and 1,1 in the lower right of that eye's viewport.
	* Returns true for success. Otherwise, returns false, and distortion coordinates are not suitable. */
	virtual bool ComputeDistortion( EVREye eEye, float fU, float fV, DistortionCoordinates_t *pDistortionCoordinates ) = 0;

	/** Returns the transform from eye space to the head space. Eye space is the per-eye flavor of head
	* space that provides stereo disparity. Instead of Model * View * Projection the sequence is Model * View * Eye^-1 * Projection. 
	* Normally View and Eye^-1 will be multiplied together and treated as View in your application. 
	*/
	virtual HmdMatrix34_t GetEyeToHeadTransform( EVREye eEye ) = 0;

	/** Returns the number of elapsed seconds since the last recorded vsync event. This 
	*	will come from a vsync timer event in the timer if possible or from the application-reported
	*   time if that is not available. If no vsync times are available the function will 
	*   return zero for vsync time and frame counter and return false from the method. */
	virtual bool GetTimeSinceLastVsync( float *pfSecondsSinceLastVsync, uint64_t *pulFrameCounter ) = 0;

	/** [D3D9 Only]
	* Returns the adapter index that the user should pass into CreateDevice to set up D3D9 in such
	* a way that it can go full screen exclusive on the HMD. Returns -1 if there was an error.
	*/
	virtual int32_t GetD3D9AdapterIndex() = 0;

	/** [D3D10/11 Only]
	* Returns the adapter index that the user should pass into EnumAdapters to create the device 
	* and swap chain in DX10 and DX11. If an error occurs the index will be set to -1.
	*/
	virtual void GetDXGIOutputInfo( int32_t *pnAdapterIndex ) = 0;
	
	/**
	 * Returns platform- and texture-type specific adapter identification so that applications and the
	 * compositor are creating textures and swap chains on the same GPU. If an error occurs the device
	 * will be set to 0.
	 * pInstance is an optional parameter that is required only when textureType is TextureType_Vulkan.
	 * [D3D10/11/12 Only (D3D9 Not Supported)]
	 *  Returns the adapter LUID that identifies the GPU attached to the HMD. The user should
	 *  enumerate all adapters using IDXGIFactory::EnumAdapters and IDXGIAdapter::GetDesc to find
	 *  the adapter with the matching LUID, or use IDXGIFactory4::EnumAdapterByLuid.
	 *  The discovered IDXGIAdapter should be used to create the device and swap chain.
	 * [Vulkan Only]
	 *  Returns the VkPhysicalDevice that should be used by the application.
	 *  pInstance must be the instance the application will use to query for the VkPhysicalDevice.  The application
	 *  must create the VkInstance with extensions returned by IVRCompositor::GetVulkanInstanceExtensionsRequired enabled.
	 * [macOS Only]
	 *  For TextureType_IOSurface returns the id<MTLDevice> that should be used by the application.
	 *  On 10.13+ for TextureType_OpenGL returns the 'registryId' of the renderer which should be used
	 *   by the application. See Apple Technical Q&A QA1168 for information on enumerating GL Renderers, and the
	 *   new kCGLRPRegistryIDLow and kCGLRPRegistryIDHigh CGLRendererProperty values in the 10.13 SDK.
	 *  Pre 10.13 for TextureType_OpenGL returns 0, as there is no dependable way to correlate the HMDs MTLDevice
	 *   with a GL Renderer.
	 */
	virtual void GetOutputDevice( uint64_t *pnDevice, ETextureType textureType, VkInstance_T *pInstance = nullptr ) = 0;

	// ------------------------------------
	// Display Mode methods
	// ------------------------------------

	/** Use to determine if the headset display is part of the desktop (i.e. extended) or hidden (i.e. direct mode). */
	virtual bool IsDisplayOnDesktop() = 0;

	/** Set the display visibility (true = extended, false = direct mode).  Return value of true indicates that the change was successful. */
	virtual bool SetDisplayVisibility( bool bIsVisibleOnDesktop ) = 0;

	// ------------------------------------
	// Tracking Methods
	// ------------------------------------

	/** The pose that the tracker thinks that the HMD will be in at the specified number of seconds into the 
	* future. Pass 0 to get the state at the instant the method is called. Most of the time the application should
	* calculate the time until the photons will be emitted from the display and pass that time into the method.
	*
	* This is roughly analogous to the inverse of the view matrix in most applications, though 
	* many games will need to do some additional rotation or translation on top of the rotation
	* and translation provided by the head pose.
	*
	* For devices where bPoseIsValid is true the application can use the pose to position the device
	* in question. The provided array can be any size up to k_unMaxTrackedDeviceCount. 
	*
	* Seated experiences should call this method with TrackingUniverseSeated and receive poses relative
	* to the seated zero pose. Standing experiences should call this method with TrackingUniverseStanding 
	* and receive poses relative to the Chaperone Play Area. TrackingUniverseRawAndUncalibrated should 
	* probably not be used unless the application is the Chaperone calibration tool itself, but will provide
	* poses relative to the hardware-specific coordinate system in the driver.
	*/
	virtual void GetDeviceToAbsoluteTrackingPose( ETrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, VR_ARRAY_COUNT(unTrackedDevicePoseArrayCount) TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount ) = 0;

	/** Sets the zero pose for the seated tracker coordinate system to the current position and yaw of the HMD. After 
	* ResetSeatedZeroPose all GetDeviceToAbsoluteTrackingPose calls that pass TrackingUniverseSeated as the origin 
	* will be relative to this new zero pose. The new zero coordinate system will not change the fact that the Y axis 
	* is up in the real world, so the next pose returned from GetDeviceToAbsoluteTrackingPose after a call to 
	* ResetSeatedZeroPose may not be exactly an identity matrix.
	*
	* NOTE: This function overrides the user's previously saved seated zero pose and should only be called as the result of a user action. 
	* Users are also able to set their seated zero pose via the OpenVR Dashboard.
	**/
	virtual void ResetSeatedZeroPose() = 0;

	/** Returns the transform from the seated zero pose to the standing absolute tracking system. This allows 
	* applications to represent the seated origin to used or transform object positions from one coordinate
	* system to the other. 
	*
	* The seated origin may or may not be inside the Play Area or Collision Bounds returned by IVRChaperone. Its position 
	* depends on what the user has set from the Dashboard settings and previous calls to ResetSeatedZeroPose. */
	virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose() = 0;

	/** Returns the transform from the tracking origin to the standing absolute tracking system. This allows
	* applications to convert from raw tracking space to the calibrated standing coordinate system. */
	virtual HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose() = 0;

	/** Get a sorted array of device indices of a given class of tracked devices (e.g. controllers).  Devices are sorted right to left
	* relative to the specified tracked device (default: hmd -- pass in -1 for absolute tracking space).  Returns the number of devices
	* in the list, or the size of the array needed if not large enough. */
	virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( ETrackedDeviceClass eTrackedDeviceClass, VR_ARRAY_COUNT(unTrackedDeviceIndexArrayCount) vr::TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, vr::TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex = k_unTrackedDeviceIndex_Hmd ) = 0;

	/** Returns the level of activity on the device. */
	virtual EDeviceActivityLevel GetTrackedDeviceActivityLevel( vr::TrackedDeviceIndex_t unDeviceId ) = 0;

	/** Convenience utility to apply the specified transform to the specified pose.
	*   This properly transforms all pose components, including velocity and angular velocity
	*/
	virtual void ApplyTransform( TrackedDevicePose_t *pOutputPose, const TrackedDevicePose_t *pTrackedDevicePose, const HmdMatrix34_t *pTransform ) = 0;

	/** Returns the device index associated with a specific role, for example the left hand or the right hand. This function is deprecated in favor of the new IVRInput system. */
	virtual vr::TrackedDeviceIndex_t GetTrackedDeviceIndexForControllerRole( vr::ETrackedControllerRole unDeviceType ) = 0;

	/** Returns the controller type associated with a device index. This function is deprecated in favor of the new IVRInput system. */
	virtual vr::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	// ------------------------------------
	// Property methods
	// ------------------------------------

	/** Returns the device class of a tracked device. If there has not been a device connected in this slot
	* since the application started this function will return TrackedDevice_Invalid. For previous detected
	* devices the function will return the previously observed device class. 
	*
	* To determine which devices exist on the system, just loop from 0 to k_unMaxTrackedDeviceCount and check
	* the device class. Every device with something other than TrackedDevice_Invalid is associated with an 
	* actual tracked device. */
	virtual ETrackedDeviceClass GetTrackedDeviceClass( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	/** Returns true if there is a device connected in this slot. */
	virtual bool IsTrackedDeviceConnected( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	/** Returns a bool property. If the device index is not valid or the property is not a bool type this function will return false. */
	virtual bool GetBoolTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError = 0L ) = 0;

	/** Returns a float property. If the device index is not valid or the property is not a float type this function will return 0. */
	virtual float GetFloatTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError = 0L ) = 0;

	/** Returns an int property. If the device index is not valid or the property is not a int type this function will return 0. */
	virtual int32_t GetInt32TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError = 0L ) = 0;

	/** Returns a uint64 property. If the device index is not valid or the property is not a uint64 type this function will return 0. */
	virtual uint64_t GetUint64TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError = 0L ) = 0;

	/** Returns a matrix property. If the device index is not valid or the property is not a matrix type, this function will return identity. */
	virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, ETrackedPropertyError *pError = 0L ) = 0;
	
	/** Returns an array of one type of property. If the device index is not valid or the property is not a single value or an array of the specified type,
	* this function will return 0. Otherwise it returns the number of bytes necessary to hold the array of properties. If unBufferSize is
	* greater than the returned size and pBuffer is non-NULL, pBuffer is filled with the contents of array of properties. */
	virtual uint32_t GetArrayTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, PropertyTypeTag_t propType, void *pBuffer, uint32_t unBufferSize, ETrackedPropertyError *pError = 0L ) = 0;

	/** Returns a string property. If the device index is not valid or the property is not a string type this function will 
	* return 0. Otherwise it returns the length of the number of bytes necessary to hold this string including the trailing
	* null. Strings will always fit in buffers of k_unMaxPropertyStringSize characters. */
	virtual uint32_t GetStringTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError = 0L ) = 0;

	/** returns a string that corresponds with the specified property error. The string will be the name 
	* of the error enum value for all valid error codes */
	virtual const char *GetPropErrorNameFromEnum( ETrackedPropertyError error ) = 0;

	// ------------------------------------
	// Event methods
	// ------------------------------------

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false. uncbVREvent should be the size in bytes of the VREvent_t struct */
	virtual bool PollNextEvent( VREvent_t *pEvent, uint32_t uncbVREvent ) = 0;

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false. Fills in the pose of the associated tracked device in the provided pose struct. 
	* This pose will always be older than the call to this function and should not be used to render the device. 
	uncbVREvent should be the size in bytes of the VREvent_t struct */
	virtual bool PollNextEventWithPose( ETrackingUniverseOrigin eOrigin, VREvent_t *pEvent, uint32_t uncbVREvent, vr::TrackedDevicePose_t *pTrackedDevicePose ) = 0;

	/** returns the name of an EVREvent enum value */
	virtual const char *GetEventTypeNameFromEnum( EVREventType eType ) = 0;

	// ------------------------------------
	// Rendering helper methods
	// ------------------------------------

	/** Returns the hidden area mesh for the current HMD. The pixels covered by this mesh will never be seen by the user after the lens distortion is
	* applied based on visibility to the panels. If this HMD does not have a hidden area mesh, the vertex data and count will be NULL and 0 respectively.
	* This mesh is meant to be rendered into the stencil buffer (or into the depth buffer setting nearz) before rendering each eye's view. 
	* This will improve performance by letting the GPU early-reject pixels the user will never see before running the pixel shader.
	* NOTE: Render this mesh with backface culling disabled since the winding order of the vertices can be different per-HMD or per-eye.
	* Setting the bInverse argument to true will produce the visible area mesh that is commonly used in place of full-screen quads. The visible area mesh covers all of the pixels the hidden area mesh does not cover.
	* Setting the bLineLoop argument will return a line loop of vertices in HiddenAreaMesh_t->pVertexData with HiddenAreaMesh_t->unTriangleCount set to the number of vertices.
	*/
	virtual HiddenAreaMesh_t GetHiddenAreaMesh( EVREye eEye, EHiddenAreaMeshType type = k_eHiddenAreaMesh_Standard ) = 0;

	// ------------------------------------
	// Controller methods
	// ------------------------------------

	/** Fills the supplied struct with the current state of the controller. Returns false if the controller index
	* is invalid. This function is deprecated in favor of the new IVRInput system. */
	virtual bool GetControllerState( vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState, uint32_t unControllerStateSize ) = 0;

	/** fills the supplied struct with the current state of the controller and the provided pose with the pose of 
	* the controller when the controller state was updated most recently. Use this form if you need a precise controller
	* pose as input to your application when the user presses or releases a button. This function is deprecated in favor of the new IVRInput system. */
	virtual bool GetControllerStateWithPose( ETrackingUniverseOrigin eOrigin, vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState, uint32_t unControllerStateSize, TrackedDevicePose_t *pTrackedDevicePose ) = 0;

	/** Trigger a single haptic pulse on a controller. After this call the application may not trigger another haptic pulse on this controller
	* and axis combination for 5ms. This function is deprecated in favor of the new IVRInput system. */
	virtual void TriggerHapticPulse( vr::TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec ) = 0;

	/** returns the name of an EVRButtonId enum value. This function is deprecated in favor of the new IVRInput system.  */
	virtual const char *GetButtonIdNameFromEnum( EVRButtonId eButtonId ) = 0;

	/** returns the name of an EVRControllerAxisType enum value. This function is deprecated in favor of the new IVRInput system. */
	virtual const char *GetControllerAxisTypeNameFromEnum( EVRControllerAxisType eAxisType ) = 0;

	/** Returns true if this application is receiving input from the system. This would return false if 
	* system-related functionality is consuming the input stream. */
	virtual bool IsInputAvailable() = 0;

	/** Returns true SteamVR is drawing controllers on top of the application. Applications should consider
	* not drawing anything attached to the user's hands in this case. */
	virtual bool IsSteamVRDrawingControllers() = 0;

	/** Returns true if the user has put SteamVR into a mode that is distracting them from the application.
	* For applications where this is appropriate, the application should pause ongoing activity. */
	virtual bool ShouldApplicationPause() = 0;

	/** Returns true if SteamVR is doing significant rendering work and the game should do what it can to reduce
	* its own workload. One common way to do this is to reduce the size of the render target provided for each eye. */
	virtual bool ShouldApplicationReduceRenderingWork() = 0;

	// ------------------------------------
	// Debug Methods
	// ------------------------------------

	/** Sends a request to the driver for the specified device and returns the response. The maximum response size is 32k,
	* but this method can be called with a smaller buffer. If the response exceeds the size of the buffer, it is truncated. 
	* The size of the response including its terminating null is returned. */
	virtual uint32_t DriverDebugRequest( vr::TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, VR_OUT_STRING() char *pchResponseBuffer, uint32_t unResponseBufferSize ) = 0;

	// ------------------------------------
	// Firmware methods
	// ------------------------------------
	
	/** Performs the actual firmware update if applicable. 
	 * The following events will be sent, if VRFirmwareError_None was returned: VREvent_FirmwareUpdateStarted, VREvent_FirmwareUpdateFinished 
	 * Use the properties Prop_Firmware_UpdateAvailable_Bool, Prop_Firmware_ManualUpdate_Bool, and Prop_Firmware_ManualUpdateURL_String
	 * to figure our whether a firmware update is available, and to figure out whether its a manual update 
	 * Prop_Firmware_ManualUpdateURL_String should point to an URL describing the manual update process */
	virtual vr::EVRFirmwareError PerformFirmwareUpdate( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	// ------------------------------------
	// Application life cycle methods
	// ------------------------------------

	/** Call this to acknowledge to the system that VREvent_Quit has been received and that the process is exiting.
	* This extends the timeout until the process is killed. */
	virtual void AcknowledgeQuit_Exiting() = 0;

	/** Call this to tell the system that the user is being prompted to save data. This
	* halts the timeout and dismisses the dashboard (if it was up). Applications should be sure to actually 
	* prompt the user to save and then exit afterward, otherwise the user will be left in a confusing state. */
	virtual void AcknowledgeQuit_UserPrompt() = 0;

};

static const char * const IVRSystem_Version = "IVRSystem_019";

}


// ivrapplications.h
namespace vr
{

	/** Used for all errors reported by the IVRApplications interface */
	enum EVRApplicationError
	{
		VRApplicationError_None = 0,

		VRApplicationError_AppKeyAlreadyExists = 100,	// Only one application can use any given key
		VRApplicationError_NoManifest = 101,			// the running application does not have a manifest
		VRApplicationError_NoApplication = 102,			// No application is running
		VRApplicationError_InvalidIndex = 103,
		VRApplicationError_UnknownApplication = 104,	// the application could not be found
		VRApplicationError_IPCFailed = 105,				// An IPC failure caused the request to fail
		VRApplicationError_ApplicationAlreadyRunning = 106, 
		VRApplicationError_InvalidManifest = 107,
		VRApplicationError_InvalidApplication = 108,
		VRApplicationError_LaunchFailed = 109,			// the process didn't start
		VRApplicationError_ApplicationAlreadyStarting = 110, // the system was already starting the same application
		VRApplicationError_LaunchInProgress = 111,		// The system was already starting a different application
		VRApplicationError_OldApplicationQuitting = 112, 
		VRApplicationError_TransitionAborted = 113,
		VRApplicationError_IsTemplate = 114, // error when you try to call LaunchApplication() on a template type app (use LaunchTemplateApplication)
		VRApplicationError_SteamVRIsExiting = 115,

		VRApplicationError_BufferTooSmall = 200,		// The provided buffer was too small to fit the requested data
		VRApplicationError_PropertyNotSet = 201,		// The requested property was not set
		VRApplicationError_UnknownProperty = 202,
		VRApplicationError_InvalidParameter = 203,
	};

	/** The maximum length of an application key */
	static const uint32_t k_unMaxApplicationKeyLength = 128;

	/** these are the properties available on applications. */
	enum EVRApplicationProperty
	{
		VRApplicationProperty_Name_String				= 0,

		VRApplicationProperty_LaunchType_String			= 11,
		VRApplicationProperty_WorkingDirectory_String	= 12,
		VRApplicationProperty_BinaryPath_String			= 13,
		VRApplicationProperty_Arguments_String			= 14,
		VRApplicationProperty_URL_String				= 15,

		VRApplicationProperty_Description_String		= 50,
		VRApplicationProperty_NewsURL_String			= 51,
		VRApplicationProperty_ImagePath_String			= 52,
		VRApplicationProperty_Source_String				= 53,
		VRApplicationProperty_ActionManifestURL_String	= 54,

		VRApplicationProperty_IsDashboardOverlay_Bool	= 60,
		VRApplicationProperty_IsTemplate_Bool			= 61,
		VRApplicationProperty_IsInstanced_Bool			= 62,
		VRApplicationProperty_IsInternal_Bool			= 63,
		VRApplicationProperty_WantsCompositorPauseInStandby_Bool = 64,

		VRApplicationProperty_LastLaunchTime_Uint64		= 70,
	};

	/** These are states the scene application startup process will go through. */
	enum EVRApplicationTransitionState
	{
		VRApplicationTransition_None = 0,

		VRApplicationTransition_OldAppQuitSent = 10,
		VRApplicationTransition_WaitingForExternalLaunch = 11,
		
		VRApplicationTransition_NewAppLaunched = 20,
	};

	struct AppOverrideKeys_t
	{
		const char *pchKey;
		const char *pchValue;
	};

	/** Currently recognized mime types */
	static const char * const k_pch_MimeType_HomeApp		= "vr/home";
	static const char * const k_pch_MimeType_GameTheater	= "vr/game_theater";

	class IVRApplications
	{
	public:

		// ---------------  Application management  --------------- //

		/** Adds an application manifest to the list to load when building the list of installed applications. 
		* Temporary manifests are not automatically loaded */
		virtual EVRApplicationError AddApplicationManifest( const char *pchApplicationManifestFullPath, bool bTemporary = false ) = 0;

		/** Removes an application manifest from the list to load when building the list of installed applications. */
		virtual EVRApplicationError RemoveApplicationManifest( const char *pchApplicationManifestFullPath ) = 0;

		/** Returns true if an application is installed */
		virtual bool IsApplicationInstalled( const char *pchAppKey ) = 0;

		/** Returns the number of applications available in the list */
		virtual uint32_t GetApplicationCount() = 0;

		/** Returns the key of the specified application. The index is at least 0 and is less than the return 
		* value of GetApplicationCount(). The buffer should be at least k_unMaxApplicationKeyLength in order to 
		* fit the key. */
		virtual EVRApplicationError GetApplicationKeyByIndex( uint32_t unApplicationIndex, VR_OUT_STRING() char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Returns the key of the application for the specified Process Id. The buffer should be at least 
		* k_unMaxApplicationKeyLength in order to fit the key. */
		virtual EVRApplicationError GetApplicationKeyByProcessId( uint32_t unProcessId, VR_OUT_STRING() char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Launches the application. The existing scene application will exit and then the new application will start.
		* This call is not valid for dashboard overlay applications. */
		virtual EVRApplicationError LaunchApplication( const char *pchAppKey ) = 0;

		/** Launches an instance of an application of type template, with its app key being pchNewAppKey (which must be unique) and optionally override sections
		* from the manifest file via AppOverrideKeys_t
		*/
		virtual EVRApplicationError LaunchTemplateApplication( const char *pchTemplateAppKey, const char *pchNewAppKey, VR_ARRAY_COUNT( unKeys ) const AppOverrideKeys_t *pKeys, uint32_t unKeys ) = 0;

		/** launches the application currently associated with this mime type and passes it the option args, typically the filename or object name of the item being launched */
		virtual vr::EVRApplicationError LaunchApplicationFromMimeType( const char *pchMimeType, const char *pchArgs ) = 0;

		/** Launches the dashboard overlay application if it is not already running. This call is only valid for 
		* dashboard overlay applications. */
		virtual EVRApplicationError LaunchDashboardOverlay( const char *pchAppKey ) = 0;

		/** Cancel a pending launch for an application */
		virtual bool CancelApplicationLaunch( const char *pchAppKey ) = 0;

		/** Identifies a running application. OpenVR can't always tell which process started in response
		* to a URL. This function allows a URL handler (or the process itself) to identify the app key 
		* for the now running application. Passing a process ID of 0 identifies the calling process. 
		* The application must be one that's known to the system via a call to AddApplicationManifest. */
		virtual EVRApplicationError IdentifyApplication( uint32_t unProcessId, const char *pchAppKey ) = 0;

		/** Returns the process ID for an application. Return 0 if the application was not found or is not running. */
		virtual uint32_t GetApplicationProcessId( const char *pchAppKey ) = 0;

		/** Returns a string for an applications error */
		virtual const char *GetApplicationsErrorNameFromEnum( EVRApplicationError error ) = 0;

		// ---------------  Application properties  --------------- //

		/** Returns a value for an application property. The required buffer size to fit this value will be returned. */
		virtual uint32_t GetApplicationPropertyString( const char *pchAppKey, EVRApplicationProperty eProperty, VR_OUT_STRING() char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError = nullptr ) = 0;

		/** Returns a bool value for an application property. Returns false in all error cases. */
		virtual bool GetApplicationPropertyBool( const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError = nullptr ) = 0;

		/** Returns a uint64 value for an application property. Returns 0 in all error cases. */
		virtual uint64_t GetApplicationPropertyUint64( const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError = nullptr ) = 0;

		/** Sets the application auto-launch flag. This is only valid for applications which return true for VRApplicationProperty_IsDashboardOverlay_Bool. */
		virtual EVRApplicationError SetApplicationAutoLaunch( const char *pchAppKey, bool bAutoLaunch ) = 0;

		/** Gets the application auto-launch flag. This is only valid for applications which return true for VRApplicationProperty_IsDashboardOverlay_Bool. */
		virtual bool GetApplicationAutoLaunch( const char *pchAppKey ) = 0;

		/** Adds this mime-type to the list of supported mime types for this application*/
		virtual EVRApplicationError SetDefaultApplicationForMimeType( const char *pchAppKey, const char *pchMimeType ) = 0;

		/** return the app key that will open this mime type */
		virtual bool GetDefaultApplicationForMimeType( const char *pchMimeType, VR_OUT_STRING() char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Get the list of supported mime types for this application, comma-delimited */
		virtual bool GetApplicationSupportedMimeTypes( const char *pchAppKey, VR_OUT_STRING() char *pchMimeTypesBuffer, uint32_t unMimeTypesBuffer ) = 0;

		/** Get the list of app-keys that support this mime type, comma-delimited, the return value is number of bytes you need to return the full string */
		virtual uint32_t GetApplicationsThatSupportMimeType( const char *pchMimeType, VR_OUT_STRING() char *pchAppKeysThatSupportBuffer, uint32_t unAppKeysThatSupportBuffer ) = 0;

		/** Get the args list from an app launch that had the process already running, you call this when you get a VREvent_ApplicationMimeTypeLoad */
		virtual uint32_t GetApplicationLaunchArguments( uint32_t unHandle, VR_OUT_STRING() char *pchArgs, uint32_t unArgs ) = 0;

		// ---------------  Transition methods --------------- //

		/** Returns the app key for the application that is starting up */
		virtual EVRApplicationError GetStartingApplication( VR_OUT_STRING() char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Returns the application transition state */
		virtual EVRApplicationTransitionState GetTransitionState() = 0;

		/** Returns errors that would prevent the specified application from launching immediately. Calling this function will
		* cause the current scene application to quit, so only call it when you are actually about to launch something else.
		* What the caller should do about these failures depends on the failure:
		*   VRApplicationError_OldApplicationQuitting - An existing application has been told to quit. Wait for a VREvent_ProcessQuit
		*                                               and try again.
		*   VRApplicationError_ApplicationAlreadyStarting - This application is already starting. This is a permanent failure.
		*   VRApplicationError_LaunchInProgress	      - A different application is already starting. This is a permanent failure.
		*   VRApplicationError_None                   - Go ahead and launch. Everything is clear.
		*/
		virtual EVRApplicationError PerformApplicationPrelaunchCheck( const char *pchAppKey ) = 0;

		/** Returns a string for an application transition state */
		virtual const char *GetApplicationsTransitionStateNameFromEnum( EVRApplicationTransitionState state ) = 0;

		/** Returns true if the outgoing scene app has requested a save prompt before exiting */
		virtual bool IsQuitUserPromptRequested() = 0;

		/** Starts a subprocess within the calling application. This
		* suppresses all application transition UI and automatically identifies the new executable 
		* as part of the same application. On success the calling process should exit immediately. 
		* If working directory is NULL or "" the directory portion of the binary path will be 
		* the working directory. */
		virtual EVRApplicationError LaunchInternalProcess( const char *pchBinaryPath, const char *pchArguments, const char *pchWorkingDirectory ) = 0;

		/** Returns the current scene process ID according to the application system. A scene process will get scene
		* focus once it starts rendering, but it will appear here once it calls VR_Init with the Scene application
		* type. */
		virtual uint32_t GetCurrentSceneProcessId() = 0;
	};

	static const char * const IVRApplications_Version = "IVRApplications_006";

} // namespace vr

// ivrsettings.h
#include <string>

namespace vr
{
	enum EVRSettingsError
	{
		VRSettingsError_None = 0,
		VRSettingsError_IPCFailed = 1,
		VRSettingsError_WriteFailed = 2,
		VRSettingsError_ReadFailed = 3,
		VRSettingsError_JsonParseFailed = 4,
		VRSettingsError_UnsetSettingHasNoDefault = 5, // This will be returned if the setting does not appear in the appropriate default file and has not been set
	};

	// The maximum length of a settings key
	static const uint32_t k_unMaxSettingsKeyLength = 128;

	class IVRSettings
	{
	public:
		virtual const char *GetSettingsErrorNameFromEnum( EVRSettingsError eError ) = 0;

		// Returns true if file sync occurred (force or settings dirty)
		virtual bool Sync( bool bForce = false, EVRSettingsError *peError = nullptr ) = 0;

		virtual void SetBool( const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetInt32( const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetFloat( const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetString( const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError = nullptr ) = 0;

		// Users of the system need to provide a proper default in default.vrsettings in the resources/settings/ directory
		// of either the runtime or the driver_xxx directory. Otherwise the default will be false, 0, 0.0 or ""
		virtual bool GetBool( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr ) = 0;
		virtual int32_t GetInt32( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr ) = 0;
		virtual float GetFloat( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr ) = 0;
		virtual void GetString( const char *pchSection, const char *pchSettingsKey, VR_OUT_STRING() char *pchValue, uint32_t unValueLen, EVRSettingsError *peError = nullptr ) = 0;

		virtual void RemoveSection( const char *pchSection, EVRSettingsError *peError = nullptr ) = 0;
		virtual void RemoveKeyInSection( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr ) = 0;
	};

	//-----------------------------------------------------------------------------
	static const char * const IVRSettings_Version = "IVRSettings_002";

	class CVRSettingHelper
	{
		IVRSettings *m_pSettings;
	public:
		CVRSettingHelper( IVRSettings *pSettings ) 
		{ 
			m_pSettings = pSettings; 
		}

		const char *GetSettingsErrorNameFromEnum( EVRSettingsError eError ) 
		{ 
			return m_pSettings->GetSettingsErrorNameFromEnum( eError ); 
		}

		// Returns true if file sync occurred (force or settings dirty)
		bool Sync( bool bForce = false, EVRSettingsError *peError = nullptr ) 
		{ 
			return m_pSettings->Sync( bForce, peError ); 
		}

		void SetBool( const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->SetBool( pchSection, pchSettingsKey, bValue, peError );
		}

		void SetInt32( const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->SetInt32( pchSection, pchSettingsKey, nValue, peError );
		}
		void SetFloat( const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->SetFloat( pchSection, pchSettingsKey, flValue, peError );
		}
		void SetString( const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->SetString( pchSection, pchSettingsKey, pchValue, peError );
		}
		void SetString( const std::string & sSection, const std::string &  sSettingsKey, const std::string & sValue, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->SetString( sSection.c_str(), sSettingsKey.c_str(), sValue.c_str(), peError );
		}

		bool GetBool( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr )
		{
			return m_pSettings->GetBool( pchSection, pchSettingsKey, peError );
		}
		int32_t GetInt32( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr )
		{
			return m_pSettings->GetInt32( pchSection, pchSettingsKey, peError );
		}
		float GetFloat( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr )
		{
			return m_pSettings->GetFloat( pchSection, pchSettingsKey, peError );
		}
		void GetString( const char *pchSection, const char *pchSettingsKey, VR_OUT_STRING() char *pchValue, uint32_t unValueLen, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->GetString( pchSection, pchSettingsKey, pchValue, unValueLen, peError );
		}
		std::string GetString( const std::string & sSection, const std::string & sSettingsKey, EVRSettingsError *peError = nullptr )
		{
			char buf[4096];
			vr::EVRSettingsError eError;
			m_pSettings->GetString( sSection.c_str(), sSettingsKey.c_str(), buf, sizeof( buf ), &eError );
			if ( peError )
				*peError = eError;
			if ( eError == vr::VRSettingsError_None )
				return buf;
			else
				return "";
		}

		void RemoveSection( const char *pchSection, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->RemoveSection( pchSection, peError );
		}
		void RemoveKeyInSection( const char *pchSection, const char *pchSettingsKey, EVRSettingsError *peError = nullptr )
		{
			m_pSettings->RemoveKeyInSection( pchSection, pchSettingsKey, peError );
		}
	};


	//-----------------------------------------------------------------------------
	// steamvr keys
	static const char * const k_pch_SteamVR_Section = "steamvr";
	static const char * const k_pch_SteamVR_RequireHmd_String = "requireHmd";
	static const char * const k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
	static const char * const k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
	static const char * const k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
	static const char * const k_pch_SteamVR_DebugProcessPipe_String = "debugProcessPipe";
	static const char * const k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
	static const char * const k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
	static const char * const k_pch_SteamVR_SendSystemButtonToAllApps_Bool= "sendSystemButtonToAllApps";
	static const char * const k_pch_SteamVR_LogLevel_Int32 = "loglevel";
	static const char * const k_pch_SteamVR_IPD_Float = "ipd";
	static const char * const k_pch_SteamVR_Background_String = "background";
	static const char * const k_pch_SteamVR_BackgroundUseDomeProjection_Bool = "backgroundUseDomeProjection";
	static const char * const k_pch_SteamVR_BackgroundCameraHeight_Float = "backgroundCameraHeight";
	static const char * const k_pch_SteamVR_BackgroundDomeRadius_Float = "backgroundDomeRadius";
	static const char * const k_pch_SteamVR_GridColor_String = "gridColor";
	static const char * const k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
	static const char * const k_pch_SteamVR_ShowStage_Bool = "showStage";
	static const char * const k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
	static const char * const k_pch_SteamVR_UsingSpeakers_Bool = "usingSpeakers";
	static const char * const k_pch_SteamVR_SpeakersForwardYawOffsetDegrees_Float = "speakersForwardYawOffsetDegrees";
	static const char * const k_pch_SteamVR_BaseStationPowerManagement_Bool = "basestationPowerManagement";
	static const char * const k_pch_SteamVR_NeverKillProcesses_Bool = "neverKillProcesses";
	static const char * const k_pch_SteamVR_SupersampleScale_Float = "supersampleScale";
	static const char * const k_pch_SteamVR_MaxRecommendedResolution_Int32 = "maxRecommendedResolution";
	static const char * const k_pch_SteamVR_MotionSmoothing_Bool = "motionSmoothing";
	static const char * const k_pch_SteamVR_MotionSmoothingOverride_Int32 = "motionSmoothingOverride";
	static const char * const k_pch_SteamVR_ForceFadeOnBadTracking_Bool = "forceFadeOnBadTracking";
	static const char * const k_pch_SteamVR_DefaultMirrorView_Int32 = "mirrorView";
	static const char * const k_pch_SteamVR_ShowMirrorView_Bool = "showMirrorView";
	static const char * const k_pch_SteamVR_MirrorViewGeometry_String = "mirrorViewGeometry";
	static const char * const k_pch_SteamVR_MirrorViewGeometryMaximized_String = "mirrorViewGeometryMaximized";
	static const char * const k_pch_SteamVR_StartMonitorFromAppLaunch = "startMonitorFromAppLaunch";
	static const char * const k_pch_SteamVR_StartCompositorFromAppLaunch_Bool = "startCompositorFromAppLaunch";
	static const char * const k_pch_SteamVR_StartDashboardFromAppLaunch_Bool = "startDashboardFromAppLaunch";
	static const char * const k_pch_SteamVR_StartOverlayAppsFromDashboard_Bool = "startOverlayAppsFromDashboard";
	static const char * const k_pch_SteamVR_EnableHomeApp = "enableHomeApp";
	static const char * const k_pch_SteamVR_CycleBackgroundImageTimeSec_Int32 = "CycleBackgroundImageTimeSec";
	static const char * const k_pch_SteamVR_RetailDemo_Bool = "retailDemo";
	static const char * const k_pch_SteamVR_IpdOffset_Float = "ipdOffset";
	static const char * const k_pch_SteamVR_AllowSupersampleFiltering_Bool = "allowSupersampleFiltering";
	static const char * const k_pch_SteamVR_SupersampleManualOverride_Bool = "supersampleManualOverride";
	static const char * const k_pch_SteamVR_EnableLinuxVulkanAsync_Bool = "enableLinuxVulkanAsync";
	static const char * const k_pch_SteamVR_AllowDisplayLockedMode_Bool = "allowDisplayLockedMode";
	static const char * const k_pch_SteamVR_HaveStartedTutorialForNativeChaperoneDriver_Bool = "haveStartedTutorialForNativeChaperoneDriver";
	static const char * const k_pch_SteamVR_ForceWindows32bitVRMonitor = "forceWindows32BitVRMonitor";
	static const char * const k_pch_SteamVR_DebugInput = "debugInput";
	static const char * const k_pch_SteamVR_LegacyInputRebinding = "legacyInputRebinding";
	static const char * const k_pch_SteamVR_DebugInputBinding = "debugInputBinding";
	static const char * const k_pch_SteamVR_InputBindingUIBlock = "inputBindingUI";
	static const char * const k_pch_SteamVR_RenderCameraMode = "renderCameraMode";
	static const char * const k_pch_SteamVR_EnableSharedResourceJournaling = "enableSharedResourceJournaling";
	static const char * const k_pch_SteamVR_EnableSafeMode = "enableSafeMode";
	static const char * const k_pch_SteamVR_PreferredRefreshRate = "preferredRefreshRate";

	//-----------------------------------------------------------------------------
	// direct mode keys
	static const char * const k_pch_DirectMode_Section = "direct_mode";
	static const char * const k_pch_DirectMode_Enable_Bool = "enable";
	static const char * const k_pch_DirectMode_Count_Int32 = "count";
	static const char * const k_pch_DirectMode_EdidVid_Int32 = "edidVid";
	static const char * const k_pch_DirectMode_EdidPid_Int32 = "edidPid";

	//-----------------------------------------------------------------------------
	// lighthouse keys
	static const char * const k_pch_Lighthouse_Section = "driver_lighthouse";
	static const char * const k_pch_Lighthouse_DisableIMU_Bool = "disableimu";
	static const char * const k_pch_Lighthouse_DisableIMUExceptHMD_Bool = "disableimuexcepthmd";
	static const char * const k_pch_Lighthouse_UseDisambiguation_String = "usedisambiguation";
	static const char * const k_pch_Lighthouse_DisambiguationDebug_Int32 = "disambiguationdebug";
	static const char * const k_pch_Lighthouse_PrimaryBasestation_Int32 = "primarybasestation";
	static const char * const k_pch_Lighthouse_DBHistory_Bool = "dbhistory";
	static const char * const k_pch_Lighthouse_EnableBluetooth_Bool = "enableBluetooth";
	static const char * const k_pch_Lighthouse_PowerManagedBaseStations_String = "PowerManagedBaseStations";
	static const char * const k_pch_Lighthouse_PowerManagedBaseStations2_String = "PowerManagedBaseStations2";
	static const char * const k_pch_Lighthouse_EnableImuFallback_Bool = "enableImuFallback";

	//-----------------------------------------------------------------------------
	// null keys
	static const char * const k_pch_Null_Section = "driver_null";
	static const char * const k_pch_Null_SerialNumber_String = "serialNumber";
	static const char * const k_pch_Null_ModelNumber_String = "modelNumber";
	static const char * const k_pch_Null_WindowX_Int32 = "windowX";
	static const char * const k_pch_Null_WindowY_Int32 = "windowY";
	static const char * const k_pch_Null_WindowWidth_Int32 = "windowWidth";
	static const char * const k_pch_Null_WindowHeight_Int32 = "windowHeight";
	static const char * const k_pch_Null_RenderWidth_Int32 = "renderWidth";
	static const char * const k_pch_Null_RenderHeight_Int32 = "renderHeight";
	static const char * const k_pch_Null_SecondsFromVsyncToPhotons_Float = "secondsFromVsyncToPhotons";
	static const char * const k_pch_Null_DisplayFrequency_Float = "displayFrequency";

	//-----------------------------------------------------------------------------
	// user interface keys
	static const char * const k_pch_UserInterface_Section = "userinterface";
	static const char * const k_pch_UserInterface_StatusAlwaysOnTop_Bool = "StatusAlwaysOnTop";
	static const char * const k_pch_UserInterface_MinimizeToTray_Bool = "MinimizeToTray";
	static const char * const k_pch_UserInterface_HidePopupsWhenStatusMinimized_Bool = "HidePopupsWhenStatusMinimized";
	static const char * const k_pch_UserInterface_Screenshots_Bool = "screenshots";
	static const char * const k_pch_UserInterface_ScreenshotType_Int = "screenshotType";

	//-----------------------------------------------------------------------------
	// notification keys
	static const char * const k_pch_Notifications_Section = "notifications";
	static const char * const k_pch_Notifications_DoNotDisturb_Bool = "DoNotDisturb";

	//-----------------------------------------------------------------------------
	// keyboard keys
	static const char * const k_pch_Keyboard_Section = "keyboard";
	static const char * const k_pch_Keyboard_TutorialCompletions = "TutorialCompletions";
	static const char * const k_pch_Keyboard_ScaleX = "ScaleX";
	static const char * const k_pch_Keyboard_ScaleY = "ScaleY";
	static const char * const k_pch_Keyboard_OffsetLeftX = "OffsetLeftX";
	static const char * const k_pch_Keyboard_OffsetRightX = "OffsetRightX";
	static const char * const k_pch_Keyboard_OffsetY = "OffsetY";
	static const char * const k_pch_Keyboard_Smoothing = "Smoothing";

	//-----------------------------------------------------------------------------
	// perf keys
	static const char * const k_pch_Perf_Section = "perfcheck";
	static const char * const k_pch_Perf_PerfGraphInHMD_Bool = "perfGraphInHMD";
	static const char * const k_pch_Perf_AllowTimingStore_Bool = "allowTimingStore";
	static const char * const k_pch_Perf_SaveTimingsOnExit_Bool = "saveTimingsOnExit";
	static const char * const k_pch_Perf_TestData_Float = "perfTestData";
	static const char * const k_pch_Perf_LinuxGPUProfiling_Bool = "linuxGPUProfiling";

	//-----------------------------------------------------------------------------
	// collision bounds keys
	static const char * const k_pch_CollisionBounds_Section = "collisionBounds";
	static const char * const k_pch_CollisionBounds_Style_Int32 = "CollisionBoundsStyle";
	static const char * const k_pch_CollisionBounds_GroundPerimeterOn_Bool = "CollisionBoundsGroundPerimeterOn";
	static const char * const k_pch_CollisionBounds_CenterMarkerOn_Bool = "CollisionBoundsCenterMarkerOn";
	static const char * const k_pch_CollisionBounds_PlaySpaceOn_Bool = "CollisionBoundsPlaySpaceOn";
	static const char * const k_pch_CollisionBounds_FadeDistance_Float = "CollisionBoundsFadeDistance";
	static const char * const k_pch_CollisionBounds_ColorGammaR_Int32 = "CollisionBoundsColorGammaR";
	static const char * const k_pch_CollisionBounds_ColorGammaG_Int32 = "CollisionBoundsColorGammaG";
	static const char * const k_pch_CollisionBounds_ColorGammaB_Int32 = "CollisionBoundsColorGammaB";
	static const char * const k_pch_CollisionBounds_ColorGammaA_Int32 = "CollisionBoundsColorGammaA";

	//-----------------------------------------------------------------------------
	// camera keys
	static const char * const k_pch_Camera_Section = "camera";
	static const char * const k_pch_Camera_EnableCamera_Bool = "enableCamera";
	static const char * const k_pch_Camera_EnableCameraInDashboard_Bool = "enableCameraInDashboard";
	static const char * const k_pch_Camera_EnableCameraForCollisionBounds_Bool = "enableCameraForCollisionBounds";
	static const char * const k_pch_Camera_EnableCameraForRoomView_Bool = "enableCameraForRoomView";
	static const char * const k_pch_Camera_BoundsColorGammaR_Int32 = "cameraBoundsColorGammaR";
	static const char * const k_pch_Camera_BoundsColorGammaG_Int32 = "cameraBoundsColorGammaG";
	static const char * const k_pch_Camera_BoundsColorGammaB_Int32 = "cameraBoundsColorGammaB";
	static const char * const k_pch_Camera_BoundsColorGammaA_Int32 = "cameraBoundsColorGammaA";
	static const char * const k_pch_Camera_BoundsStrength_Int32 = "cameraBoundsStrength";
	static const char * const k_pch_Camera_RoomViewMode_Int32 = "cameraRoomViewMode";

	//-----------------------------------------------------------------------------
	// audio keys
	static const char * const k_pch_audio_Section = "audio";
	static const char * const k_pch_audio_OnPlaybackDevice_String = "onPlaybackDevice";
	static const char * const k_pch_audio_OnRecordDevice_String = "onRecordDevice";
	static const char * const k_pch_audio_OnPlaybackMirrorDevice_String = "onPlaybackMirrorDevice";
	static const char * const k_pch_audio_OffPlaybackDevice_String = "offPlaybackDevice";
	static const char * const k_pch_audio_OffRecordDevice_String = "offRecordDevice";
	static const char * const k_pch_audio_VIVEHDMIGain = "viveHDMIGain";

	//-----------------------------------------------------------------------------
	// power management keys
	static const char * const k_pch_Power_Section = "power";
	static const char * const k_pch_Power_PowerOffOnExit_Bool = "powerOffOnExit";
	static const char * const k_pch_Power_TurnOffScreensTimeout_Float = "turnOffScreensTimeout";
	static const char * const k_pch_Power_TurnOffControllersTimeout_Float = "turnOffControllersTimeout";
	static const char * const k_pch_Power_ReturnToWatchdogTimeout_Float = "returnToWatchdogTimeout";
	static const char * const k_pch_Power_AutoLaunchSteamVROnButtonPress = "autoLaunchSteamVROnButtonPress";
	static const char * const k_pch_Power_PauseCompositorOnStandby_Bool = "pauseCompositorOnStandby";

	//-----------------------------------------------------------------------------
	// dashboard keys
	static const char * const k_pch_Dashboard_Section = "dashboard";
	static const char * const k_pch_Dashboard_EnableDashboard_Bool = "enableDashboard";
	static const char * const k_pch_Dashboard_ArcadeMode_Bool = "arcadeMode";
	static const char * const k_pch_Dashboard_EnableWebUI = "webUI";
	static const char * const k_pch_Dashboard_EnableWebUIDevTools = "webUIDevTools";
	static const char * const k_pch_Dashboard_EnableWebUIDashboardReplacement = "webUIDashboard";

	//-----------------------------------------------------------------------------
	// model skin keys
	static const char * const k_pch_modelskin_Section = "modelskins";

	//-----------------------------------------------------------------------------
	// driver keys - These could be checked in any driver_<name> section
	static const char * const k_pch_Driver_Enable_Bool = "enable";

	//-----------------------------------------------------------------------------
	// web interface keys
	static const char* const k_pch_WebInterface_Section = "WebInterface";
	static const char* const k_pch_WebInterface_WebEnable_Bool = "WebEnable";
	static const char* const k_pch_WebInterface_WebPort_String = "WebPort";

	//-----------------------------------------------------------------------------
	// vrwebhelper keys
	static const char* const k_pch_VRWebHelper_Section = "VRWebHelper";
	static const char* const k_pch_VRWebHelper_DebuggerEnabled_Bool = "DebuggerEnabled";
	static const char* const k_pch_VRWebHelper_DebuggerPort_Int32 = "DebuggerPort";

	//-----------------------------------------------------------------------------
	// tracking overrides - keys are device paths, values are the device paths their
	//  tracking/pose information overrides
	static const char* const k_pch_TrackingOverride_Section = "TrackingOverrides";

	//-----------------------------------------------------------------------------
	// per-app keys - the section name for these is the app key itself. Some of these are prefixed by the controller type
	static const char* const k_pch_App_BindingAutosaveURLSuffix_String = "AutosaveURL";
	static const char* const k_pch_App_BindingCurrentURLSuffix_String = "CurrentURL";
	static const char* const k_pch_App_NeedToUpdateAutosaveSuffix_Bool = "NeedToUpdateAutosave";
	static const char* const k_pch_App_ActionManifestURL_String = "ActionManifestURL";

	//-----------------------------------------------------------------------------
	// configuration for trackers
	static const char * const k_pch_Trackers_Section = "trackers";

	//-----------------------------------------------------------------------------
	// configuration for desktop UI windows
	static const char * const k_pch_DesktopUI_Section = "DesktopUI";

	//-----------------------------------------------------------------------------
	// Last known keys for righting recovery
	static const char * const k_pch_LastKnown_Section = "LastKnown";
	static const char* const k_pch_LastKnown_HMDManufacturer_String = "HMDManufacturer";
	static const char* const k_pch_LastKnown_HMDModel_String = "HMDModel";

} // namespace vr

// ivrchaperone.h
namespace vr
{

#pragma pack( push, 8 )

enum ChaperoneCalibrationState
{
	// OK!
	ChaperoneCalibrationState_OK = 1,									// Chaperone is fully calibrated and working correctly

	// Warnings
	ChaperoneCalibrationState_Warning = 100,
	ChaperoneCalibrationState_Warning_BaseStationMayHaveMoved = 101,	// A base station thinks that it might have moved
	ChaperoneCalibrationState_Warning_BaseStationRemoved = 102,			// There are less base stations than when calibrated
	ChaperoneCalibrationState_Warning_SeatedBoundsInvalid = 103,		// Seated bounds haven't been calibrated for the current tracking center

	// Errors
	ChaperoneCalibrationState_Error = 200,								// The UniverseID is invalid
	ChaperoneCalibrationState_Error_BaseStationUninitialized = 201,		// Tracking center hasn't be calibrated for at least one of the base stations
	ChaperoneCalibrationState_Error_BaseStationConflict = 202,			// Tracking center is calibrated, but base stations disagree on the tracking space
	ChaperoneCalibrationState_Error_PlayAreaInvalid = 203,				// Play Area hasn't been calibrated for the current tracking center
	ChaperoneCalibrationState_Error_CollisionBoundsInvalid = 204,		// Collision Bounds haven't been calibrated for the current tracking center
};


/** HIGH LEVEL TRACKING SPACE ASSUMPTIONS:
* 0,0,0 is the preferred standing area center.
* 0Y is the floor height.
* -Z is the preferred forward facing direction. */
class IVRChaperone
{
public:

	/** Get the current state of Chaperone calibration. This state can change at any time during a session due to physical base station changes. **/
	virtual ChaperoneCalibrationState GetCalibrationState() = 0;

	/** Returns the width and depth of the Play Area (formerly named Soft Bounds) in X and Z. 
	* Tracking space center (0,0,0) is the center of the Play Area. **/
	virtual bool GetPlayAreaSize( float *pSizeX, float *pSizeZ ) = 0;

	/** Returns the 4 corner positions of the Play Area (formerly named Soft Bounds).
	* Corners are in counter-clockwise order.
	* Standing center (0,0,0) is the center of the Play Area.
	* It's a rectangle.
	* 2 sides are parallel to the X axis and 2 sides are parallel to the Z axis.
	* Height of every corner is 0Y (on the floor). **/
	virtual bool GetPlayAreaRect( HmdQuad_t *rect ) = 0;

	/** Reload Chaperone data from the .vrchap file on disk. */
	virtual void ReloadInfo( void ) = 0;

	/** Optionally give the chaperone system a hit about the color and brightness in the scene **/
	virtual void SetSceneColor( HmdColor_t color ) = 0;

	/** Get the current chaperone bounds draw color and brightness **/
	virtual void GetBoundsColor( HmdColor_t *pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, HmdColor_t *pOutputCameraColor ) = 0;

	/** Determine whether the bounds are showing right now **/
	virtual bool AreBoundsVisible() = 0;

	/** Force the bounds to show, mostly for utilities **/
	virtual void ForceBoundsVisible( bool bForce ) = 0;
};

static const char * const IVRChaperone_Version = "IVRChaperone_003";

#pragma pack( pop )

}

// ivrchaperonesetup.h
namespace vr
{

enum EChaperoneConfigFile
{
	EChaperoneConfigFile_Live = 1,		// The live chaperone config, used by most applications and games
	EChaperoneConfigFile_Temp = 2,		// The temporary chaperone config, used to live-preview collision bounds in room setup
};

enum EChaperoneImportFlags
{
	EChaperoneImport_BoundsOnly = 0x0001,
};

/** Manages the working copy of the chaperone info. By default this will be the same as the 
* live copy. Any changes made with this interface will stay in the working copy until 
* CommitWorkingCopy() is called, at which point the working copy and the live copy will be 
* the same again. */
class IVRChaperoneSetup
{
public:

	/** Saves the current working copy to disk */
	virtual bool CommitWorkingCopy( EChaperoneConfigFile configFile ) = 0;

	/** Reverts the working copy to match the live chaperone calibration.
	* To modify existing data this MUST be do WHILE getting a non-error ChaperoneCalibrationStatus.
	* Only after this should you do gets and sets on the existing data. */
	virtual void RevertWorkingCopy() = 0;

	/** Returns the width and depth of the Play Area (formerly named Soft Bounds) in X and Z from the working copy.
	* Tracking space center (0,0,0) is the center of the Play Area. */
	virtual bool GetWorkingPlayAreaSize( float *pSizeX, float *pSizeZ ) = 0;

	/** Returns the 4 corner positions of the Play Area (formerly named Soft Bounds) from the working copy.
	* Corners are in clockwise order.
	* Tracking space center (0,0,0) is the center of the Play Area.
	* It's a rectangle.
	* 2 sides are parallel to the X axis and 2 sides are parallel to the Z axis.
	* Height of every corner is 0Y (on the floor). **/
	virtual bool GetWorkingPlayAreaRect( HmdQuad_t *rect ) = 0;

	/** Returns the number of Quads if the buffer points to null. Otherwise it returns Quads 
	* into the buffer up to the max specified from the working copy. */
	virtual bool GetWorkingCollisionBoundsInfo( VR_OUT_ARRAY_COUNT(punQuadsCount) HmdQuad_t *pQuadsBuffer, uint32_t* punQuadsCount ) = 0;

	/** Returns the number of Quads if the buffer points to null. Otherwise it returns Quads 
	* into the buffer up to the max specified. */
	virtual bool GetLiveCollisionBoundsInfo( VR_OUT_ARRAY_COUNT(punQuadsCount) HmdQuad_t *pQuadsBuffer, uint32_t* punQuadsCount ) = 0;

	/** Returns the preferred seated position from the working copy. */
	virtual bool GetWorkingSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose ) = 0;

	/** Returns the standing origin from the working copy. */
	virtual bool GetWorkingStandingZeroPoseToRawTrackingPose( HmdMatrix34_t *pmatStandingZeroPoseToRawTrackingPose ) = 0;

	/** Sets the Play Area in the working copy. */
	virtual void SetWorkingPlayAreaSize( float sizeX, float sizeZ ) = 0;

	/** Sets the Collision Bounds in the working copy. */
	virtual void SetWorkingCollisionBoundsInfo( VR_ARRAY_COUNT(unQuadsCount) HmdQuad_t *pQuadsBuffer, uint32_t unQuadsCount ) = 0;

	/** Sets the Collision Bounds in the working copy. */
	virtual void SetWorkingPerimeter( VR_ARRAY_COUNT( unPointCount ) HmdVector2_t *pPointBuffer, uint32_t unPointCount ) = 0;

	/** Sets the preferred seated position in the working copy. */
	virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose ) = 0;

	/** Sets the preferred standing position in the working copy. */
	virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose ) = 0;

	/** Tear everything down and reload it from the file on disk */
	virtual void ReloadFromDisk( EChaperoneConfigFile configFile ) = 0;

	/** Returns the preferred seated position. */
	virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose ) = 0;

	virtual bool ExportLiveToBuffer( VR_OUT_STRING() char *pBuffer, uint32_t *pnBufferLength ) = 0;
	virtual bool ImportFromBufferToWorking( const char *pBuffer, uint32_t nImportFlags ) = 0;

	/** Shows the chaperone data in the working set to preview in the compositor.*/
	virtual void ShowWorkingSetPreview() = 0;

	/** Hides the chaperone data in the working set to preview in the compositor (if it was visible).*/
	virtual void HideWorkingSetPreview() = 0;
};

static const char * const IVRChaperoneSetup_Version = "IVRChaperoneSetup_006";


}

// ivrcompositor.h
namespace vr
{

#pragma pack( push, 8 )

/** Errors that can occur with the VR compositor */
enum EVRCompositorError
{
	VRCompositorError_None						= 0,
	VRCompositorError_RequestFailed				= 1,
	VRCompositorError_IncompatibleVersion		= 100,
	VRCompositorError_DoNotHaveFocus			= 101,
	VRCompositorError_InvalidTexture			= 102,
	VRCompositorError_IsNotSceneApplication		= 103,
	VRCompositorError_TextureIsOnWrongDevice	= 104,
	VRCompositorError_TextureUsesUnsupportedFormat = 105,
	VRCompositorError_SharedTexturesNotSupported = 106,
	VRCompositorError_IndexOutOfRange			= 107,
	VRCompositorError_AlreadySubmitted			= 108,
	VRCompositorError_InvalidBounds				= 109,
};

/** Timing mode passed to SetExplicitTimingMode(); see that function for documentation */
enum EVRCompositorTimingMode
{
	VRCompositorTimingMode_Implicit											= 0,
	VRCompositorTimingMode_Explicit_RuntimePerformsPostPresentHandoff		= 1,
	VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff	= 2,
};

const uint32_t VRCompositor_ReprojectionReason_Cpu = 0x01;
const uint32_t VRCompositor_ReprojectionReason_Gpu = 0x02;
const uint32_t VRCompositor_ReprojectionAsync      = 0x04;	// This flag indicates the async reprojection mode is active,
															// but does not indicate if reprojection actually happened or not.
															// Use the ReprojectionReason flags above to check if reprojection
															// was actually applied (i.e. scene texture was reused).
															// NumFramePresents > 1 also indicates the scene texture was reused,
															// and also the number of times that it was presented in total.

const uint32_t VRCompositor_ReprojectionMotion     = 0x08;	// This flag indicates whether or not motion smoothing was triggered for this frame

const uint32_t VRCompositor_PredictionMask         = 0x30;	// The runtime may predict more than one frame (up to four) ahead if
															// it detects the application is taking too long to render. These two
															// bits will contain the count of additional frames (normally zero).
															// Use the VR_COMPOSITOR_ADDITIONAL_PREDICTED_FRAMES macro to read from
															// the latest frame timing entry.

const uint32_t VRCompositor_ThrottleMask           = 0xC0;	// Number of frames the compositor is throttling the application.
															// Use the VR_COMPOSITOR_NUMBER_OF_THROTTLED_FRAMES macro to read from
															// the latest frame timing entry.

#define VR_COMPOSITOR_ADDITIONAL_PREDICTED_FRAMES( timing ) ( ( ( timing ).m_nReprojectionFlags & vr::VRCompositor_PredictionMask ) >> 4 )
#define VR_COMPOSITOR_NUMBER_OF_THROTTLED_FRAMES( timing ) ( ( ( timing ).m_nReprojectionFlags & vr::VRCompositor_ThrottleMask ) >> 6 )

/** Provides a single frame's timing information to the app */
struct Compositor_FrameTiming
{
	uint32_t m_nSize; // Set to sizeof( Compositor_FrameTiming )
	uint32_t m_nFrameIndex;
	uint32_t m_nNumFramePresents; // number of times this frame was presented
	uint32_t m_nNumMisPresented; // number of times this frame was presented on a vsync other than it was originally predicted to
	uint32_t m_nNumDroppedFrames; // number of additional times previous frame was scanned out
	uint32_t m_nReprojectionFlags;

	/** Absolute time reference for comparing frames.  This aligns with the vsync that running start is relative to. */
	double m_flSystemTimeInSeconds;

	/** These times may include work from other processes due to OS scheduling.
	* The fewer packets of work these are broken up into, the less likely this will happen.
	* GPU work can be broken up by calling Flush.  This can sometimes be useful to get the GPU started
	* processing that work earlier in the frame. */
	float m_flPreSubmitGpuMs; // time spent rendering the scene (gpu work submitted between WaitGetPoses and second Submit)
	float m_flPostSubmitGpuMs; // additional time spent rendering by application (e.g. companion window)
	float m_flTotalRenderGpuMs; // time between work submitted immediately after present (ideally vsync) until the end of compositor submitted work
	float m_flCompositorRenderGpuMs; // time spend performing distortion correction, rendering chaperone, overlays, etc.
	float m_flCompositorRenderCpuMs; // time spent on cpu submitting the above work for this frame
	float m_flCompositorIdleCpuMs; // time spent waiting for running start (application could have used this much more time)

	/** Miscellaneous measured intervals. */
	float m_flClientFrameIntervalMs; // time between calls to WaitGetPoses
	float m_flPresentCallCpuMs; // time blocked on call to present (usually 0.0, but can go long)
	float m_flWaitForPresentCpuMs; // time spent spin-waiting for frame index to change (not near-zero indicates wait object failure)
	float m_flSubmitFrameMs; // time spent in IVRCompositor::Submit (not near-zero indicates driver issue)

	/** The following are all relative to this frame's SystemTimeInSeconds */
	float m_flWaitGetPosesCalledMs;
	float m_flNewPosesReadyMs;
	float m_flNewFrameReadyMs; // second call to IVRCompositor::Submit
	float m_flCompositorUpdateStartMs;
	float m_flCompositorUpdateEndMs;
	float m_flCompositorRenderStartMs;

	vr::TrackedDevicePose_t m_HmdPose; // pose used by app to render this frame

	uint32_t m_nNumVSyncsReadyForUse;
	uint32_t m_nNumVSyncsToFirstView;
};

/** Cumulative stats for current application.  These are not cleared until a new app connects,
* but they do stop accumulating once the associated app disconnects. */
struct Compositor_CumulativeStats
{
	uint32_t m_nPid; // Process id associated with these stats (may no longer be running).
	uint32_t m_nNumFramePresents; // total number of times we called present (includes reprojected frames)
	uint32_t m_nNumDroppedFrames; // total number of times an old frame was re-scanned out (without reprojection)
	uint32_t m_nNumReprojectedFrames; // total number of times a frame was scanned out a second time (with reprojection)

	/** Values recorded at startup before application has fully faded in the first time. */
	uint32_t m_nNumFramePresentsOnStartup;
	uint32_t m_nNumDroppedFramesOnStartup;
	uint32_t m_nNumReprojectedFramesOnStartup;

	/** Applications may explicitly fade to the compositor.  This is usually to handle level transitions, and loading often causes
	* system wide hitches.  The following stats are collected during this period.  Does not include values recorded during startup. */
	uint32_t m_nNumLoading;
	uint32_t m_nNumFramePresentsLoading;
	uint32_t m_nNumDroppedFramesLoading;
	uint32_t m_nNumReprojectedFramesLoading;

	/** If we don't get a new frame from the app in less than 2.5 frames, then we assume the app has hung and start
	* fading back to the compositor.  The following stats are a result of this, and are a subset of those recorded above.
	* Does not include values recorded during start up or loading. */
	uint32_t m_nNumTimedOut;
	uint32_t m_nNumFramePresentsTimedOut;
	uint32_t m_nNumDroppedFramesTimedOut;
	uint32_t m_nNumReprojectedFramesTimedOut;
};

#pragma pack( pop )

/** Allows the application to interact with the compositor */
class IVRCompositor
{
public:
	/** Sets tracking space returned by WaitGetPoses */
	virtual void SetTrackingSpace( ETrackingUniverseOrigin eOrigin ) = 0;

	/** Gets current tracking space returned by WaitGetPoses */
	virtual ETrackingUniverseOrigin GetTrackingSpace() = 0;

	/** Scene applications should call this function to get poses to render with (and optionally poses predicted an additional frame out to use for gameplay).
	* This function will block until "running start" milliseconds before the start of the frame, and should be called at the last moment before needing to
	* start rendering.
	*
	* Return codes:
	*	- IsNotSceneApplication (make sure to call VR_Init with VRApplicaiton_Scene)
	*	- DoNotHaveFocus (some other app has taken focus - this will throttle the call to 10hz to reduce the impact on that app)
	*/
	virtual EVRCompositorError WaitGetPoses( VR_ARRAY_COUNT(unRenderPoseArrayCount) TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount,
		VR_ARRAY_COUNT(unGamePoseArrayCount) TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount ) = 0;

	/** Get the last set of poses returned by WaitGetPoses. */
	virtual EVRCompositorError GetLastPoses( VR_ARRAY_COUNT( unRenderPoseArrayCount ) TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount,
		VR_ARRAY_COUNT( unGamePoseArrayCount ) TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount ) = 0;

	/** Interface for accessing last set of poses returned by WaitGetPoses one at a time.
	* Returns VRCompositorError_IndexOutOfRange if unDeviceIndex not less than k_unMaxTrackedDeviceCount otherwise VRCompositorError_None.
	* It is okay to pass NULL for either pose if you only want one of the values. */
	virtual EVRCompositorError GetLastPoseForTrackedDeviceIndex( TrackedDeviceIndex_t unDeviceIndex, TrackedDevicePose_t *pOutputPose, TrackedDevicePose_t *pOutputGamePose ) = 0;

	/** Updated scene texture to display. If pBounds is NULL the entire texture will be used.  If called from an OpenGL app, consider adding a glFlush after
	* Submitting both frames to signal the driver to start processing, otherwise it may wait until the command buffer fills up, causing the app to miss frames.
	*
	* OpenGL dirty state:
	*	glBindTexture
	*
	* Return codes:
	*	- IsNotSceneApplication (make sure to call VR_Init with VRApplicaiton_Scene)
	*	- DoNotHaveFocus (some other app has taken focus)
	*	- TextureIsOnWrongDevice (application did not use proper AdapterIndex - see IVRSystem.GetDXGIOutputInfo)
	*	- SharedTexturesNotSupported (application needs to call CreateDXGIFactory1 or later before creating DX device)
	*	- TextureUsesUnsupportedFormat (scene textures must be compatible with DXGI sharing rules - e.g. uncompressed, no mips, etc.)
	*	- InvalidTexture (usually means bad arguments passed in)
	*	- AlreadySubmitted (app has submitted two left textures or two right textures in a single frame - i.e. before calling WaitGetPoses again)
	*/
	virtual EVRCompositorError Submit( EVREye eEye, const Texture_t *pTexture, const VRTextureBounds_t* pBounds = 0, EVRSubmitFlags nSubmitFlags = Submit_Default ) = 0;

	/** Clears the frame that was sent with the last call to Submit. This will cause the 
	* compositor to show the grid until Submit is called again. */
	virtual void ClearLastSubmittedFrame() = 0;

	/** Call immediately after presenting your app's window (i.e. companion window) to unblock the compositor.
	* This is an optional call, which only needs to be used if you can't instead call WaitGetPoses immediately after Present.
	* For example, if your engine's render and game loop are not on separate threads, or blocking the render thread until 3ms before the next vsync would
	* introduce a deadlock of some sort.  This function tells the compositor that you have finished all rendering after having Submitted buffers for both
	* eyes, and it is free to start its rendering work.  This should only be called from the same thread you are rendering on. */
	virtual void PostPresentHandoff() = 0;

	/** Returns true if timing data is filled it.  Sets oldest timing info if nFramesAgo is larger than the stored history.
	* Be sure to set timing.size = sizeof(Compositor_FrameTiming) on struct passed in before calling this function. */
	virtual bool GetFrameTiming( Compositor_FrameTiming *pTiming, uint32_t unFramesAgo = 0 ) = 0;

	/** Interface for copying a range of timing data.  Frames are returned in ascending order (oldest to newest) with the last being the most recent frame.
	* Only the first entry's m_nSize needs to be set, as the rest will be inferred from that.  Returns total number of entries filled out. */
	virtual uint32_t GetFrameTimings( Compositor_FrameTiming *pTiming, uint32_t nFrames ) = 0;

	/** Returns the time in seconds left in the current (as identified by FrameTiming's frameIndex) frame.
	* Due to "running start", this value may roll over to the next frame before ever reaching 0.0. */
	virtual float GetFrameTimeRemaining() = 0;

	/** Fills out stats accumulated for the last connected application.  Pass in sizeof( Compositor_CumulativeStats ) as second parameter. */
	virtual void GetCumulativeStats( Compositor_CumulativeStats *pStats, uint32_t nStatsSizeInBytes ) = 0;

	/** Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between
	* 0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly 
	* would be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space. */
	virtual void FadeToColor( float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground = false ) = 0;

	/** Get current fade color value. */
	virtual HmdColor_t GetCurrentFadeColor( bool bBackground = false ) = 0;

	/** Fading the Grid in or out in fSeconds */
	virtual void FadeGrid( float fSeconds, bool bFadeIn ) = 0;

	/** Get current alpha value of grid. */
	virtual float GetCurrentGridAlpha() = 0;

	/** Override the skybox used in the compositor (e.g. for during level loads when the app can't feed scene images fast enough)
	* Order is Front, Back, Left, Right, Top, Bottom.  If only a single texture is passed, it is assumed in lat-long format.
	* If two are passed, it is assumed a lat-long stereo pair. */
	virtual EVRCompositorError SetSkyboxOverride( VR_ARRAY_COUNT( unTextureCount ) const Texture_t *pTextures, uint32_t unTextureCount ) = 0;

	/** Resets compositor skybox back to defaults. */
	virtual void ClearSkyboxOverride() = 0;

	/** Brings the compositor window to the front. This is useful for covering any other window that may be on the HMD
	* and is obscuring the compositor window. */
	virtual void CompositorBringToFront() = 0;

	/** Pushes the compositor window to the back. This is useful for allowing other applications to draw directly to the HMD. */
	virtual void CompositorGoToBack() = 0;

	/** Tells the compositor process to clean up and exit. You do not need to call this function at shutdown. Under normal 
	* circumstances the compositor will manage its own life cycle based on what applications are running. */
	virtual void CompositorQuit() = 0;
	
	/** Return whether the compositor is fullscreen */
	virtual bool IsFullscreen() = 0;

	/** Returns the process ID of the process that is currently rendering the scene */
	virtual uint32_t GetCurrentSceneFocusProcess() = 0;

	/** Returns the process ID of the process that rendered the last frame (or 0 if the compositor itself rendered the frame.)
	* Returns 0 when fading out from an app and the app's process Id when fading into an app. */
	virtual uint32_t GetLastFrameRenderer() = 0;

	/** Returns true if the current process has the scene focus */
	virtual bool CanRenderScene() = 0;

	/** Creates a window on the primary monitor to display what is being shown in the headset. */
	virtual void ShowMirrorWindow() = 0;

	/** Closes the mirror window. */
	virtual void HideMirrorWindow() = 0;

	/** Returns true if the mirror window is shown. */
	virtual bool IsMirrorWindowVisible() = 0;

	/** Writes back buffer and stereo left/right pair from the application to a 'screenshots' folder in the SteamVR runtime root. */
	virtual void CompositorDumpImages() = 0;

	/** Let an app know it should be rendering with low resources. */
	virtual bool ShouldAppRenderWithLowResources() = 0;

	/** Override interleaved reprojection logic to force on. */
	virtual void ForceInterleavedReprojectionOn( bool bOverride ) = 0;

	/** Force reconnecting to the compositor process. */
	virtual void ForceReconnectProcess() = 0;

	/** Temporarily suspends rendering (useful for finer control over scene transitions). */
	virtual void SuspendRendering( bool bSuspend ) = 0;

	/** Opens a shared D3D11 texture with the undistorted composited image for each eye.  Use ReleaseMirrorTextureD3D11 when finished
	* instead of calling Release on the resource itself. */
	virtual vr::EVRCompositorError GetMirrorTextureD3D11( vr::EVREye eEye, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView ) = 0;
	virtual void ReleaseMirrorTextureD3D11( void *pD3D11ShaderResourceView ) = 0;

	/** Access to mirror textures from OpenGL. */
	virtual vr::EVRCompositorError GetMirrorTextureGL( vr::EVREye eEye, vr::glUInt_t *pglTextureId, vr::glSharedTextureHandle_t *pglSharedTextureHandle ) = 0;
	virtual bool ReleaseSharedGLTexture( vr::glUInt_t glTextureId, vr::glSharedTextureHandle_t glSharedTextureHandle ) = 0;
	virtual void LockGLSharedTextureForAccess( vr::glSharedTextureHandle_t glSharedTextureHandle ) = 0;
	virtual void UnlockGLSharedTextureForAccess( vr::glSharedTextureHandle_t glSharedTextureHandle ) = 0;

	/** [Vulkan Only]
	* return 0. Otherwise it returns the length of the number of bytes necessary to hold this string including the trailing
	* null.  The string will be a space separated list of-required instance extensions to enable in VkCreateInstance */
	virtual uint32_t GetVulkanInstanceExtensionsRequired( VR_OUT_STRING() char *pchValue, uint32_t unBufferSize ) = 0;

	/** [Vulkan only]
	* return 0. Otherwise it returns the length of the number of bytes necessary to hold this string including the trailing
	* null.  The string will be a space separated list of required device extensions to enable in VkCreateDevice */
	virtual uint32_t GetVulkanDeviceExtensionsRequired( VkPhysicalDevice_T *pPhysicalDevice, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize ) = 0;

	/** [ Vulkan/D3D12 Only ]
	* There are two purposes for SetExplicitTimingMode:
	*	1. To get a more accurate GPU timestamp for when the frame begins in Vulkan/D3D12 applications.
	*	2. (Optional) To avoid having WaitGetPoses access the Vulkan queue so that the queue can be accessed from
	*	another thread while WaitGetPoses is executing.
	*
	* More accurate GPU timestamp for the start of the frame is achieved by the application calling
	* SubmitExplicitTimingData immediately before its first submission to the Vulkan/D3D12 queue.
	* This is more accurate because normally this GPU timestamp is recorded during WaitGetPoses.  In D3D11, 
	* WaitGetPoses queues a GPU timestamp write, but it does not actually get submitted to the GPU until the 
	* application flushes.  By using SubmitExplicitTimingData, the timestamp is recorded at the same place for 
	* Vulkan/D3D12 as it is for D3D11, resulting in a more accurate GPU time measurement for the frame.
	*
	* Avoiding WaitGetPoses accessing the Vulkan queue can be achieved using SetExplicitTimingMode as well.  If this is desired,
	* the application should set the timing mode to Explicit_ApplicationPerformsPostPresentHandoff and *MUST* call PostPresentHandoff
	* itself. If these conditions are met, then WaitGetPoses is guaranteed not to access the queue.  Note that PostPresentHandoff
	* and SubmitExplicitTimingData will access the queue, so only WaitGetPoses becomes safe for accessing the queue from another
	* thread. */
	virtual void SetExplicitTimingMode( EVRCompositorTimingMode eTimingMode ) = 0;

	/** [ Vulkan/D3D12 Only ]
	* Submit explicit timing data.  When SetExplicitTimingMode is true, this must be called immediately before
	* the application's first vkQueueSubmit (Vulkan) or ID3D12CommandQueue::ExecuteCommandLists (D3D12) of each frame.
	* This function will insert a GPU timestamp write just before the application starts its rendering.  This function
	* will perform a vkQueueSubmit on Vulkan so must not be done simultaneously with VkQueue operations on another thread.
	* Returns VRCompositorError_RequestFailed if SetExplicitTimingMode is not enabled. */
	virtual EVRCompositorError SubmitExplicitTimingData() = 0;

	/** Indicates whether or not motion smoothing is enabled by the user settings.
	* If you want to know if motion smoothing actually triggered due to a late frame, check Compositor_FrameTiming
	* m_nReprojectionFlags & VRCompositor_ReprojectionMotion instead. */
	virtual bool IsMotionSmoothingEnabled() = 0;
};

static const char * const IVRCompositor_Version = "IVRCompositor_022";

} // namespace vr



// ivrnotifications.h
namespace vr
{

#pragma pack( push, 8 )

// Used for passing graphic data
struct NotificationBitmap_t
{
	NotificationBitmap_t()
		: m_pImageData( nullptr )
		, m_nWidth( 0 )
		, m_nHeight( 0 )
		, m_nBytesPerPixel( 0 )
	{
	};

	void *m_pImageData;
	int32_t m_nWidth;
	int32_t m_nHeight;
	int32_t m_nBytesPerPixel;
};


/** Be aware that the notification type is used as 'priority' to pick the next notification */
enum EVRNotificationType
{
	/** Transient notifications are automatically hidden after a period of time set by the user. 
	* They are used for things like information and chat messages that do not require user interaction. */
	EVRNotificationType_Transient = 0,

	/** Persistent notifications are shown to the user until they are hidden by calling RemoveNotification().
	* They are used for things like phone calls and alarms that require user interaction. */
	EVRNotificationType_Persistent = 1,

	/** System notifications are shown no matter what. It is expected, that the ulUserValue is used as ID.
	 * If there is already a system notification in the queue with that ID it is not accepted into the queue
	 * to prevent spamming with system notification */
	EVRNotificationType_Transient_SystemWithUserValue = 2,
};

enum EVRNotificationStyle
{
	/** Creates a notification with minimal external styling. */
	EVRNotificationStyle_None = 0,

	/** Used for notifications about overlay-level status. In Steam this is used for events like downloads completing. */
	EVRNotificationStyle_Application = 100,

	/** Used for notifications about contacts that are unknown or not available. In Steam this is used for friend invitations and offline friends. */
	EVRNotificationStyle_Contact_Disabled = 200,

	/** Used for notifications about contacts that are available but inactive. In Steam this is used for friends that are online but not playing a game. */
	EVRNotificationStyle_Contact_Enabled = 201,

	/** Used for notifications about contacts that are available and active. In Steam this is used for friends that are online and currently running a game. */
	EVRNotificationStyle_Contact_Active = 202,
};

static const uint32_t k_unNotificationTextMaxSize = 256;

typedef uint32_t VRNotificationId;



#pragma pack( pop )

/** Allows notification sources to interact with the VR system
	This current interface is not yet implemented. Do not use yet. */
class IVRNotifications
{
public:
	/** Create a notification and enqueue it to be shown to the user.
	* An overlay handle is required to create a notification, as otherwise it would be impossible for a user to act on it.
	* To create a two-line notification, use a line break ('\n') to split the text into two lines.
	* The pImage argument may be NULL, in which case the specified overlay's icon will be used instead. */
	virtual EVRNotificationError CreateNotification( VROverlayHandle_t ulOverlayHandle, uint64_t ulUserValue, EVRNotificationType type, const char *pchText, EVRNotificationStyle style, const NotificationBitmap_t *pImage, /* out */ VRNotificationId *pNotificationId ) = 0;

	/** Destroy a notification, hiding it first if it currently shown to the user. */
	virtual EVRNotificationError RemoveNotification( VRNotificationId notificationId ) = 0;

};

static const char * const IVRNotifications_Version = "IVRNotifications_002";

} // namespace vr



// ivroverlay.h
namespace vr
{

	/** The maximum length of an overlay key in bytes, counting the terminating null character. */
	static const uint32_t k_unVROverlayMaxKeyLength = 128;

	/** The maximum length of an overlay name in bytes, counting the terminating null character. */
	static const uint32_t k_unVROverlayMaxNameLength = 128;

	/** The maximum number of overlays that can exist in the system at one time. */
	static const uint32_t k_unMaxOverlayCount = 64;

	/** The maximum number of overlay intersection mask primitives per overlay */
	static const uint32_t k_unMaxOverlayIntersectionMaskPrimitivesCount = 32;

	/** Types of input supported by VR Overlays */
	enum VROverlayInputMethod
	{
		VROverlayInputMethod_None		= 0, // No input events will be generated automatically for this overlay
		VROverlayInputMethod_Mouse		= 1, // Tracked controllers will get mouse events automatically
		VROverlayInputMethod_DualAnalog = 2, // Analog inputs from tracked controllers are turned into DualAnalog events
	};

	/** Allows the caller to figure out which overlay transform getter to call. */
	enum VROverlayTransformType
	{
		VROverlayTransform_Absolute					= 0,
		VROverlayTransform_TrackedDeviceRelative	= 1,
		VROverlayTransform_SystemOverlay			= 2,
		VROverlayTransform_TrackedComponent 		= 3,
	};

	/** Overlay control settings */
	enum VROverlayFlags
	{
		VROverlayFlags_None			= 0,

		// The following only take effect when rendered using the high quality render path (see SetHighQualityOverlay).
		VROverlayFlags_Curved		= 1,
		VROverlayFlags_RGSS4X		= 2,

		// Set this flag on a dashboard overlay to prevent a tab from showing up for that overlay
		VROverlayFlags_NoDashboardTab = 3,

		// Set this flag on a dashboard that is able to deal with gamepad focus events
		VROverlayFlags_AcceptsGamepadEvents = 4,

		// Indicates that the overlay should dim/brighten to show gamepad focus
		VROverlayFlags_ShowGamepadFocus = 5,

		// When in VROverlayInputMethod_Mouse you can optionally enable sending VRScroll_t 
		VROverlayFlags_SendVRScrollEvents = 6,
		VROverlayFlags_SendVRTouchpadEvents = 7,

		// If set this will render a vertical scroll wheel on the primary controller, 
		//  only needed if not using VROverlayFlags_SendVRScrollEvents but you still want to represent a scroll wheel
		VROverlayFlags_ShowTouchPadScrollWheel = 8,

		// If this is set ownership and render access to the overlay are transferred 
		// to the new scene process on a call to IVRApplications::LaunchInternalProcess
		VROverlayFlags_TransferOwnershipToInternalProcess = 9,

		// If set, renders 50% of the texture in each eye, side by side
		VROverlayFlags_SideBySide_Parallel = 10, // Texture is left/right
		VROverlayFlags_SideBySide_Crossed = 11, // Texture is crossed and right/left

		VROverlayFlags_Panorama = 12, // Texture is a panorama
		VROverlayFlags_StereoPanorama = 13, // Texture is a stereo panorama

		// If this is set on an overlay owned by the scene application that overlay
		// will be sorted with the "Other" overlays on top of all other scene overlays
		VROverlayFlags_SortWithNonSceneOverlays = 14,

		// If set, the overlay will be shown in the dashboard, otherwise it will be hidden.
		VROverlayFlags_VisibleInDashboard = 15,

		// If this is set and the overlay's input method is not none, the system-wide laser mouse
		// mode will be activated whenever this overlay is visible.
		VROverlayFlags_MakeOverlaysInteractiveIfVisible = 16,
	};

	enum VRMessageOverlayResponse
	{
		VRMessageOverlayResponse_ButtonPress_0 = 0,
		VRMessageOverlayResponse_ButtonPress_1 = 1,
		VRMessageOverlayResponse_ButtonPress_2 = 2,
		VRMessageOverlayResponse_ButtonPress_3 = 3,
		VRMessageOverlayResponse_CouldntFindSystemOverlay = 4,
		VRMessageOverlayResponse_CouldntFindOrCreateClientOverlay= 5,
		VRMessageOverlayResponse_ApplicationQuit = 6
	};

	struct VROverlayIntersectionParams_t
	{
		HmdVector3_t vSource;
		HmdVector3_t vDirection;
		ETrackingUniverseOrigin eOrigin;
	};

	struct VROverlayIntersectionResults_t
	{
		HmdVector3_t vPoint;
		HmdVector3_t vNormal;
		HmdVector2_t vUVs;
		float fDistance;
	};

	// Input modes for the Big Picture gamepad text entry
	enum EGamepadTextInputMode
	{
		k_EGamepadTextInputModeNormal = 0,
		k_EGamepadTextInputModePassword = 1,
		k_EGamepadTextInputModeSubmit = 2,
	};

	// Controls number of allowed lines for the Big Picture gamepad text entry
	enum EGamepadTextInputLineMode
	{
		k_EGamepadTextInputLineModeSingleLine = 0,
		k_EGamepadTextInputLineModeMultipleLines = 1
	};

	/** Directions for changing focus between overlays with the gamepad */
	enum EOverlayDirection
	{
		OverlayDirection_Up = 0,
		OverlayDirection_Down = 1,
		OverlayDirection_Left = 2,
		OverlayDirection_Right = 3,
		
		OverlayDirection_Count = 4,
	};

	enum EVROverlayIntersectionMaskPrimitiveType
	{
		OverlayIntersectionPrimitiveType_Rectangle,
		OverlayIntersectionPrimitiveType_Circle,
	};

	struct IntersectionMaskRectangle_t
	{
		float m_flTopLeftX;
		float m_flTopLeftY;
		float m_flWidth;
		float m_flHeight;
	};

	struct IntersectionMaskCircle_t
	{
		float m_flCenterX;
		float m_flCenterY;
		float m_flRadius;
	};

	/** NOTE!!! If you change this you MUST manually update openvr_interop.cs.py and openvr_api_flat.h.py */
	typedef union
	{
		IntersectionMaskRectangle_t m_Rectangle;
		IntersectionMaskCircle_t m_Circle;
	} VROverlayIntersectionMaskPrimitive_Data_t;

	struct VROverlayIntersectionMaskPrimitive_t
	{
		EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;
		VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;
	};

	class IVROverlay
	{
	public:

		// ---------------------------------------------
		// Overlay management methods
		// ---------------------------------------------

		/** Finds an existing overlay with the specified key. */
		virtual EVROverlayError FindOverlay( const char *pchOverlayKey, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Creates a new named overlay. All overlays start hidden and with default settings. */
		virtual EVROverlayError CreateOverlay( const char *pchOverlayKey, const char *pchOverlayName, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Destroys the specified overlay. When an application calls VR_Shutdown all overlays created by that app are
		* automatically destroyed. */
		virtual EVROverlayError DestroyOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Specify which overlay to use the high quality render path.  This overlay will be composited in during the distortion pass which
		* results in it drawing on top of everything else, but also at a higher quality as it samples the source texture directly rather than
		* rasterizing into each eye's render texture first.  Because if this, only one of these is supported at any given time.  It is most useful
		* for overlays that are expected to take up most of the user's view (e.g. streaming video).
		* This mode does not support mouse input to your overlay. */
		virtual EVROverlayError SetHighQualityOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Returns the overlay handle of the current overlay being rendered using the single high quality overlay render path.
		* Otherwise it will return k_ulOverlayHandleInvalid. */
		virtual vr::VROverlayHandle_t GetHighQualityOverlay() = 0;

		/** Fills the provided buffer with the string key of the overlay. Returns the size of buffer required to store the key, including
		* the terminating null character. k_unVROverlayMaxKeyLength will be enough bytes to fit the string. */
		virtual uint32_t GetOverlayKey( VROverlayHandle_t ulOverlayHandle, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, EVROverlayError *pError = 0L ) = 0;

		/** Fills the provided buffer with the friendly name of the overlay. Returns the size of buffer required to store the key, including
		* the terminating null character. k_unVROverlayMaxNameLength will be enough bytes to fit the string. */
		virtual uint32_t GetOverlayName( VROverlayHandle_t ulOverlayHandle, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, EVROverlayError *pError = 0L ) = 0;

		/** set the name to use for this overlay */
		virtual EVROverlayError SetOverlayName( VROverlayHandle_t ulOverlayHandle, const char *pchName ) = 0;

		/** Gets the raw image data from an overlay. Overlay image data is always returned as RGBA data, 4 bytes per pixel. If the buffer is not large enough, width and height 
		* will be set and VROverlayError_ArrayTooSmall is returned. */
		virtual EVROverlayError GetOverlayImageData( VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight ) = 0;

		/** returns a string that corresponds with the specified overlay error. The string will be the name 
		* of the error enum value for all valid error codes */
		virtual const char *GetOverlayErrorNameFromEnum( EVROverlayError error ) = 0;

		// ---------------------------------------------
		// Overlay rendering methods
		// ---------------------------------------------

		/** Sets the pid that is allowed to render to this overlay (the creator pid is always allow to render),
		*	by default this is the pid of the process that made the overlay */
		virtual EVROverlayError SetOverlayRenderingPid( VROverlayHandle_t ulOverlayHandle, uint32_t unPID ) = 0;

		/** Gets the pid that is allowed to render to this overlay */
		virtual uint32_t GetOverlayRenderingPid( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Specify flag setting for a given overlay */
		virtual EVROverlayError SetOverlayFlag( VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled ) = 0;

		/** Sets flag setting for a given overlay */
		virtual EVROverlayError GetOverlayFlag( VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled ) = 0;

		/** Sets the color tint of the overlay quad. Use 0.0 to 1.0 per channel. */
		virtual EVROverlayError SetOverlayColor( VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue ) = 0;

		/** Gets the color tint of the overlay quad. */
		virtual EVROverlayError GetOverlayColor( VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue ) = 0;

		/** Sets the alpha of the overlay quad. Use 1.0 for 100 percent opacity to 0.0 for 0 percent opacity. */
		virtual EVROverlayError SetOverlayAlpha( VROverlayHandle_t ulOverlayHandle, float fAlpha ) = 0;

		/** Gets the alpha of the overlay quad. By default overlays are rendering at 100 percent alpha (1.0). */
		virtual EVROverlayError GetOverlayAlpha( VROverlayHandle_t ulOverlayHandle, float *pfAlpha ) = 0;

		/** Sets the aspect ratio of the texels in the overlay. 1.0 means the texels are square. 2.0 means the texels
		* are twice as wide as they are tall. Defaults to 1.0. */
		virtual EVROverlayError SetOverlayTexelAspect( VROverlayHandle_t ulOverlayHandle, float fTexelAspect ) = 0;

		/** Gets the aspect ratio of the texels in the overlay. Defaults to 1.0 */
		virtual EVROverlayError GetOverlayTexelAspect( VROverlayHandle_t ulOverlayHandle, float *pfTexelAspect ) = 0;

		/** Sets the rendering sort order for the overlay. Overlays are rendered this order:
		*      Overlays owned by the scene application
		*      Overlays owned by some other application
		*
		*	Within a category overlays are rendered lowest sort order to highest sort order. Overlays with the same 
		*	sort order are rendered back to front base on distance from the HMD.
		*
		*	Sort order defaults to 0. */
		virtual EVROverlayError SetOverlaySortOrder( VROverlayHandle_t ulOverlayHandle, uint32_t unSortOrder ) = 0;

		/** Gets the sort order of the overlay. See SetOverlaySortOrder for how this works. */
		virtual EVROverlayError GetOverlaySortOrder( VROverlayHandle_t ulOverlayHandle, uint32_t *punSortOrder ) = 0;

		/** Sets the width of the overlay quad in meters. By default overlays are rendered on a quad that is 1 meter across */
		virtual EVROverlayError SetOverlayWidthInMeters( VROverlayHandle_t ulOverlayHandle, float fWidthInMeters ) = 0;

		/** Returns the width of the overlay quad in meters. By default overlays are rendered on a quad that is 1 meter across */
		virtual EVROverlayError GetOverlayWidthInMeters( VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters ) = 0;

		/** For high-quality curved overlays only, sets the distance range in meters from the overlay used to automatically curve
		* the surface around the viewer.  Min is distance is when the surface will be most curved.  Max is when least curved. */
		virtual EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters( VROverlayHandle_t ulOverlayHandle, float fMinDistanceInMeters, float fMaxDistanceInMeters ) = 0;

		/** For high-quality curved overlays only, gets the distance range in meters from the overlay used to automatically curve
		* the surface around the viewer.  Min is distance is when the surface will be most curved.  Max is when least curved. */
		virtual EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters( VROverlayHandle_t ulOverlayHandle, float *pfMinDistanceInMeters, float *pfMaxDistanceInMeters ) = 0;

		/** Sets the colorspace the overlay texture's data is in.  Defaults to 'auto'.
		* If the texture needs to be resolved, you should call SetOverlayTexture with the appropriate colorspace instead. */
		virtual EVROverlayError SetOverlayTextureColorSpace( VROverlayHandle_t ulOverlayHandle, EColorSpace eTextureColorSpace ) = 0;

		/** Gets the overlay's current colorspace setting. */
		virtual EVROverlayError GetOverlayTextureColorSpace( VROverlayHandle_t ulOverlayHandle, EColorSpace *peTextureColorSpace ) = 0;

		/** Sets the part of the texture to use for the overlay. UV Min is the upper left corner and UV Max is the lower right corner. */
		virtual EVROverlayError SetOverlayTextureBounds( VROverlayHandle_t ulOverlayHandle, const VRTextureBounds_t *pOverlayTextureBounds ) = 0;

		/** Gets the part of the texture to use for the overlay. UV Min is the upper left corner and UV Max is the lower right corner. */
		virtual EVROverlayError GetOverlayTextureBounds( VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds ) = 0;

		/** Gets render model to draw behind this overlay */
		virtual uint32_t GetOverlayRenderModel( vr::VROverlayHandle_t ulOverlayHandle, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, HmdColor_t *pColor, vr::EVROverlayError *pError ) = 0;

		/** Sets render model to draw behind this overlay and the vertex color to use, pass null for pColor to match the overlays vertex color. 
			The model is scaled by the same amount as the overlay, with a default of 1m. */
		virtual vr::EVROverlayError SetOverlayRenderModel( vr::VROverlayHandle_t ulOverlayHandle, const char *pchRenderModel, const HmdColor_t *pColor ) = 0;

		/** Returns the transform type of this overlay. */
		virtual EVROverlayError GetOverlayTransformType( VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType ) = 0;

		/** Sets the transform to absolute tracking origin. */
		virtual EVROverlayError SetOverlayTransformAbsolute( VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform ) = 0;

		/** Gets the transform if it is absolute. Returns an error if the transform is some other type. */
		virtual EVROverlayError GetOverlayTransformAbsolute( VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform ) = 0;

		/** Sets the transform to relative to the transform of the specified tracked device. */
		virtual EVROverlayError SetOverlayTransformTrackedDeviceRelative( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform ) = 0;

		/** Gets the transform if it is relative to a tracked device. Returns an error if the transform is some other type. */
		virtual EVROverlayError GetOverlayTransformTrackedDeviceRelative( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform ) = 0;

		/** Sets the transform to draw the overlay on a rendermodel component mesh instead of a quad. This will only draw when the system is
		* drawing the device. Overlays with this transform type cannot receive mouse events. */
		virtual EVROverlayError SetOverlayTransformTrackedDeviceComponent( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unDeviceIndex, const char *pchComponentName ) = 0;

		/** Gets the transform information when the overlay is rendering on a component. */
		virtual EVROverlayError GetOverlayTransformTrackedDeviceComponent( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punDeviceIndex, VR_OUT_STRING() char *pchComponentName, uint32_t unComponentNameSize ) = 0;

		/** Gets the transform if it is relative to another overlay. Returns an error if the transform is some other type. */
		virtual vr::EVROverlayError GetOverlayTransformOverlayRelative( VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t *ulOverlayHandleParent, HmdMatrix34_t *pmatParentOverlayToOverlayTransform ) = 0;
		
		/** Sets the transform to relative to the transform of the specified overlay. This overlays visibility will also track the parents visibility */
		virtual vr::EVROverlayError SetOverlayTransformOverlayRelative( VROverlayHandle_t ulOverlayHandle, VROverlayHandle_t ulOverlayHandleParent, const HmdMatrix34_t *pmatParentOverlayToOverlayTransform ) = 0;

		/** Shows the VR overlay.  For dashboard overlays, only the Dashboard Manager is allowed to call this. */
		virtual EVROverlayError ShowOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Hides the VR overlay.  For dashboard overlays, only the Dashboard Manager is allowed to call this. */
		virtual EVROverlayError HideOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Returns true if the overlay is visible. */
		virtual bool IsOverlayVisible( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Get the transform in 3d space associated with a specific 2d point in the overlay's coordinate space (where 0,0 is the lower left). -Z points out of the overlay */
		virtual EVROverlayError GetTransformForOverlayCoordinates( VROverlayHandle_t ulOverlayHandle, ETrackingUniverseOrigin eTrackingOrigin, HmdVector2_t coordinatesInOverlay, HmdMatrix34_t *pmatTransform ) = 0;

		// ---------------------------------------------
		// Overlay input methods
		// ---------------------------------------------

		/** Returns true and fills the event with the next event on the overlay's event queue, if there is one. 
		* If there are no events this method returns false. uncbVREvent should be the size in bytes of the VREvent_t struct */
		virtual bool PollNextOverlayEvent( VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent, uint32_t uncbVREvent ) = 0;

		/** Returns the current input settings for the specified overlay. */
		virtual EVROverlayError GetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod ) = 0;

		/** Sets the input settings for the specified overlay. */
		virtual EVROverlayError SetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod ) = 0;

		/** Gets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels. */
		virtual EVROverlayError GetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale ) = 0;

		/** Sets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels (not in world space). */
		virtual EVROverlayError SetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale ) = 0;

		/** Computes the overlay-space pixel coordinates of where the ray intersects the overlay with the
		* specified settings. Returns false if there is no intersection. */
		virtual bool ComputeOverlayIntersection( VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults ) = 0;

		/** Returns true if the specified overlay is the hover target. An overlay is the hover target when it is the last overlay "moused over" 
		* by the virtual mouse pointer */
		virtual bool IsHoverTargetOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Returns the current Gamepad focus overlay */
		virtual vr::VROverlayHandle_t GetGamepadFocusOverlay() = 0;

		/** Sets the current Gamepad focus overlay */
		virtual EVROverlayError SetGamepadFocusOverlay( VROverlayHandle_t ulNewFocusOverlay ) = 0;

		/** Sets an overlay's neighbor. This will also set the neighbor of the "to" overlay
		* to point back to the "from" overlay. If an overlay's neighbor is set to invalid both
		* ends will be cleared */
		virtual EVROverlayError SetOverlayNeighbor( EOverlayDirection eDirection, VROverlayHandle_t ulFrom, VROverlayHandle_t ulTo ) = 0;

		/** Changes the Gamepad focus from one overlay to one of its neighbors. Returns VROverlayError_NoNeighbor if there is no
		* neighbor in that direction */
		virtual EVROverlayError MoveGamepadFocusToNeighbor( EOverlayDirection eDirection, VROverlayHandle_t ulFrom ) = 0;

		/** Sets the analog input to Dual Analog coordinate scale for the specified overlay. */
		virtual EVROverlayError SetOverlayDualAnalogTransform( VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, const HmdVector2_t *pvCenter, float fRadius ) = 0;

		/** Gets the analog input to Dual Analog coordinate scale for the specified overlay. */
		virtual EVROverlayError GetOverlayDualAnalogTransform( VROverlayHandle_t ulOverlay, EDualAnalogWhich eWhich, HmdVector2_t *pvCenter, float *pfRadius ) = 0;

		// ---------------------------------------------
		// Overlay texture methods
		// ---------------------------------------------

		/** Texture to draw for the overlay. This function can only be called by the overlay's creator or renderer process (see SetOverlayRenderingPid) .
		*
		* OpenGL dirty state:
		*	glBindTexture
		*/
		virtual EVROverlayError SetOverlayTexture( VROverlayHandle_t ulOverlayHandle, const Texture_t *pTexture ) = 0;

		/** Use this to tell the overlay system to release the texture set for this overlay. */
		virtual EVROverlayError ClearOverlayTexture( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Separate interface for providing the data as a stream of bytes, but there is an upper bound on data 
		* that can be sent. This function can only be called by the overlay's renderer process. */
		virtual EVROverlayError SetOverlayRaw( VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth ) = 0;

		/** Separate interface for providing the image through a filename: can be png or jpg, and should not be bigger than 1920x1080.
		* This function can only be called by the overlay's renderer process */
		virtual EVROverlayError SetOverlayFromFile( VROverlayHandle_t ulOverlayHandle, const char *pchFilePath ) = 0;

		/** Get the native texture handle/device for an overlay you have created.
		* On windows this handle will be a ID3D11ShaderResourceView with a ID3D11Texture2D bound.
		*
		* The texture will always be sized to match the backing texture you supplied in SetOverlayTexture above.
		*
		* You MUST call ReleaseNativeOverlayHandle() with pNativeTextureHandle once you are done with this texture.
		*
		* pNativeTextureHandle is an OUTPUT, it will be a pointer to a ID3D11ShaderResourceView *.
		* pNativeTextureRef is an INPUT and should be a ID3D11Resource *. The device used by pNativeTextureRef will be used to bind pNativeTextureHandle.
		*/
		virtual EVROverlayError GetOverlayTexture( VROverlayHandle_t ulOverlayHandle, void **pNativeTextureHandle, void *pNativeTextureRef, uint32_t *pWidth, uint32_t *pHeight, uint32_t *pNativeFormat, ETextureType *pAPIType, EColorSpace *pColorSpace, VRTextureBounds_t *pTextureBounds ) = 0;

		/** Release the pNativeTextureHandle provided from the GetOverlayTexture call, this allows the system to free the underlying GPU resources for this object,
		* so only do it once you stop rendering this texture.
		*/
		virtual EVROverlayError ReleaseNativeOverlayHandle( VROverlayHandle_t ulOverlayHandle, void *pNativeTextureHandle ) = 0;

		/** Get the size of the overlay texture */
		virtual EVROverlayError GetOverlayTextureSize( VROverlayHandle_t ulOverlayHandle, uint32_t *pWidth, uint32_t *pHeight ) = 0;

		// ----------------------------------------------
		// Dashboard Overlay Methods
		// ----------------------------------------------

		/** Creates a dashboard overlay and returns its handle */
		virtual EVROverlayError CreateDashboardOverlay( const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t *pThumbnailHandle ) = 0;

		/** Returns true if the dashboard is visible */
		virtual bool IsDashboardVisible() = 0;

		/** returns true if the dashboard is visible and the specified overlay is the active system Overlay */
		virtual bool IsActiveDashboardOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Sets the dashboard overlay to only appear when the specified process ID has scene focus */
		virtual EVROverlayError SetDashboardOverlaySceneProcess( VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId ) = 0;

		/** Gets the process ID that this dashboard overlay requires to have scene focus */
		virtual EVROverlayError GetDashboardOverlaySceneProcess( VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId ) = 0;

		/** Shows the dashboard. */
		virtual void ShowDashboard( const char *pchOverlayToShow ) = 0;

		/** Returns the tracked device that has the laser pointer in the dashboard */
		virtual vr::TrackedDeviceIndex_t GetPrimaryDashboardDevice() = 0;

		// ---------------------------------------------
		// Keyboard methods
		// ---------------------------------------------
		
		/** Show the virtual keyboard to accept input **/
		virtual EVROverlayError ShowKeyboard( EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue ) = 0;

		virtual EVROverlayError ShowKeyboardForOverlay( VROverlayHandle_t ulOverlayHandle, EGamepadTextInputMode eInputMode, EGamepadTextInputLineMode eLineInputMode, const char *pchDescription, uint32_t unCharMax, const char *pchExistingText, bool bUseMinimalMode, uint64_t uUserValue ) = 0;

		/** Get the text that was entered into the text input **/
		virtual uint32_t GetKeyboardText( VR_OUT_STRING() char *pchText, uint32_t cchText ) = 0;

		/** Hide the virtual keyboard **/
		virtual void HideKeyboard() = 0;

		/** Set the position of the keyboard in world space **/
		virtual void SetKeyboardTransformAbsolute( ETrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToKeyboardTransform ) = 0;

		/** Set the position of the keyboard in overlay space by telling it to avoid a rectangle in the overlay. Rectangle coords have (0,0) in the bottom left **/
		virtual void SetKeyboardPositionForOverlay( VROverlayHandle_t ulOverlayHandle, HmdRect2_t avoidRect ) = 0;

		// ---------------------------------------------
		// Overlay input methods
		// ---------------------------------------------

		/** Sets a list of primitives to be used for controller ray intersection
		* typically the size of the underlying UI in pixels (not in world space). */
		virtual EVROverlayError SetOverlayIntersectionMask( VROverlayHandle_t ulOverlayHandle, VROverlayIntersectionMaskPrimitive_t *pMaskPrimitives, uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize = sizeof( VROverlayIntersectionMaskPrimitive_t ) ) = 0;

		virtual EVROverlayError GetOverlayFlags( VROverlayHandle_t ulOverlayHandle, uint32_t *pFlags ) = 0;

		// ---------------------------------------------
		// Message box methods
		// ---------------------------------------------

		/** Show the message overlay. This will block and return you a result. **/
		virtual VRMessageOverlayResponse ShowMessageOverlay( const char* pchText, const char* pchCaption, const char* pchButton0Text, const char* pchButton1Text = nullptr, const char* pchButton2Text = nullptr, const char* pchButton3Text = nullptr ) = 0;

		/** If the calling process owns the overlay and it's open, this will close it. **/
		virtual void CloseMessageOverlay() = 0;
	};

	static const char * const IVROverlay_Version = "IVROverlay_019";

} // namespace vr

// ivrrendermodels.h
namespace vr
{

static const char * const k_pch_Controller_Component_GDC2015 = "gdc2015";   // Canonical coordinate system of the gdc 2015 wired controller, provided for backwards compatibility
static const char * const k_pch_Controller_Component_Base = "base";         // For controllers with an unambiguous 'base'.
static const char * const k_pch_Controller_Component_Tip = "tip";           // For controllers with an unambiguous 'tip' (used for 'laser-pointing')
static const char * const k_pch_Controller_Component_HandGrip = "handgrip"; // Neutral, ambidextrous hand-pose when holding controller. On plane between neutrally posed index finger and thumb
static const char * const k_pch_Controller_Component_Status = "status";		// 1:1 aspect ratio status area, with canonical [0,1] uv mapping

#pragma pack( push, 8 )

/** Errors that can occur with the VR compositor */
enum EVRRenderModelError
{
	VRRenderModelError_None = 0,
	VRRenderModelError_Loading = 100,
	VRRenderModelError_NotSupported = 200,
	VRRenderModelError_InvalidArg = 300,
	VRRenderModelError_InvalidModel = 301,
	VRRenderModelError_NoShapes = 302,
	VRRenderModelError_MultipleShapes = 303,
	VRRenderModelError_TooManyVertices = 304,
	VRRenderModelError_MultipleTextures = 305,
	VRRenderModelError_BufferTooSmall = 306,
	VRRenderModelError_NotEnoughNormals = 307,
	VRRenderModelError_NotEnoughTexCoords = 308,

	VRRenderModelError_InvalidTexture = 400,
};

typedef uint32_t VRComponentProperties;

enum EVRComponentProperty
{
	VRComponentProperty_IsStatic = (1 << 0),
	VRComponentProperty_IsVisible = (1 << 1),
	VRComponentProperty_IsTouched = (1 << 2),
	VRComponentProperty_IsPressed = (1 << 3),
	VRComponentProperty_IsScrolled = (1 << 4),
};

/** Describes state information about a render-model component, including transforms and other dynamic properties */
struct RenderModel_ComponentState_t
{
	HmdMatrix34_t mTrackingToComponentRenderModel;  // Transform required when drawing the component render model
	HmdMatrix34_t mTrackingToComponentLocal;        // Transform available for attaching to a local component coordinate system (-Z out from surface )
	VRComponentProperties uProperties;
};

/** A single vertex in a render model */
struct RenderModel_Vertex_t
{
	HmdVector3_t vPosition;		// position in meters in device space
	HmdVector3_t vNormal;
	float rfTextureCoord[2];
};

/** A texture map for use on a render model */
#if defined(__linux__) || defined(__APPLE__) 
// This structure was originally defined mis-packed on Linux, preserved for 
// compatibility. 
#pragma pack( push, 4 )
#endif

struct RenderModel_TextureMap_t
{
	uint16_t unWidth, unHeight; // width and height of the texture map in pixels
	const uint8_t *rubTextureMapData;	// Map texture data. All textures are RGBA with 8 bits per channel per pixel. Data size is width * height * 4ub
};
#if defined(__linux__) || defined(__APPLE__) 
#pragma pack( pop )
#endif

/**  Session unique texture identifier. Rendermodels which share the same texture will have the same id.
IDs <0 denote the texture is not present */

typedef int32_t TextureID_t;

const TextureID_t INVALID_TEXTURE_ID = -1;

#if defined(__linux__) || defined(__APPLE__) 
// This structure was originally defined mis-packed on Linux, preserved for 
// compatibility. 
#pragma pack( push, 4 )
#endif

struct RenderModel_t
{
	const RenderModel_Vertex_t *rVertexData;	// Vertex data for the mesh
	uint32_t unVertexCount;						// Number of vertices in the vertex data
	const uint16_t *rIndexData;					// Indices into the vertex data for each triangle
	uint32_t unTriangleCount;					// Number of triangles in the mesh. Index count is 3 * TriangleCount
	TextureID_t diffuseTextureId;				// Session unique texture identifier. Rendermodels which share the same texture will have the same id. <0 == texture not present
};
#if defined(__linux__) || defined(__APPLE__) 
#pragma pack( pop )
#endif


struct RenderModel_ControllerMode_State_t
{
	bool bScrollWheelVisible; // is this controller currently set to be in a scroll wheel mode
};

#pragma pack( pop )

class IVRRenderModels
{
public:

	/** Loads and returns a render model for use in the application. pchRenderModelName should be a render model name
	* from the Prop_RenderModelName_String property or an absolute path name to a render model on disk. 
	*
	* The resulting render model is valid until VR_Shutdown() is called or until FreeRenderModel() is called. When the 
	* application is finished with the render model it should call FreeRenderModel() to free the memory associated
	* with the model.
	*
	* The method returns VRRenderModelError_Loading while the render model is still being loaded.
	* The method returns VRRenderModelError_None once loaded successfully, otherwise will return an error. */
	virtual EVRRenderModelError LoadRenderModel_Async( const char *pchRenderModelName, RenderModel_t **ppRenderModel ) = 0;

	/** Frees a previously returned render model
	*   It is safe to call this on a null ptr. */
	virtual void FreeRenderModel( RenderModel_t *pRenderModel ) = 0;

	/** Loads and returns a texture for use in the application. */
	virtual EVRRenderModelError LoadTexture_Async( TextureID_t textureId, RenderModel_TextureMap_t **ppTexture ) = 0;

	/** Frees a previously returned texture
	*   It is safe to call this on a null ptr. */
	virtual void FreeTexture( RenderModel_TextureMap_t *pTexture ) = 0;

	/** Creates a D3D11 texture and loads data into it. */
	virtual EVRRenderModelError LoadTextureD3D11_Async( TextureID_t textureId, void *pD3D11Device, void **ppD3D11Texture2D ) = 0;

	/** Helper function to copy the bits into an existing texture. */
	virtual EVRRenderModelError LoadIntoTextureD3D11_Async( TextureID_t textureId, void *pDstTexture ) = 0;

	/** Use this to free textures created with LoadTextureD3D11_Async instead of calling Release on them. */
	virtual void FreeTextureD3D11( void *pD3D11Texture2D ) = 0;

	/** Use this to get the names of available render models.  Index does not correlate to a tracked device index, but
	* is only used for iterating over all available render models.  If the index is out of range, this function will return 0.
	* Otherwise, it will return the size of the buffer required for the name. */
	virtual uint32_t GetRenderModelName( uint32_t unRenderModelIndex, VR_OUT_STRING() char *pchRenderModelName, uint32_t unRenderModelNameLen ) = 0;

	/** Returns the number of available render models. */
	virtual uint32_t GetRenderModelCount() = 0;


	/** Returns the number of components of the specified render model.
	*  Components are useful when client application wish to draw, label, or otherwise interact with components of tracked objects.
	*  Examples controller components:
	*   renderable things such as triggers, buttons
	*   non-renderable things which include coordinate systems such as 'tip', 'base', a neutral controller agnostic hand-pose
	*   If all controller components are enumerated and rendered, it will be equivalent to drawing the traditional render model
	*   Returns 0 if components not supported, >0 otherwise */
	virtual uint32_t GetComponentCount( const char *pchRenderModelName ) = 0;

	/** Use this to get the names of available components.  Index does not correlate to a tracked device index, but
	* is only used for iterating over all available components.  If the index is out of range, this function will return 0.
	* Otherwise, it will return the size of the buffer required for the name. */
	virtual uint32_t GetComponentName( const char *pchRenderModelName, uint32_t unComponentIndex, VR_OUT_STRING( ) char *pchComponentName, uint32_t unComponentNameLen ) = 0;

	/** Get the button mask for all buttons associated with this component
	*   If no buttons (or axes) are associated with this component, return 0
	*   Note: multiple components may be associated with the same button. Ex: two grip buttons on a single controller.
	*   Note: A single component may be associated with multiple buttons. Ex: A trackpad which also provides "D-pad" functionality */
	virtual uint64_t GetComponentButtonMask( const char *pchRenderModelName, const char *pchComponentName ) = 0;

	/** Use this to get the render model name for the specified rendermode/component combination, to be passed to LoadRenderModel.
	* If the component name is out of range, this function will return 0.
	* Otherwise, it will return the size of the buffer required for the name. */
	virtual uint32_t GetComponentRenderModelName( const char *pchRenderModelName, const char *pchComponentName, VR_OUT_STRING( ) char *pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen ) = 0;

	/** Use this to query information about the component, as a function of the controller state.
	*
	* For dynamic controller components (ex: trigger) values will reflect component motions
	* For static components this will return a consistent value independent of the VRControllerState_t
	*
	* If the pchRenderModelName or pchComponentName is invalid, this will return false (and transforms will be set to identity).
	* Otherwise, return true
	* Note: For dynamic objects, visibility may be dynamic. (I.e., true/false will be returned based on controller state and controller mode state ) */
	virtual bool GetComponentStateForDevicePath( const char *pchRenderModelName, const char *pchComponentName, vr::VRInputValueHandle_t devicePath, const vr::RenderModel_ControllerMode_State_t *pState, vr::RenderModel_ComponentState_t *pComponentState ) = 0;

	/** This version of GetComponentState takes a controller state block instead of an action origin. This function is deprecated. You should use the new input system and GetComponentStateForDevicePath instead. */
	virtual bool GetComponentState( const char *pchRenderModelName, const char *pchComponentName, const vr::VRControllerState_t *pControllerState, const RenderModel_ControllerMode_State_t *pState, RenderModel_ComponentState_t *pComponentState ) = 0;

	/** Returns true if the render model has a component with the specified name */
	virtual bool RenderModelHasComponent( const char *pchRenderModelName, const char *pchComponentName ) = 0;

	/** Returns the URL of the thumbnail image for this rendermodel */
	virtual uint32_t GetRenderModelThumbnailURL( const char *pchRenderModelName, VR_OUT_STRING() char *pchThumbnailURL, uint32_t unThumbnailURLLen, vr::EVRRenderModelError *peError ) = 0;

	/** Provides a render model path that will load the unskinned model if the model name provided has been replace by the user. If the model
	* hasn't been replaced the path value will still be a valid path to load the model. Pass this to LoadRenderModel_Async, etc. to load the
	* model. */
	virtual uint32_t GetRenderModelOriginalPath( const char *pchRenderModelName, VR_OUT_STRING() char *pchOriginalPath, uint32_t unOriginalPathLen, vr::EVRRenderModelError *peError ) = 0;

	/** Returns a string for a render model error */
	virtual const char *GetRenderModelErrorNameFromEnum( vr::EVRRenderModelError error ) = 0;
};

static const char * const IVRRenderModels_Version = "IVRRenderModels_006";

}


// ivrextendeddisplay.h
namespace vr
{

	/** NOTE: Use of this interface is not recommended in production applications. It will not work for displays which use
	* direct-to-display mode. Creating our own window is also incompatible with the VR compositor and is not available when the compositor is running. */
	class IVRExtendedDisplay
	{
	public:

		/** Size and position that the window needs to be on the VR display. */
		virtual void GetWindowBounds( int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

		/** Gets the viewport in the frame buffer to draw the output of the distortion into */
		virtual void GetEyeOutputViewport( EVREye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

		/** [D3D10/11 Only]
		* Returns the adapter index and output index that the user should pass into EnumAdapters and EnumOutputs
		* to create the device and swap chain in DX10 and DX11. If an error occurs both indices will be set to -1.
		*/
		virtual void GetDXGIOutputInfo( int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex ) = 0;

	};

	static const char * const IVRExtendedDisplay_Version = "IVRExtendedDisplay_001";

}


// ivrtrackedcamera.h
namespace vr
{

class IVRTrackedCamera
{
public:
	/** Returns a string for an error */
	virtual const char *GetCameraErrorNameFromEnum( vr::EVRTrackedCameraError eCameraError ) = 0;

	/** For convenience, same as tracked property request Prop_HasCamera_Bool */
	virtual vr::EVRTrackedCameraError HasCamera( vr::TrackedDeviceIndex_t nDeviceIndex, bool *pHasCamera ) = 0;

	/** Gets size of the image frame. */
	virtual vr::EVRTrackedCameraError GetCameraFrameSize( vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, uint32_t *pnWidth, uint32_t *pnHeight, uint32_t *pnFrameBufferSize ) = 0;

	virtual vr::EVRTrackedCameraError GetCameraIntrinsics( vr::TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, vr::EVRTrackedCameraFrameType eFrameType, vr::HmdVector2_t *pFocalLength, vr::HmdVector2_t *pCenter ) = 0;

	virtual vr::EVRTrackedCameraError GetCameraProjection( vr::TrackedDeviceIndex_t nDeviceIndex, uint32_t nCameraIndex, vr::EVRTrackedCameraFrameType eFrameType, float flZNear, float flZFar, vr::HmdMatrix44_t *pProjection ) = 0;

	/** Acquiring streaming service permits video streaming for the caller. Releasing hints the system that video services do not need to be maintained for this client.
	* If the camera has not already been activated, a one time spin up may incur some auto exposure as well as initial streaming frame delays.
	* The camera should be considered a global resource accessible for shared consumption but not exclusive to any caller.
	* The camera may go inactive due to lack of active consumers or headset idleness. */
	virtual vr::EVRTrackedCameraError AcquireVideoStreamingService( vr::TrackedDeviceIndex_t nDeviceIndex, vr::TrackedCameraHandle_t *pHandle ) = 0;
	virtual vr::EVRTrackedCameraError ReleaseVideoStreamingService( vr::TrackedCameraHandle_t hTrackedCamera ) = 0;

	/** Copies the image frame into a caller's provided buffer. The image data is currently provided as RGBA data, 4 bytes per pixel.
	* A caller can provide null for the framebuffer or frameheader if not desired. Requesting the frame header first, followed by the frame buffer allows
	* the caller to determine if the frame as advanced per the frame header sequence. 
	* If there is no frame available yet, due to initial camera spinup or re-activation, the error will be VRTrackedCameraError_NoFrameAvailable.
	* Ideally a caller should be polling at ~16ms intervals */
	virtual vr::EVRTrackedCameraError GetVideoStreamFrameBuffer( vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, void *pFrameBuffer, uint32_t nFrameBufferSize, vr::CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize ) = 0;

	/** Gets size of the image frame. */
	virtual vr::EVRTrackedCameraError GetVideoStreamTextureSize( vr::TrackedDeviceIndex_t nDeviceIndex, vr::EVRTrackedCameraFrameType eFrameType, vr::VRTextureBounds_t *pTextureBounds, uint32_t *pnWidth, uint32_t *pnHeight ) = 0; 

	/** Access a shared D3D11 texture for the specified tracked camera stream.
	* The camera frame type VRTrackedCameraFrameType_Undistorted is not supported directly as a shared texture. It is an interior subregion of the shared texture VRTrackedCameraFrameType_MaximumUndistorted.
	* Instead, use GetVideoStreamTextureSize() with VRTrackedCameraFrameType_Undistorted to determine the proper interior subregion bounds along with GetVideoStreamTextureD3D11() with
	* VRTrackedCameraFrameType_MaximumUndistorted to provide the texture. The VRTrackedCameraFrameType_MaximumUndistorted will yield an image where the invalid regions are decoded
	* by the alpha channel having a zero component. The valid regions all have a non-zero alpha component. The subregion as described by VRTrackedCameraFrameType_Undistorted 
	* guarantees a rectangle where all pixels are valid. */
	virtual vr::EVRTrackedCameraError GetVideoStreamTextureD3D11( vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, void *pD3D11DeviceOrResource, void **ppD3D11ShaderResourceView, vr::CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize ) = 0;

	/** Access a shared GL texture for the specified tracked camera stream */
	virtual vr::EVRTrackedCameraError GetVideoStreamTextureGL( vr::TrackedCameraHandle_t hTrackedCamera, vr::EVRTrackedCameraFrameType eFrameType, vr::glUInt_t *pglTextureId, vr::CameraVideoStreamFrameHeader_t *pFrameHeader, uint32_t nFrameHeaderSize ) = 0;
	virtual vr::EVRTrackedCameraError ReleaseVideoStreamTextureGL( vr::TrackedCameraHandle_t hTrackedCamera, vr::glUInt_t glTextureId ) = 0;
};

static const char * const IVRTrackedCamera_Version = "IVRTrackedCamera_005";

} // namespace vr


// ivrscreenshots.h
namespace vr
{

/** Errors that can occur with the VR compositor */
enum EVRScreenshotError
{
	VRScreenshotError_None							= 0,
	VRScreenshotError_RequestFailed					= 1,
	VRScreenshotError_IncompatibleVersion			= 100,
	VRScreenshotError_NotFound						= 101,
	VRScreenshotError_BufferTooSmall				= 102,
	VRScreenshotError_ScreenshotAlreadyInProgress	= 108,
};

/** Allows the application to generate screenshots */
class IVRScreenshots
{
public:
	/** Request a screenshot of the requested type.
	 *  A request of the VRScreenshotType_Stereo type will always
	 *  work. Other types will depend on the underlying application
	 *  support.
	 *  The first file name is for the preview image and should be a
	 *  regular screenshot (ideally from the left eye). The second
	 *  is the VR screenshot in the correct format. They should be
	 *  in the same aspect ratio.  Formats per type:
	 *  VRScreenshotType_Mono: the VR filename is ignored (can be
	 *  nullptr), this is a normal flat single shot.
	 *  VRScreenshotType_Stereo:  The VR image should be a
	 *  side-by-side with the left eye image on the left.
	 *  VRScreenshotType_Cubemap: The VR image should be six square
	 *  images composited horizontally.
	 *  VRScreenshotType_StereoPanorama: above/below with left eye
	 *  panorama being the above image.  Image is typically square
	 *  with the panorama being 2x horizontal.
	 *  
	 *  Note that the VR dashboard will call this function when
	 *  the user presses the screenshot binding (currently System
	 *  Button + Trigger).  If Steam is running, the destination
	 *  file names will be in %TEMP% and will be copied into
	 *  Steam's screenshot library for the running application
	 *  once SubmitScreenshot() is called.
	 *  If Steam is not running, the paths will be in the user's
	 *  documents folder under Documents\SteamVR\Screenshots.
	 *  Other VR applications can call this to initiate a
	 *  screenshot outside of user control.
	 *  The destination file names do not need an extension,
	 *  will be replaced with the correct one for the format
	 *  which is currently .png. */
	virtual vr::EVRScreenshotError RequestScreenshot( vr::ScreenshotHandle_t *pOutScreenshotHandle, vr::EVRScreenshotType type, const char *pchPreviewFilename, const char *pchVRFilename ) = 0;

	/** Called by the running VR application to indicate that it
	 *  wishes to be in charge of screenshots.  If the
	 *  application does not call this, the Compositor will only
	 *  support VRScreenshotType_Stereo screenshots that will be
	 *  captured without notification to the running app.
	 *  Once hooked your application will receive a
	 *  VREvent_RequestScreenshot event when the user presses the
	 *  buttons to take a screenshot. */
	virtual vr::EVRScreenshotError HookScreenshot( VR_ARRAY_COUNT( numTypes ) const vr::EVRScreenshotType *pSupportedTypes, int numTypes ) = 0;

	/** When your application receives a
	 *  VREvent_RequestScreenshot event, call these functions to get
	 *  the details of the screenshot request. */
	virtual vr::EVRScreenshotType GetScreenshotPropertyType( vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotError *pError ) = 0;

	/** Get the filename for the preview or vr image (see
	 *  vr::EScreenshotPropertyFilenames).  The return value is
	 *  the size of the string.   */
 	virtual uint32_t GetScreenshotPropertyFilename( vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotPropertyFilenames filenameType, VR_OUT_STRING() char *pchFilename, uint32_t cchFilename, vr::EVRScreenshotError *pError ) = 0;

	/** Call this if the application is taking the screen shot
	 *  will take more than a few ms processing. This will result
	 *  in an overlay being presented that shows a completion
	 *  bar. */
	virtual vr::EVRScreenshotError UpdateScreenshotProgress( vr::ScreenshotHandle_t screenshotHandle, float flProgress ) = 0;

	/** Tells the compositor to take an internal screenshot of
	 *  type VRScreenshotType_Stereo. It will take the current
	 *  submitted scene textures of the running application and
	 *  write them into the preview image and a side-by-side file
	 *  for the VR image.
	 *  This is similar to request screenshot, but doesn't ever
	 *  talk to the application, just takes the shot and submits. */
	virtual vr::EVRScreenshotError TakeStereoScreenshot( vr::ScreenshotHandle_t *pOutScreenshotHandle, const char *pchPreviewFilename, const char *pchVRFilename ) = 0;

	/** Submit the completed screenshot.  If Steam is running
	 *  this will call into the Steam client and upload the
	 *  screenshot to the screenshots section of the library for
	 *  the running application.  If Steam is not running, this
	 *  function will display a notification to the user that the
	 *  screenshot was taken. The paths should be full paths with
	 *  extensions.
	 *  File paths should be absolute including extensions.
	 *  screenshotHandle can be k_unScreenshotHandleInvalid if this
	 *  was a new shot taking by the app to be saved and not
	 *  initiated by a user (achievement earned or something) */
	virtual vr::EVRScreenshotError SubmitScreenshot( vr::ScreenshotHandle_t screenshotHandle, vr::EVRScreenshotType type, const char *pchSourcePreviewFilename, const char *pchSourceVRFilename ) = 0;
};

static const char * const IVRScreenshots_Version = "IVRScreenshots_001";

} // namespace vr



// ivrresources.h
namespace vr
{

class IVRResources
{
public:

	// ------------------------------------
	// Shared Resource Methods
	// ------------------------------------

	/** Loads the specified resource into the provided buffer if large enough.
	* Returns the size in bytes of the buffer required to hold the specified resource. */
	virtual uint32_t LoadSharedResource( const char *pchResourceName, char *pchBuffer, uint32_t unBufferLen ) = 0;

	/** Provides the full path to the specified resource. Resource names can include named directories for
	* drivers and other things, and this resolves all of those and returns the actual physical path. 
	* pchResourceTypeDirectory is the subdirectory of resources to look in. */
	virtual uint32_t GetResourceFullPath( const char *pchResourceName, const char *pchResourceTypeDirectory, VR_OUT_STRING() char *pchPathBuffer, uint32_t unBufferLen ) = 0;
};

static const char * const IVRResources_Version = "IVRResources_001";


}
// ivrdrivermanager.h
namespace vr
{

class IVRDriverManager
{
public:
	virtual uint32_t GetDriverCount() const = 0;

	/** Returns the length of the number of bytes necessary to hold this string including the trailing null. */
	virtual uint32_t GetDriverName( vr::DriverId_t nDriver, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize ) = 0;

	virtual DriverHandle_t GetDriverHandle( const char *pchDriverName ) = 0;
};

static const char * const IVRDriverManager_Version = "IVRDriverManager_001";

} // namespace vr



// ivrinput.h
namespace vr
{
	static const uint32_t k_unMaxActionNameLength = 64;
	static const uint32_t k_unMaxActionSetNameLength = 64;
	static const uint32_t k_unMaxActionOriginCount = 16;
	static const uint32_t k_unMaxBoneNameLength = 32;

	enum EVRSkeletalTransformSpace
	{
		VRSkeletalTransformSpace_Model = 0, 
		VRSkeletalTransformSpace_Parent = 1
	};

	enum EVRSkeletalReferencePose
	{
		VRSkeletalReferencePose_BindPose = 0,
		VRSkeletalReferencePose_OpenHand,
		VRSkeletalReferencePose_Fist,
		VRSkeletalReferencePose_GripLimit
	};

	enum EVRFinger
	{
		VRFinger_Thumb = 0,
		VRFinger_Index,
		VRFinger_Middle,
		VRFinger_Ring,
		VRFinger_Pinky,
		VRFinger_Count
	};

	enum EVRFingerSplay
	{
		VRFingerSplay_Thumb_Index = 0,
		VRFingerSplay_Index_Middle,
		VRFingerSplay_Middle_Ring,
		VRFingerSplay_Ring_Pinky,
		VRFingerSplay_Count
	};

	enum EVRInputFilterCancelType
	{
		VRInputFilterCancel_Timers = 0,
		VRInputFilterCancel_Momentum = 1,
	};

	enum EVRInputStringBits
	{
		VRInputString_Hand = 0x01,
		VRInputString_ControllerType = 0x02,
		VRInputString_InputSource = 0x04,

		VRInputString_All = 0xFFFFFFFF
	};

	struct InputAnalogActionData_t
	{
		/** Whether or not this action is currently available to be bound in the active action set */
		bool bActive;

		/** The origin that caused this action's current state */
		VRInputValueHandle_t activeOrigin;

		/** The current state of this action; will be delta updates for mouse actions */
		float x, y, z;

		/** Deltas since the previous call to UpdateActionState() */
		float deltaX, deltaY, deltaZ;
	
		/** Time relative to now when this event happened. Will be negative to indicate a past time. */
		float fUpdateTime;
	};

	struct InputDigitalActionData_t
	{
		/** Whether or not this action is currently available to be bound in the active action set */
		bool bActive;

		/** The origin that caused this action's current state */
		VRInputValueHandle_t activeOrigin;

		/** The current state of this action; will be true if currently pressed */
		bool bState;

		/** This is true if the state has changed since the last frame */
		bool bChanged;

		/** Time relative to now when this event happened. Will be negative to indicate a past time. */
		float fUpdateTime;
	};

	struct InputPoseActionData_t
	{
		/** Whether or not this action is currently available to be bound in the active action set */
		bool bActive;

		/** The origin that caused this action's current state */
		VRInputValueHandle_t activeOrigin;

		/** The current state of this action */
		TrackedDevicePose_t pose;
	};

	struct InputSkeletalActionData_t
	{
		/** Whether or not this action is currently available to be bound in the active action set */
		bool bActive;

		/** The origin that caused this action's current state */
		VRInputValueHandle_t activeOrigin;
	};

	struct InputOriginInfo_t
	{
		VRInputValueHandle_t devicePath;
		TrackedDeviceIndex_t trackedDeviceIndex;
		char rchRenderModelComponentName[128];
	};

	struct VRActiveActionSet_t
	{
		/** This is the handle of the action set to activate for this frame. */
		VRActionSetHandle_t ulActionSet;

		/** This is the handle of a device path that this action set should be active for. To
		* activate for all devices, set this to k_ulInvalidInputValueHandle. */
		VRInputValueHandle_t ulRestrictedToDevice;

		/** The action set to activate for all devices other than ulRestrictedDevice. If 
		* ulRestrictedToDevice is set to k_ulInvalidInputValueHandle, this parameter is 
		* ignored. */
		VRActionSetHandle_t ulSecondaryActionSet;

		// This field is ignored
		uint32_t unPadding;

		/** The priority of this action set relative to other action sets. Any inputs
		* bound to a source (e.g. trackpad, joystick, trigger) will disable bindings in
		* other active action sets with a smaller priority. */
		int32_t nPriority;
	};

	/** Contains summary information about the current skeletal pose */
	struct VRSkeletalSummaryData_t
	{
		/** The amount that each finger is 'curled' inwards towards the palm.  In the case of the thumb,
		* this represents how much the thumb is wrapped around the fist.  
		* 0 means straight, 1 means fully curled */
		float	flFingerCurl[ VRFinger_Count ];

		/** The amount that each pair of adjacent fingers are separated.  
		* 0 means the digits are touching, 1 means they are fully separated.
		*/
		float	flFingerSplay[ VRFingerSplay_Count ];
	};


	class IVRInput
	{
	public:

		// ---------------  Handle management   --------------- //

		/** Sets the path to the action manifest JSON file that is used by this application. If this information
		* was set on the Steam partner site, calls to this function are ignored. If the Steam partner site
		* setting and the path provided by this call are different, VRInputError_MismatchedActionManifest is returned. 
		* This call must be made before the first call to UpdateActionState or IVRSystem::PollNextEvent. */
		virtual EVRInputError SetActionManifestPath( const char *pchActionManifestPath ) = 0;

		/** Returns a handle for an action set. This handle is used for all performance-sensitive calls. */
		virtual EVRInputError GetActionSetHandle( const char *pchActionSetName, VRActionSetHandle_t *pHandle ) = 0;

		/** Returns a handle for an action. This handle is used for all performance-sensitive calls. */
		virtual EVRInputError GetActionHandle( const char *pchActionName, VRActionHandle_t *pHandle ) = 0;

		/** Returns a handle for any path in the input system. E.g. /user/hand/right */
		virtual EVRInputError GetInputSourceHandle( const char *pchInputSourcePath, VRInputValueHandle_t  *pHandle ) = 0;

		// --------------- Reading action state ------------------- //

		/** Reads the current state into all actions. After this call, the results of Get*Action calls 
		* will be the same until the next call to UpdateActionState. */
		virtual EVRInputError UpdateActionState( VR_ARRAY_COUNT( unSetCount ) VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount ) = 0;

		/** Reads the state of a digital action given its handle. This will return VRInputError_WrongType if the type of
		* action is something other than digital */
		virtual EVRInputError GetDigitalActionData( VRActionHandle_t action, InputDigitalActionData_t *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice ) = 0;

		/** Reads the state of an analog action given its handle. This will return VRInputError_WrongType if the type of
		* action is something other than analog */
		virtual EVRInputError GetAnalogActionData( VRActionHandle_t action, InputAnalogActionData_t *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice ) = 0;

		/** Reads the state of a pose action given its handle. */
		virtual EVRInputError GetPoseActionData( VRActionHandle_t action, ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, InputPoseActionData_t *pActionData, uint32_t unActionDataSize, VRInputValueHandle_t ulRestrictToDevice ) = 0;

		/** Reads the state of a skeletal action given its handle. */
		virtual EVRInputError GetSkeletalActionData( VRActionHandle_t action, InputSkeletalActionData_t *pActionData, uint32_t unActionDataSize ) = 0;

		// ---------------  Static Skeletal Data ------------------- //

		/** Reads the number of bones in skeleton associated with the given action */
		virtual EVRInputError GetBoneCount( VRActionHandle_t action, uint32_t* pBoneCount ) = 0;

		/** Fills the given array with the index of each bone's parent in the skeleton associated with the given action */
		virtual EVRInputError GetBoneHierarchy( VRActionHandle_t action, VR_ARRAY_COUNT( unIndexArayCount ) BoneIndex_t* pParentIndices, uint32_t unIndexArayCount ) = 0;

		/** Fills the given buffer with the name of the bone at the given index in the skeleton associated with the given action */
		virtual EVRInputError GetBoneName( VRActionHandle_t action, BoneIndex_t nBoneIndex, VR_OUT_STRING() char* pchBoneName, uint32_t unNameBufferSize ) = 0;

		/** Fills the given buffer with the transforms for a specific static skeletal reference pose */
		virtual EVRInputError GetSkeletalReferenceTransforms( VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalReferencePose eReferencePose, VR_ARRAY_COUNT( unTransformArrayCount ) VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount ) = 0;

		/** Reads the level of accuracy to which the controller is able to track the user to recreate a skeletal pose */
		virtual EVRInputError GetSkeletalTrackingLevel( VRActionHandle_t action, EVRSkeletalTrackingLevel* pSkeletalTrackingLevel ) = 0;

		// ---------------  Dynamic Skeletal Data ------------------- //

		/** Reads the state of the skeletal bone data associated with this action and copies it into the given buffer. */
		virtual EVRInputError GetSkeletalBoneData( VRActionHandle_t action, EVRSkeletalTransformSpace eTransformSpace, EVRSkeletalMotionRange eMotionRange, VR_ARRAY_COUNT( unTransformArrayCount ) VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount ) = 0;

		/** Reads summary information about the current pose of the skeleton associated with the given action.   */
		virtual EVRInputError GetSkeletalSummaryData( VRActionHandle_t action, VRSkeletalSummaryData_t * pSkeletalSummaryData ) = 0;

		/** Reads the state of the skeletal bone data in a compressed form that is suitable for
		* sending over the network. The required buffer size will never exceed ( sizeof(VR_BoneTransform_t)*boneCount + 2).
		* Usually the size will be much smaller. */
		virtual EVRInputError GetSkeletalBoneDataCompressed( VRActionHandle_t action, EVRSkeletalMotionRange eMotionRange, VR_OUT_BUFFER_COUNT( unCompressedSize ) void *pvCompressedData, uint32_t unCompressedSize, uint32_t *punRequiredCompressedSize ) = 0;

		/** Turns a compressed buffer from GetSkeletalBoneDataCompressed and turns it back into a bone transform array. */
		virtual EVRInputError DecompressSkeletalBoneData( const void *pvCompressedBuffer, uint32_t unCompressedBufferSize, EVRSkeletalTransformSpace eTransformSpace, VR_ARRAY_COUNT( unTransformArrayCount ) VRBoneTransform_t *pTransformArray, uint32_t unTransformArrayCount ) = 0;

		// --------------- Haptics ------------------- //

		/** Triggers a haptic event as described by the specified action */
		virtual EVRInputError TriggerHapticVibrationAction( VRActionHandle_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, VRInputValueHandle_t ulRestrictToDevice ) = 0;

		// --------------- Action Origins ---------------- //

		/** Retrieve origin handles for an action */
		virtual EVRInputError GetActionOrigins( VRActionSetHandle_t actionSetHandle, VRActionHandle_t digitalActionHandle, VR_ARRAY_COUNT( originOutCount ) VRInputValueHandle_t *originsOut, uint32_t originOutCount ) = 0;

		/** Retrieves the name of the origin in the current language. unStringSectionsToInclude is a bitfield of values in EVRInputStringBits that allows the 
			application to specify which parts of the origin's information it wants a string for. */
		virtual EVRInputError GetOriginLocalizedName( VRInputValueHandle_t origin, VR_OUT_STRING() char *pchNameArray, uint32_t unNameArraySize, int32_t unStringSectionsToInclude ) = 0;

		/** Retrieves useful information for the origin of this action */
		virtual EVRInputError GetOriginTrackedDeviceInfo( VRInputValueHandle_t origin, InputOriginInfo_t *pOriginInfo, uint32_t unOriginInfoSize ) = 0;

		/** Shows the current binding for the action in-headset */
		virtual EVRInputError ShowActionOrigins( VRActionSetHandle_t actionSetHandle, VRActionHandle_t ulActionHandle ) = 0;

		/** Shows the current binding all the actions in the specified action sets */
		virtual EVRInputError ShowBindingsForActionSet( VR_ARRAY_COUNT( unSetCount ) VRActiveActionSet_t *pSets, uint32_t unSizeOfVRSelectedActionSet_t, uint32_t unSetCount, VRInputValueHandle_t originToHighlight ) = 0;
	};

	static const char * const IVRInput_Version = "IVRInput_005";

} // namespace vr

// ivriobuffer.h
namespace vr
{

typedef uint64_t IOBufferHandle_t;
static const uint64_t k_ulInvalidIOBufferHandle = 0;
	
	enum EIOBufferError
	{
		IOBuffer_Success                  = 0,
		IOBuffer_OperationFailed          = 100,
		IOBuffer_InvalidHandle            = 101,
		IOBuffer_InvalidArgument          = 102,
		IOBuffer_PathExists               = 103,
		IOBuffer_PathDoesNotExist         = 104,
		IOBuffer_Permission               = 105,
	};

	enum EIOBufferMode
	{
		IOBufferMode_Read                 = 0x0001,
		IOBufferMode_Write                = 0x0002,
		IOBufferMode_Create               = 0x0200,
	};

	// ----------------------------------------------------------------------------------------------
	// Purpose:
	// ----------------------------------------------------------------------------------------------
	class IVRIOBuffer
	{
	public:
		/** opens an existing or creates a new IOBuffer of unSize bytes */
		virtual vr::EIOBufferError Open( const char *pchPath, vr::EIOBufferMode mode, uint32_t unElementSize, uint32_t unElements, vr::IOBufferHandle_t *pulBuffer ) = 0;
		
		/** closes a previously opened or created buffer */
		virtual vr::EIOBufferError Close( vr::IOBufferHandle_t ulBuffer ) = 0;
		
		/** reads up to unBytes from buffer into *pDst, returning number of bytes read in *punRead */
		virtual vr::EIOBufferError Read( vr::IOBufferHandle_t ulBuffer, void *pDst, uint32_t unBytes, uint32_t *punRead ) = 0;
		
		/** writes unBytes of data from *pSrc into a buffer. */
		virtual vr::EIOBufferError Write( vr::IOBufferHandle_t ulBuffer, void *pSrc, uint32_t unBytes ) = 0;
		
		/** retrieves the property container of an buffer. */
		virtual vr::PropertyContainerHandle_t PropertyContainer( vr::IOBufferHandle_t ulBuffer ) = 0;
	};

	static const char *IVRIOBuffer_Version = "IVRIOBuffer_001";
}

// ivrspatialanchors.h
namespace vr
{
	static const SpatialAnchorHandle_t k_ulInvalidSpatialAnchorHandle = 0;

	struct SpatialAnchorPose_t
	{
		HmdMatrix34_t mAnchorToAbsoluteTracking;
	};

	class IVRSpatialAnchors
	{
	public:

		/** Returns a handle for an spatial anchor described by "descriptor".  On success, pHandle
		* will contain a handle valid for this session.  Caller can wait for an event or occasionally
		* poll GetSpatialAnchorPose() to find the virtual coordinate associated with this anchor. */
		virtual EVRSpatialAnchorError CreateSpatialAnchorFromDescriptor( const char *pchDescriptor, SpatialAnchorHandle_t *pHandleOut ) = 0;

		/** Returns a handle for an new spatial anchor at pPose.  On success, pHandle
		* will contain a handle valid for this session.  Caller can wait for an event or occasionally
		* poll GetSpatialAnchorDescriptor() to find the permanent descriptor for this pose.
		* The result of GetSpatialAnchorPose() may evolve from this initial position if the driver chooses
		* to update it.
		* The anchor will be associated with the driver that provides unDeviceIndex, and the driver may use that specific
		* device as a hint for how to best create the anchor.
		* The eOrigin must match whatever tracking origin you are working in (seated/standing/raw).
		* This should be called when the user is close to (and ideally looking at/interacting with) the target physical
		* location.  At that moment, the driver will have the most information about how to recover that physical point
		* in the future, and the quality of the anchor (when the descriptor is re-used) will be highest.
		* The caller may decide to apply offsets from this initial pose, but is advised to stay relatively close to the 
		* original pose location for highest fidelity. */
		virtual EVRSpatialAnchorError CreateSpatialAnchorFromPose( TrackedDeviceIndex_t unDeviceIndex, ETrackingUniverseOrigin eOrigin, SpatialAnchorPose_t *pPose, SpatialAnchorHandle_t *pHandleOut ) = 0;

		/** Get the pose for a given handle.  This is intended to be cheap enough to call every frame (or fairly often)
		* so that the driver can refine this position when it has more information available. */
		virtual EVRSpatialAnchorError GetSpatialAnchorPose( SpatialAnchorHandle_t unHandle, ETrackingUniverseOrigin eOrigin, SpatialAnchorPose_t *pPoseOut ) = 0;

		/** Get the descriptor for a given handle.  This will be empty for handles where the driver has not
		* yet built a descriptor.  It will be the application-supplied descriptor for previously saved anchors
		* that the application is requesting poses for.  If the driver has called UpdateSpatialAnchorDescriptor()
		* already in this session, it will be the descriptor provided by the driver.
		* Returns true if the descriptor fits into the buffer, else false.  Buffer size should be at least
		* k_unMaxSpatialAnchorDescriptorSize. */
		virtual EVRSpatialAnchorError GetSpatialAnchorDescriptor( SpatialAnchorHandle_t unHandle, VR_OUT_STRING() char *pchDescriptorOut, uint32_t *punDescriptorBufferLenInOut ) = 0;

	};

	static const char * const IVRSpatialAnchors_Version = "IVRSpatialAnchors_001";

} // namespace vr
// End

#endif // _OPENVR_API


namespace vr
{
#if !defined( OPENVR_INTERFACE_INTERNAL )

	/** Finds the active installation of the VR API and initializes it. The provided path must be absolute
	* or relative to the current working directory. These are the local install versions of the equivalent
	* functions in steamvr.h and will work without a local Steam install.
	*
	* This path is to the "root" of the VR API install. That's the directory with
	* the "drivers" directory and a platform (i.e. "win32") directory in it, not the directory with the DLL itself.
	*
	* pStartupInfo is reserved for future use.
	*/
	inline IVRSystem *VR_Init( EVRInitError *peError, EVRApplicationType eApplicationType, const char *pStartupInfo = nullptr );

	/** unloads vrclient.dll. Any interface pointers from the interface are
	* invalid after this point */
	inline void VR_Shutdown();

	/** Returns true if there is an HMD attached. This check is as lightweight as possible and
	* can be called outside of VR_Init/VR_Shutdown. It should be used when an application wants
	* to know if initializing VR is a possibility but isn't ready to take that step yet.
	*/
	VR_INTERFACE bool VR_CALLTYPE VR_IsHmdPresent();

	/** Returns true if the OpenVR runtime is installed. */
	VR_INTERFACE bool VR_CALLTYPE VR_IsRuntimeInstalled();

	/** Returns where the OpenVR runtime is installed. */
	VR_INTERFACE const char *VR_CALLTYPE VR_RuntimePath();

	/** Returns the name of the enum value for an EVRInitError. This function may be called outside of VR_Init()/VR_Shutdown(). */
	VR_INTERFACE const char *VR_CALLTYPE VR_GetVRInitErrorAsSymbol( EVRInitError error );

	/** Returns an English string for an EVRInitError. Applications should call VR_GetVRInitErrorAsSymbol instead and
	* use that as a key to look up their own localized error message. This function may be called outside of VR_Init()/VR_Shutdown(). */
	VR_INTERFACE const char *VR_CALLTYPE VR_GetVRInitErrorAsEnglishDescription( EVRInitError error );

	/** Returns the interface of the specified version. This method must be called after VR_Init. The
	* pointer returned is valid until VR_Shutdown is called.
	*/
	VR_INTERFACE void *VR_CALLTYPE VR_GetGenericInterface( const char *pchInterfaceVersion, EVRInitError *peError );

	/** Returns whether the interface of the specified version exists.
	*/
	VR_INTERFACE bool VR_CALLTYPE VR_IsInterfaceVersionValid( const char *pchInterfaceVersion );

	/** Returns a token that represents whether the VR interface handles need to be reloaded */
	VR_INTERFACE uint32_t VR_CALLTYPE VR_GetInitToken();

	// These typedefs allow old enum names from SDK 0.9.11 to be used in applications.
	// They will go away in the future.
	typedef EVRInitError HmdError;
	typedef EVREye Hmd_Eye;
	typedef EColorSpace ColorSpace;
	typedef ETrackingResult HmdTrackingResult;
	typedef ETrackedDeviceClass TrackedDeviceClass;
	typedef ETrackingUniverseOrigin TrackingUniverseOrigin;
	typedef ETrackedDeviceProperty TrackedDeviceProperty;
	typedef ETrackedPropertyError TrackedPropertyError;
	typedef EVRSubmitFlags VRSubmitFlags_t;
	typedef EVRState VRState_t;
	typedef ECollisionBoundsStyle CollisionBoundsStyle_t;
	typedef EVROverlayError VROverlayError;
	typedef EVRFirmwareError VRFirmwareError;
	typedef EVRCompositorError VRCompositorError;
	typedef EVRScreenshotError VRScreenshotsError;

	inline uint32_t &VRToken()
	{
		static uint32_t token;
		return token;
	}

	class COpenVRContext
	{
	public:
		COpenVRContext() { Clear(); }
		void Clear();

		inline void CheckClear()
		{
			if ( VRToken() != VR_GetInitToken() )
			{
				Clear();
				VRToken() = VR_GetInitToken();
			}
		}

		IVRSystem *VRSystem()
		{
			CheckClear();
			if ( m_pVRSystem == nullptr )
			{
				EVRInitError eError;
				m_pVRSystem = ( IVRSystem * )VR_GetGenericInterface( IVRSystem_Version, &eError );
			}
			return m_pVRSystem;
		}
		IVRChaperone *VRChaperone()
		{
			CheckClear();
			if ( m_pVRChaperone == nullptr )
			{
				EVRInitError eError;
				m_pVRChaperone = ( IVRChaperone * )VR_GetGenericInterface( IVRChaperone_Version, &eError );
			}
			return m_pVRChaperone;
		}

		IVRChaperoneSetup *VRChaperoneSetup()
		{
			CheckClear();
			if ( m_pVRChaperoneSetup == nullptr )
			{
				EVRInitError eError;
				m_pVRChaperoneSetup = ( IVRChaperoneSetup * )VR_GetGenericInterface( IVRChaperoneSetup_Version, &eError );
			}
			return m_pVRChaperoneSetup;
		}

		IVRCompositor *VRCompositor()
		{
			CheckClear();
			if ( m_pVRCompositor == nullptr )
			{
				EVRInitError eError;
				m_pVRCompositor = ( IVRCompositor * )VR_GetGenericInterface( IVRCompositor_Version, &eError );
			}
			return m_pVRCompositor;
		}

		IVROverlay *VROverlay()
		{
			CheckClear();
			if ( m_pVROverlay == nullptr )
			{
				EVRInitError eError;
				m_pVROverlay = ( IVROverlay * )VR_GetGenericInterface( IVROverlay_Version, &eError );
			}
			return m_pVROverlay;
		}

		IVRResources *VRResources()
		{
			CheckClear();
			if ( m_pVRResources == nullptr )
			{
				EVRInitError eError;
				m_pVRResources = (IVRResources *)VR_GetGenericInterface( IVRResources_Version, &eError );
			}
			return m_pVRResources;
		}

		IVRScreenshots *VRScreenshots()
		{
			CheckClear();
			if ( m_pVRScreenshots == nullptr )
			{
				EVRInitError eError;
				m_pVRScreenshots = ( IVRScreenshots * )VR_GetGenericInterface( IVRScreenshots_Version, &eError );
			}
			return m_pVRScreenshots;
		}

		IVRRenderModels *VRRenderModels()
		{
			CheckClear();
			if ( m_pVRRenderModels == nullptr )
			{
				EVRInitError eError;
				m_pVRRenderModels = ( IVRRenderModels * )VR_GetGenericInterface( IVRRenderModels_Version, &eError );
			}
			return m_pVRRenderModels;
		}

		IVRExtendedDisplay *VRExtendedDisplay()
		{
			CheckClear();
			if ( m_pVRExtendedDisplay == nullptr )
			{
				EVRInitError eError;
				m_pVRExtendedDisplay = ( IVRExtendedDisplay * )VR_GetGenericInterface( IVRExtendedDisplay_Version, &eError );
			}
			return m_pVRExtendedDisplay;
		}

		IVRSettings *VRSettings()
		{
			CheckClear();
			if ( m_pVRSettings == nullptr )
			{
				EVRInitError eError;
				m_pVRSettings = ( IVRSettings * )VR_GetGenericInterface( IVRSettings_Version, &eError );
			}
			return m_pVRSettings;
		}

		IVRApplications *VRApplications()
		{
			CheckClear();
			if ( m_pVRApplications == nullptr )
			{
				EVRInitError eError;
				m_pVRApplications = ( IVRApplications * )VR_GetGenericInterface( IVRApplications_Version, &eError );
			}
			return m_pVRApplications;
		}

		IVRTrackedCamera *VRTrackedCamera()
		{
			CheckClear();
			if ( m_pVRTrackedCamera == nullptr )
			{
				EVRInitError eError;
				m_pVRTrackedCamera = ( IVRTrackedCamera * )VR_GetGenericInterface( IVRTrackedCamera_Version, &eError );
			}
			return m_pVRTrackedCamera;
		}

		IVRDriverManager *VRDriverManager()
		{
			CheckClear();
			if ( !m_pVRDriverManager )
			{
				EVRInitError eError;
				m_pVRDriverManager = ( IVRDriverManager * )VR_GetGenericInterface( IVRDriverManager_Version, &eError );
			}
			return m_pVRDriverManager;
		}

		IVRInput *VRInput()
		{
			CheckClear();
			if ( !m_pVRInput )
			{
				EVRInitError eError;
				m_pVRInput = (IVRInput *)VR_GetGenericInterface( IVRInput_Version, &eError );
			}
			return m_pVRInput;
		}

		IVRSpatialAnchors *VRSpatialAnchors()
		{
			CheckClear();
			if ( !m_pVRSpatialAnchors )
			{
				EVRInitError eError;
				m_pVRSpatialAnchors = (IVRSpatialAnchors *)VR_GetGenericInterface( IVRSpatialAnchors_Version, &eError );
			}
			return m_pVRSpatialAnchors;
		}

		IVRIOBuffer *VRIOBuffer()
		{
			if ( !m_pVRIOBuffer )
			{
				EVRInitError eError;
				m_pVRIOBuffer = ( IVRIOBuffer * )VR_GetGenericInterface( IVRIOBuffer_Version, &eError );
			}
			return m_pVRIOBuffer;
		}
		
	private:
		IVRSystem			*m_pVRSystem;
		IVRChaperone		*m_pVRChaperone;
		IVRChaperoneSetup	*m_pVRChaperoneSetup;
		IVRCompositor		*m_pVRCompositor;
		IVROverlay			*m_pVROverlay;
		IVRResources		*m_pVRResources;
		IVRRenderModels		*m_pVRRenderModels;
		IVRExtendedDisplay	*m_pVRExtendedDisplay;
		IVRSettings			*m_pVRSettings;
		IVRApplications		*m_pVRApplications;
		IVRTrackedCamera	*m_pVRTrackedCamera;
		IVRScreenshots		*m_pVRScreenshots;
		IVRDriverManager	*m_pVRDriverManager;
		IVRInput			*m_pVRInput;
		IVRIOBuffer			*m_pVRIOBuffer;
		IVRSpatialAnchors   *m_pVRSpatialAnchors;
	};

	inline COpenVRContext &OpenVRInternal_ModuleContext()
	{
		static void *ctx[ sizeof( COpenVRContext ) / sizeof( void * ) ];
		return *( COpenVRContext * )ctx; // bypass zero-init constructor
	}

	inline IVRSystem *VR_CALLTYPE VRSystem() { return OpenVRInternal_ModuleContext().VRSystem(); }
	inline IVRChaperone *VR_CALLTYPE VRChaperone() { return OpenVRInternal_ModuleContext().VRChaperone(); }
	inline IVRChaperoneSetup *VR_CALLTYPE VRChaperoneSetup() { return OpenVRInternal_ModuleContext().VRChaperoneSetup(); }
	inline IVRCompositor *VR_CALLTYPE VRCompositor() { return OpenVRInternal_ModuleContext().VRCompositor(); }
	inline IVROverlay *VR_CALLTYPE VROverlay() { return OpenVRInternal_ModuleContext().VROverlay(); }
	inline IVRScreenshots *VR_CALLTYPE VRScreenshots() { return OpenVRInternal_ModuleContext().VRScreenshots(); }
	inline IVRRenderModels *VR_CALLTYPE VRRenderModels() { return OpenVRInternal_ModuleContext().VRRenderModels(); }
	inline IVRApplications *VR_CALLTYPE VRApplications() { return OpenVRInternal_ModuleContext().VRApplications(); }
	inline IVRSettings *VR_CALLTYPE VRSettings() { return OpenVRInternal_ModuleContext().VRSettings(); }
	inline IVRResources *VR_CALLTYPE VRResources() { return OpenVRInternal_ModuleContext().VRResources(); }
	inline IVRExtendedDisplay *VR_CALLTYPE VRExtendedDisplay() { return OpenVRInternal_ModuleContext().VRExtendedDisplay(); }
	inline IVRTrackedCamera *VR_CALLTYPE VRTrackedCamera() { return OpenVRInternal_ModuleContext().VRTrackedCamera(); }
	inline IVRDriverManager *VR_CALLTYPE VRDriverManager() { return OpenVRInternal_ModuleContext().VRDriverManager(); }
	inline IVRInput *VR_CALLTYPE VRInput() { return OpenVRInternal_ModuleContext().VRInput(); }
	inline IVRIOBuffer *VR_CALLTYPE VRIOBuffer() { return OpenVRInternal_ModuleContext().VRIOBuffer(); }
	inline IVRSpatialAnchors *VR_CALLTYPE VRSpatialAnchors() { return OpenVRInternal_ModuleContext().VRSpatialAnchors(); }

	inline void COpenVRContext::Clear()
	{
		m_pVRSystem = nullptr;
		m_pVRChaperone = nullptr;
		m_pVRChaperoneSetup = nullptr;
		m_pVRCompositor = nullptr;
		m_pVROverlay = nullptr;
		m_pVRRenderModels = nullptr;
		m_pVRExtendedDisplay = nullptr;
		m_pVRSettings = nullptr;
		m_pVRApplications = nullptr;
		m_pVRTrackedCamera = nullptr;
		m_pVRResources = nullptr;
		m_pVRScreenshots = nullptr;
		m_pVRDriverManager = nullptr;
		m_pVRInput = nullptr;
		m_pVRIOBuffer = nullptr;
		m_pVRSpatialAnchors = nullptr;
	}
	
	VR_INTERFACE uint32_t VR_CALLTYPE VR_InitInternal2( EVRInitError *peError, EVRApplicationType eApplicationType, const char *pStartupInfo );
	VR_INTERFACE void VR_CALLTYPE VR_ShutdownInternal();

	/** Finds the active installation of vrclient.dll and initializes it */
	inline IVRSystem *VR_Init( EVRInitError *peError, EVRApplicationType eApplicationType, const char *pStartupInfo )
	{
		IVRSystem *pVRSystem = nullptr;

		EVRInitError eError;
		VRToken() = VR_InitInternal2( &eError, eApplicationType, pStartupInfo );
		COpenVRContext &ctx = OpenVRInternal_ModuleContext();
		ctx.Clear();

		if ( eError == VRInitError_None )
		{
			if ( VR_IsInterfaceVersionValid( IVRSystem_Version ) )
			{
				pVRSystem = VRSystem();
			}
			else
			{
				VR_ShutdownInternal();
				eError = VRInitError_Init_InterfaceNotFound;
			}
		}

		if ( peError )
			*peError = eError;
		return pVRSystem;
	}

	/** unloads vrclient.dll. Any interface pointers from the interface are
	* invalid after this point */
	inline void VR_Shutdown()
	{
		VR_ShutdownInternal();
	}

#endif // OPENVR_INTERFACE_INTERNAL
}
