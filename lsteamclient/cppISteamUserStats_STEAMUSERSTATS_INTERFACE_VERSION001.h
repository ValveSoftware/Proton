struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params
{
    void *linux_side;
    uint32 _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    uint32 iStat;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params
{
    void *linux_side;
    ESteamUserStatType _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params
{
    void *linux_side;
    uint32 _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    uint32 iAchievement;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params
{
    void *linux_side;
    uint32 _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    uint32 iAchievement;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    int32 *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    int32 nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params
{
    void *linux_side;
    bool _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params
{
    void *linux_side;
    int _ret;
    CGameID nGameID;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    CGameID nGameID;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute_params *params );

