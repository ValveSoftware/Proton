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
	virtual void LogOn() = 0;
	virtual void LogOff() = 0;
	virtual bool BLoggedOn() = 0;
	virtual void GSSetSpawnCount( uint32 ucSpawn ) = 0;
	virtual bool GSGetSteam2GetEncryptionKeyToSendToNewClient( void *pvEncryptionKey, uint32 *pcbEncryptionKey, uint32 cbMaxEncryptionKey ) = 0;
	virtual bool GSSendSteam2UserConnect(  uint32 unUserID, const void *pvRawKey, uint32 unKeyLen, uint32 unIPPublic, uint16 usPort, const void *pvCookie, uint32 cubCookie ) = 0;
	virtual bool GSSendSteam3UserConnect( CSteamID steamID, uint32 unIPPublic, const void *pvCookie, uint32 cubCookie ) = 0;
	virtual bool GSRemoveUserConnect( uint32 unUserID ) = 0;
	virtual bool GSSendUserDisconnect( CSteamID steamID, uint32 unUserID ) = 0;
	virtual bool GSSendUserStatusResponse( CSteamID steamID, int nSecondsConnected, int nSecondsSinceLast ) = 0;
	virtual bool Obsolete_GSSetStatus( int32 nAppIdServed, uint32 unServerFlags, int cPlayers, int cPlayersMax, int cBotPlayers, int unGamePort, const char *pchServerName, const char *pchGameDir, const char *pchMapName, const char *pchVersion ) = 0;
	virtual bool GSUpdateStatus( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pchMapName ) = 0;
	virtual bool BSecure() = 0;
	virtual CSteamID GetSteamID() = 0;
	virtual bool GSSetServerType( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint32 unGamePort, const char *pchGameDir, const char *pchVersion ) = 0;
	virtual bool GSSetServerType2( int32 nGameAppId, uint32 unServerFlags, uint32 unGameIP, uint16 unGamePort, uint16 unSpectatorPort, uint16 usQueryPort, const char *pchGameDir, const char *pchVersion, bool bLANMode ) = 0;
	virtual bool GSUpdateStatus2( int cPlayers, int cPlayersMax, int cBotPlayers, const char *pchServerName, const char *pSpectatorServerName, const char *pchMapName ) = 0;
	virtual bool GSCreateUnauthenticatedUser( CSteamID *pSteamID ) = 0;
	virtual bool GSSetUserData( CSteamID steamID, const char *pPlayerName, uint32 nFrags ) = 0;
	virtual void GSUpdateSpectatorPort( uint16 unSpectatorPort ) = 0;
	virtual void GSSetGameType( const char *pchType ) = 0;
};

#define STEAMGAMESERVER_INTERFACE_VERSION "SteamGameServer002"

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

#endif // ISTEAMGAMESERVER_H
