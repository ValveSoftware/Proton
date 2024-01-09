/* TODO these should be generated */
#ifndef __STEAMCLIENT_PRIVATE_H
#define __STEAMCLIENT_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#include <windef.h>
#include <winbase.h>

#include "steamclient_structs.h"
#include "unixlib.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifndef __cplusplus
#include "cxx.h"
#else
typedef void (*vtable_ptr)(void);
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define W_CDECL   __cdecl
#define W_STDCALL __stdcall
#define U_CDECL   __attribute__((sysv_abi))
#define U_STDCALL __attribute__((sysv_abi))

struct w_steam_iface
{
    vtable_ptr *vtable;
    void *u_iface;
};

typedef struct w_steam_iface *(*iface_constructor)( void * );
extern iface_constructor find_iface_constructor( const char *iface_version );
extern struct w_steam_iface *create_winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001( void * );

extern void execute_pending_callbacks(void);

extern void execute_pending_callbacks(void);

struct w_steam_iface *create_win_interface(const char *name, void *linux_side);
void *alloc_mem_for_iface(size_t size, const char *iface_version);
void *alloc_vtable(void *vtable, unsigned int method_count, const char *iface_version);

void init_rtti( char *base );

#include "steamclient_generated.h"

#ifdef __cplusplus
}
#endif

#endif /* __STEAMCLIENT_PRIVATE_H */
