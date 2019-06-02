//====== Copyright Valve Corporation, All rights reserved. ====================
//
// Networking API similar to Berkeley sockets, but for games.
// - connection-oriented API (like TCP, not UDP)
// - but unlike TCP, it's message-oriented, not stream-oriented
// - mix of reliable and unreliable messages
// - fragmentation and reassembly
// - Supports connectivity over plain UDPv4
// - Also supports SDR ("Steam Datagram Relay") connections, which are
//   addressed by SteamID.  There is a "P2P" use case and also a "hosted
//   dedicated server" use case.
//
//=============================================================================

#ifndef ISTEAMNETWORKINGSOCKETS
#define ISTEAMNETWORKINGSOCKETS
#ifdef _WIN32
#pragma once
#endif

#include "steamnetworkingtypes.h"

class ISteamNetworkingSocketsCallbacks;

//-----------------------------------------------------------------------------
/// Lower level networking interface that more closely mirrors the standard
/// Berkeley sockets model.  Sockets are hard!  You should probably only use
/// this interface under the existing circumstances:
///
/// - You have an existing socket-based codebase you want to port, or coexist with.
/// - You want to be able to connect based on IP address, rather than (just) Steam ID.
/// - You need low-level control of bandwidth utilization, when to drop packets, etc.
///
/// Note that neither of the terms "connection" and "socket" will correspond
/// one-to-one with an underlying UDP socket.  An attempt has been made to
/// keep the semantics as similar to the standard socket model when appropriate,
/// but some deviations do exist.
class ISteamNetworkingSockets
{
public:

	/// Creates a "server" socket that listens for clients to connect to by 
	/// calling ConnectByIPAddress, over ordinary UDP (IPv4 or IPv6)
	///
	/// You must select a specific local port to listen on and set it
	/// the port field of the local address.
	///
	/// Usually you wil set the IP portion of the address to zero, (SteamNetworkingIPAddr::Clear()).
	/// This means that you will not bind to any particular local interface.  In addition,
	/// if possible the socket will be bound in "dual stack" mode, which means that it can
	/// accept both IPv4 and IPv6 clients.  If you wish to bind a particular interface, then
	/// set the local address to the appropriate IPv4 or IPv6 IP.
	///
	/// When a client attempts to connect, a SteamNetConnectionStatusChangedCallback_t
	/// will be posted.  The connection will be in the connecting state.
	virtual HSteamListenSocket CreateListenSocketIP( const SteamNetworkingIPAddr *localAddress ) = 0;

	/// Creates a connection and begins talking to a "server" over UDP at the
	/// given IPv4 or IPv6 address.  The remote host must be listening with a
	/// matching call to CreateListenSocketIP on the specified port.
	///
	/// A SteamNetConnectionStatusChangedCallback_t callback will be triggered when we start
	/// connecting, and then another one on either timeout or successful connection.
	///
	/// If the server does not have any identity configured, then their network address
	/// will be the only identity in use.  Or, the network host may provide a platform-specific
	/// identity with or without a valid certificate to authenticate that identity.  (These
	/// details will be contained in the SteamNetConnectionStatusChangedCallback_t.)  It's
	/// up to your application to decide whether to allow the connection.
	///
	/// By default, all connections will get basic encryption sufficient to prevent
	/// casual eavesdropping.  But note that without certificates (or a shared secret
	/// distributed through some other out-of-band mechanism), you don't have any
	/// way of knowing who is actually on the other end, and thus are vulnerable to
	/// man-in-the-middle attacks.
	virtual HSteamNetConnection ConnectByIPAddress( const SteamNetworkingIPAddr *address ) = 0;

#ifdef STEAMNETWORKINGSOCKETS_ENABLE_SDR
	/// Like CreateListenSocketIP, but clients will connect using ConnectP2P
	///
	/// nVirtualPort specifies how clients can connect to this socket using
	/// ConnectP2P.  It's very common for applications to only have one listening socket;
	/// in that case, use zero.  If you need to open multiple listen sockets and have clients
	/// be able to connect to one or the other, then nVirtualPort should be a small integer (<1000)
	/// unique to each listen socket you create.
	///
	/// If you use this, you probably want to call ISteamNetworkingUtils::InitializeRelayNetworkAccess()
	/// when your app initializes
	virtual HSteamListenSocket CreateListenSocketP2P( int nVirtualPort ) = 0;

	/// Begin connecting to a server that is identified using a platform-specific identifier.
	/// This requires some sort of third party rendezvous service, and will depend on the
	/// platform and what other libraries and services you are integrating with.
	///
	/// At the time of this writing, there is only one supported rendezvous service: Steam.
	/// Set the SteamID (whether "user" or "gameserver") and Steam will determine if the
	/// client is online and facilitate a relay connection.  Note that all P2P connections on
	/// Steam are currently relayed.
	///
	/// If you use this, you probably want to call ISteamNetworkingUtils::InitializeRelayNetworkAccess()
	/// when your app initializes
	virtual HSteamNetConnection ConnectP2P( const SteamNetworkingIdentity *identityRemote, int nVirtualPort ) = 0;
#endif

	/// Accept an incoming connection that has been received on a listen socket.
	///
	/// When a connection attempt is received (perhaps after a few basic handshake
	/// packets have been exchanged to prevent trivial spoofing), a connection interface
	/// object is created in the k_ESteamNetworkingConnectionState_Connecting state
	/// and a SteamNetConnectionStatusChangedCallback_t is posted.  At this point, your
	/// application MUST either accept or close the connection.  (It may not ignore it.)
	/// Accepting the connection will transition it either into the connected state,
	/// or the finding route state, depending on the connection type.
	///
	/// You should take action within a second or two, because accepting the connection is
	/// what actually sends the reply notifying the client that they are connected.  If you
	/// delay taking action, from the client's perspective it is the same as the network
	/// being unresponsive, and the client may timeout the connection attempt.  In other
	/// words, the client cannot distinguish between a delay caused by network problems
	/// and a delay caused by the application.
	///
	/// This means that if your application goes for more than a few seconds without
	/// processing callbacks (for example, while loading a map), then there is a chance
	/// that a client may attempt to connect in that interval and fail due to timeout.
	///
	/// If the application does not respond to the connection attempt in a timely manner,
	/// and we stop receiving communication from the client, the connection attempt will
	/// be timed out locally, transitioning the connection to the
	/// k_ESteamNetworkingConnectionState_ProblemDetectedLocally state.  The client may also
	/// close the connection before it is accepted, and a transition to the
	/// k_ESteamNetworkingConnectionState_ClosedByPeer is also possible depending the exact
	/// sequence of events.
	///
	/// Returns k_EResultInvalidParam if the handle is invalid.
	/// Returns k_EResultInvalidState if the connection is not in the appropriate state.
	/// (Remember that the connection state could change in between the time that the
	/// notification being posted to the queue and when it is received by the application.)
	virtual EResult AcceptConnection( HSteamNetConnection hConn ) = 0;

	/// Disconnects from the remote host and invalidates the connection handle.
	/// Any unread data on the connection is discarded.
	///
	/// nReason is an application defined code that will be received on the other
	/// end and recorded (when possible) in backend analytics.  The value should
	/// come from a restricted range.  (See ESteamNetConnectionEnd.)  If you don't need
	/// to communicate any information to the remote host, and do not want analytics to
	/// be able to distinguish "normal" connection terminations from "exceptional" ones,
	/// You may pass zero, in which case the generic value of
	/// k_ESteamNetConnectionEnd_App_Generic will be used.
	///
	/// pszDebug is an optional human-readable diagnostic string that will be received
	/// by the remote host and recorded (when possible) in backend analytics.
	///
	/// If you wish to put the socket into a "linger" state, where an attempt is made to
	/// flush any remaining sent data, use bEnableLinger=true.  Otherwise reliable data
	/// is not flushed.
	///
	/// If the connection has already ended and you are just freeing up the
	/// connection interface, the reason code, debug string, and linger flag are
	/// ignored.
	virtual bool CloseConnection( HSteamNetConnection hPeer, int nReason, const char *pszDebug, bool bEnableLinger ) = 0;

	/// Destroy a listen socket.  All the connections that were accepting on the listen
	/// socket are closed ungracefully.
	virtual bool CloseListenSocket( HSteamListenSocket hSocket ) = 0;

	/// Set connection user data.  the data is returned in the following places
	/// - You can query it using GetConnectionUserData.
	/// - The SteamNetworkingmessage_t structure.
	/// - The SteamNetConnectionInfo_t structure.  (Which is a member of SteamNetConnectionStatusChangedCallback_t.)
	///
	/// Returns false if the handle is invalid.
	virtual bool SetConnectionUserData( HSteamNetConnection hPeer, int64 nUserData ) = 0;

	/// Fetch connection user data.  Returns -1 if handle is invalid
	/// or if you haven't set any userdata on the connection.
	virtual int64 GetConnectionUserData( HSteamNetConnection hPeer ) = 0;

	/// Set a name for the connection, used mostly for debugging
	virtual void SetConnectionName( HSteamNetConnection hPeer, const char *pszName ) = 0;

	/// Fetch connection name.  Returns false if handle is invalid
	virtual bool GetConnectionName( HSteamNetConnection hPeer, char *pszName, int nMaxLen ) = 0;

	/// Send a message to the remote host on the specified connection.
	///
	/// nSendFlags determines the delivery guarantees that will be provided,
	/// when data should be buffered, etc.  E.g. k_nSteamNetworkingSend_Unreliable
	///
	/// Note that the semantics we use for messages are not precisely
	/// the same as the semantics of a standard "stream" socket.
	/// (SOCK_STREAM)  For an ordinary stream socket, the boundaries
	/// between chunks are not considered relevant, and the sizes of
	/// the chunks of data written will not necessarily match up to
	/// the sizes of the chunks that are returned by the reads on
	/// the other end.  The remote host might read a partial chunk,
	/// or chunks might be coalesced.  For the message semantics 
	/// used here, however, the sizes WILL match.  Each send call 
	/// will match a successful read call on the remote host 
	/// one-for-one.  If you are porting existing stream-oriented 
	/// code to the semantics of reliable messages, your code should 
	/// work the same, since reliable message semantics are more 
	/// strict than stream semantics.  The only caveat is related to 
	/// performance: there is per-message overhead to retain the 
	/// message sizes, and so if your code sends many small chunks 
	/// of data, performance will suffer. Any code based on stream 
	/// sockets that does not write excessively small chunks will 
	/// work without any changes. 
	///
	/// Returns:
	/// - k_EResultInvalidParam: invalid connection handle, or the individual message is too big.
	///   (See k_cbMaxSteamNetworkingSocketsMessageSizeSend)
	/// - k_EResultInvalidState: connection is in an invalid state
	/// - k_EResultNoConnection: connection has ended
	/// - k_EResultIgnored: You used k_nSteamNetworkingSend_NoDelay, and the message was dropped because
	///   we were not ready to send it.
	/// - k_EResultLimitExceeded: there was already too much data queued to be sent.
	///   (See k_ESteamNetworkingConfig_SendBufferSize)
	virtual EResult SendMessageToConnection( HSteamNetConnection hConn, const void *pData, uint32 cbData, int nSendFlags ) = 0;

	/// Flush any messages waiting on the Nagle timer and send them
	/// at the next transmission opportunity (often that means right now).
	///
	/// If Nagle is enabled (it's on by default) then when calling 
	/// SendMessageToConnection the message will be buffered, up to the Nagle time
	/// before being sent, to merge small messages into the same packet.
	/// (See k_ESteamNetworkingConfig_NagleTime)
	///
	/// Returns:
	/// k_EResultInvalidParam: invalid connection handle
	/// k_EResultInvalidState: connection is in an invalid state
	/// k_EResultNoConnection: connection has ended
	/// k_EResultIgnored: We weren't (yet) connected, so this operation has no effect.
	virtual EResult FlushMessagesOnConnection( HSteamNetConnection hConn ) = 0;

	/// Fetch the next available message(s) from the connection, if any.
	/// Returns the number of messages returned into your array, up to nMaxMessages.
	/// If the connection handle is invalid, -1 is returned.
	///
	/// The order of the messages returned in the array is relevant.
	/// Reliable messages will be received in the order they were sent (and with the
	/// same sizes --- see SendMessageToConnection for on this subtle difference from a stream socket).
	///
	/// Unreliable messages may be dropped, or delivered out of order withrespect to
	/// each other or with respect to reliable messages.  The same unreliable message
	/// may be received multiple times.
	///
	/// If any messages are returned, you MUST call SteamNetworkingMessage_t::Release() on each
	/// of them free up resources after you are done.  It is safe to keep the object alive for
	/// a little while (put it into some queue, etc), and you may call Release() from any thread.
	virtual int ReceiveMessagesOnConnection( HSteamNetConnection hConn, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages ) = 0; 

	/// Same as ReceiveMessagesOnConnection, but will return the next message available
	/// on any connection that was accepted through the specified listen socket.  Examine
	/// SteamNetworkingMessage_t::m_conn to know which client connection.
	///
	/// Delivery order of messages among different clients is not defined.  They may
	/// be returned in an order different from what they were actually received.  (Delivery
	/// order of messages from the same client is well defined, and thus the order of the
	/// messages is relevant!)
	virtual int ReceiveMessagesOnListenSocket( HSteamListenSocket hSocket, SteamNetworkingMessage_t **ppOutMessages, int nMaxMessages ) = 0; 

	/// Returns basic information about the high-level state of the connection.
	virtual bool GetConnectionInfo( HSteamNetConnection hConn, SteamNetConnectionInfo_t *pInfo ) = 0;

	/// Returns a small set of information about the real-time state of the connection
	/// Returns false if the connection handle is invalid, or the connection has ended.
	virtual bool GetQuickConnectionStatus( HSteamNetConnection hConn, SteamNetworkingQuickConnectionStatus *pStats ) = 0;

	/// Returns detailed connection stats in text format.  Useful
	/// for dumping to a log, etc.
	///
	/// Returns:
	/// -1 failure (bad connection handle)
	/// 0 OK, your buffer was filled in and '\0'-terminated
	/// >0 Your buffer was either nullptr, or it was too small and the text got truncated.
	///    Try again with a buffer of at least N bytes.
	virtual int GetDetailedConnectionStatus( HSteamNetConnection hConn, char *pszBuf, int cbBuf ) = 0;

	/// Returns local IP and port that a listen socket created using CreateListenSocketIP is bound to.
	///
	/// An IPv6 address of ::0 means "any IPv4 or IPv6"
	/// An IPv6 address of ::ffff:0000:0000 means "any IPv4"
	virtual bool GetListenSocketAddress( HSteamListenSocket hSocket, SteamNetworkingIPAddr *address ) = 0;

	/// Create a pair of connections that are talking to each other, e.g. a loopback connection.
	/// This is very useful for testing, or so that your client/server code can work the same
	/// even when you are running a local "server".
	///
	/// The two connections will immediately be placed into the connected state, and no callbacks
	/// will be posted immediately.  After this, if you close either connection, the other connection
	/// will receive a callback, exactly as if they were communicating over the network.  You must
	/// close *both* sides in order to fully clean up the resources!
	///
	/// By default, internal buffers are used, completely bypassing the network, the chopping up of
	/// messages into packets, encryption, copying the payload, etc.  This means that loopback
	/// packets, by default, will not simulate lag or loss.  Passing true for bUseNetworkLoopback will
	/// cause the socket pair to send packets through the local network loopback device (127.0.0.1)
	/// on ephemeral ports.  Fake lag and loss are supported in this case, and CPU time is expended
	/// to encrypt and decrypt.
	///
	/// If you wish to assign a specific identity to either connection, you may pass a particular
	/// identity.  Otherwise, if you pass nullptr, the respective connection will assume a generic
	/// "localhost" identity.  If you use real network loopback, this might be translated to the
	/// actual bound loopback port.  Otherwise, the port will be zero.
	virtual bool CreateSocketPair( HSteamNetConnection *pOutConnection1, HSteamNetConnection *pOutConnection2, bool bUseNetworkLoopback, const SteamNetworkingIdentity *pIdentity1, const SteamNetworkingIdentity *pIdentity2 ) = 0;

	/// Get the identity assigned to this interface.
	/// E.g. on Steam, this is the user's SteamID, or for the gameserver interface, the SteamID assigned
	/// to the gameserver.  Returns false and sets the result to an invalid identity if we don't know
	/// our identity yet.  (E.g. GameServer has not logged in.  On Steam, the user will know their SteamID
	/// even if they are not signed into Steam.)
	virtual bool GetIdentity( SteamNetworkingIdentity *pIdentity ) = 0;

#ifdef STEAMNETWORKINGSOCKETS_ENABLE_SDR

	//
	// Clients connecting to dedicated servers hosted in a data center,
	// using central-authority-granted tickets.
	//

	/// Call this when you receive a ticket from your backend / matchmaking system.  Puts the
	/// ticket into a persistent cache, and optionally returns the parsed ticket.
	///
	/// See stamdatagram_ticketgen.h for more details.
	virtual bool ReceivedRelayAuthTicket( const void *pvTicket, int cbTicket, SteamDatagramRelayAuthTicket *pOutParsedTicket ) = 0;

	/// Search cache for a ticket to talk to the server on the specified virtual port.
	/// If found, returns the number of seconds until the ticket expires, and optionally
	/// the complete cracked ticket.  Returns 0 if we don't have a ticket.
	///
	/// Typically this is useful just to confirm that you have a ticket, before you
	/// call ConnectToHostedDedicatedServer to connect to the server.
	virtual int FindRelayAuthTicketForServer( const SteamNetworkingIdentity *identityGameServer, int nVirtualPort, SteamDatagramRelayAuthTicket *pOutParsedTicket ) = 0;

	/// Client call to connect to a server hosted in a Valve data center, on the specified virtual
	/// port.  You must have placed a ticket for this server into the cache, or else this connect attempt will fail!
	///
	/// You may wonder why tickets are stored in a cache, instead of simply being passed as an argument
	/// here.  The reason is to make reconnection to a gameserver robust, even if the client computer loses
	/// connection to Steam or the central backend, or the app is restarted or crashes, etc.
	///
	/// If you use this, you probably want to call ISteamNetworkingUtils::InitializeRelayNetworkAccess()
	/// when your app initializes
	virtual HSteamNetConnection ConnectToHostedDedicatedServer( const SteamNetworkingIdentity *identityTarget, int nVirtualPort ) = 0;

	//
	// Servers hosted in Valve data centers
	//

	/// Returns the value of the SDR_LISTEN_PORT environment variable.  This
	/// is the UDP server your server will be listening on.  This will
	/// configured automatically for you in production environments.  (You
	/// should set it yourself for testing.)
	virtual uint16 GetHostedDedicatedServerPort() = 0;

	/// If you are running in a production data center, this will return the data
	/// center code.  Returns 0 otherwise.
	virtual SteamNetworkingPOPID GetHostedDedicatedServerPOPID() = 0;

	/// Return info about the hosted server.  You will need to send this information to your
	/// backend, and put it in tickets, so that the relays will know how to forward traffic from
	/// clients to your server.  See SteamDatagramRelayAuthTicket for more info.
	///
	/// NOTE ABOUT DEVELOPMENT ENVIRONMENTS:
	/// In production in our data centers, these parameters are configured via environment variables.
	/// In development, the only one you need to set is SDR_LISTEN_PORT, which is the local port you
	/// want to listen on.  Furthermore, if you are running your server behind a corporate firewall,
	/// you probably will not be able to put the routing information returned by this function into
	/// tickets.   Instead, it should be a public internet address that the relays can use to send
	/// data to your server.  So you might just end up hardcoding a public address and setup port
	/// forwarding on your corporate firewall.  In that case, the port you put into the ticket
	/// needs to be the public-facing port opened on your firewall, if it is different from the
	/// actual server port.
	///
	/// This function will fail if SteamDatagramServer_Init has not been called.
	///
	/// Returns false if the SDR_LISTEN_PORT environment variable is not set.
	virtual bool GetHostedDedicatedServerAddress( SteamDatagramHostedAddress *pRouting ) = 0;

	/// Create a listen socket on the specified virtual port.  The physical UDP port to use
	/// will be determined by the SDR_LISTEN_PORT environment variable.  If a UDP port is not
	/// configured, this call will fail.
	///
	/// Note that this call MUST be made through the SteamGameServerNetworkingSockets() interface
	virtual HSteamListenSocket CreateHostedDedicatedServerListenSocket( int nVirtualPort ) = 0;

#endif // #ifndef STEAMNETWORKINGSOCKETS_ENABLE_SDR

	// Invoke all callbacks queued for this interface.
	// On Steam, callbacks are dispatched via the ordinary Steamworks callbacks mechanism.
	// So if you have code that is also targeting Steam, you should call this at about the
	// same time you would call SteamAPI_RunCallbacks and SteamGameServer_RunCallbacks.
#ifdef STEAMNETWORKINGSOCKETS_STANDALONELIB
	virtual void RunCallbacks( ISteamNetworkingSocketsCallbacks *pCallbacks ) = 0;
#endif
protected:
	~ISteamNetworkingSockets(); // Silence some warnings
};
#define STEAMNETWORKINGSOCKETS_INTERFACE_VERSION "SteamNetworkingSockets002"

extern "C" {

// Global accessor.
#if defined( STEAMNETWORKINGSOCKETS_PARTNER )

	// Standalone lib.  Use different symbol name, so that we can dynamically switch between steamclient.dll
	// and the standalone lib
	STEAMNETWORKINGSOCKETS_INTERFACE ISteamNetworkingSockets *SteamNetworkingSockets_Lib();
	STEAMNETWORKINGSOCKETS_INTERFACE ISteamNetworkingSockets *SteamGameServerNetworkingSockets_Lib();
	inline ISteamNetworkingSockets *SteamNetworkingSockets() { return SteamNetworkingSockets_Lib(); }
	inline ISteamNetworkingSockets *SteamGameServerNetworkingSockets() { return SteamGameServerNetworkingSockets_Lib(); }

#elif defined( STEAMNETWORKINGSOCKETS_OPENSOURCE )

	// Opensource GameNetworkingSockets
	STEAMNETWORKINGSOCKETS_INTERFACE ISteamNetworkingSockets *SteamNetworkingSockets();

#else

	// Steamworks SDK
	inline ISteamNetworkingSockets *SteamNetworkingSockets();
	STEAM_DEFINE_USER_INTERFACE_ACCESSOR( ISteamNetworkingSockets *, SteamNetworkingSockets, STEAMNETWORKINGSOCKETS_INTERFACE_VERSION );
	inline ISteamNetworkingSockets *SteamGameServerNetworkingSockets();
	STEAM_DEFINE_GAMESERVER_INTERFACE_ACCESSOR( ISteamNetworkingSockets *, SteamGameServerNetworkingSockets, STEAMNETWORKINGSOCKETS_INTERFACE_VERSION );
#endif

/// Callback struct used to notify when a connection has changed state
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error "Must define VALVE_CALLBACK_PACK_SMALL or VALVE_CALLBACK_PACK_LARGE"
#endif

/// This callback is posted whenever a connection is created, destroyed, or changes state.
/// The m_info field will contain a complete description of the connection at the time the
/// change occurred and the callback was posted.  In particular, m_eState will have the
/// new connection state.
///
/// You will usually need to listen for this callback to know when:
/// - A new connection arrives on a listen socket.
///   m_info.m_hListenSocket will be set, m_eOldState = k_ESteamNetworkingConnectionState_None,
///   and m_info.m_eState = k_ESteamNetworkingConnectionState_Connecting.
///   See ISteamNetworkigSockets::AcceptConnection.
/// - A connection you initiated has been accepted by the remote host.
///   m_eOldState = k_ESteamNetworkingConnectionState_Connecting, and
///   m_info.m_eState = k_ESteamNetworkingConnectionState_Connected.
///   Some connections might transition to k_ESteamNetworkingConnectionState_FindingRoute first.
/// - A connection has been actively rejected or closed by the remote host.
///   m_eOldState = k_ESteamNetworkingConnectionState_Connecting or k_ESteamNetworkingConnectionState_Connected,
///   and m_info.m_eState = k_ESteamNetworkingConnectionState_ClosedByPeer.  m_info.m_eEndReason
///   and m_info.m_szEndDebug will have for more details.
///   NOTE: upon receiving this callback, you must still destroy the connection using
///   ISteamNetworkingSockets::CloseConnection to free up local resources.  (The details
///   passed to the function are not used in this case, since the connection is already closed.)
/// - A problem was detected with the connection, and it has been closed by the local host.
///   The most common failure is timeout, but other configuration or authentication failures
///   can cause this.  m_eOldState = k_ESteamNetworkingConnectionState_Connecting or
///   k_ESteamNetworkingConnectionState_Connected, and m_info.m_eState = k_ESteamNetworkingConnectionState_ProblemDetectedLocally.
///   m_info.m_eEndReason and m_info.m_szEndDebug will have for more details.
///   NOTE: upon receiving this callback, you must still destroy the connection using
///   ISteamNetworkingSockets::CloseConnection to free up local resources.  (The details
///   passed to the function are not used in this case, since the connection is already closed.)
///
/// Remember that callbacks are posted to a queue, and networking connections can
/// change at any time.  It is possible that the connection has already changed
/// state by the time you process this callback.
///
/// Also note that callbacks will be posted when connections are created and destroyed by your own API calls.
struct SteamNetConnectionStatusChangedCallback_t
{ 
	enum { k_iCallback = k_iSteamNetworkingSocketsCallbacks + 1 };

	/// Connection handle
	HSteamNetConnection m_hConn;

	/// Full connection info
	SteamNetConnectionInfo_t m_info;

	/// Previous state.  (Current state is in m_info.m_eState)
	ESteamNetworkingConnectionState m_eOldState;
};
#pragma pack( pop )

}

#endif // ISTEAMNETWORKINGSOCKETS
