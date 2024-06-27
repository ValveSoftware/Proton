//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#ifndef STEAM_GAMESERVER_H
#define STEAM_GAMESERVER_H
#ifdef _WIN32
#pragma once
#endif

#include "steam_api.h"
#include "isteamgameserver.h"
#include "isteamgameserverstats.h"

enum EServerMode
{
	eServerModeInvalid = 0, // DO NOT USE		
	eServerModeNoAuthentication = 1, // Don't authenticate user logins and don't list on the server list
	eServerModeAuthentication = 2, // Authenticate users, list on the server list, don't run VAC on clients that connect
	eServerModeAuthenticationAndSecure = 3, // Authenticate users, list on the server list and VAC protect clients
};													

/// Pass to SteamGameServer_Init to indicate that the same UDP port will be used for game traffic
/// UDP queries for server browser pings and LAN discovery.  In this case, Steam will not open up a
/// socket to handle server browser queries, and you must use ISteamGameServer::HandleIncomingPacket
/// and ISteamGameServer::GetNextOutgoingPacket to handle packets related to server discovery on your socket.
const uint16 STEAMGAMESERVER_QUERY_PORT_SHARED = 0xffff;

// DEPRECATED: This old name was really confusing.
const uint16 MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE = STEAMGAMESERVER_QUERY_PORT_SHARED;

// Initialize SteamGameServer client and interface objects, and set server properties which may not be changed.
//
// After calling this function, you should set any additional server parameters, and then
// call ISteamGameServer::LogOnAnonymous() or ISteamGameServer::LogOn()
//
// - unIP will usually be zero.  If you are on a machine with multiple IP addresses, you can pass a non-zero
//   value here and the relevant sockets will be bound to that IP.  This can be used to ensure that
//   the IP you desire is the one used in the server browser.
// - usGamePort is the port that clients will connect to for gameplay.  You will usually open up your
//   own socket bound to this port.
// - usQueryPort is the port that will manage server browser related duties and info
//		pings from clients.  If you pass STEAMGAMESERVER_QUERY_PORT_SHARED for usQueryPort, then it
//		will use "GameSocketShare" mode, which means that the game is responsible for sending and receiving
//		UDP packets for the master  server updater.  (See ISteamGameServer::HandleIncomingPacket and
//		ISteamGameServer::GetNextOutgoingPacket.)
// - The version string should be in the form x.x.x.x, and is used by the master server to detect when the
//		server is out of date.  (Only servers with the latest version will be listed.)
//
// On success k_ESteamAPIInitResult_OK is returned.  Otherwise, if pOutErrMsg is non-NULL,
// it will receive a non-localized message that explains the reason for the failure
inline ESteamAPIInitResult SteamGameServer_InitEx( uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString, SteamErrMsg *pOutErrMsg );

// This function is included for compatibility with older SDK.
// You can use it if you don't care about decent error handling
inline bool SteamGameServer_Init( uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString )
{
	return SteamGameServer_InitEx( unIP, usGamePort, usQueryPort, eServerMode, pchVersionString, NULL ) == k_ESteamAPIInitResult_OK;
}

// Shutdown SteamGameSeverXxx interfaces, log out, and free resources.
S_API void SteamGameServer_Shutdown();

// Most Steam API functions allocate some amount of thread-local memory for
// parameter storage. Calling SteamGameServer_ReleaseCurrentThreadMemory()
// will free all API-related memory associated with the calling thread.
// This memory is released automatically by SteamGameServer_RunCallbacks(),
// so single-threaded servers do not need to explicitly call this function.
inline void SteamGameServer_ReleaseCurrentThreadMemory();

S_API bool SteamGameServer_BSecure();
S_API uint64 SteamGameServer_GetSteamID();

// Older SDKs exported this global pointer, but it is no longer supported.
// You should use SteamGameServerClient() or CSteamGameServerAPIContext to
// safely access the ISteamClient APIs from your game server application.
//S_API ISteamClient *g_pSteamClientGameServer;

// SteamGameServer_InitSafe has been replaced with SteamGameServer_Init and
// is no longer supported. Use SteamGameServer_Init instead.
//S_API void S_CALLTYPE SteamGameServer_InitSafe();

//=============================================================================
//
// Internal implementation details below
//
//=============================================================================

#ifndef STEAM_API_EXPORTS
// This function must be declared inline in the header so the module using steam_api.dll gets the version names they want.
inline bool CSteamGameServerAPIContext::Init()
{
	m_pSteamClient = ::SteamGameServerClient();
	if ( !m_pSteamClient )
		return false;

	m_pSteamGameServer = ::SteamGameServer();
	m_pSteamGameServerUtils = ::SteamGameServerUtils();
	m_pSteamGameServerNetworking = ::SteamGameServerNetworking();
	m_pSteamGameServerStats = ::SteamGameServerStats();
	m_pSteamHTTP = ::SteamGameServerHTTP();
	m_pSteamInventory = ::SteamGameServerInventory();
	m_pSteamUGC = ::SteamGameServerUGC();
	if ( !m_pSteamGameServer || !m_pSteamGameServerUtils || !m_pSteamGameServerNetworking || !m_pSteamGameServerStats
		|| !m_pSteamHTTP || !m_pSteamInventory || !m_pSteamUGC )
		return false;

	return true;
}
#endif

S_API ESteamAPIInitResult S_CALLTYPE SteamInternal_GameServer_Init_V2( uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString, const char *pszInternalCheckInterfaceVersions, SteamErrMsg *pOutErrMsg );
inline ESteamAPIInitResult SteamGameServer_InitEx( uint32 unIP, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString, SteamErrMsg *pOutErrMsg )
{
	const char *pszInternalCheckInterfaceVersions = 
		STEAMUTILS_INTERFACE_VERSION "\0"
		STEAMNETWORKINGUTILS_INTERFACE_VERSION "\0"

		STEAMGAMESERVER_INTERFACE_VERSION "\0"
		STEAMGAMESERVERSTATS_INTERFACE_VERSION "\0"
		STEAMHTTP_INTERFACE_VERSION "\0"
		STEAMINVENTORY_INTERFACE_VERSION "\0"
		STEAMNETWORKING_INTERFACE_VERSION "\0"
		STEAMNETWORKINGMESSAGES_INTERFACE_VERSION "\0"
		STEAMNETWORKINGSOCKETS_INTERFACE_VERSION "\0"
		STEAMUGC_INTERFACE_VERSION "\0"
		"\0";
	return SteamInternal_GameServer_Init_V2( unIP, usGamePort, usQueryPort, eServerMode, pchVersionString, pszInternalCheckInterfaceVersions, pOutErrMsg );
}
inline void SteamGameServer_ReleaseCurrentThreadMemory()
{
	SteamAPI_ReleaseCurrentThreadMemory();
}

#endif // STEAM_GAMESERVER_H
