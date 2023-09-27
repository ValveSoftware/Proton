struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32 nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
    uint32 *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params
{
    void *linux_side;
    int _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32 nCurProgress;
    uint32 nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
    uint32 *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetUserAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params
{
    void *linux_side;
    bool _ret;
    bool bAchievementsToo;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_ResetAllStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
    ELeaderboardSortMethod eLeaderboardSortMethod;
    ELeaderboardDisplayType eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params
{
    void *linux_side;
    ELeaderboardSortMethod _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params
{
    void *linux_side;
    ELeaderboardDisplayType _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardDataRequest eLeaderboardDataRequest;
    int nRangeStart;
    int nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    SteamLeaderboardEntries_t hSteamLeaderboardEntries;
    int index;
    LeaderboardEntry_t *pLeaderboardEntry;
    int32 *pDetails;
    int cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod;
    int32 nScore;
    const int32 *pScoreDetails;
    int cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION007_GetNumberOfCurrentPlayers_params *params );

