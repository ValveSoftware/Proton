struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007;
struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsDlcInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetEarliestPurchaseUnixTime_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsSubscribedFromFreeWeekend_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDLCCount_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params
{
    void *linux_side;
    bool _ret;
    int32_t iDLC;
    uint32_t *pAppID;
    bool *pbAvailable;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BGetDLCDataByIndex_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_InstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_UninstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_RequestAppProofOfPurchaseKey_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params
{
    void *linux_side;
    bool _ret;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetCurrentBetaName_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params
{
    void *linux_side;
    bool _ret;
    bool bMissingFilesOnly;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_MarkContentCorrupt_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t appID;
    uint32_t *pvecDepots;
    uint32_t cMaxDepots;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetInstalledDepots_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t appID;
    char *pchFolder;
    uint32_t cchFolderBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppInstallDir_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_BIsAppInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppOwner_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params
{
    void *linux_side;
    const char *_ret;
    const char *pchKey;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetLaunchQueryParam_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params
{
    void *linux_side;
    bool _ret;
    uint32_t nAppID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetDlcDownloadProgress_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION007_GetAppBuildId_params *params );

