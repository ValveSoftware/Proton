struct winSteamServersConnected_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_SteamServersConnected_t_1(void *l, void *w);
struct winSteamServerConnectFailure_t_8 {
    EResult m_eResult;
    bool m_bStillRetrying;
}  __attribute__ ((ms_struct));
extern void cb_SteamServerConnectFailure_t_8(void *l, void *w);
struct winSteamServersDisconnected_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_SteamServersDisconnected_t_4(void *l, void *w);
struct winClientGameServerDeny_t_16 {
    uint32 m_uAppID;
    uint32 m_unGameServerIP;
    uint16 m_usGameServerPort;
    uint16 m_bSecure;
    uint32 m_uReason;
}  __attribute__ ((ms_struct));
extern void cb_ClientGameServerDeny_t_16(void *l, void *w);
struct winIPCFailure_t_1 {
    uint8 m_eFailureType;
}  __attribute__ ((ms_struct));
extern void cb_IPCFailure_t_1(void *l, void *w);
struct winLicensesUpdated_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_LicensesUpdated_t_1(void *l, void *w);
struct winValidateAuthTicketResponse_t_20 {
    CSteamID m_SteamID;
    EAuthSessionResponse m_eAuthSessionResponse;
    CSteamID m_OwnerSteamID;
}  __attribute__ ((ms_struct));
extern void cb_ValidateAuthTicketResponse_t_20(void *l, void *w);
struct winMicroTxnAuthorizationResponse_t_16 {
    uint32 m_unAppID;
    uint64 m_ulOrderID;
    uint8 m_bAuthorized;
}  __attribute__ ((ms_struct));
extern void cb_MicroTxnAuthorizationResponse_t_16(void *l, void *w);
struct winEncryptedAppTicketResponse_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_EncryptedAppTicketResponse_t_4(void *l, void *w);
struct winGetAuthSessionTicketResponse_t_8 {
    HAuthTicket m_hAuthTicket;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_GetAuthSessionTicketResponse_t_8(void *l, void *w);
struct winGameWebCallback_t_256 {
    char m_szURL[256];
}  __attribute__ ((ms_struct));
extern void cb_GameWebCallback_t_256(void *l, void *w);
struct winStoreAuthURLResponse_t_512 {
    char m_szURL[512];
}  __attribute__ ((ms_struct));
extern void cb_StoreAuthURLResponse_t_512(void *l, void *w);
struct winPersonaStateChange_t_12 {
    uint64 m_ulSteamID;
    int m_nChangeFlags;
}  __attribute__ ((ms_struct));
extern void cb_PersonaStateChange_t_12(void *l, void *w);
struct winGameOverlayActivated_t_1 {
    uint8 m_bActive;
}  __attribute__ ((ms_struct));
extern void cb_GameOverlayActivated_t_1(void *l, void *w);
struct winGameServerChangeRequested_t_128 {
    char m_rgchServer[64];
    char m_rgchPassword[64];
}  __attribute__ ((ms_struct));
extern void cb_GameServerChangeRequested_t_128(void *l, void *w);
struct winGameLobbyJoinRequested_t_16 {
    CSteamID m_steamIDLobby;
    CSteamID m_steamIDFriend;
}  __attribute__ ((ms_struct));
extern void cb_GameLobbyJoinRequested_t_16(void *l, void *w);
struct winAvatarImageLoaded_t_20 {
    CSteamID m_steamID;
    int m_iImage;
    int m_iWide;
    int m_iTall;
}  __attribute__ ((ms_struct));
extern void cb_AvatarImageLoaded_t_20(void *l, void *w);
struct winClanOfficerListResponse_t_16 {
    CSteamID m_steamIDClan;
    int m_cOfficers;
    uint8 m_bSuccess;
}  __attribute__ ((ms_struct));
extern void cb_ClanOfficerListResponse_t_16(void *l, void *w);
struct winFriendRichPresenceUpdate_t_12 {
    CSteamID m_steamIDFriend;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_FriendRichPresenceUpdate_t_12(void *l, void *w);
struct winGameRichPresenceJoinRequested_t_264 {
    CSteamID m_steamIDFriend;
    char m_rgchConnect[256];
}  __attribute__ ((ms_struct));
extern void cb_GameRichPresenceJoinRequested_t_264(void *l, void *w);
struct winGameConnectedClanChatMsg_t_20 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    int m_iMessageID;
}  __attribute__ ((ms_struct));
extern void cb_GameConnectedClanChatMsg_t_20(void *l, void *w);
struct winGameConnectedChatJoin_t_16 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
extern void cb_GameConnectedChatJoin_t_16(void *l, void *w);
struct winGameConnectedChatLeave_t_18 {
    CSteamID m_steamIDClanChat;
    CSteamID m_steamIDUser;
    bool m_bKicked;
    bool m_bDropped;
}  __attribute__ ((ms_struct));
extern void cb_GameConnectedChatLeave_t_18(void *l, void *w);
struct winDownloadClanActivityCountsResult_t_1 {
    bool m_bSuccess;
}  __attribute__ ((ms_struct));
extern void cb_DownloadClanActivityCountsResult_t_1(void *l, void *w);
struct winJoinClanChatRoomCompletionResult_t_12 {
    CSteamID m_steamIDClanChat;
    EChatRoomEnterResponse m_eChatRoomEnterResponse;
}  __attribute__ ((ms_struct));
extern void cb_JoinClanChatRoomCompletionResult_t_12(void *l, void *w);
struct winGameConnectedFriendChatMsg_t_12 {
    CSteamID m_steamIDUser;
    int m_iMessageID;
}  __attribute__ ((ms_struct));
extern void cb_GameConnectedFriendChatMsg_t_12(void *l, void *w);
struct winFriendsGetFollowerCount_t_16 {
    EResult m_eResult;
    CSteamID m_steamID;
    int m_nCount;
}  __attribute__ ((ms_struct));
extern void cb_FriendsGetFollowerCount_t_16(void *l, void *w);
struct winFriendsIsFollowing_t_16 {
    EResult m_eResult;
    CSteamID m_steamID;
    bool m_bIsFollowing;
}  __attribute__ ((ms_struct));
extern void cb_FriendsIsFollowing_t_16(void *l, void *w);
struct winFriendsEnumerateFollowingList_t_412 {
    EResult m_eResult;
    CSteamID m_rgSteamID[50];
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
}  __attribute__ ((ms_struct));
extern void cb_FriendsEnumerateFollowingList_t_412(void *l, void *w);
struct winSetPersonaNameResponse_t_8 {
    bool m_bSuccess;
    bool m_bLocalSuccess;
    EResult m_result;
}  __attribute__ ((ms_struct));
extern void cb_SetPersonaNameResponse_t_8(void *l, void *w);
struct winIPCountry_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_IPCountry_t_1(void *l, void *w);
struct winLowBatteryPower_t_1 {
    uint8 m_nMinutesBatteryLeft;
}  __attribute__ ((ms_struct));
extern void cb_LowBatteryPower_t_1(void *l, void *w);
struct winSteamAPICallCompleted_t_16 {
    SteamAPICall_t m_hAsyncCall;
    int m_iCallback;
    uint32 m_cubParam;
}  __attribute__ ((ms_struct));
extern void cb_SteamAPICallCompleted_t_16(void *l, void *w);
struct winSteamShutdown_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_SteamShutdown_t_1(void *l, void *w);
struct winCheckFileSignature_t_4 {
    ECheckFileSignature m_eCheckFileSignature;
}  __attribute__ ((ms_struct));
extern void cb_CheckFileSignature_t_4(void *l, void *w);
struct winGamepadTextInputDismissed_t_8 {
    bool m_bSubmitted;
    uint32 m_unSubmittedText;
}  __attribute__ ((ms_struct));
extern void cb_GamepadTextInputDismissed_t_8(void *l, void *w);
struct winFavoritesListChanged_t_28 {
    uint32 m_nIP;
    uint32 m_nQueryPort;
    uint32 m_nConnPort;
    uint32 m_nAppID;
    uint32 m_nFlags;
    bool m_bAdd;
    AccountID_t m_unAccountId;
}  __attribute__ ((ms_struct));
extern void cb_FavoritesListChanged_t_28(void *l, void *w);
struct winLobbyInvite_t_24 {
    uint64 m_ulSteamIDUser;
    uint64 m_ulSteamIDLobby;
    uint64 m_ulGameID;
}  __attribute__ ((ms_struct));
extern void cb_LobbyInvite_t_24(void *l, void *w);
struct winLobbyEnter_t_20 {
    uint64 m_ulSteamIDLobby;
    uint32 m_rgfChatPermissions;
    bool m_bLocked;
    uint32 m_EChatRoomEnterResponse;
}  __attribute__ ((ms_struct));
extern void cb_LobbyEnter_t_20(void *l, void *w);
struct winLobbyDataUpdate_t_20 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDMember;
    uint8 m_bSuccess;
}  __attribute__ ((ms_struct));
extern void cb_LobbyDataUpdate_t_20(void *l, void *w);
struct winLobbyChatUpdate_t_28 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDUserChanged;
    uint64 m_ulSteamIDMakingChange;
    uint32 m_rgfChatMemberStateChange;
}  __attribute__ ((ms_struct));
extern void cb_LobbyChatUpdate_t_28(void *l, void *w);
struct winLobbyChatMsg_t_24 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDUser;
    uint8 m_eChatEntryType;
    uint32 m_iChatID;
}  __attribute__ ((ms_struct));
extern void cb_LobbyChatMsg_t_24(void *l, void *w);
struct winLobbyGameCreated_t_24 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDGameServer;
    uint32 m_unIP;
    uint16 m_usPort;
}  __attribute__ ((ms_struct));
extern void cb_LobbyGameCreated_t_24(void *l, void *w);
struct winLobbyMatchList_t_4 {
    uint32 m_nLobbiesMatching;
}  __attribute__ ((ms_struct));
extern void cb_LobbyMatchList_t_4(void *l, void *w);
struct winLobbyKicked_t_20 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDAdmin;
    uint8 m_bKickedDueToDisconnect;
}  __attribute__ ((ms_struct));
extern void cb_LobbyKicked_t_20(void *l, void *w);
struct winLobbyCreated_t_12 {
    EResult m_eResult;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
extern void cb_LobbyCreated_t_12(void *l, void *w);
struct winPSNGameBootInviteResult_t_9 {
    bool m_bGameBootInviteExists;
    CSteamID m_steamIDLobby;
}  __attribute__ ((ms_struct));
extern void cb_PSNGameBootInviteResult_t_9(void *l, void *w);
struct winFavoritesListAccountsUpdated_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_FavoritesListAccountsUpdated_t_4(void *l, void *w);
struct winRemoteStorageAppSyncedClient_t_12 {
    AppId_t m_nAppID;
    EResult m_eResult;
    int m_unNumDownloads;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageAppSyncedClient_t_12(void *l, void *w);
struct winRemoteStorageAppSyncedServer_t_12 {
    AppId_t m_nAppID;
    EResult m_eResult;
    int m_unNumUploads;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageAppSyncedServer_t_12(void *l, void *w);
struct winRemoteStorageAppSyncProgress_t_280 {
    char m_rgchCurrentFile[260];
    AppId_t m_nAppID;
    uint32 m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageAppSyncProgress_t_280(void *l, void *w);
struct winRemoteStorageAppSyncStatusCheck_t_8 {
    AppId_t m_nAppID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageAppSyncStatusCheck_t_8(void *l, void *w);
struct winRemoteStorageFileShareResult_t_272 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    char m_rgchFilename[260];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageFileShareResult_t_272(void *l, void *w);
struct winRemoteStoragePublishFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishFileResult_t_16(void *l, void *w);
struct winRemoteStorageDeletePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageDeletePublishedFileResult_t_12(void *l, void *w);
struct winRemoteStorageEnumerateUserPublishedFilesResult_t_412 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumerateUserPublishedFilesResult_t_412(void *l, void *w);
struct winRemoteStorageSubscribePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageSubscribePublishedFileResult_t_12(void *l, void *w);
struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_612 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeSubscribed[50];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumerateUserSubscribedFilesResult_t_612(void *l, void *w);
struct winRemoteStorageUnsubscribePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUnsubscribePublishedFileResult_t_12(void *l, void *w);
struct winRemoteStorageUpdatePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUpdatePublishedFileResult_t_16(void *l, void *w);
struct winRemoteStorageDownloadUGCResult_t_288 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char m_pchFileName[260];
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageDownloadUGCResult_t_288(void *l, void *w);
struct winRemoteStorageGetPublishedFileDetailsResult_t_9748 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    EWorkshopFileType m_eFileType;
    bool m_bAcceptedForUse;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9748(void *l, void *w);
struct winRemoteStorageEnumerateWorkshopFilesResult_t_620 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
    AppId_t m_nAppId;
    uint32 m_unStartIndex;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumerateWorkshopFilesResult_t_620(void *l, void *w);
struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_28 {
    EResult m_eResult;
    PublishedFileId_t m_unPublishedFileId;
    int32 m_nVotesFor;
    int32 m_nVotesAgainst;
    int32 m_nReports;
    float m_fScore;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageGetPublishedItemVoteDetailsResult_t_28(void *l, void *w);
struct winRemoteStoragePublishedFileSubscribed_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishedFileSubscribed_t_12(void *l, void *w);
struct winRemoteStoragePublishedFileUnsubscribed_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishedFileUnsubscribed_t_12(void *l, void *w);
struct winRemoteStoragePublishedFileDeleted_t_12 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishedFileDeleted_t_12(void *l, void *w);
struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUpdateUserPublishedItemVoteResult_t_12(void *l, void *w);
struct winRemoteStorageUserVoteDetails_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopVote m_eVote;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUserVoteDetails_t_16(void *l, void *w);
struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_412(void *l, void *w);
struct winRemoteStorageSetUserPublishedFileActionResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopFileAction m_eAction;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageSetUserPublishedFileActionResult_t_16(void *l, void *w);
struct winRemoteStorageEnumeratePublishedFilesByUserActionResult_t_616 {
    EResult m_eResult;
    EWorkshopFileAction m_eAction;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeUpdated[50];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumeratePublishedFilesByUserActionResult_t_616(void *l, void *w);
struct winRemoteStoragePublishFileProgress_t_12 {
    double m_dPercentFile;
    bool m_bPreview;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishFileProgress_t_12(void *l, void *w);
struct winRemoteStoragePublishedFileUpdated_t_20 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
    uint64 m_ulUnused;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishedFileUpdated_t_20(void *l, void *w);
struct winRemoteStorageFileWriteAsyncComplete_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageFileWriteAsyncComplete_t_4(void *l, void *w);
struct winRemoteStorageFileReadAsyncComplete_t_20 {
    SteamAPICall_t m_hFileReadAsync;
    EResult m_eResult;
    uint32 m_nOffset;
    uint32 m_cubRead;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageFileReadAsyncComplete_t_20(void *l, void *w);
struct winUserStatsReceived_t_20 {
    uint64 m_nGameID;
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
extern void cb_UserStatsReceived_t_20(void *l, void *w);
struct winUserStatsStored_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_UserStatsStored_t_12(void *l, void *w);
struct winUserAchievementStored_t_148 {
    uint64 m_nGameID;
    bool m_bGroupAchievement;
    char m_rgchAchievementName[128];
    uint32 m_nCurProgress;
    uint32 m_nMaxProgress;
}  __attribute__ ((ms_struct));
extern void cb_UserAchievementStored_t_148(void *l, void *w);
struct winLeaderboardFindResult_t_12 {
    SteamLeaderboard_t m_hSteamLeaderboard;
    uint8 m_bLeaderboardFound;
}  __attribute__ ((ms_struct));
extern void cb_LeaderboardFindResult_t_12(void *l, void *w);
struct winLeaderboardScoresDownloaded_t_20 {
    SteamLeaderboard_t m_hSteamLeaderboard;
    SteamLeaderboardEntries_t m_hSteamLeaderboardEntries;
    int m_cEntryCount;
}  __attribute__ ((ms_struct));
extern void cb_LeaderboardScoresDownloaded_t_20(void *l, void *w);
struct winLeaderboardScoreUploaded_t_28 {
    uint8 m_bSuccess;
    SteamLeaderboard_t m_hSteamLeaderboard;
    int32 m_nScore;
    uint8 m_bScoreChanged;
    int m_nGlobalRankNew;
    int m_nGlobalRankPrevious;
}  __attribute__ ((ms_struct));
extern void cb_LeaderboardScoreUploaded_t_28(void *l, void *w);
struct winNumberOfCurrentPlayers_t_8 {
    uint8 m_bSuccess;
    int32 m_cPlayers;
}  __attribute__ ((ms_struct));
extern void cb_NumberOfCurrentPlayers_t_8(void *l, void *w);
struct winUserStatsUnloaded_t_8 {
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
extern void cb_UserStatsUnloaded_t_8(void *l, void *w);
struct winUserAchievementIconFetched_t_144 {
    CGameID m_nGameID;
    char m_rgchAchievementName[128];
    bool m_bAchieved;
    int m_nIconHandle;
}  __attribute__ ((ms_struct));
extern void cb_UserAchievementIconFetched_t_144(void *l, void *w);
struct winGlobalAchievementPercentagesReady_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_GlobalAchievementPercentagesReady_t_12(void *l, void *w);
struct winLeaderboardUGCSet_t_12 {
    EResult m_eResult;
    SteamLeaderboard_t m_hSteamLeaderboard;
}  __attribute__ ((ms_struct));
extern void cb_LeaderboardUGCSet_t_12(void *l, void *w);
struct winPS3TrophiesInstalled_t_20 {
    uint64 m_nGameID;
    EResult m_eResult;
    uint64 m_ulRequiredDiskSpace;
}  __attribute__ ((ms_struct));
extern void cb_PS3TrophiesInstalled_t_20(void *l, void *w);
struct winGlobalStatsReceived_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_GlobalStatsReceived_t_12(void *l, void *w);
struct winDlcInstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_DlcInstalled_t_4(void *l, void *w);
struct winRegisterActivationCodeResponse_t_8 {
    ERegisterActivationCodeResult m_eResult;
    uint32 m_unPackageRegistered;
}  __attribute__ ((ms_struct));
extern void cb_RegisterActivationCodeResponse_t_8(void *l, void *w);
struct winNewLaunchQueryParameters_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_NewLaunchQueryParameters_t_1(void *l, void *w);
struct winAppProofOfPurchaseKeyResponse_t_252 {
    EResult m_eResult;
    uint32 m_nAppID;
    uint32 m_cchKeyLength;
    char m_rgchKey[240];
}  __attribute__ ((ms_struct));
extern void cb_AppProofOfPurchaseKeyResponse_t_252(void *l, void *w);
struct winFileDetailsResult_t_36 {
    EResult m_eResult;
    uint64 m_ulFileSize;
    uint8 m_FileSHA[20];
    uint32 m_unFlags;
}  __attribute__ ((ms_struct));
extern void cb_FileDetailsResult_t_36(void *l, void *w);
struct winP2PSessionRequest_t_8 {
    CSteamID m_steamIDRemote;
}  __attribute__ ((ms_struct));
extern void cb_P2PSessionRequest_t_8(void *l, void *w);
struct winP2PSessionConnectFail_t_9 {
    CSteamID m_steamIDRemote;
    uint8 m_eP2PSessionError;
}  __attribute__ ((ms_struct));
extern void cb_P2PSessionConnectFail_t_9(void *l, void *w);
struct winSocketStatusCallback_t_20 {
    SNetSocket_t m_hSocket;
    SNetListenSocket_t m_hListenSocket;
    CSteamID m_steamIDRemote;
    int m_eSNetSocketState;
}  __attribute__ ((ms_struct));
extern void cb_SocketStatusCallback_t_20(void *l, void *w);
struct winScreenshotReady_t_8 {
    ScreenshotHandle m_hLocal;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_ScreenshotReady_t_8(void *l, void *w);
struct winScreenshotRequested_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_ScreenshotRequested_t_1(void *l, void *w);
struct winPlaybackStatusHasChanged_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_PlaybackStatusHasChanged_t_1(void *l, void *w);
struct winVolumeHasChanged_t_4 {
    float m_flNewVolume;
}  __attribute__ ((ms_struct));
extern void cb_VolumeHasChanged_t_4(void *l, void *w);
struct winMusicPlayerRemoteWillActivate_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerRemoteWillActivate_t_1(void *l, void *w);
struct winMusicPlayerRemoteWillDeactivate_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerRemoteWillDeactivate_t_1(void *l, void *w);
struct winMusicPlayerRemoteToFront_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerRemoteToFront_t_1(void *l, void *w);
struct winMusicPlayerWillQuit_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWillQuit_t_1(void *l, void *w);
struct winMusicPlayerWantsPlay_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsPlay_t_1(void *l, void *w);
struct winMusicPlayerWantsPause_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsPause_t_1(void *l, void *w);
struct winMusicPlayerWantsPlayPrevious_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsPlayPrevious_t_1(void *l, void *w);
struct winMusicPlayerWantsPlayNext_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsPlayNext_t_1(void *l, void *w);
struct winMusicPlayerWantsShuffled_t_1 {
    bool m_bShuffled;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsShuffled_t_1(void *l, void *w);
struct winMusicPlayerWantsLooped_t_1 {
    bool m_bLooped;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsLooped_t_1(void *l, void *w);
struct winMusicPlayerWantsVolume_t_4 {
    float m_flNewVolume;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsVolume_t_4(void *l, void *w);
struct winMusicPlayerSelectsQueueEntry_t_4 {
    int nID;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerSelectsQueueEntry_t_4(void *l, void *w);
struct winMusicPlayerSelectsPlaylistEntry_t_4 {
    int nID;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerSelectsPlaylistEntry_t_4(void *l, void *w);
struct winMusicPlayerWantsPlayingRepeatStatus_t_4 {
    int m_nPlayingRepeatStatus;
}  __attribute__ ((ms_struct));
extern void cb_MusicPlayerWantsPlayingRepeatStatus_t_4(void *l, void *w);
struct winHTTPRequestCompleted_t_24 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
    uint32 m_unBodySize;
}  __attribute__ ((ms_struct));
extern void cb_HTTPRequestCompleted_t_24(void *l, void *w);
struct winHTTPRequestHeadersReceived_t_12 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
}  __attribute__ ((ms_struct));
extern void cb_HTTPRequestHeadersReceived_t_12(void *l, void *w);
struct winHTTPRequestDataReceived_t_20 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    uint32 m_cOffset;
    uint32 m_cBytesReceived;
}  __attribute__ ((ms_struct));
extern void cb_HTTPRequestDataReceived_t_20(void *l, void *w);
struct winSteamUGCQueryCompleted_t_24 {
    UGCQueryHandle_t m_handle;
    EResult m_eResult;
    uint32 m_unNumResultsReturned;
    uint32 m_unTotalMatchingResults;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
extern void cb_SteamUGCQueryCompleted_t_24(void *l, void *w);
struct winSteamUGCRequestUGCDetailsResult_t_9768 {
    SteamUGCDetails_t m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
extern void cb_SteamUGCRequestUGCDetailsResult_t_9768(void *l, void *w);
struct winCreateItemResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
extern void cb_CreateItemResult_t_16(void *l, void *w);
struct winSubmitItemUpdateResult_t_16 {
    EResult m_eResult;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_SubmitItemUpdateResult_t_16(void *l, void *w);
struct winItemInstalled_t_12 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_ItemInstalled_t_12(void *l, void *w);
struct winDownloadItemResult_t_16 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_DownloadItemResult_t_16(void *l, void *w);
struct winUserFavoriteItemsListChanged_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bWasAddRequest;
}  __attribute__ ((ms_struct));
extern void cb_UserFavoriteItemsListChanged_t_16(void *l, void *w);
struct winSetUserItemVoteResult_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bVoteUp;
}  __attribute__ ((ms_struct));
extern void cb_SetUserItemVoteResult_t_16(void *l, void *w);
struct winGetUserItemVoteResult_t_16 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    bool m_bVotedUp;
    bool m_bVotedDown;
    bool m_bVoteSkipped;
}  __attribute__ ((ms_struct));
extern void cb_GetUserItemVoteResult_t_16(void *l, void *w);
struct winStartPlaytimeTrackingResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_StartPlaytimeTrackingResult_t_4(void *l, void *w);
struct winStopPlaytimeTrackingResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_StopPlaytimeTrackingResult_t_4(void *l, void *w);
struct winAddUGCDependencyResult_t_20 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_AddUGCDependencyResult_t_20(void *l, void *w);
struct winRemoveUGCDependencyResult_t_20 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoveUGCDependencyResult_t_20(void *l, void *w);
struct winAddAppDependencyResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_AddAppDependencyResult_t_16(void *l, void *w);
struct winRemoveAppDependencyResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_RemoveAppDependencyResult_t_16(void *l, void *w);
struct winGetAppDependenciesResult_t_148 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_rgAppIDs[32];
    uint32 m_nNumAppDependencies;
    uint32 m_nTotalNumAppDependencies;
}  __attribute__ ((ms_struct));
extern void cb_GetAppDependenciesResult_t_148(void *l, void *w);
struct winDeleteItemResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_DeleteItemResult_t_12(void *l, void *w);
struct winSteamAppInstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_SteamAppInstalled_t_4(void *l, void *w);
struct winSteamAppUninstalled_t_4 {
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
extern void cb_SteamAppUninstalled_t_4(void *l, void *w);
struct winHTML_BrowserReady_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_BrowserReady_t_4(void *l, void *w);
struct winHTML_NeedsPaint_t_48 {
    HHTMLBrowser unBrowserHandle;
    const char * pBGRA;
    uint32 unWide;
    uint32 unTall;
    uint32 unUpdateX;
    uint32 unUpdateY;
    uint32 unUpdateWide;
    uint32 unUpdateTall;
    uint32 unScrollX;
    uint32 unScrollY;
    float flPageScale;
    uint32 unPageSerial;
}  __attribute__ ((ms_struct));
extern void cb_HTML_NeedsPaint_t_48(void *l, void *w);
struct winHTML_StartRequest_t_20 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchTarget;
    const char * pchPostData;
    bool bIsRedirect;
}  __attribute__ ((ms_struct));
extern void cb_HTML_StartRequest_t_20(void *l, void *w);
struct winHTML_CloseBrowser_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_CloseBrowser_t_4(void *l, void *w);
struct winHTML_URLChanged_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPostData;
    bool bIsRedirect;
    const char * pchPageTitle;
    bool bNewNavigation;
}  __attribute__ ((ms_struct));
extern void cb_HTML_URLChanged_t_24(void *l, void *w);
struct winHTML_FinishedRequest_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPageTitle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_FinishedRequest_t_12(void *l, void *w);
struct winHTML_OpenLinkInNewTab_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
}  __attribute__ ((ms_struct));
extern void cb_HTML_OpenLinkInNewTab_t_8(void *l, void *w);
struct winHTML_ChangedTitle_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_ChangedTitle_t_8(void *l, void *w);
struct winHTML_SearchResults_t_12 {
    HHTMLBrowser unBrowserHandle;
    uint32 unResults;
    uint32 unCurrentMatch;
}  __attribute__ ((ms_struct));
extern void cb_HTML_SearchResults_t_12(void *l, void *w);
struct winHTML_CanGoBackAndForward_t_8 {
    HHTMLBrowser unBrowserHandle;
    bool bCanGoBack;
    bool bCanGoForward;
}  __attribute__ ((ms_struct));
extern void cb_HTML_CanGoBackAndForward_t_8(void *l, void *w);
struct winHTML_HorizontalScroll_t_24 {
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
}  __attribute__ ((ms_struct));
extern void cb_HTML_HorizontalScroll_t_24(void *l, void *w);
struct winHTML_VerticalScroll_t_24 {
    HHTMLBrowser unBrowserHandle;
    uint32 unScrollMax;
    uint32 unScrollCurrent;
    float flPageScale;
    bool bVisible;
    uint32 unPageSize;
}  __attribute__ ((ms_struct));
extern void cb_HTML_VerticalScroll_t_24(void *l, void *w);
struct winHTML_LinkAtPosition_t_20 {
    HHTMLBrowser unBrowserHandle;
    uint32 x;
    uint32 y;
    const char * pchURL;
    bool bInput;
    bool bLiveLink;
}  __attribute__ ((ms_struct));
extern void cb_HTML_LinkAtPosition_t_20(void *l, void *w);
struct winHTML_JSAlert_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
extern void cb_HTML_JSAlert_t_8(void *l, void *w);
struct winHTML_JSConfirm_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
extern void cb_HTML_JSConfirm_t_8(void *l, void *w);
struct winHTML_FileOpenDialog_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
    const char * pchInitialFile;
}  __attribute__ ((ms_struct));
extern void cb_HTML_FileOpenDialog_t_12(void *l, void *w);
struct winHTML_NewWindow_t_28 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
    HHTMLBrowser unNewWindow_BrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_NewWindow_t_28(void *l, void *w);
struct winHTML_SetCursor_t_8 {
    HHTMLBrowser unBrowserHandle;
    uint32 eMouseCursor;
}  __attribute__ ((ms_struct));
extern void cb_HTML_SetCursor_t_8(void *l, void *w);
struct winHTML_StatusText_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
extern void cb_HTML_StatusText_t_8(void *l, void *w);
struct winHTML_ShowToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
extern void cb_HTML_ShowToolTip_t_8(void *l, void *w);
struct winHTML_UpdateToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
extern void cb_HTML_UpdateToolTip_t_8(void *l, void *w);
struct winHTML_HideToolTip_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_HideToolTip_t_4(void *l, void *w);
struct winHTML_BrowserRestarted_t_8 {
    HHTMLBrowser unBrowserHandle;
    HHTMLBrowser unOldBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_BrowserRestarted_t_8(void *l, void *w);
struct winSteamInventoryResultReady_t_8 {
    SteamInventoryResult_t m_handle;
    EResult m_result;
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryResultReady_t_8(void *l, void *w);
struct winSteamInventoryFullUpdate_t_4 {
    SteamInventoryResult_t m_handle;
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryFullUpdate_t_4(void *l, void *w);
struct winSteamInventoryDefinitionUpdate_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryDefinitionUpdate_t_1(void *l, void *w);
struct winSteamInventoryEligiblePromoItemDefIDs_t_20 {
    EResult m_result;
    CSteamID m_steamID;
    int m_numEligiblePromoItemDefs;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryEligiblePromoItemDefIDs_t_20(void *l, void *w);
struct winSteamInventoryStartPurchaseResult_t_20 {
    EResult m_result;
    uint64 m_ulOrderID;
    uint64 m_ulTransID;
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryStartPurchaseResult_t_20(void *l, void *w);
struct winSteamInventoryRequestPricesResult_t_8 {
    EResult m_result;
    char m_rgchCurrency[4];
}  __attribute__ ((ms_struct));
extern void cb_SteamInventoryRequestPricesResult_t_8(void *l, void *w);
struct winBroadcastUploadStart_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_BroadcastUploadStart_t_1(void *l, void *w);
struct winBroadcastUploadStop_t_4 {
    EBroadcastUploadResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_BroadcastUploadStop_t_4(void *l, void *w);
struct winGetVideoURLResult_t_264 {
    EResult m_eResult;
    AppId_t m_unVideoAppID;
    char m_rgchURL[256];
}  __attribute__ ((ms_struct));
extern void cb_GetVideoURLResult_t_264(void *l, void *w);
struct winGetOPFSettingsResult_t_8 {
    EResult m_eResult;
    AppId_t m_unVideoAppID;
}  __attribute__ ((ms_struct));
extern void cb_GetOPFSettingsResult_t_8(void *l, void *w);
struct winSteamParentalSettingsChanged_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_SteamParentalSettingsChanged_t_1(void *l, void *w);
struct winGSClientApprove_t_16 {
    CSteamID m_SteamID;
    CSteamID m_OwnerSteamID;
}  __attribute__ ((ms_struct));
extern void cb_GSClientApprove_t_16(void *l, void *w);
struct winGSClientDeny_t_140 {
    CSteamID m_SteamID;
    EDenyReason m_eDenyReason;
    char m_rgchOptionalText[128];
}  __attribute__ ((ms_struct));
extern void cb_GSClientDeny_t_140(void *l, void *w);
struct winGSClientKick_t_12 {
    CSteamID m_SteamID;
    EDenyReason m_eDenyReason;
}  __attribute__ ((ms_struct));
extern void cb_GSClientKick_t_12(void *l, void *w);
struct winGSClientAchievementStatus_t_140 {
    uint64 m_SteamID;
    char m_pchAchievement[128];
    bool m_bUnlocked;
}  __attribute__ ((ms_struct));
extern void cb_GSClientAchievementStatus_t_140(void *l, void *w);
struct winGSPolicyResponse_t_1 {
    uint8 m_bSecure;
}  __attribute__ ((ms_struct));
extern void cb_GSPolicyResponse_t_1(void *l, void *w);
struct winGSGameplayStats_t_16 {
    EResult m_eResult;
    int32 m_nRank;
    uint32 m_unTotalConnects;
    uint32 m_unTotalMinutesPlayed;
}  __attribute__ ((ms_struct));
extern void cb_GSGameplayStats_t_16(void *l, void *w);
struct winGSClientGroupStatus_t_18 {
    CSteamID m_SteamIDUser;
    CSteamID m_SteamIDGroup;
    bool m_bMember;
    bool m_bOfficer;
}  __attribute__ ((ms_struct));
extern void cb_GSClientGroupStatus_t_18(void *l, void *w);
struct winGSReputation_t_32 {
    EResult m_eResult;
    uint32 m_unReputationScore;
    bool m_bBanned;
    uint32 m_unBannedIP;
    uint16 m_usBannedPort;
    uint64 m_ulBannedGameID;
    uint32 m_unBanExpires;
}  __attribute__ ((ms_struct));
extern void cb_GSReputation_t_32(void *l, void *w);
struct winAssociateWithClanResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_AssociateWithClanResult_t_4(void *l, void *w);
struct winComputeNewPlayerCompatibilityResult_t_24 {
    EResult m_eResult;
    int m_cPlayersThatDontLikeCandidate;
    int m_cPlayersThatCandidateDoesntLike;
    int m_cClanPlayersThatDontLikeCandidate;
    CSteamID m_SteamIDCandidate;
}  __attribute__ ((ms_struct));
extern void cb_ComputeNewPlayerCompatibilityResult_t_24(void *l, void *w);
struct winGSStatsReceived_t_12 {
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
extern void cb_GSStatsReceived_t_12(void *l, void *w);
struct winGSStatsStored_t_12 {
    EResult m_eResult;
    CSteamID m_steamIDUser;
}  __attribute__ ((ms_struct));
extern void cb_GSStatsStored_t_12(void *l, void *w);
struct winGCMessageAvailable_t_4 {
    uint32 m_nMessageSize;
}  __attribute__ ((ms_struct));
extern void cb_GCMessageAvailable_t_4(void *l, void *w);
struct winGCMessageFailed_t_1 {
}  __attribute__ ((ms_struct));
extern void cb_GCMessageFailed_t_1(void *l, void *w);
struct winSteamUnifiedMessagesSendMethodResult_t_24 {
    ClientUnifiedMessageHandle m_hHandle;
    uint64 m_unContext;
    EResult m_eResult;
    uint32 m_unResponseSize;
}  __attribute__ ((ms_struct));
extern void cb_SteamUnifiedMessagesSendMethodResult_t_24(void *l, void *w);
struct winSubmitItemUpdateResult_t_8 {
    EResult m_eResult;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
extern void cb_SubmitItemUpdateResult_t_8(void *l, void *w);
struct winRemoteStorageConflictResolution_t_8 {
    AppId_t m_nAppID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageConflictResolution_t_8(void *l, void *w);
struct winSteamAPICallCompleted_t_8 {
    SteamAPICall_t m_hAsyncCall;
}  __attribute__ ((ms_struct));
extern void cb_SteamAPICallCompleted_t_8(void *l, void *w);
struct winAppProofOfPurchaseKeyResponse_t_72 {
    EResult m_eResult;
    uint32 m_nAppID;
    char m_rgchKey[64];
}  __attribute__ ((ms_struct));
extern void cb_AppProofOfPurchaseKeyResponse_t_72(void *l, void *w);
struct winSteamServerConnectFailure_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_SteamServerConnectFailure_t_4(void *l, void *w);
struct winHTTPRequestCompleted_t_20 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
}  __attribute__ ((ms_struct));
extern void cb_HTTPRequestCompleted_t_20(void *l, void *w);
struct winHTML_ComboNeedsPaint_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pBGRA;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
extern void cb_HTML_ComboNeedsPaint_t_16(void *l, void *w);
struct winHTML_ShowPopup_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_ShowPopup_t_4(void *l, void *w);
struct winHTML_HidePopup_t_4 {
    HHTMLBrowser unBrowserHandle;
}  __attribute__ ((ms_struct));
extern void cb_HTML_HidePopup_t_4(void *l, void *w);
struct winHTML_SizePopup_t_20 {
    HHTMLBrowser unBrowserHandle;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
extern void cb_HTML_SizePopup_t_20(void *l, void *w);
struct winHTML_NewWindow_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
}  __attribute__ ((ms_struct));
extern void cb_HTML_NewWindow_t_24(void *l, void *w);
struct winFavoritesListChanged_t_24 {
    uint32 m_nIP;
    uint32 m_nQueryPort;
    uint32 m_nConnPort;
    uint32 m_nAppID;
    uint32 m_nFlags;
    bool m_bAdd;
}  __attribute__ ((ms_struct));
extern void cb_FavoritesListChanged_t_24(void *l, void *w);
struct winRemoteStorageFileShareResult_t_12 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageFileShareResult_t_12(void *l, void *w);
struct winSteamUGCRequestUGCDetailsResult_t_9760 {
    SteamUGCDetails_t m_details;
}  __attribute__ ((ms_struct));
extern void cb_SteamUGCRequestUGCDetailsResult_t_9760(void *l, void *w);
struct winValidateAuthTicketResponse_t_12 {
    CSteamID m_SteamID;
    EAuthSessionResponse m_eAuthSessionResponse;
}  __attribute__ ((ms_struct));
extern void cb_ValidateAuthTicketResponse_t_12(void *l, void *w);
struct winRemoteStorageGetPublishedFileDetailsResult_t_9744 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    EWorkshopFileType m_eFileType;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9744(void *l, void *w);
struct winGSClientApprove_t_8 {
    CSteamID m_SteamID;
}  __attribute__ ((ms_struct));
extern void cb_GSClientApprove_t_8(void *l, void *w);
struct winRemoteStoragePublishFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStoragePublishFileResult_t_12(void *l, void *w);
struct winRemoteStorageUpdatePublishedFileResult_t_12 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUpdatePublishedFileResult_t_12(void *l, void *w);
struct winRemoteStorageEnumerateWorkshopFilesResult_t_612 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageEnumerateWorkshopFilesResult_t_612(void *l, void *w);
struct winRemoteStorageSubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageSubscribePublishedFileResult_t_4(void *l, void *w);
struct winRemoteStorageUnsubscribePublishedFileResult_t_4 {
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageUnsubscribePublishedFileResult_t_4(void *l, void *w);
struct winRemoteStorageGetPublishedFileDetailsResult_t_9484 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9484(void *l, void *w);
struct winComputeNewPlayerCompatibilityResult_t_16 {
    EResult m_eResult;
    int m_cPlayersThatDontLikeCandidate;
    int m_cPlayersThatCandidateDoesntLike;
    int m_cClanPlayersThatDontLikeCandidate;
}  __attribute__ ((ms_struct));
extern void cb_ComputeNewPlayerCompatibilityResult_t_16(void *l, void *w);
struct winRemoteStorageGetPublishedFileDetailsResult_t_1732 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[257];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    char m_rgchTags[1025];
    bool m_bTagsTruncated;
    char m_pchFileName[260];
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_1732(void *l, void *w);
struct winNameHistoryResponse_t_8 {
    int m_cSuccessfulLookups;
    int m_cFailedLookups;
}  __attribute__ ((ms_struct));
extern void cb_NameHistoryResponse_t_8(void *l, void *w);
struct winRemoteStorageDownloadUGCResult_t_32 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char * m_pchFileName;
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
extern void cb_RemoteStorageDownloadUGCResult_t_32(void *l, void *w);
struct winLobbyInvite_t_16 {
    uint64 m_ulSteamIDUser;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
extern void cb_LobbyInvite_t_16(void *l, void *w);
struct winLobbyDataUpdate_t_16 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDMember;
}  __attribute__ ((ms_struct));
extern void cb_LobbyDataUpdate_t_16(void *l, void *w);
struct winLobbyClosing_t_8 {
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
extern void cb_LobbyClosing_t_8(void *l, void *w);
struct winLobbyKicked_t_16 {
    uint64 m_ulSteamIDLobby;
    uint64 m_ulSteamIDAdmin;
}  __attribute__ ((ms_struct));
extern void cb_LobbyKicked_t_16(void *l, void *w);
struct winRequestFriendsLobbiesResponse_t_24 {
    uint64 m_ulSteamIDFriend;
    uint64 m_ulSteamIDLobby;
    int m_cResultIndex;
    int m_cResultsTotal;
}  __attribute__ ((ms_struct));
extern void cb_RequestFriendsLobbiesResponse_t_24(void *l, void *w);
struct winUserStatsReceived_t_12 {
    uint64 m_nGameID;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
extern void cb_UserStatsReceived_t_12(void *l, void *w);
struct winAppDataChanged_t_8 {
    uint32 m_nAppID;
    bool m_bBySteamUI;
    bool m_bCDDBUpdate;
}  __attribute__ ((ms_struct));
extern void cb_AppDataChanged_t_8(void *l, void *w);
