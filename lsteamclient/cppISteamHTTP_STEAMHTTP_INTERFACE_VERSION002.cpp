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
void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->CreateHTTPRequest( (EHTTPMethod)params->eHTTPRequestMethod, (const char *)params->pchAbsoluteURL );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestContextValue( (HTTPRequestHandle)params->hRequest, (uint64)params->ulContextValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestNetworkActivityTimeout( (HTTPRequestHandle)params->hRequest, (uint32)params->unTimeoutSeconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestHeaderValue( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (const char *)params->pchHeaderValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestGetOrPostParameter( (HTTPRequestHandle)params->hRequest, (const char *)params->pchParamName, (const char *)params->pchParamValue );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SendHTTPRequest( (HTTPRequestHandle)params->hRequest, (SteamAPICall_t *)params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SendHTTPRequestAndStreamResponse( (HTTPRequestHandle)params->hRequest, (SteamAPICall_t *)params->pCallHandle );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->DeferHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->PrioritizeHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseHeaderSize( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (uint32 *)params->unResponseHeaderSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseHeaderValue( (HTTPRequestHandle)params->hRequest, (const char *)params->pchHeaderName, (uint8 *)params->pHeaderValueBuffer, (uint32)params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseBodySize( (HTTPRequestHandle)params->hRequest, (uint32 *)params->unBodySize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPResponseBodyData( (HTTPRequestHandle)params->hRequest, (uint8 *)params->pBodyDataBuffer, (uint32)params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPStreamingResponseBodyData( (HTTPRequestHandle)params->hRequest, (uint32)params->cOffset, (uint8 *)params->pBodyDataBuffer, (uint32)params->unBufferSize );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->ReleaseHTTPRequest( (HTTPRequestHandle)params->hRequest );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPDownloadProgressPct( (HTTPRequestHandle)params->hRequest, (float *)params->pflPercentOut );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestRawPostBody( (HTTPRequestHandle)params->hRequest, (const char *)params->pchContentType, (uint8 *)params->pubBody, (uint32)params->unBodyLen );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->CreateCookieContainer( (bool)params->bAllowResponsesToModify );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->ReleaseCookieContainer( (HTTPCookieContainerHandle)params->hCookieContainer );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetCookie( (HTTPCookieContainerHandle)params->hCookieContainer, (const char *)params->pchHost, (const char *)params->pchUrl, (const char *)params->pchCookie );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestCookieContainer( (HTTPRequestHandle)params->hRequest, (HTTPCookieContainerHandle)params->hCookieContainer );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestUserAgentInfo( (HTTPRequestHandle)params->hRequest, (const char *)params->pchUserAgentInfo );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestRequiresVerifiedCertificate( (HTTPRequestHandle)params->hRequest, (bool)params->bRequireVerifiedCertificate );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->SetHTTPRequestAbsoluteTimeoutMS( (HTTPRequestHandle)params->hRequest, (uint32)params->unMilliseconds );
}

void cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *params )
{
    params->_ret = ((ISteamHTTP*)params->linux_side)->GetHTTPRequestWasTimedOut( (HTTPRequestHandle)params->hRequest, (bool *)params->pbWasTimedOut );
}

#ifdef __cplusplus
}
#endif
