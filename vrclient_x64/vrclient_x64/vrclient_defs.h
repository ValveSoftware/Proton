#ifndef __cplusplus
#ifndef bool
typedef char bool; /* 1 byte on modern visual studio c++ */
#endif

/* enums */
typedef int
        EVREye,
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
        EVRInitError,
        EVRApplicationType,
        EVRButtonId,
        EVRCompositorError,
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
        ECameraVideoStreamFormat,
        EVRInputError,
        EIOBufferError,
        EVRSkeletalTransformSpace,
        EIOBufferMode,
        EVRSkeletalMotionRange,
        EVRSkeletalReferencePose,
        EVRSkeletalTrackingLevel;

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
typedef uint64_t PropertyContainerHandle_t;
typedef PropertyContainerHandle_t DriverHandle_t;
typedef uint64_t IOBufferHandle_t;
typedef uint64_t VRActionHandle_t;
typedef uint64_t VRActionSetHandle_t;
typedef uint64_t VRInputValueHandle_t;
typedef int32_t BoneIndex_t;

/* never dereferenced */
typedef struct VROverlayIntersectionParams_t VROverlayIntersectionParams_t;
typedef struct VROverlayIntersectionResults_t VROverlayIntersectionResults_t;
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
typedef struct NotificationBitmap NotificationBitmap;
typedef struct ComponentState_t ComponentState_t;
typedef struct CameraVideoStreamFrame_t CameraVideoStreamFrame_t;
/* XXX VRControllerState_t is an alias for a versioned struct! */
typedef struct VRControllerState_t VRControllerState_t;
typedef struct VkDevice_T VkDevice_T;
typedef struct VkPhysicalDevice_T VkPhysicalDevice_T;
typedef struct VkInstance_T VkInstance_T;
typedef struct VkQueue_T VkQueue_T;
typedef struct InputDigitalActionData_t InputDigitalActionData_t;
typedef struct InputSkeletonActionData_t InputSkeletonActionData_t;
typedef struct InputPoseActionData_t InputPoseActionData_t;
typedef struct InputAnalogActionData_t InputAnalogActionData_t;
typedef struct VRActiveActionSet_t VRActiveActionSet_t;
typedef struct VRBoneTransform_t VRBoneTransform_t;
typedef struct InputOriginInfo_t InputOriginInfo_t;
typedef struct InputSkeletalActionData_t InputSkeletalActionData_t;
typedef struct VRSkeletalSummaryData_t VRSkeletalSummaryData_t;

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

typedef enum EGraphicsAPIConvention
{
    API_DirectX = 0,
    API_OpenGL = 1,
} EGraphicsAPIConvention;

typedef EGraphicsAPIConvention GraphicsAPIConvention;

typedef struct VRTextureBounds_t
{
    float uMin, vMin;
    float uMax, vMax;
} VRTextureBounds_t;

typedef VRTextureBounds_t Compositor_TextureBounds;

typedef enum ETextureType
{
    TextureType_DirectX = 0, // Handle is an ID3D11Texture
    TextureType_OpenGL = 1,  // Handle is an OpenGL texture name or an OpenGL render buffer name, depending on submit flags
    TextureType_Vulkan = 2, // Handle is a pointer to a VRVulkanTextureData_t structure
    TextureType_IOSurface = 3, // Handle is a macOS cross-process-sharable IOSurfaceRef
    TextureType_DirectX12 = 4, // Handle is a pointer to a D3D12TextureData_t structure
} ETextureType;

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

typedef struct Texture_t
{
    void *handle;
    ETextureType eType;
    EColorSpace eColorSpace;
} Texture_t;

typedef struct VRTextureWithPose_t
{
    Texture_t texture;
	HmdMatrix34_t mDeviceToAbsoluteTracking;
} VRTextureWithPose_t;

typedef struct VRTextureDepthInfo_t
{
	void* handle;
	HmdMatrix44_t mProjection;
	HmdVector2_t vRange;
} VRTextureDepthInfo_t;

typedef struct VRTextureWithDepth_t
{
    Texture_t texture;
	VRTextureDepthInfo_t depth;
} VRTextureWithDepth_t;

typedef struct VRTextureWithPoseAndDepth_t
{
    Texture_t texture;
	HmdMatrix34_t mDeviceToAbsoluteTracking;
	VRTextureDepthInfo_t depth;
} VRTextureWithPoseAndDepth_t;

typedef enum EVRSubmitFlags
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

    Submit_Screenshot = 0x04,
    Submit_VulkanTexture = 0x04,

    // Set to indicate that pTexture is a pointer to a VRTextureWithPose_t.
    // This flag can be combined with Submit_TextureWithDepth to pass a VRTextureWithPoseAndDepth_t.
    Submit_TextureWithPose = 0x08,

    // Set to indicate that pTexture is a pointer to a VRTextureWithDepth_t.
    // This flag can be combined with Submit_TextureWithPose to pass a VRTextureWithPoseAndDepth_t.
    Submit_TextureWithDepth = 0x10,
} EVRSubmitFlags;

typedef enum EVRCompositorTimingMode
{
    VRCompositorTimingMode_Implicit = 0,
    VRCompositorTimingMode_Explicit_RuntimePerformsPostPresentHandoff = 1,
    VRCompositorTimingMode_Explicit_ApplicationPerformsPostPresentHandoff = 2,
} EVRCompositorTimingMode;

typedef enum EVRRenderModelError
{
    VRRenderModelError_None = 0,
    VRRenderModelError_Loading = 100,
    VRRenderModelError_NotSupported = 200,
} EVRRenderModelError;

#endif
