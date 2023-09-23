struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002;
struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params
{
    void *linux_side;
    uint32_t unVideoAppID;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetVideoURL_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params
{
    void *linux_side;
    bool _ret;
    int32_t *pnNumViewers;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_IsBroadcasting_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params
{
    void *linux_side;
    uint32_t unVideoAppID;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFSettings_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params
{
    void *linux_side;
    bool _ret;
    uint32_t unVideoAppID;
    char *pchBuffer;
    int32_t *pnBufferSize;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V002_GetOPFStringForApp_params *params );

