#ifndef __STEAMCLIENT_UNIX_PRIVATE_H
#define __STEAMCLIENT_UNIX_PRIVATE_H

#include <stdarg.h>
#include <stddef.h>

#include <windef.h>
#include <winbase.h>

#include "steamclient_structs.h"
#include "unixlib.h"

#include "wine/debug.h"
#include "wine/list.h"

#ifdef __cplusplus
extern "C"
{
#endif /* __cplusplus */

struct w_steam_iface;
extern void queue_vtable_callback( struct w_steam_iface *w_iface, enum callback_type type, uint64_t arg0, uint64_t arg1, uint64_t arg2 );
extern void queue_vtable_callback_0_add_player_to_list( struct w_steam_iface *w_iface, const char *pchName, int nScore, float flTimePlayed );
extern void queue_vtable_callback_0_rules_responded( struct w_steam_iface *w_iface, const char *pchRule, const char *pchValue );

typedef void (*W_CDECL w_cdecl_func)( void * );
extern void queue_cdecl_func_callback( w_cdecl_func func, void *data, uint32_t data_size );

extern uint32_t manual_convert_nNativeKeyCode( uint32_t win_vk );

typedef void (U_CDECL *u_SteamAPIWarningMessageHook_t)( int32_t, const char * );
typedef void (W_CDECL *w_SteamAPIWarningMessageHook_t)( int32_t, const char * );
u_SteamAPIWarningMessageHook_t manual_convert_SetWarningMessageHook_pFunction( w_SteamAPIWarningMessageHook_t );

typedef void (U_CDECL *u_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
typedef void (W_CDECL *w_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
u_FSteamNetworkingSocketsDebugOutput manual_convert_SetDebugOutputFunction_pfnFunc( w_FSteamNetworkingSocketsDebugOutput );

typedef uint32_t (U_CDECL *u_SteamAPI_CheckCallbackRegistered_t)( int32_t );
typedef uint32_t (W_CDECL *w_SteamAPI_CheckCallbackRegistered_t)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( w_SteamAPI_CheckCallbackRegistered_t );

typedef uint32_t (U_CDECL *u_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
typedef uint32_t (W_CDECL *w_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t_156 manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( w_SteamAPI_CheckCallbackRegistered_t_156 );

typedef void (U_CDECL *u_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
typedef void (W_CDECL *w_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );

typedef void (U_CDECL *u_void_SteamAPI_PostAPIResultInProcess_t)(void);
typedef void (W_CDECL *w_void_SteamAPI_PostAPIResultInProcess_t)(void);
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );

void callback_message_utow( const u_CallbackMsg_t *u_msg, w_CallbackMsg_t *w_msg );
void *alloc_callback_wtou( int id, void *callback, int *callback_len );
void convert_callback_utow( int id, void *u_callback, int u_callback_len, void *w_callback, int w_callback_len );

extern NTSTATUS steamclient_init( void * );
extern NTSTATUS steamclient_next_callback( void * );
extern NTSTATUS steamclient_CreateInterface( void * );
extern NTSTATUS steamclient_Steam_GetAPICallResult( void * );
extern NTSTATUS steamclient_Steam_BGetCallback( void * );
extern NTSTATUS steamclient_callback_message_receive( void * );
extern NTSTATUS steamclient_Steam_FreeLastCallback( void * );
extern NTSTATUS steamclient_Steam_ReleaseThreadLocalMemory( void * );
extern NTSTATUS steamclient_Steam_IsKnownInterface( void * );
extern NTSTATUS steamclient_Steam_NotifyMissingInterface( void * );
extern NTSTATUS steamclient_networking_messages_receive_144( void * );
extern NTSTATUS steamclient_networking_messages_receive_147( void * );
extern NTSTATUS steamclient_networking_messages_receive_153a( void * );
extern NTSTATUS steamclient_networking_message_release_147( void * );
extern NTSTATUS steamclient_networking_message_release_153a( void * );

extern char *steamclient_dos_to_unix_path( const char *src, int is_url );
extern void steamclient_free_path( char *path_array );
extern const char **steamclient_dos_to_unix_path_array( const char **src_array );
extern void steamclient_free_path_array( const char **path_array );

extern unsigned int steamclient_unix_path_to_dos_path( bool api_result, const char *src, char *dst,
                                                       uint32_t dst_bytes, int is_url );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#include "unix_private_generated.h"

#endif /* __STEAMCLIENT_UNIX_PRIVATE_H */
