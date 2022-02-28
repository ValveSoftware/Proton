//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to steam for game servers
//
//=============================================================================

#ifndef ISTEAMGAMESERVER_H
#define ISTEAMGAMESERVER_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

//-----------------------------------------------------------------------------
// Purpose: Functions for authenticating users via Steam to play on a game server
//-----------------------------------------------------------------------------
class ISteamGameServer
{
public:
	// connection functions
	virtual void LogOn() = 0;
	virtual void LogOff() = 0;
	
	// status functions
	virtual bool BLoggedOn() = 0;
	virtual bool BSecure() = 0; 
	virtual CSteamID GetSteamID() = 0;

	// Handles receiving a new connection from a Steam user.  This call will ask the Steam
	// servers to validate the users identity, app ownership, and VAC status.  If the Steam servers 
	// are off-line, then it will validate the cached ticket itself which will validate app ownership 
	// and identity.  The AuthBlob here should be acquired on the game client using SteamUser()->InitiateGameConnection()
	// and must then be sent up to the game server for authentication.
	//
	// Return Value: returns true if the users ticket passes basic checks. pSteamIDUser will contain the Steam ID of this user. pSteamIDUser must NOT be NULL
	// If the call succeeds then you should expect a GSClientApprove_t or GSClientDeny_t callback which will tell you whether authentication
	// for the user has succeeded or failed (the steamid in the callback will match the one returned by this call)
	virtual bool SendUserConnectAndAuthenticate( uint32 unIPClient, const void *pvAuthBlob, uint32 cubAuthBlobSize, CSteamID *pSteamIDUser ) = 0;

	// Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.  
	// 
	// Return Value: Returns a SteamID for the user to be tracked with, you should call HandleUserDisconnect()
	// when this user leaves the server just like you would for a real user.
	virtual CSteamID CreateUnauthenticatedUserConnection() = 0;

	// Should be called whenever a user leaves our game server, this lets Steam internally
	// track which users are currently on which servers for the purposes of preventing a single
	// account being logged into multiple servers, showing who is currently on a server, etc.
	virtual void SendUserDisconnect( CSteamID steamIDUser ) = 0;

	// Update the data to be displayed in the server browser and matchmaking interfaces for a user
	// currently connected to the server.  For regular users you must call this after you receive a
	// GSUserValidationSuccess callback.
	// 
	// Return Value: true if successful, false if failure (ie, steamIDUser wasn't for an active player)
	virtual bool BUpdateUserData( CSteamID steamIDUser, const char *pchPlayerName, uint32 uScore ) = 0;

	// You shouldn't need to call this as it is called internally by SteamGameServer_Init() and can only be called once.
	//
	// To update the data in this call which may change during the servers lifetime see UpdateServerStatus() below.
	//
	// Input:	nGameAppID - The Steam assigned AppID for the game
	//			unServerFlags - Any applicable combination of flags (see k_unServerFlag____ constants below)
	//			unGameIP - The IP Address the server is listening for client connections on (might be INADDR_ANY)
	//			unGamePort - The port which the server is listening for client connections on
	//			unSpectatorPort - the port on which spectators can join to observe the server, 0 if spectating is not supported
	//			usQueryPort - The port which the ISteamMasterServerUpdater API should use in order to listen for matchmaking requests
	//			pchGameDir - A unique string identifier for your game
	//			pchVersion - The current version of the server as a string like 1.0.0.0
	//			bLanMode - Is this a LAN only server?
	//			
	// bugbug jmccaskey - figure out how to remove this from the API and only expose via SteamGameServer_Init... or make this actually used,
	// and stop calling it in SteamGameServer_Init()?
	virtual bool BSetServerType( uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, 
								uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode ) = 0;

	// Updates server status values which shows up in the server browser and matchmaking APIs
	virtual void UpdateServerStatus( int cPlayers, int cPlayersMax, int cBotPlayers, 
									 const char *pchServerName, const char *pSpectatorServerName, 
									 const char *pchMapName ) = 0;

	// This can be called if spectator goes away or comes back (passing 0 means there is no spectator server now).
	virtual void UpdateSpectatorPort( uint16 unSpectatorPort ) = 0;

	// Sets a string defining the "gametype" for this server, this is optional, but if it is set
	// it allows users to filter in the matchmaking/server-browser interfaces based on the value
	virtual void SetGameType( const char *pchGameType ) = 0; 

	// Ask if a user has a specific achievement for this game, will get a callback on reply
	virtual bool BGetUserAchievementStatus( CSteamID steamID, const char *pchAchievementName ) = 0;

	// Ask for the gameplay stats for the server. Results returned in a callback
	virtual void GetGameplayStats( ) = 0;

	// Ask if a user in in the specified group, results returns async by GSUserGroupStatus_t
	// returns false if we're not connected to the steam servers and thus cannot ask
	virtual bool RequestUserGroupStatus( CSteamID steamIDUser, CSteamID steamIDGroup ) = 0;

	// Returns the public IP of the server according to Steam, useful when the server is 
	// behind NAT and you want to advertise its IP in a lobby for other clients to directly
	// connect to
	virtual uint32 GetPublicIP() = 0;
};

#define STEAMGAMESERVER_INTERFACE_VERSION "SteamGameServer008"

// game server flags
const uint32 k_unServerFlagNone			= 0x00;
const uint32 k_unServerFlagActive		= 0x01;		// server has users playing
const uint32 k_unServerFlagSecure		= 0x02;		// server wants to be secure
const uint32 k_unServerFlagDedicated	= 0x04;		// server is dedicated
const uint32 k_unServerFlagLinux		= 0x08;		// linux build
const uint32 k_unServerFlagPassworded	= 0x10;		// password protected
const uint32 k_unServerFlagPrivate		= 0x20;		// server shouldn't list on master server and
													// won't enforce authentication of users that connect to the server.
													// Useful when you run a server where the clients may not
													// be connected to the internet but you want them to play (i.e LANs)


// callbacks


// client has been approved to connect to this game server
struct GSClientApprove_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 1 };
	CSteamID m_SteamID;
};


// client has been denied to connection to this game server
struct GSClientDeny_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 2 };
	CSteamID m_SteamID;
	EDenyReason m_eDenyReason;
	char m_rgchOptionalText[128];
};


// request the game server should kick the user
struct GSClientKick_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 3 };
	CSteamID m_SteamID;
	EDenyReason m_eDenyReason;
};

// NOTE: callback values 4 and 5 are skipped because they are used for old deprecated callbacks, 
// do not reuse them here.


// client achievement info
struct GSClientAchievementStatus_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 6 };
	uint64 m_SteamID;
	char m_pchAchievement[128];
	bool m_bUnlocked;
};

// received when the game server requests to be displayed as secure (VAC protected)
// m_bSecure is true if the game server should display itself as secure to users, false otherwise
struct GSPolicyResponse_t
{
	enum { k_iCallback = k_iSteamUserCallbacks + 15 };
	uint8 m_bSecure;
};

// GS gameplay stats info
struct GSGameplayStats_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 7 };
	EResult m_eResult;					// Result of the call
	int32	m_nRank;					// Overall rank of the server (0-based)
	uint32	m_unTotalConnects;			// Total number of clients who have ever connected to the server
	uint32	m_unTotalMinutesPlayed;		// Total number of minutes ever played on the server
};

// send as a reply to RequestUserGroupStatus()
struct GSClientGroupStatus_t
{
	enum { k_iCallback = k_iSteamGameServerCallbacks + 8 };
	CSteamID m_SteamIDUser;
	CSteamID m_SteamIDGroup;
	bool m_bMember;
	bool m_bOfficer;
};


#endif // ISTEAMGAMESERVER_H
