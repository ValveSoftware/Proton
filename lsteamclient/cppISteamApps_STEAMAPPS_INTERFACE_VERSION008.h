struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008;
struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsDlcInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetEarliestPurchaseUnixTime_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFreeWeekend_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDLCCount_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params
{
    void *linux_side;
    bool _ret;
    int32_t iDLC;
    uint32_t *pAppID;
    bool *pbAvailable;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BGetDLCDataByIndex_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_InstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_UninstallDLC_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params
{
    void *linux_side;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAppProofOfPurchaseKey_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params
{
    void *linux_side;
    bool _ret;
    char *pchName;
    int32_t cchNameBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetCurrentBetaName_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params
{
    void *linux_side;
    bool _ret;
    bool bMissingFilesOnly;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_MarkContentCorrupt_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t appID;
    uint32_t *pvecDepots;
    uint32_t cMaxDepots;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetInstalledDepots_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t appID;
    char *pchFolder;
    uint32_t cchFolderBufferSize;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppInstallDir_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsAppInstalled_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppOwner_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params
{
    void *linux_side;
    const char *_ret;
    const char *pchKey;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchQueryParam_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params
{
    void *linux_side;
    bool _ret;
    uint32_t nAppID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetDlcDownloadProgress_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetAppBuildId_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params
{
    void *linux_side;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_RequestAllProofOfPurchaseKeys_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params
{
    void *linux_side;
    uint64_t _ret;
    const char *pszFileName;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetFileDetails_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params
{
    void *linux_side;
    int32_t _ret;
    char *pszCommandLine;
    int32_t cubCommandLine;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_GetLaunchCommandLine_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsSubscribedFromFamilySharing_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params
{
    void *linux_side;
    bool _ret;
    uint32_t *punSecondsAllowed;
    uint32_t *punSecondsPlayed;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_BIsTimedTrial_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params
{
    void *linux_side;
    bool _ret;
    uint32_t nAppID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION008_SetDlcContext_params *params );

