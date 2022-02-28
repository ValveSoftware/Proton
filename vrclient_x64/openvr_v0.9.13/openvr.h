
// openvr.h
//========= Copyright Valve Corporation ============//
// Dynamically generated file. Do not modify this file directly.

#ifndef _OPENVR_API
#define _OPENVR_API

#include <stdint.h>



// vrtypes.h
#ifndef _INCLUDE_VRTYPES_H
#define _INCLUDE_VRTYPES_H 

namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
	#pragma pack( push, 4 )
#else
	#pragma pack( push, 8 )
#endif

typedef void* glSharedTextureHandle_t;
typedef int32_t glInt_t;
typedef uint32_t glUInt_t;

// right-handed system
// +y is up
// +x is to the right
// -z is going away from you
// Distance unit is  meters
struct HmdMatrix34_t
{
	float m[3][4];
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

enum EGraphicsAPIConvention
{
	API_DirectX = 0, // Normalized Z goes from 0 at the viewer to 1 at the far clip plane
	API_OpenGL = 1,  // Normalized Z goes from 1 at the viewer to -1 at the far clip plane
};

enum EColorSpace
{
	ColorSpace_Auto = 0,	// Assumes 'gamma' for 8-bit per component formats, otherwise 'linear'.  This mirrors the DXGI formats which have _SRGB variants.
	ColorSpace_Gamma = 1,	// Texture data can be displayed directly on the display without any conversion (a.k.a. display native format).
	ColorSpace_Linear = 2,	// Same as gamma but has been converted to a linear representation using DXGI's sRGB conversion algorithm.
};

struct Texture_t
{
	void* handle; // Native d3d texture pointer or GL texture id.
	EGraphicsAPIConvention eType;
	EColorSpace eColorSpace;
};

enum ETrackingResult
{
	TrackingResult_Uninitialized			= 1,

	TrackingResult_Calibrating_InProgress	= 100,
	TrackingResult_Calibrating_OutOfRange	= 101,

	TrackingResult_Running_OK				= 200,
	TrackingResult_Running_OutOfRange		= 201,
};

static const uint32_t k_unTrackingStringSize = 32;
static const uint32_t k_unMaxDriverDebugResponseSize = 32768;

/** Used to pass device IDs to API calls */
typedef uint32_t TrackedDeviceIndex_t;
static const uint32_t k_unTrackedDeviceIndex_Hmd = 0;
static const uint32_t k_unMaxTrackedDeviceCount = 16;
static const uint32_t k_unTrackedDeviceIndexInvalid = 0xFFFFFFFF;

/** Describes what kind of object is being tracked at a given ID */
enum ETrackedDeviceClass
{
	TrackedDeviceClass_Invalid = 0,				// the ID was not valid.
	TrackedDeviceClass_HMD = 1,					// Head-Mounted Displays
	TrackedDeviceClass_Controller = 2,			// Tracked controllers
	TrackedDeviceClass_TrackingReference = 4,	// Camera and base stations that serve as tracking reference points

	TrackedDeviceClass_Other = 1000,
};


/** Describes what specific role associated with a tracked device */
enum ETrackedControllerRole
{
	TrackedControllerRole_Invalid = 0,					// Invalid value for controller type
	TrackedControllerRole_LeftHand = 1,					// Tracked device associated with the left hand
	TrackedControllerRole_RightHand = 2,				// Tracked device associated with the right hand
};


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
	TrackingUniverseRawAndUncalibrated = 2,	// Poses are provided in the coordinate system defined by the driver. You probably don't want this one.
};


/** Each entry in this enum represents a property that can be retrieved about a
* tracked device. Many fields are only valid for one ETrackedDeviceClass. */
enum ETrackedDeviceProperty
{
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

	// Properties that are unique to TrackedDeviceClass_HMD
	Prop_ReportsTimeSinceVSync_Bool				= 2000,
	Prop_SecondsFromVsyncToPhotons_Float		= 2001,
	Prop_DisplayFrequency_Float					= 2002,
	Prop_UserIpdMeters_Float					= 2003,
	Prop_CurrentUniverseId_Uint64				= 2004, 
	Prop_PreviousUniverseId_Uint64				= 2005, 
	Prop_DisplayFirmwareVersion_String			= 2006,
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

	// Properties that are unique to TrackedDeviceClass_Controller
	Prop_AttachedDeviceId_String				= 3000,
	Prop_SupportedButtons_Uint64				= 3001,
	Prop_Axis0Type_Int32						= 3002, // Return value is of type EVRControllerAxisType
	Prop_Axis1Type_Int32						= 3003, // Return value is of type EVRControllerAxisType
	Prop_Axis2Type_Int32						= 3004, // Return value is of type EVRControllerAxisType
	Prop_Axis3Type_Int32						= 3005, // Return value is of type EVRControllerAxisType
	Prop_Axis4Type_Int32						= 3006, // Return value is of type EVRControllerAxisType

	// Properties that are unique to TrackedDeviceClass_TrackingReference
	Prop_FieldOfViewLeftDegrees_Float			= 4000,
	Prop_FieldOfViewRightDegrees_Float			= 4001,
	Prop_FieldOfViewTopDegrees_Float			= 4002,
	Prop_FieldOfViewBottomDegrees_Float			= 4003,
	Prop_TrackingRangeMinimumMeters_Float		= 4004,
	Prop_TrackingRangeMaximumMeters_Float		= 4005,

	// Vendors are free to expose private debug data in this reserved region
	Prop_VendorSpecific_Reserved_Start			= 10000,
	Prop_VendorSpecific_Reserved_End			= 10999,
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
	TrackedProp_UnknownProperty				= 4,
	TrackedProp_InvalidDevice				= 5,
	TrackedProp_CouldNotContactServer		= 6,
	TrackedProp_ValueNotProvidedByDevice	= 7,
	TrackedProp_StringExceedsMaximumLength	= 8,
	TrackedProp_NotYetAvailable				= 9, // The property value isn't known yet, but is expected soon. Call again later.
};

/** Allows the application to control what part of the provided texture will be used in the
* frame buffer. */
struct VRTextureBounds_t
{
	float uMin, vMin;
	float uMax, vMax;
};


/** Allows the applicaiton to control how scene textures are used by the compositor when calling Submit. */
enum EVRSubmitFlags
{
	// Simple render path. App submits rendered left and right eye images with no lens distortion correction applied.
	Submit_Default = 0x00,

	// App submits final left and right eye images with lens distortion already applied (lens distortion makes the images appear
	// barrel distorted with chromatic aberration correction applied). The app would have used the data returned by
	// vr::IVRSystem::ComputeDistortion() to apply the correct distortion to the rendered images before calling Submit().
	Submit_LensDistortionAlreadyApplied = 0x01,

	// If the texture pointer passed in is actually a renderbuffer (e.g. for MSAA in OpenGL) then set this flag.
	Submit_GlRenderBuffer = 0x02
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
};

/** The types of events that could be posted (and what the parameters mean for each event type) */
enum EVREventType
{
	VREvent_None = 0,

	VREvent_TrackedDeviceActivated		= 100,
	VREvent_TrackedDeviceDeactivated	= 101,
	VREvent_TrackedDeviceUpdated		= 102,
	VREvent_TrackedDeviceUserInteractionStarted		= 103,
	VREvent_TrackedDeviceUserInteractionEnded	= 104,
	VREvent_IpdChanged					= 105,
	VREvent_EnterStandbyMode			= 106,
	VREvent_LeaveStandbyMode			= 107,

	VREvent_ButtonPress					= 200, // data is controller
	VREvent_ButtonUnpress				= 201, // data is controller
	VREvent_ButtonTouch					= 202, // data is controller
	VREvent_ButtonUntouch				= 203, // data is controller

	VREvent_MouseMove					= 300, // data is mouse
	VREvent_MouseButtonDown				= 301, // data is mouse
	VREvent_MouseButtonUp				= 302, // data is mouse
	VREvent_FocusEnter					= 303, // data is overlay
	VREvent_FocusLeave					= 304, // data is overlay

	VREvent_InputFocusCaptured			= 400, // data is process
	VREvent_InputFocusReleased			= 401, // data is process
	VREvent_SceneFocusLost				= 402, // data is process
	VREvent_SceneFocusGained			= 403, // data is process
	VREvent_SceneApplicationChanged		= 404, // data is process - The App actually drawing the scene changed (usually to or from the compositor)
	VREvent_SceneFocusChanged			= 405, // data is process - New app got access to draw the scene

	VREvent_OverlayShown				= 500,
	VREvent_OverlayHidden				= 501,
	VREvent_DashboardActivated		= 502,
	VREvent_DashboardDeactivated	= 503,
	VREvent_DashboardThumbSelected	= 504, // Sent to the overlay manager - data is overlay
	VREvent_DashboardRequested		= 505, // Sent to the overlay manager - data is overlay
	VREvent_ResetDashboard			= 506, // Send to the overlay manager
	VREvent_RenderToast				= 507, // Send to the dashboard to render a toast - data is the notification ID
	VREvent_ImageLoaded				= 508, // Sent to overlays when a SetOverlayRaw or SetOverlayFromFile call finishes loading
	VREvent_ShowKeyboard = 509, // Sent to keyboard renderer in the dashboard to invoke it
	VREvent_HideKeyboard = 510, // Sent to keyboard renderer in the dashboard to hide it
	VREvent_OverlayGamepadFocusGained		= 511, // Sent to an overlay when IVROverlay::SetFocusOverlay is called on it
	VREvent_OverlayGamepadFocusLost = 512, // Send to an overlay when it previously had focus and IVROverlay::SetFocusOverlay is called on something else

	VREvent_Notification_Shown				= 600,
	VREvent_Notification_Hidden				= 601,
	VREvent_Notification_BeginInteraction	= 602,
	VREvent_Notification_Destroyed			= 603,

	VREvent_Quit						= 700, // data is process
	VREvent_ProcessQuit					= 701, // data is process
	VREvent_QuitAborted_UserPrompt		= 702, // data is process
	VREvent_QuitAcknowledged			= 703, // data is process

	VREvent_ChaperoneDataHasChanged		= 800,
	VREvent_ChaperoneUniverseHasChanged	= 801,
	VREvent_ChaperoneTempDataHasChanged = 802,
	VREvent_ChaperoneSettingsHaveChanged = 803,

	VREvent_BackgroundSettingHasChanged	= 850,

	VREvent_StatusUpdate				= 900,

	VREvent_MCImageUpdated				= 1000,

	VREvent_FirmwareUpdateStarted	= 1100,
	VREvent_FirmwareUpdateFinished	= 1101,

	VREvent_KeyboardClosed				= 1200,
	VREvent_KeyboardCharInput			= 1201,

	VREvent_ApplicationTransitionStarted	= 1300,
	VREvent_ApplicationTransitionAborted	= 1301,
	VREvent_ApplicationTransitionNewAppStarted = 1302,

	VREvent_Compositor_MirrorWindowShown	= 1400,
	VREvent_Compositor_MirrorWindowHidden	= 1401,

	VREvent_TrackedCamera_StartVideoStream  = 1500,
	VREvent_TrackedCamera_StopVideoStream   = 1501,
	VREvent_TrackedCamera_PauseVideoStream  = 1502,
	VREvent_TrackedCamera_ResumeVideoStream = 1503,
	
	// Vendors are free to expose private events in this reserved region
	VREvent_VendorSpecific_Reserved_Start = 10000,
	VREvent_VendorSpecific_Reserved_End = 19999,
};


/** Level of Hmd activity */
enum EDeviceActivityLevel
{
	k_EDeviceActivityLevel_Unknown = -1,
	k_EDeviceActivityLevel_Idle = 0,
	k_EDeviceActivityLevel_UserInteraction = 1,
	k_EDeviceActivityLevel_UserInteraction_Timeout = 2,
	k_EDeviceActivityLevel_Standby = 3,
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

	k_EButton_Axis0				= 32,
	k_EButton_Axis1				= 33,
	k_EButton_Axis2				= 34,
	k_EButton_Axis3				= 35,
	k_EButton_Axis4				= 36,

	// aliases for well known controllers
	k_EButton_SteamVR_Touchpad	= k_EButton_Axis0,
	k_EButton_SteamVR_Trigger	= k_EButton_Axis1,

	k_EButton_Dashboard_Back	= k_EButton_Grip,

	k_EButton_Max				= 64
};

inline uint64_t ButtonMaskFromId( EVRButtonId id ) { return 1ull << id; }

/** used for controller button events */
struct VREvent_Controller_t
{
	EVRButtonId button;
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
	float x, y;
	EVRMouseButton button;
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
};


/** Used for a few events about overlays */
struct VREvent_Status_t
{
	EVRState statusState; 
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

/** Not actually used for any events. It is just used to reserve
* space in the union for future event types */
struct VREvent_Reserved_t
{
	uint64_t reserved0;
	uint64_t reserved1;
};

/** If you change this you must manually update openvr_interop.cs.py */
typedef union
{
	VREvent_Reserved_t reserved;
	VREvent_Controller_t controller;
	VREvent_Mouse_t mouse;
	VREvent_Process_t process;
	VREvent_Notification_t notification;
	VREvent_Overlay_t overlay;
	VREvent_Status_t status;
	VREvent_Keyboard_t keyboard;
	VREvent_Ipd_t ipd;
	VREvent_Chaperone_t chaperone;
} VREvent_Data_t;

/** An event posted by the server to all running applications */
struct VREvent_t
{
	EVREventType eventType;
	TrackedDeviceIndex_t trackedDeviceIndex;
	VREvent_Data_t data;
	float eventAgeSeconds;
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
	VROverlayError_None					= 0,

	VROverlayError_UnknownOverlay		= 10,
	VROverlayError_InvalidHandle		= 11,
	VROverlayError_PermissionDenied		= 12,
	VROverlayError_OverlayLimitExceeded = 13, // No more overlays could be created because the maximum number already exist
	VROverlayError_WrongVisibilityType	= 14,
	VROverlayError_KeyTooLong			= 15,
	VROverlayError_NameTooLong			= 16,
	VROverlayError_KeyInUse				= 17,
	VROverlayError_WrongTransformType	= 18,
	VROverlayError_InvalidTrackedDevice = 19,
	VROverlayError_InvalidParameter		= 20,
	VROverlayError_ThumbnailCantBeDestroyed = 21,
	VROverlayError_ArrayTooSmall		= 22,
	VROverlayError_RequestFailed		= 23,
	VROverlayError_InvalidTexture		= 24,
	VROverlayError_UnableToLoadFile		= 25,
	VROVerlayError_KeyboardAlreadyInUse = 26,
	VROverlayError_NoNeighbor			= 27,
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
};


/** error codes returned by Vr_Init */

// Please add adequate error description to https://developer.valvesoftware.com/w/index.php?title=Category:SteamVRHelp
enum EVRInitError
{
	VRInitError_None = 0,
	VRInitError_Unknown = 1,

	VRInitError_Init_InstallationNotFound	= 100,
	VRInitError_Init_InstallationCorrupt	= 101,
	VRInitError_Init_VRClientDLLNotFound	= 102,
	VRInitError_Init_FileNotFound			= 103,
	VRInitError_Init_FactoryNotFound		= 104,
	VRInitError_Init_InterfaceNotFound		= 105,
	VRInitError_Init_InvalidInterface		= 106,
	VRInitError_Init_UserConfigDirectoryInvalid = 107,
	VRInitError_Init_HmdNotFound			= 108,
	VRInitError_Init_NotInitialized		= 109,
	VRInitError_Init_PathRegistryNotFound	= 110,
	VRInitError_Init_NoConfigPath			= 111,
	VRInitError_Init_NoLogPath				= 112,
	VRInitError_Init_PathRegistryNotWritable = 113,
	VRInitError_Init_AppInfoInitFailed		= 114,
	VRInitError_Init_Retry					= 115, // Used internally to cause retries to vrserver
	VRInitError_Init_InitCanceledByUser	= 116, // The calling application should silently exit. The user canceled app startup
	VRInitError_Init_AnotherAppLaunching	= 117, 
	VRInitError_Init_SettingsInitFailed	= 118, 
	VRInitError_Init_ShuttingDown			= 119,
	VRInitError_Init_TooManyObjects		= 120,
	VRInitError_Init_NoServerForBackgroundApp = 121,
	VRInitError_Init_NotSupportedWithCompositor = 122,
	VRInitError_Init_NotAvailableToUtilityApps = 123,

	VRInitError_Driver_Failed				= 200,
	VRInitError_Driver_Unknown				= 201,
	VRInitError_Driver_HmdUnknown			= 202,
	VRInitError_Driver_NotLoaded			= 203,
	VRInitError_Driver_RuntimeOutOfDate	= 204,
	VRInitError_Driver_HmdInUse			= 205,
	VRInitError_Driver_NotCalibrated		= 206,
	VRInitError_Driver_CalibrationInvalid	= 207,
	VRInitError_Driver_HmdDisplayNotFound  = 208,
	
	VRInitError_IPC_ServerInitFailed		= 300,
	VRInitError_IPC_ConnectFailed			= 301,
	VRInitError_IPC_SharedStateInitFailed	= 302,
	VRInitError_IPC_CompositorInitFailed	= 303,
	VRInitError_IPC_MutexInitFailed		= 304,
	VRInitError_IPC_Failed					= 305,

	VRInitError_VendorSpecific_UnableToConnectToOculusRuntime = 1000,

	VRInitError_VendorSpecific_HmdFound_But						= 1100,
	VRInitError_VendorSpecific_HmdFound_CantOpenDevice 			= 1101,
	VRInitError_VendorSpecific_HmdFound_UnableToRequestConfigStart = 1102,
	VRInitError_VendorSpecific_HmdFound_NoStoredConfig 			= 1103,
	VRInitError_VendorSpecific_HmdFound_ConfigTooBig 				= 1104,
	VRInitError_VendorSpecific_HmdFound_ConfigTooSmall 			= 1105,
	VRInitError_VendorSpecific_HmdFound_UnableToInitZLib 			= 1106,
	VRInitError_VendorSpecific_HmdFound_CantReadFirmwareVersion 	= 1107,
	VRInitError_VendorSpecific_HmdFound_UnableToSendUserDataStart  = 1108,
	VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataStart   = 1109,
	VRInitError_VendorSpecific_HmdFound_UnableToGetUserDataNext    = 1110,
	VRInitError_VendorSpecific_HmdFound_UserDataAddressRange       = 1111,
	VRInitError_VendorSpecific_HmdFound_UserDataError              = 1112,
	VRInitError_VendorSpecific_HmdFound_ConfigFailedSanityCheck    = 1113,

	VRInitError_Steam_SteamInstallationNotFound = 2000,

};

#pragma pack( pop )

// figure out how to import from the VR API dll
#if defined(_WIN32)

#ifdef VR_API_EXPORT
#define VR_INTERFACE extern "C" __declspec( dllexport )
#else
#define VR_INTERFACE extern "C" __declspec( dllimport )
#endif

#elif defined(GNUC) || defined(COMPILER_GCC) || defined(__APPLE__)

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

}

#endif // _INCLUDE_VRTYPES_H


// vrannotation.h
#ifdef __clang__
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

// vrtrackedcameratypes.h
#ifndef _VRTRACKEDCAMERATYPES_H
#define _VRTRACKEDCAMERATYPES_H 

namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
	#pragma pack( push, 4 )
#else
	#pragma pack( push, 8 )
#endif

enum ECameraVideoStreamFormat
{
	CVS_FORMAT_UNKNOWN = 0,
	CVS_FORMAT_RAW10 = 1,		// 10 bits per pixel
	CVS_FORMAT_NV12 = 2,		// 12 bits per pixel
	CVS_FORMAT_RGB24 = 3,		// 24 bits per pixel
	CVS_MAX_FORMATS
};

#ifdef _MSC_VER
#define VR_CAMERA_DECL_ALIGN( x ) __declspec( align( x ) )
#else
#define VR_CAMERA_DECL_ALIGN( x ) //
#endif

VR_CAMERA_DECL_ALIGN( 8 ) struct CameraVideoStreamFrame_t
{
	ECameraVideoStreamFormat m_nStreamFormat;

	uint32_t m_nWidth;
	uint32_t m_nHeight;

	uint32_t m_nFrameSequence;			// Starts from 0 when stream starts.
	uint32_t m_nTimeStamp;				// Driver provided time stamp per driver centric time base

	uint32_t m_nBufferIndex;			// Identifies which buffer the image data is hosted
	uint32_t m_nBufferCount;			// Total number of configured buffers

	uint32_t m_nImageDataSize;			// Based on stream format, width, height

	double m_flFrameElapsedTime;		// Starts from 0 when stream starts. In seconds.
	double m_flFrameCaptureTime;		// Relative to when the frame was exposed/captured.

	bool m_bPoseIsValid;				// Supplied by HMD layer when used as a tracked camera
	vr::HmdMatrix34_t m_matDeviceToAbsoluteTracking;	

	float m_Pad[4];

	void *m_pImageData;
};

#pragma pack( pop )

}

#endif // _VRTRACKEDCAMERATYPES_H
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
	virtual HmdMatrix44_t GetProjectionMatrix( EVREye eEye, float fNearZ, float fFarZ, EGraphicsAPIConvention eProjType ) = 0;

	/** The components necessary to build your own projection matrix in case your
	* application is doing something fancy like infinite Z */
	virtual void GetProjectionRaw( EVREye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom ) = 0;

	/** Returns the result of the distortion function for the specified eye and input UVs. UVs go from 0,0 in 
	* the upper left of that eye's viewport and 1,1 in the lower right of that eye's viewport. */
	virtual DistortionCoordinates_t ComputeDistortion( EVREye eEye, float fU, float fV ) = 0;

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
	* Returns the adapter index and output index that the user should pass into EnumAdapters and EnumOutputs 
	* to create the device and swap chain in DX10 and DX11. If an error occurs both indices will be set to -1.
	*/
	virtual void GetDXGIOutputInfo( int32_t *pnAdapterIndex ) = 0;

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

	/** Returns the device index associated with a specific role, for example the left hand or the right hand. */
	virtual vr::TrackedDeviceIndex_t GetTrackedDeviceIndexForControllerRole( vr::ETrackedControllerRole unDeviceType ) = 0;

	/** Returns the controller type associated with a device index. */
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

	/** Returns a string property. If the device index is not valid or the property is not a string type this function will 
	* return 0. Otherwise it returns the length of the number of bytes necessary to hold this string including the trailing
	* null. Strings will generally fit in buffers of k_unTrackingStringSize characters. */
	virtual uint32_t GetStringTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, ETrackedDeviceProperty prop, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, ETrackedPropertyError *pError = 0L ) = 0;

	/** returns a string that corresponds with the specified property error. The string will be the name 
	* of the error enum value for all valid error codes */
	virtual const char *GetPropErrorNameFromEnum( ETrackedPropertyError error ) = 0;

	// ------------------------------------
	// Event methods
	// ------------------------------------

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false */
	virtual bool PollNextEvent( VREvent_t *pEvent ) = 0;

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false. Fills in the pose of the associated tracked device in the provided pose struct. 
	* This pose will always be older than the call to this function and should not be used to render the device. */
	virtual bool PollNextEventWithPose( ETrackingUniverseOrigin eOrigin, vr::VREvent_t *pEvent, vr::TrackedDevicePose_t *pTrackedDevicePose ) = 0;

	/** returns the name of an EVREvent enum value */
	virtual const char *GetEventTypeNameFromEnum( EVREventType eType ) = 0;

	// ------------------------------------
	// Rendering helper methods
	// ------------------------------------

	/** Returns the stencil mesh information for the current HMD. If this HMD does not have a stencil mesh the vertex data and count will be
	* NULL and 0 respectively. This mesh is meant to be rendered into the stencil buffer (or into the depth buffer setting nearz) before rendering
	* each eye's view. The pixels covered by this mesh will never be seen by the user after the lens distortion is applied and based on visibility to the panels.
	* This will improve perf by letting the GPU early-reject pixels the user will never see before running the pixel shader.
	* NOTE: Render this mesh with backface culling disabled since the winding order of the vertices can be different per-HMD or per-eye.
	*/
	virtual HiddenAreaMesh_t GetHiddenAreaMesh( EVREye eEye ) = 0;


	// ------------------------------------
	// Controller methods
	// ------------------------------------

	/** Fills the supplied struct with the current state of the controller. Returns false if the controller index
	* is invalid. */
	virtual bool GetControllerState( vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState ) = 0;

	/** fills the supplied struct with the current state of the controller and the provided pose with the pose of 
	* the controller when the controller state was updated most recently. Use this form if you need a precise controller
	* pose as input to your application when the user presses or releases a button. */
	virtual bool GetControllerStateWithPose( ETrackingUniverseOrigin eOrigin, vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose ) = 0;

	/** Trigger a single haptic pulse on a controller. After this call the application may not trigger another haptic pulse on this controller
	* and axis combination for 5ms. */
	virtual void TriggerHapticPulse( vr::TrackedDeviceIndex_t unControllerDeviceIndex, uint32_t unAxisId, unsigned short usDurationMicroSec ) = 0;

	/** returns the name of an EVRButtonId enum value */
	virtual const char *GetButtonIdNameFromEnum( EVRButtonId eButtonId ) = 0;

	/** returns the name of an EVRControllerAxisType enum value */
	virtual const char *GetControllerAxisTypeNameFromEnum( EVRControllerAxisType eAxisType ) = 0;

	/** Tells OpenVR that this process wants exclusive access to controller button states and button events. Other apps will be notified that 
	* they have lost input focus with a VREvent_InputFocusCaptured event. Returns false if input focus could not be captured for
	* some reason. */
	virtual bool CaptureInputFocus() = 0;

	/** Tells OpenVR that this process no longer wants exclusive access to button states and button events. Other apps will be notified 
	* that input focus has been released with a VREvent_InputFocusReleased event. */
	virtual void ReleaseInputFocus() = 0;

	/** Returns true if input focus is captured by another process. */
	virtual bool IsInputFocusCapturedByAnotherProcess() = 0;

	// ------------------------------------
	// Debug Methods
	// ------------------------------------

	/** Sends a request to the driver for the specified device and returns the response. The maximum response size is 32k,
	* but this method can be called with a smaller buffer. If the response exceeds the size of the buffer, it is truncated. 
	* The size of the response including its terminating null is returned. */
	virtual uint32_t DriverDebugRequest( vr::TrackedDeviceIndex_t unDeviceIndex, const char *pchRequest, char *pchResponseBuffer, uint32_t unResponseBufferSize ) = 0;


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

static const char * const IVRSystem_Version = "IVRSystem_010";

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

		VRApplicationError_BufferTooSmall = 200,		// The provided buffer was too small to fit the requested data
		VRApplicationError_PropertyNotSet = 201,		// The requested property was not set
		VRApplicationError_UnknownProperty = 202,
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

		VRApplicationProperty_IsDashboardOverlay_Bool	= 60,
	};

	/** These are states the scene application startup process will go through. */
	enum EVRApplicationTransitionState
	{
		VRApplicationTransition_None = 0,

		VRApplicationTransition_OldAppQuitSent = 10,
		VRApplicationTransition_WaitingForExternalLaunch = 11,
		
		VRApplicationTransition_NewAppLaunched = 20,
	};


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
		virtual EVRApplicationError GetApplicationKeyByIndex( uint32_t unApplicationIndex, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Returns the key of the application for the specified Process Id. The buffer should be at least 
		* k_unMaxApplicationKeyLength in order to fit the key. */
		virtual EVRApplicationError GetApplicationKeyByProcessId( uint32_t unProcessId, char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

		/** Launches the application. The existing scene application will exit and then the new application will start.
		* This call is not valid for dashboard overlay applications. */
		virtual EVRApplicationError LaunchApplication( const char *pchAppKey ) = 0;

		/** Launches the dashboard overlay application if it is not already running. This call is only valid for 
		* dashboard overlay applications. */
		virtual EVRApplicationError LaunchDashboardOverlay( const char *pchAppKey ) = 0;

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
		virtual uint32_t GetApplicationPropertyString( const char *pchAppKey, EVRApplicationProperty eProperty, char *pchPropertyValueBuffer, uint32_t unPropertyValueBufferLen, EVRApplicationError *peError = nullptr ) = 0;

		/** Returns a value for an application property. The required buffer size to fit this value will be returned. */
		virtual bool GetApplicationPropertyBool( const char *pchAppKey, EVRApplicationProperty eProperty, EVRApplicationError *peError = nullptr ) = 0;

		/** Sets the application auto-launch flag. This is only valid for applications which return true for VRApplicationProperty_IsDashboardOverlay_Bool. */
		virtual EVRApplicationError SetApplicationAutoLaunch( const char *pchAppKey, bool bAutoLaunch ) = 0;

		/** Gets the application auto-launch flag. This is only valid for applications which return true for VRApplicationProperty_IsDashboardOverlay_Bool. */
		virtual bool GetApplicationAutoLaunch( const char *pchAppKey ) = 0;

		// ---------------  Transition methods --------------- //

		/** Returns the app key for the application that is starting up */
		virtual EVRApplicationError GetStartingApplication( char *pchAppKeyBuffer, uint32_t unAppKeyBufferLen ) = 0;

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

	};

	static const char * const IVRApplications_Version = "IVRApplications_002";

	/** Returns the current IVRApplications pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRApplications *VR_CALLTYPE VRApplications();

} // namespace vr

// ivrsettings.h
namespace vr
{
	enum EVRSettingsError
	{
		VRSettingsError_None = 0,
		VRSettingsError_IPCFailed = 1,
		VRSettingsError_WriteFailed = 2,
		VRSettingsError_ReadFailed = 3,
	};

	// The maximum length of a settings key
	static const uint32_t k_unMaxSettingsKeyLength = 128;

	class IVRSettings
	{
	public:
		virtual const char *GetSettingsErrorNameFromEnum( EVRSettingsError eError ) = 0;

		virtual void Sync( EVRSettingsError *peError = nullptr ) = 0;

		virtual bool GetBool( const char *pchSection, const char *pchSettingsKey, bool bDefaultValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetBool( const char *pchSection, const char *pchSettingsKey, bool bValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual int32_t GetInt32( const char *pchSection, const char *pchSettingsKey, int32_t nDefaultValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetInt32( const char *pchSection, const char *pchSettingsKey, int32_t nValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual float GetFloat( const char *pchSection, const char *pchSettingsKey, float flDefaultValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetFloat( const char *pchSection, const char *pchSettingsKey, float flValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void GetString( const char *pchSection, const char *pchSettingsKey, char *pchValue, uint32_t unValueLen, const char *pchDefaultValue, EVRSettingsError *peError = nullptr ) = 0;
		virtual void SetString( const char *pchSection, const char *pchSettingsKey, const char *pchValue, EVRSettingsError *peError = nullptr ) = 0;
	};

	//-----------------------------------------------------------------------------
	// steamvr keys

	static const char * const k_pch_SteamVR_Section = "steamvr";
	static const char * const k_pch_SteamVR_RequireHmd_String = "requireHmd";
	static const char * const k_pch_SteamVR_ForcedDriverKey_String = "forcedDriver";
	static const char * const k_pch_SteamVR_ForcedHmdKey_String = "forcedHmd";
	static const char * const k_pch_SteamVR_DisplayDebug_Bool = "displayDebug";
	static const char * const k_pch_SteamVR_EnableDistortion_Bool = "enableDistortion";
	static const char * const k_pch_SteamVR_DisplayDebugX_Int32 = "displayDebugX";
	static const char * const k_pch_SteamVR_DisplayDebugY_Int32 = "displayDebugY";
	static const char * const k_pch_SteamVR_SendSystemButtonToAllApps_Bool= "sendSystemButtonToAllApps";
	static const char * const k_pch_SteamVR_LogLevel_Int32 = "loglevel";
	static const char * const k_pch_SteamVR_IPD_Float = "ipd";
	static const char * const k_pch_SteamVR_Background_String = "background";
	static const char * const k_pch_SteamVR_GridColor_String = "gridColor";
	static const char * const k_pch_SteamVR_PlayAreaColor_String = "playAreaColor";
	static const char * const k_pch_SteamVR_ActivateMultipleDrivers_Bool = "activateMultipleDrivers";
	static const char * const k_pch_SteamVR_PowerOffOnExit_Bool = "powerOffOnExit";
	static const char * const k_pch_SteamVR_StandbyAppRunningTimeout_Float = "standbyAppRunningTimeout";
	static const char * const k_pch_SteamVR_StandbyNoAppTimeout_Float = "standbyNoAppTimeout";


	//-----------------------------------------------------------------------------
	// lighthouse keys

	static const char * const k_pch_Lighthouse_Section = "driver_lighthouse";
	static const char * const k_pch_Lighthouse_DisableIMU_Bool = "disableimu";
	static const char * const k_pch_Lighthouse_UseDisambiguation_String = "usedisambiguation";
	static const char * const k_pch_Lighthouse_DisambiguationDebug_Int32 = "disambiguationdebug";

	static const char * const k_pch_Lighthouse_PrimaryBasestation_Int32 = "primarybasestation";
	static const char * const k_pch_Lighthouse_LighthouseName_String = "lighthousename";
	static const char * const k_pch_Lighthouse_MaxIncidenceAngleDegrees_Float = "maxincidenceangledegrees";
	static const char * const k_pch_Lighthouse_UseLighthouseDirect_Bool = "uselighthousedirect";
	static const char * const k_pch_Lighthouse_DBHistory_Bool = "dbhistory";
	static const char * const k_pch_Lighthouse_OriginOffsetX_Float = "originoffsetx";
	static const char * const k_pch_Lighthouse_OriginOffsetY_Float = "originoffsety";
	static const char * const k_pch_Lighthouse_OriginOffsetZ_Float = "originoffsetz";
	static const char * const k_pch_Lighthouse_HeadingOffset_Float = "headingoffset";

	//-----------------------------------------------------------------------------
	// null keys

	static const char * const k_pch_Null_Section = "driver_null";
	static const char * const k_pch_Null_EnableNullDriver_Bool = "enable";
	static const char * const k_pch_Null_Id_String = "id";
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
	// notification keys
	static const char * const k_pch_Notifications_Section = "notifications";
	static const char * const k_pch_Notifications_DoNotDisturb_Bool = "DoNotDisturb";

	//-----------------------------------------------------------------------------
	// perf keys
	static const char * const k_pch_Perf_Section = "perfcheck";
	static const char * const k_pch_Perf_HeuristicActive_Bool = "heuristicActive";
	static const char * const k_pch_Perf_NotifyInHMD_Bool = "warnInHMD";
	static const char * const k_pch_Perf_NotifyOnlyOnce_Bool = "warnOnlyOnce";
	static const char * const k_pch_Perf_AllowTimingStore_Bool = "allowTimingStore";
	static const char * const k_pch_Perf_SaveTimingsOnExit_Bool = "saveTimingsOnExit";

	//-----------------------------------------------------------------------------

	static const char * const IVRSettings_Version = "IVRSettings_001";

	/** Returns the current IVRSettings pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRSettings *VR_CALLTYPE VRSettings();

} // namespace vr

// ivrchaperone.h
namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
	#pragma pack( push, 4 )
#else
	#pragma pack( push, 8 )
#endif

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
	ChaperoneCalibrationState_Error = 200,
	ChaperoneCalibrationState_Error_BaseStationUninitalized = 201,		// Tracking center hasn't be calibrated for at least one of the base stations
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

	/** Sets the preferred seated position in the working copy. */
	virtual void SetWorkingSeatedZeroPoseToRawTrackingPose( const HmdMatrix34_t *pMatSeatedZeroPoseToRawTrackingPose ) = 0;

	/** Sets the preferred standing position in the working copy. */
	virtual void SetWorkingStandingZeroPoseToRawTrackingPose( const HmdMatrix34_t *pMatStandingZeroPoseToRawTrackingPose ) = 0;

	/** Tear everything down and reload it from the file on disk */
	virtual void ReloadFromDisk( EChaperoneConfigFile configFile ) = 0;

	/** Returns the preferred seated position. */
	virtual bool GetLiveSeatedZeroPoseToRawTrackingPose( HmdMatrix34_t *pmatSeatedZeroPoseToRawTrackingPose ) = 0;
};

static const char * const IVRChaperoneSetup_Version = "IVRChaperoneSetup_004";


}

// ivrcompositor.h
namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
	#pragma pack( push, 4 )
#else
	#pragma pack( push, 8 )
#endif

/** Errors that can occur with the VR compositor */
enum EVRCompositorError
{
	VRCompositorError_None						= 0,
	VRCompositorError_IncompatibleVersion		= 100,
	VRCompositorError_DoNotHaveFocus			= 101,
	VRCompositorError_InvalidTexture			= 102,
	VRCompositorError_IsNotSceneApplication		= 103,
	VRCompositorError_TextureIsOnWrongDevice	= 104,
	VRCompositorError_TextureUsesUnsupportedFormat = 105,
	VRCompositorError_SharedTexturesNotSupported = 106,
};


/** Provides a single frame's timing information to the app */
struct Compositor_FrameTiming
{
	uint32_t size; // sizeof(Compositor_FrameTiming)
	double frameStart;
	float frameVSync; // seconds from frame start
	uint32_t droppedFrames;
	uint32_t frameIndex;
	vr::TrackedDevicePose_t pose;

	float prediction;

	float m_flFrameIntervalMs;
	float m_flSceneRenderCpuMs;
	float m_flSceneRenderGpuMs;
	float m_flCompositorRenderCpuMs;
	float m_flCompositorRenderGpuMs;
	float m_flPresentCallCpuMs;
	float m_flRunningStartMs;
	float m_flHandoffStartMs;
	float m_flHandoffEndMs;
	float m_flCompositorUpdateCpuMs;
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

	/** Returns pose(s) to use to render scene (and optionally poses predicted two frames out for gameplay). */
	virtual EVRCompositorError WaitGetPoses( VR_ARRAY_COUNT(unRenderPoseArrayCount) TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount,
		VR_ARRAY_COUNT(unGamePoseArrayCount) TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount ) = 0;

	/** Get the last set of poses returned by WaitGetPoses. */
	virtual EVRCompositorError GetLastPoses( VR_ARRAY_COUNT( unRenderPoseArrayCount ) TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount,
		VR_ARRAY_COUNT( unGamePoseArrayCount ) TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount ) = 0;

	/** Updated scene texture to display. If pBounds is NULL the entire texture will be used.  If called from an OpenGL app, consider adding a glFlush after
	* Submitting both frames to signal the driver to start processing, otherwise it may wait until the command buffer fills up, causing the app to miss frames.
	*
	* OpenGL dirty state:
	*	glBindTexture
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

	/** Returns the time in seconds left in the current (as identified by FrameTiming's frameIndex) frame.
	* Due to "running start", this value may roll over to the next frame before ever reaching 0.0. */
	virtual float GetFrameTimeRemaining() = 0;

	/** Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between
	* 0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly 
	* would be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ).  Values are in un-premultiplied alpha space. */
	virtual void FadeToColor( float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground = false ) = 0;

	/** Fading the Grid in or out in fSeconds */
	virtual void FadeGrid( float fSeconds, bool bFadeIn ) = 0;

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

	/** Returns true if the mirror window is shown */
	virtual bool IsMirrorWindowVisible() = 0;

	/** Writes all images that the compositor knows about (including overlays) to a 'screenshots' folder in the SteamVR runtime root. */
	virtual void CompositorDumpImages() = 0;
};

static const char * const IVRCompositor_Version = "IVRCompositor_009";

} // namespace vr



// ivrnotifications.h
namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
	#pragma pack( push, 4 )
#else
	#pragma pack( push, 8 )
#endif

// Used for passing graphic data
struct NotificationBitmap_t
{
	void *bytes;
	int32_t width;
	int32_t height;
	int32_t depth;
};

enum EVRNotificationType
{
	/** Transient notifications are automatically hidden after a period of time set by the user. 
	* They are used for things like information and chat messages that do not require user interaction. */
	EVRNotificationType_Transient = 0,

	/** Persistent notifications are shown to the user until they are hidden by calling RemoveNotification().
	* They are used for things like phone calls and alarms that require user interaction. */
	EVRNotificationType_Persistent = 1,
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
	static const uint32_t k_unMaxOverlayCount = 32;

	/** Types of input supported by VR Overlays */
	enum VROverlayInputMethod
	{
		VROverlayInputMethod_None		= 0, // No input events will be generated automatically for this overlay
		VROverlayInputMethod_Mouse		= 1, // Tracked controllers will get mouse events automatically
	};

	/** Allows the caller to figure out which overlay transform getter to call. */
	enum VROverlayTransformType
	{
		VROverlayTransform_Absolute					= 0,
		VROverlayTransform_TrackedDeviceRelative	= 1,
		VROverlayTransform_SystemOverlay			= 2,
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
		k_EGamepadTextInputModePassword = 1
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

	class IVROverlay
	{
	public:

		// ---------------------------------------------
		// Overlay management methods
		// ---------------------------------------------

		/** Finds an existing overlay with the specified key. */
		virtual EVROverlayError FindOverlay( const char *pchOverlayKey, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Creates a new named overlay. All overlays start hidden and with default settings. */
		virtual EVROverlayError CreateOverlay( const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Destroys the specified overlay. When an application calls VR_Shutdown all overlays created by that app are
		* automatically destroyed. */
		virtual EVROverlayError DestroyOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Specify which overlay to use the high quality render path.  This overlay will be composited in during the distortion pass which
		* results in it drawing on top of everything else, but also at a higher quality as it samples the source texture directly rather than
		* rasterizing into each eye's render texture first.  Because if this, only one of these is supported at any given time.  It is most useful
		* for overlays that are expected to take up most of the user's view (e.g. streaming video). */
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

		/** Gets the raw image data from an overlay. Overlay image data is always returned as RGBA data, 4 bytes per pixel. If the buffer is not large enough, width and height 
		* will be set and VROverlayError_ArrayTooSmall is returned. */
		virtual EVROverlayError GetOverlayImageData( VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unBufferSize, uint32_t *punWidth, uint32_t *punHeight ) = 0;

		/** returns a string that corresponds with the specified overlay error. The string will be the name 
		* of the error enum value for all valid error codes */
		virtual const char *GetOverlayErrorNameFromEnum( EVROverlayError error ) = 0;


		// ---------------------------------------------
		// Overlay rendering methods
		// ---------------------------------------------

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
		* If there are no events this method returns false */
		virtual bool PollNextOverlayEvent( VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent ) = 0;

		/** Returns the current input settings for the specified overlay. */
		virtual EVROverlayError GetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod ) = 0;

		/** Sets the input settings for the specified overlay. */
		virtual EVROverlayError SetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod ) = 0;

		/** Gets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels. */
		virtual EVROverlayError GetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale ) = 0;

		/** Sets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels. */
		virtual EVROverlayError SetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale ) = 0;

		/** Computes the overlay-space pixel coordinates of where the ray intersects the overlay with the
		* specified settings. Returns false if there is no intersection. */
		virtual bool ComputeOverlayIntersection( VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults ) = 0;

		/** Processes mouse input from the specified controller as though it were a mouse pointed at a compositor overlay with the
		* specified settings. The controller is treated like a laser pointer on the -z axis. The point where the laser pointer would
		* intersect with the overlay is the mouse position, the trigger is left mouse, and the track pad is right mouse. 
		*
		* Return true if the controller is pointed at the overlay and an event was generated. */
		virtual bool HandleControllerOverlayInteractionAsMouse( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex ) = 0;

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

		// ---------------------------------------------
		// Overlay texture methods
		// ---------------------------------------------

		/** Texture to draw for the overlay. IVRCompositor::SetGraphicsDevice must be called before 
		* this function. This function can only be called by the overlay's renderer process.
		*
		* If pBounds is NULL the entire texture will be used.
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
	};

	static const char * const IVROverlay_Version = "IVROverlay_008";

} // namespace vr

// ivrrendermodels.h
namespace vr
{

static const char * const k_pch_Controller_Component_GDC2015 = "gdc2015";   // Canonical coordinate system of the gdc 2015 wired controller, provided for backwards compatibility
static const char * const k_pch_Controller_Component_Base = "base";         // For controllers with an unambiguous 'base'.
static const char * const k_pch_Controller_Component_Tip = "tip";           // For controllers with an unambiguous 'tip' (used for 'laser-pointing')
static const char * const k_pch_Controller_Component_HandGrip = "handgrip"; // Neutral, ambidextrous hand-pose when holding controller. On plane between neutrally posed index finger and thumb

#if defined(__linux__) || defined(__APPLE__) 
// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
// The 64-bit version of gcc has the alignment requirement for these types set to
// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
#pragma pack( push, 4 )
#else
#pragma pack( push, 8 )
#endif

typedef uint32_t VRComponentProperties;

enum EVRComponentProperty
{
	VRComponentProperty_IsStatic = (1 << 0),
	VRComponentProperty_IsVisible = (1 << 1),
	VRComponentProperty_IsTouched = (1 << 2),
	VRComponentProperty_IsPressed = (1 << 3),
};

/** Describes state information about a render-model component, including transforms and other dynamic properties
*/
struct RenderModel_ComponentState_t
{
	HmdMatrix34_t mTrackingToComponentRenderModel;  // Transform required when drawing the component render model
	HmdMatrix34_t mTrackingToComponentLocal;        // Transform available for attaching to a local component coordinate system (-Z out from surface )
	VRComponentProperties uProperties;
};

/** a single vertex in a render model */
struct RenderModel_Vertex_t
{
	HmdVector3_t vPosition;		// position in meters in device space
	HmdVector3_t vNormal;
	float rfTextureCoord[2];
};

/** A texture map for use on a render model */
struct RenderModel_TextureMap_t
{
	uint16_t unWidth, unHeight; // width and height of the texture map in pixels
	const uint8_t *rubTextureMapData;	// Map texture data. All textures are RGBA with 8 bits per channel per pixel. Data size is width * height * 4ub
};

/**  Session unique texture identifier. Rendermodels which share the same texture will have the same id.
IDs <0 denote the texture is not present
*/

typedef int32_t TextureID_t;

struct RenderModel_t
{
	const RenderModel_Vertex_t *rVertexData;	// Vertex data for the mesh
	uint32_t unVertexCount;						// Number of vertices in the vertex data
	const uint16_t *rIndexData;					// Indices into the vertex data for each triangle
	uint32_t unTriangleCount;					// Number of triangles in the mesh. Index count is 3 * TriangleCount
	TextureID_t diffuseTextureId;				// Session unique texture identifier. Rendermodels which share the same texture will have the same id. <0 == texture not present
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
	* The method returns false if the model could not be loaded.
	*
	* The API expects that this function will be called at startup or when tracked devices are connected and disconnected.
	* If it is called every frame it will hurt performance.
	*/
	virtual bool LoadRenderModel( const char *pchRenderModelName, RenderModel_t **ppRenderModel ) = 0;

	/** Frees a previously returned render model
	*   It is safe to call this on a null ptr.
	**/
	virtual void FreeRenderModel( RenderModel_t *pRenderModel ) = 0;

	/** Loads and returns a texture for use in the application.
	*/
	virtual bool LoadTexture( TextureID_t textureId, RenderModel_TextureMap_t **ppTexture ) = 0;

	/** Frees a previously returned texture
	*   It is safe to call this on a null ptr.
	*/
	virtual void FreeTexture( RenderModel_TextureMap_t *pTexture ) = 0;

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
	*   Returns 0 if components not supported, >0 otherwise
	*/
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
	* Note: For dynamic objects, visibility may be dynamic. (I.e., true/false will be returned based on controller state ) */
	virtual bool GetComponentState( const char *pchRenderModelName, const char *pchComponentName, const vr::VRControllerState_t *pControllerState, RenderModel_ComponentState_t *pComponentState ) = 0;

};

static const char * const IVRRenderModels_Version = "IVRRenderModels_002";

}


// ivrtrackedcamera.h
namespace vr
{

#if defined(__linux__) || defined(__APPLE__) 
	// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
	// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
	// The 64-bit version of gcc has the alignment requirement for these types set to
	// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
	// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
#pragma pack( push, 4 )
#else
#pragma pack( push, 8 )
#endif

#pragma pack( pop )

class IVRTrackedCamera
{
public:
	virtual bool HasCamera( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool GetCameraFirmwareDescription( vr::TrackedDeviceIndex_t nDeviceIndex, char *pBuffer, uint32_t nBufferLen ) = 0;

	// An invalid or unsupported format returns false. Frame dimensions imply sensor size.
	virtual bool GetCameraFrameDimensions( vr::TrackedDeviceIndex_t nDeviceIndex, vr::ECameraVideoStreamFormat nVideoStreamFormat, uint32_t *pWidth, uint32_t *pHeight ) = 0;

	// Caller can request a specific streaming format prior to enable. The request may be ignored if camera has been granted exclusive use by lower level systems.
	// Format cannot be changed after camera has been enabled. An unsupported or rejected format returns false.
	// Use CVS_FORMAT_UNKNOWN for defaults.
	virtual bool SetCameraVideoStreamFormat( vr::TrackedDeviceIndex_t nDeviceIndex, vr::ECameraVideoStreamFormat nVideoStreamFormat ) = 0;
	virtual vr::ECameraVideoStreamFormat GetCameraVideoStreamFormat( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;

	// Camera must be enabled prior to streaming. Enabling causes frame buffering allocations and locks attributes.
	virtual bool EnableCameraForStreaming( vr::TrackedDeviceIndex_t nDeviceIndex, bool bEnable ) = 0;

	virtual bool StartVideoStream( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool StopVideoStream( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool IsVideoStreamActive( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;

	// Starts at 0 and advances in seconds when stream started and valid. A stopped stream returns 0. 
	// A paused stream is still considered active and the elapsed time advances.
	virtual float GetVideoStreamElapsedTime( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;

	// Caller acquires ref-counted frames for exclusive use and releases when finished. Failure to release frames degrades frame buffering.
	// NULL implies no frame available.
	virtual const vr::CameraVideoStreamFrame_t *GetVideoStreamFrame( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool ReleaseVideoStreamFrame( vr::TrackedDeviceIndex_t nDeviceIndex, const vr::CameraVideoStreamFrame_t *pFrameImage ) = 0;

	virtual bool SetAutoExposure( vr::TrackedDeviceIndex_t nDeviceIndex, bool bEnable ) = 0;

	// A stream can only be paused after it is started. The pause state is cleared after stopping.
	// The camera may not support pause/resume semantics due to HW limitations.
	virtual bool SupportsPauseResume( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool PauseVideoStream( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool ResumeVideoStream( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;
	virtual bool IsVideoStreamPaused( vr::TrackedDeviceIndex_t nDeviceIndex ) = 0;

	virtual bool GetCameraDistortion( vr::TrackedDeviceIndex_t nDeviceIndex, float flInputU, float flInputV, float *pflOutputU, float *pflOutputV ) = 0;
	virtual bool GetCameraProjection( vr::TrackedDeviceIndex_t nDeviceIndex, float flWidthPixels, float flHeightPixels, float flZNear, float flZFar, vr::HmdMatrix44_t *pProjection ) = 0;
};

static const char * const IVRTrackedCamera_Version = "IVRTrackedCamera_001";

}
// ivrextendeddisplay.h
namespace vr
{

	/** NOTE: Use of this interface is not recommended in production applications. It will not work for displays which use
	* direct-to-display mode. It is also incompatible with the VR compositor and is not available when the compositor is running. */
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

// End

#endif // _OPENVR_API


namespace vr
{

	/** Finds the active installation of the VR API and initializes it. The provided path must be absolute 
	* or relative to the current working directory. These are the local install versions of the equivalent
	* functions in steamvr.h and will work without a local Steam install.
	*
	* This path is to the "root" of the VR API install. That's the directory with 
	* the "drivers" directory and a platform (i.e. "win32") directory in it, not the directory with the DLL itself.
	*/
	VR_INTERFACE vr::IVRSystem *VR_CALLTYPE VR_Init( vr::EVRInitError *peError, vr::EVRApplicationType eApplicationType = vr::VRApplication_Scene );

	/** unloads vrclient.dll. Any interface pointers from the interface are 
	* invalid after this point */
	VR_INTERFACE void VR_CALLTYPE VR_Shutdown();

	/** Returns true if there is an HMD attached. This check is as lightweight as possible and
	* can be called outside of VR_Init/VR_Shutdown. It should be used when an application wants
	* to know if initializing VR is a possibility but isn't ready to take that step yet.
	*/
	VR_INTERFACE bool VR_CALLTYPE VR_IsHmdPresent();

	/** Returns true if the OpenVR runtime is installed. */
	VR_INTERFACE bool VR_CALLTYPE VR_IsRuntimeInstalled();

	/** Returns the name of the enum value for an EVRInitError. This function may be called outside of VR_Init()/VR_Shutdown(). */
	VR_INTERFACE const char *VR_CALLTYPE VR_GetVRInitErrorAsSymbol( vr::EVRInitError error );

	/** Returns an english string for an EVRInitError. Applications should call VR_GetVRInitErrorAsSymbol instead and 
	* use that as a key to look up their own localized error message. This function may be called outside of VR_Init()/VR_Shutdown(). */
	VR_INTERFACE const char *VR_CALLTYPE VR_GetVRInitErrorAsEnglishDescription( vr::EVRInitError error );

	/** Returns the interface of the specified version. This method must be called after VR_Init. The
	* pointer returned is valid until VR_Shutdown is called.
	*/
	VR_INTERFACE void *VR_CALLTYPE VR_GetGenericInterface( const char *pchInterfaceVersion, vr::EVRInitError *peError );

	/** Returns the current IVRSystem pointer or NULL if VR_Init has not been called successfully */
	VR_INTERFACE vr::IVRSystem *VR_CALLTYPE VRSystem();

	/** Returns the current IVRChaperone pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRChaperone *VR_CALLTYPE VRChaperone();

	/** Returns the current IVRChaperoneSetup pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRChaperoneSetup *VR_CALLTYPE VRChaperoneSetup();

	/** Returns the current IVRCompositor pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRCompositor *VR_CALLTYPE VRCompositor();

	/** Returns the current IVROverlay pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVROverlay *VR_CALLTYPE VROverlay();

	/** Returns the current IVRRenderModels pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRRenderModels *VR_CALLTYPE VRRenderModels();

	/** Returns the current IVRTrackedCamera pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRTrackedCamera *VR_CALLTYPE VRTrackedCamera();

	/** Returns the current IVRExtendedDisplay pointer or NULL the interface could not be found. 
	* This function will also return NULL if the VR Compositor is running as the extended display
	* interface is incompatible with the compositor. */
	VR_INTERFACE vr::IVRExtendedDisplay *VR_CALLTYPE VRExtendedDisplay();




	// These typedefs allow old enum names from SDK 0.9.11 to be used in applications.
	// They will go away in the future.
	typedef EVRInitError HmdError;
	typedef EVREye Hmd_Eye;
	typedef EGraphicsAPIConvention GraphicsAPIConvention;
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
}
