struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003;
struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t eHTTPRequestMethod;
    const char *pchAbsoluteURL;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t ulContextValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t unTimeoutSeconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    const char *pchHeaderValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchParamName;
    const char *pchParamValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint64_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint32_t *unResponseHeaderSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchHeaderName;
    uint8_t *pHeaderValueBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t *unBodySize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint8_t *pBodyDataBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t cOffset;
    uint8_t *pBodyDataBuffer;
    uint32_t unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    float *pflPercentOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchContentType;
    uint8_t *pubBody;
    uint32_t unBodyLen;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params
{
    void *linux_side;
    uint32_t _ret;
    bool bAllowResponsesToModify;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params
{
    void *linux_side;
    bool _ret;
    uint32_t hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params
{
    void *linux_side;
    bool _ret;
    uint32_t hCookieContainer;
    const char *pchHost;
    const char *pchUrl;
    const char *pchCookie;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    const char *pchUserAgentInfo;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    bool bRequireVerifiedCertificate;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    uint32_t unMilliseconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params
{
    void *linux_side;
    bool _ret;
    uint32_t hRequest;
    bool *pbWasTimedOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params *params );

