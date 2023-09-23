struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003;
struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsSubscribedApp_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION003_BIsDlcInstalled_params *params );

