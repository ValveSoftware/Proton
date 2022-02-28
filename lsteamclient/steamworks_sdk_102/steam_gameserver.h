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
#include "isteammasterserverupdater.h"

enum EServerMode
{
	eServerModeInvalid = 0, // DO NOT USE		
	eServerModeNoAuthentication = 1, // Don't authenticate user logins and don't list on the server list
	eServerModeAuthentication = 2, // Authenticate users, list on the server list, don't run VAC on clients that connect
	eServerModeAuthenticationAndSecure = 3, // Authenticate users, list on the server list and VAC protect clients
};													

// Note: if you pass MASTERSERVERUPDATERPORT_USEGAMESOCKETSHARE for usQueryPort, then it will use "GameSocketShare" mode, 
// which means that the game is responsible for sending and receiving UDP packets for the master 
// server updater. See references to GameSocketShare in isteammasterserverupdater.h.
//
// Pass 0 for usGamePort or usSpectatorPort if you're not using that. Then, the master server updater will report 
// what's running based on that.
#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool SteamGameServer_InitSafe( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );
#else
S_API bool SteamGameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usSpectatorPort, uint16 usQueryPort, EServerMode eServerMode, const char *pchGameDir, const char *pchVersionString );

S_API ISteamGameServer *SteamGameServer();
S_API ISteamUtils *SteamGameServerUtils();
S_API ISteamMasterServerUpdater *SteamMasterServerUpdater();
S_API ISteamNetworking *SteamGameServerNetworking();
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
	ISteamMasterServerUpdater *SteamMasterServerUpdater() { return m_pSteamMasterServerUpdater; }
	ISteamNetworking *SteamGameServerNetworking() { return m_pSteamGameServerNetworking; }

private:
	ISteamGameServer			*m_pSteamGameServer;
	ISteamUtils					*m_pSteamGameServerUtils;
	ISteamMasterServerUpdater	*m_pSteamMasterServerUpdater;
	ISteamNetworking			*m_pSteamGameServerNetworking;
};

inline CSteamGameServerAPIContext::CSteamGameServerAPIContext()
{
	Clear();
}

inline void CSteamGameServerAPIContext::Clear()
{
	m_pSteamGameServer = NULL;
	m_pSteamGameServerUtils = NULL;
	m_pSteamMasterServerUpdater = NULL;
	m_pSteamGameServerNetworking = NULL;
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

	m_pSteamMasterServerUpdater = g_pSteamClientGameServer->GetISteamMasterServerUpdater( hSteamUser, hSteamPipe, STEAMMASTERSERVERUPDATER_INTERFACE_VERSION );
	if ( !m_pSteamMasterServerUpdater )
		return false;

	m_pSteamGameServerNetworking = g_pSteamClientGameServer->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION );
	if ( !m_pSteamGameServerNetworking )
		return false;

	return true;
}

#endif // VERSION_SAFE_STEAM_API_INTERFACES


#endif // STEAM_GAMESERVER_H
