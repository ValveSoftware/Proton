struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params
{
    void *linux_side;
    AppId_t unVideoAppID;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params
{
    void *linux_side;
    bool _ret;
    int *pnNumViewers;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params
{
    void *linux_side;
    AppId_t unVideoAppID;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params
{
    void *linux_side;
    bool _ret;
    AppId_t unVideoAppID;
    char *pchBuffer;
    int32 *pnBufferSize;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params );

