struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eHTTPRequestMethod;
    const char *pchAbsoluteURL;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t ulContextValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t unTimeoutSeconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    const char *pchHeaderValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchParamName;
    const char *pchParamValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint32_t *unResponseHeaderSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint8_t *pHeaderValueBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t *unBodySize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint8_t *pBodyDataBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    float *pflPercentOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchContentType;
    uint8_t *pubBody;
    uint32_t unBodyLen;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params *params );

