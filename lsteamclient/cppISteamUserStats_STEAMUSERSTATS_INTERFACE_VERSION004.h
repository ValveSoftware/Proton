struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004;
struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestCurrentStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float fData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_UpdateAvgRateStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_SetAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_ClearAchievement_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_StoreStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params
{
    void *linux_side;
    int32_t _ret;
    const char *pchName;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementIcon_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params
{
    void *linux_side;
    const char *_ret;
    const char *pchName;
    const char *pchKey;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetAchievementDisplayAttribute_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params
{
    void *linux_side;
    bool _ret;
    const char *pchName;
    uint32_t nCurProgress;
    uint32_t nMaxProgress;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_IndicateAchievementProgress_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_RequestUserStats_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserStat_2_params *params );

struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement( struct cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION004_GetUserAchievement_params *params );

