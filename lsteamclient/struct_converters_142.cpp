#include "steam_defs.h"
#include "steamworks_sdk_142/steam_api.h"
#include "steamworks_sdk_142/isteamgameserver.h"
#include "steamworks_sdk_142/isteamgameserverstats.h"
#include "steamworks_sdk_142/isteamgamecoordinator.h"
#include "steamclient_private.h"
extern "C" {
#pragma pack( push, 8 )
struct winMicroTxnAuthorizationResponse_t_24 {
    uint32 m_unAppID;
    uint64 m_ulOrderID;
    uint8 m_bAuthorized;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MicroTxnAuthorizationResponse_t_24(const void *l, void *w)
{
    MicroTxnAuthorizationResponse_t *lin = (MicroTxnAuthorizationResponse_t *)l;
    struct winMicroTxnAuthorizationResponse_t_24 *win = (struct winMicroTxnAuthorizationResponse_t_24 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_ulOrderID = lin->m_ulOrderID;
    win->m_bAuthorized = lin->m_bAuthorized;
}

#pragma pack( push, 8 )
struct winLobbyCreated_t_16 {
    EResult m_eResult;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyCreated_t_16(const void *l, void *w)
{
    LobbyCreated_t *lin = (LobbyCreated_t *)l;
    struct winLobbyCreated_t_16 *win = (struct winLobbyCreated_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
}

#pragma pack( push, 8 )
struct winRemoteStorageAppSyncProgress_t_288 {
    char m_rgchCurrentFile[260];
    AppId_t m_nAppID;
    uint32 m_uBytesTransferredThisChunk;
    double m_dAppPercentComplete;
    bool m_bUploading;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageAppSyncProgress_t_288(const void *l, void *w)
{
    RemoteStorageAppSyncProgress_t *lin = (RemoteStorageAppSyncProgress_t *)l;
    struct winRemoteStorageAppSyncProgress_t_288 *win = (struct winRemoteStorageAppSyncProgress_t_288 *)w;
    memcpy(win->m_rgchCurrentFile, lin->m_rgchCurrentFile, sizeof(win->m_rgchCurrentFile));
    win->m_nAppID = lin->m_nAppID;
    win->m_uBytesTransferredThisChunk = lin->m_uBytesTransferredThisChunk;
    win->m_dAppPercentComplete = lin->m_dAppPercentComplete;
    win->m_bUploading = lin->m_bUploading;
}

#pragma pack( push, 8 )
struct winRemoteStorageFileShareResult_t_280 {
    EResult m_eResult;
    UGCHandle_t m_hFile;
    char m_rgchFilename[260];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageFileShareResult_t_280(const void *l, void *w)
{
    RemoteStorageFileShareResult_t *lin = (RemoteStorageFileShareResult_t *)l;
    struct winRemoteStorageFileShareResult_t_280 *win = (struct winRemoteStorageFileShareResult_t_280 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    memcpy(win->m_rgchFilename, lin->m_rgchFilename, sizeof(win->m_rgchFilename));
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishFileResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishFileResult_t_24(const void *l, void *w)
{
    RemoteStoragePublishFileResult_t *lin = (RemoteStoragePublishFileResult_t *)l;
    struct winRemoteStoragePublishFileResult_t_24 *win = (struct winRemoteStoragePublishFileResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winRemoteStorageDeletePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageDeletePublishedFileResult_t_16(const void *l, void *w)
{
    RemoteStorageDeletePublishedFileResult_t *lin = (RemoteStorageDeletePublishedFileResult_t *)l;
    struct winRemoteStorageDeletePublishedFileResult_t_16 *win = (struct winRemoteStorageDeletePublishedFileResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserPublishedFilesResult_t_416 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserPublishedFilesResult_t_416(const void *l, void *w)
{
    RemoteStorageEnumerateUserPublishedFilesResult_t *lin = (RemoteStorageEnumerateUserPublishedFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserPublishedFilesResult_t_416 *win = (struct winRemoteStorageEnumerateUserPublishedFilesResult_t_416 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
}

#pragma pack( push, 8 )
struct winRemoteStorageSubscribePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSubscribePublishedFileResult_t_16(const void *l, void *w)
{
    RemoteStorageSubscribePublishedFileResult_t *lin = (RemoteStorageSubscribePublishedFileResult_t *)l;
    struct winRemoteStorageSubscribePublishedFileResult_t_16 *win = (struct winRemoteStorageSubscribePublishedFileResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_616 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
    uint32 m_rgRTimeSubscribed[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserSubscribedFilesResult_t_616(const void *l, void *w)
{
    RemoteStorageEnumerateUserSubscribedFilesResult_t *lin = (RemoteStorageEnumerateUserSubscribedFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_616 *win = (struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_616 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgRTimeSubscribed, lin->m_rgRTimeSubscribed, sizeof(win->m_rgRTimeSubscribed));
}

#pragma pack( push, 8 )
struct winRemoteStorageUnsubscribePublishedFileResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUnsubscribePublishedFileResult_t_16(const void *l, void *w)
{
    RemoteStorageUnsubscribePublishedFileResult_t *lin = (RemoteStorageUnsubscribePublishedFileResult_t *)l;
    struct winRemoteStorageUnsubscribePublishedFileResult_t_16 *win = (struct winRemoteStorageUnsubscribePublishedFileResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageUpdatePublishedFileResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUpdatePublishedFileResult_t_24(const void *l, void *w)
{
    RemoteStorageUpdatePublishedFileResult_t *lin = (RemoteStorageUpdatePublishedFileResult_t *)l;
    struct winRemoteStorageUpdatePublishedFileResult_t_24 *win = (struct winRemoteStorageUpdatePublishedFileResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

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
void cb_RemoteStorageDownloadUGCResult_t_296(const void *l, void *w)
{
    RemoteStorageDownloadUGCResult_t *lin = (RemoteStorageDownloadUGCResult_t *)l;
    struct winRemoteStorageDownloadUGCResult_t_296 *win = (struct winRemoteStorageDownloadUGCResult_t_296 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hFile = lin->m_hFile;
    win->m_nAppID = lin->m_nAppID;
    win->m_nSizeInBytes = lin->m_nSizeInBytes;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
}

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
void cb_RemoteStorageGetPublishedFileDetailsResult_t_9760(const void *l, void *w)
{
    RemoteStorageGetPublishedFileDetailsResult_t *lin = (RemoteStorageGetPublishedFileDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedFileDetailsResult_t_9760 *win = (struct winRemoteStorageGetPublishedFileDetailsResult_t_9760 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nCreatorAppID = lin->m_nCreatorAppID;
    win->m_nConsumerAppID = lin->m_nConsumerAppID;
    memcpy(win->m_rgchTitle, lin->m_rgchTitle, sizeof(win->m_rgchTitle));
    memcpy(win->m_rgchDescription, lin->m_rgchDescription, sizeof(win->m_rgchDescription));
    win->m_hFile = lin->m_hFile;
    win->m_hPreviewFile = lin->m_hPreviewFile;
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
    win->m_rtimeCreated = lin->m_rtimeCreated;
    win->m_rtimeUpdated = lin->m_rtimeUpdated;
    win->m_eVisibility = lin->m_eVisibility;
    win->m_bBanned = lin->m_bBanned;
    memcpy(win->m_rgchTags, lin->m_rgchTags, sizeof(win->m_rgchTags));
    win->m_bTagsTruncated = lin->m_bTagsTruncated;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_nFileSize = lin->m_nFileSize;
    win->m_nPreviewFileSize = lin->m_nPreviewFileSize;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
    win->m_eFileType = lin->m_eFileType;
    win->m_bAcceptedForUse = lin->m_bAcceptedForUse;
}

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
void cb_RemoteStorageEnumerateWorkshopFilesResult_t_624(const void *l, void *w)
{
    RemoteStorageEnumerateWorkshopFilesResult_t *lin = (RemoteStorageEnumerateWorkshopFilesResult_t *)l;
    struct winRemoteStorageEnumerateWorkshopFilesResult_t_624 *win = (struct winRemoteStorageEnumerateWorkshopFilesResult_t_624 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
    memcpy(win->m_rgScore, lin->m_rgScore, sizeof(win->m_rgScore));
    win->m_nAppId = lin->m_nAppId;
    win->m_unStartIndex = lin->m_unStartIndex;
}

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
void cb_RemoteStorageGetPublishedItemVoteDetailsResult_t_32(const void *l, void *w)
{
    RemoteStorageGetPublishedItemVoteDetailsResult_t *lin = (RemoteStorageGetPublishedItemVoteDetailsResult_t *)l;
    struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_32 *win = (struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_32 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unPublishedFileId = lin->m_unPublishedFileId;
    win->m_nVotesFor = lin->m_nVotesFor;
    win->m_nVotesAgainst = lin->m_nVotesAgainst;
    win->m_nReports = lin->m_nReports;
    win->m_fScore = lin->m_fScore;
}

#pragma pack( push, 8 )
struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUpdateUserPublishedItemVoteResult_t_16(const void *l, void *w)
{
    RemoteStorageUpdateUserPublishedItemVoteResult_t *lin = (RemoteStorageUpdateUserPublishedItemVoteResult_t *)l;
    struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_16 *win = (struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoteStorageUserVoteDetails_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopVote m_eVote;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageUserVoteDetails_t_24(const void *l, void *w)
{
    RemoteStorageUserVoteDetails_t *lin = (RemoteStorageUserVoteDetails_t *)l;
    struct winRemoteStorageUserVoteDetails_t_24 *win = (struct winRemoteStorageUserVoteDetails_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eVote = lin->m_eVote;
}

#pragma pack( push, 8 )
struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416 {
    EResult m_eResult;
    int32 m_nResultsReturned;
    int32 m_nTotalResultCount;
    PublishedFileId_t m_rgPublishedFileId[50];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416(const void *l, void *w)
{
    RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *lin = (RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *)l;
    struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416 *win = (struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nResultsReturned = lin->m_nResultsReturned;
    win->m_nTotalResultCount = lin->m_nTotalResultCount;
    memcpy(win->m_rgPublishedFileId, lin->m_rgPublishedFileId, sizeof(win->m_rgPublishedFileId));
}

#pragma pack( push, 8 )
struct winRemoteStorageSetUserPublishedFileActionResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    EWorkshopFileAction m_eAction;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStorageSetUserPublishedFileActionResult_t_24(const void *l, void *w)
{
    RemoteStorageSetUserPublishedFileActionResult_t *lin = (RemoteStorageSetUserPublishedFileActionResult_t *)l;
    struct winRemoteStorageSetUserPublishedFileActionResult_t_24 *win = (struct winRemoteStorageSetUserPublishedFileActionResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eAction = lin->m_eAction;
}

#pragma pack( push, 8 )
struct winRemoteStoragePublishedFileUpdated_t_24 {
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
    uint64 m_ulUnused;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoteStoragePublishedFileUpdated_t_24(const void *l, void *w)
{
    RemoteStoragePublishedFileUpdated_t *lin = (RemoteStoragePublishedFileUpdated_t *)l;
    struct winRemoteStoragePublishedFileUpdated_t_24 *win = (struct winRemoteStoragePublishedFileUpdated_t_24 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
    win->m_ulUnused = lin->m_ulUnused;
}

#pragma pack( push, 8 )
struct winLeaderboardEntry_t_142 {
    CSteamID m_steamIDUser;
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_LeaderboardEntry_t_142(const void *w, void *l)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_142 *win = (struct winLeaderboardEntry_t_142 *)w;
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_142(const void *l, void *w)
{
    LeaderboardEntry_t *lin = (LeaderboardEntry_t *)l;
    struct winLeaderboardEntry_t_142 *win = (struct winLeaderboardEntry_t_142 *)w;
    win->m_steamIDUser = lin->m_steamIDUser;
    win->m_nGlobalRank = lin->m_nGlobalRank;
    win->m_nScore = lin->m_nScore;
    win->m_cDetails = lin->m_cDetails;
    win->m_hUGC = lin->m_hUGC;
}

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
void cb_LeaderboardScoreUploaded_t_32(const void *l, void *w)
{
    LeaderboardScoreUploaded_t *lin = (LeaderboardScoreUploaded_t *)l;
    struct winLeaderboardScoreUploaded_t_32 *win = (struct winLeaderboardScoreUploaded_t_32 *)w;
    win->m_bSuccess = lin->m_bSuccess;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
    win->m_nScore = lin->m_nScore;
    win->m_bScoreChanged = lin->m_bScoreChanged;
    win->m_nGlobalRankNew = lin->m_nGlobalRankNew;
    win->m_nGlobalRankPrevious = lin->m_nGlobalRankPrevious;
}

#pragma pack( push, 8 )
struct winLeaderboardUGCSet_t_16 {
    EResult m_eResult;
    SteamLeaderboard_t m_hSteamLeaderboard;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LeaderboardUGCSet_t_16(const void *l, void *w)
{
    LeaderboardUGCSet_t *lin = (LeaderboardUGCSet_t *)l;
    struct winLeaderboardUGCSet_t_16 *win = (struct winLeaderboardUGCSet_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_hSteamLeaderboard = lin->m_hSteamLeaderboard;
}

#pragma pack( push, 8 )
struct winPS3TrophiesInstalled_t_24 {
    uint64 m_nGameID;
    EResult m_eResult;
    uint64 m_ulRequiredDiskSpace;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_PS3TrophiesInstalled_t_24(const void *l, void *w)
{
    PS3TrophiesInstalled_t *lin = (PS3TrophiesInstalled_t *)l;
    struct winPS3TrophiesInstalled_t_24 *win = (struct winPS3TrophiesInstalled_t_24 *)w;
    win->m_nGameID = lin->m_nGameID;
    win->m_eResult = lin->m_eResult;
    win->m_ulRequiredDiskSpace = lin->m_ulRequiredDiskSpace;
}

#pragma pack( push, 8 )
struct winFileDetailsResult_t_40 {
    EResult m_eResult;
    uint64 m_ulFileSize;
    uint8 m_FileSHA[20];
    uint32 m_unFlags;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_FileDetailsResult_t_40(const void *l, void *w)
{
    FileDetailsResult_t *lin = (FileDetailsResult_t *)l;
    struct winFileDetailsResult_t_40 *win = (struct winFileDetailsResult_t_40 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_ulFileSize = lin->m_ulFileSize;
    memcpy(win->m_FileSHA, lin->m_FileSHA, sizeof(win->m_FileSHA));
    win->m_unFlags = lin->m_unFlags;
}

#pragma pack( push, 8 )
struct winHTTPRequestCompleted_t_32 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    bool m_bRequestSuccessful;
    EHTTPStatusCode m_eStatusCode;
    uint32 m_unBodySize;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestCompleted_t_32(const void *l, void *w)
{
    HTTPRequestCompleted_t *lin = (HTTPRequestCompleted_t *)l;
    struct winHTTPRequestCompleted_t_32 *win = (struct winHTTPRequestCompleted_t_32 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_bRequestSuccessful = lin->m_bRequestSuccessful;
    win->m_eStatusCode = lin->m_eStatusCode;
    win->m_unBodySize = lin->m_unBodySize;
}

#pragma pack( push, 8 )
struct winHTTPRequestHeadersReceived_t_16 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestHeadersReceived_t_16(const void *l, void *w)
{
    HTTPRequestHeadersReceived_t *lin = (HTTPRequestHeadersReceived_t *)l;
    struct winHTTPRequestHeadersReceived_t_16 *win = (struct winHTTPRequestHeadersReceived_t_16 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
}

#pragma pack( push, 8 )
struct winHTTPRequestDataReceived_t_24 {
    HTTPRequestHandle m_hRequest;
    uint64 m_ulContextValue;
    uint32 m_cOffset;
    uint32 m_cBytesReceived;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTTPRequestDataReceived_t_24(const void *l, void *w)
{
    HTTPRequestDataReceived_t *lin = (HTTPRequestDataReceived_t *)l;
    struct winHTTPRequestDataReceived_t_24 *win = (struct winHTTPRequestDataReceived_t_24 *)w;
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_cOffset = lin->m_cOffset;
    win->m_cBytesReceived = lin->m_cBytesReceived;
}

#pragma pack( push, 8 )
struct winSteamUGCDetails_t_142 {
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
    EWorkshopFileType m_eFileType;
    AppId_t m_nCreatorAppID;
    AppId_t m_nConsumerAppID;
    char m_rgchTitle[129];
    char m_rgchDescription[8000];
    uint64 m_ulSteamIDOwner;
    uint32 m_rtimeCreated;
    uint32 m_rtimeUpdated;
    uint32 m_rtimeAddedToUserList;
    ERemoteStoragePublishedFileVisibility m_eVisibility;
    bool m_bBanned;
    bool m_bAcceptedForUse;
    bool m_bTagsTruncated;
    char m_rgchTags[1025];
    UGCHandle_t m_hFile;
    UGCHandle_t m_hPreviewFile;
    char m_pchFileName[260];
    int32 m_nFileSize;
    int32 m_nPreviewFileSize;
    char m_rgchURL[256];
    uint32 m_unVotesUp;
    uint32 m_unVotesDown;
    float m_flScore;
    uint32 m_unNumChildren;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void win_to_lin_struct_SteamUGCDetails_t_142(const void *w, void *l)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_142 *win = (struct winSteamUGCDetails_t_142 *)w;
    lin->m_nPublishedFileId = win->m_nPublishedFileId;
    lin->m_eResult = win->m_eResult;
    lin->m_eFileType = win->m_eFileType;
    lin->m_nCreatorAppID = win->m_nCreatorAppID;
    lin->m_nConsumerAppID = win->m_nConsumerAppID;
    memcpy(lin->m_rgchTitle, win->m_rgchTitle, sizeof(lin->m_rgchTitle));
    memcpy(lin->m_rgchDescription, win->m_rgchDescription, sizeof(lin->m_rgchDescription));
    lin->m_ulSteamIDOwner = win->m_ulSteamIDOwner;
    lin->m_rtimeCreated = win->m_rtimeCreated;
    lin->m_rtimeUpdated = win->m_rtimeUpdated;
    lin->m_rtimeAddedToUserList = win->m_rtimeAddedToUserList;
    lin->m_eVisibility = win->m_eVisibility;
    lin->m_bBanned = win->m_bBanned;
    lin->m_bAcceptedForUse = win->m_bAcceptedForUse;
    lin->m_bTagsTruncated = win->m_bTagsTruncated;
    memcpy(lin->m_rgchTags, win->m_rgchTags, sizeof(lin->m_rgchTags));
    lin->m_hFile = win->m_hFile;
    lin->m_hPreviewFile = win->m_hPreviewFile;
    memcpy(lin->m_pchFileName, win->m_pchFileName, sizeof(lin->m_pchFileName));
    lin->m_nFileSize = win->m_nFileSize;
    lin->m_nPreviewFileSize = win->m_nPreviewFileSize;
    memcpy(lin->m_rgchURL, win->m_rgchURL, sizeof(lin->m_rgchURL));
    lin->m_unVotesUp = win->m_unVotesUp;
    lin->m_unVotesDown = win->m_unVotesDown;
    lin->m_flScore = win->m_flScore;
    lin->m_unNumChildren = win->m_unNumChildren;
}

void lin_to_win_struct_SteamUGCDetails_t_142(const void *l, void *w)
{
    SteamUGCDetails_t *lin = (SteamUGCDetails_t *)l;
    struct winSteamUGCDetails_t_142 *win = (struct winSteamUGCDetails_t_142 *)w;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
    win->m_eFileType = lin->m_eFileType;
    win->m_nCreatorAppID = lin->m_nCreatorAppID;
    win->m_nConsumerAppID = lin->m_nConsumerAppID;
    memcpy(win->m_rgchTitle, lin->m_rgchTitle, sizeof(win->m_rgchTitle));
    memcpy(win->m_rgchDescription, lin->m_rgchDescription, sizeof(win->m_rgchDescription));
    win->m_ulSteamIDOwner = lin->m_ulSteamIDOwner;
    win->m_rtimeCreated = lin->m_rtimeCreated;
    win->m_rtimeUpdated = lin->m_rtimeUpdated;
    win->m_rtimeAddedToUserList = lin->m_rtimeAddedToUserList;
    win->m_eVisibility = lin->m_eVisibility;
    win->m_bBanned = lin->m_bBanned;
    win->m_bAcceptedForUse = lin->m_bAcceptedForUse;
    win->m_bTagsTruncated = lin->m_bTagsTruncated;
    memcpy(win->m_rgchTags, lin->m_rgchTags, sizeof(win->m_rgchTags));
    win->m_hFile = lin->m_hFile;
    win->m_hPreviewFile = lin->m_hPreviewFile;
    memcpy(win->m_pchFileName, lin->m_pchFileName, sizeof(win->m_pchFileName));
    win->m_nFileSize = lin->m_nFileSize;
    win->m_nPreviewFileSize = lin->m_nPreviewFileSize;
    memcpy(win->m_rgchURL, lin->m_rgchURL, sizeof(win->m_rgchURL));
    win->m_unVotesUp = lin->m_unVotesUp;
    win->m_unVotesDown = lin->m_unVotesDown;
    win->m_flScore = lin->m_flScore;
    win->m_unNumChildren = lin->m_unNumChildren;
}

#pragma pack( push, 8 )
struct winSteamUGCRequestUGCDetailsResult_t_9784 {
    winSteamUGCDetails_t_142 m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUGCRequestUGCDetailsResult_t_9784(const void *l, void *w)
{
    SteamUGCRequestUGCDetailsResult_t *lin = (SteamUGCRequestUGCDetailsResult_t *)l;
    struct winSteamUGCRequestUGCDetailsResult_t_9784 *win = (struct winSteamUGCRequestUGCDetailsResult_t_9784 *)w;
    lin_to_win_struct_SteamUGCDetails_t_142(&lin->m_details, &win->m_details);
    win->m_bCachedData = lin->m_bCachedData;
}

#pragma pack( push, 8 )
struct winCreateItemResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_CreateItemResult_t_24(const void *l, void *w)
{
    CreateItemResult_t *lin = (CreateItemResult_t *)l;
    struct winCreateItemResult_t_24 *win = (struct winCreateItemResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_bUserNeedsToAcceptWorkshopLegalAgreement = lin->m_bUserNeedsToAcceptWorkshopLegalAgreement;
}

#pragma pack( push, 8 )
struct winItemInstalled_t_16 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_ItemInstalled_t_16(const void *l, void *w)
{
    ItemInstalled_t *lin = (ItemInstalled_t *)l;
    struct winItemInstalled_t_16 *win = (struct winItemInstalled_t_16 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winDownloadItemResult_t_24 {
    AppId_t m_unAppID;
    PublishedFileId_t m_nPublishedFileId;
    EResult m_eResult;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DownloadItemResult_t_24(const void *l, void *w)
{
    DownloadItemResult_t *lin = (DownloadItemResult_t *)l;
    struct winDownloadItemResult_t_24 *win = (struct winDownloadItemResult_t_24 *)w;
    win->m_unAppID = lin->m_unAppID;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_eResult = lin->m_eResult;
}

#pragma pack( push, 8 )
struct winAddUGCDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AddUGCDependencyResult_t_24(const void *l, void *w)
{
    AddUGCDependencyResult_t *lin = (AddUGCDependencyResult_t *)l;
    struct winAddUGCDependencyResult_t_24 *win = (struct winAddUGCDependencyResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nChildPublishedFileId = lin->m_nChildPublishedFileId;
}

#pragma pack( push, 8 )
struct winRemoveUGCDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    PublishedFileId_t m_nChildPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoveUGCDependencyResult_t_24(const void *l, void *w)
{
    RemoveUGCDependencyResult_t *lin = (RemoveUGCDependencyResult_t *)l;
    struct winRemoveUGCDependencyResult_t_24 *win = (struct winRemoveUGCDependencyResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nChildPublishedFileId = lin->m_nChildPublishedFileId;
}

#pragma pack( push, 8 )
struct winAddAppDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_AddAppDependencyResult_t_24(const void *l, void *w)
{
    AddAppDependencyResult_t *lin = (AddAppDependencyResult_t *)l;
    struct winAddAppDependencyResult_t_24 *win = (struct winAddAppDependencyResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winRemoveAppDependencyResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_nAppID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RemoveAppDependencyResult_t_24(const void *l, void *w)
{
    RemoveAppDependencyResult_t *lin = (RemoveAppDependencyResult_t *)l;
    struct winRemoveAppDependencyResult_t_24 *win = (struct winRemoveAppDependencyResult_t_24 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
}

#pragma pack( push, 8 )
struct winGetAppDependenciesResult_t_152 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    AppId_t m_rgAppIDs[32];
    uint32 m_nNumAppDependencies;
    uint32 m_nTotalNumAppDependencies;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_GetAppDependenciesResult_t_152(const void *l, void *w)
{
    GetAppDependenciesResult_t *lin = (GetAppDependenciesResult_t *)l;
    struct winGetAppDependenciesResult_t_152 *win = (struct winGetAppDependenciesResult_t_152 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    memcpy(win->m_rgAppIDs, lin->m_rgAppIDs, sizeof(win->m_rgAppIDs));
    win->m_nNumAppDependencies = lin->m_nNumAppDependencies;
    win->m_nTotalNumAppDependencies = lin->m_nTotalNumAppDependencies;
}

#pragma pack( push, 8 )
struct winDeleteItemResult_t_16 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_DeleteItemResult_t_16(const void *l, void *w)
{
    DeleteItemResult_t *lin = (DeleteItemResult_t *)l;
    struct winDeleteItemResult_t_16 *win = (struct winDeleteItemResult_t_16 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#pragma pack( push, 8 )
struct winHTML_FileOpenDialog_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
    const char * pchInitialFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_HTML_FileOpenDialog_t_12(const void *l, void *w)
{
    HTML_FileOpenDialog_t *lin = (HTML_FileOpenDialog_t *)l;
    struct winHTML_FileOpenDialog_t_12 *win = (struct winHTML_FileOpenDialog_t_12 *)w;
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
    steamclient_unix_path_to_dos_path(1, lin->pchInitialFile, g_tmppath, sizeof(g_tmppath));
    win->pchInitialFile = g_tmppath;
}

#pragma pack( push, 8 )
struct winSteamInventoryStartPurchaseResult_t_24 {
    EResult m_result;
    uint64 m_ulOrderID;
    uint64 m_ulTransID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryStartPurchaseResult_t_24(const void *l, void *w)
{
    SteamInventoryStartPurchaseResult_t *lin = (SteamInventoryStartPurchaseResult_t *)l;
    struct winSteamInventoryStartPurchaseResult_t_24 *win = (struct winSteamInventoryStartPurchaseResult_t_24 *)w;
    win->m_result = lin->m_result;
    win->m_ulOrderID = lin->m_ulOrderID;
    win->m_ulTransID = lin->m_ulTransID;
}

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
void cb_GSReputation_t_40(const void *l, void *w)
{
    GSReputation_t *lin = (GSReputation_t *)l;
    struct winGSReputation_t_40 *win = (struct winGSReputation_t_40 *)w;
    win->m_eResult = lin->m_eResult;
    win->m_unReputationScore = lin->m_unReputationScore;
    win->m_bBanned = lin->m_bBanned;
    win->m_unBannedIP = lin->m_unBannedIP;
    win->m_usBannedPort = lin->m_usBannedPort;
    win->m_ulBannedGameID = lin->m_ulBannedGameID;
    win->m_unBanExpires = lin->m_unBanExpires;
}


}
