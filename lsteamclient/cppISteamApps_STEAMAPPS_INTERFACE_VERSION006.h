struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsDlcInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params
{
    void *linux_side;
    uint32_t _ret;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetEarliestPurchaseUnixTime_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsSubscribedFromFreeWeekend_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetDLCCount_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params
{
    void *linux_side;
    bool _ret;
    int32_t iDLC;
    AppId_t *pAppID;
    bool *pbAvailable;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BGetDLCDataByIndex_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_InstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_UninstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params
{
    void *linux_side;
    AppId_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_RequestAppProofOfPurchaseKey_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params
{
    void *linux_side;
    bool _ret;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetCurrentBetaName_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params
{
    void *linux_side;
    bool _ret;
    bool bMissingFilesOnly;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_MarkContentCorrupt_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params
{
    void *linux_side;
    uint32_t _ret;
    AppId_t appID;
    DepotId_t *pvecDepots;
    uint32_t cMaxDepots;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetInstalledDepots_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params
{
    void *linux_side;
    uint32_t _ret;
    AppId_t appID;
    char *pchFolder;
    uint32_t cchFolderBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppInstallDir_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params
{
    void *linux_side;
    bool _ret;
    AppId_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_BIsAppInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetAppOwner_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params
{
    void *linux_side;
    const char *_ret;
    const char *pchKey;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION006_GetLaunchQueryParam_params *params );

