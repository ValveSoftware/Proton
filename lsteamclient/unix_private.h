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

extern const char *steamclient_isteamcontroller_getglyph( int origin, const char *lin_path );
extern const char *steamclient_isteaminput_getglyph( int origin, const char *lin_path );
extern const char *steamclient_isteaminput_getglyph_xbox( int origin, const char *lin_path );
extern const char *steamclient_isteaminput_getglyph_png( int origin, int size, int flags, const char *lin_path );
extern const char *steamclient_isteaminput_getglyph_svg( int origin, int flags, const char *lin_path );

extern struct u_ISteamMatchmakingServerListResponse *create_LinuxISteamMatchmakingServerListResponse( void *win, const char *version ) DECLSPEC_HIDDEN;
extern struct u_ISteamMatchmakingPingResponse *create_LinuxISteamMatchmakingPingResponse( void *win, const char *version ) DECLSPEC_HIDDEN;
extern struct u_ISteamMatchmakingPlayersResponse *create_LinuxISteamMatchmakingPlayersResponse( void *win, const char *version ) DECLSPEC_HIDDEN;
extern struct u_ISteamMatchmakingRulesResponse *create_LinuxISteamMatchmakingRulesResponse( void *win, const char *version ) DECLSPEC_HIDDEN;
extern struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling(void *win, const char *version) DECLSPEC_HIDDEN;
extern struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext(void *win, const char *version) DECLSPEC_HIDDEN;

extern uint32_t manual_convert_nNativeKeyCode( uint32_t win_vk );

typedef void (U_CDECL *u_SteamAPIWarningMessageHook_t)( int32_t, const char * );
typedef void (W_CDECL *w_SteamAPIWarningMessageHook_t)( int32_t, const char * );
u_SteamAPIWarningMessageHook_t manual_convert_SetWarningMessageHook_pFunction( w_SteamAPIWarningMessageHook_t );

typedef void (U_STDCALL *u_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
typedef void (W_STDCALL *w_FSteamNetworkingSocketsDebugOutput)( uint32_t, const char * );
u_FSteamNetworkingSocketsDebugOutput manual_convert_SetDebugOutputFunction_pfnFunc( w_FSteamNetworkingSocketsDebugOutput );

typedef uint32_t (U_STDCALL *u_SteamAPI_CheckCallbackRegistered_t)( int32_t );
typedef uint32_t (W_STDCALL *w_SteamAPI_CheckCallbackRegistered_t)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func( w_SteamAPI_CheckCallbackRegistered_t );

typedef uint32_t (U_CDECL *u_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
typedef uint32_t (W_CDECL *w_SteamAPI_CheckCallbackRegistered_t_156)( int32_t );
u_SteamAPI_CheckCallbackRegistered_t_156 manual_convert_Set_SteamAPI_CCheckCallbackRegisteredInProcess_func_156( w_SteamAPI_CheckCallbackRegistered_t_156 );

typedef void (U_STDCALL *u_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
typedef void (W_STDCALL *w_SteamAPI_PostAPIResultInProcess_t)( uint64_t, void *, uint32_t, int );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Set_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );
u_SteamAPI_PostAPIResultInProcess_t manual_convert_Remove_SteamAPI_CPostAPIResultInProcess_func( w_SteamAPI_PostAPIResultInProcess_t );

typedef void (U_STDCALL *u_void_SteamAPI_PostAPIResultInProcess_t)(void);
typedef void (W_STDCALL *w_void_SteamAPI_PostAPIResultInProcess_t)(void);
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Set_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );
u_void_SteamAPI_PostAPIResultInProcess_t manual_convert_DEPRECATED_Remove_SteamAPI_CPostAPIResultInProcess__a( w_void_SteamAPI_PostAPIResultInProcess_t );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* __STEAMCLIENT_UNIX_PRIVATE_H */
