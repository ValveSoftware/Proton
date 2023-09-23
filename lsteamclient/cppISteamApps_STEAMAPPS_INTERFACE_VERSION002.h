struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002;
struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribed_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsLowViolence_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsCybercafe_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsVACBanned_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetCurrentGameLanguage_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params
{
    void *linux_side;
    const char *_ret;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_GetAvailableGameLanguages_params *params );

struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t appID;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION002_BIsSubscribedApp_params *params );

