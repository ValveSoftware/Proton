struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsDlcInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime_params
{
    void *linux_side;
    uint32 _ret;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetEarliestPurchaseUnixTime_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsSubscribedFromFreeWeekend_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount_params
{
    void *linux_side;
    int _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetDLCCount_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex_params
{
    void *linux_side;
    bool _ret;
    int iDLC;
    AppId_t *pAppID;
    bool *pbAvailable;
    char *pchName;
    int cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BGetDLCDataByIndex_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_InstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_UninstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_RequestAppProofOfPurchaseKey_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName_params
{
    void *linux_side;
    bool _ret;
    char *pchName;
    int cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetCurrentBetaName_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt_params
{
    void *linux_side;
    bool _ret;
    bool bMissingFilesOnly;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_MarkContentCorrupt_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots_params
{
    void *linux_side;
    uint32 _ret;
    DepotId_t *pvecDepots;
    uint32 cMaxDepots;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetInstalledDepots_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir_params
{
    void *linux_side;
    uint32 _ret;
    AppId_t appID;
    char *pchFolder;
    uint32 cchFolderBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_GetAppInstallDir_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION005_BIsAppInstalled_params *params );

