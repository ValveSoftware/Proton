struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params
{
    void *linux_side;
    int _ret;
    AppId_t nAppID;
    const char *pchKey;
    char *pchValue;
    int cchValueMax;
};
extern void cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData( struct cppISteamApps_STEAMAPPS_INTERFACE_VERSION001_GetAppData_params *params );

