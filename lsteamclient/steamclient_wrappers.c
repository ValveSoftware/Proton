/* Linux-to-Windows conversions (i.e. callbacks) here. */
#include "unix_private.h"

#include "cxx.h"

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

/***** ISteamMatchmakingServerListResponse *****/
typedef struct winServerListResponse {
    const vtable_ptr *vtable;
} winServerListResponse;

struct gccServerListResponse {
    void *vtable;
    struct winServerListResponse *win_side;
};

void gccServerListResponse_ServerResponded( struct gccServerListResponse *_this, void *hRequest, int iServer )
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC( _this->win_side, 0, void, (winServerListResponse *, void *, int),
                    (_this->win_side, hRequest, iServer) );
}

void gccServerListResponse_ServerFailedToRespond( struct gccServerListResponse *_this, void *hRequest, int iServer )
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC( _this->win_side, 4, void, (winServerListResponse *, void *, int),
                    (_this->win_side, hRequest, iServer) );
}

void gccServerListResponse_RefreshComplete( struct gccServerListResponse *_this, void *hRequest, uint32_t response )
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC( _this->win_side, 8, void, (winServerListResponse *, void *, uint32_t),
                    (_this->win_side, hRequest, response) );
}

struct gccServerListResponseVtbl {
    void (*ServerResponded)( struct gccServerListResponse *, void *, int );

    void (*ServerFailedToRespond)( struct gccServerListResponse *, void *, int );

    void (*RefreshComplete)( struct gccServerListResponse *, void *, uint32_t );
} gccServerListResponse_vtbl = {
    gccServerListResponse_ServerResponded,
    gccServerListResponse_ServerFailedToRespond,
    gccServerListResponse_RefreshComplete
};

void gccServerListResponse001_ServerResponded(struct gccServerListResponse *_this, int iServer)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 0, void, (winServerListResponse *, int), (_this->win_side, iServer));
}

void gccServerListResponse001_ServerFailedToRespond(struct gccServerListResponse *_this, int iServer)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 4, void, (winServerListResponse *, int), (_this->win_side, iServer));
}

void gccServerListResponse001_RefreshComplete( struct gccServerListResponse *_this, uint32_t response )
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC( _this->win_side, 8, void, (winServerListResponse *, uint32_t), (_this->win_side, response) );
}

struct gccServerListResponse001Vtbl {
    void (*ServerResponded)(struct gccServerListResponse *, int);

    void (*ServerFailedToRespond)(struct gccServerListResponse *, int);

    void (*RefreshComplete)( struct gccServerListResponse *, uint32_t );
} gccServerListResponse001_vtbl = {
    gccServerListResponse001_ServerResponded,
    gccServerListResponse001_ServerFailedToRespond,
    gccServerListResponse001_RefreshComplete
};

struct u_ISteamMatchmakingServerListResponse *create_LinuxISteamMatchmakingServerListResponse( void *win, const char *version )
{
    struct gccServerListResponse *ret;

    if (!win)
        return NULL;

    /* FIXME: When is it save to free this? CancelServerQuery? */
    ret = (struct gccServerListResponse *)HeapAlloc(GetProcessHeap(), 0, sizeof(*ret));
    if(!ret)
        return NULL;

    if (strcmp( version, "ISteamMatchmakingServers_SteamMatchMakingServers001" ) == 0)
    {
        ret->vtable = &gccServerListResponse001_vtbl;
    }
    else
    {
        ret->vtable = &gccServerListResponse_vtbl;
    }
    ret->win_side = (struct winServerListResponse*)win;

    return (struct u_ISteamMatchmakingServerListResponse *)ret;
}

/***** ISteamMatchmakingPingResponse *****/
typedef struct winPingResponse {
    const vtable_ptr *vtable;
} winPingResponse;

struct gccPingResponse {
    void *vtable;
    struct winPingResponse *win_side;
};

struct gameserveritem_t;

void gccPingResponse_ServerResponded( struct gccPingResponse *_this, struct gameserveritem_t *server )
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC( _this->win_side, 0, void, (winPingResponse *, struct gameserveritem_t *),
                    (_this->win_side, server) );
}

void gccPingResponse_ServerFailedToRespond(struct gccPingResponse *_this)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 4, void, (winPingResponse *), (_this->win_side));
}

struct gccPingResponseVtbl {
    void (*ServerResponded)( struct gccPingResponse *, struct gameserveritem_t * );

    void (*ServerFailedToRespond)(struct gccPingResponse *);
} gccPingResponse_vtbl = {
    gccPingResponse_ServerResponded,
    gccPingResponse_ServerFailedToRespond
};

struct u_ISteamMatchmakingPingResponse *create_LinuxISteamMatchmakingPingResponse( void *win, const char *version )
{
    struct gccPingResponse *ret;

    if (!win)
        return NULL;

    ret = (struct gccPingResponse *)HeapAlloc(GetProcessHeap(), 0, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->vtable = &gccPingResponse_vtbl;
    ret->win_side = (struct winPingResponse*)win;

    return (struct u_ISteamMatchmakingPingResponse *)ret;
}

/***** ISteamMatchmakingPlayersResponse *****/
typedef struct winPlayersResponse {
    const vtable_ptr *vtable;
} winPlayersResponse;

struct gccPlayersResponse {
    void *vtable;
    struct winPlayersResponse *win_side;
};

void gccPlayersResponse_AddPlayerToList(struct gccPlayersResponse *_this, const char *pchName, int nScore, float flTimePlayed)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 0, void, (winPlayersResponse *, const char *, int, float), (_this->win_side, pchName, nScore, flTimePlayed));
}

void gccPlayersResponse_PlayersFailedToRespond(struct gccPlayersResponse *_this)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 4, void, (winPlayersResponse *), (_this->win_side));
}

void gccPlayersResponse_PlayersRefreshComplete(struct gccPlayersResponse *_this)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 8, void, (winPlayersResponse *), (_this->win_side));
}

struct gccPlayersResponseVtbl {
    void (*AddPlayerToList)(struct gccPlayersResponse *, const char *, int, float);

    void (*PlayersFailedToRespond)(struct gccPlayersResponse *);

    void (*PlayersRefreshComplete)(struct gccPlayersResponse *);
} gccPlayersResponse_vtbl = {
    gccPlayersResponse_AddPlayerToList,
    gccPlayersResponse_PlayersFailedToRespond,
    gccPlayersResponse_PlayersRefreshComplete
};

struct u_ISteamMatchmakingPlayersResponse *create_LinuxISteamMatchmakingPlayersResponse( void *win, const char *version )
{
    struct gccPlayersResponse *ret;

    if (!win)
        return NULL;

    ret = (struct gccPlayersResponse *)HeapAlloc(GetProcessHeap(), 0, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->vtable = &gccPlayersResponse_vtbl;
    ret->win_side = (struct winPlayersResponse*)win;

    return (struct u_ISteamMatchmakingPlayersResponse *)ret;
}

/***** ISteamMatchmakingRulesResponse *****/
typedef struct winRulesResponse {
    const vtable_ptr *vtable;
} winRulesResponse;

struct gccRulesResponse {
    void *vtable;
    struct winRulesResponse *win_side;
};

void gccRulesResponse_RulesResponded(struct gccRulesResponse *_this, const char *pchRule, const char *pchValue)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 0, void, (winRulesResponse *, const char *, const char *), (_this->win_side, pchRule, pchValue));
}

void gccRulesResponse_RulesFailedToRespond(struct gccRulesResponse *_this)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 4, void, (winRulesResponse *), (_this->win_side));
}

void gccRulesResponse_RulesRefreshComplete(struct gccRulesResponse *_this)
{
    TRACE("%p/%p\n", _this, _this->win_side);
    CALL_VTBL_FUNC(_this->win_side, 8, void, (winRulesResponse *), (_this->win_side));
}

struct gccRulesResponseVtbl {
    void (*RulesResponded)(struct gccRulesResponse *, const char *, const char*);

    void (*RulesFailedToRespond)(struct gccRulesResponse *);

    void (*RulesRefreshComplete)(struct gccRulesResponse *);
} gccRulesResponse_vtbl = {
    gccRulesResponse_RulesResponded,
    gccRulesResponse_RulesFailedToRespond,
    gccRulesResponse_RulesRefreshComplete
};

struct u_ISteamMatchmakingRulesResponse *create_LinuxISteamMatchmakingRulesResponse( void *win, const char *version )
{
    struct gccRulesResponse *ret;

    if (!win)
        return NULL;

    ret = (struct gccRulesResponse *)HeapAlloc(GetProcessHeap(), 0, sizeof(*ret));
    if(!ret)
        return NULL;

    ret->vtable = &gccRulesResponse_vtbl;
    ret->win_side = (struct winRulesResponse*)win;

    return (struct u_ISteamMatchmakingRulesResponse *)ret;
}

struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win, const char *version )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win, const char *version )
{
    FIXME( "not implemented!\n" );
    return NULL;
}
