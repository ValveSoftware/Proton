//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to steam managing network connections between game clients & servers
//
//=============================================================================

#ifndef ISTEAMNETWORKING
#define ISTEAMNETWORKING
#ifdef _WIN32
#pragma once
#endif

#include "steamtypes.h"
#include "steamclientpublic.h"

// handle to a socket
typedef uint32 SNetSocket_t;
typedef uint32 SNetListenSocket_t;


// connection progress indicators
enum ESNetSocketState
{
	k_ESNetSocketStateInvalid = 0,						

	// communication is valid
	k_ESNetSocketStateConnected = 1,				
	
	// states while establishing a connection
	k_ESNetSocketStateInitiated = 10,				// the connection state machine has started

	// p2p connections
	k_ESNetSocketStateLocalCandidatesFound = 11,	// we've found our local IP info
	k_ESNetSocketStateReceivedRemoteCandidates = 12,// we've received information from the remote machine, via the Steam back-end, about their IP info

	// direct connections
	k_ESNetSocketStateChallengeHandshake = 15,		// we've received a challenge packet from the server

	// failure states
	k_ESNetSocketStateDisconnecting = 21,			// the API shut it down, and we're in the process of telling the other end	
	k_ESNetSocketStateLocalDisconnect = 22,			// the API shut it down, and we've completed shutdown
	k_ESNetSocketStateTimeoutDuringConnect = 23,	// we timed out while trying to creating the connection
	k_ESNetSocketStateRemoteEndDisconnected = 24,	// the remote end has disconnected from us
	k_ESNetSocketStateConnectionBroken = 25,		// connection has been broken; either the other end has disappeared or our local network connection has broke

};


//-----------------------------------------------------------------------------
// Purpose: Functions for making connections and sending data between clients,
//			traversing NAT's where possible
//-----------------------------------------------------------------------------
class ISteamNetworking
{
public:
	// creates a socket and listens others to connect
	// will trigger a SocketStatusCallback_t callback on another client connecting
	// nVirtualP2PPort is the unique ID that the client will connect to, in case you have multiple ports
	//		this can usually just be 0 unless you want multiple sets of connections
	// unIP is the local IP address to bind to
	//		pass in 0 if you just want the default local IP
	// unPort is the port to use
	//		pass in 0 if you don't want users to be able to connect via IP/Port, but expect to be always peer-to-peer connections only
	virtual SNetListenSocket_t CreateListenSocket( int nVirtualP2PPort, uint32 nIP, uint16 nPort ) = 0;

	// creates a socket and begin connection to a remote destination
	// can connect via a known steamID (client or game server), or directly to an IP
	// on success will trigger a SocketConnectCallback_t callback
	// on failure or timeout will trigger a SocketConnectionFailureCallback_t callback
	virtual SNetSocket_t CreateP2PConnectionSocket( CSteamID steamIDTarget, int nVirtualPort, int nTimeoutSec ) = 0;
	virtual SNetSocket_t CreateConnectionSocket( uint32 nIP, uint16 nPort, int nTimeoutSec ) = 0;

	// disconnects the connection to the socket, if any, and invalidates the handle
	// any unread data on the socket will be thrown away
	// if bNotifyRemoteEnd is set, socket will not be completely destroyed until the remote end acknowledges the disconnect
	virtual bool DestroySocket( SNetSocket_t hSocket, bool bNotifyRemoteEnd ) = 0;
	// destroying a listen socket will automatically kill all the regular sockets generated from it
	virtual bool DestroyListenSocket( SNetListenSocket_t hSocket, bool bNotifyRemoteEnd ) = 0;

	// sending data
	// must be a handle to a connected socket
	// data size cannot be more than 8k, although in UDP mode (default),
	// it's recommended packets be no larger than 1300 bytes
	// use the reliable flag with caution; although the resend rate is pretty aggressive,
	// it can still cause stalls in receiving data (like TCP)
	virtual bool SendDataOnSocket( SNetSocket_t hSocket, void *pubData, uint32 cubData, bool bReliable ) = 0;

	// receiving data
	// returns false if there is no data remaining
	// fills out *pcubMsgSize with the size of the next message, in bytes
	virtual bool IsDataAvailableOnSocket( SNetSocket_t hSocket, uint32 *pcubMsgSize ) = 0; 

	// fills in pubDest with the contents of the message
	// messages are always complete, of the same size as was sent (i.e. packetized, not streaming)
	// if *pcubMsgSize < cubDest, only partial data is written
	// returns false if no data is available
	virtual bool RetrieveDataFromSocket( SNetSocket_t hSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize ) = 0; 

	// checks for data from any socket that has been connected off this listen socket
	// returns false if there is no data remaining
	// fills out *pcubMsgSize with the size of the next message, in bytes
	// fills out *phSocket with the socket that data is available on
	virtual bool IsDataAvailable( SNetListenSocket_t hListenSocket, uint32 *pcubMsgSize, SNetSocket_t *phSocket ) = 0;

	// retrieves data from any socket that has been connected off this listen socket
	// fills in pubDest with the contents of the message
	// messages are always complete, of the same size as was sent (i.e. packetized, not streaming)
	// if *pcubMsgSize < cubDest, only partial data is written
	// returns false if no data is available
	// fills out *phSocket with the socket that data is available on
	virtual bool RetrieveData( SNetListenSocket_t hListenSocket, void *pubDest, uint32 cubDest, uint32 *pcubMsgSize, SNetSocket_t *phSocket ) = 0;

	// returns information about the specified socket, filling out the contents of the pointers
	virtual bool GetSocketInfo( SNetSocket_t hSocket, CSteamID *pSteamIDRemote, int *peSocketStatus, uint32 *punIPRemote, uint16 *punPortRemote ) = 0;

	// returns which local port the listen socket is bound to
	// *pnIP and *pnPort will be 0 if the socket is set to listen for P2P connections only
	virtual bool GetListenSocketInfo( SNetListenSocket_t hListenSocket, uint32 *pnIP, uint16 *pnPort ) = 0;
	
};
#define STEAMNETWORKING_INTERFACE_VERSION "SteamNetworking001"


// callback notification - status of a socket has changed
struct SocketStatusCallback_t
{ 
	enum { k_iCallback = k_iSteamNetworkingCallbacks + 1 };
	SNetSocket_t m_hSocket;				// the socket used to send/receive data to the remote host
	SNetListenSocket_t m_hListenSocket;	// this is the server socket that we were listening on; NULL if this was an outgoing connection
	CSteamID m_steamIDRemote;			// remote steamID we have connected to, if it has one
	int m_eSNetSocketState;				// socket state, ESNetSocketState
};


#endif // ISTEAMNETWORKING
