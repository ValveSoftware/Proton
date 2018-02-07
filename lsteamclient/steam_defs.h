typedef int EHTMLMouseButton, EHTMLKeyModifiers;

#ifndef __cplusplus
#ifndef bool
typedef char bool; /* 1 byte on modern visual studio c++ */
#endif

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
        EGCResults,
        ESteamInputType,
        EParentalFeature
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
typedef uint64 SteamInventoryUpdateHandle_t;

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
