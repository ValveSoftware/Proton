struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32 nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
    uint32 *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params
{
    void *linux_side;
    int _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32 nCurProgress;
    uint32 nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params
{
    void *linux_side;
    uint32 _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumAchievements_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params
{
    void *linux_side;
    const char *_ret;
    uint32 iAchievement;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
    uint32 *punUnlockTime;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetUserAchievementAndUnlockTime_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params
{
    void *linux_side;
    bool _ret;
    bool bAchievementsToo;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_ResetAllStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
    ELeaderboardSortMethod eLeaderboardSortMethod;
    ELeaderboardDisplayType eLeaderboardDisplayType;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindOrCreateLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    const char *pchLeaderboardName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_FindLeaderboard_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params
{
    void *linux_side;
    const char *_ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params
{
    void *linux_side;
    int _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardEntryCount_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params
{
    void *linux_side;
    ELeaderboardSortMethod _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardSortMethod_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params
{
    void *linux_side;
    ELeaderboardDisplayType _ret;
    SteamLeaderboard_t hSteamLeaderboard;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetLeaderboardDisplayType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardDataRequest eLeaderboardDataRequest;
    int nRangeStart;
    int nRangeEnd;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntries_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    CSteamID *prgUsers;
    int cUsers;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_DownloadLeaderboardEntriesForUsers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params
{
    void *linux_side;
    bool _ret;
    SteamLeaderboardEntries_t hSteamLeaderboardEntries;
    int index;
    winLeaderboardEntry_t_148a *pLeaderboardEntry;
    int32 *pDetails;
    int cDetailsMax;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetDownloadedLeaderboardEntry_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    ELeaderboardUploadScoreMethod eLeaderboardUploadScoreMethod;
    int32 nScore;
    const int32 *pScoreDetails;
    int cScoreDetailsCount;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_UploadLeaderboardScore_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    SteamLeaderboard_t hSteamLeaderboard;
    UGCHandle_t hUGC;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_AttachLeaderboardUGC_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNumberOfCurrentPlayers_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params
{
    void *linux_side;
    SteamAPICall_t _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalAchievementPercentages_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params
{
    void *linux_side;
    int _ret;
    char *pchName;
    uint32 unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params
{
    void *linux_side;
    int _ret;
    int iIteratorPrevious;
    char *pchName;
    uint32 unNameBufLen;
    float *pflPercent;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetNextMostAchievedAchievementInfo_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pflPercent;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetAchievementAchievedPercent_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params
{
    void *linux_side;
    SteamAPICall_t _ret;
    int nHistoryDays;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_RequestGlobalStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    int64 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchStatName;
    double *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params
{
    void *linux_side;
    int32 _ret;
    const char *pchStatName;
    int64 *pData;
    uint32 cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params
{
    void *linux_side;
    int32 _ret;
    const char *pchStatName;
    double *pData;
    uint32 cubData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION011_GetGlobalStatHistory_2_params *params );

