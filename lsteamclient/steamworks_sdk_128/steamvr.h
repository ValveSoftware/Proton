#pragma once

#include <stdint.h>

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

class IHmd
{
public:


	// ------------------------------------
	// Display Methods
	// ------------------------------------

	/** Size and position that the window needs to be on the VR display. */
	virtual bool GetWindowBounds( int32_t *pnX, int32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

	/** Suggested size for the intermediate render target that the distortion pulls from. */
	virtual void GetRecommendedRenderTargetSize( uint32_t *pnWidth, uint32_t *pnHeight ) = 0;

	/** Gets the viewport in the frame buffer to draw the output of the disortion into */
	virtual void GetEyeOutputViewport( Hmd_Eye eEye, GraphicsAPIConvention eAPIType, uint32_t *pnX, uint32_t *pnY, uint32_t *pnWidth, uint32_t *pnHeight ) = 0;
	
	/** The projection matrix for the specified eye */
	virtual HmdMatrix44_t GetProjectionMatrix( Hmd_Eye eEye, float fNearZ, float fFarZ, GraphicsAPIConvention eProjType ) = 0;

	/** The components necessary to build your own projection matrix in case your
	* application is doing something fancy like infinite Z */
	virtual void GetProjectionRaw( Hmd_Eye eEye, float *pfLeft, float *pfRight, float *pfTop, float *pfBottom ) = 0;

	/** Returns the result of the distortion function for the specified eye and input UVs. UVs go from 0,0 in 
	* the upper left of that eye's viewport and 1,1 in the lower right of that eye's viewport. */
	virtual DistortionCoordinates_t ComputeDistortion( Hmd_Eye eEye, float fU, float fV ) = 0;

	/** Returns the transform between the view space and eye space. Eye space is the per-eye flavor of view
	* space that provides stereo disparity. Instead of Model * View * Projection the model is Model * View * Eye * Projection. 
	* Normally View and Eye will be multiplied together and treated as View in your application. 
	*/
	virtual HmdMatrix44_t GetEyeMatrix( Hmd_Eye eEye ) = 0;

	/** For use in simple VR apps, this method returns the concatenation of the 
	* tracking pose and the eye matrix to get a full view matrix for each eye.
	* This is ( GetEyeMatrix() ) * (GetWorldFromHeadPose() ^ -1 )  */
	virtual bool GetViewMatrix( float fSecondsFromNow, HmdMatrix44_t *pMatLeftView, HmdMatrix44_t *pMatRightView, HmdTrackingResult *peResult ) = 0;

	/** [D3D9 Only]
	* Returns the adapter index that the user should pass into CreateDevice to set up D3D9 in such
	* a way that it can go full screen exclusive on the HMD. Returns -1 if there was an error.
	*/
	virtual int32_t GetD3D9AdapterIndex() = 0;

	// ------------------------------------
	// Tracking Methods
	// ------------------------------------

	/** The pose that the tracker thinks that the HMD will be in at the specified
	* number of seconds into the future. Pass 0 to get the current state. 
	*
	* This is roughly analagous to the inverse of the view matrix in most applications, though 
	* many games will need to do some additional rotation or translation on top of the rotation
	* and translation provided by the head pose.
	*
	* If this function returns true the pose has been populated with a pose that can be used by the application.
	* Check peResult for details about the pose, including messages that should be displayed to the user.
	*/
	virtual bool GetWorldFromHeadPose( float fPredictedSecondsFromNow, HmdMatrix34_t *pmPose, HmdTrackingResult *peResult ) = 0;

	/** Passes back the pose matrix from the last successful call to GetWorldFromHeadPose(). Returns true if that matrix is 
	* valid (because there has been a previous successful pose.) */
	virtual bool GetLastWorldFromHeadPose( HmdMatrix34_t *pmPose ) = 0;

	/** Returns true if the tracker for this HMD will drift the Yaw component of its pose over time regardless of
	* actual head motion. This is true for gyro-based trackers with no ground truth. */
	virtual bool WillDriftInYaw() = 0;

	/** Sets the zero pose for the tracker coordinate system. After this call all WorldFromHead poses will be relative 
	* to the pose whenever this was called. The new zero coordinate system will not change the fact that the Y axis is
	* up in the real world, so the next pose returned from GetWorldFromHeadPose after a call to ZeroTracker may not be
	* exactly an identity matrix. */
	virtual void ZeroTracker() = 0;

	// ------------------------------------
	// Administrative methods
	// ------------------------------------

	/** The ID of the driver this HMD uses as a UTF-8 string. Returns the length of the ID in bytes. If 
	* the buffer is not large enough to fit the ID an empty string will be returned. In general, 128 bytes
	* will be enough to fit any ID. */
	virtual uint32_t GetDriverId( char *pchBuffer, uint32_t unBufferLen ) = 0;

	/** The ID of this display within its driver this HMD uses as a UTF-8 string. Returns the length of the ID in bytes. If 
	* the buffer is not large enough to fit the ID an empty string will be returned. In general, 128 bytes
	* will be enough to fit any ID. */
	virtual uint32_t GetDisplayId( char *pchBuffer, uint32_t unBufferLen ) = 0;
};

static const char * const IHmd_Version = "IHmd_002";

/** error codes returned by Vr_Init */
enum HmdError
{
	HmdError_None = 0,

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

	HmdError_Driver_Failed = 200,

	HmdError_IPC_ServerInitFailed		= 300,
	HmdError_IPC_ConnectFailed			= 301,
	HmdError_IPC_SharedStateInitFailed	= 302,

};


// figure out how to import from the VR API dll
#if defined(_WIN32)

#ifdef VR_API_EXPORT
#define VR_INTERFACE extern "C" __declspec( dllexport )
#else
#define VR_INTERFACE extern "C" __declspec( dllimport )
#endif

#elif defined(GNUC) || defined(COMPILER_GCC)

#ifdef VR_API_EXPORT
#define VR_INTERFACE extern "C" __attribute__((visibility("default")))
#else
#define VR_INTERFACE extern "C" 
#endif

#else
#error "Unsupported Platform."
#endif




/** Finds the active installation of the VR API and initializes it. The priority for figuring 
* out where to load vrclient from are:
*  1. The convar "VR_OVERRIDE", which should contain an absolute path to the root of
*     an vr API directory. 
*  2. The pchVROverride argument. This should be an absolute path or a path relative to
*     the current executable.
*  3. The path "./vr" relative to the current executable's path.
*
* Each of these paths are to the "root" of the VR API install. That's the directory with 
* the "drivers" directory and a platform (i.e. "win32") directory in it, not the directory with the DLL itself.
*/
VR_INTERFACE IHmd *VR_Init( HmdError *peError );

/** unloads vrclient.dll. Any interface pointers from the interface are 
* invalid after this point */
VR_INTERFACE void VR_Shutdown( );

#pragma pack( pop )


}