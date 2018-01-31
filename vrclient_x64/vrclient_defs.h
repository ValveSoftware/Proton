#ifndef __cplusplus
typedef char bool; /* 1 byte on modern visual studio c++ */

/* enums */
typedef int
        EVREye,
        ETextureType,
        ETrackingUniverseOrigin,
        ETrackedDeviceClass,
        EDeviceActivityLevel,
        ETrackedControllerRole,
        ETrackedDeviceProperty,
        ETrackedPropertyError,
        EHiddenAreaMeshType,
        EVREventType,
        EVRControllerAxisType,
        EVRFirmwareError,
        EGraphicsAPIConvention,
        EVRInitError,
        EVRApplicationType,
        EVRButtonId,
        EVRRenderModelError,
        EVRCompositorError,
        EVRSubmitFlags,
        EVRCompositorTimingMode,
        EVRApplicationError,
        EVRApplicationProperty,
        EVRApplicationTransitionState,
        EVRSettingsError,
        ChaperoneCalibrationState,
        EChaperoneConfigFile,
        EVRNotificationType,
        EVRNotificationError,
        EVRNotificationStyle,
        EVROverlayError,
        EGamepadTextInputLineMode,
        EOverlayDirection,
        EColorSpace,
        EGamepadTextInputMode,
        VROverlayFlags,
        VROverlayTransformType,
        VROverlayInputMethod,
        EDualAnalogWhich,
        VRMessageOverlayResponse,
        EVRTrackedCameraError,
        EVRTrackedCameraFrameType,
        EVRScreenshotError,
        EVRScreenshotPropertyFilenames,
        EVRScreenshotType,
        Hmd_Eye,
        GraphicsAPIConvention,
        TrackingUniverseOrigin,
        TrackedDeviceClass,
        TrackedDeviceProperty,
        TrackedPropertyError,
        VRFirmwareError,
        EVRControllerEventOutputType,
        VRCompositorError,
        VRSubmitFlags_t,
        Compositor_DeviceType,
        NotificationError_t,
        VROverlayError,
        VROverlayVisibility,
        ECameraVideoStreamFormat;

typedef uint32_t DriverId_t;
typedef uint32_t TrackedDeviceIndex_t;
typedef uint32_t glUInt_t;
typedef uint32_t VRNotificationId;
typedef uint32_t ScreenshotHandle_t;
typedef int32_t glInt_t;
typedef int32_t TextureID_t;
typedef void *glSharedTextureHandle_t;
typedef uint64_t VROverlayHandle_t;
typedef uint64_t TrackedCameraHandle_t;
typedef uint32_t PropertyTypeTag_t;

/* never dereferenced */
typedef struct VROverlayIntersectionParams_t VROverlayIntersectionParams_t;
typedef struct VROverlayIntersectionResults_t VROverlayIntersectionResults_t;
typedef struct VRTextureBounds_t VRTextureBounds_t;
typedef struct Texture_t Texture_t;
typedef struct RenderModel_ComponentState_t RenderModel_ComponentState_t;
typedef struct RenderModel_ControllerMode_State_t RenderModel_ControllerMode_State_t;
typedef struct RenderModel_t RenderModel_t;
typedef struct RenderModel_TextureMap_t RenderModel_TextureMap_t;
typedef struct TrackedDevicePose_t TrackedDevicePose_t;
typedef struct VREvent_t VREvent_t;
typedef struct Compositor_FrameTiming Compositor_FrameTiming;
typedef struct Compositor_CumulativeStats Compositor_CumulativeStats;
typedef struct AppOverrideKeys_t AppOverrideKeys_t;
typedef struct VROverlayIntersectionMaskPrimitive_t VROverlayIntersectionMaskPrimitive_t;
typedef struct NotificationBitmap_t NotificationBitmap_t;
typedef struct CameraVideoStreamFrameHeader_t CameraVideoStreamFrameHeader_t;
typedef struct Compositor_OverlaySettings Compositor_OverlaySettings;
typedef struct ChaperoneSoftBoundsInfo_t ChaperoneSoftBoundsInfo_t;
typedef struct ChaperoneSeatedBoundsInfo_t ChaperoneSeatedBoundsInfo_t;
typedef struct Compositor_TextureBounds Compositor_TextureBounds;
typedef struct NotificationBitmap NotificationBitmap;
typedef struct ComponentState_t ComponentState_t;
typedef struct CameraVideoStreamFrame_t CameraVideoStreamFrame_t;
/* XXX VRControllerState_t is an alias for a versioned struct! */
typedef struct VRControllerState_t VRControllerState_t;
typedef struct VkDevice_T VkDevice_T;
typedef struct VkPhysicalDevice_T VkPhysicalDevice_T;
typedef struct VkInstance_T VkInstance_T;
typedef struct VkQueue_T VkQueue_T;

/* dereferenced structs */
typedef struct HmdMatrix34_t
{
	float m[3][4];
} HmdMatrix34_t;

typedef struct HmdMatrix44_t
{
	float m[4][4];
} HmdMatrix44_t;

typedef struct HmdVector3_t
{
	float v[3];
} HmdVector3_t;

typedef struct HmdVector4_t
{
	float v[4];
} HmdVector4_t;

typedef struct HmdVector3d_t
{
	double v[3];
} HmdVector3d_t;

typedef struct HmdVector2_t
{
	float v[2];
} HmdVector2_t;

typedef struct HmdQuaternion_t
{
	double w, x, y, z;
} HmdQuaternion_t;

typedef struct HmdColor_t
{
	float r, g, b, a;
} HmdColor_t;

typedef struct HmdQuad_t
{
	HmdVector3_t vCorners[ 4 ];
} HmdQuad_t;

typedef struct HmdRect2_t
{
	HmdVector2_t vTopLeft;
	HmdVector2_t vBottomRight;
} HmdRect2_t;

typedef struct DistortionCoordinates_t
{
	float rfRed[2];
	float rfGreen[2];
	float rfBlue[2];
} DistortionCoordinates_t;

typedef struct HiddenAreaMesh_t
{
        const HmdVector2_t *pVertexData;
        uint32_t unTriangleCount;
} HiddenAreaMesh_t;

#endif
