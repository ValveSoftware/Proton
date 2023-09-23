/* This file is auto-generated, do not edit. */
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"

#include "steamclient_private.h"

#include "struct_converters.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001.h"

typedef struct __winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001;

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

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_CreateHTTPRequest(_this->linux_side, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestContextValue(_this->linux_side, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestNetworkActivityTimeout(_this->linux_side, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestHeaderValue(_this->linux_side, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestGetOrPostParameter(_this->linux_side, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SendHTTPRequest(_this->linux_side, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_DeferHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_PrioritizeHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderSize(_this->linux_side, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseHeaderValue(_this->linux_side, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodySize(_this->linux_side, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPResponseBodyData(_this->linux_side, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_ReleaseHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_GetHTTPDownloadProgressPct(_this->linux_side, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_SetHTTPRequestRawPostBody(_this->linux_side, hRequest, pchContentType, pubBody, unBodyLen);
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

winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001(void *linux_side)
{
    winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001 *r = alloc_mem_for_iface(sizeof(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001), "STEAMHTTP_INTERFACE_VERSION001");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION001_vtable, 15, "STEAMHTTP_INTERFACE_VERSION001");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002.h"

typedef struct __winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002;

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

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateHTTPRequest(_this->linux_side, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestContextValue(_this->linux_side, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestNetworkActivityTimeout(_this->linux_side, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestHeaderValue(_this->linux_side, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestGetOrPostParameter(_this->linux_side, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequest(_this->linux_side, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SendHTTPRequestAndStreamResponse(_this->linux_side, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_DeferHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_PrioritizeHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderSize(_this->linux_side, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseHeaderValue(_this->linux_side, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodySize(_this->linux_side, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPResponseBodyData(_this->linux_side, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPStreamingResponseBodyData(_this->linux_side, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPDownloadProgressPct(_this->linux_side, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRawPostBody(_this->linux_side, hRequest, pchContentType, pubBody, unBodyLen);
    return _ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, bool bAllowResponsesToModify)
{
    HTTPCookieContainerHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_CreateCookieContainer(_this->linux_side, bAllowResponsesToModify);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_ReleaseCookieContainer(_this->linux_side, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetCookie(_this->linux_side, hCookieContainer, pchHost, pchUrl, pchCookie);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestCookieContainer(_this->linux_side, hRequest, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestUserAgentInfo(_this->linux_side, hRequest, pchUserAgentInfo);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestRequiresVerifiedCertificate(_this->linux_side, hRequest, bRequireVerifiedCertificate);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_SetHTTPRequestAbsoluteTimeoutMS(_this->linux_side, hRequest, unMilliseconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_GetHTTPRequestWasTimedOut(_this->linux_side, hRequest, pbWasTimedOut);
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

winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002(void *linux_side)
{
    winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002 *r = alloc_mem_for_iface(sizeof(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002), "STEAMHTTP_INTERFACE_VERSION002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION002_vtable, 25, "STEAMHTTP_INTERFACE_VERSION002");
    r->linux_side = linux_side;
    return r;
}

#include "cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003.h"

typedef struct __winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 {
    vtable_ptr *vtable;
    void *linux_side;
} winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003;

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

HTTPRequestHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, EHTTPMethod eHTTPRequestMethod, const char *pchAbsoluteURL)
{
    HTTPRequestHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateHTTPRequest(_this->linux_side, eHTTPRequestMethod, pchAbsoluteURL);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint64 ulContextValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestContextValue(_this->linux_side, hRequest, ulContextValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint32 unTimeoutSeconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestNetworkActivityTimeout(_this->linux_side, hRequest, unTimeoutSeconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, const char *pchHeaderValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestHeaderValue(_this->linux_side, hRequest, pchHeaderName, pchHeaderValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchParamName, const char *pchParamValue)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestGetOrPostParameter(_this->linux_side, hRequest, pchParamName, pchParamValue);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequest(_this->linux_side, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, SteamAPICall_t *pCallHandle)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SendHTTPRequestAndStreamResponse(_this->linux_side, hRequest, pCallHandle);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_DeferHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_PrioritizeHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint32 *unResponseHeaderSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderSize(_this->linux_side, hRequest, pchHeaderName, unResponseHeaderSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchHeaderName, uint8 *pHeaderValueBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseHeaderValue(_this->linux_side, hRequest, pchHeaderName, pHeaderValueBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint32 *unBodySize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodySize(_this->linux_side, hRequest, unBodySize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPResponseBodyData(_this->linux_side, hRequest, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint32 cOffset, uint8 *pBodyDataBuffer, uint32 unBufferSize)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPStreamingResponseBodyData(_this->linux_side, hRequest, cOffset, pBodyDataBuffer, unBufferSize);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseHTTPRequest(_this->linux_side, hRequest);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, float *pflPercentOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPDownloadProgressPct(_this->linux_side, hRequest, pflPercentOut);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchContentType, uint8 *pubBody, uint32 unBodyLen)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRawPostBody(_this->linux_side, hRequest, pchContentType, pubBody, unBodyLen);
    return _ret;
}

HTTPCookieContainerHandle __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, bool bAllowResponsesToModify)
{
    HTTPCookieContainerHandle _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_CreateCookieContainer(_this->linux_side, bAllowResponsesToModify);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_ReleaseCookieContainer(_this->linux_side, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPCookieContainerHandle hCookieContainer, const char *pchHost, const char *pchUrl, const char *pchCookie)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetCookie(_this->linux_side, hCookieContainer, pchHost, pchUrl, pchCookie);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, HTTPCookieContainerHandle hCookieContainer)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestCookieContainer(_this->linux_side, hRequest, hCookieContainer);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, const char *pchUserAgentInfo)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestUserAgentInfo(_this->linux_side, hRequest, pchUserAgentInfo);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, bool bRequireVerifiedCertificate)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestRequiresVerifiedCertificate(_this->linux_side, hRequest, bRequireVerifiedCertificate);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, uint32 unMilliseconds)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_SetHTTPRequestAbsoluteTimeoutMS(_this->linux_side, hRequest, unMilliseconds);
    return _ret;
}

bool __thiscall winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *_this, HTTPRequestHandle hRequest, bool *pbWasTimedOut)
{
    bool _ret;
    TRACE("%p\n", _this);
    _ret = cppISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_GetHTTPRequestWasTimedOut(_this->linux_side, hRequest, pbWasTimedOut);
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

winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *create_winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003(void *linux_side)
{
    winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003 *r = alloc_mem_for_iface(sizeof(winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003), "STEAMHTTP_INTERFACE_VERSION003");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamHTTP_STEAMHTTP_INTERFACE_VERSION003_vtable, 25, "STEAMHTTP_INTERFACE_VERSION003");
    r->linux_side = linux_side;
    return r;
}

