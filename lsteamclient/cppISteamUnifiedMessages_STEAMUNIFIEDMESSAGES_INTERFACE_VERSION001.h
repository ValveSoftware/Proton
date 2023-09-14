struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params
{
    void *linux_side;
    ClientUnifiedMessageHandle _ret;
    const char *pchServiceMethod;
    const void *pRequestBuffer;
    uint32_t unRequestBufferSize;
    uint64_t unContext;
};
extern void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod_params *params );

struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params
{
    void *linux_side;
    bool _ret;
    ClientUnifiedMessageHandle hHandle;
    uint32_t *punResponseSize;
    uint32_t *peResult;
};
extern void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo_params *params );

struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params
{
    void *linux_side;
    bool _ret;
    ClientUnifiedMessageHandle hHandle;
    void *pResponseBuffer;
    uint32_t unResponseBufferSize;
    bool bAutoRelease;
};
extern void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData_params *params );

struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params
{
    void *linux_side;
    bool _ret;
    ClientUnifiedMessageHandle hHandle;
};
extern void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod_params *params );

struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params
{
    void *linux_side;
    bool _ret;
    const char *pchServiceNotification;
    const void *pNotificationBuffer;
    uint32_t unNotificationBufferSize;
};
extern void cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification( struct cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification_params *params );

