struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010;
struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32_t nCurProgress;
    uint32_t nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params
{
    void *linux_side;
    bool _ret;
    bool bAchievementsToo;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
    uint32_t eLeaderboardSortMethod;
    uint32_t eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardDataRequest;
    int32_t nRangeStart;
    int32_t nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    CSteamID *prgUsers;
    int32_t cUsers;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamLeaderboardEntries;
    int32_t index;
    winLeaderboardEntry_t_119 *pLeaderboardEntry;
    int32_t *pDetails;
    int32_t cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardUploadScoreMethod;
    int32_t nScore;
    const int32_t *pScoreDetails;
    int32_t cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint64_t hUGC;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params
{
    void *linux_side;
    int32_t _ret;
    char *pchName;
    uint32_t unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iIteratorPrevious;
    char *pchName;
    uint32_t unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pflPercent;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t nHistoryDays;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    int64_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    double *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchStatName;
    int64_t *pData;
    uint32_t cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchStatName;
    double *pData;
    uint32_t cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params *params );

