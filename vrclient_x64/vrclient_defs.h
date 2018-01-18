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



#if 0

typedef int EAccountType;
typedef int EUniverse;
typedef int ENotificationPosition;
typedef int ESteamAPICallFailure;
typedef int EGamepadTextInputMode;
typedef int EGamepadTextInputLineMode;
typedef int EVoiceResult;
typedef int EBeginAuthSessionResult;
typedef int EUserHasLicenseForAppResult;
typedef int EPersonaState;
typedef int EFriendRelationship;
typedef int EPersonaState;
typedef int EOverlayToStoreFlag;
typedef int EChatEntryType;
typedef int ELobbyType;
typedef int ELobbyDistanceFilter;
typedef int ELobbyComparison;
typedef int EMatchMakingServerResponse;
typedef int ELeaderboardSortMethod;
typedef int ELeaderboardDisplayType;
typedef int ELeaderboardDataRequest;
typedef int ELeaderboardUploadScoreMethod;
typedef int EP2PSend;
typedef int ESNetSocketConnectionType;
typedef int ERemoteStoragePublishedFileVisibility;
typedef int EWorkshopFileAction;
typedef int EWorkshopEnumerationType;
typedef int ERemoteStoragePlatform;
typedef int EUGCReadAction;
typedef int EWorkshopFileType;
typedef int EWorkshopVideoProvider;
typedef int EVRScreenshotType;
typedef int EHTTPMethod;
typedef int EResult;
typedef int ESteamControllerPad;
typedef int EControllerActionOrigin;
typedef int EUserUGCList,
        EUGCMatchingUGCType,
        EUserUGCListSortOrder,
        EUGCQuery,
        EUGCMatchingUGCType,
        EItemUpdateStatus,
        EItemStatistic,
        EItemPreviewType,
        EAuthSessionResponse,
        EHTTPStatusCode,
        EDenyReason,
        ERegisterActivationCodeResult,
        EWorkshopVote,
        EChatRoomEnterResponse,
        ECheckFileSignature,
        EBroadcastUploadResult,
        EGCResults
;
typedef int EMatchMakingType;
typedef int AudioPlayback_Status;

/* these are PODs, so just copy the data. hopefully the
 * packing and alignment are the same... */
typedef struct CSteamID { unsigned char a[8]; } CSteamID;
typedef struct CGameID { unsigned char a[8]; } CGameID;
typedef struct MatchMakingKeyValuePair_t { unsigned char a[64]; } MatchMakingKeyValuePair_t;
typedef struct gameserveritem_t { unsigned char a[372]; } gameserveritem_t;
typedef struct LeaderboardEntry_t { unsigned char a[28]; } LeaderboardEntry_t;
typedef struct RemoteStorageUpdatePublishedFileRequest_t { unsigned char a[40]; } RemoteStorageUpdatePublishedFileRequest_t;
typedef struct ControllerAnalogActionData_t { unsigned char a[13]; } ControllerAnalogActionData_t;
typedef struct ControllerDigitalActionData_t { unsigned char a[2]; } ControllerDigitalActionData_t;
typedef struct ControllerMotionData_t { unsigned char a[40]; } ControllerMotionData_t;
typedef struct SteamUGCDetails_t { unsigned char a[9764]; } SteamUGCDetails_t;

/* never dereferenced */
typedef struct FriendGameInfo_t FriendGameInfo_t;
typedef struct P2PSessionState_t P2PSessionState_t;
typedef struct SteamParamStringArray_t SteamParamStringArray_t;
typedef struct ISteamMatchmakingServerListResponse ISteamMatchmakingServerListResponse;
typedef struct ISteamMatchmakingPingResponse ISteamMatchmakingPingResponse;
typedef struct ISteamMatchmakingPlayersResponse ISteamMatchmakingPlayersResponse;
typedef struct ISteamMatchmakingRulesResponse ISteamMatchmakingRulesResponse;
typedef struct RemoteStorageUpdatePublishedFileRequest_t RemoteStorageUpdatePublishedFileRequest_t;
typedef struct SteamControllerState001_t SteamControllerState001_t;
typedef struct SteamItemDetails_t SteamItemDetails_t;

/* FIXME: we don't care about fn pointer types, just pass 'em through */
typedef void *SteamAPI_CheckCallbackRegistered_t;
typedef void *SteamAPIWarningMessageHook_t;
typedef void *SteamAPI_PostAPIResultInProcess_t;

typedef unsigned char uint8;
typedef unsigned char uint8;
typedef signed char int8;
typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;
typedef long long int64;
typedef unsigned long long uint64;
typedef int64 lint64;
typedef uint64 ulint64;
typedef uint8 Salt_t[8];
typedef uint64 GID_t;
typedef uint64 JobID_t;
typedef GID_t TxnID_t;
typedef uint32 PackageId_t;
typedef uint32 BundleId_t;
typedef uint32 AppId_t;
typedef uint64 AssetClassId_t;
typedef uint32 PhysicalItemId_t;
typedef uint32 DepotId_t;
typedef uint32 RTime32;
typedef uint32 CellID_t;
typedef uint64 SteamAPICall_t;
typedef uint32 AccountID_t;
typedef uint32 PartnerId_t;
typedef uint64 ManifestId_t;
typedef uint32 HAuthTicket;
typedef uint64 SteamLeaderboard_t;
typedef uint64 SteamLeaderboardEntries_t;
typedef void * BREAKPAD_HANDLE;
typedef char compile_time_assert_type[1];
typedef int32 HSteamPipe;
typedef int32 HSteamUser;
typedef int16 FriendsGroupID_t;
typedef void * HServerListRequest;
typedef int HServerQuery;
typedef uint64 UGCHandle_t;
typedef uint64 PublishedFileUpdateHandle_t;
typedef uint32 SNetListenSocket_t;
typedef uint32 SNetSocket_t;
typedef uint64 PublishedFileId_t;
typedef uint64 UGCFileWriteStreamHandle_t;
typedef uint32 ScreenshotHandle;
typedef uint32 HTTPRequestHandle;
typedef uint32 HTTPCookieContainerHandle;
typedef uint64 ClientUnifiedMessageHandle;
typedef uint64 ControllerHandle_t;
typedef uint64 ControllerActionSetHandle_t;
typedef uint64 ControllerAnalogActionHandle_t;
typedef uint64 ControllerDigitalActionHandle_t;
typedef uint64 UGCQueryHandle_t;
typedef uint64 UGCUpdateHandle_t;
typedef uint32 HHTMLBrowser;
typedef int32 SteamInventoryResult_t, SteamItemDef_t;
typedef uint64 SteamItemInstanceID_t;
#endif

#endif
