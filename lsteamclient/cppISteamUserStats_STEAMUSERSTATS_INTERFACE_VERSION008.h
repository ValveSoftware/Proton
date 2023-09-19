struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32_t nCurProgress;
    uint32_t nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
    uint32_t *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetUserAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats_params
{
    void *linux_side;
    bool _ret;
    bool bAchievementsToo;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_ResetAllStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
    uint32_t eLeaderboardSortMethod;
    uint32_t eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardDataRequest;
    int32_t nRangeStart;
    int32_t nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    uint64_t hSteamLeaderboardEntries;
    int32_t index;
    winLeaderboardEntry_t_111x *pLeaderboardEntry;
    int32_t *pDetails;
    int32_t cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint32_t eLeaderboardUploadScoreMethod;
    int32_t nScore;
    const int32_t *pScoreDetails;
    int32_t cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t hSteamLeaderboard;
    uint64_t hUGC;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_AttachLeaderboardUGC_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION008_GetNumberOfCurrentPlayers_params *params );

