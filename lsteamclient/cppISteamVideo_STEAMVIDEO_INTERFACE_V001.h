struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params
{
    void *linux_side;
    AppId_t unVideoAppID;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_GetVideoURL_params *params );

struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params
{
    void *linux_side;
    bool _ret;
    int32_t *pnNumViewers;
};
extern void cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting( struct cppISteamVideo_STEAMVIDEO_INTERFACE_V001_IsBroadcasting_params *params );

