struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001;
struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetNumInstalledApps_params *params );

struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pvecAppID;
    uint32_t unMaxAppIDs;
};
extern void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetInstalledApps_params *params );

struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t nAppID;
    char *pchName;
    int32_t cchNameMax;
};
extern void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppName_params *params );

struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t nAppID;
    char *pchDirectory;
    int32_t cchNameMax;
};
extern void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppInstallDir_params *params );

struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params
{
    void *linux_side;
    int32_t _ret;
    uint32_t nAppID;
};
extern void cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId( struct cppISteamAppList_STEAMAPPLIST_INTERFACE_VERSION001_GetAppBuildId_params *params );

