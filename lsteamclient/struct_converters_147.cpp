#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#include "steamworks_sdk_147/steam_api.h"
#include "steamworks_sdk_147/isteamgameserver.h"
#include "steamworks_sdk_147/isteamnetworkingsockets.h"
#include "steamworks_sdk_147/isteamgameserverstats.h"
#include "steamworks_sdk_147/isteamgamecoordinator.h"
#include "steamworks_sdk_147/steamnetworkingtypes.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
extern "C" {
#define SDKVER_147
#include "struct_converters.h"
#pragma pack( push, 8 )
struct winMicroTxnAuthorizationResponse_t_24 {
    uint32 m_unAppID;
    uint64 m_ulOrderID;
    uint8 m_bAuthorized;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_MicroTxnAuthorizationResponse_t_24(const struct MicroTxnAuthorizationResponse_t *lin, struct winMicroTxnAuthorizationResponse_t_24 *win)
{
    win->m_unAppID = lin->m_unAppID;
    win->m_ulOrderID = lin->m_ulOrderID;
    win->m_bAuthorized = lin->m_bAuthorized;
}

void win_to_lin_struct_SteamPartyBeaconLocation_t_147(const struct winSteamPartyBeaconLocation_t_147 *win, struct SteamPartyBeaconLocation_t *lin)
{
    lin->m_eType = win->m_eType;
    lin->m_ulLocationID = win->m_ulLocationID;
}

void lin_to_win_struct_SteamPartyBeaconLocation_t_147(const struct SteamPartyBeaconLocation_t *lin, struct winSteamPartyBeaconLocation_t_147 *win)
{
    win->m_eType = lin->m_eType;
    win->m_ulLocationID = lin->m_ulLocationID;
}

#pragma pack( push, 8 )
struct winLobbyCreated_t_16 {
    EResult m_eResult;
    uint64 m_ulSteamIDLobby;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_LobbyCreated_t_16(const struct LobbyCreated_t *lin, struct winLobbyCreated_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ulSteamIDLobby = lin->m_ulSteamIDLobby;
}

#pragma pack( push, 8 )
struct winRequestPlayersForGameProgressCallback_t_16 {
    EResult m_eResult;
    uint64 m_ullSearchID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RequestPlayersForGameProgressCallback_t_16(const struct RequestPlayersForGameProgressCallback_t *lin, struct winRequestPlayersForGameProgressCallback_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ullSearchID = lin->m_ullSearchID;
}

#pragma pack( push, 8 )
struct winRequestPlayersForGameResultCallback_t_64 {
    EResult m_eResult;
    uint64 m_ullSearchID;
    CSteamID m_SteamIDPlayerFound __attribute__((aligned(1)));
    CSteamID m_SteamIDLobby __attribute__((aligned(1)));
    RequestPlayersForGameResultCallback_t::PlayerAcceptState_t m_ePlayerAcceptState;
    int32 m_nPlayerIndex;
    int32 m_nTotalPlayersFound;
    int32 m_nTotalPlayersAcceptedGame;
    int32 m_nSuggestedTeamIndex;
    uint64 m_ullUniqueGameID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RequestPlayersForGameResultCallback_t_64(const struct RequestPlayersForGameResultCallback_t *lin, struct winRequestPlayersForGameResultCallback_t_64 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ullSearchID = lin->m_ullSearchID;
    win->m_SteamIDPlayerFound = lin->m_SteamIDPlayerFound;
    win->m_SteamIDLobby = lin->m_SteamIDLobby;
    win->m_ePlayerAcceptState = lin->m_ePlayerAcceptState;
    win->m_nPlayerIndex = lin->m_nPlayerIndex;
    win->m_nTotalPlayersFound = lin->m_nTotalPlayersFound;
    win->m_nTotalPlayersAcceptedGame = lin->m_nTotalPlayersAcceptedGame;
    win->m_nSuggestedTeamIndex = lin->m_nSuggestedTeamIndex;
    win->m_ullUniqueGameID = lin->m_ullUniqueGameID;
}

#pragma pack( push, 8 )
struct winRequestPlayersForGameFinalResultCallback_t_24 {
    EResult m_eResult;
    uint64 m_ullSearchID;
    uint64 m_ullUniqueGameID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_RequestPlayersForGameFinalResultCallback_t_24(const struct RequestPlayersForGameFinalResultCallback_t *lin, struct winRequestPlayersForGameFinalResultCallback_t_24 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ullSearchID = lin->m_ullSearchID;
    win->m_ullUniqueGameID = lin->m_ullUniqueGameID;
}

#pragma pack( push, 8 )
struct winSubmitPlayerResultResultCallback_t_24 {
    EResult m_eResult;
    uint64 ullUniqueGameID;
    CSteamID steamIDPlayer __attribute__((aligned(1)));
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SubmitPlayerResultResultCallback_t_24(const struct SubmitPlayerResultResultCallback_t *lin, struct winSubmitPlayerResultResultCallback_t_24 *win)
{
    win->m_eResult = lin->m_eResult;
    win->ullUniqueGameID = lin->ullUniqueGameID;
    win->steamIDPlayer = lin->steamIDPlayer;
}

#pragma pack( push, 8 )
struct winEndGameResultCallback_t_16 {
    EResult m_eResult;
    uint64 ullUniqueGameID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_EndGameResultCallback_t_16(const struct EndGameResultCallback_t *lin, struct winEndGameResultCallback_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->ullUniqueGameID = lin->ullUniqueGameID;
}

#pragma pack( push, 8 )
struct winJoinPartyCallback_t_280 {
    EResult m_eResult;
    PartyBeaconID_t m_ulBeaconID;
    CSteamID m_SteamIDBeaconOwner __attribute__((aligned(1)));
    char m_rgchConnectString[256];
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_JoinPartyCallback_t_280(const struct JoinPartyCallback_t *lin, struct winJoinPartyCallback_t_280 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ulBeaconID = lin->m_ulBeaconID;
    win->m_SteamIDBeaconOwner = lin->m_SteamIDBeaconOwner;
    memcpy(win->m_rgchConnectString, lin->m_rgchConnectString, sizeof(win->m_rgchConnectString));
}

#pragma pack( push, 8 )
struct winCreateBeaconCallback_t_16 {
    EResult m_eResult;
    PartyBeaconID_t m_ulBeaconID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_CreateBeaconCallback_t_16(const struct CreateBeaconCallback_t *lin, struct winCreateBeaconCallback_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_ulBeaconID = lin->m_ulBeaconID;
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
void cb_RemoteStorageAppSyncProgress_t_288(const struct RemoteStorageAppSyncProgress_t *lin, struct winRemoteStorageAppSyncProgress_t_288 *win)
{
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
void cb_RemoteStorageFileShareResult_t_280(const struct RemoteStorageFileShareResult_t *lin, struct winRemoteStorageFileShareResult_t_280 *win)
{
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
void cb_RemoteStoragePublishFileResult_t_24(const struct RemoteStoragePublishFileResult_t *lin, struct winRemoteStoragePublishFileResult_t_24 *win)
{
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
void cb_RemoteStorageDeletePublishedFileResult_t_16(const struct RemoteStorageDeletePublishedFileResult_t *lin, struct winRemoteStorageDeletePublishedFileResult_t_16 *win)
{
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
void cb_RemoteStorageEnumerateUserPublishedFilesResult_t_416(const struct RemoteStorageEnumerateUserPublishedFilesResult_t *lin, struct winRemoteStorageEnumerateUserPublishedFilesResult_t_416 *win)
{
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
void cb_RemoteStorageSubscribePublishedFileResult_t_16(const struct RemoteStorageSubscribePublishedFileResult_t *lin, struct winRemoteStorageSubscribePublishedFileResult_t_16 *win)
{
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
void cb_RemoteStorageEnumerateUserSubscribedFilesResult_t_616(const struct RemoteStorageEnumerateUserSubscribedFilesResult_t *lin, struct winRemoteStorageEnumerateUserSubscribedFilesResult_t_616 *win)
{
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
void cb_RemoteStorageUnsubscribePublishedFileResult_t_16(const struct RemoteStorageUnsubscribePublishedFileResult_t *lin, struct winRemoteStorageUnsubscribePublishedFileResult_t_16 *win)
{
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
void cb_RemoteStorageUpdatePublishedFileResult_t_24(const struct RemoteStorageUpdatePublishedFileResult_t *lin, struct winRemoteStorageUpdatePublishedFileResult_t_24 *win)
{
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
void cb_RemoteStorageDownloadUGCResult_t_296(const struct RemoteStorageDownloadUGCResult_t *lin, struct winRemoteStorageDownloadUGCResult_t_296 *win)
{
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
void cb_RemoteStorageGetPublishedFileDetailsResult_t_9760(const struct RemoteStorageGetPublishedFileDetailsResult_t *lin, struct winRemoteStorageGetPublishedFileDetailsResult_t_9760 *win)
{
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
void cb_RemoteStorageEnumerateWorkshopFilesResult_t_624(const struct RemoteStorageEnumerateWorkshopFilesResult_t *lin, struct winRemoteStorageEnumerateWorkshopFilesResult_t_624 *win)
{
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
void cb_RemoteStorageGetPublishedItemVoteDetailsResult_t_32(const struct RemoteStorageGetPublishedItemVoteDetailsResult_t *lin, struct winRemoteStorageGetPublishedItemVoteDetailsResult_t_32 *win)
{
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
void cb_RemoteStorageUpdateUserPublishedItemVoteResult_t_16(const struct RemoteStorageUpdateUserPublishedItemVoteResult_t *lin, struct winRemoteStorageUpdateUserPublishedItemVoteResult_t_16 *win)
{
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
void cb_RemoteStorageUserVoteDetails_t_24(const struct RemoteStorageUserVoteDetails_t *lin, struct winRemoteStorageUserVoteDetails_t_24 *win)
{
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
void cb_RemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416(const struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t *lin, struct winRemoteStorageEnumerateUserSharedWorkshopFilesResult_t_416 *win)
{
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
void cb_RemoteStorageSetUserPublishedFileActionResult_t_24(const struct RemoteStorageSetUserPublishedFileActionResult_t *lin, struct winRemoteStorageSetUserPublishedFileActionResult_t_24 *win)
{
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
void cb_RemoteStoragePublishedFileUpdated_t_24(const struct RemoteStoragePublishedFileUpdated_t *lin, struct winRemoteStoragePublishedFileUpdated_t_24 *win)
{
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
    win->m_nAppID = lin->m_nAppID;
    win->m_ulUnused = lin->m_ulUnused;
}

void win_to_lin_struct_LeaderboardEntry_t_147(const struct winLeaderboardEntry_t_147 *win, struct LeaderboardEntry_t *lin)
{
    lin->m_steamIDUser = win->m_steamIDUser;
    lin->m_nGlobalRank = win->m_nGlobalRank;
    lin->m_nScore = win->m_nScore;
    lin->m_cDetails = win->m_cDetails;
    lin->m_hUGC = win->m_hUGC;
}

void lin_to_win_struct_LeaderboardEntry_t_147(const struct LeaderboardEntry_t *lin, struct winLeaderboardEntry_t_147 *win)
{
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
void cb_LeaderboardScoreUploaded_t_32(const struct LeaderboardScoreUploaded_t *lin, struct winLeaderboardScoreUploaded_t_32 *win)
{
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
void cb_LeaderboardUGCSet_t_16(const struct LeaderboardUGCSet_t *lin, struct winLeaderboardUGCSet_t_16 *win)
{
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
void cb_PS3TrophiesInstalled_t_24(const struct PS3TrophiesInstalled_t *lin, struct winPS3TrophiesInstalled_t_24 *win)
{
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
void cb_FileDetailsResult_t_40(const struct FileDetailsResult_t *lin, struct winFileDetailsResult_t_40 *win)
{
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
void cb_HTTPRequestCompleted_t_32(const struct HTTPRequestCompleted_t *lin, struct winHTTPRequestCompleted_t_32 *win)
{
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
void cb_HTTPRequestHeadersReceived_t_16(const struct HTTPRequestHeadersReceived_t *lin, struct winHTTPRequestHeadersReceived_t_16 *win)
{
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
void cb_HTTPRequestDataReceived_t_24(const struct HTTPRequestDataReceived_t *lin, struct winHTTPRequestDataReceived_t_24 *win)
{
    win->m_hRequest = lin->m_hRequest;
    win->m_ulContextValue = lin->m_ulContextValue;
    win->m_cOffset = lin->m_cOffset;
    win->m_cBytesReceived = lin->m_cBytesReceived;
}

void win_to_lin_struct_SteamUGCDetails_t_147(const struct winSteamUGCDetails_t_147 *win, struct SteamUGCDetails_t *lin)
{
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

void lin_to_win_struct_SteamUGCDetails_t_147(const struct SteamUGCDetails_t *lin, struct winSteamUGCDetails_t_147 *win)
{
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
    winSteamUGCDetails_t_147 m_details;
    bool m_bCachedData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamUGCRequestUGCDetailsResult_t_9784(const struct SteamUGCRequestUGCDetailsResult_t *lin, struct winSteamUGCRequestUGCDetailsResult_t_9784 *win)
{
    lin_to_win_struct_SteamUGCDetails_t_147(&lin->m_details, &win->m_details);
    win->m_bCachedData = lin->m_bCachedData;
}

#pragma pack( push, 8 )
struct winCreateItemResult_t_24 {
    EResult m_eResult;
    PublishedFileId_t m_nPublishedFileId;
    bool m_bUserNeedsToAcceptWorkshopLegalAgreement;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_CreateItemResult_t_24(const struct CreateItemResult_t *lin, struct winCreateItemResult_t_24 *win)
{
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
void cb_ItemInstalled_t_16(const struct ItemInstalled_t *lin, struct winItemInstalled_t_16 *win)
{
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
void cb_DownloadItemResult_t_24(const struct DownloadItemResult_t *lin, struct winDownloadItemResult_t_24 *win)
{
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
void cb_AddUGCDependencyResult_t_24(const struct AddUGCDependencyResult_t *lin, struct winAddUGCDependencyResult_t_24 *win)
{
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
void cb_RemoveUGCDependencyResult_t_24(const struct RemoveUGCDependencyResult_t *lin, struct winRemoveUGCDependencyResult_t_24 *win)
{
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
void cb_AddAppDependencyResult_t_24(const struct AddAppDependencyResult_t *lin, struct winAddAppDependencyResult_t_24 *win)
{
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
void cb_RemoveAppDependencyResult_t_24(const struct RemoveAppDependencyResult_t *lin, struct winRemoveAppDependencyResult_t_24 *win)
{
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
void cb_GetAppDependenciesResult_t_152(const struct GetAppDependenciesResult_t *lin, struct winGetAppDependenciesResult_t_152 *win)
{
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
void cb_DeleteItemResult_t_16(const struct DeleteItemResult_t *lin, struct winDeleteItemResult_t_16 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_nPublishedFileId = lin->m_nPublishedFileId;
}

#ifdef __i386__
#pragma pack( push, 8 )
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
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_NeedsPaint_t_56 {
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
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_NeedsPaint_t_56(const struct HTML_NeedsPaint_t *lin, struct winHTML_NeedsPaint_t_56 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pBGRA = lin->pBGRA;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unUpdateX = lin->unUpdateX;
    win->unUpdateY = lin->unUpdateY;
    win->unUpdateWide = lin->unUpdateWide;
    win->unUpdateTall = lin->unUpdateTall;
    win->unScrollX = lin->unScrollX;
    win->unScrollY = lin->unScrollY;
    win->flPageScale = lin->flPageScale;
    win->unPageSerial = lin->unPageSerial;
}
#endif

#ifdef __i386__
void cb_HTML_NeedsPaint_t_48(const struct HTML_NeedsPaint_t *lin, struct winHTML_NeedsPaint_t_48 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pBGRA = lin->pBGRA;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unUpdateX = lin->unUpdateX;
    win->unUpdateY = lin->unUpdateY;
    win->unUpdateWide = lin->unUpdateWide;
    win->unUpdateTall = lin->unUpdateTall;
    win->unScrollX = lin->unScrollX;
    win->unScrollY = lin->unScrollY;
    win->flPageScale = lin->flPageScale;
    win->unPageSerial = lin->unPageSerial;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_StartRequest_t_20 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchTarget;
    const char * pchPostData;
    bool bIsRedirect;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_StartRequest_t_40 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchTarget;
    const char * pchPostData;
    bool bIsRedirect;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_StartRequest_t_40(const struct HTML_StartRequest_t *lin, struct winHTML_StartRequest_t_40 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchTarget = lin->pchTarget;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
}
#endif

#ifdef __i386__
void cb_HTML_StartRequest_t_20(const struct HTML_StartRequest_t *lin, struct winHTML_StartRequest_t_20 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchTarget = lin->pchTarget;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_URLChanged_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPostData;
    bool bIsRedirect;
    const char * pchPageTitle;
    bool bNewNavigation;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_URLChanged_t_48 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPostData;
    bool bIsRedirect;
    const char * pchPageTitle;
    bool bNewNavigation;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_URLChanged_t_48(const struct HTML_URLChanged_t *lin, struct winHTML_URLChanged_t_48 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
    win->pchPageTitle = lin->pchPageTitle;
    win->bNewNavigation = lin->bNewNavigation;
}
#endif

#ifdef __i386__
void cb_HTML_URLChanged_t_24(const struct HTML_URLChanged_t *lin, struct winHTML_URLChanged_t_24 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchPostData = lin->pchPostData;
    win->bIsRedirect = lin->bIsRedirect;
    win->pchPageTitle = lin->pchPageTitle;
    win->bNewNavigation = lin->bNewNavigation;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_FinishedRequest_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPageTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_FinishedRequest_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    const char * pchPageTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_FinishedRequest_t_24(const struct HTML_FinishedRequest_t *lin, struct winHTML_FinishedRequest_t_24 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchPageTitle = lin->pchPageTitle;
}
#endif

#ifdef __i386__
void cb_HTML_FinishedRequest_t_12(const struct HTML_FinishedRequest_t *lin, struct winHTML_FinishedRequest_t_12 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->pchPageTitle = lin->pchPageTitle;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_OpenLinkInNewTab_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_OpenLinkInNewTab_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_OpenLinkInNewTab_t_16(const struct HTML_OpenLinkInNewTab_t *lin, struct winHTML_OpenLinkInNewTab_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
}
#endif

#ifdef __i386__
void cb_HTML_OpenLinkInNewTab_t_8(const struct HTML_OpenLinkInNewTab_t *lin, struct winHTML_OpenLinkInNewTab_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_ChangedTitle_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_ChangedTitle_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_ChangedTitle_t_16(const struct HTML_ChangedTitle_t *lin, struct winHTML_ChangedTitle_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
}
#endif

#ifdef __i386__
void cb_HTML_ChangedTitle_t_8(const struct HTML_ChangedTitle_t *lin, struct winHTML_ChangedTitle_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_LinkAtPosition_t_20 {
    HHTMLBrowser unBrowserHandle;
    uint32 x;
    uint32 y;
    const char * pchURL;
    bool bInput;
    bool bLiveLink;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_LinkAtPosition_t_32 {
    HHTMLBrowser unBrowserHandle;
    uint32 x;
    uint32 y;
    const char * pchURL;
    bool bInput;
    bool bLiveLink;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_LinkAtPosition_t_32(const struct HTML_LinkAtPosition_t *lin, struct winHTML_LinkAtPosition_t_32 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->x = lin->x;
    win->y = lin->y;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->bInput = lin->bInput;
    win->bLiveLink = lin->bLiveLink;
}
#endif

#ifdef __i386__
void cb_HTML_LinkAtPosition_t_20(const struct HTML_LinkAtPosition_t *lin, struct winHTML_LinkAtPosition_t_20 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->x = lin->x;
    win->y = lin->y;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->bInput = lin->bInput;
    win->bLiveLink = lin->bLiveLink;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_JSAlert_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_JSAlert_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_JSAlert_t_16(const struct HTML_JSAlert_t *lin, struct winHTML_JSAlert_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}
#endif

#ifdef __i386__
void cb_HTML_JSAlert_t_8(const struct HTML_JSAlert_t *lin, struct winHTML_JSAlert_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_JSConfirm_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_JSConfirm_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMessage;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_JSConfirm_t_16(const struct HTML_JSConfirm_t *lin, struct winHTML_JSConfirm_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}
#endif

#ifdef __i386__
void cb_HTML_JSConfirm_t_8(const struct HTML_JSConfirm_t *lin, struct winHTML_JSConfirm_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMessage = lin->pchMessage;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_FileOpenDialog_t_12 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
    const char * pchInitialFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_FileOpenDialog_t_24 {
    HHTMLBrowser unBrowserHandle;
    const char * pchTitle;
    const char * pchInitialFile;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_FileOpenDialog_t_24(const struct HTML_FileOpenDialog_t *lin, struct winHTML_FileOpenDialog_t_24 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
    steamclient_unix_path_to_dos_path(1, lin->pchInitialFile, g_tmppath, sizeof(g_tmppath), 1);
    win->pchInitialFile = g_tmppath;
}
#endif

#ifdef __i386__
void cb_HTML_FileOpenDialog_t_12(const struct HTML_FileOpenDialog_t *lin, struct winHTML_FileOpenDialog_t_12 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchTitle = lin->pchTitle;
    steamclient_unix_path_to_dos_path(1, lin->pchInitialFile, g_tmppath, sizeof(g_tmppath), 1);
    win->pchInitialFile = g_tmppath;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_NewWindow_t_28 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
    HHTMLBrowser unNewWindow_BrowserHandle_IGNORE;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_NewWindow_t_40 {
    HHTMLBrowser unBrowserHandle;
    const char * pchURL;
    uint32 unX;
    uint32 unY;
    uint32 unWide;
    uint32 unTall;
    HHTMLBrowser unNewWindow_BrowserHandle_IGNORE;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_NewWindow_t_40(const struct HTML_NewWindow_t *lin, struct winHTML_NewWindow_t_40 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->unX = lin->unX;
    win->unY = lin->unY;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unNewWindow_BrowserHandle_IGNORE = lin->unNewWindow_BrowserHandle_IGNORE;
}
#endif

#ifdef __i386__
void cb_HTML_NewWindow_t_28(const struct HTML_NewWindow_t *lin, struct winHTML_NewWindow_t_28 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    steamclient_unix_path_to_dos_path(1, lin->pchURL, g_tmppath, sizeof(g_tmppath), 1);
    win->pchURL = g_tmppath;
    win->unX = lin->unX;
    win->unY = lin->unY;
    win->unWide = lin->unWide;
    win->unTall = lin->unTall;
    win->unNewWindow_BrowserHandle_IGNORE = lin->unNewWindow_BrowserHandle_IGNORE;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_StatusText_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_StatusText_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_StatusText_t_16(const struct HTML_StatusText_t *lin, struct winHTML_StatusText_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#ifdef __i386__
void cb_HTML_StatusText_t_8(const struct HTML_StatusText_t *lin, struct winHTML_StatusText_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_ShowToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_ShowToolTip_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_ShowToolTip_t_16(const struct HTML_ShowToolTip_t *lin, struct winHTML_ShowToolTip_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#ifdef __i386__
void cb_HTML_ShowToolTip_t_8(const struct HTML_ShowToolTip_t *lin, struct winHTML_ShowToolTip_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#ifdef __i386__
#pragma pack( push, 8 )
struct winHTML_UpdateToolTip_t_8 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
#pragma pack( push, 8 )
struct winHTML_UpdateToolTip_t_16 {
    HHTMLBrowser unBrowserHandle;
    const char * pchMsg;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
#endif
#ifdef __x86_64__
void cb_HTML_UpdateToolTip_t_16(const struct HTML_UpdateToolTip_t *lin, struct winHTML_UpdateToolTip_t_16 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#ifdef __i386__
void cb_HTML_UpdateToolTip_t_8(const struct HTML_UpdateToolTip_t *lin, struct winHTML_UpdateToolTip_t_8 *win)
{
    win->unBrowserHandle = lin->unBrowserHandle;
    win->pchMsg = lin->pchMsg;
}
#endif

#pragma pack( push, 8 )
struct winSteamInventoryStartPurchaseResult_t_24 {
    EResult m_result;
    uint64 m_ulOrderID;
    uint64 m_ulTransID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamInventoryStartPurchaseResult_t_24(const struct SteamInventoryStartPurchaseResult_t *lin, struct winSteamInventoryStartPurchaseResult_t_24 *win)
{
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
void cb_GSReputation_t_40(const struct GSReputation_t *lin, struct winGSReputation_t_40 *win)
{
    win->m_eResult = lin->m_eResult;
    win->m_unReputationScore = lin->m_unReputationScore;
    win->m_bBanned = lin->m_bBanned;
    win->m_unBannedIP = lin->m_unBannedIP;
    win->m_usBannedPort = lin->m_usBannedPort;
    win->m_ulBannedGameID = lin->m_ulBannedGameID;
    win->m_unBanExpires = lin->m_unBanExpires;
}

#pragma pack( push, 8 )
struct winSteamNetConnectionStatusChangedCallback_t_712 {
    HSteamNetConnection m_hConn;
    SteamNetConnectionInfo_t m_info __attribute__((aligned(8)));
    ESteamNetworkingConnectionState m_eOldState;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
void cb_SteamNetConnectionStatusChangedCallback_t_712(const struct SteamNetConnectionStatusChangedCallback_t *lin, struct winSteamNetConnectionStatusChangedCallback_t_712 *win)
{
    win->m_hConn = lin->m_hConn;
    win->m_info = lin->m_info;
    win->m_eOldState = lin->m_eOldState;
}


}
