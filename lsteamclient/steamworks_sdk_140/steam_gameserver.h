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

inline bool SteamGameServer_Init( uint32 unIP, uint16 usSteamPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );

S_API void SteamGameServer_Shutdown();
S_API void SteamGameServer_RunCallbacks();

// Most Steam API functions allocate some amount of thread-local memory for
// parameter storage. Calling SteamGameServer_ReleaseCurrentThreadMemory()
// will free all API-related memory associated with the calling thread.
// This memory is released automatically by SteamGameServer_RunCallbacks(),
// so single-threaded servers do not need to explicitly call this function.
inline void SteamGameServer_ReleaseCurrentThreadMemory();

S_API bool SteamGameServer_BSecure();
S_API uint64 SteamGameServer_GetSteamID();


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// Global accessors for game server C++ APIs. See individual isteam*.h files for details.
// You should not cache the results of these accessors or pass the result pointers across
// modules! Different modules may be compiled against different SDK header versions, and
// the interface pointers could therefore be different across modules. Every line of code
// which calls into a Steamworks API should retrieve the interface from a global accessor.
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
#if !defined( STEAM_API_EXPORTS )
inline ISteamClient *SteamGameServerClient();
inline ISteamGameServer *SteamGameServer();
inline ISteamUtils *SteamGameServerUtils();
inline ISteamNetworking *SteamGameServerNetworking();
inline ISteamGameServerStats *SteamGameServerStats();
inline ISteamHTTP *SteamGameServerHTTP();
inline ISteamInventory *SteamGameServerInventory();
inline ISteamUGC *SteamGameServerUGC();
inline ISteamApps *SteamGameServerApps();
#endif

class CSteamGameServerAPIContext
{
public:
	CSteamGameServerAPIContext() { Clear(); }
	inline void Clear();
	inline bool Init();

	ISteamClient *SteamClient() const					{ return m_pSteamClient; }
	ISteamGameServer *SteamGameServer() const			{ return m_pSteamGameServer; }
	ISteamUtils *SteamGameServerUtils() const			{ return m_pSteamGameServerUtils; }
	ISteamNetworking *SteamGameServerNetworking() const	{ return m_pSteamGameServerNetworking; }
	ISteamGameServerStats *SteamGameServerStats() const	{ return m_pSteamGameServerStats; }
	ISteamHTTP *SteamHTTP() const						{ return m_pSteamHTTP; }
	ISteamInventory *SteamInventory() const				{ return m_pSteamInventory; }
	ISteamUGC *SteamUGC() const							{ return m_pSteamUGC; }
	ISteamApps *SteamApps() const						{ return m_pSteamApps; }

private:
	ISteamClient				*m_pSteamClient;
	ISteamGameServer			*m_pSteamGameServer;
	ISteamUtils					*m_pSteamGameServerUtils;
	ISteamNetworking			*m_pSteamGameServerNetworking;
	ISteamGameServerStats		*m_pSteamGameServerStats;
	ISteamHTTP					*m_pSteamHTTP;
	ISteamInventory				*m_pSteamInventory;
	ISteamUGC					*m_pSteamUGC;
	ISteamApps					*m_pSteamApps;
};


// Older SDKs exported this global pointer, but it is no longer supported.
// You should use SteamGameServerClient() or CSteamGameServerAPIContext to
// safely access the ISteamClient APIs from your game server application.
//S_API ISteamClient *g_pSteamClientGameServer;

// SteamGameServer_InitSafe has been replaced with SteamGameServer_Init and
// is no longer supported. Use SteamGameServer_Init instead.
//S_API void S_CALLTYPE SteamGameServer_InitSafe();


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// These macros are similar to the STEAM_CALLBACK_* macros in steam_api.h, but only trigger for gameserver callbacks
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
#define STEAM_GAMESERVER_CALLBACK( thisclass, func, /*callback_type, [deprecated] var*/... ) \
	_STEAM_CALLBACK_SELECT( ( __VA_ARGS__, GS, 3 ), ( this->SetGameserverFlag();, thisclass, func, __VA_ARGS__ ) )

#define STEAM_GAMESERVER_CALLBACK_MANUAL( thisclass, func, callback_type, var ) \
	CCallbackManual< thisclass, callback_type, true > var; void func( callback_type *pParam )


#define _STEAM_CALLBACK_GS( _, thisclass, func, param, var ) \
	CCallback< thisclass, param, true > var; void func( param *pParam )

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
S_API HSteamPipe S_CALLTYPE SteamGameServer_GetHSteamPipe();
S_API HSteamUser S_CALLTYPE SteamGameServer_GetHSteamUser();
S_API bool S_CALLTYPE SteamInternal_GameServer_Init( uint32 unIP, uint16 usPort, uint16 usGamePort, uint16 usQueryPort, EServerMode eServerMode, const char *pchVersionString );


#if !defined( STEAM_API_EXPORTS )
inline void S_CALLTYPE SteamGameServerInternal_OnContextInit( void* p )
{
	((CSteamGameServerAPIContext*)p)->Clear();
	if ( SteamGameServer_GetHSteamPipe() )
		((CSteamGameServerAPIContext*)p)->Init();
}
inline CSteamGameServerAPIContext& SteamGameServerInternal_ModuleContext()
{
	// SteamInternal_ContextInit takes a base pointer for the equivalent of
	// struct { void (*pFn)(void* pCtx); uintp counter; CSteamAPIContext ctx; }
	// Do not change layout of 2 + sizeof... or add non-pointer aligned data!
	// NOTE: declaring "static CSteamAPIConext" creates a large function
	// which queries the initialization status of the object. We know that
	// it is pointer-aligned and fully memset with zeros, so just alias a
	// static buffer of the appropriate size and call it a CSteamAPIContext.
	static void* s_CallbackCounterAndContext[2 + sizeof( CSteamGameServerAPIContext ) / sizeof( void* )] = { (void*)&SteamGameServerInternal_OnContextInit, 0 };
	return *(CSteamGameServerAPIContext*)SteamInternal_ContextInit( s_CallbackCounterAndContext );
}
inline ISteamClient *SteamGameServerClient() { return SteamGameServerInternal_ModuleContext().SteamClient(); }
inline ISteamGameServer *SteamGameServer() { return SteamGameServerInternal_ModuleContext().SteamGameServer(); }
inline ISteamUtils *SteamGameServerUtils() { return SteamGameServerInternal_ModuleContext().SteamGameServerUtils(); }
inline ISteamNetworking *SteamGameServerNetworking() { return SteamGameServerInternal_ModuleContext().SteamGameServerNetworking(); }
inline ISteamGameServerStats *SteamGameServerStats() { return SteamGameServerInternal_ModuleContext().SteamGameServerStats(); }
inline ISteamHTTP *SteamGameServerHTTP() { return SteamGameServerInternal_ModuleContext().SteamHTTP(); }
inline ISteamInventory *SteamGameServerInventory() { return SteamGameServerInternal_ModuleContext().SteamInventory(); }
inline ISteamUGC *SteamGameServerUGC() { return SteamGameServerInternal_ModuleContext().SteamUGC(); }
inline ISteamApps *SteamGameServerApps() { return SteamGameServerInternal_ModuleContext().SteamApps(); }
#endif // !defined( STEAM_API_EXPORTS )


inline void CSteamGameServerAPIContext::Clear()
{
	m_pSteamClient = NULL;
	m_pSteamGameServer = NULL;
	m_pSteamGameServerUtils = NULL;
	m_pSteamGameServerNetworking = NULL;
	m_pSteamGameServerStats = NULL;
	m_pSteamHTTP = NULL;
	m_pSteamInventory = NULL;
	m_pSteamUGC = NULL;
	m_pSteamApps = NULL;
}

// This function must be declared inline in the header so the module using steam_api.dll gets the version names they want.
inline bool CSteamGameServerAPIContext::Init()
{
	HSteamUser hSteamUser = SteamGameServer_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamGameServer_GetHSteamPipe();
	if ( !hSteamPipe )
		return false;

	m_pSteamClient = (ISteamClient*) SteamInternal_CreateInterface( STEAMCLIENT_INTERFACE_VERSION );
	if ( !m_pSteamClient )
		return false;
	
	m_pSteamGameServer = m_pSteamClient->GetISteamGameServer( hSteamUser, hSteamPipe, STEAMGAMESERVER_INTERFACE_VERSION );
	if ( !m_pSteamGameServer )
		return false;

	m_pSteamGameServerUtils = m_pSteamClient->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION );
	if ( !m_pSteamGameServerUtils )
		return false;

	m_pSteamGameServerNetworking = m_pSteamClient->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION );
	if ( !m_pSteamGameServerNetworking )
		return false;

	m_pSteamGameServerStats = m_pSteamClient->GetISteamGameServerStats( hSteamUser, hSteamPipe, STEAMGAMESERVERSTATS_INTERFACE_VERSION );
	if ( !m_pSteamGameServerStats )
		return false;

	m_pSteamHTTP = m_pSteamClient->GetISteamHTTP( hSteamUser, hSteamPipe, STEAMHTTP_INTERFACE_VERSION );
	if ( !m_pSteamHTTP )
		return false;

	m_pSteamInventory = m_pSteamClient->GetISteamInventory( hSteamUser, hSteamPipe, STEAMINVENTORY_INTERFACE_VERSION );
	if ( !m_pSteamInventory )
		return false;

	m_pSteamUGC = m_pSteamClient->GetISteamUGC( hSteamUser, hSteamPipe, STEAMUGC_INTERFACE_VERSION );
	if ( !m_pSteamUGC )
		return false;

	m_pSteamApps = m_pSteamClient->GetISteamApps( hSteamUser, hSteamPipe, STEAMAPPS_INTERFACE_VERSION );
	if ( !m_pSteamApps )
		return false;

	return true;
}


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
