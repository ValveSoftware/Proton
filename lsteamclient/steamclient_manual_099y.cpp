extern "C" {
#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);
}

#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#pragma push_macro("strncpy")
#undef strncpy
#include "steamworks_sdk_099y/steam_api.h"
#pragma pop_macro("__cdecl")
#pragma pop_macro("strncpy")
#include "steamclient_private.h"

#define SDK_VERSION 992
#include "steamclient_manual_common.h"

extern "C"
{
#include "cppISteamUser_SteamUser008.h"
}

class ISteamUser_linux
{
public:
	virtual HSteamUser GetHSteamUser() = 0;
	virtual bool BLoggedOn() = 0;
	virtual CSteamID GetSteamID() = 0;

    /* CGameID -> CGameID &.
     * Windows side follows the prototype in the header while Linux
     * steamclient treats gameID parameter as pointer. */
	virtual int InitiateGameConnection( void *pBlob, int cbMaxBlob, CSteamID steamID, CGameID &gameID, uint32 unIPServer, uint16 usPortServer, bool bSecure, void *pvSteam2GetEncryptionKey, int cbSteam2GetEncryptionKey ) = 0;

	virtual void TerminateGameConnection( uint32 unIPServer, uint16 usPortServer ) = 0;
	virtual void TrackAppUsageEvent( CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo = "" ) = 0;
	virtual void RefreshSteam2Login() = 0;
};

void cppISteamUser_SteamUser008_InitiateGameConnection( struct cppISteamUser_SteamUser008_InitiateGameConnection_params *params )
{
    ISteamUser_linux *iface = (ISteamUser_linux *)params->linux_side;
    WARN( "Manual call fixup.\n" );
    params->_ret = iface->InitiateGameConnection( params->pBlob, params->cbMaxBlob, params->steamID,
                                                 params->gameID, params->unIPServer, params->usPortServer,
                                                 params->bSecure, params->pvSteam2GetEncryptionKey,
                                                 params->cbSteam2GetEncryptionKey );
}
