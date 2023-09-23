struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012;
struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32_t nCurProgress;
    uint32_t nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumAchievements_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName_params
{
    void *linux_side;
    const char *_ret;
    uint32_t iAchievement;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetUserAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats_params
{
    void *linux_side;
    bool _ret;
    bool bAchievementsToo;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_ResetAllStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
    uint32_t eLeaderboardSortMethod;
    uint32_t eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardDataRequest;
    int32_t nRangeStart;
    int32_t nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    CSteamID *prgUsers;
    int32_t cUsers;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_DownloadLeaderboardEntriesForUsers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamLeaderboardEntries;
    int32_t index;
    winLeaderboardEntry_t_158 *pLeaderboardEntry;
    int32_t *pDetails;
    int32_t cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardUploadScoreMethod;
    int32_t nScore;
    const int32_t *pScoreDetails;
    int32_t cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint64_t hUGC;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_AttachLeaderboardUGC_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNumberOfCurrentPlayers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalAchievementPercentages_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo_params
{
    void *linux_side;
    int32_t _ret;
    char *pchName;
    uint32_t unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo_params
{
    void *linux_side;
    int32_t _ret;
    int32_t iIteratorPrevious;
    char *pchName;
    uint32_t unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetNextMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pflPercent;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementAchievedPercent_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats_params
{
    void *linux_side;
    uint64_t _ret;
    int32_t nHistoryDays;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_RequestGlobalStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    int64_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    double *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchStatName;
    int64_t *pData;
    uint32_t cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchStatName;
    double *pData;
    uint32_t cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetGlobalStatHistory_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t *pnMinProgress;
    int32_t *pnMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pfMinProgress;
    float *pfMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION012_GetAchievementProgressLimits_2_params *params );

