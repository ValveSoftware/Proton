#if defined(SDKVER_147) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_147 {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_147 winSteamPartyBeaconLocation_t_147;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_147(const struct winSteamPartyBeaconLocation_t_147 *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_147(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_147 *w);
#endif

#if defined(SDKVER_147) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_147 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_147 winLeaderboardEntry_t_147;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_147(const struct winLeaderboardEntry_t_147 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_147(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_147 *w);
#endif

#if defined(SDKVER_147) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_147 {
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
typedef struct winSteamUGCDetails_t_147 winSteamUGCDetails_t_147;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_147(const struct winSteamUGCDetails_t_147 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_147(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_147 *w);
#endif

#if defined(SDKVER_147) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamNetworkingMessage_t_147 {
    void * m_pData;
    int m_cbSize;
    HSteamNetConnection m_conn;
    SteamNetworkingIdentity m_identityPeer __attribute__((aligned(1)));
    int64 m_nConnUserData;
    SteamNetworkingMicroseconds m_usecTimeReceived;
    int64 m_nMessageNumber;
    void *m_pfnFreeData; /*fn pointer*/
    void *m_pfnRelease; /*fn pointer*/
    int m_nChannel;
    int m_nFlags;
    int64 m_nUserData;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamNetworkingMessage_t_147 winSteamNetworkingMessage_t_147;
struct SteamNetworkingMessage_t;
#endif

#if defined(SDKVER_146) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_146 {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_146 winSteamPartyBeaconLocation_t_146;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_146(const struct winSteamPartyBeaconLocation_t_146 *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_146(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_146 *w);
#endif

#if defined(SDKVER_146) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_146 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_146 winLeaderboardEntry_t_146;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_146(const struct winLeaderboardEntry_t_146 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_146(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_146 *w);
#endif

#if defined(SDKVER_146) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_146 {
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
typedef struct winSteamUGCDetails_t_146 winSteamUGCDetails_t_146;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_146(const struct winSteamUGCDetails_t_146 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_146(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_146 *w);
#endif

#if defined(SDKVER_146) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamNetworkingMessage_t_146 {
    void * m_pData;
    uint32 m_cbSize;
    HSteamNetConnection m_conn;
    SteamNetworkingIdentity m_sender __attribute__((aligned(1)));
    int64 m_nConnUserData;
    SteamNetworkingMicroseconds m_usecTimeReceived;
    int64 m_nMessageNumber;
    void *m_pfnFreeData; /*fn pointer*/
    void *m_pfnRelease; /*fn pointer*/
    int m_nChannel;
    int m___nPadDummy;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamNetworkingMessage_t_146 winSteamNetworkingMessage_t_146;
struct SteamNetworkingMessage_t;
#endif

#if defined(SDKVER_145) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_145 {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_145 winSteamPartyBeaconLocation_t_145;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_145(const struct winSteamPartyBeaconLocation_t_145 *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_145(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_145 *w);
#endif

#if defined(SDKVER_145) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_145 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_145 winLeaderboardEntry_t_145;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_145(const struct winLeaderboardEntry_t_145 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_145(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_145 *w);
#endif

#if defined(SDKVER_145) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_145 {
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
typedef struct winSteamUGCDetails_t_145 winSteamUGCDetails_t_145;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_145(const struct winSteamUGCDetails_t_145 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_145(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_145 *w);
#endif

#if defined(SDKVER_145) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamNetworkingMessage_t_145 {
    void * m_pData;
    uint32 m_cbSize;
    HSteamNetConnection m_conn;
    SteamNetworkingIdentity m_sender __attribute__((aligned(1)));
    int64 m_nConnUserData;
    SteamNetworkingMicroseconds m_usecTimeReceived;
    int64 m_nMessageNumber;
    void *m_pfnFreeData; /*fn pointer*/
    void *m_pfnRelease; /*fn pointer*/
    int m_nChannel;
    int m___nPadDummy;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamNetworkingMessage_t_145 winSteamNetworkingMessage_t_145;
struct SteamNetworkingMessage_t;
#endif

#if defined(SDKVER_144) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_144 {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_144 winSteamPartyBeaconLocation_t_144;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_144(const struct winSteamPartyBeaconLocation_t_144 *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_144(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_144 *w);
#endif

#if defined(SDKVER_144) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_144 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_144 winLeaderboardEntry_t_144;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_144(const struct winLeaderboardEntry_t_144 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_144(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_144 *w);
#endif

#if defined(SDKVER_144) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_144 {
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
typedef struct winSteamUGCDetails_t_144 winSteamUGCDetails_t_144;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_144(const struct winSteamUGCDetails_t_144 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_144(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_144 *w);
#endif

#if defined(SDKVER_144) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamNetworkingMessage_t_144 {
    void * m_pData;
    uint32 m_cbSize;
    HSteamNetConnection m_conn;
    SteamNetworkingIdentity m_sender __attribute__((aligned(1)));
    int64 m_nConnUserData;
    SteamNetworkingMicroseconds m_usecTimeReceived;
    int64 m_nMessageNumber;
    void *m_pfnFreeData; /*fn pointer*/
    void *m_pfnRelease; /*fn pointer*/
    int m_nChannel;
    int m___nPadDummy;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamNetworkingMessage_t_144 winSteamNetworkingMessage_t_144;
struct SteamNetworkingMessage_t;
#endif

#if defined(SDKVER_143y) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_143y {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_143y winSteamPartyBeaconLocation_t_143y;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_143y(const struct winSteamPartyBeaconLocation_t_143y *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_143y(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_143y *w);
#endif

#if defined(SDKVER_143y) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_143y {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_143y winLeaderboardEntry_t_143y;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_143y(const struct winLeaderboardEntry_t_143y *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_143y(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_143y *w);
#endif

#if defined(SDKVER_143y) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_143y {
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
typedef struct winSteamUGCDetails_t_143y winSteamUGCDetails_t_143y;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_143y(const struct winSteamUGCDetails_t_143y *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_143y(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_143y *w);
#endif

#if defined(SDKVER_143x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_143x {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_143x winSteamPartyBeaconLocation_t_143x;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_143x(const struct winSteamPartyBeaconLocation_t_143x *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_143x(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_143x *w);
#endif

#if defined(SDKVER_143x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_143x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_143x winLeaderboardEntry_t_143x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_143x(const struct winLeaderboardEntry_t_143x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_143x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_143x *w);
#endif

#if defined(SDKVER_143x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_143x {
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
typedef struct winSteamUGCDetails_t_143x winSteamUGCDetails_t_143x;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_143x(const struct winSteamUGCDetails_t_143x *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_143x(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_143x *w);
#endif

#if defined(SDKVER_143) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamPartyBeaconLocation_t_143 {
    ESteamPartyBeaconLocationType m_eType;
    uint64 m_ulLocationID;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamPartyBeaconLocation_t_143 winSteamPartyBeaconLocation_t_143;
struct SteamPartyBeaconLocation_t;
extern void win_to_lin_struct_SteamPartyBeaconLocation_t_143(const struct winSteamPartyBeaconLocation_t_143 *w, struct SteamPartyBeaconLocation_t *l);
extern void lin_to_win_struct_SteamPartyBeaconLocation_t_143(const struct SteamPartyBeaconLocation_t *l, struct winSteamPartyBeaconLocation_t_143 *w);
#endif

#if defined(SDKVER_143) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_143 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_143 winLeaderboardEntry_t_143;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_143(const struct winLeaderboardEntry_t_143 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_143(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_143 *w);
#endif

#if defined(SDKVER_143) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_143 {
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
typedef struct winSteamUGCDetails_t_143 winSteamUGCDetails_t_143;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_143(const struct winSteamUGCDetails_t_143 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_143(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_143 *w);
#endif

#if defined(SDKVER_142) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_142 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_142 winLeaderboardEntry_t_142;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_142(const struct winLeaderboardEntry_t_142 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_142(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_142 *w);
#endif

#if defined(SDKVER_142) || !defined(__cplusplus)
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
typedef struct winSteamUGCDetails_t_142 winSteamUGCDetails_t_142;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_142(const struct winSteamUGCDetails_t_142 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_142(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_142 *w);
#endif

#if defined(SDKVER_141) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_141 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_141 winLeaderboardEntry_t_141;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_141(const struct winLeaderboardEntry_t_141 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_141(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_141 *w);
#endif

#if defined(SDKVER_141) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_141 {
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
typedef struct winSteamUGCDetails_t_141 winSteamUGCDetails_t_141;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_141(const struct winSteamUGCDetails_t_141 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_141(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_141 *w);
#endif

#if defined(SDKVER_140) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_140 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_140 winLeaderboardEntry_t_140;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_140(const struct winLeaderboardEntry_t_140 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_140(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_140 *w);
#endif

#if defined(SDKVER_140) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_140 {
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
typedef struct winSteamUGCDetails_t_140 winSteamUGCDetails_t_140;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_140(const struct winSteamUGCDetails_t_140 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_140(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_140 *w);
#endif

#if defined(SDKVER_139) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_139 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_139 winLeaderboardEntry_t_139;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_139(const struct winLeaderboardEntry_t_139 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_139(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_139 *w);
#endif

#if defined(SDKVER_139) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_139 {
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
typedef struct winSteamUGCDetails_t_139 winSteamUGCDetails_t_139;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_139(const struct winSteamUGCDetails_t_139 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_139(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_139 *w);
#endif

#if defined(SDKVER_138a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_138a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_138a winLeaderboardEntry_t_138a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_138a(const struct winLeaderboardEntry_t_138a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_138a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_138a *w);
#endif

#if defined(SDKVER_138a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_138a {
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
typedef struct winSteamUGCDetails_t_138a winSteamUGCDetails_t_138a;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_138a(const struct winSteamUGCDetails_t_138a *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_138a(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_138a *w);
#endif

#if defined(SDKVER_138) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_138 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_138 winLeaderboardEntry_t_138;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_138(const struct winLeaderboardEntry_t_138 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_138(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_138 *w);
#endif

#if defined(SDKVER_138) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_138 {
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
typedef struct winSteamUGCDetails_t_138 winSteamUGCDetails_t_138;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_138(const struct winSteamUGCDetails_t_138 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_138(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_138 *w);
#endif

#if defined(SDKVER_137) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_137 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_137 winLeaderboardEntry_t_137;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_137(const struct winLeaderboardEntry_t_137 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_137(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_137 *w);
#endif

#if defined(SDKVER_137) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_137 {
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
typedef struct winSteamUGCDetails_t_137 winSteamUGCDetails_t_137;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_137(const struct winSteamUGCDetails_t_137 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_137(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_137 *w);
#endif

#if defined(SDKVER_136) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_136 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_136 winLeaderboardEntry_t_136;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_136(const struct winLeaderboardEntry_t_136 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_136(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_136 *w);
#endif

#if defined(SDKVER_136) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_136 {
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
typedef struct winSteamUGCDetails_t_136 winSteamUGCDetails_t_136;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_136(const struct winSteamUGCDetails_t_136 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_136(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_136 *w);
#endif

#if defined(SDKVER_135a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_135a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_135a winLeaderboardEntry_t_135a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_135a(const struct winLeaderboardEntry_t_135a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_135a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_135a *w);
#endif

#if defined(SDKVER_135a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_135a {
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
typedef struct winSteamUGCDetails_t_135a winSteamUGCDetails_t_135a;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_135a(const struct winSteamUGCDetails_t_135a *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_135a(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_135a *w);
#endif

#if defined(SDKVER_135) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_135 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_135 winLeaderboardEntry_t_135;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_135(const struct winLeaderboardEntry_t_135 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_135(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_135 *w);
#endif

#if defined(SDKVER_135) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_135 {
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
typedef struct winSteamUGCDetails_t_135 winSteamUGCDetails_t_135;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_135(const struct winSteamUGCDetails_t_135 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_135(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_135 *w);
#endif

#if defined(SDKVER_134) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_134 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_134 winLeaderboardEntry_t_134;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_134(const struct winLeaderboardEntry_t_134 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_134(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_134 *w);
#endif

#if defined(SDKVER_134) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_134 {
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
typedef struct winSteamUGCDetails_t_134 winSteamUGCDetails_t_134;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_134(const struct winSteamUGCDetails_t_134 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_134(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_134 *w);
#endif

#if defined(SDKVER_133x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_133x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_133x winLeaderboardEntry_t_133x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_133x(const struct winLeaderboardEntry_t_133x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_133x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_133x *w);
#endif

#if defined(SDKVER_133x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_133x {
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
typedef struct winSteamUGCDetails_t_133x winSteamUGCDetails_t_133x;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_133x(const struct winSteamUGCDetails_t_133x *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_133x(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_133x *w);
#endif

#if defined(SDKVER_133b) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_133b {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_133b winLeaderboardEntry_t_133b;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_133b(const struct winLeaderboardEntry_t_133b *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_133b(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_133b *w);
#endif

#if defined(SDKVER_133b) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_133b {
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
typedef struct winSteamUGCDetails_t_133b winSteamUGCDetails_t_133b;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_133b(const struct winSteamUGCDetails_t_133b *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_133b(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_133b *w);
#endif

#if defined(SDKVER_133a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_133a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_133a winLeaderboardEntry_t_133a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_133a(const struct winLeaderboardEntry_t_133a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_133a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_133a *w);
#endif

#if defined(SDKVER_133a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_133a {
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
typedef struct winSteamUGCDetails_t_133a winSteamUGCDetails_t_133a;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_133a(const struct winSteamUGCDetails_t_133a *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_133a(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_133a *w);
#endif

#if defined(SDKVER_133) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_133 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_133 winLeaderboardEntry_t_133;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_133(const struct winLeaderboardEntry_t_133 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_133(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_133 *w);
#endif

#if defined(SDKVER_133) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_133 {
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
typedef struct winSteamUGCDetails_t_133 winSteamUGCDetails_t_133;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_133(const struct winSteamUGCDetails_t_133 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_133(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_133 *w);
#endif

#if defined(SDKVER_132x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_132x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_132x winLeaderboardEntry_t_132x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_132x(const struct winLeaderboardEntry_t_132x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_132x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_132x *w);
#endif

#if defined(SDKVER_132x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_132x {
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
typedef struct winSteamUGCDetails_t_132x winSteamUGCDetails_t_132x;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_132x(const struct winSteamUGCDetails_t_132x *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_132x(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_132x *w);
#endif

#if defined(SDKVER_132) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_132 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_132 winLeaderboardEntry_t_132;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_132(const struct winLeaderboardEntry_t_132 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_132(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_132 *w);
#endif

#if defined(SDKVER_132) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_132 {
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
typedef struct winSteamUGCDetails_t_132 winSteamUGCDetails_t_132;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_132(const struct winSteamUGCDetails_t_132 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_132(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_132 *w);
#endif

#if defined(SDKVER_131) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_131 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_131 winLeaderboardEntry_t_131;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_131(const struct winLeaderboardEntry_t_131 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_131(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_131 *w);
#endif

#if defined(SDKVER_131) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_131 {
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
typedef struct winSteamUGCDetails_t_131 winSteamUGCDetails_t_131;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_131(const struct winSteamUGCDetails_t_131 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_131(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_131 *w);
#endif

#if defined(SDKVER_130x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_130x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_130x winLeaderboardEntry_t_130x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_130x(const struct winLeaderboardEntry_t_130x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_130x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_130x *w);
#endif

#if defined(SDKVER_130x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_130x {
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
typedef struct winSteamUGCDetails_t_130x winSteamUGCDetails_t_130x;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_130x(const struct winSteamUGCDetails_t_130x *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_130x(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_130x *w);
#endif

#if defined(SDKVER_130) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_130 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_130 winLeaderboardEntry_t_130;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_130(const struct winLeaderboardEntry_t_130 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_130(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_130 *w);
#endif

#if defined(SDKVER_130) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_130 {
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
typedef struct winSteamUGCDetails_t_130 winSteamUGCDetails_t_130;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_130(const struct winSteamUGCDetails_t_130 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_130(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_130 *w);
#endif

#if defined(SDKVER_129a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_129a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_129a winLeaderboardEntry_t_129a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_129a(const struct winLeaderboardEntry_t_129a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_129a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_129a *w);
#endif

#if defined(SDKVER_129a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_129a {
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
typedef struct winSteamUGCDetails_t_129a winSteamUGCDetails_t_129a;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_129a(const struct winSteamUGCDetails_t_129a *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_129a(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_129a *w);
#endif

#if defined(SDKVER_129) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_129 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_129 winLeaderboardEntry_t_129;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_129(const struct winLeaderboardEntry_t_129 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_129(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_129 *w);
#endif

#if defined(SDKVER_129) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_129 {
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
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamUGCDetails_t_129 winSteamUGCDetails_t_129;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_129(const struct winSteamUGCDetails_t_129 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_129(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_129 *w);
#endif

#if defined(SDKVER_128x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_128x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_128x winLeaderboardEntry_t_128x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_128x(const struct winLeaderboardEntry_t_128x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_128x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_128x *w);
#endif

#if defined(SDKVER_128x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_128x {
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
typedef struct winSteamUGCDetails_t_128x winSteamUGCDetails_t_128x;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_128x(const struct winSteamUGCDetails_t_128x *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_128x(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_128x *w);
#endif

#if defined(SDKVER_128) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_128 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_128 winLeaderboardEntry_t_128;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_128(const struct winLeaderboardEntry_t_128 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_128(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_128 *w);
#endif

#if defined(SDKVER_128) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_128 {
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
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamUGCDetails_t_128 winSteamUGCDetails_t_128;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_128(const struct winSteamUGCDetails_t_128 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_128(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_128 *w);
#endif

#if defined(SDKVER_127) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_127 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_127 winLeaderboardEntry_t_127;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_127(const struct winLeaderboardEntry_t_127 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_127(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_127 *w);
#endif

#if defined(SDKVER_127) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_127 {
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
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamUGCDetails_t_127 winSteamUGCDetails_t_127;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_127(const struct winSteamUGCDetails_t_127 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_127(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_127 *w);
#endif

#if defined(SDKVER_126a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_126a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_126a winLeaderboardEntry_t_126a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_126a(const struct winLeaderboardEntry_t_126a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_126a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_126a *w);
#endif

#if defined(SDKVER_126a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_126a {
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
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamUGCDetails_t_126a winSteamUGCDetails_t_126a;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_126a(const struct winSteamUGCDetails_t_126a *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_126a(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_126a *w);
#endif

#if defined(SDKVER_126) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_126 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_126 winLeaderboardEntry_t_126;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_126(const struct winLeaderboardEntry_t_126 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_126(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_126 *w);
#endif

#if defined(SDKVER_126) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winSteamUGCDetails_t_126 {
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
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winSteamUGCDetails_t_126 winSteamUGCDetails_t_126;
struct SteamUGCDetails_t;
extern void win_to_lin_struct_SteamUGCDetails_t_126(const struct winSteamUGCDetails_t_126 *w, struct SteamUGCDetails_t *l);
extern void lin_to_win_struct_SteamUGCDetails_t_126(const struct SteamUGCDetails_t *l, struct winSteamUGCDetails_t_126 *w);
#endif

#if defined(SDKVER_125) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_125 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_125 winLeaderboardEntry_t_125;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_125(const struct winLeaderboardEntry_t_125 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_125(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_125 *w);
#endif

#if defined(SDKVER_124) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_124 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_124 winLeaderboardEntry_t_124;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_124(const struct winLeaderboardEntry_t_124 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_124(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_124 *w);
#endif

#if defined(SDKVER_123a) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_123a {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_123a winLeaderboardEntry_t_123a;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_123a(const struct winLeaderboardEntry_t_123a *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_123a(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_123a *w);
#endif

#if defined(SDKVER_123) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_123 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_123 winLeaderboardEntry_t_123;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_123(const struct winLeaderboardEntry_t_123 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_123(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_123 *w);
#endif

#if defined(SDKVER_122) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_122 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_122 winLeaderboardEntry_t_122;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_122(const struct winLeaderboardEntry_t_122 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_122(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_122 *w);
#endif

#if defined(SDKVER_121x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_121x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_121x winLeaderboardEntry_t_121x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_121x(const struct winLeaderboardEntry_t_121x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_121x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_121x *w);
#endif

#if defined(SDKVER_121) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_121 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_121 winLeaderboardEntry_t_121;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_121(const struct winLeaderboardEntry_t_121 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_121(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_121 *w);
#endif

#if defined(SDKVER_120) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_120 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_120 winLeaderboardEntry_t_120;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_120(const struct winLeaderboardEntry_t_120 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_120(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_120 *w);
#endif

#if defined(SDKVER_119x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_119x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_119x winLeaderboardEntry_t_119x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_119x(const struct winLeaderboardEntry_t_119x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_119x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_119x *w);
#endif

#if defined(SDKVER_119) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_119 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_119 winLeaderboardEntry_t_119;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_119(const struct winLeaderboardEntry_t_119 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_119(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_119 *w);
#endif

#if defined(SDKVER_118) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_118 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_118 winLeaderboardEntry_t_118;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_118(const struct winLeaderboardEntry_t_118 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_118(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_118 *w);
#endif

#if defined(SDKVER_117) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_117 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_117 winLeaderboardEntry_t_117;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_117(const struct winLeaderboardEntry_t_117 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_117(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_117 *w);
#endif

#if defined(SDKVER_116x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_116x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_116x winLeaderboardEntry_t_116x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_116x(const struct winLeaderboardEntry_t_116x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_116x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_116x *w);
#endif

#if defined(SDKVER_116) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_116 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_116 winLeaderboardEntry_t_116;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_116(const struct winLeaderboardEntry_t_116 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_116(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_116 *w);
#endif

#if defined(SDKVER_115) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_115 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_115 winLeaderboardEntry_t_115;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_115(const struct winLeaderboardEntry_t_115 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_115(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_115 *w);
#endif

#if defined(SDKVER_114) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_114 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_114 winLeaderboardEntry_t_114;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_114(const struct winLeaderboardEntry_t_114 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_114(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_114 *w);
#endif

#if defined(SDKVER_113) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_113 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_113 winLeaderboardEntry_t_113;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_113(const struct winLeaderboardEntry_t_113 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_113(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_113 *w);
#endif

#if defined(SDKVER_112x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_112x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_112x winLeaderboardEntry_t_112x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_112x(const struct winLeaderboardEntry_t_112x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_112x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_112x *w);
#endif

#if defined(SDKVER_112) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_112 {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_112 winLeaderboardEntry_t_112;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_112(const struct winLeaderboardEntry_t_112 *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_112(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_112 *w);
#endif

#if defined(SDKVER_111x) || !defined(__cplusplus)
#pragma pack( push, 8 )
struct winLeaderboardEntry_t_111x {
    CSteamID m_steamIDUser __attribute__((aligned(1)));
    int32 m_nGlobalRank;
    int32 m_nScore;
    int32 m_cDetails;
    UGCHandle_t m_hUGC;
}  __attribute__ ((ms_struct));
#pragma pack( pop )
typedef struct winLeaderboardEntry_t_111x winLeaderboardEntry_t_111x;
struct LeaderboardEntry_t;
extern void win_to_lin_struct_LeaderboardEntry_t_111x(const struct winLeaderboardEntry_t_111x *w, struct LeaderboardEntry_t *l);
extern void lin_to_win_struct_LeaderboardEntry_t_111x(const struct LeaderboardEntry_t *l, struct winLeaderboardEntry_t_111x *w);
#endif

