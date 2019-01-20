#ifndef ISTEAMNETWORKINGSOCKETSERIALIZED_H
#define ISTEAMNETWORKINGSOCKETSERIALIZED_H
#include "steamtypes.h"
#include "steamclientpublic.h"
class ISteamNetworkingSocketsSerialized
{
public:
  virtual uint64 SendP2PRendezvous( CSteamID, uint32, void const*, uint32 ) = 0;
  virtual uint64 SendP2PConnectionFailure( CSteamID, uint32, uint32, char const* ) = 0;
  virtual uint64 GetCertAsync() = 0;
  virtual uint64 GetNetworkConfigJSON( void *, uint32 ) = 0;
  virtual uint64 CacheRelayTicket( void const*, uint32 ) = 0;
  virtual uint64 GetCachedRelayTicketCount() = 0;
  virtual uint64 GetCachedRelayTicket( uint32, void *, uint32 ) = 0;
  virtual uint64 PostConnectionStateMsg( void const*, uint32 ) = 0;
};


#define STEAMNETWORKINGSOCKETSSERIALIZED_INTERFACE_VERSION "SteamNetworkingSocketsSerialized002"

#endif // ISTEAMNETWORKINGSOCKETSERIALIZED_H
