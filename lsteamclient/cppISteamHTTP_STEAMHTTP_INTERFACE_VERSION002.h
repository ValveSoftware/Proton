struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params
{
    void *linux_side;
    HTTPRequestHandle _ret;
    uint32_t eHTTPRequestMethod;
    const char *pchAbsoluteURL;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint64 ulContextValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 unTimeoutSeconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    const char *pchHeaderValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchParamName;
    const char *pchParamValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    SteamAPICall_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    SteamAPICall_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    uint32 *unResponseHeaderSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    uint8 *pHeaderValueBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 *unBodySize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint8 *pBodyDataBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 cOffset;
    uint8 *pBodyDataBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    float *pflPercentOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchContentType;
    uint8 *pubBody;
    uint32 unBodyLen;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params
{
    void *linux_side;
    HTTPCookieContainerHandle _ret;
    bool bAllowResponsesToModify;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params
{
    void *linux_side;
    bool _ret;
    HTTPCookieContainerHandle hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params
{
    void *linux_side;
    bool _ret;
    HTTPCookieContainerHandle hCookieContainer;
    const char *pchHost;
    const char *pchUrl;
    const char *pchCookie;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    HTTPCookieContainerHandle hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchUserAgentInfo;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    bool bRequireVerifiedCertificate;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 unMilliseconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    bool *pbWasTimedOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *params );

