#ifndef ISTEAMNETWORKINGSOCKETSSERIALIZED_H
#define ISTEAMNETWORKINGSOCKETSSERIALIZED_H

#include "steamtypes.h"
#include "steamclientpublic.h"

class ISteamNetworkingSocketsSerialized
{
public:
	virtual void SendP2PRendezvous( CSteamID steamIDRemote, uint32 unConnectionIDSrc, const void *pMsgRendezvous, uint32 cbRendezvous ) = 0;
	virtual void SendP2PConnectionFailure( CSteamID steamIDRemote, uint32 unConnectionIDDest, uint32 nReason, const char *pszReason ) = 0;
	virtual SteamAPICall_t GetCertAsync() = 0;
	virtual int GetNetworkConfigJSON( void *buf, uint32 cbBuf, const char *pszLauncherPartner ) = 0;
	virtual void CacheRelayTicket( const void *pTicket, uint32 cbTicket ) = 0;
	virtual uint32 GetCachedRelayTicketCount() = 0;
	virtual int GetCachedRelayTicket( uint32 idxTicket, void *buf, uint32 cbBuf ) = 0;
	virtual void PostConnectionStateMsg( const void *pMsg, uint32 cbMsg ) = 0;
};

#define STEAMNETWORKINGSOCKETSSERIALIZED_INTERFACE_VERSION "SteamNetworkingSocketsSerialized003"

#endif
