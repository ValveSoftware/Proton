
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

struct HmdQuad_t
{
	HmdVector3_t vCorners[ 4 ];
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

enum Hmd_Eye
{
	Eye_Left = 0,
	Eye_Right = 1
};

enum GraphicsAPIConvention
{
	API_DirectX = 0, // Normalized Z goes from 0 at the viewer to 1 at the far clip plane
	API_OpenGL = 1,  // Normalized Z goes from 1 at the viewer to -1 at the far clip plane
};

enum HmdTrackingResult
{
	TrackingResult_Uninitialized			= 1,

	TrackingResult_Calibrating_InProgress	= 100,
	TrackingResult_Calibrating_OutOfRange	= 101,

	TrackingResult_Running_OK				= 200,
	TrackingResult_Running_OutOfRange		= 201,
};

static const uint32_t k_unTrackingStringSize = 32;
static const uint32_t k_unMaxTrackedDeviceCount = 16;
static const uint32_t k_unTrackedDeviceIndex_Hmd = 0;
static const uint32_t k_unMaxDriverDebugResponseSize = 32768;

/** Describes what kind of object is being tracked at a given ID */
enum TrackedDeviceClass
{
	TrackedDeviceClass_Invalid = 0,				// the ID was not valid.
	TrackedDeviceClass_HMD = 1,					// Head-Mounted Displays
	TrackedDeviceClass_Controller = 2,			// Tracked controllers
	TrackedDeviceClass_TrackingReference = 4,	// Camera and base stations that serve as tracking reference points

	TrackedDeviceClass_Other = 1000,
};


/** describes a single pose for a tracked object */
struct TrackedDevicePose_t
{
	HmdMatrix34_t mDeviceToAbsoluteTracking;
	HmdVector3_t vVelocity;				// velocity in tracker space in m/s
	HmdVector3_t vAngularVelocity;		// angular velocity in radians/s (?)
	HmdTrackingResult eTrackingResult;
	bool bPoseIsValid;

	// This indicates that there is a device connected for this spot in the pose array.
	// It could go from true to false if the user unplugs the device.
	bool bDeviceIsConnected;
};

/** Identifies which style of tracking origin the application wants to use
* for the poses it is requesting */
enum TrackingUniverseOrigin
{
	TrackingUniverseSeated = 0,		// Poses are provided relative to the seated zero pose
	TrackingUniverseStanding = 1,	// Poses are provided relative to the safe bounds configured by the user
	TrackingUniverseRawAndUncalibrated = 2,	// Poses are provided in the coordinate system defined by the driver. You probably don't want this one.
};


/** Each entry in this enum represents a property that can be retrieved about a
* tracked device. Many fields are only valid for one TrackedDeviceClass. */
enum TrackedDeviceProperty
{
	// general properties that apply to all device classes
	Prop_TrackingSystemName_String			= 1000,
	Prop_ModelNumber_String					= 1001,
	Prop_SerialNumber_String				= 1002,
	Prop_RenderModelName_String				= 1003,
	Prop_WillDriftInYaw_Bool				= 1004,
	Prop_ManufacturerName_String			= 1005,
	Prop_TrackingFirmwareVersion_String		= 1006,
	Prop_HardwareRevision_String			= 1007,
	Prop_AllWirelessDongleDescriptions_String= 1008,
	Prop_ConnectedWirelessDongle_String		= 1009,
	Prop_DeviceIsWireless_Bool				= 1010,
	Prop_DeviceIsCharging_Bool				= 1011,
	Prop_DeviceBatteryPercentage_Float		= 1012, // 0 is empty, 1 is full
	Prop_StatusDisplayTransform_Matrix34	= 1013,

	// Properties that are unique to TrackedDeviceClass_HMD
	Prop_ReportsTimeSinceVSync_Bool			= 2000,
	Prop_SecondsFromVsyncToPhotons_Float	= 2001,
	Prop_DisplayFrequency_Float				= 2002,
	Prop_UserIpdMeters_Float				= 2003,
	Prop_CurrentUniverseId_Uint64			= 2004, 
	Prop_PreviousUniverseId_Uint64			= 2005, 
	Prop_DisplayFirmwareVersion_String		= 2006,
	Prop_IsOnDesktop_Bool					= 2007,

	// Properties that are unique to TrackedDeviceClass_Controller
	Prop_AttachedDeviceId_String			= 3000,
	Prop_SupportedButtons_Uint64			= 3001,
	Prop_Axis0Type_Int32					= 3002, // Return value is of type EVRControllerAxisType
	Prop_Axis1Type_Int32					= 3003, // Return value is of type EVRControllerAxisType
	Prop_Axis2Type_Int32					= 3004, // Return value is of type EVRControllerAxisType
	Prop_Axis3Type_Int32					= 3005, // Return value is of type EVRControllerAxisType
	Prop_Axis4Type_Int32					= 3006, // Return value is of type EVRControllerAxisType

	// Properties that are unique to TrackedDeviceClass_TrackingReference
	Prop_FieldOfViewLeftDegrees_Float		= 4000,
	Prop_FieldOfViewRightDegrees_Float		= 4001,
	Prop_FieldOfViewTopDegrees_Float		= 4002,
	Prop_FieldOfViewBottomDegrees_Float		= 4003,
	Prop_TrackingRangeMinimumMeters_Float	= 4004,
	Prop_TrackingRangeMaximumMeters_Float	= 4005,
};

/** Used to pass device IDs to API calls */
typedef uint32_t TrackedDeviceIndex_t;
static const uint32_t k_unTrackedDeviceIndexInvalid = 0xFFFFFFFF;

/** No string property will ever be longer than this length */
static const uint32_t k_unMaxPropertyStringSize = 32 * 1024;

/** Used to return errors that occur when reading properties. */
enum TrackedPropertyError
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
};


/** a single vertex in a render model */
struct RenderModel_Vertex_t
{
	HmdVector3_t vPosition;		// position in meters in device space
	HmdVector3_t vNormal;		
	float rfTextureCoord[ 2 ];
};

/** A texture map for use on a render model */
struct RenderModel_TextureMap_t
{
	uint16_t unWidth, unHeight; // width and height of the texture map in pixels
	const uint8_t *rubTextureMapData;	// Map texture data. All textures are RGBA with 8 bits per channel per pixel. Data size is width * height * 4ub
};

/** Contains everything a game needs to render a single tracked or static object for the user. */
struct RenderModel_t
{
	uint64_t ulInternalHandle;					// Used internally by SteamVR
	const RenderModel_Vertex_t *rVertexData;			// Vertex data for the mesh
	uint32_t unVertexCount;						// Number of vertices in the vertex data
	const uint16_t *rIndexData;						// Indices into the vertex data for each triangle
	uint32_t unTriangleCount;					// Number of triangles in the mesh. Index count is 3 * TriangleCount
	RenderModel_TextureMap_t diffuseTexture;	// RGBA diffuse texture for the model
};


/** Allows the application to control what part of the provided texture will be used in the
* frame buffer. */
struct VRTextureBounds_t
{
	float uMin, vMin;
	float uMax, vMax;
};

/** The types of events that could be posted (and what the parameters mean for each event type) */
enum EVREventType
{
	VREvent_None = 0,

	VREvent_TrackedDeviceActivated		= 100,
	VREvent_TrackedDeviceDeactivated	= 101,
	VREvent_TrackedDeviceUpdated		= 102,

	VREvent_ButtonPress					= 200, // data is controller
	VREvent_ButtonUnpress				= 201, // data is controller
	VREvent_ButtonTouch					= 202, // data is controller
	VREvent_ButtonUntouch				= 203, // data is controller

	VREvent_MouseMove					= 300, // data is mouse
	VREvent_MouseButtonDown				= 301, // data is mouse
	VREvent_MouseButtonUp				= 302, // data is mouse

	VREvent_InputFocusCaptured			= 400, // data is process
	VREvent_InputFocusReleased			= 401, // data is process
	VREvent_SceneFocusLost				= 402, // data is process
	VREvent_SceneFocusGained			= 403, // data is process

	VREvent_OverlayShown				= 500,
	VREvent_OverlayHidden				= 501,
	VREvent_DashboardActivated		= 502,
	VREvent_DashboardDeactivated	= 503,
	VREvent_DashboardThumbSelected	= 504, // Sent to the overlay manager - data is overlay
	VREvent_DashboardRequested		= 505, // Sent to the overlay manager - data is overlay
	VREvent_ResetDashboard			= 506, // Send to the overlay manager

	VREvent_Notification_Show				= 600,
	VREvent_Notification_Dismissed			= 601,
	VREvent_Notification_BeginInteraction	= 602,

	VREvent_Quit						= 700, // data is process
	VREvent_ProcessQuit					= 701, // data is process

	VREvent_ChaperoneDataHasChanged		= 800,
};


/** VR controller button and axis IDs */
enum EVRButtonId
{
	k_EButton_System			= 0,
	k_EButton_ApplicationMenu	= 1,
	k_EButton_Grip				= 2,

	k_EButton_Axis0				= 32,
	k_EButton_Axis1				= 33,
	k_EButton_Axis2				= 34,
	k_EButton_Axis3				= 35,
	k_EButton_Axis4				= 36,

	// aliases for well known controllers
	k_EButton_SteamVR_Touchpad	= k_EButton_Axis0,
	k_EButton_SteamVR_Trigger	= k_EButton_Axis1,

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
};


/** Used for a few events about overlays */
struct VREvent_Overlay_t
{
	uint64_t overlayHandle;
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


/** error codes returned by Vr_Init */
enum HmdError
{
	HmdError_None = 0,
	HmdError_Unknown = 1,

	HmdError_Init_InstallationNotFound	= 100,
	HmdError_Init_InstallationCorrupt	= 101,
	HmdError_Init_VRClientDLLNotFound	= 102,
	HmdError_Init_FileNotFound			= 103,
	HmdError_Init_FactoryNotFound		= 104,
	HmdError_Init_InterfaceNotFound		= 105,
	HmdError_Init_InvalidInterface		= 106,
	HmdError_Init_UserConfigDirectoryInvalid = 107,
	HmdError_Init_HmdNotFound			= 108,
	HmdError_Init_NotInitialized		= 109,
	HmdError_Init_PathRegistryNotFound	= 110,
	HmdError_Init_NoConfigPath			= 111,
	HmdError_Init_NoLogPath				= 112,
	HmdError_Init_PathRegistryNotWritable = 113,

	HmdError_Driver_Failed				= 200,
	HmdError_Driver_Unknown				= 201,
	HmdError_Driver_HmdUnknown			= 202,
	HmdError_Driver_NotLoaded			= 203,
	HmdError_Driver_RuntimeOutOfDate	= 204,
	HmdError_Driver_HmdInUse			= 205,
	HmdError_Driver_NotCalibrated		= 206,
	HmdError_Driver_CalibrationInvalid	= 207,
	HmdError_Driver_HmdDisplayNotFound  = 208,

	HmdError_IPC_ServerInitFailed		= 300,
	HmdError_IPC_ConnectFailed			= 301,
	HmdError_IPC_SharedStateInitFailed	= 302,
	HmdError_IPC_CompositorInitFailed	= 303,
	HmdError_IPC_MutexInitFailed		= 304,

	HmdError_VendorSpecific_UnableToConnectToOculusRuntime = 1000,

	HmdError_Steam_SteamInstallationNotFound = 2000,

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
// ivrsystem.h
namespace vr
{

class IVRSystem
{
public:


	// ------------------------------------
	// Display Methods
	// ------------------------------------

	/** Size and position that the window needs to be on the VR display. */
	virtual void GetWindowBounds( int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

	/** Suggested size for the intermediate render target that the distortion pulls from. */
	virtual void GetRecommendedRenderTargetSize( uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

	/** Gets the viewport in the frame buffer to draw the output of the distortion into */
	virtual void GetEyeOutputViewport( Hmd_Eye eEye, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;
	
	/** The projection matrix for the specified eye */
	virtual HmdMatrix44_t GetProjectionMatrix( Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType ) = 0;

	/** The components necessary to build your own projection matrix in case your
	* application is doing something fancy like infinite Z */
	virtual void GetProjectionRaw( Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom ) = 0;

	/** Returns the result of the distortion function for the specified eye and input UVs. UVs go from 0,0 in 
	* the upper left of that eye's viewport and 1,1 in the lower right of that eye's viewport. */
	virtual DistortionCoordinates_t ComputeDistortion( Hmd_Eye eEye, float fU, float fV ) = 0;

	/** Returns the transform from eye space to the head space. Eye space is the per-eye flavor of head
	* space that provides stereo disparity. Instead of Model * View * Projection the sequence is Model * View * Eye^-1 * Projection. 
	* Normally View and Eye^-1 will be multiplied together and treated as View in your application. 
	*/
	virtual HmdMatrix34_t GetEyeToHeadTransform( Hmd_Eye eEye ) = 0;

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
	virtual void GetDXGIOutputInfo( int32_t *pnAdapterIndex, int32_t *pnAdapterOutputIndex ) = 0;

	/** [Windows Only]
	* Notifies the system that the VR output will appear in a particular window.
	*/
	virtual bool AttachToWindow( void *hWnd ) = 0;

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
	* and receive poses relative to the chaperone soft bounds. TrackingUniverseRawAndUncalibrated should 
	* probably not be used unless the application is the chaperone calibration tool itself, but will provide
	* poses relative to the hardware-specific coordinate system in the driver.
	*/
	virtual void GetDeviceToAbsoluteTrackingPose( TrackingUniverseOrigin eOrigin, float fPredictedSecondsToPhotonsFromNow, VR_ARRAY_COUNT(unTrackedDevicePoseArrayCount) TrackedDevicePose_t *pTrackedDevicePoseArray, uint32_t unTrackedDevicePoseArrayCount ) = 0;

	/** Sets the zero pose for the seated tracker coordinate system to the current position and yaw of the HMD. After 
	* ResetSeatedZeroPose all GetDeviceToAbsoluteTrackingPose calls that pass TrackingUniverseSeated as the origin 
	* will be relative to this new zero pose. The new zero coordinate system will not change the fact that the Y axis 
	* is up in the real world, so the next pose returned from GetDeviceToAbsoluteTrackingPose after a call to 
	* ResetSeatedZeroPose may not be exactly an identity matrix. */
	virtual void ResetSeatedZeroPose() = 0;

	/** Returns the transform from the seated zero pose to the standing absolute tracking system. This allows 
	* applications to represent the seated origin to used or transform object positions from one coordinate
	* system to the other. 
	*
	* The seated origin may or may not be inside the soft or hard bounds returned by IVRChaperone. Its position 
	* depends on what the user has set in the chaperone calibration tool and previous calls to ResetSeatedZeroPose. */
	virtual HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose() = 0;

	/** Get a sorted array of device indices of a given class of tracked devices (e.g. controllers).  Devices are sorted right to left
	* relative to the specified tracked device (default: hmd -- pass in -1 for absolute tracking space).  Returns the number of devices
	* in the list, or the size of the array needed if not large enough. */
	virtual uint32_t GetSortedTrackedDeviceIndicesOfClass( TrackedDeviceClass eTrackedDeviceClass, VR_ARRAY_COUNT(unTrackedDeviceIndexArrayCount) vr::TrackedDeviceIndex_t *punTrackedDeviceIndexArray, uint32_t unTrackedDeviceIndexArrayCount, vr::TrackedDeviceIndex_t unRelativeToTrackedDeviceIndex = k_unTrackedDeviceIndex_Hmd ) = 0;


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
	virtual TrackedDeviceClass GetTrackedDeviceClass( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	/** Returns true if there is a device connected in this slot. */
	virtual bool IsTrackedDeviceConnected( vr::TrackedDeviceIndex_t unDeviceIndex ) = 0;

	/** Returns a bool property. If the device index is not valid or the property is not a bool type this function will return false. */
	virtual bool GetBoolTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError = 0L ) = 0;

	/** Returns a float property. If the device index is not valid or the property is not a float type this function will return 0. */
	virtual float GetFloatTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError = 0L ) = 0;

	/** Returns an int property. If the device index is not valid or the property is not a int type this function will return 0. */
	virtual int32_t GetInt32TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError = 0L ) = 0;

	/** Returns a uint64 property. If the device index is not valid or the property is not a uint64 type this function will return 0. */
	virtual uint64_t GetUint64TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError = 0L ) = 0;

	/** Returns a matrix property. If the device index is not valid or the property is not a matrix type, this function will return identity. */
	virtual HmdMatrix34_t GetMatrix34TrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, TrackedPropertyError *pError = 0L ) = 0;

	/** Returns a string property. If the device index is not valid or the property is not a float type this function will 
	* return 0. Otherwise it returns the length of the number of bytes necessary to hold this string including the trailing
	* null. Strings will generally fit in buffers of k_unTrackingStringSize characters. */
	virtual uint32_t GetStringTrackedDeviceProperty( vr::TrackedDeviceIndex_t unDeviceIndex, TrackedDeviceProperty prop, VR_OUT_STRING() char *pchValue, uint32_t unBufferSize, TrackedPropertyError *pError = 0L ) = 0;

	/** returns a string that corresponds with the specified property error. The string will be the name 
	* of the error enum value for all valid error codes */
	virtual const char *GetPropErrorNameFromEnum( TrackedPropertyError error ) = 0;

	// ------------------------------------
	// Event methods
	// ------------------------------------

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false */
	virtual bool PollNextEvent( VREvent_t *pEvent ) = 0;

	/** Returns true and fills the event with the next event on the queue if there is one. If there are no events
	* this method returns false. Fills in the pose of the associated tracked device in the provided pose struct. 
	* This pose will always be older than the call to this function and should not be used to render the device. */
	virtual bool PollNextEventWithPose( TrackingUniverseOrigin eOrigin, vr::VREvent_t *pEvent, vr::TrackedDevicePose_t *pTrackedDevicePose ) = 0;

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
	virtual HiddenAreaMesh_t GetHiddenAreaMesh( Hmd_Eye eEye ) = 0;


	// ------------------------------------
	// Controller methods
	// ------------------------------------

	/** Fills the supplied struct with the current state of the controller. Returns false if the controller index
	* is invalid. */
	virtual bool GetControllerState( vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState ) = 0;

	/** fills the supplied struct with the current state of the controller and the provided pose with the pose of 
	* the controller when the controller state was updated most recently. Use this form if you need a precise controller
	* pose as input to your application when the user presses or releases a button. */
	virtual bool GetControllerStateWithPose( TrackingUniverseOrigin eOrigin, vr::TrackedDeviceIndex_t unControllerDeviceIndex, vr::VRControllerState_t *pControllerState, TrackedDevicePose_t *pTrackedDevicePose ) = 0;

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

};

static const char * const IVRSystem_Version = "IVRSystem_005";

}

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
	ChaperoneCalibrationState_Error_SoftBoundsInvalid = 203,			// Soft bounds haven't been calibrated for the current tracking center
	ChaperoneCalibrationState_Error_HardBoundsInvalid = 204,			// Hard bounds haven't been calibrated for the current tracking center
};

/** SOFT BOUNDS ASSUMPTIONS
* Corners are in clockwise order.
* Tracking space center (0,0,0) is contained within the Soft Bounds.
* Angles of corners are between 25 and 155 degrees. 
* Quadrilateral formed is convex. 
* One side will run parallel to the X axis. 
* Height of every corner is 0Y (on the floor). */
struct ChaperoneSoftBoundsInfo_t
{
	HmdQuad_t quadCorners;
};

struct ChaperoneSeatedBoundsInfo_t
{
	HmdVector3_t vSeatedHeadPosition;
	HmdVector3_t vDeskEdgePositions[ 2 ];
};

/** HIGH LEVEL TRACKING SPACE ASSUMPTIONS:
* 0,0,0 is the preferred standing area center.
* 0Y is the floor height.
* -Z is the preferred forward facing direction. */
class IVRChaperone
{
public:

	/** Get the current state of Chaperone calibration. This state can change at any time during a session due to physical base station changes. */
	virtual ChaperoneCalibrationState GetCalibrationState() = 0;

	/** Returns the 4 corner positions of the Soft Bounds (also know as Safe Zone and Play Space). */
	virtual bool GetSoftBoundsInfo( ChaperoneSoftBoundsInfo_t *pInfo ) = 0;

	/** Returns the quads representing the Hard Bounds (static physical obstacles). */
	virtual bool GetHardBoundsInfo( VR_OUT_ARRAY_COUNT(punQuadsCount) HmdQuad_t *pQuadsBuffer, uint32_t* punQuadsCount ) = 0;

	/** Returns the preferred seated position and front edge of their desk. */
	virtual bool GetSeatedBoundsInfo( ChaperoneSeatedBoundsInfo_t *pInfo ) = 0;

	/** Reload Chaperone data from the .vrchap file on disk. */
	virtual void ReloadInfo( void ) = 0;

};

static const char * const IVRChaperone_Version = "IVRChaperone_002";

#pragma pack( pop )

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
enum VRCompositorError
{
	VRCompositorError_None						= 0,
	VRCompositorError_IncompatibleVersion		= 100,
	VRCompositorError_DoNotHaveFocus			= 101,
	VRCompositorError_InvalidTexture			= 102,
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
};


#pragma pack( pop )


/** Allows the application to interact with the compositor */
class IVRCompositor
{
public:
	/** Returns the last error that occurred in the compositor */
	virtual uint32_t GetLastError( VR_OUT_STRING() char* pchBuffer, uint32_t unBufferSize ) = 0;

	/** Turns vsync on or off on the compositor window */
	virtual void SetVSync( bool bVSync ) = 0;

	/** Returns true if vsync is enabled in the compositor window */
	virtual bool GetVSync() = 0;

	/** Sets gamma for the compositor window */
	virtual void SetGamma( float fGamma ) = 0;

	/** Returns the gamma for the compositor window */
	virtual float GetGamma() = 0;

	/** Returns pose(s) to use to render scene (and optionally poses predicted two frames out for gameplay). */
	virtual VRCompositorError WaitGetPoses( VR_ARRAY_COUNT(unRenderPoseArrayCount) TrackedDevicePose_t* pRenderPoseArray, uint32_t unRenderPoseArrayCount,
		VR_ARRAY_COUNT(unGamePoseArrayCount) TrackedDevicePose_t* pGamePoseArray, uint32_t unGamePoseArrayCount ) = 0;

	/** Updated scene texture to display. If pBounds is NULL the entire texture will be used.
	*
	* OpenGL dirty state:
	*	glBindTexture
	*/
	virtual VRCompositorError Submit( Hmd_Eye eEye, GraphicsAPIConvention eTextureType, void* pTexture, const VRTextureBounds_t* pBounds ) = 0;

	/** Clears the frame that was sent with the last call to Submit. This will cause the 
	* compositor to show the grid until Submit is called again. */
	virtual void ClearLastSubmittedFrame() = 0;

	/** Returns true if timing data is filled it.  Sets oldest timing info if nFramesAgo is larger than the stored history.
	* Be sure to set timing.size = sizeof(Compositor_FrameTiming) on struct passed in before calling this function. */
	virtual bool GetFrameTiming( Compositor_FrameTiming *pTiming, uint32_t unFramesAgo = 0 ) = 0;

	/** Fades the view on the HMD to the specified color. The fade will take fSeconds, and the color values are between 
	* 0.0 and 1.0. This color is faded on top of the scene based on the alpha parameter. Removing the fade color instantly 
	* would be FadeToColor( 0.0, 0.0, 0.0, 0.0, 0.0 ). */
	virtual void FadeToColor( float fSeconds, float fRed, float fGreen, float fBlue, float fAlpha, bool bBackground = false ) = 0;

	/** Fading the Grid in or out in fSeconds */
	virtual void FadeGrid( float fSeconds, bool bFadeIn ) = 0;

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

	/** Sets tracking space returned by WaitGetPoses */
	virtual void SetTrackingSpace( TrackingUniverseOrigin eOrigin ) = 0;

	/** Gets current tracking space returned by WaitGetPoses */
	virtual TrackingUniverseOrigin GetTrackingSpace() = 0;

	/** Returns the process ID of the process that is currently rendering the scene */
	virtual uint32_t GetCurrentSceneFocusProcess() = 0;

	/** Returns true if the current process has the scene focus */
	virtual bool CanRenderScene() = 0;
};

static const char * const IVRCompositor_Version = "IVRCompositor_007";

} // namespace vr


// ivroverlay.h
namespace vr
{

	/** used to refer to a single VR overlay */
	typedef uint64_t VROverlayHandle_t;

	static const VROverlayHandle_t k_ulOverlayHandleInvalid = 0;

	/** The maximum length of an overlay key in bytes, counting the terminating null character. */
	static const uint32_t k_unVROverlayMaxKeyLength = 128;

	/** The maximum length of an overlay name in bytes, counting the terminating null character. */
	static const uint32_t k_unVROverlayMaxNameLength = 128;

	/** The maximum number of overlays that can exist in the system at one time. */
	static const uint32_t k_unMaxOverlayCount = 32;

	/** Errors that can occur around VR overlays */
	enum VROverlayError
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
	};

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
	};

	struct VROverlayIntersectionParams_t
	{
		HmdVector3_t vSource;
		HmdVector3_t vDirection;
		TrackingUniverseOrigin eOrigin;
	};

	struct VROverlayIntersectionResults_t
	{
		HmdVector3_t vPoint;
		HmdVector3_t vNormal;
		HmdVector2_t vUVs;
		float fDistance;
	};

	class IVROverlay
	{
	public:

		// ---------------------------------------------
		// Overlay management methods
		// ---------------------------------------------

		/** Finds an existing overlay with the specified key. */
		virtual VROverlayError FindOverlay( const char *pchOverlayKey, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Creates a new named overlay. All overlays start hidden and with default settings. */
		virtual VROverlayError CreateOverlay( const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t * pOverlayHandle ) = 0;

		/** Destroys the specified overlay. When an application calls VR_Shutdown all overlays created by that app are
		* automatically destroyed. */
		virtual VROverlayError DestroyOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Specify which overlay to use the high quality render path.  This overlay will be composited in during the distortion pass which
		* results in it drawing on top of everything else, but also at a higher quality as it samples the source texture directly rather than
		* rasterizing into each eye's render texture first.  Because if this, only one of these is supported at any given time.  It is most useful
		* for overlays that are expected to take up most of the user's view (e.g. streaming video). */
		virtual VROverlayError SetHighQualityOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Returns the overlay handle of the current overlay being rendered using the single high quality overlay render path.
		* Otherwise it will return k_ulOverlayHandleInvalid. */
		virtual vr::VROverlayHandle_t GetHighQualityOverlay() = 0;

		/** returns a string that corresponds with the specified overlay error. The string will be the name 
		* of the error enum value for all valid error codes */
		virtual const char *GetOverlayErrorNameFromEnum( VROverlayError error ) = 0;


		// ---------------------------------------------
		// Overlay rendering methods
		// ---------------------------------------------

		/** Specify flag setting for a given overlay */
		virtual VROverlayError SetOverlayFlag( VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool bEnabled ) = 0;

		/** Sets flag setting for a given overlay */
		virtual VROverlayError GetOverlayFlag( VROverlayHandle_t ulOverlayHandle, VROverlayFlags eOverlayFlag, bool *pbEnabled ) = 0;

		/** Sets the color tint of the overlay quad. Use 0.0 to 1.0 per channel. */
		virtual VROverlayError SetOverlayColor( VROverlayHandle_t ulOverlayHandle, float fRed, float fGreen, float fBlue ) = 0;

		/** Gets the color tint of the overlay quad. */
		virtual VROverlayError GetOverlayColor( VROverlayHandle_t ulOverlayHandle, float *pfRed, float *pfGreen, float *pfBlue ) = 0;

		/** Sets the alpha of the overlay quad. Use 1.0 for 100 percent opacity to 0.0 for 0 percent opacity. */
		virtual VROverlayError SetOverlayAlpha( VROverlayHandle_t ulOverlayHandle, float fAlpha ) = 0;

		/** Gets the alpha of the overlay quad. By default overlays are rendering at 100 percent alpha (1.0). */
		virtual VROverlayError GetOverlayAlpha( VROverlayHandle_t ulOverlayHandle, float *pfAlpha ) = 0;

		/** Sets the gamma of the overlay quad. Use 2.2 when providing a texture in linear color space. */
		virtual VROverlayError SetOverlayGamma( VROverlayHandle_t ulOverlayHandle, float fGamma ) = 0;

		/** Gets the gamma of the overlay quad.  Be default overlays are rendered with 1.0 gamma. */
		virtual VROverlayError GetOverlayGamma( VROverlayHandle_t ulOverlayHandle, float *pfGamma ) = 0;

		/** Sets the width of the overlay quad in meters. By default overlays are rendered on a quad that is 1 meter across */
		virtual VROverlayError SetOverlayWidthInMeters( VROverlayHandle_t ulOverlayHandle, float fWidthInMeters ) = 0;

		/** Returns the width of the overlay quad in meters. By default overlays are rendered on a quad that is 1 meter across */
		virtual VROverlayError GetOverlayWidthInMeters( VROverlayHandle_t ulOverlayHandle, float *pfWidthInMeters ) = 0;

		/** Sets the part of the texture to use for the overlay. UV Min is the upper left corner and UV Max is the lower right corner. */
		virtual VROverlayError SetOverlayTextureBounds( VROverlayHandle_t ulOverlayHandle, const VRTextureBounds_t *pOverlayTextureBounds ) = 0;

		/** Gets the part of the texture to use for the overlay. UV Min is the upper left corner and UV Max is the lower right corner. */
		virtual VROverlayError GetOverlayTextureBounds( VROverlayHandle_t ulOverlayHandle, VRTextureBounds_t *pOverlayTextureBounds ) = 0;

		/** Returns the transform type of this overlay. */
		virtual VROverlayError GetOverlayTransformType( VROverlayHandle_t ulOverlayHandle, VROverlayTransformType *peTransformType ) = 0;

		/** Sets the transform to absolute tracking origin. */
		virtual VROverlayError SetOverlayTransformAbsolute( VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin eTrackingOrigin, const HmdMatrix34_t *pmatTrackingOriginToOverlayTransform ) = 0;

		/** Gets the transform if it is absolute. Returns an error if the transform is some other type. */
		virtual VROverlayError GetOverlayTransformAbsolute( VROverlayHandle_t ulOverlayHandle, TrackingUniverseOrigin *peTrackingOrigin, HmdMatrix34_t *pmatTrackingOriginToOverlayTransform ) = 0;

		/** Sets the transform to relative to the transform of the specified tracked device. */
		virtual VROverlayError SetOverlayTransformTrackedDeviceRelative( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unTrackedDevice, const HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform ) = 0;

		/** Gets the transform if it is relative to a tracked device. Returns an error if the transform is some other type. */
		virtual VROverlayError GetOverlayTransformTrackedDeviceRelative( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t *punTrackedDevice, HmdMatrix34_t *pmatTrackedDeviceToOverlayTransform ) = 0;

		/** Shows the VR overlay.  For dashboard overlays, only the Dashboard Manager is allowed to call this. */
		virtual VROverlayError ShowOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Hides the VR overlay.  For dashboard overlays, only the Dashboard Manager is allowed to call this. */
		virtual VROverlayError HideOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Returns true if the overlay is visible. */
		virtual bool IsOverlayVisible( VROverlayHandle_t ulOverlayHandle ) = 0;


		// ---------------------------------------------
		// Overlay input methods
		// ---------------------------------------------

		/** Returns true and fills the event with the next event on the overlay's event queue, if there is one. 
		* If there are no events this method returns false */
		virtual bool PollNextOverlayEvent( VROverlayHandle_t ulOverlayHandle, VREvent_t *pEvent ) = 0;

		/** Returns the current input settings for the specified overlay. */
		virtual VROverlayError GetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod *peInputMethod ) = 0;

		/** Sets the input settings for the specified overlay. */
		virtual VROverlayError SetOverlayInputMethod( VROverlayHandle_t ulOverlayHandle, VROverlayInputMethod eInputMethod ) = 0;

		/** Gets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels. */
		virtual VROverlayError GetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, HmdVector2_t *pvecMouseScale ) = 0;

		/** Sets the mouse scaling factor that is used for mouse events. The actual texture may be a different size, but this is
		* typically the size of the underlying UI in pixels. */
		virtual VROverlayError SetOverlayMouseScale( VROverlayHandle_t ulOverlayHandle, const HmdVector2_t *pvecMouseScale ) = 0;

		/** Computes the overlay-space pixel coordinates of where the ray intersects the overlay with the
		* specified settings. Returns false if there is no intersection. */
		virtual bool ComputeOverlayIntersection( VROverlayHandle_t ulOverlayHandle, const VROverlayIntersectionParams_t *pParams, VROverlayIntersectionResults_t *pResults ) = 0;

		/** Processes mouse input from the specified controller as though it were a mouse pointed at a compositor overlay with the
		* specified settings. The controller is treated like a laser pointer on the -z axis. The point where the laser pointer would
		* intersect with the overlay is the mouse position, the trigger is left mouse, and the track pad is right mouse. 
		*
		* Return true if the controller is pointed at the overlay and an event was generated. */
		virtual bool HandleControllerOverlayInteractionAsMouse( VROverlayHandle_t ulOverlayHandle, TrackedDeviceIndex_t unControllerDeviceIndex ) = 0;

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
		virtual VROverlayError SetOverlayTexture( VROverlayHandle_t ulOverlayHandle, GraphicsAPIConvention eTextureType, void* pTexture ) = 0;

		/** Use this to tell the overlay system to release the texture set for this overlay. */
		virtual VROverlayError ClearOverlayTexture( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Separate interface for providing the data as a stream of bytes, but there is an upper bound on data 
		* that can be sent. This function can only be called by the overlay's renderer process. */
		virtual VROverlayError SetOverlayRaw( VROverlayHandle_t ulOverlayHandle, void *pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth ) = 0;

		/** Separate interface for providing the image through a filename: can be png or jpg, and should not be bigger than 1920x1080.
		* This function can only be called by the overlay's renderer process */
		virtual VROverlayError SetOverlayFromFile( VROverlayHandle_t ulOverlayHandle, const char *pchFilePath ) = 0;

		// ----------------------------------------------
		// Dashboard Overlay Methods
		// ----------------------------------------------

		/** Creates a dashboard overlay and returns its handle */
		virtual VROverlayError CreateDashboardOverlay( const char *pchOverlayKey, const char *pchOverlayFriendlyName, VROverlayHandle_t * pMainHandle, VROverlayHandle_t *pThumbnailHandle ) = 0;

		/** Returns true if the dashboard is visible */
		virtual bool IsDashboardVisible() = 0;

		/** returns true if the dashboard is visible and the specified overlay is the active system Overlay */
		virtual bool IsActiveDashboardOverlay( VROverlayHandle_t ulOverlayHandle ) = 0;

		/** Sets the dashboard overlay to only appear when the specified process ID has scene focus */
		virtual VROverlayError SetDashboardOverlaySceneProcess( VROverlayHandle_t ulOverlayHandle, uint32_t unProcessId ) = 0;

		/** Gets the process ID that this system overlay requires to have scene focus */
		virtual VROverlayError GetDashboardOverlaySceneProcess( VROverlayHandle_t ulOverlayHandle, uint32_t *punProcessId ) = 0;
	};

	static const char * const IVROverlay_Version = "IVROverlay_002";

} // namespace vr
// ivrrendermodels.h
namespace vr
{

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
	virtual bool LoadRenderModel( const char *pchRenderModelName, RenderModel_t *pRenderModel ) = 0;

	/** Frees a previously returned render model */
	virtual void FreeRenderModel( RenderModel_t *pRenderModel ) = 0;

	/** Use this to get the names of available render models.  Index does not correlate to a tracked device index, but
	* is only used for iterating over all available render models.  If the index is out of range, this function will return 0.
	* Otherwise, it will return the size of the buffer required for the name. */
	virtual uint32_t GetRenderModelName( uint32_t unRenderModelIndex, VR_OUT_STRING() char *pchRenderModelName, uint32_t unRenderModelNameLen ) = 0;

	/** Returns the number of available render models. */
	virtual uint32_t GetRenderModelCount() = 0;


};

static const char * const IVRRenderModels_Version = "IVRRenderModels_001";

}

// ivrcontrolpanel.h
namespace vr
{

    class IVRControlPanel;
#if 0
class IVRControlPanel
{
public:

	// ------------------------------------
	// Driver enumeration methods
	// ------------------------------------

	/** the number of active drivers */
	virtual uint32_t GetDriverCount() = 0;

	/** The ID of the specified driver as a UTF-8 string. Returns the length of the ID in bytes. If 
	* the buffer is not large enough to fit the ID an empty string will be returned. In general, 128 bytes
	* will be enough to fit any ID. */
	virtual uint32_t GetDriverId( uint32_t unDriverIndex, char *pchBuffer, uint32_t unBufferLen ) = 0;

	// ------------------------------------
	// Display Enumeration Methods
	// ------------------------------------

	/** the number of active displays on the specified driver */
	virtual uint32_t GetDriverDisplayCount( const char *pchDriverId ) = 0;

	/** The ID of the specified display in the specified driver as a UTF-8 string. Returns the 
	* length of the ID in bytes. If the buffer is not large enough to fit the ID an empty
	* string will be returned. In general, 128 bytes will be enough to fit any ID. */
	virtual uint32_t GetDriverDisplayId( const char *pchDriverId, uint32_t unDisplayIndex, char *pchBuffer, uint32_t unBufferLen ) = 0;

	// ------------------------------------
	// Display Detail Methods
	// ------------------------------------

	/** The model name of the specified driver in the specified driver as a UTF-8 string. Returns the 
	* length of the model name in bytes. If the buffer is not large enough to fit the model name an empty
	* string will be returned. In general, 128 bytes will be enough to fit any model name. Returns 0 if
	* the display or driver was not found. */
	virtual uint32_t GetDriverDisplayModelNumber( const char *pchDriverId, const char *pchDisplayId, char *pchBuffer, uint32_t unBufferLen ) = 0;

	/** The serial number of the specified driver in the specified driver as a UTF-8 string. Returns the 
	* length of the serial number in bytes. If the buffer is not large enough to fit the serial number an empty
	* string will be returned. In general, 128 bytes will be enough to fit any model name. Returns 0 if
	* the display or driver was not found. */
	virtual uint32_t GetDriverDisplaySerialNumber( const char *pchDriverId, const char *pchDisplayId, char *pchBuffer, uint32_t unBufferLen ) = 0;

	/** Returns the IVRSystem interface for the current display that matches the specified version number. 
	* This is usually unnecessary and the return value of VR_Init can be used without calling this method. */
	VR_IGNOREATTR()
	virtual class IVRSystem *GetCurrentDisplayInterface( const char *pchHmdInterfaceVersion ) = 0;

	// ------------------------------------
	// Shared Resource Methods
	// ------------------------------------

	/** Loads the specified resource into the provided buffer if large enough.
	* Returns the size in bytes of the buffer required to hold the specified resource. */
	virtual uint32_t LoadSharedResource( const char *pchResourceName, char *pchBuffer, uint32_t unBufferLen ) = 0;

	// ------------------------------------
	// IPD Methods
	// ------------------------------------

	/** Gets the current IPD (Interpupillary Distance) in meters. */
	virtual float GetIPD() = 0;

	/** Sets the current IPD (Interpupillary Distance) in meters. */
	virtual void SetIPD( float fIPD ) = 0;

	// ------------------------------------
	// Compositor Methods
	// ------------------------------------

	/** Returns the IVRCompositor interface that matches the specified interface version.  This will only
	* return the compositor interface if it has already been initialized by the current process. */
	virtual class vr::IVRCompositor *GetCurrentCompositorInterface( const char *pchInterfaceVersion ) = 0;

	// ------------------------------------
	// Process control Methods
	// ------------------------------------

	/** Tells the specified OpenVR process to quit. If the process ID is 0, all processes will be told to quit,
	* ending with the process submitting the request. Returns false if the request could not be sent. */
	virtual bool QuitProcess( uint32_t pidProcessToQuit ) = 0;

};

static const char * const IVRControlPanel_Version = "IVRControlPanel_001";
#endif

}// End

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
	VR_INTERFACE vr::IVRSystem *VR_CALLTYPE VR_Init( vr::HmdError *peError );

	/** unloads vrclient.dll. Any interface pointers from the interface are 
	* invalid after this point */
	VR_INTERFACE void VR_CALLTYPE VR_Shutdown();

	/** Returns true if there is an HMD attached. This check is as lightweight as possible and
	* can be called outside of VR_Init/VR_Shutdown. It should be used when an application wants
	* to know if initializing VR is a possibility but isn't ready to take that step yet.
	*/
	VR_INTERFACE bool VR_CALLTYPE VR_IsHmdPresent();

	/** Returns the string version of an HMD error. This function may be called outside of VR_Init()/VR_Shutdown(). */
	VR_INTERFACE const char *VR_CALLTYPE VR_GetStringForHmdError( vr::HmdError error );

	/** Returns the interface of the specified version. This method must be called after VR_Init. The
	* pointer returned is valid until VR_Shutdown is called.
	*/
	VR_INTERFACE void *VR_CALLTYPE VR_GetGenericInterface( const char *pchInterfaceVersion, vr::HmdError *peError );

	/** Returns the current IVRSystem pointer or NULL if VR_Init has not been called successfully */
	VR_INTERFACE vr::IVRSystem *VR_CALLTYPE VRSystem();

	/** Returns the current IVRChaperone pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRChaperone *VR_CALLTYPE VRChaperone();

	/** Returns the current IVRCompositor pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRCompositor *VR_CALLTYPE VRCompositor();

	/** Returns the current IVROverlay pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVROverlay *VR_CALLTYPE VROverlay();

	/** Returns the current IVRRenderModels pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRRenderModels *VR_CALLTYPE VRRenderModels();

	/** Returns the current IVRControlPanel pointer or NULL the interface could not be found. */
	VR_INTERFACE vr::IVRControlPanel *VR_CALLTYPE VRControlPanel();


}
