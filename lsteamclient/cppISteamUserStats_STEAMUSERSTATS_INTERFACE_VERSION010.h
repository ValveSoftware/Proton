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
    int32 *pData;
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
    int32 nData;
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
    uint32 *punUnlockTime;
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
    int _ret;
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
    uint32 nCurProgress;
    uint32 nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32 *pData;
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
    uint32 *punUnlockTime;
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
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
    ELeaderboardSortMethod eLeaderboardSortMethod;
    ELeaderboardDisplayType eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params
{
    void *linux_side;
    ELeaderboardSortMethod _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params
{
    void *linux_side;
    ELeaderboardDisplayType _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardDataRequest eLeaderboardDataRequest;
    int nRangeStart;
    int nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    CSteamID *prgUsers;
    int cUsers;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    SteamLeaderboardEntries_t hSteamLeaderboardEntries;
    int index;
    winLeaderboardEntry_t_119 *pLeaderboardEntry;
    int32 *pDetails;
    int cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod;
    int32 nScore;
    const int32 *pScoreDetails;
    int cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    UGCHandle_t hUGC;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params
{
    void *linux_side;
    int _ret;
    char *pchName;
    uint32 unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo_params
{
    void *linux_side;
    int _ret;
    int iIteratorPrevious;
    char *pchName;
    uint32 unNameBufLen;
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
    SteamAPICall_t _ret;
    int nHistoryDays;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    int64 *pData;
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
    int32 _ret;
    const char *pchStatName;
    int64 *pData;
    uint32 cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params
{
    void *linux_side;
    int32 _ret;
    const char *pchStatName;
    double *pData;
    uint32 cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2_params *params );

