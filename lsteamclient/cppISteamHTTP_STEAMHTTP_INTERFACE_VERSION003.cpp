/* This file is auto-generated, do not edit. */
#include "unix_private.h"

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateHTTPRequest( params->eHTTPRequestMethod, params->pchAbsoluteURL );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestContextValue( params->hRequest, params->ulContextValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestNetworkActivityTimeout( params->hRequest, params->unTimeoutSeconds );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestHeaderValue( params->hRequest, params->pchHeaderName, params->pchHeaderValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestGetOrPostParameter( params->hRequest, params->pchParamName, params->pchParamValue );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SendHTTPRequest( params->hRequest, params->pCallHandle );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SendHTTPRequestAndStreamResponse( params->hRequest, params->pCallHandle );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->DeferHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->PrioritizeHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderSize( params->hRequest, params->pchHeaderName, params->unResponseHeaderSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseHeaderValue( params->hRequest, params->pchHeaderName, params->pHeaderValueBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodySize( params->hRequest, params->unBodySize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPResponseBodyData( params->hRequest, params->pBodyDataBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPStreamingResponseBodyData( params->hRequest, params->cOffset, params->pBodyDataBuffer, params->unBufferSize );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ReleaseHTTPRequest( params->hRequest );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPDownloadProgressPct( params->hRequest, params->pflPercentOut );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRawPostBody( params->hRequest, params->pchContentType, params->pubBody, params->unBodyLen );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->CreateCookieContainer( params->bAllowResponsesToModify );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->ReleaseCookieContainer( params->hCookieContainer );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetCookie( params->hCookieContainer, params->pchHost, params->pchUrl, params->pchCookie );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestCookieContainer( params->hRequest, params->hCookieContainer );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestUserAgentInfo( params->hRequest, params->pchUserAgentInfo );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestRequiresVerifiedCertificate( params->hRequest, params->bRequireVerifiedCertificate );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->SetHTTPRequestAbsoluteTimeoutMS( params->hRequest, params->unMilliseconds );
    return 0;
}

NTSTATUS ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut( void *args )
{
    struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params *params = (struct ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params *)args;
    struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *iface = (struct u_ISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *)params->linux_side;
    params->_ret = iface->GetHTTPRequestWasTimedOut( params->hRequest, params->pbWasTimedOut );
    return 0;
}

