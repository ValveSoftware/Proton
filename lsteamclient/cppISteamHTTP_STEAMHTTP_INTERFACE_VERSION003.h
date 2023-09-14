struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params
{
    void *linux_side;
    HTTPRequestHandle _ret;
    uint32_t eHTTPRequestMethod;
    const char *pchAbsoluteURL;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint64 ulContextValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 unTimeoutSeconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    const char *pchHeaderValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchParamName;
    const char *pchParamValue;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    SteamAPICall_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    SteamAPICall_t *pCallHandle;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    uint32 *unResponseHeaderSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchHeaderName;
    uint8 *pHeaderValueBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 *unBodySize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint8 *pBodyDataBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 cOffset;
    uint8 *pBodyDataBuffer;
    uint32 unBufferSize;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    float *pflPercentOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchContentType;
    uint8 *pubBody;
    uint32 unBodyLen;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params
{
    void *linux_side;
    HTTPCookieContainerHandle _ret;
    bool bAllowResponsesToModify;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params
{
    void *linux_side;
    bool _ret;
    HTTPCookieContainerHandle hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params
{
    void *linux_side;
    bool _ret;
    HTTPCookieContainerHandle hCookieContainer;
    const char *pchHost;
    const char *pchUrl;
    const char *pchCookie;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    HTTPCookieContainerHandle hCookieContainer;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    const char *pchUserAgentInfo;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    bool bRequireVerifiedCertificate;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    uint32 unMilliseconds;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params *params );

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params
{
    void *linux_side;
    bool _ret;
    HTTPRequestHandle hRequest;
    bool *pbWasTimedOut;
};
extern void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params *params );

