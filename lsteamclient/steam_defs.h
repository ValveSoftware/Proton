#include <stdint.h>
#include <limits.h>
typedef uint32_t EHTMLMouseButton, EHTMLKeyModifiers;
#define nullptr (void*)0

#ifndef __cplusplus
#ifndef bool
typedef char bool; /* 1 byte on modern visual studio c++ */
#endif

typedef uint8_t uint8;
typedef int8_t int8;
typedef int16_t int16;
typedef uint16_t uint16;
typedef int32_t int32;
typedef uint32_t uint32;
typedef int64_t int64;
typedef uint64_t uint64;
typedef int64 lint64;
typedef uint64 ulint64;

typedef uint32_t EUserUGCList,
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
        EGCResults,
        ESteamInputType,
        EParentalFeature,
        EAccountType,
        EUniverse,
        ENotificationPosition,
        ESteamAPICallFailure,
        EGamepadTextInputMode,
        EGamepadTextInputLineMode,
        EVoiceResult,
        EBeginAuthSessionResult,
        EUserHasLicenseForAppResult,
        EPersonaState,
        EFriendRelationship,
        EPersonaState,
        EOverlayToStoreFlag,
        EChatEntryType,
        ELobbyType,
        ELobbyDistanceFilter,
        ELobbyComparison,
        EMatchMakingServerResponse,
        ELeaderboardSortMethod,
        ELeaderboardDisplayType,
        ELeaderboardDataRequest,
        ELeaderboardUploadScoreMethod,
        EP2PSend,
        ESNetSocketConnectionType,
        ERemoteStoragePublishedFileVisibility,
        EWorkshopFileAction,
        EWorkshopEnumerationType,
        ERemoteStoragePlatform,
        EUGCReadAction,
        EWorkshopFileType,
        EWorkshopVideoProvider,
        EVRScreenshotType,
        EHTTPMethod,
        EResult,
        ESteamControllerPad,
        EControllerActionOrigin,
        EMatchMakingType,
        AudioPlayback_Status,
        ESteamUserStatType,
        EConfigSubTree,
        ELogonState,
        EXboxOrigin,
        EInputSourceMode,
        EActivateGameOverlayToWebPageMode,
        ESteamPartyBeaconLocationData,
        ESteamPartyBeaconLocationType,
        EInputActionOrigin,
        ESteamNetworkingIdentityType,
        ESteamNetworkingConfigScope,
        ESteamNetworkingConfigValue,
        ESteamNetworkingConfigDataType,
        ESteamNetworkingSocketsDebugOutputType,
        ESteamNetworkingGetConfigValueResult,
        EGameSearchErrorCode_t,
        EPlayerResult_t,
        ESteamNetworkingAvailability,
        ESteamDeviceFormFactor,
        ESteamIPv6ConnectivityState,
        ESteamIPv6ConnectivityProtocol
;

/* XXX NO */
typedef struct ISteamNetworkingCustomSignalingRecvContext ISteamNetworkingCustomSignalingRecvContext;
typedef struct ISteamNetworkingConnectionCustomSignaling ISteamNetworkingConnectionCustomSignaling;

/* structs below are PODs with identical size & layout across platforms */

typedef struct CSteamID { unsigned char a[8]; } CSteamID;
typedef struct CGameID { unsigned char a[8]; } CGameID;
typedef struct RemoteStorageUpdatePublishedFileRequest_t { unsigned char a[40]; } RemoteStorageUpdatePublishedFileRequest_t;
typedef struct ControllerAnalogActionData_t { unsigned char a[13]; } ControllerAnalogActionData_t;
typedef struct ControllerDigitalActionData_t { unsigned char a[2]; } ControllerDigitalActionData_t;
typedef struct ControllerMotionData_t { unsigned char a[40]; } ControllerMotionData_t;
typedef struct SteamNetworkPingLocation_t { uint8 m_data[ 512 ]; } SteamNetworkPingLocation_t;

/* XXX GET SIZE */
typedef struct SteamIPAddress_t { uint8 m_data[12]; } SteamIPAddress_t;

#pragma pack( push, 1 )

typedef struct InputAnalogActionData_t
{
	// Type of data coming from this action, this will match what got specified in the action set
	EInputSourceMode eMode;
	
	// The current state of this action; will be delta updates for mouse actions
	float x, y;
	
	// Whether or not this action is currently available to be bound in the active action set
	bool bActive;
} InputAnalogActionData_t;

typedef struct InputDigitalActionData_t
{
	// The current state of this action; will be true if currently pressed
	bool bState;
	
	// Whether or not this action is currently available to be bound in the active action set
	bool bActive;
} InputDigitalActionData_t;

typedef struct InputMotionData_t
{
	// Sensor-fused absolute rotation; will drift in heading
	float rotQuatX;
	float rotQuatY;
	float rotQuatZ;
	float rotQuatW;
	
	// Positional acceleration
	float posAccelX;
	float posAccelY;
	float posAccelZ;

	// Angular velocity
	float rotVelX;
	float rotVelY;
	float rotVelZ;
} InputMotionData_t;

typedef struct SteamNetworkingIPAddr
{
	union
	{
		uint8 m_ipv6[ 16 ];
		struct
		{
			uint64 m_8zeros;
			uint16 m_0000;
			uint16 m_ffff;
			uint8 m_ip[ 4 ];
		} m_ipv4;
	} ip;
	uint16 m_port;
} SteamNetworkingIPAddr;

#define k_cchMaxGenericString 32
#define k_cchMaxXboxPairwiseID 32
#define k_cbMaxGenericBytes 32

typedef struct SteamNetworkingIdentity
{
	ESteamNetworkingIdentityType m_eType;

	int m_cbSize;

	union {
		uint64 m_steamID64;
		char m_szGenericString[ k_cchMaxGenericString ];
		char m_szXboxPairwiseID[ k_cchMaxXboxPairwiseID ];
		uint8 m_genericBytes[ k_cbMaxGenericBytes ];
		SteamNetworkingIPAddr m_ip;
		uint32 m_reserved[ 32 ];
	} data;
} SteamNetworkingIdentity;

#pragma pack( pop )

/* never dereferenced and needs no conversion */
typedef struct FriendGameInfo_t FriendGameInfo_t;
typedef struct P2PSessionState_t P2PSessionState_t;
typedef struct SteamParamStringArray_t SteamParamStringArray_t;
typedef struct ISteamMatchmakingServerListResponse ISteamMatchmakingServerListResponse;
typedef struct ISteamMatchmakingPingResponse ISteamMatchmakingPingResponse;
typedef struct ISteamMatchmakingPlayersResponse ISteamMatchmakingPlayersResponse;
typedef struct ISteamMatchmakingRulesResponse ISteamMatchmakingRulesResponse;
typedef struct SteamControllerState001_t SteamControllerState001_t;
typedef struct SteamItemDetails_t SteamItemDetails_t;
typedef struct LeaderboardEntry_t LeaderboardEntry_t;
typedef struct SteamUGCDetails_t SteamUGCDetails_t;
typedef struct gameserveritem_t gameserveritem_t;
typedef struct MatchMakingKeyValuePair_t MatchMakingKeyValuePair_t;
typedef struct SteamPartyBeaconLocation_t SteamPartyBeaconLocation_t;
typedef struct SteamNetConnectionInfo_t SteamNetConnectionInfo_t;
typedef struct SteamNetworkingQuickConnectionStatus SteamNetworkingQuickConnectionStatus;
typedef struct SteamDatagramRelayAuthTicket SteamDatagramRelayAuthTicket;
typedef struct SteamDatagramHostedAddress SteamDatagramHostedAddress;
typedef struct SteamNetAuthenticationStatus_t SteamNetAuthenticationStatus_t;
typedef struct SteamDatagramGameCoordinatorServerLogin SteamDatagramGameCoordinatorServerLogin;
typedef struct SteamRelayNetworkStatus_t SteamRelayNetworkStatus_t;
typedef struct SteamIPAddress_t SteamIPAddress_t;
typedef struct SteamNetworkingConfigValue_t SteamNetworkingConfigValue_t;
typedef struct SteamNetworkingMessage_t SteamNetworkingMessage_t;

typedef uint32 (*SteamAPI_CheckCallbackRegistered_t)(int cb);
typedef void *SteamAPIWarningMessageHook_t; //already cdecl, no need for conversion(?)
typedef void *SteamAPI_PostAPIResultInProcess_t; //unused
typedef void (*FSteamNetworkingSocketsDebugOutput)(ESteamNetworkingSocketsDebugOutputType nType, const char *pszMsg);

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
typedef uint64 SteamInventoryUpdateHandle_t;
typedef uint64 PartyBeaconID_t;
typedef uint64 InputHandle_t;
typedef uint64 InputActionSetHandle_t;
typedef uint64 InputDigitalActionHandle_t;
typedef uint64 InputAnalogActionHandle_t;
typedef uint32 HSteamNetConnection;
typedef int64 SteamNetworkingMicroseconds;
typedef uint32 HSteamListenSocket;
typedef uint32 SteamNetworkingPOPID;
typedef uint32 RemotePlaySessionID_t;

#pragma pack( push, 4 )
typedef struct CallbackMsg_t
{
    HSteamUser m_hSteamUser;
    int m_iCallback;
    uint8 *m_pubParam;
    int m_cubParam;
} CallbackMsg_t;
#pragma pack( pop )
#endif
