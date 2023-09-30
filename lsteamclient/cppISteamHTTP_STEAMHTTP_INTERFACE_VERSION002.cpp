/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateHTTPRequest( params->eHTTPRequestMethod, params->pchAbsoluteURL );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestContextValue( params->hRequest, params->ulContextValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestNetworkActivityTimeout( params->hRequest, params->unTimeoutSeconds );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestHeaderValue( params->hRequest, params->pchHeaderName, params->pchHeaderValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestGetOrPostParameter( params->hRequest, params->pchParamName, params->pchParamValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendHTTPRequest( params->hRequest, params->pCallHandle );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SendHTTPRequestAndStreamResponse( params->hRequest, params->pCallHandle );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->DeferHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->PrioritizeHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderSize( params->hRequest, params->pchHeaderName, params->unResponseHeaderSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderValue( params->hRequest, params->pchHeaderName, params->pHeaderValueBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodySize( params->hRequest, params->unBodySize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodyData( params->hRequest, params->pBodyDataBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPStreamingResponseBodyData( params->hRequest, params->cOffset, params->pBodyDataBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPDownloadProgressPct( params->hRequest, params->pflPercentOut );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRawPostBody( params->hRequest, params->pchContentType, params->pubBody, params->unBodyLen );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->CreateCookieContainer( params->bAllowResponsesToModify );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->ReleaseCookieContainer( params->hCookieContainer );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetCookie( params->hCookieContainer, params->pchHost, params->pchUrl, params->pchCookie );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestCookieContainer( params->hRequest, params->hCookieContainer );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestUserAgentInfo( params->hRequest, params->pchUserAgentInfo );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRequiresVerifiedCertificate( params->hRequest, params->bRequireVerifiedCertificate );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestAbsoluteTimeoutMS( params->hRequest, params->unMilliseconds );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *)params->linux_side;
    params->_ret = iface->GetHTTPRequestWasTimedOut( params->hRequest, params->pbWasTimedOut );
    return 0;
}

