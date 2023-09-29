#include "steamclient_private.h"

#include "cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

/* ISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001 */

void __thiscall winISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( struct w_steam_iface *_this )
{
    struct cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort_params params = {.linux_side = _this->u_iface};
    TRACE( "%p\n", _this );
    cppISteamNetworkingFakeUDPPort_SteamNetworkingFakeUDPPort001_DestroyFakeUDPPort( &params );
    HeapFree( GetProcessHeap(), 0, _this );
}
