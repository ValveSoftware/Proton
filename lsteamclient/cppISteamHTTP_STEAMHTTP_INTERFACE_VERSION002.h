struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002;
struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eHTTPRequestMethod;
    const char *pchAbsoluteURL;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t ulContextValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t unTimeoutSeconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    const char *pchHeaderValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchParamName;
    const char *pchParamValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint32_t *unResponseHeaderSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint8_t *pHeaderValueBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t *unBodySize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint8_t *pBodyDataBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t cOffset;
    uint8_t *pBodyDataBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    float *pflPercentOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchContentType;
    uint8_t *pubBody;
    uint32_t unBodyLen;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params
{
    void *linux_side;
    uint32_t _ret;
    bool bAllowResponsesToModify;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params
{
    void *linux_side;
    bool _ret;
    uint32_t hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params
{
    void *linux_side;
    bool _ret;
    uint32_t hCookieContainer;
    const char *pchHost;
    const char *pchUrl;
    const char *pchCookie;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchUserAgentInfo;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    bool bRequireVerifiedCertificate;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t unMilliseconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    bool *pbWasTimedOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *params );

