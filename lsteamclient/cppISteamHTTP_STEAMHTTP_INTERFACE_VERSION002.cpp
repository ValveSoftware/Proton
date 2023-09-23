#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_142/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_142
#include "struct_converters.h"
#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002.h"

struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002
{
#ifdef __cplusplus
    virtual uint32_t CreateHTTPRequest( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestContextValue( uint32_t, uint64_t ) = 0;
    virtual bool SetHTTPRequestNetworkActivityTimeout( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestHeaderValue( uint32_t, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestGetOrPostParameter( uint32_t, const char *, const char * ) = 0;
    virtual bool SendHTTPRequest( uint32_t, uint64_t * ) = 0;
    virtual bool SendHTTPRequestAndStreamResponse( uint32_t, uint64_t * ) = 0;
    virtual bool DeferHTTPRequest( uint32_t ) = 0;
    virtual bool PrioritizeHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPResponseHeaderSize( uint32_t, const char *, uint32_t * ) = 0;
    virtual bool GetHTTPResponseHeaderValue( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPResponseBodySize( uint32_t, uint32_t * ) = 0;
    virtual bool GetHTTPResponseBodyData( uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool GetHTTPStreamingResponseBodyData( uint32_t, uint32_t, uint8_t *, uint32_t ) = 0;
    virtual bool ReleaseHTTPRequest( uint32_t ) = 0;
    virtual bool GetHTTPDownloadProgressPct( uint32_t, float * ) = 0;
    virtual bool SetHTTPRequestRawPostBody( uint32_t, const char *, uint8_t *, uint32_t ) = 0;
    virtual uint32_t CreateCookieContainer( bool ) = 0;
    virtual bool ReleaseCookieContainer( uint32_t ) = 0;
    virtual bool SetCookie( uint32_t, const char *, const char *, const char * ) = 0;
    virtual bool SetHTTPRequestCookieContainer( uint32_t, uint32_t ) = 0;
    virtual bool SetHTTPRequestUserAgentInfo( uint32_t, const char * ) = 0;
    virtual bool SetHTTPRequestRequiresVerifiedCertificate( uint32_t, bool ) = 0;
    virtual bool SetHTTPRequestAbsoluteTimeoutMS( uint32_t, uint32_t ) = 0;
    virtual bool GetHTTPRequestWasTimedOut( uint32_t, bool * ) = 0;
#endif /* __cplusplus */
};

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateHTTPRequest( params->eHTTPRequestMethod, params->pchAbsoluteURL );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestContextValue( params->hRequest, params->ulContextValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestNetworkActivityTimeout( params->hRequest, params->unTimeoutSeconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestHeaderValue( params->hRequest, params->pchHeaderName, params->pchHeaderValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestGetOrPostParameter( params->hRequest, params->pchParamName, params->pchParamValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendHTTPRequest( params->hRequest, params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendHTTPRequestAndStreamResponse( params->hRequest, params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->DeferHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->PrioritizeHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderSize( params->hRequest, params->pchHeaderName, params->unResponseHeaderSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderValue( params->hRequest, params->pchHeaderName, params->pHeaderValueBuffer, params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodySize( params->hRequest, params->unBodySize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodyData( params->hRequest, params->pBodyDataBuffer, params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPStreamingResponseBodyData( params->hRequest, params->cOffset, params->pBodyDataBuffer, params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseHTTPRequest( params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPDownloadProgressPct( params->hRequest, params->pflPercentOut );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRawPostBody( params->hRequest, params->pchContentType, params->pubBody, params->unBodyLen );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateCookieContainer( params->bAllowResponsesToModify );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseCookieContainer( params->hCookieContainer );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetCookie( params->hCookieContainer, params->pchHost, params->pchUrl, params->pchCookie );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestCookieContainer( params->hRequest, params->hCookieContainer );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestUserAgentInfo( params->hRequest, params->pchUserAgentInfo );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRequiresVerifiedCertificate( params->hRequest, params->bRequireVerifiedCertificate );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestAbsoluteTimeoutMS( params->hRequest, params->unMilliseconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *params )
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPRequestWasTimedOut( params->hRequest, params->pbWasTimedOut );
}

#ifdef __cplusplus
}
#endif
