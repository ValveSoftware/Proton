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

// Initialize ISteamGameServer interface object, and set server properties which may not be changed.
//
// After calling this function, you should set any additional server parameters, and then
// call ISteamGameServer::LogOnAnonymous() or ISteamGameServer::LogOn()
//
// - usSteamPort is the local port used to communicate with the steam servers.
// - usGamePort is the port that clients will connect to for gameplay.
// - usQueryPort is the port that will manage server browser related duties and info
//		pings from clients.  If you pass MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE for usQueryPort, then it
//		will use "GameSocketShare" mode, which means that the game is responsible for sending and receiving
//		UDP packets for the master  server updater. See references to GameSocketShare in isteamgameserver.h.
// - The version string is usually in the form x.x.x.x, and is used by the master server to detect when the
//		server is out of date.  (Only servers with the latest version will be listed.)
#ifndef _PS3

#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool SteamGameServer_InitSafe( uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );
#else
S_API bool SteamGameServer_Init( uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );
#endif

#else

#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool SteamGameServer_InitSafe( const SteamPS3Params_t *ps3Params, uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );
#else
S_API bool SteamGameServer_Init( const SteamPS3Params_t *ps3Params, uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );
#endif

#endif

#ifndef VERSION_SAFE_STEAM_API_INTERFACES
S_API ISteamGameServer *SteamGameServer();
S_API ISteamUtils *SteamGameServerUtils();
S_API ISteamNetworking *SteamGameServerNetworking();
S_API ISteamGameServerStats *SteamGameServerStats();
S_API ISteamHTTP *SteamGameServerHTTP();
S_API ISteamInventory *SteamGameServerInventory();
S_API ISteamUGC *SteamGameServerUGC();
#endif

S_API void SteamGameServer_Shutdown();
S_API void SteamGameServer_RunCallbacks();

S_API bool SteamGameServer_BSecure();
S_API uint64 SteamGameServer_GetSteamID();

#define STEAM_GAMESERVER_CALLBACK( thisclass, func, param, var ) CCallback< thisclass, param, true > var; void func( param *pParam )


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
S_API HSteamPipe SteamGameServer_GetHSteamPipe();

#ifdef VERSION_SAFE_STEAM_API_INTERFACES
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// VERSION_SAFE_STEAM_API_INTERFACES uses CSteamAPIContext to provide interfaces to each module in a way that 
// lets them each specify the interface versions they are compiled with.
//
// It's important that these stay inlined in the header so the calling module specifies the interface versions
// for whatever Steam API version it has.
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

S_API HSteamUser SteamGameServer_GetHSteamUser();

class CSteamGameServerAPIContext
{
public:
	CSteamGameServerAPIContext();
	void Clear();

	bool Init();

	ISteamGameServer *SteamGameServer() { return m_pSteamGameServer; }
	ISteamUtils *SteamGameServerUtils() { return m_pSteamGameServerUtils; }
	ISteamNetworking *SteamGameServerNetworking() { return m_pSteamGameServerNetworking; }
	ISteamGameServerStats *SteamGameServerStats() { return m_pSteamGameServerStats; }
	ISteamHTTP *SteamHTTP() { return m_pSteamHTTP; }
	ISteamInventory *SteamInventory() { return m_pSteamInventory; }
	ISteamUGC *SteamUGC() { return m_SteamUGC; }

private:
	ISteamGameServer			*m_pSteamGameServer;
	ISteamUtils					*m_pSteamGameServerUtils;
	ISteamNetworking			*m_pSteamGameServerNetworking;
	ISteamGameServerStats		*m_pSteamGameServerStats;
	ISteamHTTP					*m_pSteamHTTP;
	ISteamInventory				*m_pSteamInventory;
	ISteamUGC					*m_SteamUGC;
};

inline CSteamGameServerAPIContext::CSteamGameServerAPIContext()
{
	Clear();
}

inline void CSteamGameServerAPIContext::Clear()
{
	m_pSteamGameServer = NULL;
	m_pSteamGameServerUtils = NULL;
	m_pSteamGameServerNetworking = NULL;
	m_pSteamGameServerStats = NULL;
	m_pSteamHTTP = NULL;
	m_pSteamInventory = NULL;
	m_SteamUGC = NULL;
}

S_API ISteamClient *g_pSteamClientGameServer;
// This function must be inlined so the module using steam_api.dll gets the version names they want.
inline bool CSteamGameServerAPIContext::Init()
{
	if ( !g_pSteamClientGameServer )
		return false;

	HSteamUser hSteamUser = SteamGameServer_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamGameServer_GetHSteamPipe();

	m_pSteamGameServer = g_pSteamClientGameServer->GetISteamGameServer( hSteamUser, hSteamPipe, STEAMGAMESERVER_INTERFACE_VERSION );
	if ( !m_pSteamGameServer )
		return false;

	m_pSteamGameServerUtils = g_pSteamClientGameServer->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION );
	if ( !m_pSteamGameServerUtils )
		return false;

	m_pSteamGameServerNetworking = g_pSteamClientGameServer->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION );
	if ( !m_pSteamGameServerNetworking )
		return false;

	m_pSteamGameServerStats = g_pSteamClientGameServer->GetISteamGameServerStats( hSteamUser, hSteamPipe, STEAMGAMESERVERSTATS_INTERFACE_VERSION );
	if ( !m_pSteamGameServerStats )
		return false;

	m_pSteamHTTP = g_pSteamClientGameServer->GetISteamHTTP( hSteamUser, hSteamPipe, STEAMHTTP_INTERFACE_VERSION );
	if ( !m_pSteamHTTP )
		return false;

	m_pSteamInventory = g_pSteamClientGameServer->GetISteamInventory( hSteamUser, hSteamPipe, STEAMINVENTORY_INTERFACE_VERSION );
	if ( !m_pSteamInventory )
		return false;

	m_SteamUGC = g_pSteamClientGameServer->GetISteamUGC( hSteamUser, hSteamPipe, STEAMUGC_INTERFACE_VERSION );
	if ( !m_SteamUGC )
		return false;

	return true;
}

#endif // VERSION_SAFE_STEAM_API_INTERFACES


#endif // STEAM_GAMESERVER_H
