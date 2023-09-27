/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001.h"

DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody, 20)

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(struct w_steam_iface *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eHTTPRequestMethod = eHTTPRequestMethod,
        .pchAbsoluteURL = pchAbsoluteURL,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .ulContextValue = ulContextValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unTimeoutSeconds = unTimeoutSeconds,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pchHeaderValue = pchHeaderValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchParamName = pchParamName,
        .pchParamValue = pchParamValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pCallHandle = pCallHandle,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .unResponseHeaderSize = unResponseHeaderSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pHeaderValueBuffer = pHeaderValueBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unBodySize = unBodySize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pBodyDataBuffer = pBodyDataBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pflPercentOut = pflPercentOut,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchContentType = pchContentType,
        .pubBody = pubBody,
        .unBodyLen = unBodyLen,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody( &params );
    return params._ret;
}

extern vtable_ptr winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001,
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTTP_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_vtable, 15, "STEAMHTTP_INTERFACE_VERSION001");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002.h"

DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut, 12)

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(struct w_steam_iface *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eHTTPRequestMethod = eHTTPRequestMethod,
        .pchAbsoluteURL = pchAbsoluteURL,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .ulContextValue = ulContextValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unTimeoutSeconds = unTimeoutSeconds,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pchHeaderValue = pchHeaderValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchParamName = pchParamName,
        .pchParamValue = pchParamValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pCallHandle = pCallHandle,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pCallHandle = pCallHandle,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .unResponseHeaderSize = unResponseHeaderSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pHeaderValueBuffer = pHeaderValueBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unBodySize = unBodySize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pBodyDataBuffer = pBodyDataBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .cOffset = cOffset,
        .pBodyDataBuffer = pBodyDataBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pflPercentOut = pflPercentOut,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchContentType = pchContentType,
        .pubBody = pubBody,
        .unBodyLen = unBodyLen,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody( &params );
    return params._ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(struct w_steam_iface *_this, bool bAllowResponsesToModify)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .bAllowResponsesToModify = bAllowResponsesToModify,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .hCookieContainer = hCookieContainer,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .hCookieContainer = hCookieContainer,
        .pchHost = pchHost,
        .pchUrl = pchUrl,
        .pchCookie = pchCookie,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(struct w_steam_iface *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .hCookieContainer = hCookieContainer,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchUserAgentInfo = pchUserAgentInfo,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .bRequireVerifiedCertificate = bRequireVerifiedCertificate,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unMilliseconds = unMilliseconds,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pbWasTimedOut = pbWasTimedOut,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut( &params );
    return params._ret;
}

extern vtable_ptr winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002,
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTTP_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_vtable, 25, "STEAMHTTP_INTERFACE_VERSION002");
    r->u_iface = u_iface;
    return r;
}

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003.h"

DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData, 16)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer, 8)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie, 20)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS, 12)
DEFINE_THISCALL_WRAPPER(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut, 12)

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(struct w_steam_iface *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .eHTTPRequestMethod = eHTTPRequestMethod,
        .pchAbsoluteURL = pchAbsoluteURL,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .ulContextValue = ulContextValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unTimeoutSeconds = unTimeoutSeconds,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pchHeaderValue = pchHeaderValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchParamName = pchParamName,
        .pchParamValue = pchParamValue,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pCallHandle = pCallHandle,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pCallHandle = pCallHandle,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .unResponseHeaderSize = unResponseHeaderSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchHeaderName = pchHeaderName,
        .pHeaderValueBuffer = pHeaderValueBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unBodySize = unBodySize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pBodyDataBuffer = pBodyDataBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .cOffset = cOffset,
        .pBodyDataBuffer = pBodyDataBuffer,
        .unBufferSize = unBufferSize,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pflPercentOut = pflPercentOut,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchContentType = pchContentType,
        .pubBody = pubBody,
        .unBodyLen = unBodyLen,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody( &params );
    return params._ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(struct w_steam_iface *_this, bool bAllowResponsesToModify)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .bAllowResponsesToModify = bAllowResponsesToModify,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .hCookieContainer = hCookieContainer,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie_params params =
    {
        .linux_side = _this->u_iface,
        .hCookieContainer = hCookieContainer,
        .pchHost = pchHost,
        .pchUrl = pchUrl,
        .pchCookie = pchCookie,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(struct w_steam_iface *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .hCookieContainer = hCookieContainer,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pchUserAgentInfo = pchUserAgentInfo,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .bRequireVerifiedCertificate = bRequireVerifiedCertificate,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .unMilliseconds = unMilliseconds,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS( &params );
    return params._ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    struct cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut_params params =
    {
        .linux_side = _this->u_iface,
        .hRequest = hRequest,
        .pbWasTimedOut = pbWasTimedOut,
    };
    TRACE("%p\n", _this);
    cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut( &params );
    return params._ret;
}

extern vtable_ptr winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_vtable;

#ifndef __GNUC__
void __asm_dummy_vtables(void) {
#endif
    __ASM_VTABLE(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003,
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS)
        VTABLE_ADD_FUNC(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut)
    );
#ifndef __GNUC__
}
#endif

struct w_steam_iface *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003(void *u_iface)
{
    struct w_steam_iface *r = alloc_mem_for_iface(sizeof(struct w_steam_iface), "STEAMHTTP_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_vtable, 25, "STEAMHTTP_INTERFACE_VERSION003");
    r->u_iface = u_iface;
    return r;
}

