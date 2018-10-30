#pragma pack( push, 8 )
struct winMicroTxnAuthorizationResponse_t_24 {
    uint32 m_unAppID;
    uint64 m_ulOrderID;
    uint8 m_bAuthorized;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_MicroTxnAuthorizationResponse_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winLobbyCreated_t_16 {
    EResult m_eResult;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_LobbyCreated_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncProgress_t_288 {
    char m_rgchCurrentFile[260];
    AppId_t m_nAppID;
    uint32 m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageAppSyncProgress_t_288(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageFileShareResult_t_280 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    char m_rgchFilename[260];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageFileShareResult_t_280(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStoragePublishFileResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStoragePublishFileResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageDeletePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageDeletePublishedFileResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserPublishedFilesResult_t_416 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageEnumerateUserPublishedFilesResult_t_416(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageSubscribePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageSubscribePublishedFileResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_616 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeSubscribed[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageEnumerateUserSubscribedFilesResult_t_616(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageUnsubscribePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageUnsubscribePublishedFileResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageUpdatePublishedFileResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageUpdatePublishedFileResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageDownloadUGCResult_t_296 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char m_pchFileName[260];
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageDownloadUGCResult_t_296(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedFileDetailsResult_t_9760 {
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
#pragma pack( pop )
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9760(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateWorkshopFilesResult_t_624 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
    AppId_t m_nAppId;
    uint32 m_unStartIndex;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageEnumerateWorkshopFilesResult_t_624(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_32 {
    EResult m_eResult;
    PublishedFileId_t m_unPublishedFileId;
    int32 m_nVotesFor;
    int32 m_nVotesAgainst;
    int32 m_nReports;
    float m_fScore;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageGetPublishedItemVoteDetailsResult_t_32(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageUpdateUserPublishedItemVoteResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageUserVoteDetails_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopVote m_eVote;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageUserVoteDetails_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageSetUserPublishedFileActionResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopFileAction m_eAction;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageSetUserPublishedFileActionResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileUpdated_t_24 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
    uint64 m_ulUnused;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStoragePublishedFileUpdated_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winLeaderboardScoreUploaded_t_32 {
    uint8 m_bSuccess;
    SteamLeaderboard_t m_hSteamLeaderboard;
    int32 m_nScore;
    uint8 m_bScoreChanged;
    int m_nGlobalRankNew;
    int m_nGlobalRankPrevious;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_LeaderboardScoreUploaded_t_32(void *l, void *w);

#pragma pack( push, 8 )
struct winLeaderboardUGCSet_t_16 {
    EResult m_eResult;
    SteamLeaderboard_t m_hSteamLeaderboard;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_LeaderboardUGCSet_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winPS3TrophiesInstalled_t_24 {
    uint64 m_nGameID;
    EResult m_eResult;
    uint64 m_ulRequiredDiskSpace;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_PS3TrophiesInstalled_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winFileDetailsResult_t_40 {
    EResult m_eResult;
    uint64 m_ulFileSize;
    uint8 m_FileSHA[20];
    uint32 m_unFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_FileDetailsResult_t_40(void *l, void *w);

#pragma pack( push, 8 )
struct winHTTPRequestCompleted_t_32 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
    uint32 m_unBodySize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_HTTPRequestCompleted_t_32(void *l, void *w);

#pragma pack( push, 8 )
struct winHTTPRequestHeadersReceived_t_16 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_HTTPRequestHeadersReceived_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winHTTPRequestDataReceived_t_24 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    uint32 m_cOffset;
    uint32 m_cBytesReceived;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_HTTPRequestDataReceived_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9784 {
    SteamUGCDetails_t m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_SteamUGCRequestUGCDetailsResult_t_9784(void *l, void *w);

#pragma pack( push, 8 )
struct winCreateItemResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_CreateItemResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winItemInstalled_t_16 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_ItemInstalled_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winDownloadItemResult_t_24 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_DownloadItemResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winAddUGCDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_AddUGCDependencyResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoveUGCDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoveUGCDependencyResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winAddAppDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_AddAppDependencyResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoveAppDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoveAppDependencyResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winGetAppDependenciesResult_t_152 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_rgAppIDs[32];
    uint32 m_nNumAppDependencies;
    uint32 m_nTotalNumAppDependencies;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_GetAppDependenciesResult_t_152(void *l, void *w);

#pragma pack( push, 8 )
struct winDeleteItemResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_DeleteItemResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winSteamInventoryStartPurchaseResult_t_24 {
    EResult m_result;
    uint64 m_ulOrderID;
    uint64 m_ulTransID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_SteamInventoryStartPurchaseResult_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winGSReputation_t_40 {
    EResult m_eResult;
    uint32 m_unReputationScore;
    bool m_bBanned;
    uint32 m_unBannedIP;
    uint16 m_usBannedPort;
    uint64 m_ulBannedGameID;
    uint32 m_unBanExpires;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_GSReputation_t_40(void *l, void *w);

#pragma pack( push, 8 )
struct winHTTPRequestCompleted_t_24 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_HTTPRequestCompleted_t_24(void *l, void *w);

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9776 {
    SteamUGCDetails_t m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_SteamUGCRequestUGCDetailsResult_t_9776(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageFileShareResult_t_16 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageFileShareResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9768 {
    SteamUGCDetails_t m_details;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_SteamUGCRequestUGCDetailsResult_t_9768(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedFileDetailsResult_t_9752 {
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
#pragma pack( pop )
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9752(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStoragePublishFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStoragePublishFileResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageUpdatePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageUpdatePublishedFileResult_t_16(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateWorkshopFilesResult_t_616 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    float m_rgScore[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageEnumerateWorkshopFilesResult_t_616(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedFileDetailsResult_t_9496 {
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
#pragma pack( pop )
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_9496(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageGetPublishedFileDetailsResult_t_1744 {
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
#pragma pack( pop )
extern void cb_RemoteStorageGetPublishedFileDetailsResult_t_1744(void *l, void *w);

#pragma pack( push, 8 )
struct winRemoteStorageDownloadUGCResult_t_40 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    AppId_t m_nAppID;
    int32 m_nSizeInBytes;
    char * m_pchFileName;
    uint64 m_ulSteamIDOwner;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
extern void cb_RemoteStorageDownloadUGCResult_t_40(void *l, void *w);

