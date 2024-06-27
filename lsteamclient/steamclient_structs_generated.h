typedef struct SteamNetworkingIPAddr SteamNetworkingIPAddr;
#pragma pack( push, 1 )
struct SteamNetworkingIPAddr
{
    struct { uint8_t _[16]; } data;
    uint16_t m_port;
};
#pragma pack( pop )

typedef struct SteamNetworkingIdentity_144 SteamNetworkingIdentity_144;
#pragma pack( push, 1 )
struct SteamNetworkingIdentity_144
{
    uint32_t m_eType;
    int32_t m_cbSize;
    struct { uint8_t _[128]; } data;
};
#pragma pack( pop )

typedef struct SteamNetworkingIdentity_151 SteamNetworkingIdentity_151;
#pragma pack( push, 1 )
struct SteamNetworkingIdentity_151
{
    uint32_t m_eType;
    int32_t m_cbSize;
};
#pragma pack( pop )

typedef struct SteamNetConnectionInfo_t_153a SteamNetConnectionInfo_t_153a;
#pragma pack( push, 8 )
struct SteamNetConnectionInfo_t_153a
{
    SteamNetworkingIdentity_144 m_identityRemote;
    int64_t m_nUserData;
    uint32_t m_hListenSocket;
    SteamNetworkingIPAddr m_addrRemote;
    uint16_t m__pad1;
    uint32_t m_idPOPRemote;
    uint32_t m_idPOPRelay;
    uint32_t m_eState;
    int32_t m_eEndReason;
    char (m_szEndDebug)[128];
    char (m_szConnectionDescription)[128];
    int32_t m_nFlags;
    uint32_t (reserved)[63];
};
#pragma pack( pop )

typedef struct SteamNetConnectionInfo_t_144 SteamNetConnectionInfo_t_144;
#pragma pack( push, 8 )
struct SteamNetConnectionInfo_t_144
{
    SteamNetworkingIdentity_144 m_identityRemote;
    int64_t m_nUserData;
    uint32_t m_hListenSocket;
    SteamNetworkingIPAddr m_addrRemote;
    uint16_t m__pad1;
    uint32_t m_idPOPRemote;
    uint32_t m_idPOPRelay;
    uint32_t m_eState;
    int32_t m_eEndReason;
    char (m_szEndDebug)[128];
    char (m_szConnectionDescription)[128];
    uint32_t (reserved)[64];
};
#pragma pack( pop )

typedef struct SteamNetConnectionInfo_t_151 SteamNetConnectionInfo_t_151;
#pragma pack( push, 8 )
struct SteamNetConnectionInfo_t_151
{
    SteamNetworkingIdentity_151 m_identityRemote;
    int64_t m_nUserData;
    uint32_t m_hListenSocket;
    SteamNetworkingIPAddr m_addrRemote;
    uint16_t m__pad1;
    uint32_t m_idPOPRemote;
    uint32_t m_idPOPRelay;
    uint32_t m_eState;
    int32_t m_eEndReason;
    char (m_szEndDebug)[128];
    char (m_szConnectionDescription)[128];
    uint32_t (reserved)[64];
};
#pragma pack( pop )

typedef struct servernetadr_t servernetadr_t;
#pragma pack( push, 4 )
struct servernetadr_t
{
    uint16_t m_usConnectionPort;
    uint16_t m_usQueryPort;
    uint32_t m_unIP;
};
#pragma pack( pop )

typedef struct ActiveBeaconsUpdated_t ActiveBeaconsUpdated_t;
#pragma pack( push, 1 )
struct ActiveBeaconsUpdated_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct AppDataChanged_t AppDataChanged_t;
#pragma pack( push, 4 )
struct AppDataChanged_t
{
    uint32_t m_nAppID;
    int8_t m_bBySteamUI;
    int8_t m_bCDDBUpdate;
    uint8_t __pad_6[2];
};
#pragma pack( pop )

typedef struct AppProofOfPurchaseKeyResponse_t_137 AppProofOfPurchaseKeyResponse_t_137;
#pragma pack( push, 4 )
struct AppProofOfPurchaseKeyResponse_t_137
{
    uint32_t m_eResult;
    uint32_t m_nAppID;
    uint32_t m_cchKeyLength;
    char (m_rgchKey)[240];
};
#pragma pack( pop )

typedef struct AppProofOfPurchaseKeyResponse_t_118 AppProofOfPurchaseKeyResponse_t_118;
#pragma pack( push, 4 )
struct AppProofOfPurchaseKeyResponse_t_118
{
    uint32_t m_eResult;
    uint32_t m_nAppID;
    char (m_rgchKey)[64];
};
#pragma pack( pop )

typedef struct AppResumingFromSuspend_t AppResumingFromSuspend_t;
#pragma pack( push, 1 )
struct AppResumingFromSuspend_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct AssociateWithClanResult_t AssociateWithClanResult_t;
#pragma pack( push, 4 )
struct AssociateWithClanResult_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct AvailableBeaconLocationsUpdated_t AvailableBeaconLocationsUpdated_t;
#pragma pack( push, 1 )
struct AvailableBeaconLocationsUpdated_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct AvatarImageLoaded_t AvatarImageLoaded_t;
#pragma pack( push, 4 )
struct AvatarImageLoaded_t
{
    CSteamID m_steamID;
    int32_t m_iImage;
    int32_t m_iWide;
    int32_t m_iTall;
};
#pragma pack( pop )

typedef struct BroadcastUploadStart_t BroadcastUploadStart_t;
#pragma pack( push, 1 )
struct BroadcastUploadStart_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct BroadcastUploadStop_t BroadcastUploadStop_t;
#pragma pack( push, 4 )
struct BroadcastUploadStop_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct CallbackPipeFailure_t CallbackPipeFailure_t;
#pragma pack( push, 1 )
struct CallbackPipeFailure_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct ChangeNumOpenSlotsCallback_t ChangeNumOpenSlotsCallback_t;
#pragma pack( push, 4 )
struct ChangeNumOpenSlotsCallback_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct CheckFileSignature_t CheckFileSignature_t;
#pragma pack( push, 4 )
struct CheckFileSignature_t
{
    uint32_t m_eCheckFileSignature;
};
#pragma pack( pop )

typedef struct ClanOfficerListResponse_t ClanOfficerListResponse_t;
#pragma pack( push, 4 )
struct ClanOfficerListResponse_t
{
    CSteamID m_steamIDClan;
    int32_t m_cOfficers;
    uint8_t m_bSuccess;
    uint8_t __pad_13[3];
};
#pragma pack( pop )

typedef struct ClientGameServerDeny_t ClientGameServerDeny_t;
#pragma pack( push, 4 )
struct ClientGameServerDeny_t
{
    uint32_t m_uAppID;
    uint32_t m_unGameServerIP;
    uint16_t m_usGameServerPort;
    uint16_t m_bSecure;
    uint32_t m_uReason;
};
#pragma pack( pop )

typedef struct ComputeNewPlayerCompatibilityResult_t_119 ComputeNewPlayerCompatibilityResult_t_119;
#pragma pack( push, 4 )
struct ComputeNewPlayerCompatibilityResult_t_119
{
    uint32_t m_eResult;
    int32_t m_cPlayersThatDontLikeCandidate;
    int32_t m_cPlayersThatCandidateDoesntLike;
    int32_t m_cClanPlayersThatDontLikeCandidate;
    CSteamID m_SteamIDCandidate;
};
#pragma pack( pop )

typedef struct ComputeNewPlayerCompatibilityResult_t_116x ComputeNewPlayerCompatibilityResult_t_116x;
#pragma pack( push, 4 )
struct ComputeNewPlayerCompatibilityResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_cPlayersThatDontLikeCandidate;
    int32_t m_cPlayersThatCandidateDoesntLike;
    int32_t m_cClanPlayersThatDontLikeCandidate;
};
#pragma pack( pop )

typedef struct ControllerAnalogActionData_t ControllerAnalogActionData_t;
#pragma pack( push, 1 )
struct ControllerAnalogActionData_t
{
    uint32_t eMode;
    float x;
    float y;
    int8_t bActive;
};
#pragma pack( pop )

typedef struct ControllerDigitalActionData_t ControllerDigitalActionData_t;
#pragma pack( push, 1 )
struct ControllerDigitalActionData_t
{
    int8_t bState;
    int8_t bActive;
};
#pragma pack( pop )

typedef struct ControllerMotionData_t ControllerMotionData_t;
#pragma pack( push, 1 )
struct ControllerMotionData_t
{
    float rotQuatX;
    float rotQuatY;
    float rotQuatZ;
    float rotQuatW;
    float posAccelX;
    float posAccelY;
    float posAccelZ;
    float rotVelX;
    float rotVelY;
    float rotVelZ;
};
#pragma pack( pop )

typedef struct DlcInstalled_t DlcInstalled_t;
#pragma pack( push, 4 )
struct DlcInstalled_t
{
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct DownloadClanActivityCountsResult_t DownloadClanActivityCountsResult_t;
#pragma pack( push, 1 )
struct DownloadClanActivityCountsResult_t
{
    int8_t m_bSuccess;
};
#pragma pack( pop )

typedef struct DurationControl_t_147 DurationControl_t_147;
#pragma pack( push, 4 )
struct DurationControl_t_147
{
    uint32_t m_eResult;
    uint32_t m_appid;
    int8_t m_bApplicable;
    uint8_t __pad_9[3];
    int32_t m_csecsLast5h;
    uint32_t m_progress;
    uint32_t m_notification;
    int32_t m_csecsToday;
    int32_t m_csecsRemaining;
};
#pragma pack( pop )

typedef struct DurationControl_t_145 DurationControl_t_145;
#pragma pack( push, 4 )
struct DurationControl_t_145
{
    uint32_t m_eResult;
    uint32_t m_appid;
    int8_t m_bApplicable;
    uint8_t __pad_9[3];
    int32_t m_csecsLast5h;
    uint32_t m_progress;
    uint32_t m_notification;
};
#pragma pack( pop )

typedef struct EncryptedAppTicketResponse_t EncryptedAppTicketResponse_t;
#pragma pack( push, 4 )
struct EncryptedAppTicketResponse_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct EquippedProfileItemsChanged_t EquippedProfileItemsChanged_t;
#pragma pack( push, 1 )
struct EquippedProfileItemsChanged_t
{
    CSteamID m_steamID;
};
#pragma pack( pop )

typedef struct EquippedProfileItems_t EquippedProfileItems_t;
#pragma pack( push, 4 )
struct EquippedProfileItems_t
{
    uint32_t m_eResult;
    CSteamID m_steamID;
    int8_t m_bHasAnimatedAvatar;
    int8_t m_bHasAvatarFrame;
    int8_t m_bHasProfileModifier;
    int8_t m_bHasProfileBackground;
    int8_t m_bHasMiniProfileBackground;
    uint8_t __pad_17[3];
};
#pragma pack( pop )

typedef struct FavoritesListAccountsUpdated_t FavoritesListAccountsUpdated_t;
#pragma pack( push, 4 )
struct FavoritesListAccountsUpdated_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct FavoritesListChanged_t_128x FavoritesListChanged_t_128x;
#pragma pack( push, 4 )
struct FavoritesListChanged_t_128x
{
    uint32_t m_nIP;
    uint32_t m_nQueryPort;
    uint32_t m_nConnPort;
    uint32_t m_nAppID;
    uint32_t m_nFlags;
    int8_t m_bAdd;
    uint8_t __pad_21[3];
    uint32_t m_unAccountId;
};
#pragma pack( pop )

typedef struct FavoritesListChanged_t_099u FavoritesListChanged_t_099u;
#pragma pack( push, 4 )
struct FavoritesListChanged_t_099u
{
    uint32_t m_nIP;
    uint32_t m_nQueryPort;
    uint32_t m_nConnPort;
    uint32_t m_nAppID;
    uint32_t m_nFlags;
    int8_t m_bAdd;
    uint8_t __pad_21[3];
};
#pragma pack( pop )

typedef struct FilterTextDictionaryChanged_t FilterTextDictionaryChanged_t;
#pragma pack( push, 4 )
struct FilterTextDictionaryChanged_t
{
    int32_t m_eLanguage;
};
#pragma pack( pop )

typedef struct FloatingGamepadTextInputDismissed_t FloatingGamepadTextInputDismissed_t;
#pragma pack( push, 1 )
struct FloatingGamepadTextInputDismissed_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct FriendGameInfo_t FriendGameInfo_t;
#pragma pack( push, 4 )
struct FriendGameInfo_t
{
    CGameID m_gameID;
    uint32_t m_unGameIP;
    uint16_t m_usGamePort;
    uint16_t m_usQueryPort;
    CSteamID m_steamIDLobby;
};
#pragma pack( pop )

typedef struct FriendRichPresenceUpdate_t FriendRichPresenceUpdate_t;
#pragma pack( push, 4 )
struct FriendRichPresenceUpdate_t
{
    CSteamID m_steamIDFriend;
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct FriendSessionStateInfo_t FriendSessionStateInfo_t;
#pragma pack( push, 4 )
struct FriendSessionStateInfo_t
{
    uint32_t m_uiOnlineSessionInstances;
    uint8_t m_uiPublishedToFriendsSessionInstance;
    uint8_t __pad_5[3];
};
#pragma pack( pop )

typedef struct FriendsEnumerateFollowingList_t FriendsEnumerateFollowingList_t;
#pragma pack( push, 4 )
struct FriendsEnumerateFollowingList_t
{
    uint32_t m_eResult;
    CSteamID (m_rgSteamID)[50];
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
};
#pragma pack( pop )

typedef struct FriendsGetFollowerCount_t FriendsGetFollowerCount_t;
#pragma pack( push, 4 )
struct FriendsGetFollowerCount_t
{
    uint32_t m_eResult;
    CSteamID m_steamID;
    int32_t m_nCount;
};
#pragma pack( pop )

typedef struct FriendsIsFollowing_t FriendsIsFollowing_t;
#pragma pack( push, 4 )
struct FriendsIsFollowing_t
{
    uint32_t m_eResult;
    CSteamID m_steamID;
    int8_t m_bIsFollowing;
    uint8_t __pad_13[3];
};
#pragma pack( pop )

typedef struct GCMessageAvailable_t GCMessageAvailable_t;
#pragma pack( push, 4 )
struct GCMessageAvailable_t
{
    uint32_t m_nMessageSize;
};
#pragma pack( pop )

typedef struct GCMessageFailed_t GCMessageFailed_t;
#pragma pack( push, 1 )
struct GCMessageFailed_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct GSClientAchievementStatus_t GSClientAchievementStatus_t;
#pragma pack( push, 8 )
struct GSClientAchievementStatus_t
{
    uint64_t m_SteamID;
    char (m_pchAchievement)[128];
    int8_t m_bUnlocked;
    uint8_t __pad_137[7];
};
#pragma pack( pop )

typedef struct GSClientApprove_t_126 GSClientApprove_t_126;
#pragma pack( push, 1 )
struct GSClientApprove_t_126
{
    CSteamID m_SteamID;
    CSteamID m_OwnerSteamID;
};
#pragma pack( pop )

typedef struct GSClientApprove_t_099u GSClientApprove_t_099u;
#pragma pack( push, 1 )
struct GSClientApprove_t_099u
{
    CSteamID m_SteamID;
};
#pragma pack( pop )

typedef struct GSClientDeny_t GSClientDeny_t;
#pragma pack( push, 4 )
struct GSClientDeny_t
{
    CSteamID m_SteamID;
    uint32_t m_eDenyReason;
    char (m_rgchOptionalText)[128];
};
#pragma pack( pop )

typedef struct GSClientGroupStatus_t GSClientGroupStatus_t;
#pragma pack( push, 1 )
struct GSClientGroupStatus_t
{
    CSteamID m_SteamIDUser;
    CSteamID m_SteamIDGroup;
    int8_t m_bMember;
    int8_t m_bOfficer;
};
#pragma pack( pop )

typedef struct GSClientKick_t GSClientKick_t;
#pragma pack( push, 4 )
struct GSClientKick_t
{
    CSteamID m_SteamID;
    uint32_t m_eDenyReason;
};
#pragma pack( pop )

typedef struct GSGameplayStats_t GSGameplayStats_t;
#pragma pack( push, 4 )
struct GSGameplayStats_t
{
    uint32_t m_eResult;
    int32_t m_nRank;
    uint32_t m_unTotalConnects;
    uint32_t m_unTotalMinutesPlayed;
};
#pragma pack( pop )

typedef struct GSPolicyResponse_t GSPolicyResponse_t;
#pragma pack( push, 1 )
struct GSPolicyResponse_t
{
    uint8_t m_bSecure;
};
#pragma pack( pop )

typedef struct GSStatsReceived_t GSStatsReceived_t;
#pragma pack( push, 4 )
struct GSStatsReceived_t
{
    uint32_t m_eResult;
    CSteamID m_steamIDUser;
};
#pragma pack( pop )

typedef struct GSStatsStored_t GSStatsStored_t;
#pragma pack( push, 4 )
struct GSStatsStored_t
{
    uint32_t m_eResult;
    CSteamID m_steamIDUser;
};
#pragma pack( pop )

typedef struct GSStatsUnloaded_t GSStatsUnloaded_t;
#pragma pack( push, 1 )
struct GSStatsUnloaded_t
{
    CSteamID m_steamIDUser;
};
#pragma pack( pop )

typedef struct GameConnectedChatJoin_t GameConnectedChatJoin_t;
#pragma pack( push, 1 )
struct GameConnectedChatJoin_t
{
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
};
#pragma pack( pop )

typedef struct GameConnectedChatLeave_t GameConnectedChatLeave_t;
#pragma pack( push, 1 )
struct GameConnectedChatLeave_t
{
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    int8_t m_bKicked;
    int8_t m_bDropped;
};
#pragma pack( pop )

typedef struct GameConnectedClanChatMsg_t GameConnectedClanChatMsg_t;
#pragma pack( push, 4 )
struct GameConnectedClanChatMsg_t
{
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    int32_t m_iMessageID;
};
#pragma pack( pop )

typedef struct GameConnectedFriendChatMsg_t GameConnectedFriendChatMsg_t;
#pragma pack( push, 4 )
struct GameConnectedFriendChatMsg_t
{
    CSteamID m_steamIDUser;
    int32_t m_iMessageID;
};
#pragma pack( pop )

typedef struct GameLobbyJoinRequested_t GameLobbyJoinRequested_t;
#pragma pack( push, 1 )
struct GameLobbyJoinRequested_t
{
    CSteamID m_steamIDLobby;
    CSteamID m_steamIDFriend;
};
#pragma pack( pop )

typedef struct GameOverlayActivated_t_158 GameOverlayActivated_t_158;
#pragma pack( push, 4 )
struct GameOverlayActivated_t_158
{
    uint8_t m_bActive;
    int8_t m_bUserInitiated;
    uint8_t __pad_2[2];
    uint32_t m_nAppID;
    uint32_t m_dwOverlayPID;
};
#pragma pack( pop )

typedef struct GameOverlayActivated_t_156 GameOverlayActivated_t_156;
#pragma pack( push, 4 )
struct GameOverlayActivated_t_156
{
    uint8_t m_bActive;
    int8_t m_bUserInitiated;
    uint8_t __pad_2[2];
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct GameOverlayActivated_t_099u GameOverlayActivated_t_099u;
#pragma pack( push, 1 )
struct GameOverlayActivated_t_099u
{
    uint8_t m_bActive;
};
#pragma pack( pop )

typedef struct GameRichPresenceJoinRequested_t GameRichPresenceJoinRequested_t;
#pragma pack( push, 1 )
struct GameRichPresenceJoinRequested_t
{
    CSteamID m_steamIDFriend;
    char (m_rgchConnect)[256];
};
#pragma pack( pop )

typedef struct GameServerChangeRequested_t GameServerChangeRequested_t;
#pragma pack( push, 1 )
struct GameServerChangeRequested_t
{
    char (m_rgchServer)[64];
    char (m_rgchPassword)[64];
};
#pragma pack( pop )

typedef struct GameStatsSessionClosed_t GameStatsSessionClosed_t;
#pragma pack( push, 8 )
struct GameStatsSessionClosed_t
{
    uint64_t m_ulSessionID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct GameStatsSessionIssued_t GameStatsSessionIssued_t;
#pragma pack( push, 8 )
struct GameStatsSessionIssued_t
{
    uint64_t m_ulSessionID;
    uint32_t m_eResult;
    int8_t m_bCollectingAny;
    int8_t m_bCollectingDetails;
    uint8_t __pad_14[2];
};
#pragma pack( pop )

typedef struct GameWebCallback_t GameWebCallback_t;
#pragma pack( push, 1 )
struct GameWebCallback_t
{
    char (m_szURL)[256];
};
#pragma pack( pop )

typedef struct GamepadTextInputDismissed_t_156 GamepadTextInputDismissed_t_156;
#pragma pack( push, 4 )
struct GamepadTextInputDismissed_t_156
{
    int8_t m_bSubmitted;
    uint8_t __pad_1[3];
    uint32_t m_unSubmittedText;
    uint32_t m_unAppID;
};
#pragma pack( pop )

typedef struct GamepadTextInputDismissed_t_121 GamepadTextInputDismissed_t_121;
#pragma pack( push, 4 )
struct GamepadTextInputDismissed_t_121
{
    int8_t m_bSubmitted;
    uint8_t __pad_1[3];
    uint32_t m_unSubmittedText;
};
#pragma pack( pop )

typedef struct GetAuthSessionTicketResponse_t GetAuthSessionTicketResponse_t;
#pragma pack( push, 4 )
struct GetAuthSessionTicketResponse_t
{
    uint32_t m_hAuthTicket;
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct GetOPFSettingsResult_t GetOPFSettingsResult_t;
#pragma pack( push, 4 )
struct GetOPFSettingsResult_t
{
    uint32_t m_eResult;
    uint32_t m_unVideoAppID;
};
#pragma pack( pop )

typedef struct GetTicketForWebApiResponse_t GetTicketForWebApiResponse_t;
#pragma pack( push, 4 )
struct GetTicketForWebApiResponse_t
{
    uint32_t m_hAuthTicket;
    uint32_t m_eResult;
    int32_t m_cubTicket;
    uint8_t (m_rgubTicket)[2560];
};
#pragma pack( pop )

typedef struct GetUserItemVoteResult_t GetUserItemVoteResult_t;
#pragma pack( push, 8 )
struct GetUserItemVoteResult_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    int8_t m_bVotedUp;
    int8_t m_bVotedDown;
    int8_t m_bVoteSkipped;
    uint8_t __pad_15[1];
};
#pragma pack( pop )

typedef struct GetVideoURLResult_t GetVideoURLResult_t;
#pragma pack( push, 4 )
struct GetVideoURLResult_t
{
    uint32_t m_eResult;
    uint32_t m_unVideoAppID;
    char (m_rgchURL)[256];
};
#pragma pack( pop )

typedef struct GlobalAchievementPercentagesReady_t GlobalAchievementPercentagesReady_t;
#pragma pack( push, 8 )
struct GlobalAchievementPercentagesReady_t
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct GlobalStatsReceived_t GlobalStatsReceived_t;
#pragma pack( push, 8 )
struct GlobalStatsReceived_t
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct HTML_BrowserReady_t HTML_BrowserReady_t;
#pragma pack( push, 4 )
struct HTML_BrowserReady_t
{
    uint32_t unBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_BrowserRestarted_t HTML_BrowserRestarted_t;
#pragma pack( push, 4 )
struct HTML_BrowserRestarted_t
{
    uint32_t unBrowserHandle;
    uint32_t unOldBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_CanGoBackAndForward_t HTML_CanGoBackAndForward_t;
#pragma pack( push, 4 )
struct HTML_CanGoBackAndForward_t
{
    uint32_t unBrowserHandle;
    int8_t bCanGoBack;
    int8_t bCanGoForward;
    uint8_t __pad_6[2];
};
#pragma pack( pop )

typedef struct HTML_CloseBrowser_t HTML_CloseBrowser_t;
#pragma pack( push, 4 )
struct HTML_CloseBrowser_t
{
    uint32_t unBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_HidePopup_t HTML_HidePopup_t;
#pragma pack( push, 4 )
struct HTML_HidePopup_t
{
    uint32_t unBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_HideToolTip_t HTML_HideToolTip_t;
#pragma pack( push, 4 )
struct HTML_HideToolTip_t
{
    uint32_t unBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_HorizontalScroll_t HTML_HorizontalScroll_t;
#pragma pack( push, 4 )
struct HTML_HorizontalScroll_t
{
    uint32_t unBrowserHandle;
    uint32_t unScrollMax;
    uint32_t unScrollCurrent;
    float flPageScale;
    int8_t bVisible;
    uint8_t __pad_17[3];
    uint32_t unPageSize;
};
#pragma pack( pop )

typedef struct HTML_SearchResults_t HTML_SearchResults_t;
#pragma pack( push, 4 )
struct HTML_SearchResults_t
{
    uint32_t unBrowserHandle;
    uint32_t unResults;
    uint32_t unCurrentMatch;
};
#pragma pack( pop )

typedef struct HTML_SetCursor_t HTML_SetCursor_t;
#pragma pack( push, 4 )
struct HTML_SetCursor_t
{
    uint32_t unBrowserHandle;
    uint32_t eMouseCursor;
};
#pragma pack( pop )

typedef struct HTML_ShowPopup_t HTML_ShowPopup_t;
#pragma pack( push, 4 )
struct HTML_ShowPopup_t
{
    uint32_t unBrowserHandle;
};
#pragma pack( pop )

typedef struct HTML_SizePopup_t HTML_SizePopup_t;
#pragma pack( push, 4 )
struct HTML_SizePopup_t
{
    uint32_t unBrowserHandle;
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
};
#pragma pack( pop )

typedef struct HTML_VerticalScroll_t HTML_VerticalScroll_t;
#pragma pack( push, 4 )
struct HTML_VerticalScroll_t
{
    uint32_t unBrowserHandle;
    uint32_t unScrollMax;
    uint32_t unScrollCurrent;
    float flPageScale;
    int8_t bVisible;
    uint8_t __pad_17[3];
    uint32_t unPageSize;
};
#pragma pack( pop )

typedef struct IPCFailure_t IPCFailure_t;
#pragma pack( push, 1 )
struct IPCFailure_t
{
    uint8_t m_eFailureType;
};
#pragma pack( pop )

typedef struct IPCountry_t IPCountry_t;
#pragma pack( push, 1 )
struct IPCountry_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct InputAnalogActionData_t InputAnalogActionData_t;
#pragma pack( push, 1 )
struct InputAnalogActionData_t
{
    uint32_t eMode;
    float x;
    float y;
    int8_t bActive;
};
#pragma pack( pop )

typedef struct InputDigitalActionData_t InputDigitalActionData_t;
#pragma pack( push, 1 )
struct InputDigitalActionData_t
{
    int8_t bState;
    int8_t bActive;
};
#pragma pack( pop )

typedef struct InputMotionDataV2_t InputMotionDataV2_t;
#pragma pack( push, 1 )
struct InputMotionDataV2_t
{
    float driftCorrectedQuatX;
    float driftCorrectedQuatY;
    float driftCorrectedQuatZ;
    float driftCorrectedQuatW;
    float sensorFusionQuatX;
    float sensorFusionQuatY;
    float sensorFusionQuatZ;
    float sensorFusionQuatW;
    float deferredSensorFusionQuatX;
    float deferredSensorFusionQuatY;
    float deferredSensorFusionQuatZ;
    float deferredSensorFusionQuatW;
    float gravityX;
    float gravityY;
    float gravityZ;
    float degreesPerSecondX;
    float degreesPerSecondY;
    float degreesPerSecondZ;
};
#pragma pack( pop )

typedef struct InputMotionData_t InputMotionData_t;
#pragma pack( push, 1 )
struct InputMotionData_t
{
    float rotQuatX;
    float rotQuatY;
    float rotQuatZ;
    float rotQuatW;
    float posAccelX;
    float posAccelY;
    float posAccelZ;
    float rotVelX;
    float rotVelY;
    float rotVelZ;
};
#pragma pack( pop )

typedef struct JoinClanChatRoomCompletionResult_t JoinClanChatRoomCompletionResult_t;
#pragma pack( push, 4 )
struct JoinClanChatRoomCompletionResult_t
{
    CSteamID m_steamIDClanChat;
    uint32_t m_eChatRoomEnterResponse;
};
#pragma pack( pop )

typedef struct LeaderboardFindResult_t LeaderboardFindResult_t;
#pragma pack( push, 8 )
struct LeaderboardFindResult_t
{
    uint64_t m_hSteamLeaderboard;
    uint8_t m_bLeaderboardFound;
    uint8_t __pad_9[7];
};
#pragma pack( pop )

typedef struct LeaderboardScoresDownloaded_t LeaderboardScoresDownloaded_t;
#pragma pack( push, 8 )
struct LeaderboardScoresDownloaded_t
{
    uint64_t m_hSteamLeaderboard;
    uint64_t m_hSteamLeaderboardEntries;
    int32_t m_cEntryCount;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

typedef struct LicensesUpdated_t LicensesUpdated_t;
#pragma pack( push, 1 )
struct LicensesUpdated_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct LobbyChatMsg_t LobbyChatMsg_t;
#pragma pack( push, 8 )
struct LobbyChatMsg_t
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDUser;
    uint8_t m_eChatEntryType;
    uint8_t __pad_17[3];
    uint32_t m_iChatID;
};
#pragma pack( pop )

typedef struct LobbyChatUpdate_t LobbyChatUpdate_t;
#pragma pack( push, 8 )
struct LobbyChatUpdate_t
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDUserChanged;
    uint64_t m_ulSteamIDMakingChange;
    uint32_t m_rgfChatMemberStateChange;
    uint8_t __pad_28[4];
};
#pragma pack( pop )

typedef struct LobbyClosing_t LobbyClosing_t;
#pragma pack( push, 8 )
struct LobbyClosing_t
{
    uint64_t m_ulSteamIDLobby;
};
#pragma pack( pop )

typedef struct LobbyDataUpdate_t_111x LobbyDataUpdate_t_111x;
#pragma pack( push, 8 )
struct LobbyDataUpdate_t_111x
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDMember;
    uint8_t m_bSuccess;
    uint8_t __pad_17[7];
};
#pragma pack( pop )

typedef struct LobbyDataUpdate_t_099u LobbyDataUpdate_t_099u;
#pragma pack( push, 8 )
struct LobbyDataUpdate_t_099u
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDMember;
};
#pragma pack( pop )

typedef struct LobbyEnter_t LobbyEnter_t;
#pragma pack( push, 8 )
struct LobbyEnter_t
{
    uint64_t m_ulSteamIDLobby;
    uint32_t m_rgfChatPermissions;
    int8_t m_bLocked;
    uint8_t __pad_13[3];
    uint32_t m_EChatRoomEnterResponse;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

typedef struct LobbyGameCreated_t LobbyGameCreated_t;
#pragma pack( push, 8 )
struct LobbyGameCreated_t
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDGameServer;
    uint32_t m_unIP;
    uint16_t m_usPort;
    uint8_t __pad_22[2];
};
#pragma pack( pop )

typedef struct LobbyInvite_t_112x LobbyInvite_t_112x;
#pragma pack( push, 8 )
struct LobbyInvite_t_112x
{
    uint64_t m_ulSteamIDUser;
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulGameID;
};
#pragma pack( pop )

typedef struct LobbyInvite_t_099u LobbyInvite_t_099u;
#pragma pack( push, 8 )
struct LobbyInvite_t_099u
{
    uint64_t m_ulSteamIDUser;
    uint64_t m_ulSteamIDLobby;
};
#pragma pack( pop )

typedef struct LobbyKicked_t_106 LobbyKicked_t_106;
#pragma pack( push, 8 )
struct LobbyKicked_t_106
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDAdmin;
    uint8_t m_bKickedDueToDisconnect;
    uint8_t __pad_17[7];
};
#pragma pack( pop )

typedef struct LobbyKicked_t_099u LobbyKicked_t_099u;
#pragma pack( push, 8 )
struct LobbyKicked_t_099u
{
    uint64_t m_ulSteamIDLobby;
    uint64_t m_ulSteamIDAdmin;
};
#pragma pack( pop )

typedef struct LobbyMatchList_t LobbyMatchList_t;
#pragma pack( push, 4 )
struct LobbyMatchList_t
{
    uint32_t m_nLobbiesMatching;
};
#pragma pack( pop )

typedef struct LowBatteryPower_t LowBatteryPower_t;
#pragma pack( push, 1 )
struct LowBatteryPower_t
{
    uint8_t m_nMinutesBatteryLeft;
};
#pragma pack( pop )

typedef struct MarketEligibilityResponse_t MarketEligibilityResponse_t;
#pragma pack( push, 4 )
struct MarketEligibilityResponse_t
{
    int8_t m_bAllowed;
    uint8_t __pad_1[3];
    uint32_t m_eNotAllowedReason;
    uint32_t m_rtAllowedAtTime;
    int32_t m_cdaySteamGuardRequiredDays;
    int32_t m_cdayNewDeviceCooldown;
};
#pragma pack( pop )

typedef struct MatchMakingKeyValuePair_t MatchMakingKeyValuePair_t;
#pragma pack( push, 1 )
struct MatchMakingKeyValuePair_t
{
    char (m_szKey)[256];
    char (m_szValue)[256];
};
#pragma pack( pop )

typedef struct MusicPlayerRemoteToFront_t MusicPlayerRemoteToFront_t;
#pragma pack( push, 1 )
struct MusicPlayerRemoteToFront_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerRemoteWillActivate_t MusicPlayerRemoteWillActivate_t;
#pragma pack( push, 1 )
struct MusicPlayerRemoteWillActivate_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerRemoteWillDeactivate_t MusicPlayerRemoteWillDeactivate_t;
#pragma pack( push, 1 )
struct MusicPlayerRemoteWillDeactivate_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerSelectsPlaylistEntry_t MusicPlayerSelectsPlaylistEntry_t;
#pragma pack( push, 4 )
struct MusicPlayerSelectsPlaylistEntry_t
{
    int32_t nID;
};
#pragma pack( pop )

typedef struct MusicPlayerSelectsQueueEntry_t MusicPlayerSelectsQueueEntry_t;
#pragma pack( push, 4 )
struct MusicPlayerSelectsQueueEntry_t
{
    int32_t nID;
};
#pragma pack( pop )

typedef struct MusicPlayerWantsLooped_t MusicPlayerWantsLooped_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsLooped_t
{
    int8_t m_bLooped;
};
#pragma pack( pop )

typedef struct MusicPlayerWantsPause_t MusicPlayerWantsPause_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsPause_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerWantsPlayNext_t MusicPlayerWantsPlayNext_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsPlayNext_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerWantsPlayPrevious_t MusicPlayerWantsPlayPrevious_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsPlayPrevious_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerWantsPlay_t MusicPlayerWantsPlay_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsPlay_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct MusicPlayerWantsPlayingRepeatStatus_t MusicPlayerWantsPlayingRepeatStatus_t;
#pragma pack( push, 4 )
struct MusicPlayerWantsPlayingRepeatStatus_t
{
    int32_t m_nPlayingRepeatStatus;
};
#pragma pack( pop )

typedef struct MusicPlayerWantsShuffled_t MusicPlayerWantsShuffled_t;
#pragma pack( push, 1 )
struct MusicPlayerWantsShuffled_t
{
    int8_t m_bShuffled;
};
#pragma pack( pop )

typedef struct MusicPlayerWantsVolume_t MusicPlayerWantsVolume_t;
#pragma pack( push, 4 )
struct MusicPlayerWantsVolume_t
{
    float m_flNewVolume;
};
#pragma pack( pop )

typedef struct MusicPlayerWillQuit_t MusicPlayerWillQuit_t;
#pragma pack( push, 1 )
struct MusicPlayerWillQuit_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct NameHistoryResponse_t NameHistoryResponse_t;
#pragma pack( push, 4 )
struct NameHistoryResponse_t
{
    int32_t m_cSuccessfulLookups;
    int32_t m_cFailedLookups;
};
#pragma pack( pop )

typedef struct NewLaunchQueryParameters_t NewLaunchQueryParameters_t;
#pragma pack( push, 1 )
struct NewLaunchQueryParameters_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct NewUrlLaunchParameters_t NewUrlLaunchParameters_t;
#pragma pack( push, 1 )
struct NewUrlLaunchParameters_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct NumberOfCurrentPlayers_t NumberOfCurrentPlayers_t;
#pragma pack( push, 4 )
struct NumberOfCurrentPlayers_t
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[3];
    int32_t m_cPlayers;
};
#pragma pack( pop )

typedef struct OverlayBrowserProtocolNavigation_t OverlayBrowserProtocolNavigation_t;
#pragma pack( push, 1 )
struct OverlayBrowserProtocolNavigation_t
{
    char (rgchURI)[1024];
};
#pragma pack( pop )

typedef struct P2PSessionConnectFail_t P2PSessionConnectFail_t;
#pragma pack( push, 1 )
struct P2PSessionConnectFail_t
{
    CSteamID m_steamIDRemote;
    uint8_t m_eP2PSessionError;
};
#pragma pack( pop )

typedef struct P2PSessionRequest_t P2PSessionRequest_t;
#pragma pack( push, 1 )
struct P2PSessionRequest_t
{
    CSteamID m_steamIDRemote;
};
#pragma pack( pop )

typedef struct P2PSessionState_t P2PSessionState_t;
#pragma pack( push, 4 )
struct P2PSessionState_t
{
    uint8_t m_bConnectionActive;
    uint8_t m_bConnecting;
    uint8_t m_eP2PSessionError;
    uint8_t m_bUsingRelay;
    int32_t m_nBytesQueuedForSend;
    int32_t m_nPacketsQueuedForSend;
    uint32_t m_nRemoteIP;
    uint16_t m_nRemotePort;
    uint8_t __pad_18[2];
};
#pragma pack( pop )

typedef struct PSNGameBootInviteResult_t PSNGameBootInviteResult_t;
#pragma pack( push, 1 )
struct PSNGameBootInviteResult_t
{
    int8_t m_bGameBootInviteExists;
    CSteamID m_steamIDLobby;
};
#pragma pack( pop )

typedef struct PersonaStateChange_t PersonaStateChange_t;
#pragma pack( push, 8 )
struct PersonaStateChange_t
{
    uint64_t m_ulSteamID;
    int32_t m_nChangeFlags;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct PlaybackStatusHasChanged_t PlaybackStatusHasChanged_t;
#pragma pack( push, 1 )
struct PlaybackStatusHasChanged_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct RegisterActivationCodeResponse_t RegisterActivationCodeResponse_t;
#pragma pack( push, 4 )
struct RegisterActivationCodeResponse_t
{
    uint32_t m_eResult;
    uint32_t m_unPackageRegistered;
};
#pragma pack( pop )

typedef struct RemoteStorageAppSyncStatusCheck_t RemoteStorageAppSyncStatusCheck_t;
#pragma pack( push, 4 )
struct RemoteStorageAppSyncStatusCheck_t
{
    uint32_t m_nAppID;
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct RemoteStorageAppSyncedClient_t RemoteStorageAppSyncedClient_t;
#pragma pack( push, 4 )
struct RemoteStorageAppSyncedClient_t
{
    uint32_t m_nAppID;
    uint32_t m_eResult;
    int32_t m_unNumDownloads;
};
#pragma pack( pop )

typedef struct RemoteStorageAppSyncedServer_t RemoteStorageAppSyncedServer_t;
#pragma pack( push, 4 )
struct RemoteStorageAppSyncedServer_t
{
    uint32_t m_nAppID;
    uint32_t m_eResult;
    int32_t m_unNumUploads;
};
#pragma pack( pop )

typedef struct RemoteStorageConflictResolution_t RemoteStorageConflictResolution_t;
#pragma pack( push, 4 )
struct RemoteStorageConflictResolution_t
{
    uint32_t m_nAppID;
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t RemoteStorageEnumeratePublishedFilesByUserActionResult_t;
#pragma pack( push, 8 )
struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t
{
    uint32_t m_eResult;
    uint32_t m_eAction;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint64_t (m_rgPublishedFileId)[50];
    uint32_t (m_rgRTimeUpdated)[50];
};
#pragma pack( pop )

typedef struct RemoteStorageFileReadAsyncComplete_t RemoteStorageFileReadAsyncComplete_t;
#pragma pack( push, 8 )
struct RemoteStorageFileReadAsyncComplete_t
{
    uint64_t m_hFileReadAsync;
    uint32_t m_eResult;
    uint32_t m_nOffset;
    uint32_t m_cubRead;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

typedef struct RemoteStorageFileWriteAsyncComplete_t RemoteStorageFileWriteAsyncComplete_t;
#pragma pack( push, 4 )
struct RemoteStorageFileWriteAsyncComplete_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct RemoteStorageLocalFileChange_t RemoteStorageLocalFileChange_t;
#pragma pack( push, 1 )
struct RemoteStorageLocalFileChange_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct RemoteStoragePublishFileProgress_t RemoteStoragePublishFileProgress_t;
#pragma pack( push, 8 )
struct RemoteStoragePublishFileProgress_t
{
    double m_dPercentFile;
    int8_t m_bPreview;
    uint8_t __pad_9[7];
};
#pragma pack( pop )

typedef struct RemoteStoragePublishedFileDeleted_t RemoteStoragePublishedFileDeleted_t;
#pragma pack( push, 8 )
struct RemoteStoragePublishedFileDeleted_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct RemoteStoragePublishedFileSubscribed_t RemoteStoragePublishedFileSubscribed_t;
#pragma pack( push, 8 )
struct RemoteStoragePublishedFileSubscribed_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct RemoteStoragePublishedFileUnsubscribed_t RemoteStoragePublishedFileUnsubscribed_t;
#pragma pack( push, 8 )
struct RemoteStoragePublishedFileUnsubscribed_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct RequestFriendsLobbiesResponse_t RequestFriendsLobbiesResponse_t;
#pragma pack( push, 8 )
struct RequestFriendsLobbiesResponse_t
{
    uint64_t m_ulSteamIDFriend;
    uint64_t m_ulSteamIDLobby;
    int32_t m_cResultIndex;
    int32_t m_cResultsTotal;
};
#pragma pack( pop )

typedef struct ReservationNotificationCallback_t ReservationNotificationCallback_t;
#pragma pack( push, 8 )
struct ReservationNotificationCallback_t
{
    uint64_t m_ulBeaconID;
    CSteamID m_steamIDJoiner;
};
#pragma pack( pop )

typedef struct ScreenshotReady_t ScreenshotReady_t;
#pragma pack( push, 4 )
struct ScreenshotReady_t
{
    uint32_t m_hLocal;
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct ScreenshotRequested_t ScreenshotRequested_t;
#pragma pack( push, 1 )
struct ScreenshotRequested_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SearchForGameProgressCallback_t SearchForGameProgressCallback_t;
#pragma pack( push, 8 )
struct SearchForGameProgressCallback_t
{
    uint64_t m_ullSearchID;
    uint32_t m_eResult;
    CSteamID m_lobbyID;
    CSteamID m_steamIDEndedSearch;
    int32_t m_nSecondsRemainingEstimate;
    int32_t m_cPlayersSearching;
    uint8_t __pad_36[4];
};
#pragma pack( pop )

typedef struct SearchForGameResultCallback_t SearchForGameResultCallback_t;
#pragma pack( push, 8 )
struct SearchForGameResultCallback_t
{
    uint64_t m_ullSearchID;
    uint32_t m_eResult;
    int32_t m_nCountPlayersInGame;
    int32_t m_nCountAcceptedGame;
    CSteamID m_steamIDHost;
    int8_t m_bFinalCallback;
    uint8_t __pad_29[3];
};
#pragma pack( pop )

typedef struct SetPersonaNameResponse_t SetPersonaNameResponse_t;
#pragma pack( push, 4 )
struct SetPersonaNameResponse_t
{
    int8_t m_bSuccess;
    int8_t m_bLocalSuccess;
    uint8_t __pad_2[2];
    uint32_t m_result;
};
#pragma pack( pop )

typedef struct SetUserItemVoteResult_t SetUserItemVoteResult_t;
#pragma pack( push, 8 )
struct SetUserItemVoteResult_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    int8_t m_bVoteUp;
    uint8_t __pad_13[3];
};
#pragma pack( pop )

typedef struct SocketStatusCallback_t SocketStatusCallback_t;
#pragma pack( push, 4 )
struct SocketStatusCallback_t
{
    uint32_t m_hSocket;
    uint32_t m_hListenSocket;
    CSteamID m_steamIDRemote;
    int32_t m_eSNetSocketState;
};
#pragma pack( pop )

typedef struct StartPlaytimeTrackingResult_t StartPlaytimeTrackingResult_t;
#pragma pack( push, 4 )
struct StartPlaytimeTrackingResult_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct SteamAPICallCompleted_t_137 SteamAPICallCompleted_t_137;
#pragma pack( push, 8 )
struct SteamAPICallCompleted_t_137
{
    uint64_t m_hAsyncCall;
    int32_t m_iCallback;
    uint32_t m_cubParam;
};
#pragma pack( pop )

typedef struct SteamAPICallCompleted_t_102x SteamAPICallCompleted_t_102x;
#pragma pack( push, 8 )
struct SteamAPICallCompleted_t_102x
{
    uint64_t m_hAsyncCall;
};
#pragma pack( pop )

typedef struct SteamAppInstalled_t_152 SteamAppInstalled_t_152;
#pragma pack( push, 4 )
struct SteamAppInstalled_t_152
{
    uint32_t m_nAppID;
    int32_t m_iInstallFolderIndex;
};
#pragma pack( pop )

typedef struct SteamAppInstalled_t_128x SteamAppInstalled_t_128x;
#pragma pack( push, 4 )
struct SteamAppInstalled_t_128x
{
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct SteamAppUninstalled_t_152 SteamAppUninstalled_t_152;
#pragma pack( push, 4 )
struct SteamAppUninstalled_t_152
{
    uint32_t m_nAppID;
    int32_t m_iInstallFolderIndex;
};
#pragma pack( pop )

typedef struct SteamAppUninstalled_t_128x SteamAppUninstalled_t_128x;
#pragma pack( push, 4 )
struct SteamAppUninstalled_t_128x
{
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct SteamCallback_t SteamCallback_t;
#pragma pack( push, 1 )
struct SteamCallback_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SteamControllerState001_t SteamControllerState001_t;
#pragma pack( push, 1 )
struct SteamControllerState001_t
{
    uint32_t unPacketNum;
    uint64_t ulButtons;
    int16_t sLeftPadX;
    int16_t sLeftPadY;
    int16_t sRightPadX;
    int16_t sRightPadY;
};
#pragma pack( pop )

typedef struct SteamControllerState_t SteamControllerState_t;
#pragma pack( push, 1 )
struct SteamControllerState_t
{
    uint32_t unPacketNum;
    uint64_t ulButtons;
    int16_t sLeftPadX;
    int16_t sLeftPadY;
    int16_t sRightPadX;
    int16_t sRightPadY;
};
#pragma pack( pop )

typedef struct SteamInputActionEvent_t SteamInputActionEvent_t;
#pragma pack( push, 1 )
struct SteamInputActionEvent_t
{
    uint64_t controllerHandle;
    uint32_t eEventType;
    struct { uint8_t _[21]; } x;
};
#pragma pack( pop )

typedef struct SteamInputDeviceConnected_t SteamInputDeviceConnected_t;
#pragma pack( push, 8 )
struct SteamInputDeviceConnected_t
{
    uint64_t m_ulConnectedDeviceHandle;
};
#pragma pack( pop )

typedef struct SteamInputDeviceDisconnected_t SteamInputDeviceDisconnected_t;
#pragma pack( push, 8 )
struct SteamInputDeviceDisconnected_t
{
    uint64_t m_ulDisconnectedDeviceHandle;
};
#pragma pack( pop )

typedef struct SteamInventoryDefinitionUpdate_t SteamInventoryDefinitionUpdate_t;
#pragma pack( push, 1 )
struct SteamInventoryDefinitionUpdate_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SteamInventoryEligiblePromoItemDefIDs_t SteamInventoryEligiblePromoItemDefIDs_t;
#pragma pack( push, 4 )
struct SteamInventoryEligiblePromoItemDefIDs_t
{
    uint32_t m_result;
    CSteamID m_steamID;
    int32_t m_numEligiblePromoItemDefs;
    int8_t m_bCachedData;
    uint8_t __pad_17[3];
};
#pragma pack( pop )

typedef struct SteamInventoryFullUpdate_t SteamInventoryFullUpdate_t;
#pragma pack( push, 4 )
struct SteamInventoryFullUpdate_t
{
    int32_t m_handle;
};
#pragma pack( pop )

typedef struct SteamInventoryRequestPricesResult_t SteamInventoryRequestPricesResult_t;
#pragma pack( push, 4 )
struct SteamInventoryRequestPricesResult_t
{
    uint32_t m_result;
    char (m_rgchCurrency)[4];
};
#pragma pack( pop )

typedef struct SteamInventoryResultReady_t SteamInventoryResultReady_t;
#pragma pack( push, 4 )
struct SteamInventoryResultReady_t
{
    int32_t m_handle;
    uint32_t m_result;
};
#pragma pack( pop )

typedef struct SteamItemDetails_t SteamItemDetails_t;
#pragma pack( push, 8 )
struct SteamItemDetails_t
{
    uint64_t m_itemId;
    int32_t m_iDefinition;
    uint16_t m_unQuantity;
    uint16_t m_unFlags;
};
#pragma pack( pop )

typedef struct SteamNetAuthenticationStatus_t SteamNetAuthenticationStatus_t;
#pragma pack( push, 4 )
struct SteamNetAuthenticationStatus_t
{
    uint32_t m_eAvail;
    char (m_debugMsg)[256];
};
#pragma pack( pop )

typedef struct SteamNetConnectionRealTimeLaneStatus_t SteamNetConnectionRealTimeLaneStatus_t;
#pragma pack( push, 8 )
struct SteamNetConnectionRealTimeLaneStatus_t
{
    int32_t m_cbPendingUnreliable;
    int32_t m_cbPendingReliable;
    int32_t m_cbSentUnackedReliable;
    int32_t _reservePad1;
    int64_t m_usecQueueTime;
    uint32_t (reserved)[10];
};
#pragma pack( pop )

typedef struct SteamNetConnectionRealTimeStatus_t SteamNetConnectionRealTimeStatus_t;
#pragma pack( push, 8 )
struct SteamNetConnectionRealTimeStatus_t
{
    uint32_t m_eState;
    int32_t m_nPing;
    float m_flConnectionQualityLocal;
    float m_flConnectionQualityRemote;
    float m_flOutPacketsPerSec;
    float m_flOutBytesPerSec;
    float m_flInPacketsPerSec;
    float m_flInBytesPerSec;
    int32_t m_nSendRateBytesPerSecond;
    int32_t m_cbPendingUnreliable;
    int32_t m_cbPendingReliable;
    int32_t m_cbSentUnackedReliable;
    int64_t m_usecQueueTime;
    uint32_t (reserved)[16];
};
#pragma pack( pop )

typedef struct SteamNetworkPingLocation_t SteamNetworkPingLocation_t;
#pragma pack( push, 1 )
struct SteamNetworkPingLocation_t
{
    uint8_t (m_data)[512];
};
#pragma pack( pop )

typedef struct SteamNetworkingConfigValue_t SteamNetworkingConfigValue_t;
#pragma pack( push, 8 )
struct SteamNetworkingConfigValue_t
{
    uint32_t m_eValue;
    uint32_t m_eDataType;
    struct { uint8_t _[8]; } m_val;
};
#pragma pack( pop )

typedef struct SteamNetworkingFakeIPResult_t SteamNetworkingFakeIPResult_t;
#pragma pack( push, 4 )
struct SteamNetworkingFakeIPResult_t
{
    uint32_t m_eResult;
    SteamNetworkingIdentity_144 m_identity;
    uint32_t m_unIP;
    uint16_t (m_unPorts)[8];
};
#pragma pack( pop )

typedef struct SteamNetworkingMessagesSessionFailed_t_153a SteamNetworkingMessagesSessionFailed_t_153a;
#pragma pack( push, 1 )
struct SteamNetworkingMessagesSessionFailed_t_153a
{
    SteamNetConnectionInfo_t_153a m_info;
};
#pragma pack( pop )

typedef struct SteamNetworkingMessagesSessionFailed_t_150 SteamNetworkingMessagesSessionFailed_t_150;
#pragma pack( push, 1 )
struct SteamNetworkingMessagesSessionFailed_t_150
{
    SteamNetConnectionInfo_t_144 m_info;
};
#pragma pack( pop )

typedef struct SteamNetworkingMessagesSessionFailed_t_151 SteamNetworkingMessagesSessionFailed_t_151;
#pragma pack( push, 1 )
struct SteamNetworkingMessagesSessionFailed_t_151
{
    SteamNetConnectionInfo_t_151 m_info;
};
#pragma pack( pop )

typedef struct SteamNetworkingMessagesSessionRequest_t_150 SteamNetworkingMessagesSessionRequest_t_150;
#pragma pack( push, 1 )
struct SteamNetworkingMessagesSessionRequest_t_150
{
    SteamNetworkingIdentity_144 m_identityRemote;
};
#pragma pack( pop )

typedef struct SteamNetworkingMessagesSessionRequest_t_151 SteamNetworkingMessagesSessionRequest_t_151;
#pragma pack( push, 1 )
struct SteamNetworkingMessagesSessionRequest_t_151
{
    SteamNetworkingIdentity_151 m_identityRemote;
};
#pragma pack( pop )

typedef struct SteamNetworkingPOPIDRender SteamNetworkingPOPIDRender;
#pragma pack( push, 1 )
struct SteamNetworkingPOPIDRender
{
    char (buf)[8];
};
#pragma pack( pop )

typedef struct SteamNetworkingQuickConnectionStatus SteamNetworkingQuickConnectionStatus;
#pragma pack( push, 8 )
struct SteamNetworkingQuickConnectionStatus
{
    uint32_t m_eState;
    int32_t m_nPing;
    float m_flConnectionQualityLocal;
    float m_flConnectionQualityRemote;
    float m_flOutPacketsPerSec;
    float m_flOutBytesPerSec;
    float m_flInPacketsPerSec;
    float m_flInBytesPerSec;
    int32_t m_nSendRateBytesPerSecond;
    int32_t m_cbPendingUnreliable;
    int32_t m_cbPendingReliable;
    int32_t m_cbSentUnackedReliable;
    int64_t m_usecQueueTime;
    uint32_t (reserved)[16];
};
#pragma pack( pop )

typedef struct SteamParentalSettingsChanged_t SteamParentalSettingsChanged_t;
#pragma pack( push, 1 )
struct SteamParentalSettingsChanged_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SteamRelayNetworkStatus_t SteamRelayNetworkStatus_t;
#pragma pack( push, 4 )
struct SteamRelayNetworkStatus_t
{
    uint32_t m_eAvail;
    int32_t m_bPingMeasurementInProgress;
    uint32_t m_eAvailNetworkConfig;
    uint32_t m_eAvailAnyRelay;
    char (m_debugMsg)[256];
};
#pragma pack( pop )

typedef struct SteamRemotePlaySessionConnected_t SteamRemotePlaySessionConnected_t;
#pragma pack( push, 4 )
struct SteamRemotePlaySessionConnected_t
{
    uint32_t m_unSessionID;
};
#pragma pack( pop )

typedef struct SteamRemotePlaySessionDisconnected_t SteamRemotePlaySessionDisconnected_t;
#pragma pack( push, 4 )
struct SteamRemotePlaySessionDisconnected_t
{
    uint32_t m_unSessionID;
};
#pragma pack( pop )

typedef struct SteamRemotePlayTogetherGuestInvite_t SteamRemotePlayTogetherGuestInvite_t;
#pragma pack( push, 1 )
struct SteamRemotePlayTogetherGuestInvite_t
{
    char (m_szConnectURL)[1024];
};
#pragma pack( pop )

typedef struct SteamServerConnectFailure_t_135 SteamServerConnectFailure_t_135;
#pragma pack( push, 4 )
struct SteamServerConnectFailure_t_135
{
    uint32_t m_eResult;
    int8_t m_bStillRetrying;
    uint8_t __pad_5[3];
};
#pragma pack( pop )

typedef struct SteamServerConnectFailure_t_099u SteamServerConnectFailure_t_099u;
#pragma pack( push, 4 )
struct SteamServerConnectFailure_t_099u
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct SteamServersConnected_t SteamServersConnected_t;
#pragma pack( push, 1 )
struct SteamServersConnected_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SteamServersDisconnected_t SteamServersDisconnected_t;
#pragma pack( push, 4 )
struct SteamServersDisconnected_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct SteamShutdown_t SteamShutdown_t;
#pragma pack( push, 1 )
struct SteamShutdown_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct SteamUGCQueryCompleted_t_143 SteamUGCQueryCompleted_t_143;
#pragma pack( push, 8 )
struct SteamUGCQueryCompleted_t_143
{
    uint64_t m_handle;
    uint32_t m_eResult;
    uint32_t m_unNumResultsReturned;
    uint32_t m_unTotalMatchingResults;
    int8_t m_bCachedData;
    char (m_rgchNextCursor)[256];
    uint8_t __pad_277[3];
};
#pragma pack( pop )

typedef struct SteamUGCQueryCompleted_t_128x SteamUGCQueryCompleted_t_128x;
#pragma pack( push, 8 )
struct SteamUGCQueryCompleted_t_128x
{
    uint64_t m_handle;
    uint32_t m_eResult;
    uint32_t m_unNumResultsReturned;
    uint32_t m_unTotalMatchingResults;
    int8_t m_bCachedData;
    uint8_t __pad_21[3];
};
#pragma pack( pop )

typedef struct SteamUGCQueryCompleted_t_126 SteamUGCQueryCompleted_t_126;
#pragma pack( push, 8 )
struct SteamUGCQueryCompleted_t_126
{
    uint64_t m_handle;
    uint32_t m_eResult;
    uint32_t m_unNumResultsReturned;
    uint32_t m_unTotalMatchingResults;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

typedef struct SteamUnifiedMessagesSendMethodResult_t SteamUnifiedMessagesSendMethodResult_t;
#pragma pack( push, 8 )
struct SteamUnifiedMessagesSendMethodResult_t
{
    uint64_t m_hHandle;
    uint64_t m_unContext;
    uint32_t m_eResult;
    uint32_t m_unResponseSize;
};
#pragma pack( pop )

typedef struct StopPlaytimeTrackingResult_t StopPlaytimeTrackingResult_t;
#pragma pack( push, 4 )
struct StopPlaytimeTrackingResult_t
{
    uint32_t m_eResult;
};
#pragma pack( pop )

typedef struct StoreAuthURLResponse_t StoreAuthURLResponse_t;
#pragma pack( push, 1 )
struct StoreAuthURLResponse_t
{
    char (m_szURL)[512];
};
#pragma pack( pop )

typedef struct SubmitItemUpdateResult_t_141 SubmitItemUpdateResult_t_141;
#pragma pack( push, 8 )
struct SubmitItemUpdateResult_t_141
{
    uint32_t m_eResult;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_5[3];
    uint64_t m_nPublishedFileId;
};
#pragma pack( pop )

typedef struct SubmitItemUpdateResult_t_130 SubmitItemUpdateResult_t_130;
#pragma pack( push, 4 )
struct SubmitItemUpdateResult_t_130
{
    uint32_t m_eResult;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_5[3];
};
#pragma pack( pop )

typedef struct TimedTrialStatus_t TimedTrialStatus_t;
#pragma pack( push, 4 )
struct TimedTrialStatus_t
{
    uint32_t m_unAppID;
    int8_t m_bIsOffline;
    uint8_t __pad_5[3];
    uint32_t m_unSecondsAllowed;
    uint32_t m_unSecondsPlayed;
};
#pragma pack( pop )

typedef struct UnreadChatMessagesChanged_t UnreadChatMessagesChanged_t;
#pragma pack( push, 1 )
struct UnreadChatMessagesChanged_t
{
    uint8_t __pad_0[1];
};
#pragma pack( pop )

typedef struct UserAchievementIconFetched_t UserAchievementIconFetched_t;
#pragma pack( push, 4 )
struct UserAchievementIconFetched_t
{
    CGameID m_nGameID;
    char (m_rgchAchievementName)[128];
    int8_t m_bAchieved;
    uint8_t __pad_137[3];
    int32_t m_nIconHandle;
};
#pragma pack( pop )

typedef struct UserAchievementStored_t UserAchievementStored_t;
#pragma pack( push, 8 )
struct UserAchievementStored_t
{
    uint64_t m_nGameID;
    int8_t m_bGroupAchievement;
    char (m_rgchAchievementName)[128];
    uint8_t __pad_137[3];
    uint32_t m_nCurProgress;
    uint32_t m_nMaxProgress;
    uint8_t __pad_148[4];
};
#pragma pack( pop )

typedef struct UserFavoriteItemsListChanged_t UserFavoriteItemsListChanged_t;
#pragma pack( push, 8 )
struct UserFavoriteItemsListChanged_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    int8_t m_bWasAddRequest;
    uint8_t __pad_13[3];
};
#pragma pack( pop )

typedef struct UserStatsReceived_t_102x UserStatsReceived_t_102x;
#pragma pack( push, 8 )
struct UserStatsReceived_t_102x
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    CSteamID m_steamIDUser;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

typedef struct UserStatsReceived_t_099u UserStatsReceived_t_099u;
#pragma pack( push, 8 )
struct UserStatsReceived_t_099u
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct UserStatsStored_t UserStatsStored_t;
#pragma pack( push, 8 )
struct UserStatsStored_t
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

typedef struct UserStatsUnloaded_t UserStatsUnloaded_t;
#pragma pack( push, 1 )
struct UserStatsUnloaded_t
{
    CSteamID m_steamIDUser;
};
#pragma pack( pop )

typedef struct UserSubscribedItemsListChanged_t UserSubscribedItemsListChanged_t;
#pragma pack( push, 4 )
struct UserSubscribedItemsListChanged_t
{
    uint32_t m_nAppID;
};
#pragma pack( pop )

typedef struct ValidateAuthTicketResponse_t_126 ValidateAuthTicketResponse_t_126;
#pragma pack( push, 4 )
struct ValidateAuthTicketResponse_t_126
{
    CSteamID m_SteamID;
    uint32_t m_eAuthSessionResponse;
    CSteamID m_OwnerSteamID;
};
#pragma pack( pop )

typedef struct ValidateAuthTicketResponse_t_104 ValidateAuthTicketResponse_t_104;
#pragma pack( push, 4 )
struct ValidateAuthTicketResponse_t_104
{
    CSteamID m_SteamID;
    uint32_t m_eAuthSessionResponse;
};
#pragma pack( pop )

typedef struct VolumeHasChanged_t VolumeHasChanged_t;
#pragma pack( push, 4 )
struct VolumeHasChanged_t
{
    float m_flNewVolume;
};
#pragma pack( pop )

typedef struct WorkshopEULAStatus_t WorkshopEULAStatus_t;
#pragma pack( push, 4 )
struct WorkshopEULAStatus_t
{
    uint32_t m_eResult;
    uint32_t m_nAppID;
    uint32_t m_unVersion;
    uint32_t m_rtAction;
    int8_t m_bAccepted;
    int8_t m_bNeedsAction;
    uint8_t __pad_18[2];
};
#pragma pack( pop )

typedef struct gameserveritem_t_105 gameserveritem_t_105;
#pragma pack( push, 4 )
struct gameserveritem_t_105
{
    servernetadr_t m_NetAdr;
    int32_t m_nPing;
    int8_t m_bHadSuccessfulResponse;
    int8_t m_bDoNotRefresh;
    char (m_szGameDir)[32];
    char (m_szMap)[32];
    char (m_szGameDescription)[64];
    uint8_t __pad_142[2];
    uint32_t m_nAppID;
    int32_t m_nPlayers;
    int32_t m_nMaxPlayers;
    int32_t m_nBotPlayers;
    int8_t m_bPassword;
    int8_t m_bSecure;
    uint8_t __pad_162[2];
    uint32_t m_ulTimeLastPlayed;
    int32_t m_nServerVersion;
    char (m_szServerName)[64];
    char (m_szGameTags)[128];
    CSteamID m_steamID;
};
#pragma pack( pop )

typedef struct gameserveritem_t_099u gameserveritem_t_099u;
#pragma pack( push, 4 )
struct gameserveritem_t_099u
{
    servernetadr_t m_NetAdr;
    int32_t m_nPing;
    int8_t m_bHadSuccessfulResponse;
    int8_t m_bDoNotRefresh;
    char (m_szGameDir)[32];
    char (m_szMap)[32];
    char (m_szGameDescription)[64];
    uint8_t __pad_142[2];
    int32_t m_nAppID;
    int32_t m_nPlayers;
    int32_t m_nMaxPlayers;
    int32_t m_nBotPlayers;
    int8_t m_bPassword;
    int8_t m_bSecure;
    uint8_t __pad_162[2];
    uint32_t m_ulTimeLastPlayed;
    int32_t m_nServerVersion;
    char (m_szServerName)[64];
    char (m_szGameTags)[128];
};
#pragma pack( pop )

typedef struct u64_SteamUGCDetails_t_160 u64_SteamUGCDetails_t_160;
typedef struct w64_SteamUGCDetails_t_160 w64_SteamUGCDetails_t_160;
typedef struct u32_SteamUGCDetails_t_160 u32_SteamUGCDetails_t_160;
typedef struct w32_SteamUGCDetails_t_160 w32_SteamUGCDetails_t_160;
typedef struct u64_SteamUGCDetails_t_128x u64_SteamUGCDetails_t_128x;
typedef struct w64_SteamUGCDetails_t_128x w64_SteamUGCDetails_t_128x;
typedef struct u32_SteamUGCDetails_t_128x u32_SteamUGCDetails_t_128x;
typedef struct w32_SteamUGCDetails_t_128x w32_SteamUGCDetails_t_128x;
typedef struct u64_SteamUGCDetails_t_126 u64_SteamUGCDetails_t_126;
typedef struct w64_SteamUGCDetails_t_126 w64_SteamUGCDetails_t_126;
typedef struct u32_SteamUGCDetails_t_126 u32_SteamUGCDetails_t_126;
typedef struct w32_SteamUGCDetails_t_126 w32_SteamUGCDetails_t_126;
typedef struct u64_AddAppDependencyResult_t u64_AddAppDependencyResult_t;
typedef struct w64_AddAppDependencyResult_t w64_AddAppDependencyResult_t;
typedef struct u32_AddAppDependencyResult_t u32_AddAppDependencyResult_t;
typedef struct w32_AddAppDependencyResult_t w32_AddAppDependencyResult_t;
typedef struct u64_AddUGCDependencyResult_t u64_AddUGCDependencyResult_t;
typedef struct w64_AddUGCDependencyResult_t w64_AddUGCDependencyResult_t;
typedef struct u32_AddUGCDependencyResult_t u32_AddUGCDependencyResult_t;
typedef struct w32_AddUGCDependencyResult_t w32_AddUGCDependencyResult_t;
typedef struct w64_CSteamAPIContext_141 u64_CSteamAPIContext_141;
typedef struct w64_CSteamAPIContext_141 w64_CSteamAPIContext_141;
typedef struct w32_CSteamAPIContext_141 u32_CSteamAPIContext_141;
typedef struct w32_CSteamAPIContext_141 w32_CSteamAPIContext_141;
typedef struct w64_CSteamAPIContext_143 u64_CSteamAPIContext_143;
typedef struct w64_CSteamAPIContext_143 w64_CSteamAPIContext_143;
typedef struct w32_CSteamAPIContext_143 u32_CSteamAPIContext_143;
typedef struct w32_CSteamAPIContext_143 w32_CSteamAPIContext_143;
typedef struct w64_CSteamAPIContext_145 u64_CSteamAPIContext_145;
typedef struct w64_CSteamAPIContext_145 w64_CSteamAPIContext_145;
typedef struct w32_CSteamAPIContext_145 u32_CSteamAPIContext_145;
typedef struct w32_CSteamAPIContext_145 w32_CSteamAPIContext_145;
typedef struct w64_CSteamAPIContext_137 u64_CSteamAPIContext_137;
typedef struct w64_CSteamAPIContext_137 w64_CSteamAPIContext_137;
typedef struct w32_CSteamAPIContext_137 u32_CSteamAPIContext_137;
typedef struct w32_CSteamAPIContext_137 w32_CSteamAPIContext_137;
typedef struct u_CSteamCallback u_CSteamCallback;
typedef struct u_CSteamCallback u64_CSteamCallback;
typedef struct u_CSteamCallback u32_CSteamCallback;
typedef struct w_CSteamCallback w_CSteamCallback;
typedef struct w_CSteamCallback w64_CSteamCallback;
typedef struct w_CSteamCallback w32_CSteamCallback;
typedef struct w64_CSteamGameServerAPIContext_152 u64_CSteamGameServerAPIContext_152;
typedef struct w64_CSteamGameServerAPIContext_152 w64_CSteamGameServerAPIContext_152;
typedef struct w32_CSteamGameServerAPIContext_152 u32_CSteamGameServerAPIContext_152;
typedef struct w32_CSteamGameServerAPIContext_152 w32_CSteamGameServerAPIContext_152;
typedef struct w64_CSteamGameServerAPIContext_143 u64_CSteamGameServerAPIContext_143;
typedef struct w64_CSteamGameServerAPIContext_143 w64_CSteamGameServerAPIContext_143;
typedef struct w32_CSteamGameServerAPIContext_143 u32_CSteamGameServerAPIContext_143;
typedef struct w32_CSteamGameServerAPIContext_143 w32_CSteamGameServerAPIContext_143;
typedef struct w64_CallbackMsg_t u64_CallbackMsg_t;
typedef struct w64_CallbackMsg_t w64_CallbackMsg_t;
typedef struct w32_CallbackMsg_t u32_CallbackMsg_t;
typedef struct w32_CallbackMsg_t w32_CallbackMsg_t;
typedef struct u64_CreateBeaconCallback_t u64_CreateBeaconCallback_t;
typedef struct w64_CreateBeaconCallback_t w64_CreateBeaconCallback_t;
typedef struct u32_CreateBeaconCallback_t u32_CreateBeaconCallback_t;
typedef struct w32_CreateBeaconCallback_t w32_CreateBeaconCallback_t;
typedef struct u64_CreateItemResult_t u64_CreateItemResult_t;
typedef struct w64_CreateItemResult_t w64_CreateItemResult_t;
typedef struct u32_CreateItemResult_t u32_CreateItemResult_t;
typedef struct w32_CreateItemResult_t w32_CreateItemResult_t;
typedef struct u64_DeleteItemResult_t u64_DeleteItemResult_t;
typedef struct w64_DeleteItemResult_t w64_DeleteItemResult_t;
typedef struct u32_DeleteItemResult_t u32_DeleteItemResult_t;
typedef struct w32_DeleteItemResult_t w32_DeleteItemResult_t;
typedef struct u64_DownloadItemResult_t u64_DownloadItemResult_t;
typedef struct w64_DownloadItemResult_t w64_DownloadItemResult_t;
typedef struct u32_DownloadItemResult_t u32_DownloadItemResult_t;
typedef struct w32_DownloadItemResult_t w32_DownloadItemResult_t;
typedef struct u64_EndGameResultCallback_t u64_EndGameResultCallback_t;
typedef struct w64_EndGameResultCallback_t w64_EndGameResultCallback_t;
typedef struct u32_EndGameResultCallback_t u32_EndGameResultCallback_t;
typedef struct w32_EndGameResultCallback_t w32_EndGameResultCallback_t;
typedef struct u64_FileDetailsResult_t u64_FileDetailsResult_t;
typedef struct w64_FileDetailsResult_t w64_FileDetailsResult_t;
typedef struct u32_FileDetailsResult_t u32_FileDetailsResult_t;
typedef struct w32_FileDetailsResult_t w32_FileDetailsResult_t;
typedef struct u64_GSReputation_t_123 u64_GSReputation_t_123;
typedef struct w64_GSReputation_t_123 w64_GSReputation_t_123;
typedef struct u32_GSReputation_t_123 u32_GSReputation_t_123;
typedef struct w32_GSReputation_t_123 w32_GSReputation_t_123;
typedef struct w64_GSReputation_t_108 u64_GSReputation_t_108;
typedef struct w64_GSReputation_t_108 w64_GSReputation_t_108;
typedef struct u32_GSReputation_t_108 u32_GSReputation_t_108;
typedef struct w32_GSReputation_t_108 w32_GSReputation_t_108;
typedef struct u64_GetAppDependenciesResult_t u64_GetAppDependenciesResult_t;
typedef struct w64_GetAppDependenciesResult_t w64_GetAppDependenciesResult_t;
typedef struct u32_GetAppDependenciesResult_t u32_GetAppDependenciesResult_t;
typedef struct w32_GetAppDependenciesResult_t w32_GetAppDependenciesResult_t;
typedef struct u64_HTML_ChangedTitle_t u64_HTML_ChangedTitle_t;
typedef struct w64_HTML_ChangedTitle_t w64_HTML_ChangedTitle_t;
typedef struct w32_HTML_ChangedTitle_t u32_HTML_ChangedTitle_t;
typedef struct w32_HTML_ChangedTitle_t w32_HTML_ChangedTitle_t;
typedef struct u64_HTML_ComboNeedsPaint_t u64_HTML_ComboNeedsPaint_t;
typedef struct w64_HTML_ComboNeedsPaint_t w64_HTML_ComboNeedsPaint_t;
typedef struct w32_HTML_ComboNeedsPaint_t u32_HTML_ComboNeedsPaint_t;
typedef struct w32_HTML_ComboNeedsPaint_t w32_HTML_ComboNeedsPaint_t;
typedef struct u64_HTML_FileOpenDialog_t u64_HTML_FileOpenDialog_t;
typedef struct w64_HTML_FileOpenDialog_t w64_HTML_FileOpenDialog_t;
typedef struct u32_HTML_FileOpenDialog_t u32_HTML_FileOpenDialog_t;
typedef struct w32_HTML_FileOpenDialog_t w32_HTML_FileOpenDialog_t;
typedef struct u64_HTML_FinishedRequest_t u64_HTML_FinishedRequest_t;
typedef struct w64_HTML_FinishedRequest_t w64_HTML_FinishedRequest_t;
typedef struct u32_HTML_FinishedRequest_t u32_HTML_FinishedRequest_t;
typedef struct w32_HTML_FinishedRequest_t w32_HTML_FinishedRequest_t;
typedef struct u64_HTML_JSAlert_t u64_HTML_JSAlert_t;
typedef struct w64_HTML_JSAlert_t w64_HTML_JSAlert_t;
typedef struct w32_HTML_JSAlert_t u32_HTML_JSAlert_t;
typedef struct w32_HTML_JSAlert_t w32_HTML_JSAlert_t;
typedef struct u64_HTML_JSConfirm_t u64_HTML_JSConfirm_t;
typedef struct w64_HTML_JSConfirm_t w64_HTML_JSConfirm_t;
typedef struct w32_HTML_JSConfirm_t u32_HTML_JSConfirm_t;
typedef struct w32_HTML_JSConfirm_t w32_HTML_JSConfirm_t;
typedef struct u64_HTML_LinkAtPosition_t u64_HTML_LinkAtPosition_t;
typedef struct w64_HTML_LinkAtPosition_t w64_HTML_LinkAtPosition_t;
typedef struct u32_HTML_LinkAtPosition_t u32_HTML_LinkAtPosition_t;
typedef struct w32_HTML_LinkAtPosition_t w32_HTML_LinkAtPosition_t;
typedef struct u64_HTML_NeedsPaint_t u64_HTML_NeedsPaint_t;
typedef struct w64_HTML_NeedsPaint_t w64_HTML_NeedsPaint_t;
typedef struct w32_HTML_NeedsPaint_t u32_HTML_NeedsPaint_t;
typedef struct w32_HTML_NeedsPaint_t w32_HTML_NeedsPaint_t;
typedef struct u64_HTML_NewWindow_t_132x u64_HTML_NewWindow_t_132x;
typedef struct w64_HTML_NewWindow_t_132x w64_HTML_NewWindow_t_132x;
typedef struct u32_HTML_NewWindow_t_132x u32_HTML_NewWindow_t_132x;
typedef struct w32_HTML_NewWindow_t_132x w32_HTML_NewWindow_t_132x;
typedef struct u64_HTML_NewWindow_t_130x u64_HTML_NewWindow_t_130x;
typedef struct w64_HTML_NewWindow_t_130x w64_HTML_NewWindow_t_130x;
typedef struct u32_HTML_NewWindow_t_130x u32_HTML_NewWindow_t_130x;
typedef struct w32_HTML_NewWindow_t_130x w32_HTML_NewWindow_t_130x;
typedef struct u64_HTML_OpenLinkInNewTab_t u64_HTML_OpenLinkInNewTab_t;
typedef struct w64_HTML_OpenLinkInNewTab_t w64_HTML_OpenLinkInNewTab_t;
typedef struct u32_HTML_OpenLinkInNewTab_t u32_HTML_OpenLinkInNewTab_t;
typedef struct w32_HTML_OpenLinkInNewTab_t w32_HTML_OpenLinkInNewTab_t;
typedef struct u64_HTML_ShowToolTip_t u64_HTML_ShowToolTip_t;
typedef struct w64_HTML_ShowToolTip_t w64_HTML_ShowToolTip_t;
typedef struct w32_HTML_ShowToolTip_t u32_HTML_ShowToolTip_t;
typedef struct w32_HTML_ShowToolTip_t w32_HTML_ShowToolTip_t;
typedef struct u64_HTML_StartRequest_t u64_HTML_StartRequest_t;
typedef struct w64_HTML_StartRequest_t w64_HTML_StartRequest_t;
typedef struct u32_HTML_StartRequest_t u32_HTML_StartRequest_t;
typedef struct w32_HTML_StartRequest_t w32_HTML_StartRequest_t;
typedef struct u64_HTML_StatusText_t u64_HTML_StatusText_t;
typedef struct w64_HTML_StatusText_t w64_HTML_StatusText_t;
typedef struct w32_HTML_StatusText_t u32_HTML_StatusText_t;
typedef struct w32_HTML_StatusText_t w32_HTML_StatusText_t;
typedef struct u64_HTML_URLChanged_t u64_HTML_URLChanged_t;
typedef struct w64_HTML_URLChanged_t w64_HTML_URLChanged_t;
typedef struct u32_HTML_URLChanged_t u32_HTML_URLChanged_t;
typedef struct w32_HTML_URLChanged_t w32_HTML_URLChanged_t;
typedef struct u64_HTML_UpdateToolTip_t u64_HTML_UpdateToolTip_t;
typedef struct w64_HTML_UpdateToolTip_t w64_HTML_UpdateToolTip_t;
typedef struct w32_HTML_UpdateToolTip_t u32_HTML_UpdateToolTip_t;
typedef struct w32_HTML_UpdateToolTip_t w32_HTML_UpdateToolTip_t;
typedef struct u64_HTTPRequestCompleted_t_132x u64_HTTPRequestCompleted_t_132x;
typedef struct w64_HTTPRequestCompleted_t_132x w64_HTTPRequestCompleted_t_132x;
typedef struct u32_HTTPRequestCompleted_t_132x u32_HTTPRequestCompleted_t_132x;
typedef struct w32_HTTPRequestCompleted_t_132x w32_HTTPRequestCompleted_t_132x;
typedef struct u64_HTTPRequestCompleted_t_123 u64_HTTPRequestCompleted_t_123;
typedef struct w64_HTTPRequestCompleted_t_123 w64_HTTPRequestCompleted_t_123;
typedef struct u32_HTTPRequestCompleted_t_123 u32_HTTPRequestCompleted_t_123;
typedef struct w32_HTTPRequestCompleted_t_123 w32_HTTPRequestCompleted_t_123;
typedef struct w64_HTTPRequestCompleted_t_115 u64_HTTPRequestCompleted_t_115;
typedef struct w64_HTTPRequestCompleted_t_115 w64_HTTPRequestCompleted_t_115;
typedef struct u32_HTTPRequestCompleted_t_115 u32_HTTPRequestCompleted_t_115;
typedef struct w32_HTTPRequestCompleted_t_115 w32_HTTPRequestCompleted_t_115;
typedef struct u64_HTTPRequestDataReceived_t_123 u64_HTTPRequestDataReceived_t_123;
typedef struct w64_HTTPRequestDataReceived_t_123 w64_HTTPRequestDataReceived_t_123;
typedef struct u32_HTTPRequestDataReceived_t_123 u32_HTTPRequestDataReceived_t_123;
typedef struct w32_HTTPRequestDataReceived_t_123 w32_HTTPRequestDataReceived_t_123;
typedef struct w64_HTTPRequestDataReceived_t_121x u64_HTTPRequestDataReceived_t_121x;
typedef struct w64_HTTPRequestDataReceived_t_121x w64_HTTPRequestDataReceived_t_121x;
typedef struct u32_HTTPRequestDataReceived_t_121x u32_HTTPRequestDataReceived_t_121x;
typedef struct w32_HTTPRequestDataReceived_t_121x w32_HTTPRequestDataReceived_t_121x;
typedef struct u64_HTTPRequestHeadersReceived_t_123 u64_HTTPRequestHeadersReceived_t_123;
typedef struct w64_HTTPRequestHeadersReceived_t_123 w64_HTTPRequestHeadersReceived_t_123;
typedef struct u32_HTTPRequestHeadersReceived_t_123 u32_HTTPRequestHeadersReceived_t_123;
typedef struct w32_HTTPRequestHeadersReceived_t_123 w32_HTTPRequestHeadersReceived_t_123;
typedef struct w64_HTTPRequestHeadersReceived_t_121x u64_HTTPRequestHeadersReceived_t_121x;
typedef struct w64_HTTPRequestHeadersReceived_t_121x w64_HTTPRequestHeadersReceived_t_121x;
typedef struct u32_HTTPRequestHeadersReceived_t_121x u32_HTTPRequestHeadersReceived_t_121x;
typedef struct w32_HTTPRequestHeadersReceived_t_121x w32_HTTPRequestHeadersReceived_t_121x;
typedef struct u_ISteamMatchmakingPingResponse u_ISteamMatchmakingPingResponse;
typedef struct u_ISteamMatchmakingPingResponse u64_ISteamMatchmakingPingResponse;
typedef struct u_ISteamMatchmakingPingResponse u32_ISteamMatchmakingPingResponse;
typedef struct w_ISteamMatchmakingPingResponse w_ISteamMatchmakingPingResponse;
typedef struct w_ISteamMatchmakingPingResponse w64_ISteamMatchmakingPingResponse;
typedef struct w_ISteamMatchmakingPingResponse w32_ISteamMatchmakingPingResponse;
typedef struct u_ISteamMatchmakingPlayersResponse u_ISteamMatchmakingPlayersResponse;
typedef struct u_ISteamMatchmakingPlayersResponse u64_ISteamMatchmakingPlayersResponse;
typedef struct u_ISteamMatchmakingPlayersResponse u32_ISteamMatchmakingPlayersResponse;
typedef struct w_ISteamMatchmakingPlayersResponse w_ISteamMatchmakingPlayersResponse;
typedef struct w_ISteamMatchmakingPlayersResponse w64_ISteamMatchmakingPlayersResponse;
typedef struct w_ISteamMatchmakingPlayersResponse w32_ISteamMatchmakingPlayersResponse;
typedef struct u_ISteamMatchmakingRulesResponse u_ISteamMatchmakingRulesResponse;
typedef struct u_ISteamMatchmakingRulesResponse u64_ISteamMatchmakingRulesResponse;
typedef struct u_ISteamMatchmakingRulesResponse u32_ISteamMatchmakingRulesResponse;
typedef struct w_ISteamMatchmakingRulesResponse w_ISteamMatchmakingRulesResponse;
typedef struct w_ISteamMatchmakingRulesResponse w64_ISteamMatchmakingRulesResponse;
typedef struct w_ISteamMatchmakingRulesResponse w32_ISteamMatchmakingRulesResponse;
typedef struct u_ISteamMatchmakingServerListResponse_106 u_ISteamMatchmakingServerListResponse_106;
typedef struct u_ISteamMatchmakingServerListResponse_106 u64_ISteamMatchmakingServerListResponse_106;
typedef struct u_ISteamMatchmakingServerListResponse_106 u32_ISteamMatchmakingServerListResponse_106;
typedef struct w_ISteamMatchmakingServerListResponse_106 w_ISteamMatchmakingServerListResponse_106;
typedef struct w_ISteamMatchmakingServerListResponse_106 w64_ISteamMatchmakingServerListResponse_106;
typedef struct w_ISteamMatchmakingServerListResponse_106 w32_ISteamMatchmakingServerListResponse_106;
typedef struct u_ISteamMatchmakingServerListResponse_099u u_ISteamMatchmakingServerListResponse_099u;
typedef struct u_ISteamMatchmakingServerListResponse_099u u64_ISteamMatchmakingServerListResponse_099u;
typedef struct u_ISteamMatchmakingServerListResponse_099u u32_ISteamMatchmakingServerListResponse_099u;
typedef struct w_ISteamMatchmakingServerListResponse_099u w_ISteamMatchmakingServerListResponse_099u;
typedef struct w_ISteamMatchmakingServerListResponse_099u w64_ISteamMatchmakingServerListResponse_099u;
typedef struct w_ISteamMatchmakingServerListResponse_099u w32_ISteamMatchmakingServerListResponse_099u;
typedef struct u_ISteamNetworkingConnectionCustomSignaling u_ISteamNetworkingConnectionCustomSignaling;
typedef struct u_ISteamNetworkingConnectionCustomSignaling u64_ISteamNetworkingConnectionCustomSignaling;
typedef struct u_ISteamNetworkingConnectionCustomSignaling u32_ISteamNetworkingConnectionCustomSignaling;
typedef struct w_ISteamNetworkingConnectionCustomSignaling w_ISteamNetworkingConnectionCustomSignaling;
typedef struct w_ISteamNetworkingConnectionCustomSignaling w64_ISteamNetworkingConnectionCustomSignaling;
typedef struct w_ISteamNetworkingConnectionCustomSignaling w32_ISteamNetworkingConnectionCustomSignaling;
typedef struct u_ISteamNetworkingCustomSignalingRecvContext u_ISteamNetworkingCustomSignalingRecvContext;
typedef struct u_ISteamNetworkingCustomSignalingRecvContext u64_ISteamNetworkingCustomSignalingRecvContext;
typedef struct u_ISteamNetworkingCustomSignalingRecvContext u32_ISteamNetworkingCustomSignalingRecvContext;
typedef struct w_ISteamNetworkingCustomSignalingRecvContext w_ISteamNetworkingCustomSignalingRecvContext;
typedef struct w_ISteamNetworkingCustomSignalingRecvContext w64_ISteamNetworkingCustomSignalingRecvContext;
typedef struct w_ISteamNetworkingCustomSignalingRecvContext w32_ISteamNetworkingCustomSignalingRecvContext;
typedef struct u_ISteamTimeline u_ISteamTimeline;
typedef struct u_ISteamTimeline u64_ISteamTimeline;
typedef struct u_ISteamTimeline u32_ISteamTimeline;
typedef struct w_ISteamTimeline w_ISteamTimeline;
typedef struct w_ISteamTimeline w64_ISteamTimeline;
typedef struct w_ISteamTimeline w32_ISteamTimeline;
typedef struct u64_ItemInstalled_t_160 u64_ItemInstalled_t_160;
typedef struct w64_ItemInstalled_t_160 w64_ItemInstalled_t_160;
typedef struct u32_ItemInstalled_t_160 u32_ItemInstalled_t_160;
typedef struct w32_ItemInstalled_t_160 w32_ItemInstalled_t_160;
typedef struct u64_ItemInstalled_t_130 u64_ItemInstalled_t_130;
typedef struct w64_ItemInstalled_t_130 w64_ItemInstalled_t_130;
typedef struct u32_ItemInstalled_t_130 u32_ItemInstalled_t_130;
typedef struct w32_ItemInstalled_t_130 w32_ItemInstalled_t_130;
typedef struct u64_JoinPartyCallback_t u64_JoinPartyCallback_t;
typedef struct w64_JoinPartyCallback_t w64_JoinPartyCallback_t;
typedef struct u32_JoinPartyCallback_t u32_JoinPartyCallback_t;
typedef struct w32_JoinPartyCallback_t w32_JoinPartyCallback_t;
typedef struct u64_LeaderboardEntry_t_123 u64_LeaderboardEntry_t_123;
typedef struct w64_LeaderboardEntry_t_123 w64_LeaderboardEntry_t_123;
typedef struct u32_LeaderboardEntry_t_123 u32_LeaderboardEntry_t_123;
typedef struct w32_LeaderboardEntry_t_123 w32_LeaderboardEntry_t_123;
typedef struct w64_LeaderboardEntry_t_111x u64_LeaderboardEntry_t_111x;
typedef struct w64_LeaderboardEntry_t_111x w64_LeaderboardEntry_t_111x;
typedef struct u32_LeaderboardEntry_t_111x u32_LeaderboardEntry_t_111x;
typedef struct w32_LeaderboardEntry_t_111x w32_LeaderboardEntry_t_111x;
typedef struct w64_LeaderboardEntry_t_104 u64_LeaderboardEntry_t_104;
typedef struct w64_LeaderboardEntry_t_104 w64_LeaderboardEntry_t_104;
typedef struct w32_LeaderboardEntry_t_104 u32_LeaderboardEntry_t_104;
typedef struct w32_LeaderboardEntry_t_104 w32_LeaderboardEntry_t_104;
typedef struct u64_LeaderboardScoreUploaded_t_123 u64_LeaderboardScoreUploaded_t_123;
typedef struct w64_LeaderboardScoreUploaded_t_123 w64_LeaderboardScoreUploaded_t_123;
typedef struct u32_LeaderboardScoreUploaded_t_123 u32_LeaderboardScoreUploaded_t_123;
typedef struct w32_LeaderboardScoreUploaded_t_123 w32_LeaderboardScoreUploaded_t_123;
typedef struct w64_LeaderboardScoreUploaded_t_104 u64_LeaderboardScoreUploaded_t_104;
typedef struct w64_LeaderboardScoreUploaded_t_104 w64_LeaderboardScoreUploaded_t_104;
typedef struct u32_LeaderboardScoreUploaded_t_104 u32_LeaderboardScoreUploaded_t_104;
typedef struct w32_LeaderboardScoreUploaded_t_104 w32_LeaderboardScoreUploaded_t_104;
typedef struct u64_LeaderboardUGCSet_t_123 u64_LeaderboardUGCSet_t_123;
typedef struct w64_LeaderboardUGCSet_t_123 w64_LeaderboardUGCSet_t_123;
typedef struct u32_LeaderboardUGCSet_t_123 u32_LeaderboardUGCSet_t_123;
typedef struct w32_LeaderboardUGCSet_t_123 w32_LeaderboardUGCSet_t_123;
typedef struct w64_LeaderboardUGCSet_t_111x u64_LeaderboardUGCSet_t_111x;
typedef struct w64_LeaderboardUGCSet_t_111x w64_LeaderboardUGCSet_t_111x;
typedef struct u32_LeaderboardUGCSet_t_111x u32_LeaderboardUGCSet_t_111x;
typedef struct w32_LeaderboardUGCSet_t_111x w32_LeaderboardUGCSet_t_111x;
typedef struct u64_LobbyCreated_t_123 u64_LobbyCreated_t_123;
typedef struct w64_LobbyCreated_t_123 w64_LobbyCreated_t_123;
typedef struct u32_LobbyCreated_t_123 u32_LobbyCreated_t_123;
typedef struct w32_LobbyCreated_t_123 w32_LobbyCreated_t_123;
typedef struct w64_LobbyCreated_t_099u u64_LobbyCreated_t_099u;
typedef struct w64_LobbyCreated_t_099u w64_LobbyCreated_t_099u;
typedef struct u32_LobbyCreated_t_099u u32_LobbyCreated_t_099u;
typedef struct w32_LobbyCreated_t_099u w32_LobbyCreated_t_099u;
typedef struct u64_MicroTxnAuthorizationResponse_t_123 u64_MicroTxnAuthorizationResponse_t_123;
typedef struct w64_MicroTxnAuthorizationResponse_t_123 w64_MicroTxnAuthorizationResponse_t_123;
typedef struct u32_MicroTxnAuthorizationResponse_t_123 u32_MicroTxnAuthorizationResponse_t_123;
typedef struct w32_MicroTxnAuthorizationResponse_t_123 w32_MicroTxnAuthorizationResponse_t_123;
typedef struct w64_MicroTxnAuthorizationResponse_t_109 u64_MicroTxnAuthorizationResponse_t_109;
typedef struct w64_MicroTxnAuthorizationResponse_t_109 w64_MicroTxnAuthorizationResponse_t_109;
typedef struct u32_MicroTxnAuthorizationResponse_t_109 u32_MicroTxnAuthorizationResponse_t_109;
typedef struct w32_MicroTxnAuthorizationResponse_t_109 w32_MicroTxnAuthorizationResponse_t_109;
typedef struct u64_PS3TrophiesInstalled_t_123 u64_PS3TrophiesInstalled_t_123;
typedef struct w64_PS3TrophiesInstalled_t_123 w64_PS3TrophiesInstalled_t_123;
typedef struct u32_PS3TrophiesInstalled_t_123 u32_PS3TrophiesInstalled_t_123;
typedef struct w32_PS3TrophiesInstalled_t_123 w32_PS3TrophiesInstalled_t_123;
typedef struct w64_PS3TrophiesInstalled_t_112x u64_PS3TrophiesInstalled_t_112x;
typedef struct w64_PS3TrophiesInstalled_t_112x w64_PS3TrophiesInstalled_t_112x;
typedef struct u32_PS3TrophiesInstalled_t_112x u32_PS3TrophiesInstalled_t_112x;
typedef struct w32_PS3TrophiesInstalled_t_112x w32_PS3TrophiesInstalled_t_112x;
typedef struct u64_RemoteStorageAppSyncProgress_t_123 u64_RemoteStorageAppSyncProgress_t_123;
typedef struct w64_RemoteStorageAppSyncProgress_t_123 w64_RemoteStorageAppSyncProgress_t_123;
typedef struct u32_RemoteStorageAppSyncProgress_t_123 u32_RemoteStorageAppSyncProgress_t_123;
typedef struct w32_RemoteStorageAppSyncProgress_t_123 w32_RemoteStorageAppSyncProgress_t_123;
typedef struct w64_RemoteStorageAppSyncProgress_t_111x u64_RemoteStorageAppSyncProgress_t_111x;
typedef struct w64_RemoteStorageAppSyncProgress_t_111x w64_RemoteStorageAppSyncProgress_t_111x;
typedef struct u32_RemoteStorageAppSyncProgress_t_111x u32_RemoteStorageAppSyncProgress_t_111x;
typedef struct w32_RemoteStorageAppSyncProgress_t_111x w32_RemoteStorageAppSyncProgress_t_111x;
typedef struct u64_RemoteStorageDeletePublishedFileResult_t_123 u64_RemoteStorageDeletePublishedFileResult_t_123;
typedef struct w64_RemoteStorageDeletePublishedFileResult_t_123 w64_RemoteStorageDeletePublishedFileResult_t_123;
typedef struct u32_RemoteStorageDeletePublishedFileResult_t_123 u32_RemoteStorageDeletePublishedFileResult_t_123;
typedef struct w32_RemoteStorageDeletePublishedFileResult_t_123 w32_RemoteStorageDeletePublishedFileResult_t_123;
typedef struct w64_RemoteStorageDeletePublishedFileResult_t_116x u64_RemoteStorageDeletePublishedFileResult_t_116x;
typedef struct w64_RemoteStorageDeletePublishedFileResult_t_116x w64_RemoteStorageDeletePublishedFileResult_t_116x;
typedef struct u32_RemoteStorageDeletePublishedFileResult_t_116x u32_RemoteStorageDeletePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageDeletePublishedFileResult_t_116x w32_RemoteStorageDeletePublishedFileResult_t_116x;
typedef struct u64_RemoteStorageDownloadUGCResult_t_123 u64_RemoteStorageDownloadUGCResult_t_123;
typedef struct w64_RemoteStorageDownloadUGCResult_t_123 w64_RemoteStorageDownloadUGCResult_t_123;
typedef struct u32_RemoteStorageDownloadUGCResult_t_123 u32_RemoteStorageDownloadUGCResult_t_123;
typedef struct w32_RemoteStorageDownloadUGCResult_t_123 w32_RemoteStorageDownloadUGCResult_t_123;
typedef struct w64_RemoteStorageDownloadUGCResult_t_116x u64_RemoteStorageDownloadUGCResult_t_116x;
typedef struct w64_RemoteStorageDownloadUGCResult_t_116x w64_RemoteStorageDownloadUGCResult_t_116x;
typedef struct u32_RemoteStorageDownloadUGCResult_t_116x u32_RemoteStorageDownloadUGCResult_t_116x;
typedef struct w32_RemoteStorageDownloadUGCResult_t_116x w32_RemoteStorageDownloadUGCResult_t_116x;
typedef struct w64_RemoteStorageDownloadUGCResult_t_111x u64_RemoteStorageDownloadUGCResult_t_111x;
typedef struct w64_RemoteStorageDownloadUGCResult_t_111x w64_RemoteStorageDownloadUGCResult_t_111x;
typedef struct u32_RemoteStorageDownloadUGCResult_t_111x u32_RemoteStorageDownloadUGCResult_t_111x;
typedef struct w32_RemoteStorageDownloadUGCResult_t_111x w32_RemoteStorageDownloadUGCResult_t_111x;
typedef struct u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef struct u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef struct w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef struct w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef struct u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef struct w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef struct u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef struct u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef struct w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef struct w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef struct u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef struct w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef struct u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef struct u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef struct w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef struct w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef struct u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef struct w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef struct u64_RemoteStorageEnumerateWorkshopFilesResult_t_125 u64_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_125 w64_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_125 u32_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_125 w32_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef struct u64_RemoteStorageEnumerateWorkshopFilesResult_t_123 u64_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_123 w64_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_123 u32_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_123 w32_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_119 u64_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_119 w64_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_119 u32_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_119 w32_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef struct u64_RemoteStorageFileShareResult_t_128x u64_RemoteStorageFileShareResult_t_128x;
typedef struct w64_RemoteStorageFileShareResult_t_128x w64_RemoteStorageFileShareResult_t_128x;
typedef struct u32_RemoteStorageFileShareResult_t_128x u32_RemoteStorageFileShareResult_t_128x;
typedef struct w32_RemoteStorageFileShareResult_t_128x w32_RemoteStorageFileShareResult_t_128x;
typedef struct u64_RemoteStorageFileShareResult_t_123 u64_RemoteStorageFileShareResult_t_123;
typedef struct w64_RemoteStorageFileShareResult_t_123 w64_RemoteStorageFileShareResult_t_123;
typedef struct u32_RemoteStorageFileShareResult_t_123 u32_RemoteStorageFileShareResult_t_123;
typedef struct w32_RemoteStorageFileShareResult_t_123 w32_RemoteStorageFileShareResult_t_123;
typedef struct w64_RemoteStorageFileShareResult_t_111x u64_RemoteStorageFileShareResult_t_111x;
typedef struct w64_RemoteStorageFileShareResult_t_111x w64_RemoteStorageFileShareResult_t_111x;
typedef struct u32_RemoteStorageFileShareResult_t_111x u32_RemoteStorageFileShareResult_t_111x;
typedef struct w32_RemoteStorageFileShareResult_t_111x w32_RemoteStorageFileShareResult_t_111x;
typedef struct u64_RemoteStorageGetPublishedFileDetailsResult_t_126 u64_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_126 w64_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_126 u32_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_126 w32_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef struct u64_RemoteStorageGetPublishedFileDetailsResult_t_123 u64_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_123 w64_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_123 u32_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_123 w32_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119x u64_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119x w64_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_119x u32_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_119x w32_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119 u64_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119 w64_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_119 u32_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_119 w32_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_118 u64_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_118 w64_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_118 u32_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_118 w32_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_116x u64_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef struct w64_RemoteStorageGetPublishedFileDetailsResult_t_116x w64_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef struct u32_RemoteStorageGetPublishedFileDetailsResult_t_116x u32_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef struct w32_RemoteStorageGetPublishedFileDetailsResult_t_116x w32_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef struct u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef struct w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef struct u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef struct w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef struct w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef struct w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef struct u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef struct w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef struct u64_RemoteStoragePublishFileResult_t_125 u64_RemoteStoragePublishFileResult_t_125;
typedef struct w64_RemoteStoragePublishFileResult_t_125 w64_RemoteStoragePublishFileResult_t_125;
typedef struct u32_RemoteStoragePublishFileResult_t_125 u32_RemoteStoragePublishFileResult_t_125;
typedef struct w32_RemoteStoragePublishFileResult_t_125 w32_RemoteStoragePublishFileResult_t_125;
typedef struct u64_RemoteStoragePublishFileResult_t_123 u64_RemoteStoragePublishFileResult_t_123;
typedef struct w64_RemoteStoragePublishFileResult_t_123 w64_RemoteStoragePublishFileResult_t_123;
typedef struct u32_RemoteStoragePublishFileResult_t_123 u32_RemoteStoragePublishFileResult_t_123;
typedef struct w32_RemoteStoragePublishFileResult_t_123 w32_RemoteStoragePublishFileResult_t_123;
typedef struct w64_RemoteStoragePublishFileResult_t_116x u64_RemoteStoragePublishFileResult_t_116x;
typedef struct w64_RemoteStoragePublishFileResult_t_116x w64_RemoteStoragePublishFileResult_t_116x;
typedef struct u32_RemoteStoragePublishFileResult_t_116x u32_RemoteStoragePublishFileResult_t_116x;
typedef struct w32_RemoteStoragePublishFileResult_t_116x w32_RemoteStoragePublishFileResult_t_116x;
typedef struct u64_RemoteStoragePublishedFileUpdated_t u64_RemoteStoragePublishedFileUpdated_t;
typedef struct w64_RemoteStoragePublishedFileUpdated_t w64_RemoteStoragePublishedFileUpdated_t;
typedef struct u32_RemoteStoragePublishedFileUpdated_t u32_RemoteStoragePublishedFileUpdated_t;
typedef struct w32_RemoteStoragePublishedFileUpdated_t w32_RemoteStoragePublishedFileUpdated_t;
typedef struct u64_RemoteStorageSetUserPublishedFileActionResult_t_123 u64_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef struct w64_RemoteStorageSetUserPublishedFileActionResult_t_123 w64_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef struct u32_RemoteStorageSetUserPublishedFileActionResult_t_123 u32_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef struct w32_RemoteStorageSetUserPublishedFileActionResult_t_123 w32_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef struct w64_RemoteStorageSetUserPublishedFileActionResult_t_119 u64_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef struct w64_RemoteStorageSetUserPublishedFileActionResult_t_119 w64_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef struct u32_RemoteStorageSetUserPublishedFileActionResult_t_119 u32_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef struct w32_RemoteStorageSetUserPublishedFileActionResult_t_119 w32_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef struct u64_RemoteStorageSubscribePublishedFileResult_t_123 u64_RemoteStorageSubscribePublishedFileResult_t_123;
typedef struct w64_RemoteStorageSubscribePublishedFileResult_t_123 w64_RemoteStorageSubscribePublishedFileResult_t_123;
typedef struct u32_RemoteStorageSubscribePublishedFileResult_t_123 u32_RemoteStorageSubscribePublishedFileResult_t_123;
typedef struct w32_RemoteStorageSubscribePublishedFileResult_t_123 w32_RemoteStorageSubscribePublishedFileResult_t_123;
typedef struct w64_RemoteStorageSubscribePublishedFileResult_t_116x u64_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef struct w64_RemoteStorageSubscribePublishedFileResult_t_116x w64_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageSubscribePublishedFileResult_t_116x u32_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageSubscribePublishedFileResult_t_116x w32_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef struct u64_RemoteStorageUnsubscribePublishedFileResult_t_123 u64_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef struct w64_RemoteStorageUnsubscribePublishedFileResult_t_123 w64_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef struct u32_RemoteStorageUnsubscribePublishedFileResult_t_123 u32_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef struct w32_RemoteStorageUnsubscribePublishedFileResult_t_123 w32_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef struct w64_RemoteStorageUnsubscribePublishedFileResult_t_116x u64_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef struct w64_RemoteStorageUnsubscribePublishedFileResult_t_116x w64_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageUnsubscribePublishedFileResult_t_116x u32_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageUnsubscribePublishedFileResult_t_116x w32_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef struct w64_RemoteStorageUpdatePublishedFileRequest_t u64_RemoteStorageUpdatePublishedFileRequest_t;
typedef struct w64_RemoteStorageUpdatePublishedFileRequest_t w64_RemoteStorageUpdatePublishedFileRequest_t;
typedef struct w32_RemoteStorageUpdatePublishedFileRequest_t u32_RemoteStorageUpdatePublishedFileRequest_t;
typedef struct w32_RemoteStorageUpdatePublishedFileRequest_t w32_RemoteStorageUpdatePublishedFileRequest_t;
typedef struct u64_RemoteStorageUpdatePublishedFileResult_t_125 u64_RemoteStorageUpdatePublishedFileResult_t_125;
typedef struct w64_RemoteStorageUpdatePublishedFileResult_t_125 w64_RemoteStorageUpdatePublishedFileResult_t_125;
typedef struct u32_RemoteStorageUpdatePublishedFileResult_t_125 u32_RemoteStorageUpdatePublishedFileResult_t_125;
typedef struct w32_RemoteStorageUpdatePublishedFileResult_t_125 w32_RemoteStorageUpdatePublishedFileResult_t_125;
typedef struct u64_RemoteStorageUpdatePublishedFileResult_t_123 u64_RemoteStorageUpdatePublishedFileResult_t_123;
typedef struct w64_RemoteStorageUpdatePublishedFileResult_t_123 w64_RemoteStorageUpdatePublishedFileResult_t_123;
typedef struct u32_RemoteStorageUpdatePublishedFileResult_t_123 u32_RemoteStorageUpdatePublishedFileResult_t_123;
typedef struct w32_RemoteStorageUpdatePublishedFileResult_t_123 w32_RemoteStorageUpdatePublishedFileResult_t_123;
typedef struct w64_RemoteStorageUpdatePublishedFileResult_t_116x u64_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef struct w64_RemoteStorageUpdatePublishedFileResult_t_116x w64_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef struct u32_RemoteStorageUpdatePublishedFileResult_t_116x u32_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef struct w32_RemoteStorageUpdatePublishedFileResult_t_116x w32_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef struct u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef struct w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef struct u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef struct w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef struct w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef struct w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef struct u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef struct w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef struct u64_RemoteStorageUserVoteDetails_t_123 u64_RemoteStorageUserVoteDetails_t_123;
typedef struct w64_RemoteStorageUserVoteDetails_t_123 w64_RemoteStorageUserVoteDetails_t_123;
typedef struct u32_RemoteStorageUserVoteDetails_t_123 u32_RemoteStorageUserVoteDetails_t_123;
typedef struct w32_RemoteStorageUserVoteDetails_t_123 w32_RemoteStorageUserVoteDetails_t_123;
typedef struct w64_RemoteStorageUserVoteDetails_t_119 u64_RemoteStorageUserVoteDetails_t_119;
typedef struct w64_RemoteStorageUserVoteDetails_t_119 w64_RemoteStorageUserVoteDetails_t_119;
typedef struct u32_RemoteStorageUserVoteDetails_t_119 u32_RemoteStorageUserVoteDetails_t_119;
typedef struct w32_RemoteStorageUserVoteDetails_t_119 w32_RemoteStorageUserVoteDetails_t_119;
typedef struct u64_RemoveAppDependencyResult_t u64_RemoveAppDependencyResult_t;
typedef struct w64_RemoveAppDependencyResult_t w64_RemoveAppDependencyResult_t;
typedef struct u32_RemoveAppDependencyResult_t u32_RemoveAppDependencyResult_t;
typedef struct w32_RemoveAppDependencyResult_t w32_RemoveAppDependencyResult_t;
typedef struct u64_RemoveUGCDependencyResult_t u64_RemoveUGCDependencyResult_t;
typedef struct w64_RemoveUGCDependencyResult_t w64_RemoveUGCDependencyResult_t;
typedef struct u32_RemoveUGCDependencyResult_t u32_RemoveUGCDependencyResult_t;
typedef struct w32_RemoveUGCDependencyResult_t w32_RemoveUGCDependencyResult_t;
typedef struct u64_RequestPlayersForGameFinalResultCallback_t u64_RequestPlayersForGameFinalResultCallback_t;
typedef struct w64_RequestPlayersForGameFinalResultCallback_t w64_RequestPlayersForGameFinalResultCallback_t;
typedef struct u32_RequestPlayersForGameFinalResultCallback_t u32_RequestPlayersForGameFinalResultCallback_t;
typedef struct w32_RequestPlayersForGameFinalResultCallback_t w32_RequestPlayersForGameFinalResultCallback_t;
typedef struct u64_RequestPlayersForGameProgressCallback_t u64_RequestPlayersForGameProgressCallback_t;
typedef struct w64_RequestPlayersForGameProgressCallback_t w64_RequestPlayersForGameProgressCallback_t;
typedef struct u32_RequestPlayersForGameProgressCallback_t u32_RequestPlayersForGameProgressCallback_t;
typedef struct w32_RequestPlayersForGameProgressCallback_t w32_RequestPlayersForGameProgressCallback_t;
typedef struct u64_RequestPlayersForGameResultCallback_t u64_RequestPlayersForGameResultCallback_t;
typedef struct w64_RequestPlayersForGameResultCallback_t w64_RequestPlayersForGameResultCallback_t;
typedef struct u32_RequestPlayersForGameResultCallback_t u32_RequestPlayersForGameResultCallback_t;
typedef struct w32_RequestPlayersForGameResultCallback_t w32_RequestPlayersForGameResultCallback_t;
typedef struct u64_SteamInputConfigurationLoaded_t u64_SteamInputConfigurationLoaded_t;
typedef struct w64_SteamInputConfigurationLoaded_t w64_SteamInputConfigurationLoaded_t;
typedef struct u32_SteamInputConfigurationLoaded_t u32_SteamInputConfigurationLoaded_t;
typedef struct w32_SteamInputConfigurationLoaded_t w32_SteamInputConfigurationLoaded_t;
typedef struct u64_SteamInputGamepadSlotChange_t u64_SteamInputGamepadSlotChange_t;
typedef struct w64_SteamInputGamepadSlotChange_t w64_SteamInputGamepadSlotChange_t;
typedef struct u32_SteamInputGamepadSlotChange_t u32_SteamInputGamepadSlotChange_t;
typedef struct w32_SteamInputGamepadSlotChange_t w32_SteamInputGamepadSlotChange_t;
typedef struct u64_SteamInventoryStartPurchaseResult_t u64_SteamInventoryStartPurchaseResult_t;
typedef struct w64_SteamInventoryStartPurchaseResult_t w64_SteamInventoryStartPurchaseResult_t;
typedef struct u32_SteamInventoryStartPurchaseResult_t u32_SteamInventoryStartPurchaseResult_t;
typedef struct w32_SteamInventoryStartPurchaseResult_t w32_SteamInventoryStartPurchaseResult_t;
typedef struct u64_SteamNetConnectionStatusChangedCallback_t_153a u64_SteamNetConnectionStatusChangedCallback_t_153a;
typedef struct w64_SteamNetConnectionStatusChangedCallback_t_153a w64_SteamNetConnectionStatusChangedCallback_t_153a;
typedef struct u32_SteamNetConnectionStatusChangedCallback_t_153a u32_SteamNetConnectionStatusChangedCallback_t_153a;
typedef struct w32_SteamNetConnectionStatusChangedCallback_t_153a w32_SteamNetConnectionStatusChangedCallback_t_153a;
typedef struct u64_SteamNetConnectionStatusChangedCallback_t_144 u64_SteamNetConnectionStatusChangedCallback_t_144;
typedef struct w64_SteamNetConnectionStatusChangedCallback_t_144 w64_SteamNetConnectionStatusChangedCallback_t_144;
typedef struct u32_SteamNetConnectionStatusChangedCallback_t_144 u32_SteamNetConnectionStatusChangedCallback_t_144;
typedef struct w32_SteamNetConnectionStatusChangedCallback_t_144 w32_SteamNetConnectionStatusChangedCallback_t_144;
typedef struct u64_SteamNetConnectionStatusChangedCallback_t_151 u64_SteamNetConnectionStatusChangedCallback_t_151;
typedef struct w64_SteamNetConnectionStatusChangedCallback_t_151 w64_SteamNetConnectionStatusChangedCallback_t_151;
typedef struct u32_SteamNetConnectionStatusChangedCallback_t_151 u32_SteamNetConnectionStatusChangedCallback_t_151;
typedef struct w32_SteamNetConnectionStatusChangedCallback_t_151 w32_SteamNetConnectionStatusChangedCallback_t_151;
typedef struct u64_SteamNetworkingMessage_t_153a u64_SteamNetworkingMessage_t_153a;
typedef struct w64_SteamNetworkingMessage_t_153a w64_SteamNetworkingMessage_t_153a;
typedef struct u32_SteamNetworkingMessage_t_153a u32_SteamNetworkingMessage_t_153a;
typedef struct w32_SteamNetworkingMessage_t_153a w32_SteamNetworkingMessage_t_153a;
typedef struct u64_SteamNetworkingMessage_t_147 u64_SteamNetworkingMessage_t_147;
typedef struct w64_SteamNetworkingMessage_t_147 w64_SteamNetworkingMessage_t_147;
typedef struct u32_SteamNetworkingMessage_t_147 u32_SteamNetworkingMessage_t_147;
typedef struct w32_SteamNetworkingMessage_t_147 w32_SteamNetworkingMessage_t_147;
typedef struct u64_SteamNetworkingMessage_t_151 u64_SteamNetworkingMessage_t_151;
typedef struct w64_SteamNetworkingMessage_t_151 w64_SteamNetworkingMessage_t_151;
typedef struct u32_SteamNetworkingMessage_t_151 u32_SteamNetworkingMessage_t_151;
typedef struct w32_SteamNetworkingMessage_t_151 w32_SteamNetworkingMessage_t_151;
typedef struct u64_SteamNetworkingMessage_t_144 u64_SteamNetworkingMessage_t_144;
typedef struct w64_SteamNetworkingMessage_t_144 w64_SteamNetworkingMessage_t_144;
typedef struct u32_SteamNetworkingMessage_t_144 u32_SteamNetworkingMessage_t_144;
typedef struct w32_SteamNetworkingMessage_t_144 w32_SteamNetworkingMessage_t_144;
typedef struct w64_SteamParamStringArray_t u64_SteamParamStringArray_t;
typedef struct w64_SteamParamStringArray_t w64_SteamParamStringArray_t;
typedef struct w32_SteamParamStringArray_t u32_SteamParamStringArray_t;
typedef struct w32_SteamParamStringArray_t w32_SteamParamStringArray_t;
typedef struct u64_SteamPartyBeaconLocation_t u64_SteamPartyBeaconLocation_t;
typedef struct w64_SteamPartyBeaconLocation_t w64_SteamPartyBeaconLocation_t;
typedef struct u32_SteamPartyBeaconLocation_t u32_SteamPartyBeaconLocation_t;
typedef struct w32_SteamPartyBeaconLocation_t w32_SteamPartyBeaconLocation_t;
typedef struct u64_SteamUGCRequestUGCDetailsResult_t_160 u64_SteamUGCRequestUGCDetailsResult_t_160;
typedef struct w64_SteamUGCRequestUGCDetailsResult_t_160 w64_SteamUGCRequestUGCDetailsResult_t_160;
typedef struct u32_SteamUGCRequestUGCDetailsResult_t_160 u32_SteamUGCRequestUGCDetailsResult_t_160;
typedef struct w32_SteamUGCRequestUGCDetailsResult_t_160 w32_SteamUGCRequestUGCDetailsResult_t_160;
typedef struct u64_SteamUGCRequestUGCDetailsResult_t_128x u64_SteamUGCRequestUGCDetailsResult_t_128x;
typedef struct w64_SteamUGCRequestUGCDetailsResult_t_128x w64_SteamUGCRequestUGCDetailsResult_t_128x;
typedef struct u32_SteamUGCRequestUGCDetailsResult_t_128x u32_SteamUGCRequestUGCDetailsResult_t_128x;
typedef struct w32_SteamUGCRequestUGCDetailsResult_t_128x w32_SteamUGCRequestUGCDetailsResult_t_128x;
typedef struct u64_SteamUGCRequestUGCDetailsResult_t_129 u64_SteamUGCRequestUGCDetailsResult_t_129;
typedef struct w64_SteamUGCRequestUGCDetailsResult_t_129 w64_SteamUGCRequestUGCDetailsResult_t_129;
typedef struct u32_SteamUGCRequestUGCDetailsResult_t_129 u32_SteamUGCRequestUGCDetailsResult_t_129;
typedef struct w32_SteamUGCRequestUGCDetailsResult_t_129 w32_SteamUGCRequestUGCDetailsResult_t_129;
typedef struct u64_SteamUGCRequestUGCDetailsResult_t_126 u64_SteamUGCRequestUGCDetailsResult_t_126;
typedef struct w64_SteamUGCRequestUGCDetailsResult_t_126 w64_SteamUGCRequestUGCDetailsResult_t_126;
typedef struct u32_SteamUGCRequestUGCDetailsResult_t_126 u32_SteamUGCRequestUGCDetailsResult_t_126;
typedef struct w32_SteamUGCRequestUGCDetailsResult_t_126 w32_SteamUGCRequestUGCDetailsResult_t_126;
typedef struct u64_SubmitPlayerResultResultCallback_t u64_SubmitPlayerResultResultCallback_t;
typedef struct w64_SubmitPlayerResultResultCallback_t w64_SubmitPlayerResultResultCallback_t;
typedef struct u32_SubmitPlayerResultResultCallback_t u32_SubmitPlayerResultResultCallback_t;
typedef struct w32_SubmitPlayerResultResultCallback_t w32_SubmitPlayerResultResultCallback_t;
#pragma pack( push, 8 )
struct w64_SteamUGCDetails_t_160
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint8_t __pad_9772[4];
    uint64_t m_ulTotalFilesSize;
#ifdef __cplusplus
    operator u64_SteamUGCDetails_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCDetails_t_160
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U64_ARRAY(char, 129, m_rgchTitle);
    U64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U64_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint64_t m_ulTotalFilesSize;
#ifdef __cplusplus
    operator w64_SteamUGCDetails_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCDetails_t_160
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint8_t __pad_9772[4];
    uint64_t m_ulTotalFilesSize;
#ifdef __cplusplus
    operator u32_SteamUGCDetails_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCDetails_t_160
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint64_t m_ulTotalFilesSize;
#ifdef __cplusplus
    operator w32_SteamUGCDetails_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCDetails_t_160 w_SteamUGCDetails_t_160;
typedef u32_SteamUGCDetails_t_160 u_SteamUGCDetails_t_160;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCDetails_t_160 w_SteamUGCDetails_t_160;
typedef u64_SteamUGCDetails_t_160 u_SteamUGCDetails_t_160;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCDetails_t_128x
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint8_t __pad_9772[4];
#ifdef __cplusplus
    operator u64_SteamUGCDetails_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCDetails_t_128x
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U64_ARRAY(char, 129, m_rgchTitle);
    U64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U64_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
#ifdef __cplusplus
    operator w64_SteamUGCDetails_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCDetails_t_128x
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
    uint8_t __pad_9772[4];
#ifdef __cplusplus
    operator u32_SteamUGCDetails_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCDetails_t_128x
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
    uint32_t m_unNumChildren;
#ifdef __cplusplus
    operator w32_SteamUGCDetails_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCDetails_t_128x w_SteamUGCDetails_t_128x;
typedef u32_SteamUGCDetails_t_128x u_SteamUGCDetails_t_128x;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCDetails_t_128x w_SteamUGCDetails_t_128x;
typedef u64_SteamUGCDetails_t_128x u_SteamUGCDetails_t_128x;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCDetails_t_126
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
#ifdef __cplusplus
    operator u64_SteamUGCDetails_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCDetails_t_126
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U64_ARRAY(char, 129, m_rgchTitle);
    U64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U64_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U64_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
#ifdef __cplusplus
    operator w64_SteamUGCDetails_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCDetails_t_126
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 1025, m_rgchTags);
    uint8_t __pad_9212[4];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    W32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
#ifdef __cplusplus
    operator u32_SteamUGCDetails_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCDetails_t_126
{
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint32_t m_eFileType;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[3];
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_rtimeAddedToUserList;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    int8_t m_bAcceptedForUse;
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 1025, m_rgchTags);
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    U32_ARRAY(char, 260, m_pchFileName);
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_unVotesUp;
    uint32_t m_unVotesDown;
    float m_flScore;
#ifdef __cplusplus
    operator w32_SteamUGCDetails_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCDetails_t_126 w_SteamUGCDetails_t_126;
typedef u32_SteamUGCDetails_t_126 u_SteamUGCDetails_t_126;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCDetails_t_126 w_SteamUGCDetails_t_126;
typedef u64_SteamUGCDetails_t_126 u_SteamUGCDetails_t_126;
#endif

#pragma pack( push, 8 )
struct w64_AddAppDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_AddAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_AddAppDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
#ifdef __cplusplus
    operator w64_AddAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_AddAppDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_AddAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_AddAppDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
#ifdef __cplusplus
    operator w32_AddAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_AddAppDependencyResult_t w_AddAppDependencyResult_t;
typedef u32_AddAppDependencyResult_t u_AddAppDependencyResult_t;
#endif
#ifdef __x86_64__
typedef w64_AddAppDependencyResult_t w_AddAppDependencyResult_t;
typedef u64_AddAppDependencyResult_t u_AddAppDependencyResult_t;
#endif

#pragma pack( push, 8 )
struct w64_AddUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator u64_AddUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_AddUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator w64_AddUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_AddUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator u32_AddUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_AddUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator w32_AddUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_AddUGCDependencyResult_t w_AddUGCDependencyResult_t;
typedef u32_AddUGCDependencyResult_t u_AddUGCDependencyResult_t;
#endif
#ifdef __x86_64__
typedef w64_AddUGCDependencyResult_t w_AddUGCDependencyResult_t;
typedef u64_AddUGCDependencyResult_t u_AddUGCDependencyResult_t;
#endif

#pragma pack( push, 8 )
struct w64_CSteamAPIContext_141
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W64_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W64_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W64_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W64_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W64_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W64_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W64_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W64_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W64_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W64_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W64_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W64_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W64_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamAPIContext_141
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W32_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W32_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W32_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W32_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W32_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W32_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W32_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W32_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W32_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W32_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W32_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W32_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W32_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamAPIContext_141 w_CSteamAPIContext_141;
typedef u32_CSteamAPIContext_141 u_CSteamAPIContext_141;
#endif
#ifdef __x86_64__
typedef w64_CSteamAPIContext_141 w_CSteamAPIContext_141;
typedef u64_CSteamAPIContext_141 u_CSteamAPIContext_141;
#endif

#pragma pack( push, 8 )
struct w64_CSteamAPIContext_143
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W64_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W64_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W64_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W64_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W64_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W64_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W64_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W64_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W64_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W64_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W64_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W64_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W64_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W64_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamAPIContext_143
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W32_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W32_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W32_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W32_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W32_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W32_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W32_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W32_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W32_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W32_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W32_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W32_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W32_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W32_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamAPIContext_143 w_CSteamAPIContext_143;
typedef u32_CSteamAPIContext_143 u_CSteamAPIContext_143;
#endif
#ifdef __x86_64__
typedef w64_CSteamAPIContext_143 w_CSteamAPIContext_143;
typedef u64_CSteamAPIContext_143 u_CSteamAPIContext_143;
#endif

#pragma pack( push, 8 )
struct w64_CSteamAPIContext_145
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W64_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W64_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W64_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W64_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W64_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W64_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W64_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W64_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W64_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W64_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W64_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W64_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W64_PTR(void /*ISteamTV*/ *m_pSteamTV, m_pSteamTV);
    W64_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W64_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamAPIContext_145
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W32_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W32_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W32_PTR(void /*ISteamGameSearch*/ *m_pSteamGameSearch, m_pSteamGameSearch);
    W32_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W32_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W32_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W32_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W32_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W32_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W32_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W32_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W32_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W32_PTR(void /*ISteamTV*/ *m_pSteamTV, m_pSteamTV);
    W32_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
    W32_PTR(void /*ISteamInput*/ *m_pSteamInput, m_pSteamInput);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamAPIContext_145 w_CSteamAPIContext_145;
typedef u32_CSteamAPIContext_145 u_CSteamAPIContext_145;
#endif
#ifdef __x86_64__
typedef w64_CSteamAPIContext_145 w_CSteamAPIContext_145;
typedef u64_CSteamAPIContext_145 u_CSteamAPIContext_145;
#endif

#pragma pack( push, 8 )
struct w64_CSteamAPIContext_137
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W64_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W64_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W64_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W64_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W64_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W64_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W64_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W64_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W64_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W64_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W64_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W64_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamAPIContext_137
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamUser*/ *m_pSteamUser, m_pSteamUser);
    W32_PTR(void /*ISteamFriends*/ *m_pSteamFriends, m_pSteamFriends);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamUtils, m_pSteamUtils);
    W32_PTR(void /*ISteamMatchmaking*/ *m_pSteamMatchmaking, m_pSteamMatchmaking);
    W32_PTR(void /*ISteamUserStats*/ *m_pSteamUserStats, m_pSteamUserStats);
    W32_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
    W32_PTR(void /*ISteamMatchmakingServers*/ *m_pSteamMatchmakingServers, m_pSteamMatchmakingServers);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamNetworking, m_pSteamNetworking);
    W32_PTR(void /*ISteamRemoteStorage*/ *m_pSteamRemoteStorage, m_pSteamRemoteStorage);
    W32_PTR(void /*ISteamScreenshots*/ *m_pSteamScreenshots, m_pSteamScreenshots);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamController*/ *m_pController, m_pController);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W32_PTR(void /*ISteamAppList*/ *m_pSteamAppList, m_pSteamAppList);
    W32_PTR(void /*ISteamMusic*/ *m_pSteamMusic, m_pSteamMusic);
    W32_PTR(void /*ISteamMusicRemote*/ *m_pSteamMusicRemote, m_pSteamMusicRemote);
    W32_PTR(void /*ISteamHTMLSurface*/ *m_pSteamHTMLSurface, m_pSteamHTMLSurface);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamVideo*/ *m_pSteamVideo, m_pSteamVideo);
    W32_PTR(void /*ISteamParentalSettings*/ *m_pSteamParentalSettings, m_pSteamParentalSettings);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamAPIContext_137 w_CSteamAPIContext_137;
typedef u32_CSteamAPIContext_137 u_CSteamAPIContext_137;
#endif
#ifdef __x86_64__
typedef w64_CSteamAPIContext_137 w_CSteamAPIContext_137;
typedef u64_CSteamAPIContext_137 u_CSteamAPIContext_137;
#endif

struct w_CSteamCallback
{
#ifdef __cplusplus
    virtual const char * GetCallbackName(  ) = 0;
    virtual uint32_t GetCallbackID(  ) = 0;
    virtual uint8_t * GetFixedData(  ) = 0;
    virtual uint32_t GetFixedSize(  ) = 0;
    virtual uint32_t GetNumMemberVariables(  ) = 0;
    virtual int8_t GetMemberVariable( uint32_t, uint32_t *, uint32_t *, uint32_t *, const char **, const char ** ) = 0;
#endif /* __cplusplus */
};

struct u_CSteamCallback
{
#ifdef __cplusplus
    virtual const char * GetCallbackName(  ) = 0;
    virtual uint32_t GetCallbackID(  ) = 0;
    virtual uint8_t * GetFixedData(  ) = 0;
    virtual uint32_t GetFixedSize(  ) = 0;
    virtual uint32_t GetNumMemberVariables(  ) = 0;
    virtual int8_t GetMemberVariable( uint32_t, uint32_t *, uint32_t *, uint32_t *, const char **, const char ** ) = 0;
#endif /* __cplusplus */
};

#pragma pack( push, 8 )
struct w64_CSteamGameServerAPIContext_152
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamGameServer*/ *m_pSteamGameServer, m_pSteamGameServer);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamGameServerUtils, m_pSteamGameServerUtils);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamGameServerNetworking, m_pSteamGameServerNetworking);
    W64_PTR(void /*ISteamGameServerStats*/ *m_pSteamGameServerStats, m_pSteamGameServerStats);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamGameServerAPIContext_152
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamGameServer*/ *m_pSteamGameServer, m_pSteamGameServer);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamGameServerUtils, m_pSteamGameServerUtils);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamGameServerNetworking, m_pSteamGameServerNetworking);
    W32_PTR(void /*ISteamGameServerStats*/ *m_pSteamGameServerStats, m_pSteamGameServerStats);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamGameServerAPIContext_152 w_CSteamGameServerAPIContext_152;
typedef u32_CSteamGameServerAPIContext_152 u_CSteamGameServerAPIContext_152;
#endif
#ifdef __x86_64__
typedef w64_CSteamGameServerAPIContext_152 w_CSteamGameServerAPIContext_152;
typedef u64_CSteamGameServerAPIContext_152 u_CSteamGameServerAPIContext_152;
#endif

#pragma pack( push, 8 )
struct w64_CSteamGameServerAPIContext_143
{
    W64_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W64_PTR(void /*ISteamGameServer*/ *m_pSteamGameServer, m_pSteamGameServer);
    W64_PTR(void /*ISteamUtils*/ *m_pSteamGameServerUtils, m_pSteamGameServerUtils);
    W64_PTR(void /*ISteamNetworking*/ *m_pSteamGameServerNetworking, m_pSteamGameServerNetworking);
    W64_PTR(void /*ISteamGameServerStats*/ *m_pSteamGameServerStats, m_pSteamGameServerStats);
    W64_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W64_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W64_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W64_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CSteamGameServerAPIContext_143
{
    W32_PTR(void /*ISteamClient*/ *m_pSteamClient, m_pSteamClient);
    W32_PTR(void /*ISteamGameServer*/ *m_pSteamGameServer, m_pSteamGameServer);
    W32_PTR(void /*ISteamUtils*/ *m_pSteamGameServerUtils, m_pSteamGameServerUtils);
    W32_PTR(void /*ISteamNetworking*/ *m_pSteamGameServerNetworking, m_pSteamGameServerNetworking);
    W32_PTR(void /*ISteamGameServerStats*/ *m_pSteamGameServerStats, m_pSteamGameServerStats);
    W32_PTR(void /*ISteamHTTP*/ *m_pSteamHTTP, m_pSteamHTTP);
    W32_PTR(void /*ISteamInventory*/ *m_pSteamInventory, m_pSteamInventory);
    W32_PTR(void /*ISteamUGC*/ *m_pSteamUGC, m_pSteamUGC);
    W32_PTR(void /*ISteamApps*/ *m_pSteamApps, m_pSteamApps);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CSteamGameServerAPIContext_143 w_CSteamGameServerAPIContext_143;
typedef u32_CSteamGameServerAPIContext_143 u_CSteamGameServerAPIContext_143;
#endif
#ifdef __x86_64__
typedef w64_CSteamGameServerAPIContext_143 w_CSteamGameServerAPIContext_143;
typedef u64_CSteamGameServerAPIContext_143 u_CSteamGameServerAPIContext_143;
#endif

#pragma pack( push, 8 )
struct w64_CallbackMsg_t
{
    int32_t m_hSteamUser;
    int32_t m_iCallback;
    W64_PTR(uint8_t *m_pubParam, m_pubParam);
    int32_t m_cubParam;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_CallbackMsg_t
{
    int32_t m_hSteamUser;
    int32_t m_iCallback;
    W32_PTR(uint8_t *m_pubParam, m_pubParam);
    int32_t m_cubParam;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CallbackMsg_t w_CallbackMsg_t;
typedef u32_CallbackMsg_t u_CallbackMsg_t;
#endif
#ifdef __x86_64__
typedef w64_CallbackMsg_t w_CallbackMsg_t;
typedef u64_CallbackMsg_t u_CallbackMsg_t;
#endif

#pragma pack( push, 8 )
struct w64_CreateBeaconCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulBeaconID;
#ifdef __cplusplus
    operator u64_CreateBeaconCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_CreateBeaconCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ulBeaconID;
#ifdef __cplusplus
    operator w64_CreateBeaconCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_CreateBeaconCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulBeaconID;
#ifdef __cplusplus
    operator u32_CreateBeaconCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_CreateBeaconCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ulBeaconID;
#ifdef __cplusplus
    operator w32_CreateBeaconCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CreateBeaconCallback_t w_CreateBeaconCallback_t;
typedef u32_CreateBeaconCallback_t u_CreateBeaconCallback_t;
#endif
#ifdef __x86_64__
typedef w64_CreateBeaconCallback_t w_CreateBeaconCallback_t;
typedef u64_CreateBeaconCallback_t u_CreateBeaconCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_CreateItemResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u64_CreateItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_CreateItemResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w64_CreateItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_CreateItemResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u32_CreateItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_CreateItemResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w32_CreateItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_CreateItemResult_t w_CreateItemResult_t;
typedef u32_CreateItemResult_t u_CreateItemResult_t;
#endif
#ifdef __x86_64__
typedef w64_CreateItemResult_t w_CreateItemResult_t;
typedef u64_CreateItemResult_t u_CreateItemResult_t;
#endif

#pragma pack( push, 8 )
struct w64_DeleteItemResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_DeleteItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_DeleteItemResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_DeleteItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_DeleteItemResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_DeleteItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_DeleteItemResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_DeleteItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_DeleteItemResult_t w_DeleteItemResult_t;
typedef u32_DeleteItemResult_t u_DeleteItemResult_t;
#endif
#ifdef __x86_64__
typedef w64_DeleteItemResult_t w_DeleteItemResult_t;
typedef u64_DeleteItemResult_t u_DeleteItemResult_t;
#endif

#pragma pack( push, 8 )
struct w64_DownloadItemResult_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_DownloadItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_DownloadItemResult_t
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
#ifdef __cplusplus
    operator w64_DownloadItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_DownloadItemResult_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_DownloadItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_DownloadItemResult_t
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
    uint32_t m_eResult;
#ifdef __cplusplus
    operator w32_DownloadItemResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_DownloadItemResult_t w_DownloadItemResult_t;
typedef u32_DownloadItemResult_t u_DownloadItemResult_t;
#endif
#ifdef __x86_64__
typedef w64_DownloadItemResult_t w_DownloadItemResult_t;
typedef u64_DownloadItemResult_t u_DownloadItemResult_t;
#endif

#pragma pack( push, 8 )
struct w64_EndGameResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t ullUniqueGameID;
#ifdef __cplusplus
    operator u64_EndGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_EndGameResultCallback_t
{
    uint32_t m_eResult;
    uint64_t ullUniqueGameID;
#ifdef __cplusplus
    operator w64_EndGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_EndGameResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t ullUniqueGameID;
#ifdef __cplusplus
    operator u32_EndGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_EndGameResultCallback_t
{
    uint32_t m_eResult;
    uint64_t ullUniqueGameID;
#ifdef __cplusplus
    operator w32_EndGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_EndGameResultCallback_t w_EndGameResultCallback_t;
typedef u32_EndGameResultCallback_t u_EndGameResultCallback_t;
#endif
#ifdef __x86_64__
typedef w64_EndGameResultCallback_t w_EndGameResultCallback_t;
typedef u64_EndGameResultCallback_t u_EndGameResultCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_FileDetailsResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulFileSize;
    W64_ARRAY(uint8_t, 20, m_FileSHA);
    uint32_t m_unFlags;
#ifdef __cplusplus
    operator u64_FileDetailsResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_FileDetailsResult_t
{
    uint32_t m_eResult;
    uint64_t m_ulFileSize;
    U64_ARRAY(uint8_t, 20, m_FileSHA);
    uint32_t m_unFlags;
#ifdef __cplusplus
    operator w64_FileDetailsResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_FileDetailsResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulFileSize;
    W32_ARRAY(uint8_t, 20, m_FileSHA);
    uint32_t m_unFlags;
#ifdef __cplusplus
    operator u32_FileDetailsResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_FileDetailsResult_t
{
    uint32_t m_eResult;
    uint64_t m_ulFileSize;
    U32_ARRAY(uint8_t, 20, m_FileSHA);
    uint32_t m_unFlags;
#ifdef __cplusplus
    operator w32_FileDetailsResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_FileDetailsResult_t w_FileDetailsResult_t;
typedef u32_FileDetailsResult_t u_FileDetailsResult_t;
#endif
#ifdef __x86_64__
typedef w64_FileDetailsResult_t w_FileDetailsResult_t;
typedef u64_FileDetailsResult_t u_FileDetailsResult_t;
#endif

#pragma pack( push, 8 )
struct w64_GSReputation_t_123
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[6];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
    uint8_t __pad_36[4];
#ifdef __cplusplus
    operator u64_GSReputation_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_GSReputation_t_123
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[2];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
#ifdef __cplusplus
    operator w64_GSReputation_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_GSReputation_t_123
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[6];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
    uint8_t __pad_36[4];
#ifdef __cplusplus
    operator u32_GSReputation_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_GSReputation_t_123
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[2];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
#ifdef __cplusplus
    operator w32_GSReputation_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_GSReputation_t_123 w_GSReputation_t_123;
typedef u32_GSReputation_t_123 u_GSReputation_t_123;
#endif
#ifdef __x86_64__
typedef w64_GSReputation_t_123 w_GSReputation_t_123;
typedef u64_GSReputation_t_123 u_GSReputation_t_123;
#endif

#pragma pack( push, 8 )
struct w64_GSReputation_t_108
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[6];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
    uint8_t __pad_36[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_GSReputation_t_108
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[6];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
    uint8_t __pad_36[4];
#ifdef __cplusplus
    operator u32_GSReputation_t_108() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_GSReputation_t_108
{
    uint32_t m_eResult;
    uint32_t m_unReputationScore;
    int8_t m_bBanned;
    uint8_t __pad_9[3];
    uint32_t m_unBannedIP;
    uint16_t m_usBannedPort;
    uint8_t __pad_18[2];
    uint64_t m_ulBannedGameID;
    uint32_t m_unBanExpires;
#ifdef __cplusplus
    operator w32_GSReputation_t_108() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_GSReputation_t_108 w_GSReputation_t_108;
typedef u32_GSReputation_t_108 u_GSReputation_t_108;
#endif
#ifdef __x86_64__
typedef w64_GSReputation_t_108 w_GSReputation_t_108;
typedef u64_GSReputation_t_108 u_GSReputation_t_108;
#endif

#pragma pack( push, 8 )
struct w64_GetAppDependenciesResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    W64_ARRAY(uint32_t, 32, m_rgAppIDs);
    uint32_t m_nNumAppDependencies;
    uint32_t m_nTotalNumAppDependencies;
#ifdef __cplusplus
    operator u64_GetAppDependenciesResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_GetAppDependenciesResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    U64_ARRAY(uint32_t, 32, m_rgAppIDs);
    uint32_t m_nNumAppDependencies;
    uint32_t m_nTotalNumAppDependencies;
#ifdef __cplusplus
    operator w64_GetAppDependenciesResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_GetAppDependenciesResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    W32_ARRAY(uint32_t, 32, m_rgAppIDs);
    uint32_t m_nNumAppDependencies;
    uint32_t m_nTotalNumAppDependencies;
#ifdef __cplusplus
    operator u32_GetAppDependenciesResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_GetAppDependenciesResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    U32_ARRAY(uint32_t, 32, m_rgAppIDs);
    uint32_t m_nNumAppDependencies;
    uint32_t m_nTotalNumAppDependencies;
#ifdef __cplusplus
    operator w32_GetAppDependenciesResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_GetAppDependenciesResult_t w_GetAppDependenciesResult_t;
typedef u32_GetAppDependenciesResult_t u_GetAppDependenciesResult_t;
#endif
#ifdef __x86_64__
typedef w64_GetAppDependenciesResult_t w_GetAppDependenciesResult_t;
typedef u64_GetAppDependenciesResult_t u_GetAppDependenciesResult_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_ChangedTitle_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchTitle, pchTitle);
#ifdef __cplusplus
    operator u64_HTML_ChangedTitle_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_ChangedTitle_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchTitle, pchTitle);
#ifdef __cplusplus
    operator w64_HTML_ChangedTitle_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_ChangedTitle_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchTitle, pchTitle);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_ChangedTitle_t w_HTML_ChangedTitle_t;
typedef u32_HTML_ChangedTitle_t u_HTML_ChangedTitle_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_ChangedTitle_t w_HTML_ChangedTitle_t;
typedef u64_HTML_ChangedTitle_t u_HTML_ChangedTitle_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_ComboNeedsPaint_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator u64_HTML_ComboNeedsPaint_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_ComboNeedsPaint_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator w64_HTML_ComboNeedsPaint_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_ComboNeedsPaint_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_ComboNeedsPaint_t w_HTML_ComboNeedsPaint_t;
typedef u32_HTML_ComboNeedsPaint_t u_HTML_ComboNeedsPaint_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_ComboNeedsPaint_t w_HTML_ComboNeedsPaint_t;
typedef u64_HTML_ComboNeedsPaint_t u_HTML_ComboNeedsPaint_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_FileOpenDialog_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchTitle, pchTitle);
    W64_PTR(const char *pchInitialFile, pchInitialFile);
#ifdef __cplusplus
    operator u64_HTML_FileOpenDialog_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_FileOpenDialog_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchTitle, pchTitle);
    U64_PTR(const char *pchInitialFile, pchInitialFile);
#ifdef __cplusplus
    operator w64_HTML_FileOpenDialog_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_FileOpenDialog_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchTitle, pchTitle);
    W32_PTR(const char *pchInitialFile, pchInitialFile);
#ifdef __cplusplus
    operator u32_HTML_FileOpenDialog_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_FileOpenDialog_t
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchTitle, pchTitle);
    U32_PTR(const char *pchInitialFile, pchInitialFile);
#ifdef __cplusplus
    operator w32_HTML_FileOpenDialog_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_FileOpenDialog_t w_HTML_FileOpenDialog_t;
typedef u32_HTML_FileOpenDialog_t u_HTML_FileOpenDialog_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_FileOpenDialog_t w_HTML_FileOpenDialog_t;
typedef u64_HTML_FileOpenDialog_t u_HTML_FileOpenDialog_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_FinishedRequest_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
    W64_PTR(const char *pchPageTitle, pchPageTitle);
#ifdef __cplusplus
    operator u64_HTML_FinishedRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_FinishedRequest_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
    U64_PTR(const char *pchPageTitle, pchPageTitle);
#ifdef __cplusplus
    operator w64_HTML_FinishedRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_FinishedRequest_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
    W32_PTR(const char *pchPageTitle, pchPageTitle);
#ifdef __cplusplus
    operator u32_HTML_FinishedRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_FinishedRequest_t
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
    U32_PTR(const char *pchPageTitle, pchPageTitle);
#ifdef __cplusplus
    operator w32_HTML_FinishedRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_FinishedRequest_t w_HTML_FinishedRequest_t;
typedef u32_HTML_FinishedRequest_t u_HTML_FinishedRequest_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_FinishedRequest_t w_HTML_FinishedRequest_t;
typedef u64_HTML_FinishedRequest_t u_HTML_FinishedRequest_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_JSAlert_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchMessage, pchMessage);
#ifdef __cplusplus
    operator u64_HTML_JSAlert_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_JSAlert_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchMessage, pchMessage);
#ifdef __cplusplus
    operator w64_HTML_JSAlert_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_JSAlert_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchMessage, pchMessage);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_JSAlert_t w_HTML_JSAlert_t;
typedef u32_HTML_JSAlert_t u_HTML_JSAlert_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_JSAlert_t w_HTML_JSAlert_t;
typedef u64_HTML_JSAlert_t u_HTML_JSAlert_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_JSConfirm_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchMessage, pchMessage);
#ifdef __cplusplus
    operator u64_HTML_JSConfirm_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_JSConfirm_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchMessage, pchMessage);
#ifdef __cplusplus
    operator w64_HTML_JSConfirm_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_JSConfirm_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchMessage, pchMessage);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_JSConfirm_t w_HTML_JSConfirm_t;
typedef u32_HTML_JSConfirm_t u_HTML_JSConfirm_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_JSConfirm_t w_HTML_JSConfirm_t;
typedef u64_HTML_JSConfirm_t u_HTML_JSConfirm_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_LinkAtPosition_t
{
    uint32_t unBrowserHandle;
    uint32_t x;
    uint32_t y;
    uint8_t __pad_12[4];
    W64_PTR(const char *pchURL, pchURL);
    int8_t bInput;
    int8_t bLiveLink;
    uint8_t __pad_26[6];
#ifdef __cplusplus
    operator u64_HTML_LinkAtPosition_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_LinkAtPosition_t
{
    uint32_t unBrowserHandle;
    uint32_t x;
    uint32_t y;
    U64_PTR(const char *pchURL, pchURL);
    int8_t bInput;
    int8_t bLiveLink;
    uint8_t __pad_22[2];
#ifdef __cplusplus
    operator w64_HTML_LinkAtPosition_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_LinkAtPosition_t
{
    uint32_t unBrowserHandle;
    uint32_t x;
    uint32_t y;
    W32_PTR(const char *pchURL, pchURL);
    int8_t bInput;
    int8_t bLiveLink;
    uint8_t __pad_18[2];
#ifdef __cplusplus
    operator u32_HTML_LinkAtPosition_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_LinkAtPosition_t
{
    uint32_t unBrowserHandle;
    uint32_t x;
    uint32_t y;
    U32_PTR(const char *pchURL, pchURL);
    int8_t bInput;
    int8_t bLiveLink;
    uint8_t __pad_18[2];
#ifdef __cplusplus
    operator w32_HTML_LinkAtPosition_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_LinkAtPosition_t w_HTML_LinkAtPosition_t;
typedef u32_HTML_LinkAtPosition_t u_HTML_LinkAtPosition_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_LinkAtPosition_t w_HTML_LinkAtPosition_t;
typedef u64_HTML_LinkAtPosition_t u_HTML_LinkAtPosition_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_NeedsPaint_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unUpdateX;
    uint32_t unUpdateY;
    uint32_t unUpdateWide;
    uint32_t unUpdateTall;
    uint32_t unScrollX;
    uint32_t unScrollY;
    float flPageScale;
    uint32_t unPageSerial;
#ifdef __cplusplus
    operator u64_HTML_NeedsPaint_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_NeedsPaint_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unUpdateX;
    uint32_t unUpdateY;
    uint32_t unUpdateWide;
    uint32_t unUpdateTall;
    uint32_t unScrollX;
    uint32_t unScrollY;
    float flPageScale;
    uint32_t unPageSerial;
#ifdef __cplusplus
    operator w64_HTML_NeedsPaint_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_NeedsPaint_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pBGRA, pBGRA);
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unUpdateX;
    uint32_t unUpdateY;
    uint32_t unUpdateWide;
    uint32_t unUpdateTall;
    uint32_t unScrollX;
    uint32_t unScrollY;
    float flPageScale;
    uint32_t unPageSerial;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_NeedsPaint_t w_HTML_NeedsPaint_t;
typedef u32_HTML_NeedsPaint_t u_HTML_NeedsPaint_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_NeedsPaint_t w_HTML_NeedsPaint_t;
typedef u64_HTML_NeedsPaint_t u_HTML_NeedsPaint_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_NewWindow_t_132x
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unNewWindow_BrowserHandle_IGNORE;
    uint8_t __pad_36[4];
#ifdef __cplusplus
    operator u64_HTML_NewWindow_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_NewWindow_t_132x
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unNewWindow_BrowserHandle_IGNORE;
#ifdef __cplusplus
    operator w64_HTML_NewWindow_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_NewWindow_t_132x
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unNewWindow_BrowserHandle_IGNORE;
#ifdef __cplusplus
    operator u32_HTML_NewWindow_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_NewWindow_t_132x
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
    uint32_t unNewWindow_BrowserHandle_IGNORE;
#ifdef __cplusplus
    operator w32_HTML_NewWindow_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_NewWindow_t_132x w_HTML_NewWindow_t_132x;
typedef u32_HTML_NewWindow_t_132x u_HTML_NewWindow_t_132x;
#endif
#ifdef __x86_64__
typedef w64_HTML_NewWindow_t_132x w_HTML_NewWindow_t_132x;
typedef u64_HTML_NewWindow_t_132x u_HTML_NewWindow_t_132x;
#endif

#pragma pack( push, 8 )
struct w64_HTML_NewWindow_t_130x
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator u64_HTML_NewWindow_t_130x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_NewWindow_t_130x
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator w64_HTML_NewWindow_t_130x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_NewWindow_t_130x
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator u32_HTML_NewWindow_t_130x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_NewWindow_t_130x
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
    uint32_t unX;
    uint32_t unY;
    uint32_t unWide;
    uint32_t unTall;
#ifdef __cplusplus
    operator w32_HTML_NewWindow_t_130x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_NewWindow_t_130x w_HTML_NewWindow_t_130x;
typedef u32_HTML_NewWindow_t_130x u_HTML_NewWindow_t_130x;
#endif
#ifdef __x86_64__
typedef w64_HTML_NewWindow_t_130x w_HTML_NewWindow_t_130x;
typedef u64_HTML_NewWindow_t_130x u_HTML_NewWindow_t_130x;
#endif

#pragma pack( push, 8 )
struct w64_HTML_OpenLinkInNewTab_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
#ifdef __cplusplus
    operator u64_HTML_OpenLinkInNewTab_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_OpenLinkInNewTab_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
#ifdef __cplusplus
    operator w64_HTML_OpenLinkInNewTab_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_OpenLinkInNewTab_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
#ifdef __cplusplus
    operator u32_HTML_OpenLinkInNewTab_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_OpenLinkInNewTab_t
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
#ifdef __cplusplus
    operator w32_HTML_OpenLinkInNewTab_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_OpenLinkInNewTab_t w_HTML_OpenLinkInNewTab_t;
typedef u32_HTML_OpenLinkInNewTab_t u_HTML_OpenLinkInNewTab_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_OpenLinkInNewTab_t w_HTML_OpenLinkInNewTab_t;
typedef u64_HTML_OpenLinkInNewTab_t u_HTML_OpenLinkInNewTab_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_ShowToolTip_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator u64_HTML_ShowToolTip_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_ShowToolTip_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator w64_HTML_ShowToolTip_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_ShowToolTip_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchMsg, pchMsg);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_ShowToolTip_t w_HTML_ShowToolTip_t;
typedef u32_HTML_ShowToolTip_t u_HTML_ShowToolTip_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_ShowToolTip_t w_HTML_ShowToolTip_t;
typedef u64_HTML_ShowToolTip_t u_HTML_ShowToolTip_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_StartRequest_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
    W64_PTR(const char *pchTarget, pchTarget);
    W64_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_33[7];
#ifdef __cplusplus
    operator u64_HTML_StartRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_StartRequest_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
    U64_PTR(const char *pchTarget, pchTarget);
    U64_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_29[3];
#ifdef __cplusplus
    operator w64_HTML_StartRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_StartRequest_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
    W32_PTR(const char *pchTarget, pchTarget);
    W32_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_17[3];
#ifdef __cplusplus
    operator u32_HTML_StartRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_StartRequest_t
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
    U32_PTR(const char *pchTarget, pchTarget);
    U32_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_17[3];
#ifdef __cplusplus
    operator w32_HTML_StartRequest_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_StartRequest_t w_HTML_StartRequest_t;
typedef u32_HTML_StartRequest_t u_HTML_StartRequest_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_StartRequest_t w_HTML_StartRequest_t;
typedef u64_HTML_StartRequest_t u_HTML_StartRequest_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_StatusText_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator u64_HTML_StatusText_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_StatusText_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator w64_HTML_StatusText_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_StatusText_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchMsg, pchMsg);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_StatusText_t w_HTML_StatusText_t;
typedef u32_HTML_StatusText_t u_HTML_StatusText_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_StatusText_t w_HTML_StatusText_t;
typedef u64_HTML_StatusText_t u_HTML_StatusText_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_URLChanged_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchURL, pchURL);
    W64_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_25[7];
    W64_PTR(const char *pchPageTitle, pchPageTitle);
    int8_t bNewNavigation;
    uint8_t __pad_41[7];
#ifdef __cplusplus
    operator u64_HTML_URLChanged_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_URLChanged_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchURL, pchURL);
    U64_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_21[3];
    U64_PTR(const char *pchPageTitle, pchPageTitle);
    int8_t bNewNavigation;
    uint8_t __pad_33[3];
#ifdef __cplusplus
    operator w64_HTML_URLChanged_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_URLChanged_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchURL, pchURL);
    W32_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_13[3];
    W32_PTR(const char *pchPageTitle, pchPageTitle);
    int8_t bNewNavigation;
    uint8_t __pad_21[3];
#ifdef __cplusplus
    operator u32_HTML_URLChanged_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTML_URLChanged_t
{
    uint32_t unBrowserHandle;
    U32_PTR(const char *pchURL, pchURL);
    U32_PTR(const char *pchPostData, pchPostData);
    int8_t bIsRedirect;
    uint8_t __pad_13[3];
    U32_PTR(const char *pchPageTitle, pchPageTitle);
    int8_t bNewNavigation;
    uint8_t __pad_21[3];
#ifdef __cplusplus
    operator w32_HTML_URLChanged_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_URLChanged_t w_HTML_URLChanged_t;
typedef u32_HTML_URLChanged_t u_HTML_URLChanged_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_URLChanged_t w_HTML_URLChanged_t;
typedef u64_HTML_URLChanged_t u_HTML_URLChanged_t;
#endif

#pragma pack( push, 8 )
struct w64_HTML_UpdateToolTip_t
{
    uint32_t unBrowserHandle;
    uint8_t __pad_4[4];
    W64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator u64_HTML_UpdateToolTip_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTML_UpdateToolTip_t
{
    uint32_t unBrowserHandle;
    U64_PTR(const char *pchMsg, pchMsg);
#ifdef __cplusplus
    operator w64_HTML_UpdateToolTip_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_HTML_UpdateToolTip_t
{
    uint32_t unBrowserHandle;
    W32_PTR(const char *pchMsg, pchMsg);
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTML_UpdateToolTip_t w_HTML_UpdateToolTip_t;
typedef u32_HTML_UpdateToolTip_t u_HTML_UpdateToolTip_t;
#endif
#ifdef __x86_64__
typedef w64_HTML_UpdateToolTip_t w_HTML_UpdateToolTip_t;
typedef u64_HTML_UpdateToolTip_t u_HTML_UpdateToolTip_t;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestCompleted_t_132x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
    uint32_t m_unBodySize;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_HTTPRequestCompleted_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTTPRequestCompleted_t_132x
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_13[3];
    uint32_t m_eStatusCode;
    uint32_t m_unBodySize;
#ifdef __cplusplus
    operator w64_HTTPRequestCompleted_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestCompleted_t_132x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
    uint32_t m_unBodySize;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_HTTPRequestCompleted_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestCompleted_t_132x
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_13[3];
    uint32_t m_eStatusCode;
    uint32_t m_unBodySize;
#ifdef __cplusplus
    operator w32_HTTPRequestCompleted_t_132x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestCompleted_t_132x w_HTTPRequestCompleted_t_132x;
typedef u32_HTTPRequestCompleted_t_132x u_HTTPRequestCompleted_t_132x;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestCompleted_t_132x w_HTTPRequestCompleted_t_132x;
typedef u64_HTTPRequestCompleted_t_132x u_HTTPRequestCompleted_t_132x;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestCompleted_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator u64_HTTPRequestCompleted_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTTPRequestCompleted_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_13[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator w64_HTTPRequestCompleted_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestCompleted_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator u32_HTTPRequestCompleted_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestCompleted_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_13[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator w32_HTTPRequestCompleted_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestCompleted_t_123 w_HTTPRequestCompleted_t_123;
typedef u32_HTTPRequestCompleted_t_123 u_HTTPRequestCompleted_t_123;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestCompleted_t_123 w_HTTPRequestCompleted_t_123;
typedef u64_HTTPRequestCompleted_t_123 u_HTTPRequestCompleted_t_123;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestCompleted_t_115
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestCompleted_t_115
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_17[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator u32_HTTPRequestCompleted_t_115() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestCompleted_t_115
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    int8_t m_bRequestSuccessful;
    uint8_t __pad_13[3];
    uint32_t m_eStatusCode;
#ifdef __cplusplus
    operator w32_HTTPRequestCompleted_t_115() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestCompleted_t_115 w_HTTPRequestCompleted_t_115;
typedef u32_HTTPRequestCompleted_t_115 u_HTTPRequestCompleted_t_115;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestCompleted_t_115 w_HTTPRequestCompleted_t_115;
typedef u64_HTTPRequestCompleted_t_115 u_HTTPRequestCompleted_t_115;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestDataReceived_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator u64_HTTPRequestDataReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTTPRequestDataReceived_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator w64_HTTPRequestDataReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestDataReceived_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator u32_HTTPRequestDataReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestDataReceived_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator w32_HTTPRequestDataReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestDataReceived_t_123 w_HTTPRequestDataReceived_t_123;
typedef u32_HTTPRequestDataReceived_t_123 u_HTTPRequestDataReceived_t_123;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestDataReceived_t_123 w_HTTPRequestDataReceived_t_123;
typedef u64_HTTPRequestDataReceived_t_123 u_HTTPRequestDataReceived_t_123;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestDataReceived_t_121x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestDataReceived_t_121x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator u32_HTTPRequestDataReceived_t_121x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestDataReceived_t_121x
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
    uint32_t m_cOffset;
    uint32_t m_cBytesReceived;
#ifdef __cplusplus
    operator w32_HTTPRequestDataReceived_t_121x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestDataReceived_t_121x w_HTTPRequestDataReceived_t_121x;
typedef u32_HTTPRequestDataReceived_t_121x u_HTTPRequestDataReceived_t_121x;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestDataReceived_t_121x w_HTTPRequestDataReceived_t_121x;
typedef u64_HTTPRequestDataReceived_t_121x u_HTTPRequestDataReceived_t_121x;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestHeadersReceived_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator u64_HTTPRequestHeadersReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_HTTPRequestHeadersReceived_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator w64_HTTPRequestHeadersReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestHeadersReceived_t_123
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator u32_HTTPRequestHeadersReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestHeadersReceived_t_123
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator w32_HTTPRequestHeadersReceived_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestHeadersReceived_t_123 w_HTTPRequestHeadersReceived_t_123;
typedef u32_HTTPRequestHeadersReceived_t_123 u_HTTPRequestHeadersReceived_t_123;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestHeadersReceived_t_123 w_HTTPRequestHeadersReceived_t_123;
typedef u64_HTTPRequestHeadersReceived_t_123 u_HTTPRequestHeadersReceived_t_123;
#endif

#pragma pack( push, 8 )
struct w64_HTTPRequestHeadersReceived_t_121x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_HTTPRequestHeadersReceived_t_121x
{
    uint32_t m_hRequest;
    uint8_t __pad_4[4];
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator u32_HTTPRequestHeadersReceived_t_121x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_HTTPRequestHeadersReceived_t_121x
{
    uint32_t m_hRequest;
    uint64_t m_ulContextValue;
#ifdef __cplusplus
    operator w32_HTTPRequestHeadersReceived_t_121x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_HTTPRequestHeadersReceived_t_121x w_HTTPRequestHeadersReceived_t_121x;
typedef u32_HTTPRequestHeadersReceived_t_121x u_HTTPRequestHeadersReceived_t_121x;
#endif
#ifdef __x86_64__
typedef w64_HTTPRequestHeadersReceived_t_121x w_HTTPRequestHeadersReceived_t_121x;
typedef u64_HTTPRequestHeadersReceived_t_121x u_HTTPRequestHeadersReceived_t_121x;
#endif

struct w_ISteamMatchmakingPingResponse
{
#ifdef __cplusplus
    virtual void ServerResponded( gameserveritem_t_105 * ) = 0;
    virtual void ServerFailedToRespond(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingPingResponse
{
#ifdef __cplusplus
    virtual void ServerResponded( gameserveritem_t_105 * ) = 0;
    virtual void ServerFailedToRespond(  ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamMatchmakingPlayersResponse
{
#ifdef __cplusplus
    virtual void AddPlayerToList( const char *, int32_t, float ) = 0;
    virtual void PlayersFailedToRespond(  ) = 0;
    virtual void PlayersRefreshComplete(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingPlayersResponse
{
#ifdef __cplusplus
    virtual void AddPlayerToList( const char *, int32_t, float ) = 0;
    virtual void PlayersFailedToRespond(  ) = 0;
    virtual void PlayersRefreshComplete(  ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamMatchmakingRulesResponse
{
#ifdef __cplusplus
    virtual void RulesResponded( const char *, const char * ) = 0;
    virtual void RulesFailedToRespond(  ) = 0;
    virtual void RulesRefreshComplete(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingRulesResponse
{
#ifdef __cplusplus
    virtual void RulesResponded( const char *, const char * ) = 0;
    virtual void RulesFailedToRespond(  ) = 0;
    virtual void RulesRefreshComplete(  ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamMatchmakingServerListResponse_106
{
#ifdef __cplusplus
    virtual void ServerResponded( void *, int32_t ) = 0;
    virtual void ServerFailedToRespond( void *, int32_t ) = 0;
    virtual void RefreshComplete( void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingServerListResponse_106
{
#ifdef __cplusplus
    virtual void ServerResponded( void *, int32_t ) = 0;
    virtual void ServerFailedToRespond( void *, int32_t ) = 0;
    virtual void RefreshComplete( void *, uint32_t ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamMatchmakingServerListResponse_099u
{
#ifdef __cplusplus
    virtual void ServerResponded( int32_t ) = 0;
    virtual void ServerFailedToRespond( int32_t ) = 0;
    virtual void RefreshComplete( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamMatchmakingServerListResponse_099u
{
#ifdef __cplusplus
    virtual void ServerResponded( int32_t ) = 0;
    virtual void ServerFailedToRespond( int32_t ) = 0;
    virtual void RefreshComplete( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamNetworkingConnectionCustomSignaling
{
#ifdef __cplusplus
    virtual int8_t SendSignal( uint32_t, const SteamNetConnectionInfo_t_144 *, const void *, int32_t ) = 0;
    virtual void Release(  ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingConnectionCustomSignaling
{
#ifdef __cplusplus
    virtual int8_t SendSignal( uint32_t, const SteamNetConnectionInfo_t_144 *, const void *, int32_t ) = 0;
    virtual void Release(  ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamNetworkingCustomSignalingRecvContext
{
#ifdef __cplusplus
    virtual w_ISteamNetworkingConnectionCustomSignaling * OnConnectRequest( uint32_t, const SteamNetworkingIdentity_144 * ) = 0;
    virtual void SendRejectionSignal( const SteamNetworkingIdentity_144 *, const void *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamNetworkingCustomSignalingRecvContext
{
#ifdef __cplusplus
    virtual u_ISteamNetworkingConnectionCustomSignaling * OnConnectRequest( uint32_t, const SteamNetworkingIdentity_144 * ) = 0;
    virtual void SendRejectionSignal( const SteamNetworkingIdentity_144 *, const void *, int32_t ) = 0;
#endif /* __cplusplus */
};

struct w_ISteamTimeline
{
#ifdef __cplusplus
    virtual void SetTimelineStateDescription( const char *, float ) = 0;
    virtual void ClearTimelineStateDescription( float ) = 0;
    virtual void AddTimelineEvent( const char *, const char *, const char *, uint32_t, float, float, uint32_t ) = 0;
    virtual void SetTimelineGameMode( uint32_t ) = 0;
#endif /* __cplusplus */
};

struct u_ISteamTimeline
{
#ifdef __cplusplus
    virtual void SetTimelineStateDescription( const char *, float ) = 0;
    virtual void ClearTimelineStateDescription( float ) = 0;
    virtual void AddTimelineEvent( const char *, const char *, const char *, uint32_t, float, float, uint32_t ) = 0;
    virtual void SetTimelineGameMode( uint32_t ) = 0;
#endif /* __cplusplus */
};

#pragma pack( push, 8 )
struct w64_ItemInstalled_t_160
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_hLegacyContent;
    uint64_t m_unManifestID;
#ifdef __cplusplus
    operator u64_ItemInstalled_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_ItemInstalled_t_160
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
    uint64_t m_hLegacyContent;
    uint64_t m_unManifestID;
#ifdef __cplusplus
    operator w64_ItemInstalled_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_ItemInstalled_t_160
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_hLegacyContent;
    uint64_t m_unManifestID;
#ifdef __cplusplus
    operator u32_ItemInstalled_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_ItemInstalled_t_160
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
    uint64_t m_hLegacyContent;
    uint64_t m_unManifestID;
#ifdef __cplusplus
    operator w32_ItemInstalled_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_ItemInstalled_t_160 w_ItemInstalled_t_160;
typedef u32_ItemInstalled_t_160 u_ItemInstalled_t_160;
#endif
#ifdef __x86_64__
typedef w64_ItemInstalled_t_160 w_ItemInstalled_t_160;
typedef u64_ItemInstalled_t_160 u_ItemInstalled_t_160;
#endif

#pragma pack( push, 8 )
struct w64_ItemInstalled_t_130
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_ItemInstalled_t_130() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_ItemInstalled_t_130
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_ItemInstalled_t_130() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_ItemInstalled_t_130
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_ItemInstalled_t_130() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_ItemInstalled_t_130
{
    uint32_t m_unAppID;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_ItemInstalled_t_130() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_ItemInstalled_t_130 w_ItemInstalled_t_130;
typedef u32_ItemInstalled_t_130 u_ItemInstalled_t_130;
#endif
#ifdef __x86_64__
typedef w64_ItemInstalled_t_130 w_ItemInstalled_t_130;
typedef u64_ItemInstalled_t_130 u_ItemInstalled_t_130;
#endif

#pragma pack( push, 8 )
struct w64_JoinPartyCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulBeaconID;
    CSteamID m_SteamIDBeaconOwner;
    W64_ARRAY(char, 256, m_rgchConnectString);
#ifdef __cplusplus
    operator u64_JoinPartyCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_JoinPartyCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ulBeaconID;
    CSteamID m_SteamIDBeaconOwner;
    U64_ARRAY(char, 256, m_rgchConnectString);
#ifdef __cplusplus
    operator w64_JoinPartyCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_JoinPartyCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulBeaconID;
    CSteamID m_SteamIDBeaconOwner;
    W32_ARRAY(char, 256, m_rgchConnectString);
#ifdef __cplusplus
    operator u32_JoinPartyCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_JoinPartyCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ulBeaconID;
    CSteamID m_SteamIDBeaconOwner;
    U32_ARRAY(char, 256, m_rgchConnectString);
#ifdef __cplusplus
    operator w32_JoinPartyCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_JoinPartyCallback_t w_JoinPartyCallback_t;
typedef u32_JoinPartyCallback_t u_JoinPartyCallback_t;
#endif
#ifdef __x86_64__
typedef w64_JoinPartyCallback_t w_JoinPartyCallback_t;
typedef u64_JoinPartyCallback_t u_JoinPartyCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardEntry_t_123
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint8_t __pad_20[4];
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator u64_LeaderboardEntry_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_LeaderboardEntry_t_123
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator w64_LeaderboardEntry_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardEntry_t_123
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint8_t __pad_20[4];
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator u32_LeaderboardEntry_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardEntry_t_123
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator w32_LeaderboardEntry_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardEntry_t_123 w_LeaderboardEntry_t_123;
typedef u32_LeaderboardEntry_t_123 u_LeaderboardEntry_t_123;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardEntry_t_123 w_LeaderboardEntry_t_123;
typedef u64_LeaderboardEntry_t_123 u_LeaderboardEntry_t_123;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardEntry_t_111x
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint8_t __pad_20[4];
    uint64_t m_hUGC;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardEntry_t_111x
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint8_t __pad_20[4];
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator u32_LeaderboardEntry_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardEntry_t_111x
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
    uint64_t m_hUGC;
#ifdef __cplusplus
    operator w32_LeaderboardEntry_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardEntry_t_111x w_LeaderboardEntry_t_111x;
typedef u32_LeaderboardEntry_t_111x u_LeaderboardEntry_t_111x;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardEntry_t_111x w_LeaderboardEntry_t_111x;
typedef u64_LeaderboardEntry_t_111x u_LeaderboardEntry_t_111x;
#endif

#pragma pack( push, 4 )
struct w64_LeaderboardEntry_t_104
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_LeaderboardEntry_t_104
{
    CSteamID m_steamIDUser;
    int32_t m_nGlobalRank;
    int32_t m_nScore;
    int32_t m_cDetails;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardEntry_t_104 w_LeaderboardEntry_t_104;
typedef u32_LeaderboardEntry_t_104 u_LeaderboardEntry_t_104;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardEntry_t_104 w_LeaderboardEntry_t_104;
typedef u64_LeaderboardEntry_t_104 u_LeaderboardEntry_t_104;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardScoreUploaded_t_123
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[7];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_21[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator u64_LeaderboardScoreUploaded_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_LeaderboardScoreUploaded_t_123
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[3];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_17[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator w64_LeaderboardScoreUploaded_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardScoreUploaded_t_123
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[7];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_21[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator u32_LeaderboardScoreUploaded_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardScoreUploaded_t_123
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[3];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_17[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator w32_LeaderboardScoreUploaded_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardScoreUploaded_t_123 w_LeaderboardScoreUploaded_t_123;
typedef u32_LeaderboardScoreUploaded_t_123 u_LeaderboardScoreUploaded_t_123;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardScoreUploaded_t_123 w_LeaderboardScoreUploaded_t_123;
typedef u64_LeaderboardScoreUploaded_t_123 u_LeaderboardScoreUploaded_t_123;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardScoreUploaded_t_104
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[7];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_21[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardScoreUploaded_t_104
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[7];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_21[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator u32_LeaderboardScoreUploaded_t_104() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardScoreUploaded_t_104
{
    uint8_t m_bSuccess;
    uint8_t __pad_1[3];
    uint64_t m_hSteamLeaderboard;
    int32_t m_nScore;
    uint8_t m_bScoreChanged;
    uint8_t __pad_17[3];
    int32_t m_nGlobalRankNew;
    int32_t m_nGlobalRankPrevious;
#ifdef __cplusplus
    operator w32_LeaderboardScoreUploaded_t_104() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardScoreUploaded_t_104 w_LeaderboardScoreUploaded_t_104;
typedef u32_LeaderboardScoreUploaded_t_104 u_LeaderboardScoreUploaded_t_104;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardScoreUploaded_t_104 w_LeaderboardScoreUploaded_t_104;
typedef u64_LeaderboardScoreUploaded_t_104 u_LeaderboardScoreUploaded_t_104;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardUGCSet_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator u64_LeaderboardUGCSet_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_LeaderboardUGCSet_t_123
{
    uint32_t m_eResult;
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator w64_LeaderboardUGCSet_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardUGCSet_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator u32_LeaderboardUGCSet_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardUGCSet_t_123
{
    uint32_t m_eResult;
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator w32_LeaderboardUGCSet_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardUGCSet_t_123 w_LeaderboardUGCSet_t_123;
typedef u32_LeaderboardUGCSet_t_123 u_LeaderboardUGCSet_t_123;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardUGCSet_t_123 w_LeaderboardUGCSet_t_123;
typedef u64_LeaderboardUGCSet_t_123 u_LeaderboardUGCSet_t_123;
#endif

#pragma pack( push, 8 )
struct w64_LeaderboardUGCSet_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hSteamLeaderboard;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LeaderboardUGCSet_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator u32_LeaderboardUGCSet_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LeaderboardUGCSet_t_111x
{
    uint32_t m_eResult;
    uint64_t m_hSteamLeaderboard;
#ifdef __cplusplus
    operator w32_LeaderboardUGCSet_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LeaderboardUGCSet_t_111x w_LeaderboardUGCSet_t_111x;
typedef u32_LeaderboardUGCSet_t_111x u_LeaderboardUGCSet_t_111x;
#endif
#ifdef __x86_64__
typedef w64_LeaderboardUGCSet_t_111x w_LeaderboardUGCSet_t_111x;
typedef u64_LeaderboardUGCSet_t_111x u_LeaderboardUGCSet_t_111x;
#endif

#pragma pack( push, 8 )
struct w64_LobbyCreated_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator u64_LobbyCreated_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_LobbyCreated_t_123
{
    uint32_t m_eResult;
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator w64_LobbyCreated_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LobbyCreated_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator u32_LobbyCreated_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LobbyCreated_t_123
{
    uint32_t m_eResult;
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator w32_LobbyCreated_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LobbyCreated_t_123 w_LobbyCreated_t_123;
typedef u32_LobbyCreated_t_123 u_LobbyCreated_t_123;
#endif
#ifdef __x86_64__
typedef w64_LobbyCreated_t_123 w_LobbyCreated_t_123;
typedef u64_LobbyCreated_t_123 u_LobbyCreated_t_123;
#endif

#pragma pack( push, 8 )
struct w64_LobbyCreated_t_099u
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulSteamIDLobby;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_LobbyCreated_t_099u
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator u32_LobbyCreated_t_099u() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_LobbyCreated_t_099u
{
    uint32_t m_eResult;
    uint64_t m_ulSteamIDLobby;
#ifdef __cplusplus
    operator w32_LobbyCreated_t_099u() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_LobbyCreated_t_099u w_LobbyCreated_t_099u;
typedef u32_LobbyCreated_t_099u u_LobbyCreated_t_099u;
#endif
#ifdef __x86_64__
typedef w64_LobbyCreated_t_099u w_LobbyCreated_t_099u;
typedef u64_LobbyCreated_t_099u u_LobbyCreated_t_099u;
#endif

#pragma pack( push, 8 )
struct w64_MicroTxnAuthorizationResponse_t_123
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u64_MicroTxnAuthorizationResponse_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_MicroTxnAuthorizationResponse_t_123
{
    uint32_t m_unAppID;
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w64_MicroTxnAuthorizationResponse_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_MicroTxnAuthorizationResponse_t_123
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u32_MicroTxnAuthorizationResponse_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_MicroTxnAuthorizationResponse_t_123
{
    uint32_t m_unAppID;
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w32_MicroTxnAuthorizationResponse_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_MicroTxnAuthorizationResponse_t_123 w_MicroTxnAuthorizationResponse_t_123;
typedef u32_MicroTxnAuthorizationResponse_t_123 u_MicroTxnAuthorizationResponse_t_123;
#endif
#ifdef __x86_64__
typedef w64_MicroTxnAuthorizationResponse_t_123 w_MicroTxnAuthorizationResponse_t_123;
typedef u64_MicroTxnAuthorizationResponse_t_123 u_MicroTxnAuthorizationResponse_t_123;
#endif

#pragma pack( push, 8 )
struct w64_MicroTxnAuthorizationResponse_t_109
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_17[7];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_MicroTxnAuthorizationResponse_t_109
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u32_MicroTxnAuthorizationResponse_t_109() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_MicroTxnAuthorizationResponse_t_109
{
    uint32_t m_unAppID;
    uint64_t m_ulOrderID;
    uint8_t m_bAuthorized;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w32_MicroTxnAuthorizationResponse_t_109() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_MicroTxnAuthorizationResponse_t_109 w_MicroTxnAuthorizationResponse_t_109;
typedef u32_MicroTxnAuthorizationResponse_t_109 u_MicroTxnAuthorizationResponse_t_109;
#endif
#ifdef __x86_64__
typedef w64_MicroTxnAuthorizationResponse_t_109 w_MicroTxnAuthorizationResponse_t_109;
typedef u64_MicroTxnAuthorizationResponse_t_109 u_MicroTxnAuthorizationResponse_t_109;
#endif

#pragma pack( push, 8 )
struct w64_PS3TrophiesInstalled_t_123
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator u64_PS3TrophiesInstalled_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_PS3TrophiesInstalled_t_123
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator w64_PS3TrophiesInstalled_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_PS3TrophiesInstalled_t_123
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator u32_PS3TrophiesInstalled_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_PS3TrophiesInstalled_t_123
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator w32_PS3TrophiesInstalled_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_PS3TrophiesInstalled_t_123 w_PS3TrophiesInstalled_t_123;
typedef u32_PS3TrophiesInstalled_t_123 u_PS3TrophiesInstalled_t_123;
#endif
#ifdef __x86_64__
typedef w64_PS3TrophiesInstalled_t_123 w_PS3TrophiesInstalled_t_123;
typedef u64_PS3TrophiesInstalled_t_123 u_PS3TrophiesInstalled_t_123;
#endif

#pragma pack( push, 8 )
struct w64_PS3TrophiesInstalled_t_112x
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
    uint64_t m_ulRequiredDiskSpace;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_PS3TrophiesInstalled_t_112x
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint8_t __pad_12[4];
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator u32_PS3TrophiesInstalled_t_112x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_PS3TrophiesInstalled_t_112x
{
    uint64_t m_nGameID;
    uint32_t m_eResult;
    uint64_t m_ulRequiredDiskSpace;
#ifdef __cplusplus
    operator w32_PS3TrophiesInstalled_t_112x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_PS3TrophiesInstalled_t_112x w_PS3TrophiesInstalled_t_112x;
typedef u32_PS3TrophiesInstalled_t_112x u_PS3TrophiesInstalled_t_112x;
#endif
#ifdef __x86_64__
typedef w64_PS3TrophiesInstalled_t_112x w_PS3TrophiesInstalled_t_112x;
typedef u64_PS3TrophiesInstalled_t_112x u_PS3TrophiesInstalled_t_112x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageAppSyncProgress_t_123
{
    W64_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    uint8_t __pad_268[4];
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_281[7];
#ifdef __cplusplus
    operator u64_RemoteStorageAppSyncProgress_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageAppSyncProgress_t_123
{
    U64_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_277[3];
#ifdef __cplusplus
    operator w64_RemoteStorageAppSyncProgress_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageAppSyncProgress_t_123
{
    W32_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    uint8_t __pad_268[4];
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_281[7];
#ifdef __cplusplus
    operator u32_RemoteStorageAppSyncProgress_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageAppSyncProgress_t_123
{
    U32_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_277[3];
#ifdef __cplusplus
    operator w32_RemoteStorageAppSyncProgress_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageAppSyncProgress_t_123 w_RemoteStorageAppSyncProgress_t_123;
typedef u32_RemoteStorageAppSyncProgress_t_123 u_RemoteStorageAppSyncProgress_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageAppSyncProgress_t_123 w_RemoteStorageAppSyncProgress_t_123;
typedef u64_RemoteStorageAppSyncProgress_t_123 u_RemoteStorageAppSyncProgress_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageAppSyncProgress_t_111x
{
    W64_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    uint8_t __pad_268[4];
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_281[7];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageAppSyncProgress_t_111x
{
    W32_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    uint8_t __pad_268[4];
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_281[7];
#ifdef __cplusplus
    operator u32_RemoteStorageAppSyncProgress_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageAppSyncProgress_t_111x
{
    U32_ARRAY(char, 260, m_rgchCurrentFile);
    uint32_t m_nAppID;
    uint32_t m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    int8_t m_bUploading;
    uint8_t __pad_277[3];
#ifdef __cplusplus
    operator w32_RemoteStorageAppSyncProgress_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageAppSyncProgress_t_111x w_RemoteStorageAppSyncProgress_t_111x;
typedef u32_RemoteStorageAppSyncProgress_t_111x u_RemoteStorageAppSyncProgress_t_111x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageAppSyncProgress_t_111x w_RemoteStorageAppSyncProgress_t_111x;
typedef u64_RemoteStorageAppSyncProgress_t_111x u_RemoteStorageAppSyncProgress_t_111x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageDeletePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStorageDeletePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageDeletePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStorageDeletePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageDeletePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageDeletePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageDeletePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageDeletePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageDeletePublishedFileResult_t_123 w_RemoteStorageDeletePublishedFileResult_t_123;
typedef u32_RemoteStorageDeletePublishedFileResult_t_123 u_RemoteStorageDeletePublishedFileResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageDeletePublishedFileResult_t_123 w_RemoteStorageDeletePublishedFileResult_t_123;
typedef u64_RemoteStorageDeletePublishedFileResult_t_123 u_RemoteStorageDeletePublishedFileResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageDeletePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageDeletePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageDeletePublishedFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageDeletePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageDeletePublishedFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageDeletePublishedFileResult_t_116x w_RemoteStorageDeletePublishedFileResult_t_116x;
typedef u32_RemoteStorageDeletePublishedFileResult_t_116x u_RemoteStorageDeletePublishedFileResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageDeletePublishedFileResult_t_116x w_RemoteStorageDeletePublishedFileResult_t_116x;
typedef u64_RemoteStorageDeletePublishedFileResult_t_116x u_RemoteStorageDeletePublishedFileResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageDownloadUGCResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_284[4];
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator u64_RemoteStorageDownloadUGCResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageDownloadUGCResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    U64_ARRAY(char, 260, m_pchFileName);
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator w64_RemoteStorageDownloadUGCResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageDownloadUGCResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_284[4];
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator u32_RemoteStorageDownloadUGCResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageDownloadUGCResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    U32_ARRAY(char, 260, m_pchFileName);
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator w32_RemoteStorageDownloadUGCResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageDownloadUGCResult_t_123 w_RemoteStorageDownloadUGCResult_t_123;
typedef u32_RemoteStorageDownloadUGCResult_t_123 u_RemoteStorageDownloadUGCResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageDownloadUGCResult_t_123 w_RemoteStorageDownloadUGCResult_t_123;
typedef u64_RemoteStorageDownloadUGCResult_t_123 u_RemoteStorageDownloadUGCResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageDownloadUGCResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_284[4];
    uint64_t m_ulSteamIDOwner;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageDownloadUGCResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_284[4];
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator u32_RemoteStorageDownloadUGCResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageDownloadUGCResult_t_116x
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    U32_ARRAY(char, 260, m_pchFileName);
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator w32_RemoteStorageDownloadUGCResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageDownloadUGCResult_t_116x w_RemoteStorageDownloadUGCResult_t_116x;
typedef u32_RemoteStorageDownloadUGCResult_t_116x u_RemoteStorageDownloadUGCResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageDownloadUGCResult_t_116x w_RemoteStorageDownloadUGCResult_t_116x;
typedef u64_RemoteStorageDownloadUGCResult_t_116x u_RemoteStorageDownloadUGCResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageDownloadUGCResult_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W64_PTR(char *m_pchFileName, m_pchFileName);
    uint64_t m_ulSteamIDOwner;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageDownloadUGCResult_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    W32_PTR(char *m_pchFileName, m_pchFileName);
    uint8_t __pad_28[4];
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator u32_RemoteStorageDownloadUGCResult_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageDownloadUGCResult_t_111x
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    uint32_t m_nAppID;
    int32_t m_nSizeInBytes;
    U32_PTR(char *m_pchFileName, m_pchFileName);
    uint64_t m_ulSteamIDOwner;
#ifdef __cplusplus
    operator w32_RemoteStorageDownloadUGCResult_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageDownloadUGCResult_t_111x w_RemoteStorageDownloadUGCResult_t_111x;
typedef u32_RemoteStorageDownloadUGCResult_t_111x u_RemoteStorageDownloadUGCResult_t_111x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageDownloadUGCResult_t_111x w_RemoteStorageDownloadUGCResult_t_111x;
typedef u64_RemoteStorageDownloadUGCResult_t_111x u_RemoteStorageDownloadUGCResult_t_111x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 w_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef u32_RemoteStorageEnumerateUserPublishedFilesResult_t_123 u_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 w_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
typedef u64_RemoteStorageEnumerateUserPublishedFilesResult_t_123 u_RemoteStorageEnumerateUserPublishedFilesResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x w_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef u32_RemoteStorageEnumerateUserPublishedFilesResult_t_116x u_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x w_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
typedef u64_RemoteStorageEnumerateUserPublishedFilesResult_t_116x u_RemoteStorageEnumerateUserPublishedFilesResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
typedef u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123 u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef u32_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 w_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
typedef u64_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119 u_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W64_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U64_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W32_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U32_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 w_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 u_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 w_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
typedef u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_123 u_RemoteStorageEnumerateUserSubscribedFilesResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W64_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W32_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U32_ARRAY(uint32_t, 50, m_rgRTimeSubscribed);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x w_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef u32_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x u_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x w_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
typedef u64_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x u_RemoteStorageEnumerateUserSubscribedFilesResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_125
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W64_ARRAY(float, 50, m_rgScore);
    uint32_t m_nAppId;
    uint32_t m_unStartIndex;
#ifdef __cplusplus
    operator u64_RemoteStorageEnumerateWorkshopFilesResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageEnumerateWorkshopFilesResult_t_125
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U64_ARRAY(float, 50, m_rgScore);
    uint32_t m_nAppId;
    uint32_t m_unStartIndex;
#ifdef __cplusplus
    operator w64_RemoteStorageEnumerateWorkshopFilesResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_125
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W32_ARRAY(float, 50, m_rgScore);
    uint32_t m_nAppId;
    uint32_t m_unStartIndex;
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_125
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U32_ARRAY(float, 50, m_rgScore);
    uint32_t m_nAppId;
    uint32_t m_unStartIndex;
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateWorkshopFilesResult_t_125 w_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef u32_RemoteStorageEnumerateWorkshopFilesResult_t_125 u_RemoteStorageEnumerateWorkshopFilesResult_t_125;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateWorkshopFilesResult_t_125 w_RemoteStorageEnumerateWorkshopFilesResult_t_125;
typedef u64_RemoteStorageEnumerateWorkshopFilesResult_t_125 u_RemoteStorageEnumerateWorkshopFilesResult_t_125;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W64_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator u64_RemoteStorageEnumerateWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageEnumerateWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U64_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator w64_RemoteStorageEnumerateWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W32_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_123
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U32_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateWorkshopFilesResult_t_123 w_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef u32_RemoteStorageEnumerateWorkshopFilesResult_t_123 u_RemoteStorageEnumerateWorkshopFilesResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateWorkshopFilesResult_t_123 w_RemoteStorageEnumerateWorkshopFilesResult_t_123;
typedef u64_RemoteStorageEnumerateWorkshopFilesResult_t_123 u_RemoteStorageEnumerateWorkshopFilesResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageEnumerateWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W64_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W64_ARRAY(float, 50, m_rgScore);
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageEnumerateWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    uint8_t __pad_12[4];
    W32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    W32_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator u32_RemoteStorageEnumerateWorkshopFilesResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageEnumerateWorkshopFilesResult_t_119
{
    uint32_t m_eResult;
    int32_t m_nResultsReturned;
    int32_t m_nTotalResultCount;
    U32_ARRAY(uint64_t, 50, m_rgPublishedFileId);
    U32_ARRAY(float, 50, m_rgScore);
#ifdef __cplusplus
    operator w32_RemoteStorageEnumerateWorkshopFilesResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageEnumerateWorkshopFilesResult_t_119 w_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef u32_RemoteStorageEnumerateWorkshopFilesResult_t_119 u_RemoteStorageEnumerateWorkshopFilesResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageEnumerateWorkshopFilesResult_t_119 w_RemoteStorageEnumerateWorkshopFilesResult_t_119;
typedef u64_RemoteStorageEnumerateWorkshopFilesResult_t_119 u_RemoteStorageEnumerateWorkshopFilesResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageFileShareResult_t_128x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    W64_ARRAY(char, 260, m_rgchFilename);
    uint8_t __pad_276[4];
#ifdef __cplusplus
    operator u64_RemoteStorageFileShareResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageFileShareResult_t_128x
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    U64_ARRAY(char, 260, m_rgchFilename);
#ifdef __cplusplus
    operator w64_RemoteStorageFileShareResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageFileShareResult_t_128x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
    W32_ARRAY(char, 260, m_rgchFilename);
    uint8_t __pad_276[4];
#ifdef __cplusplus
    operator u32_RemoteStorageFileShareResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageFileShareResult_t_128x
{
    uint32_t m_eResult;
    uint64_t m_hFile;
    U32_ARRAY(char, 260, m_rgchFilename);
#ifdef __cplusplus
    operator w32_RemoteStorageFileShareResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageFileShareResult_t_128x w_RemoteStorageFileShareResult_t_128x;
typedef u32_RemoteStorageFileShareResult_t_128x u_RemoteStorageFileShareResult_t_128x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageFileShareResult_t_128x w_RemoteStorageFileShareResult_t_128x;
typedef u64_RemoteStorageFileShareResult_t_128x u_RemoteStorageFileShareResult_t_128x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageFileShareResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
#ifdef __cplusplus
    operator u64_RemoteStorageFileShareResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageFileShareResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_hFile;
#ifdef __cplusplus
    operator w64_RemoteStorageFileShareResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageFileShareResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
#ifdef __cplusplus
    operator u32_RemoteStorageFileShareResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageFileShareResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_hFile;
#ifdef __cplusplus
    operator w32_RemoteStorageFileShareResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageFileShareResult_t_123 w_RemoteStorageFileShareResult_t_123;
typedef u32_RemoteStorageFileShareResult_t_123 u_RemoteStorageFileShareResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageFileShareResult_t_123 w_RemoteStorageFileShareResult_t_123;
typedef u64_RemoteStorageFileShareResult_t_123 u_RemoteStorageFileShareResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageFileShareResult_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageFileShareResult_t_111x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_hFile;
#ifdef __cplusplus
    operator u32_RemoteStorageFileShareResult_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageFileShareResult_t_111x
{
    uint32_t m_eResult;
    uint64_t m_hFile;
#ifdef __cplusplus
    operator w32_RemoteStorageFileShareResult_t_111x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageFileShareResult_t_111x w_RemoteStorageFileShareResult_t_111x;
typedef u32_RemoteStorageFileShareResult_t_111x u_RemoteStorageFileShareResult_t_111x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageFileShareResult_t_111x w_RemoteStorageFileShareResult_t_111x;
typedef u64_RemoteStorageFileShareResult_t_111x u_RemoteStorageFileShareResult_t_111x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_126
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
    int8_t m_bAcceptedForUse;
    uint8_t __pad_9753[7];
#ifdef __cplusplus
    operator u64_RemoteStorageGetPublishedFileDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageGetPublishedFileDetailsResult_t_126
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U64_ARRAY(char, 129, m_rgchTitle);
    U64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
    int8_t m_bAcceptedForUse;
    uint8_t __pad_9745[3];
#ifdef __cplusplus
    operator w64_RemoteStorageGetPublishedFileDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_126
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
    int8_t m_bAcceptedForUse;
    uint8_t __pad_9753[7];
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_126
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
    int8_t m_bAcceptedForUse;
    uint8_t __pad_9745[3];
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_126 w_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_126 u_RemoteStorageGetPublishedFileDetailsResult_t_126;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_126 w_RemoteStorageGetPublishedFileDetailsResult_t_126;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_126 u_RemoteStorageGetPublishedFileDetailsResult_t_126;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator u64_RemoteStorageGetPublishedFileDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageGetPublishedFileDetailsResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U64_ARRAY(char, 129, m_rgchTitle);
    U64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator w64_RemoteStorageGetPublishedFileDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_123 w_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_123 u_RemoteStorageGetPublishedFileDetailsResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_123 w_RemoteStorageGetPublishedFileDetailsResult_t_123;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_123 u_RemoteStorageGetPublishedFileDetailsResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_119x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_119x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_119x
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
    uint32_t m_eFileType;
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_119x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_119x w_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_119x u_RemoteStorageGetPublishedFileDetailsResult_t_119x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_119x w_RemoteStorageGetPublishedFileDetailsResult_t_119x;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_119x u_RemoteStorageGetPublishedFileDetailsResult_t_119x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W64_ARRAY(char, 256, m_rgchURL);
    uint8_t __pad_9748[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    W32_ARRAY(char, 256, m_rgchURL);
    uint8_t __pad_9748[4];
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_119
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    U32_ARRAY(char, 256, m_rgchURL);
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_119 w_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_119 u_RemoteStorageGetPublishedFileDetailsResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_119 w_RemoteStorageGetPublishedFileDetailsResult_t_119;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_119 u_RemoteStorageGetPublishedFileDetailsResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_118
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    uint8_t __pad_9492[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_118
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8153[7];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9483[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
    uint8_t __pad_9492[4];
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_118() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_118
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 8000, m_rgchDescription);
    uint8_t __pad_8149[3];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_9475[1];
    int32_t m_nFileSize;
    int32_t m_nPreviewFileSize;
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_118() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_118 w_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_118 u_RemoteStorageGetPublishedFileDetailsResult_t_118;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_118 w_RemoteStorageGetPublishedFileDetailsResult_t_118;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_118 u_RemoteStorageGetPublishedFileDetailsResult_t_118;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedFileDetailsResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W64_ARRAY(char, 129, m_rgchTitle);
    W64_ARRAY(char, 257, m_rgchDescription);
    uint8_t __pad_410[6];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W64_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W64_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_1739[5];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedFileDetailsResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    W32_ARRAY(char, 129, m_rgchTitle);
    W32_ARRAY(char, 257, m_rgchDescription);
    uint8_t __pad_410[6];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    W32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    W32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_1739[5];
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedFileDetailsResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedFileDetailsResult_t_116x
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nCreatorAppID;
    uint32_t m_nConsumerAppID;
    U32_ARRAY(char, 129, m_rgchTitle);
    U32_ARRAY(char, 257, m_rgchDescription);
    uint8_t __pad_406[2];
    uint64_t m_hFile;
    uint64_t m_hPreviewFile;
    uint64_t m_ulSteamIDOwner;
    uint32_t m_rtimeCreated;
    uint32_t m_rtimeUpdated;
    uint32_t m_eVisibility;
    int8_t m_bBanned;
    U32_ARRAY(char, 1025, m_rgchTags);
    int8_t m_bTagsTruncated;
    U32_ARRAY(char, 260, m_pchFileName);
    uint8_t __pad_1731[1];
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedFileDetailsResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedFileDetailsResult_t_116x w_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef u32_RemoteStorageGetPublishedFileDetailsResult_t_116x u_RemoteStorageGetPublishedFileDetailsResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedFileDetailsResult_t_116x w_RemoteStorageGetPublishedFileDetailsResult_t_116x;
typedef u64_RemoteStorageGetPublishedFileDetailsResult_t_116x u_RemoteStorageGetPublishedFileDetailsResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 w_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 u_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 w_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
typedef u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_123 u_RemoteStorageGetPublishedItemVoteDetailsResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119
{
    uint32_t m_eResult;
    uint64_t m_unPublishedFileId;
    int32_t m_nVotesFor;
    int32_t m_nVotesAgainst;
    int32_t m_nReports;
    float m_fScore;
#ifdef __cplusplus
    operator w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 w_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef u32_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 u_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 w_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
typedef u64_RemoteStorageGetPublishedItemVoteDetailsResult_t_119 u_RemoteStorageGetPublishedItemVoteDetailsResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStoragePublishFileResult_t_125
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u64_RemoteStoragePublishFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStoragePublishFileResult_t_125
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w64_RemoteStoragePublishFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStoragePublishFileResult_t_125
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u32_RemoteStoragePublishFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStoragePublishFileResult_t_125
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w32_RemoteStoragePublishFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStoragePublishFileResult_t_125 w_RemoteStoragePublishFileResult_t_125;
typedef u32_RemoteStoragePublishFileResult_t_125 u_RemoteStoragePublishFileResult_t_125;
#endif
#ifdef __x86_64__
typedef w64_RemoteStoragePublishFileResult_t_125 w_RemoteStoragePublishFileResult_t_125;
typedef u64_RemoteStoragePublishFileResult_t_125 u_RemoteStoragePublishFileResult_t_125;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStoragePublishFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStoragePublishFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStoragePublishFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStoragePublishFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStoragePublishFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStoragePublishFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStoragePublishFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStoragePublishFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStoragePublishFileResult_t_123 w_RemoteStoragePublishFileResult_t_123;
typedef u32_RemoteStoragePublishFileResult_t_123 u_RemoteStoragePublishFileResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStoragePublishFileResult_t_123 w_RemoteStoragePublishFileResult_t_123;
typedef u64_RemoteStoragePublishFileResult_t_123 u_RemoteStoragePublishFileResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStoragePublishFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStoragePublishFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStoragePublishFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStoragePublishFileResult_t_116x
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStoragePublishFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStoragePublishFileResult_t_116x w_RemoteStoragePublishFileResult_t_116x;
typedef u32_RemoteStoragePublishFileResult_t_116x u_RemoteStoragePublishFileResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStoragePublishFileResult_t_116x w_RemoteStoragePublishFileResult_t_116x;
typedef u64_RemoteStoragePublishFileResult_t_116x u_RemoteStoragePublishFileResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStoragePublishedFileUpdated_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_12[4];
    uint64_t m_ulUnused;
#ifdef __cplusplus
    operator u64_RemoteStoragePublishedFileUpdated_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStoragePublishedFileUpdated_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint64_t m_ulUnused;
#ifdef __cplusplus
    operator w64_RemoteStoragePublishedFileUpdated_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStoragePublishedFileUpdated_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_12[4];
    uint64_t m_ulUnused;
#ifdef __cplusplus
    operator u32_RemoteStoragePublishedFileUpdated_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStoragePublishedFileUpdated_t
{
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint64_t m_ulUnused;
#ifdef __cplusplus
    operator w32_RemoteStoragePublishedFileUpdated_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStoragePublishedFileUpdated_t w_RemoteStoragePublishedFileUpdated_t;
typedef u32_RemoteStoragePublishedFileUpdated_t u_RemoteStoragePublishedFileUpdated_t;
#endif
#ifdef __x86_64__
typedef w64_RemoteStoragePublishedFileUpdated_t w_RemoteStoragePublishedFileUpdated_t;
typedef u64_RemoteStoragePublishedFileUpdated_t u_RemoteStoragePublishedFileUpdated_t;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageSetUserPublishedFileActionResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_RemoteStorageSetUserPublishedFileActionResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageSetUserPublishedFileActionResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
#ifdef __cplusplus
    operator w64_RemoteStorageSetUserPublishedFileActionResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageSetUserPublishedFileActionResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_RemoteStorageSetUserPublishedFileActionResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageSetUserPublishedFileActionResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
#ifdef __cplusplus
    operator w32_RemoteStorageSetUserPublishedFileActionResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageSetUserPublishedFileActionResult_t_123 w_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef u32_RemoteStorageSetUserPublishedFileActionResult_t_123 u_RemoteStorageSetUserPublishedFileActionResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageSetUserPublishedFileActionResult_t_123 w_RemoteStorageSetUserPublishedFileActionResult_t_123;
typedef u64_RemoteStorageSetUserPublishedFileActionResult_t_123 u_RemoteStorageSetUserPublishedFileActionResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageSetUserPublishedFileActionResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageSetUserPublishedFileActionResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_RemoteStorageSetUserPublishedFileActionResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageSetUserPublishedFileActionResult_t_119
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eAction;
#ifdef __cplusplus
    operator w32_RemoteStorageSetUserPublishedFileActionResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageSetUserPublishedFileActionResult_t_119 w_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef u32_RemoteStorageSetUserPublishedFileActionResult_t_119 u_RemoteStorageSetUserPublishedFileActionResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageSetUserPublishedFileActionResult_t_119 w_RemoteStorageSetUserPublishedFileActionResult_t_119;
typedef u64_RemoteStorageSetUserPublishedFileActionResult_t_119 u_RemoteStorageSetUserPublishedFileActionResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageSubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStorageSubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageSubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStorageSubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageSubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageSubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageSubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageSubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageSubscribePublishedFileResult_t_123 w_RemoteStorageSubscribePublishedFileResult_t_123;
typedef u32_RemoteStorageSubscribePublishedFileResult_t_123 u_RemoteStorageSubscribePublishedFileResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageSubscribePublishedFileResult_t_123 w_RemoteStorageSubscribePublishedFileResult_t_123;
typedef u64_RemoteStorageSubscribePublishedFileResult_t_123 u_RemoteStorageSubscribePublishedFileResult_t_123;
#endif

#pragma pack( push, 4 )
struct w64_RemoteStorageSubscribePublishedFileResult_t_116x
{
    uint32_t m_eResult;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RemoteStorageSubscribePublishedFileResult_t_116x
{
    uint32_t m_eResult;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageSubscribePublishedFileResult_t_116x w_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef u32_RemoteStorageSubscribePublishedFileResult_t_116x u_RemoteStorageSubscribePublishedFileResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageSubscribePublishedFileResult_t_116x w_RemoteStorageSubscribePublishedFileResult_t_116x;
typedef u64_RemoteStorageSubscribePublishedFileResult_t_116x u_RemoteStorageSubscribePublishedFileResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUnsubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStorageUnsubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageUnsubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStorageUnsubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUnsubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageUnsubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUnsubscribePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageUnsubscribePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUnsubscribePublishedFileResult_t_123 w_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef u32_RemoteStorageUnsubscribePublishedFileResult_t_123 u_RemoteStorageUnsubscribePublishedFileResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUnsubscribePublishedFileResult_t_123 w_RemoteStorageUnsubscribePublishedFileResult_t_123;
typedef u64_RemoteStorageUnsubscribePublishedFileResult_t_123 u_RemoteStorageUnsubscribePublishedFileResult_t_123;
#endif

#pragma pack( push, 4 )
struct w64_RemoteStorageUnsubscribePublishedFileResult_t_116x
{
    uint32_t m_eResult;
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_RemoteStorageUnsubscribePublishedFileResult_t_116x
{
    uint32_t m_eResult;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUnsubscribePublishedFileResult_t_116x w_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef u32_RemoteStorageUnsubscribePublishedFileResult_t_116x u_RemoteStorageUnsubscribePublishedFileResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUnsubscribePublishedFileResult_t_116x w_RemoteStorageUnsubscribePublishedFileResult_t_116x;
typedef u64_RemoteStorageUnsubscribePublishedFileResult_t_116x u_RemoteStorageUnsubscribePublishedFileResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdatePublishedFileRequest_t
{
    uint64_t m_unPublishedFileId;
    W64_PTR(const char *m_pchFile, m_pchFile);
    W64_PTR(const char *m_pchPreviewFile, m_pchPreviewFile);
    W64_PTR(const char *m_pchTitle, m_pchTitle);
    W64_PTR(const char *m_pchDescription, m_pchDescription);
    uint32_t m_eVisibility;
    uint8_t __pad_44[4];
    W64_PTR(w64_SteamParamStringArray_t *m_pTags, m_pTags);
    int8_t m_bUpdateFile;
    int8_t m_bUpdatePreviewFile;
    int8_t m_bUpdateTitle;
    int8_t m_bUpdateDescription;
    int8_t m_bUpdateVisibility;
    int8_t m_bUpdateTags;
    uint8_t __pad_62[2];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdatePublishedFileRequest_t
{
    uint64_t m_unPublishedFileId;
    W32_PTR(const char *m_pchFile, m_pchFile);
    W32_PTR(const char *m_pchPreviewFile, m_pchPreviewFile);
    W32_PTR(const char *m_pchTitle, m_pchTitle);
    W32_PTR(const char *m_pchDescription, m_pchDescription);
    uint32_t m_eVisibility;
    W32_PTR(w32_SteamParamStringArray_t *m_pTags, m_pTags);
    int8_t m_bUpdateFile;
    int8_t m_bUpdatePreviewFile;
    int8_t m_bUpdateTitle;
    int8_t m_bUpdateDescription;
    int8_t m_bUpdateVisibility;
    int8_t m_bUpdateTags;
    uint8_t __pad_38[2];
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdatePublishedFileRequest_t w_RemoteStorageUpdatePublishedFileRequest_t;
typedef u32_RemoteStorageUpdatePublishedFileRequest_t u_RemoteStorageUpdatePublishedFileRequest_t;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdatePublishedFileRequest_t w_RemoteStorageUpdatePublishedFileRequest_t;
typedef u64_RemoteStorageUpdatePublishedFileRequest_t u_RemoteStorageUpdatePublishedFileRequest_t;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdatePublishedFileResult_t_125
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u64_RemoteStorageUpdatePublishedFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageUpdatePublishedFileResult_t_125
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w64_RemoteStorageUpdatePublishedFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdatePublishedFileResult_t_125
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_17[7];
#ifdef __cplusplus
    operator u32_RemoteStorageUpdatePublishedFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUpdatePublishedFileResult_t_125
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    int8_t m_bUserNeedsToAcceptWorkshopLegalAgreement;
    uint8_t __pad_13[3];
#ifdef __cplusplus
    operator w32_RemoteStorageUpdatePublishedFileResult_t_125() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdatePublishedFileResult_t_125 w_RemoteStorageUpdatePublishedFileResult_t_125;
typedef u32_RemoteStorageUpdatePublishedFileResult_t_125 u_RemoteStorageUpdatePublishedFileResult_t_125;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdatePublishedFileResult_t_125 w_RemoteStorageUpdatePublishedFileResult_t_125;
typedef u64_RemoteStorageUpdatePublishedFileResult_t_125 u_RemoteStorageUpdatePublishedFileResult_t_125;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdatePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStorageUpdatePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageUpdatePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStorageUpdatePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdatePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageUpdatePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUpdatePublishedFileResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageUpdatePublishedFileResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdatePublishedFileResult_t_123 w_RemoteStorageUpdatePublishedFileResult_t_123;
typedef u32_RemoteStorageUpdatePublishedFileResult_t_123 u_RemoteStorageUpdatePublishedFileResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdatePublishedFileResult_t_123 w_RemoteStorageUpdatePublishedFileResult_t_123;
typedef u64_RemoteStorageUpdatePublishedFileResult_t_123 u_RemoteStorageUpdatePublishedFileResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdatePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdatePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageUpdatePublishedFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUpdatePublishedFileResult_t_116x
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageUpdatePublishedFileResult_t_116x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdatePublishedFileResult_t_116x w_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef u32_RemoteStorageUpdatePublishedFileResult_t_116x u_RemoteStorageUpdatePublishedFileResult_t_116x;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdatePublishedFileResult_t_116x w_RemoteStorageUpdatePublishedFileResult_t_116x;
typedef u64_RemoteStorageUpdatePublishedFileResult_t_116x u_RemoteStorageUpdatePublishedFileResult_t_116x;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 w_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 u_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 w_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
typedef u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_123 u_RemoteStorageUpdateUserPublishedItemVoteResult_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 w_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef u32_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 u_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 w_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
typedef u64_RemoteStorageUpdateUserPublishedItemVoteResult_t_119 u_RemoteStorageUpdateUserPublishedItemVoteResult_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUserVoteDetails_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_RemoteStorageUserVoteDetails_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoteStorageUserVoteDetails_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
#ifdef __cplusplus
    operator w64_RemoteStorageUserVoteDetails_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUserVoteDetails_t_123
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_RemoteStorageUserVoteDetails_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUserVoteDetails_t_123
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
#ifdef __cplusplus
    operator w32_RemoteStorageUserVoteDetails_t_123() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUserVoteDetails_t_123 w_RemoteStorageUserVoteDetails_t_123;
typedef u32_RemoteStorageUserVoteDetails_t_123 u_RemoteStorageUserVoteDetails_t_123;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUserVoteDetails_t_123 w_RemoteStorageUserVoteDetails_t_123;
typedef u64_RemoteStorageUserVoteDetails_t_123 u_RemoteStorageUserVoteDetails_t_123;
#endif

#pragma pack( push, 8 )
struct w64_RemoteStorageUserVoteDetails_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
    uint8_t __pad_20[4];
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoteStorageUserVoteDetails_t_119
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_RemoteStorageUserVoteDetails_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoteStorageUserVoteDetails_t_119
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_eVote;
#ifdef __cplusplus
    operator w32_RemoteStorageUserVoteDetails_t_119() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoteStorageUserVoteDetails_t_119 w_RemoteStorageUserVoteDetails_t_119;
typedef u32_RemoteStorageUserVoteDetails_t_119 u_RemoteStorageUserVoteDetails_t_119;
#endif
#ifdef __x86_64__
typedef w64_RemoteStorageUserVoteDetails_t_119 w_RemoteStorageUserVoteDetails_t_119;
typedef u64_RemoteStorageUserVoteDetails_t_119 u_RemoteStorageUserVoteDetails_t_119;
#endif

#pragma pack( push, 8 )
struct w64_RemoveAppDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u64_RemoveAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoveAppDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
#ifdef __cplusplus
    operator w64_RemoveAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoveAppDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
    uint8_t __pad_20[4];
#ifdef __cplusplus
    operator u32_RemoveAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoveAppDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint32_t m_nAppID;
#ifdef __cplusplus
    operator w32_RemoveAppDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoveAppDependencyResult_t w_RemoveAppDependencyResult_t;
typedef u32_RemoveAppDependencyResult_t u_RemoveAppDependencyResult_t;
#endif
#ifdef __x86_64__
typedef w64_RemoveAppDependencyResult_t w_RemoveAppDependencyResult_t;
typedef u64_RemoveAppDependencyResult_t u_RemoveAppDependencyResult_t;
#endif

#pragma pack( push, 8 )
struct w64_RemoveUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator u64_RemoveUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RemoveUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator w64_RemoveUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RemoveUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator u32_RemoveUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RemoveUGCDependencyResult_t
{
    uint32_t m_eResult;
    uint64_t m_nPublishedFileId;
    uint64_t m_nChildPublishedFileId;
#ifdef __cplusplus
    operator w32_RemoveUGCDependencyResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RemoveUGCDependencyResult_t w_RemoveUGCDependencyResult_t;
typedef u32_RemoveUGCDependencyResult_t u_RemoveUGCDependencyResult_t;
#endif
#ifdef __x86_64__
typedef w64_RemoveUGCDependencyResult_t w_RemoveUGCDependencyResult_t;
typedef u64_RemoveUGCDependencyResult_t u_RemoveUGCDependencyResult_t;
#endif

#pragma pack( push, 8 )
struct w64_RequestPlayersForGameFinalResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator u64_RequestPlayersForGameFinalResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RequestPlayersForGameFinalResultCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator w64_RequestPlayersForGameFinalResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RequestPlayersForGameFinalResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator u32_RequestPlayersForGameFinalResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RequestPlayersForGameFinalResultCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator w32_RequestPlayersForGameFinalResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RequestPlayersForGameFinalResultCallback_t w_RequestPlayersForGameFinalResultCallback_t;
typedef u32_RequestPlayersForGameFinalResultCallback_t u_RequestPlayersForGameFinalResultCallback_t;
#endif
#ifdef __x86_64__
typedef w64_RequestPlayersForGameFinalResultCallback_t w_RequestPlayersForGameFinalResultCallback_t;
typedef u64_RequestPlayersForGameFinalResultCallback_t u_RequestPlayersForGameFinalResultCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_RequestPlayersForGameProgressCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
#ifdef __cplusplus
    operator u64_RequestPlayersForGameProgressCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RequestPlayersForGameProgressCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
#ifdef __cplusplus
    operator w64_RequestPlayersForGameProgressCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RequestPlayersForGameProgressCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
#ifdef __cplusplus
    operator u32_RequestPlayersForGameProgressCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RequestPlayersForGameProgressCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
#ifdef __cplusplus
    operator w32_RequestPlayersForGameProgressCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RequestPlayersForGameProgressCallback_t w_RequestPlayersForGameProgressCallback_t;
typedef u32_RequestPlayersForGameProgressCallback_t u_RequestPlayersForGameProgressCallback_t;
#endif
#ifdef __x86_64__
typedef w64_RequestPlayersForGameProgressCallback_t w_RequestPlayersForGameProgressCallback_t;
typedef u64_RequestPlayersForGameProgressCallback_t u_RequestPlayersForGameProgressCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_RequestPlayersForGameResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
    CSteamID m_SteamIDPlayerFound;
    CSteamID m_SteamIDLobby;
    uint32_t m_ePlayerAcceptState;
    int32_t m_nPlayerIndex;
    int32_t m_nTotalPlayersFound;
    int32_t m_nTotalPlayersAcceptedGame;
    int32_t m_nSuggestedTeamIndex;
    uint8_t __pad_52[4];
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator u64_RequestPlayersForGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_RequestPlayersForGameResultCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
    CSteamID m_SteamIDPlayerFound;
    CSteamID m_SteamIDLobby;
    uint32_t m_ePlayerAcceptState;
    int32_t m_nPlayerIndex;
    int32_t m_nTotalPlayersFound;
    int32_t m_nTotalPlayersAcceptedGame;
    int32_t m_nSuggestedTeamIndex;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator w64_RequestPlayersForGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_RequestPlayersForGameResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t m_ullSearchID;
    CSteamID m_SteamIDPlayerFound;
    CSteamID m_SteamIDLobby;
    uint32_t m_ePlayerAcceptState;
    int32_t m_nPlayerIndex;
    int32_t m_nTotalPlayersFound;
    int32_t m_nTotalPlayersAcceptedGame;
    int32_t m_nSuggestedTeamIndex;
    uint8_t __pad_52[4];
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator u32_RequestPlayersForGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_RequestPlayersForGameResultCallback_t
{
    uint32_t m_eResult;
    uint64_t m_ullSearchID;
    CSteamID m_SteamIDPlayerFound;
    CSteamID m_SteamIDLobby;
    uint32_t m_ePlayerAcceptState;
    int32_t m_nPlayerIndex;
    int32_t m_nTotalPlayersFound;
    int32_t m_nTotalPlayersAcceptedGame;
    int32_t m_nSuggestedTeamIndex;
    uint64_t m_ullUniqueGameID;
#ifdef __cplusplus
    operator w32_RequestPlayersForGameResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_RequestPlayersForGameResultCallback_t w_RequestPlayersForGameResultCallback_t;
typedef u32_RequestPlayersForGameResultCallback_t u_RequestPlayersForGameResultCallback_t;
#endif
#ifdef __x86_64__
typedef w64_RequestPlayersForGameResultCallback_t w_RequestPlayersForGameResultCallback_t;
typedef u64_RequestPlayersForGameResultCallback_t u_RequestPlayersForGameResultCallback_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamInputConfigurationLoaded_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulDeviceHandle;
    CSteamID m_ulMappingCreator;
    uint32_t m_unMajorRevision;
    uint32_t m_unMinorRevision;
    int8_t m_bUsesSteamInputAPI;
    int8_t m_bUsesGamepadAPI;
    uint8_t __pad_34[6];
#ifdef __cplusplus
    operator u64_SteamInputConfigurationLoaded_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamInputConfigurationLoaded_t
{
    uint32_t m_unAppID;
    uint64_t m_ulDeviceHandle;
    CSteamID m_ulMappingCreator;
    uint32_t m_unMajorRevision;
    uint32_t m_unMinorRevision;
    int8_t m_bUsesSteamInputAPI;
    int8_t m_bUsesGamepadAPI;
    uint8_t __pad_30[2];
#ifdef __cplusplus
    operator w64_SteamInputConfigurationLoaded_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamInputConfigurationLoaded_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulDeviceHandle;
    CSteamID m_ulMappingCreator;
    uint32_t m_unMajorRevision;
    uint32_t m_unMinorRevision;
    int8_t m_bUsesSteamInputAPI;
    int8_t m_bUsesGamepadAPI;
    uint8_t __pad_34[6];
#ifdef __cplusplus
    operator u32_SteamInputConfigurationLoaded_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamInputConfigurationLoaded_t
{
    uint32_t m_unAppID;
    uint64_t m_ulDeviceHandle;
    CSteamID m_ulMappingCreator;
    uint32_t m_unMajorRevision;
    uint32_t m_unMinorRevision;
    int8_t m_bUsesSteamInputAPI;
    int8_t m_bUsesGamepadAPI;
    uint8_t __pad_30[2];
#ifdef __cplusplus
    operator w32_SteamInputConfigurationLoaded_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamInputConfigurationLoaded_t w_SteamInputConfigurationLoaded_t;
typedef u32_SteamInputConfigurationLoaded_t u_SteamInputConfigurationLoaded_t;
#endif
#ifdef __x86_64__
typedef w64_SteamInputConfigurationLoaded_t w_SteamInputConfigurationLoaded_t;
typedef u64_SteamInputConfigurationLoaded_t u_SteamInputConfigurationLoaded_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamInputGamepadSlotChange_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulDeviceHandle;
    uint32_t m_eDeviceType;
    int32_t m_nOldGamepadSlot;
    int32_t m_nNewGamepadSlot;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u64_SteamInputGamepadSlotChange_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamInputGamepadSlotChange_t
{
    uint32_t m_unAppID;
    uint64_t m_ulDeviceHandle;
    uint32_t m_eDeviceType;
    int32_t m_nOldGamepadSlot;
    int32_t m_nNewGamepadSlot;
#ifdef __cplusplus
    operator w64_SteamInputGamepadSlotChange_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamInputGamepadSlotChange_t
{
    uint32_t m_unAppID;
    uint8_t __pad_4[4];
    uint64_t m_ulDeviceHandle;
    uint32_t m_eDeviceType;
    int32_t m_nOldGamepadSlot;
    int32_t m_nNewGamepadSlot;
    uint8_t __pad_28[4];
#ifdef __cplusplus
    operator u32_SteamInputGamepadSlotChange_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamInputGamepadSlotChange_t
{
    uint32_t m_unAppID;
    uint64_t m_ulDeviceHandle;
    uint32_t m_eDeviceType;
    int32_t m_nOldGamepadSlot;
    int32_t m_nNewGamepadSlot;
#ifdef __cplusplus
    operator w32_SteamInputGamepadSlotChange_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamInputGamepadSlotChange_t w_SteamInputGamepadSlotChange_t;
typedef u32_SteamInputGamepadSlotChange_t u_SteamInputGamepadSlotChange_t;
#endif
#ifdef __x86_64__
typedef w64_SteamInputGamepadSlotChange_t w_SteamInputGamepadSlotChange_t;
typedef u64_SteamInputGamepadSlotChange_t u_SteamInputGamepadSlotChange_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamInventoryStartPurchaseResult_t
{
    uint32_t m_result;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint64_t m_ulTransID;
#ifdef __cplusplus
    operator u64_SteamInventoryStartPurchaseResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamInventoryStartPurchaseResult_t
{
    uint32_t m_result;
    uint64_t m_ulOrderID;
    uint64_t m_ulTransID;
#ifdef __cplusplus
    operator w64_SteamInventoryStartPurchaseResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamInventoryStartPurchaseResult_t
{
    uint32_t m_result;
    uint8_t __pad_4[4];
    uint64_t m_ulOrderID;
    uint64_t m_ulTransID;
#ifdef __cplusplus
    operator u32_SteamInventoryStartPurchaseResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamInventoryStartPurchaseResult_t
{
    uint32_t m_result;
    uint64_t m_ulOrderID;
    uint64_t m_ulTransID;
#ifdef __cplusplus
    operator w32_SteamInventoryStartPurchaseResult_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamInventoryStartPurchaseResult_t w_SteamInventoryStartPurchaseResult_t;
typedef u32_SteamInventoryStartPurchaseResult_t u_SteamInventoryStartPurchaseResult_t;
#endif
#ifdef __x86_64__
typedef w64_SteamInventoryStartPurchaseResult_t w_SteamInventoryStartPurchaseResult_t;
typedef u64_SteamInventoryStartPurchaseResult_t u_SteamInventoryStartPurchaseResult_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetConnectionStatusChangedCallback_t_153a
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_153a m_info;
    uint32_t m_eOldState;
    uint8_t __pad_708[4];
#ifdef __cplusplus
    operator u64_SteamNetConnectionStatusChangedCallback_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamNetConnectionStatusChangedCallback_t_153a
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_153a m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w64_SteamNetConnectionStatusChangedCallback_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetConnectionStatusChangedCallback_t_153a
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_153a m_info;
    uint32_t m_eOldState;
    uint8_t __pad_708[4];
#ifdef __cplusplus
    operator u32_SteamNetConnectionStatusChangedCallback_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetConnectionStatusChangedCallback_t_153a
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_153a m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w32_SteamNetConnectionStatusChangedCallback_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetConnectionStatusChangedCallback_t_153a w_SteamNetConnectionStatusChangedCallback_t_153a;
typedef u32_SteamNetConnectionStatusChangedCallback_t_153a u_SteamNetConnectionStatusChangedCallback_t_153a;
#endif
#ifdef __x86_64__
typedef w64_SteamNetConnectionStatusChangedCallback_t_153a w_SteamNetConnectionStatusChangedCallback_t_153a;
typedef u64_SteamNetConnectionStatusChangedCallback_t_153a u_SteamNetConnectionStatusChangedCallback_t_153a;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetConnectionStatusChangedCallback_t_144
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_144 m_info;
    uint32_t m_eOldState;
    uint8_t __pad_708[4];
#ifdef __cplusplus
    operator u64_SteamNetConnectionStatusChangedCallback_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamNetConnectionStatusChangedCallback_t_144
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_144 m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w64_SteamNetConnectionStatusChangedCallback_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetConnectionStatusChangedCallback_t_144
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_144 m_info;
    uint32_t m_eOldState;
    uint8_t __pad_708[4];
#ifdef __cplusplus
    operator u32_SteamNetConnectionStatusChangedCallback_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetConnectionStatusChangedCallback_t_144
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_144 m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w32_SteamNetConnectionStatusChangedCallback_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetConnectionStatusChangedCallback_t_144 w_SteamNetConnectionStatusChangedCallback_t_144;
typedef u32_SteamNetConnectionStatusChangedCallback_t_144 u_SteamNetConnectionStatusChangedCallback_t_144;
#endif
#ifdef __x86_64__
typedef w64_SteamNetConnectionStatusChangedCallback_t_144 w_SteamNetConnectionStatusChangedCallback_t_144;
typedef u64_SteamNetConnectionStatusChangedCallback_t_144 u_SteamNetConnectionStatusChangedCallback_t_144;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetConnectionStatusChangedCallback_t_151
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_151 m_info;
    uint32_t m_eOldState;
    uint8_t __pad_580[4];
#ifdef __cplusplus
    operator u64_SteamNetConnectionStatusChangedCallback_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamNetConnectionStatusChangedCallback_t_151
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_151 m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w64_SteamNetConnectionStatusChangedCallback_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetConnectionStatusChangedCallback_t_151
{
    uint32_t m_hConn;
    uint8_t __pad_4[4];
    SteamNetConnectionInfo_t_151 m_info;
    uint32_t m_eOldState;
    uint8_t __pad_580[4];
#ifdef __cplusplus
    operator u32_SteamNetConnectionStatusChangedCallback_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetConnectionStatusChangedCallback_t_151
{
    uint32_t m_hConn;
    SteamNetConnectionInfo_t_151 m_info;
    uint32_t m_eOldState;
#ifdef __cplusplus
    operator w32_SteamNetConnectionStatusChangedCallback_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetConnectionStatusChangedCallback_t_151 w_SteamNetConnectionStatusChangedCallback_t_151;
typedef u32_SteamNetConnectionStatusChangedCallback_t_151 u_SteamNetConnectionStatusChangedCallback_t_151;
#endif
#ifdef __x86_64__
typedef w64_SteamNetConnectionStatusChangedCallback_t_151 w_SteamNetConnectionStatusChangedCallback_t_151;
typedef u64_SteamNetConnectionStatusChangedCallback_t_151 u_SteamNetConnectionStatusChangedCallback_t_151;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetworkingMessage_t_153a
{
    W64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W64_PTR(void (*W_CDECL m_pfnFreeData)(w64_SteamNetworkingMessage_t_153a *), m_pfnFreeData);
    W64_PTR(void (*W_CDECL m_pfnRelease)(w64_SteamNetworkingMessage_t_153a *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
    uint16_t m_idxLane;
    uint16_t _pad1__;
    uint8_t __pad_212[4];
#ifdef __cplusplus
    operator u64_SteamNetworkingMessage_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct u64_SteamNetworkingMessage_t_153a
{
    U64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U64_PTR(void (*U_CDECL m_pfnFreeData)(u64_SteamNetworkingMessage_t_153a *), m_pfnFreeData);
    U64_PTR(void (*U_CDECL m_pfnRelease)(u64_SteamNetworkingMessage_t_153a *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
    uint16_t m_idxLane;
    uint16_t _pad1__;
    uint8_t __pad_212[4];
#ifdef __cplusplus
    operator w64_SteamNetworkingMessage_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetworkingMessage_t_153a
{
    W32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    uint8_t __pad_148[4];
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W32_PTR(void (*W_CDECL m_pfnFreeData)(w32_SteamNetworkingMessage_t_153a *), m_pfnFreeData);
    W32_PTR(void (*W_CDECL m_pfnRelease)(w32_SteamNetworkingMessage_t_153a *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
    uint16_t m_idxLane;
    uint16_t _pad1__;
    uint8_t __pad_204[4];
#ifdef __cplusplus
    operator u32_SteamNetworkingMessage_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetworkingMessage_t_153a
{
    U32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U32_PTR(void (*U_CDECL m_pfnFreeData)(u32_SteamNetworkingMessage_t_153a *), m_pfnFreeData);
    U32_PTR(void (*U_CDECL m_pfnRelease)(u32_SteamNetworkingMessage_t_153a *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
    uint16_t m_idxLane;
    uint16_t _pad1__;
#ifdef __cplusplus
    operator w32_SteamNetworkingMessage_t_153a() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetworkingMessage_t_153a w_SteamNetworkingMessage_t_153a;
typedef u32_SteamNetworkingMessage_t_153a u_SteamNetworkingMessage_t_153a;
#endif
#ifdef __x86_64__
typedef w64_SteamNetworkingMessage_t_153a w_SteamNetworkingMessage_t_153a;
typedef u64_SteamNetworkingMessage_t_153a u_SteamNetworkingMessage_t_153a;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetworkingMessage_t_147
{
    W64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W64_PTR(void (*W_CDECL m_pfnFreeData)(w64_SteamNetworkingMessage_t_147 *), m_pfnFreeData);
    W64_PTR(void (*W_CDECL m_pfnRelease)(w64_SteamNetworkingMessage_t_147 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator u64_SteamNetworkingMessage_t_147() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct u64_SteamNetworkingMessage_t_147
{
    U64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U64_PTR(void (*U_CDECL m_pfnFreeData)(u64_SteamNetworkingMessage_t_147 *), m_pfnFreeData);
    U64_PTR(void (*U_CDECL m_pfnRelease)(u64_SteamNetworkingMessage_t_147 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator w64_SteamNetworkingMessage_t_147() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetworkingMessage_t_147
{
    W32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    uint8_t __pad_148[4];
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W32_PTR(void (*W_CDECL m_pfnFreeData)(w32_SteamNetworkingMessage_t_147 *), m_pfnFreeData);
    W32_PTR(void (*W_CDECL m_pfnRelease)(w32_SteamNetworkingMessage_t_147 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator u32_SteamNetworkingMessage_t_147() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetworkingMessage_t_147
{
    U32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U32_PTR(void (*U_CDECL m_pfnFreeData)(u32_SteamNetworkingMessage_t_147 *), m_pfnFreeData);
    U32_PTR(void (*U_CDECL m_pfnRelease)(u32_SteamNetworkingMessage_t_147 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator w32_SteamNetworkingMessage_t_147() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetworkingMessage_t_147 w_SteamNetworkingMessage_t_147;
typedef u32_SteamNetworkingMessage_t_147 u_SteamNetworkingMessage_t_147;
#endif
#ifdef __x86_64__
typedef w64_SteamNetworkingMessage_t_147 w_SteamNetworkingMessage_t_147;
typedef u64_SteamNetworkingMessage_t_147 u_SteamNetworkingMessage_t_147;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetworkingMessage_t_151
{
    W64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_151 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W64_PTR(void (*W_CDECL m_pfnFreeData)(w64_SteamNetworkingMessage_t_151 *), m_pfnFreeData);
    W64_PTR(void (*W_CDECL m_pfnRelease)(w64_SteamNetworkingMessage_t_151 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator u64_SteamNetworkingMessage_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct u64_SteamNetworkingMessage_t_151
{
    U64_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_151 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U64_PTR(void (*U_CDECL m_pfnFreeData)(u64_SteamNetworkingMessage_t_151 *), m_pfnFreeData);
    U64_PTR(void (*U_CDECL m_pfnRelease)(u64_SteamNetworkingMessage_t_151 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator w64_SteamNetworkingMessage_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetworkingMessage_t_151
{
    W32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_151 m_identityPeer;
    uint8_t __pad_20[4];
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W32_PTR(void (*W_CDECL m_pfnFreeData)(w32_SteamNetworkingMessage_t_151 *), m_pfnFreeData);
    W32_PTR(void (*W_CDECL m_pfnRelease)(w32_SteamNetworkingMessage_t_151 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator u32_SteamNetworkingMessage_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetworkingMessage_t_151
{
    U32_PTR(void *m_pData, m_pData);
    int32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_151 m_identityPeer;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U32_PTR(void (*U_CDECL m_pfnFreeData)(u32_SteamNetworkingMessage_t_151 *), m_pfnFreeData);
    U32_PTR(void (*U_CDECL m_pfnRelease)(u32_SteamNetworkingMessage_t_151 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m_nFlags;
    int64_t m_nUserData;
#ifdef __cplusplus
    operator w32_SteamNetworkingMessage_t_151() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetworkingMessage_t_151 w_SteamNetworkingMessage_t_151;
typedef u32_SteamNetworkingMessage_t_151 u_SteamNetworkingMessage_t_151;
#endif
#ifdef __x86_64__
typedef w64_SteamNetworkingMessage_t_151 w_SteamNetworkingMessage_t_151;
typedef u64_SteamNetworkingMessage_t_151 u_SteamNetworkingMessage_t_151;
#endif

#pragma pack( push, 8 )
struct w64_SteamNetworkingMessage_t_144
{
    W64_PTR(void *m_pData, m_pData);
    uint32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_sender;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W64_PTR(void (*W_CDECL m_pfnFreeData)(w64_SteamNetworkingMessage_t_144 *), m_pfnFreeData);
    W64_PTR(void (*W_CDECL m_pfnRelease)(w64_SteamNetworkingMessage_t_144 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m___nPadDummy;
#ifdef __cplusplus
    operator u64_SteamNetworkingMessage_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct u64_SteamNetworkingMessage_t_144
{
    U64_PTR(void *m_pData, m_pData);
    uint32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_sender;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U64_PTR(void (*U_CDECL m_pfnFreeData)(u64_SteamNetworkingMessage_t_144 *), m_pfnFreeData);
    U64_PTR(void (*U_CDECL m_pfnRelease)(u64_SteamNetworkingMessage_t_144 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m___nPadDummy;
#ifdef __cplusplus
    operator w64_SteamNetworkingMessage_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamNetworkingMessage_t_144
{
    W32_PTR(void *m_pData, m_pData);
    uint32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_sender;
    uint8_t __pad_148[4];
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    W32_PTR(void (*W_CDECL m_pfnFreeData)(w32_SteamNetworkingMessage_t_144 *), m_pfnFreeData);
    W32_PTR(void (*W_CDECL m_pfnRelease)(w32_SteamNetworkingMessage_t_144 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m___nPadDummy;
#ifdef __cplusplus
    operator u32_SteamNetworkingMessage_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamNetworkingMessage_t_144
{
    U32_PTR(void *m_pData, m_pData);
    uint32_t m_cbSize;
    uint32_t m_conn;
    SteamNetworkingIdentity_144 m_sender;
    int64_t m_nConnUserData;
    int64_t m_usecTimeReceived;
    int64_t m_nMessageNumber;
    U32_PTR(void (*U_CDECL m_pfnFreeData)(u32_SteamNetworkingMessage_t_144 *), m_pfnFreeData);
    U32_PTR(void (*U_CDECL m_pfnRelease)(u32_SteamNetworkingMessage_t_144 *), m_pfnRelease);
    int32_t m_nChannel;
    int32_t m___nPadDummy;
#ifdef __cplusplus
    operator w32_SteamNetworkingMessage_t_144() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamNetworkingMessage_t_144 w_SteamNetworkingMessage_t_144;
typedef u32_SteamNetworkingMessage_t_144 u_SteamNetworkingMessage_t_144;
#endif
#ifdef __x86_64__
typedef w64_SteamNetworkingMessage_t_144 w_SteamNetworkingMessage_t_144;
typedef u64_SteamNetworkingMessage_t_144 u_SteamNetworkingMessage_t_144;
#endif

#pragma pack( push, 8 )
struct w64_SteamParamStringArray_t
{
    W64_PTR(const char **m_ppStrings, m_ppStrings);
    int32_t m_nNumStrings;
    uint8_t __pad_12[4];
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct w32_SteamParamStringArray_t
{
    W32_PTR(const char **m_ppStrings, m_ppStrings);
    int32_t m_nNumStrings;
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamParamStringArray_t w_SteamParamStringArray_t;
typedef u32_SteamParamStringArray_t u_SteamParamStringArray_t;
#endif
#ifdef __x86_64__
typedef w64_SteamParamStringArray_t w_SteamParamStringArray_t;
typedef u64_SteamParamStringArray_t u_SteamParamStringArray_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamPartyBeaconLocation_t
{
    uint32_t m_eType;
    uint8_t __pad_4[4];
    uint64_t m_ulLocationID;
#ifdef __cplusplus
    operator u64_SteamPartyBeaconLocation_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamPartyBeaconLocation_t
{
    uint32_t m_eType;
    uint64_t m_ulLocationID;
#ifdef __cplusplus
    operator w64_SteamPartyBeaconLocation_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamPartyBeaconLocation_t
{
    uint32_t m_eType;
    uint8_t __pad_4[4];
    uint64_t m_ulLocationID;
#ifdef __cplusplus
    operator u32_SteamPartyBeaconLocation_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamPartyBeaconLocation_t
{
    uint32_t m_eType;
    uint64_t m_ulLocationID;
#ifdef __cplusplus
    operator w32_SteamPartyBeaconLocation_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamPartyBeaconLocation_t w_SteamPartyBeaconLocation_t;
typedef u32_SteamPartyBeaconLocation_t u_SteamPartyBeaconLocation_t;
#endif
#ifdef __x86_64__
typedef w64_SteamPartyBeaconLocation_t w_SteamPartyBeaconLocation_t;
typedef u64_SteamPartyBeaconLocation_t u_SteamPartyBeaconLocation_t;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCRequestUGCDetailsResult_t_160
{
    w64_SteamUGCDetails_t_160 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9785[7];
#ifdef __cplusplus
    operator u64_SteamUGCRequestUGCDetailsResult_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCRequestUGCDetailsResult_t_160
{
    u64_SteamUGCDetails_t_160 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9773[3];
#ifdef __cplusplus
    operator w64_SteamUGCRequestUGCDetailsResult_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCRequestUGCDetailsResult_t_160
{
    w32_SteamUGCDetails_t_160 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9785[7];
#ifdef __cplusplus
    operator u32_SteamUGCRequestUGCDetailsResult_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCRequestUGCDetailsResult_t_160
{
    u32_SteamUGCDetails_t_160 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9773[3];
#ifdef __cplusplus
    operator w32_SteamUGCRequestUGCDetailsResult_t_160() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCRequestUGCDetailsResult_t_160 w_SteamUGCRequestUGCDetailsResult_t_160;
typedef u32_SteamUGCRequestUGCDetailsResult_t_160 u_SteamUGCRequestUGCDetailsResult_t_160;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCRequestUGCDetailsResult_t_160 w_SteamUGCRequestUGCDetailsResult_t_160;
typedef u64_SteamUGCRequestUGCDetailsResult_t_160 u_SteamUGCRequestUGCDetailsResult_t_160;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCRequestUGCDetailsResult_t_128x
{
    w64_SteamUGCDetails_t_128x m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9777[7];
#ifdef __cplusplus
    operator u64_SteamUGCRequestUGCDetailsResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCRequestUGCDetailsResult_t_128x
{
    u64_SteamUGCDetails_t_128x m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9765[3];
#ifdef __cplusplus
    operator w64_SteamUGCRequestUGCDetailsResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCRequestUGCDetailsResult_t_128x
{
    w32_SteamUGCDetails_t_128x m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9777[7];
#ifdef __cplusplus
    operator u32_SteamUGCRequestUGCDetailsResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCRequestUGCDetailsResult_t_128x
{
    u32_SteamUGCDetails_t_128x m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9765[3];
#ifdef __cplusplus
    operator w32_SteamUGCRequestUGCDetailsResult_t_128x() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCRequestUGCDetailsResult_t_128x w_SteamUGCRequestUGCDetailsResult_t_128x;
typedef u32_SteamUGCRequestUGCDetailsResult_t_128x u_SteamUGCRequestUGCDetailsResult_t_128x;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCRequestUGCDetailsResult_t_128x w_SteamUGCRequestUGCDetailsResult_t_128x;
typedef u64_SteamUGCRequestUGCDetailsResult_t_128x u_SteamUGCRequestUGCDetailsResult_t_128x;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCRequestUGCDetailsResult_t_129
{
    w64_SteamUGCDetails_t_126 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9769[7];
#ifdef __cplusplus
    operator u64_SteamUGCRequestUGCDetailsResult_t_129() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCRequestUGCDetailsResult_t_129
{
    u64_SteamUGCDetails_t_126 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9761[3];
#ifdef __cplusplus
    operator w64_SteamUGCRequestUGCDetailsResult_t_129() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCRequestUGCDetailsResult_t_129
{
    w32_SteamUGCDetails_t_126 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9769[7];
#ifdef __cplusplus
    operator u32_SteamUGCRequestUGCDetailsResult_t_129() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCRequestUGCDetailsResult_t_129
{
    u32_SteamUGCDetails_t_126 m_details;
    int8_t m_bCachedData;
    uint8_t __pad_9761[3];
#ifdef __cplusplus
    operator w32_SteamUGCRequestUGCDetailsResult_t_129() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCRequestUGCDetailsResult_t_129 w_SteamUGCRequestUGCDetailsResult_t_129;
typedef u32_SteamUGCRequestUGCDetailsResult_t_129 u_SteamUGCRequestUGCDetailsResult_t_129;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCRequestUGCDetailsResult_t_129 w_SteamUGCRequestUGCDetailsResult_t_129;
typedef u64_SteamUGCRequestUGCDetailsResult_t_129 u_SteamUGCRequestUGCDetailsResult_t_129;
#endif

#pragma pack( push, 8 )
struct w64_SteamUGCRequestUGCDetailsResult_t_126
{
    w64_SteamUGCDetails_t_126 m_details;
#ifdef __cplusplus
    operator u64_SteamUGCRequestUGCDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SteamUGCRequestUGCDetailsResult_t_126
{
    u64_SteamUGCDetails_t_126 m_details;
#ifdef __cplusplus
    operator w64_SteamUGCRequestUGCDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SteamUGCRequestUGCDetailsResult_t_126
{
    w32_SteamUGCDetails_t_126 m_details;
#ifdef __cplusplus
    operator u32_SteamUGCRequestUGCDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SteamUGCRequestUGCDetailsResult_t_126
{
    u32_SteamUGCDetails_t_126 m_details;
#ifdef __cplusplus
    operator w32_SteamUGCRequestUGCDetailsResult_t_126() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SteamUGCRequestUGCDetailsResult_t_126 w_SteamUGCRequestUGCDetailsResult_t_126;
typedef u32_SteamUGCRequestUGCDetailsResult_t_126 u_SteamUGCRequestUGCDetailsResult_t_126;
#endif
#ifdef __x86_64__
typedef w64_SteamUGCRequestUGCDetailsResult_t_126 w_SteamUGCRequestUGCDetailsResult_t_126;
typedef u64_SteamUGCRequestUGCDetailsResult_t_126 u_SteamUGCRequestUGCDetailsResult_t_126;
#endif

#pragma pack( push, 8 )
struct w64_SubmitPlayerResultResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t ullUniqueGameID;
    CSteamID steamIDPlayer;
#ifdef __cplusplus
    operator u64_SubmitPlayerResultResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u64_SubmitPlayerResultResultCallback_t
{
    uint32_t m_eResult;
    uint64_t ullUniqueGameID;
    CSteamID steamIDPlayer;
#ifdef __cplusplus
    operator w64_SubmitPlayerResultResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 8 )
struct w32_SubmitPlayerResultResultCallback_t
{
    uint32_t m_eResult;
    uint8_t __pad_4[4];
    uint64_t ullUniqueGameID;
    CSteamID steamIDPlayer;
#ifdef __cplusplus
    operator u32_SubmitPlayerResultResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#pragma pack( push, 4 )
struct u32_SubmitPlayerResultResultCallback_t
{
    uint32_t m_eResult;
    uint64_t ullUniqueGameID;
    CSteamID steamIDPlayer;
#ifdef __cplusplus
    operator w32_SubmitPlayerResultResultCallback_t() const;
#endif /* __cplusplus */
};
#pragma pack( pop )

#ifdef __i386__
typedef w32_SubmitPlayerResultResultCallback_t w_SubmitPlayerResultResultCallback_t;
typedef u32_SubmitPlayerResultResultCallback_t u_SubmitPlayerResultResultCallback_t;
#endif
#ifdef __x86_64__
typedef w64_SubmitPlayerResultResultCallback_t w_SubmitPlayerResultResultCallback_t;
typedef u64_SubmitPlayerResultResultCallback_t u_SubmitPlayerResultResultCallback_t;
#endif

