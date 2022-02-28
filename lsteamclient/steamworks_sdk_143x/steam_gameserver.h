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

// Initialize SteamGameServer client and interface objects, and set server properties which may not be changed.
//
// After calling this function, you should set any additional server parameters, and then
// call ISteamGameServer::LogOnAnonymous() or ISteamGameServer::LogOn()
//
// - usSteamPort is the local port used to communicate with the steam servers.
//   NOTE: unless you are using ver old Steam client binaries, this parameter is ignored, and
//         you should pass 0.  Gameservers now always use WebSockets to talk to Steam.
//         This protocol is TCP-based and thus always uses an ephemeral local port.
//         Older steam client binaries used UDP to talk to Steam, and this argument was useful.
//         A future version of the SDK will remove this argument.
// - usGamePort is the port that clients will connect to for gameplay.
// - usQueryPort is the port that will manage server browser related duties and info
//		pings from clients.  If you pass MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE for usQueryPort, then it
//		will use "GameSocketShare" mode, which means that the game is responsible for sending and receiving
//		UDP packets for the master  server updater. See references to GameSocketShare in isteamgameserver.h.
// - The version string is usually in the form x.x.x.x, and is used by the master server to detect when the
//		server is out of date.  (Only servers with the latest version will be listed.)
inline bool SteamGameServer_Init( uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );

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
	m_pSteamApps = ::SteamGameServerApps();
	if ( !m_pSteamGameServer || !m_pSteamGameServerUtils || !m_pSteamGameServerNetworking || !m_pSteamGameServerStats
		|| !m_pSteamHTTP || !m_pSteamInventory || !m_pSteamUGC || !m_pSteamApps )
		return false;

	return true;
}
#endif

S_API bool S_CALLTYPE SteamInternal_GameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );
inline bool SteamGameServer_Init( uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString )
{
	if ( !SteamInternal_GameServer_Init( unIP, usSteamPort, usGamePort, usQueryPort, eServerMode, pchVersionString ) )
		return false;

	return true;
}
inline void SteamGameServer_ReleaseCurrentThreadMemory()
{
	SteamAPI_ReleaseCurrentThreadMemory();
}

#endif // STEAM_GAMESERVER_H
