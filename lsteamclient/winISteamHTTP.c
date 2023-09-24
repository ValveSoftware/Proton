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
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(_this->u_iface, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(_this->u_iface, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(_this->u_iface, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(_this->u_iface, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(_this->u_iface, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(_this->u_iface, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(_this->u_iface, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(_this->u_iface, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(_this->u_iface, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(_this->u_iface, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(_this->u_iface, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(_this->u_iface, hRequest, pchContentType, pubBody, unBodyLen);
    return _ret;
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
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(_this->u_iface, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(_this->u_iface, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(_this->u_iface, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(_this->u_iface, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(_this->u_iface, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(_this->u_iface, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(_this->u_iface, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(_this->u_iface, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(_this->u_iface, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(_this->u_iface, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(_this->u_iface, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(_this->u_iface, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(_this->u_iface, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(_this->u_iface, hRequest, pchContentType, pubBody, unBodyLen);
    return _ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(struct w_steam_iface *_this, bool bAllowResponsesToModify)
{
    HTTPCookieContainerHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(_this->u_iface, bAllowResponsesToModify);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(_this->u_iface, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(_this->u_iface, hCookieContainer, pchHost, pchUrl, pchCookie);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(struct w_steam_iface *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(_this->u_iface, hRequest, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(_this->u_iface, hRequest, pchUserAgentInfo);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(_this->u_iface, hRequest, bRequireVerifiedCertificate);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(_this->u_iface, hRequest, unMilliseconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(_this->u_iface, hRequest, pbWasTimedOut);
    return _ret;
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
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(_this->u_iface, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(_this->u_iface, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(_this->u_iface, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(_this->u_iface, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(_this->u_iface, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(_this->u_iface, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(struct w_steam_iface *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(_this->u_iface, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(_this->u_iface, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(_this->u_iface, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(_this->u_iface, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(_this->u_iface, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(_this->u_iface, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(struct w_steam_iface *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(_this->u_iface, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(struct w_steam_iface *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(_this->u_iface, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(_this->u_iface, hRequest, pchContentType, pubBody, unBodyLen);
    return _ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(struct w_steam_iface *_this, bool bAllowResponsesToModify)
{
    HTTPCookieContainerHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(_this->u_iface, bAllowResponsesToModify);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(_this->u_iface, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(struct w_steam_iface *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(_this->u_iface, hCookieContainer, pchHost, pchUrl, pchCookie);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(struct w_steam_iface *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(_this->u_iface, hRequest, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(struct w_steam_iface *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(_this->u_iface, hRequest, pchUserAgentInfo);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(_this->u_iface, hRequest, bRequireVerifiedCertificate);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(struct w_steam_iface *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(_this->u_iface, hRequest, unMilliseconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(struct w_steam_iface *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(_this->u_iface, hRequest, pbWasTimedOut);
    return _ret;
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

