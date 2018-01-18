//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to user account information in Steam
//
//=============================================================================

#ifndef ISTEAMUSER_H
#define ISTEAMUSER_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

// structure that contains client callback data
// see callbacks documentation for more details
struct CallbackMsg_t
{
	HSteamUser m_hSteamUser;
	int m_iCallback;
	uint8 *m_pubParam;
	int m_cubParam;
};

// reference to a steam call, to filter results by
typedef int32 HSteamCall;


//-----------------------------------------------------------------------------
// Purpose: Functions for accessing and manipulating a steam account
//			associated with one client instance
//-----------------------------------------------------------------------------
class ISteamUser
{
public:
	// returns the HSteamUser this interface represents
	// this is only used internally by the API, and by a few select interfaces that support multi-user
	virtual HSteamUser GetHSteamUser() = 0;

	// returns true if the Steam client current has a live connection to the Steam servers. 
	// If false, it means there is no active connection due to either a networking issue on the local machine, or the Steam server is down/busy.
	// The Steam client will automatically be trying to recreate the connection as often as possible.
	virtual bool BLoggedOn() = 0;

	// returns the CSteamID of the account currently logged into the Steam client
	// a CSteamID is a unique identifier for an account, and used to differentiate users in all parts of the Steamworks API
	virtual CSteamID GetSteamID() = 0;

	// Multiplayer Authentication functions
	
	// InitiateGameConnection() starts the state machine for authenticating the game client with the game server
	// It is the client portion of a three-way handshake between the client, the game server, and the steam servers
	//
	// Parameters:
	// void *pAuthBlob - a pointer to empty memory that will be filled in with the authentication token.
	// int cbMaxAuthBlob - the number of bytes of allocated memory in pBlob. Should be at least 2048 bytes.
	// CSteamID steamIDGameServer - the steamID of the game server, received from the game server by the client
	// CGameID gameID - the ID of the current game. For games without mods, this is just CGameID( <appID> )
	// uint32 unIPServer, uint16 usPortServer - the IP address of the game server
	// bool bSecure - whether or not the client thinks that the game server is reporting itself as secure (i.e. VAC is running)
	//
	// return value - returns the number of bytes written to pBlob. If the return is 0, then the buffer passed in was too small, and the call has failed
	// The contents of pBlob should then be sent to the game server, for it to use to complete the authentication process.
	virtual int InitiateGameConnection( void *pAuthBlob, int cbMaxAuthBlob, CSteamID steamIDGameServer, uint32 unIPServer, uint16 usPortServer, bool bSecure ) = 0;

	// notify of disconnect
	// needs to occur when the game client leaves the specified game server, needs to match with the InitiateGameConnection() call
	virtual void TerminateGameConnection( uint32 unIPServer, uint16 usPortServer ) = 0;

	// Legacy functions

	// used by only a few games to track usage events
	virtual void TrackAppUsageEvent( CGameID gameID, int eAppUsageEvent, const char *pchExtraInfo = "" ) = 0;

	// get the local storage folder for current Steam account to write application data, e.g. save games, configs etc.
	// this will usually be something like "C:\Progam Files\Steam\userdata\<SteamID>\<AppID>\local"
	virtual bool GetUserDataFolder( char *pchBuffer, int cubBuffer ) = 0;

	// Starts voice recording. Once started, use GetCompressedVoice() to get the data
	virtual void StartVoiceRecording( ) = 0;

	// Stops voice recording. Because people often release push-to-talk keys early, the system will keep recording for
	// a little bit after this function is called. GetCompressedVoice() should continue to be called until it returns
	// k_eVoiceResultNotRecording
	virtual void StopVoiceRecording( ) = 0;

	// Gets the latest voice data. It should be called as often as possible once recording has started.
	// nBytesWritten is set to the number of bytes written to pDestBuffer. 
	virtual EVoiceResult GetCompressedVoice( void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten ) = 0;

	// Decompresses a chunk of data produced by GetCompressedVoice(). nBytesWritten is set to the 
	// number of bytes written to pDestBuffer. The output format of the data is 16-bit signed at 
	// 11025 samples per second.
	virtual EVoiceResult DecompressVoice( void *pCompressed, uint32 cbCompressed, void *pDestBuffer, uint32 cbDestBufferSize, uint32 *nBytesWritten ) = 0;
};

#define STEAMUSER_INTERFACE_VERSION "SteamUser011"


// callbacks


//-----------------------------------------------------------------------------
// Purpose: called when a connections to the Steam back-end has been established
//			this means the Steam client now has a working connection to the Steam servers
//			usually this will have occurred before the game has launched, and should
//			only be seen if the user has dropped connection due to a networking issue
//			or a Steam server update
//-----------------------------------------------------------------------------
struct SteamServersConnected_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 1 };
};

//-----------------------------------------------------------------------------
// Purpose: called when a connection attempt has failed
//			this will occur periodically if the Steam client is not connected, 
//			and has failed in it's retry to establish a connection
//-----------------------------------------------------------------------------
struct SteamServerConnectFailure_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 2 };
	EResult m_eResult;
};


//-----------------------------------------------------------------------------
// Purpose: called if the client has lost connection to the Steam servers
//			real-time services will be disabled until a matching SteamServersConnected_t has been posted
//-----------------------------------------------------------------------------
struct SteamServersDisconnected_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 3 };
	EResult m_eResult;
};


//-----------------------------------------------------------------------------
// Purpose: Sent by the Steam server to the client telling it to disconnect from the specified game server,
//			which it may be in the process of or already connected to.
//			The game client should immediately disconnect upon receiving this message.
//			This can usually occur if the user doesn't have rights to play on the game server.
//-----------------------------------------------------------------------------
struct ClientGameServerDeny_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 13 };

	uint32 m_uAppID;
	uint32 m_unGameServerIP;
	uint16 m_usGameServerPort;
	uint16 m_bSecure;
	uint32 m_uReason;
};


//-----------------------------------------------------------------------------
// Purpose: called when the callback system for this client is in an error state (and has flushed pending callbacks)
//			When getting this message the client should disconnect from Steam, reset any stored Steam state and reconnect.
//			This usually occurs in the rare event the Steam client has some kind of fatal error.
//-----------------------------------------------------------------------------
struct CallbackPipeFailure_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 17 };
};


#endif // ISTEAMUSER_H
