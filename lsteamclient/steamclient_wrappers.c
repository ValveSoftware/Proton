/* Linux-to-Windows conversions (i.e. callbacks) here. */

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

#include "cxx.h"

#include "steam_defs.h"
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

#ifdef __i386__

#define DEFINE_VTBL_WRAPPER(off)            \
    __ASM_GLOBAL_FUNC(vtbl_wrapper_ ## off, \
        "popl %eax\n\t"                     \
        "popl %ecx\n\t"                     \
        "pushl %eax\n\t"                    \
        "movl 0(%ecx), %eax\n\t"            \
        "jmp *" #off "(%eax)\n\t")

DEFINE_VTBL_WRAPPER(0);
DEFINE_VTBL_WRAPPER(4);
DEFINE_VTBL_WRAPPER(8);
DEFINE_VTBL_WRAPPER(12);
DEFINE_VTBL_WRAPPER(16);
DEFINE_VTBL_WRAPPER(20);
DEFINE_VTBL_WRAPPER(24);
DEFINE_VTBL_WRAPPER(28);
DEFINE_VTBL_WRAPPER(32);
DEFINE_VTBL_WRAPPER(36);
DEFINE_VTBL_WRAPPER(40);
DEFINE_VTBL_WRAPPER(44);
DEFINE_VTBL_WRAPPER(48);

#endif

typedef struct winServerListResponse {
    const vtable_ptr *vtable;
} winServerListResponse;

struct gccServerListResponse {
    void *vtable;
    struct winServerListResponse *win_side;
};

void gccServerListResponse_ServerResponded(struct gccServerListResponse *_this, HServerListRequest hRequest, int iServer)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 0, void, (winServerListResponse *, HServerListRequest, int), (_this->win_side, hRequest, iServer));
}

void gccServerListResponse_ServerFailedToRespond(struct gccServerListResponse *_this, HServerListRequest hRequest, int iServer)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 4, void, (winServerListResponse *, HServerListRequest, int), (_this->win_side, hRequest, iServer));
}

void gccServerListResponse_RefreshComplete(struct gccServerListResponse *_this, HServerListRequest hRequest, EMatchMakingServerResponse response)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 8, void, (winServerListResponse *, HServerListRequest, EMatchMakingServerResponse), (_this->win_side, hRequest, response));
}

struct gccServerListResponseVtbl {
    void (*ServerResponded)(struct gccServerListResponse *, HServerListRequest, int);

    void (*ServerFailedToRespond)(struct gccServerListResponse *, HServerListRequest, int);

    void (*RefreshComplete)(struct gccServerListResponse *, HServerListRequest, EMatchMakingServerResponse);
} gccServerListResponse_vtbl = {
    gccServerListResponse_ServerResponded,
    gccServerListResponse_ServerFailedToRespond,
    gccServerListResponse_RefreshComplete
};

void *create_LinuxMatchmakingServerListResponse(void *win)
{
    struct gccServerListResponse *ret;

    ret = (struct gccServerListResponse *)HeapAlloc(GetProcessHeap(), 0, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->vtable = &gccServerListResponse_vtbl;
    ret->win_side = (struct winServerListResponse*)win;

    return ret;
}
