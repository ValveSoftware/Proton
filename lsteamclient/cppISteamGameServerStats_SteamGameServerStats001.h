struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t *pData;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float *pData;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    bool *pbAchieved;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    int32_t nData;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float fData;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
    float flCountThisSession;
    double dSessionLength;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat( struct cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params
{
    void *linux_side;
    bool _ret;
    CSteamID steamIDUser;
    const char *pchName;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement( struct cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement_params *params );

struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params
{
    void *linux_side;
    uint64_t _ret;
    CSteamID steamIDUser;
};
extern void cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats( struct cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats_params *params );

