//====== Copyright 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: 
//
//=============================================================================

#ifndef STEAM_API_H
#define STEAM_API_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"
#include "isteamuser.h"
#include "isteamfriends.h"
#include "isteamutils.h"
#include "isteammatchmaking.h"
#include "isteamuserstats.h"
#include "isteamapps.h"
#include "isteamnetworking.h"
#include "isteamremotestorage.h"

// Steam API export macro
#if defined( _WIN32 ) && !defined( _X360 )
	#if defined( STEAM_API_EXPORTS )
	#define S_API extern "C" __declspec( dllexport ) 
	#elif defined( STEAM_API_NODLL )
	#define S_API extern "C"
	#else
	#define S_API extern "C" __declspec( dllimport ) 
	#endif // STEAM_API_EXPORTS
#elif defined( GNUC )
	#if defined( STEAM_API_EXPORTS )
	#define S_API extern "C" __attribute__ ((visibility("default"))) 
	#else
	#define S_API extern "C" 
	#endif // STEAM_API_EXPORTS
#else // !WIN32
	#if defined( STEAM_API_EXPORTS )
	#define S_API extern "C"  
	#else
	#define S_API extern "C" 
	#endif // STEAM_API_EXPORTS
#endif

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	Steam API setup & shutdown
//
//	These functions manage loading, initializing and shutdown of the steamclient.dll
//
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// S_API void SteamAPI_Init(); (see below)
S_API void SteamAPI_Shutdown();

// crash dump recording functions
S_API void SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID );
S_API void SteamAPI_SetMiniDumpComment( const char *pchMsg );

// interface pointers, configured by SteamAPI_Init()
S_API ISteamClient *SteamClient();


//
// VERSION_SAFE_STEAM_API_INTERFACES is usually not necessary, but it provides safety against releasing
// new steam_api.dll's without recompiling/rereleasing modules that use it.
//
// If you use VERSION_SAFE_STEAM_API_INTERFACES, then you should call SteamAPI_InitSafe(). Also, to get the 
// Steam interfaces, you must create and Init() a CSteamAPIContext (below) and use the interfaces in there.
//
// If you don't use VERSION_SAFE_STEAM_API_INTERFACES, then you can use SteamAPI_Init() and the SteamXXXX() 
// functions below to get at the Steam interfaces.
//
#ifdef VERSION_SAFE_STEAM_API_INTERFACES
S_API bool SteamAPI_InitSafe();
#else
S_API bool SteamAPI_Init();

S_API ISteamUser *SteamUser();
S_API ISteamFriends *SteamFriends();
S_API ISteamUtils *SteamUtils();
S_API ISteamMatchmaking *SteamMatchmaking();
S_API ISteamUserStats *SteamUserStats();
S_API ISteamApps *SteamApps();
S_API ISteamNetworking *SteamNetworking();
S_API ISteamMatchmakingServers *SteamMatchmakingServers();
S_API ISteamRemoteStorage *SteamRemoteStorage();
#endif // VERSION_SAFE_STEAM_API_INTERFACES

//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steam callback helper functions
//
//	The following classes/macros are used to be able to easily multiplex callbacks 
//	from the Steam API into various objects in the app in a thread-safe manner
//
//	These functors are triggered via the SteamAPI_RunCallbacks() function, mapping the callback
//  to as many functions/objects as are registered to it
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

S_API void SteamAPI_RunCallbacks();



// functions used by the utility CCallback objects to receive callbacks
S_API void SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback );
S_API void SteamAPI_UnregisterCallback( class CCallbackBase *pCallback );
// functions used by the utility CCallResult objects to receive async call results
S_API void SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
S_API void SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );


//-----------------------------------------------------------------------------
// Purpose: base for callbacks, 
//			used only by CCallback, shouldn't be used directly
//-----------------------------------------------------------------------------
class CCallbackBase
{
public:
	CCallbackBase() { m_nCallbackFlags = 0; m_iCallback = 0; }
	// don't add a virtual destructor because we export this binary interface across dll's
	virtual void Run( void *pvParam ) = 0;
	virtual void Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall ) = 0;
	int GetICallback() { return m_iCallback; }
	virtual int GetCallbackSizeBytes() = 0;

protected:
	enum { k_ECallbackFlagsRegistered = 0x01, k_ECallbackFlagsGameServer = 0x02 };
	uint8 m_nCallbackFlags;
	int m_iCallback;
	friend class CCallbackMgr;
};


//-----------------------------------------------------------------------------
// Purpose: maps a steam async call result to a class member function
//			template params: T = local class, P = parameter struct
//-----------------------------------------------------------------------------
template< class T, class P >
class CCallResult : private CCallbackBase
{
public:
	typedef void (T::*func_t)( P*, bool );

	CCallResult()
	{
		m_hAPICall = 0;
		m_pObj = NULL;
		m_Func = NULL;
		m_iCallback = P::k_iCallback;
	}

	void Set( SteamAPICall_t hAPICall, T *p, func_t func )
	{
		if ( m_hAPICall )
			SteamAPI_UnregisterCallResult( this, m_hAPICall );

		m_hAPICall = hAPICall;
		m_pObj = p;
		m_Func = func;

		if ( hAPICall )
			SteamAPI_RegisterCallResult( this, hAPICall );
	}

	bool IsActive()
	{
		return ( m_hAPICall != 0 );
	}

	void Cancel()
	{
		m_hAPICall = 0;
	}

	~CCallResult()
	{
		if ( m_hAPICall )
			SteamAPI_UnregisterCallResult( this, m_hAPICall );
	}

private:
	virtual void Run( void *pvParam )
	{
		(m_pObj->*m_Func)( (P *)pvParam, false );
		m_hAPICall = 0;
	}
	void Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall )
	{
		if ( hSteamAPICall == m_hAPICall )
		{
			(m_pObj->*m_Func)( (P *)pvParam, bIOFailure );
			m_hAPICall = 0;
		}
	}
	int GetCallbackSizeBytes()
	{
		return sizeof( P );
	}

	SteamAPICall_t m_hAPICall;
	T *m_pObj;
	func_t m_Func;
};



//-----------------------------------------------------------------------------
// Purpose: maps a steam callback to a class member function
//			template params: T = local class, P = parameter struct
//-----------------------------------------------------------------------------
template< class T, class P, bool bGameServer >
class CCallback : private CCallbackBase
{
public:
	typedef void (T::*func_t)( P* );

	// If you can't support constructing a callback with the correct parameters
	// then uncomment the empty constructor below and manually call
	// ::Register() for your object
	// Or, just call the regular constructor with (NULL, NULL)
	// CCallback() {}
	
	// constructor for initializing this object in owner's constructor
	CCallback( T *pObj, func_t func ) : m_pObj( pObj ), m_Func( func )
	{
		if ( pObj && func )
			Register( pObj, func );
	}

	~CCallback()
	{
		Unregister();
	}

	// manual registration of the callback
	void Register( T *pObj, func_t func )
	{
		if ( m_nCallbackFlags & k_ECallbackFlagsRegistered )
			Unregister();

		if ( bGameServer )
		{
			m_nCallbackFlags |= k_ECallbackFlagsGameServer;
		}
		m_pObj = pObj;
		m_Func = func;
		SteamAPI_RegisterCallback( this, P::k_iCallback );
	}

	void Unregister()
	{
		SteamAPI_UnregisterCallback( this );
	}

private:
	virtual void Run( void *pvParam )
	{
		(m_pObj->*m_Func)( (P *)pvParam );
	}
	virtual void Run( void *pvParam, bool, SteamAPICall_t )
	{
		(m_pObj->*m_Func)( (P *)pvParam );
	}
	int GetCallbackSizeBytes()
	{
		return sizeof( P );
	}

	T *m_pObj;
	func_t m_Func;
};


// utility macro for declaring the function and callback object together
#define STEAM_CALLBACK( thisclass, func, param, var ) CCallback< thisclass, param, false > var; void func( param *pParam )


#ifdef _WIN32
// disable this warning; this pattern need for steam callback registration
#pragma warning( disable: 4355 )	// 'this' : used in base member initializer list
#endif


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// pumps out all the steam messages, calling the register callback
S_API void Steam_RunCallbacks( HSteamPipe hSteamPipe, bool bGameServerCallbacks );

// register the callback funcs to use to interact with the steam dll
S_API void Steam_RegisterInterfaceFuncs( void *hModule );

// returns the HSteamUser of the last user to dispatch a callback
S_API HSteamUser Steam_GetHSteamUserCurrent();

// returns the filename path of the current running Steam process, used if you need to load an explicit steam dll by name
S_API const char *SteamAPI_GetSteamInstallPath();

// returns the pipe we are communicating to Steam with
S_API HSteamPipe SteamAPI_GetHSteamPipe();

#ifdef VERSION_SAFE_STEAM_API_INTERFACES
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// VERSION_SAFE_STEAM_API_INTERFACES uses CSteamAPIContext to provide interfaces to each module in a way that 
// lets them each specify the interface versions they are compiled with.
//
// It's important that these stay inlined in the header so the calling module specifies the interface versions
// for whatever Steam API version it has.
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

S_API HSteamUser SteamAPI_GetHSteamUser();

class CSteamAPIContext
{
public:
	CSteamAPIContext();
	void Clear();

	bool Init();

	ISteamUser*			SteamUser()							{ return m_pSteamUser; }
	ISteamFriends*		SteamFriends()						{ return m_pSteamFriends; }
	ISteamUtils*		SteamUtils()						{ return m_pSteamUtils; }
	ISteamMatchmaking*	SteamMatchmaking()					{ return m_pSteamMatchmaking; }
	ISteamUserStats*	SteamUserStats()					{ return m_pSteamUserStats; }
	ISteamApps*			SteamApps()							{ return m_pSteamApps; }
	ISteamMatchmakingServers*	SteamMatchmakingServers()	{ return m_pSteamMatchmakingServers; }
	ISteamNetworking*	SteamNetworking()					{ return m_pSteamNetworking; }
	ISteamRemoteStorage* SteamRemoteStorage()				{ return m_pSteamRemoteStorage; }

private:
	ISteamUser		*m_pSteamUser;
	ISteamFriends	*m_pSteamFriends;
	ISteamUtils		*m_pSteamUtils;
	ISteamMatchmaking	*m_pSteamMatchmaking;
	ISteamUserStats		*m_pSteamUserStats;
	ISteamApps			*m_pSteamApps;
	ISteamMatchmakingServers	*m_pSteamMatchmakingServers;
	ISteamNetworking	*m_pSteamNetworking;
	ISteamRemoteStorage *m_pSteamRemoteStorage;
};

inline CSteamAPIContext::CSteamAPIContext()
{
	Clear();
}

inline void CSteamAPIContext::Clear()
{
	m_pSteamUser = NULL;
	m_pSteamFriends = NULL;
	m_pSteamUtils = NULL;
	m_pSteamMatchmaking = NULL;
	m_pSteamUserStats = NULL;
	m_pSteamApps = NULL;
	m_pSteamMatchmakingServers = NULL;
	m_pSteamNetworking = NULL;
	m_pSteamRemoteStorage = NULL;
}

// This function must be inlined so the module using steam_api.dll gets the version names they want.
inline bool CSteamAPIContext::Init()
{
	if ( !SteamClient() )
		return false;

	HSteamUser hSteamUser = SteamAPI_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamAPI_GetHSteamPipe();

	m_pSteamUser = SteamClient()->GetISteamUser( hSteamUser, hSteamPipe, STEAMUSER_INTERFACE_VERSION );
	if ( !m_pSteamUser )
		return false;

	m_pSteamFriends = SteamClient()->GetISteamFriends( hSteamUser, hSteamPipe, STEAMFRIENDS_INTERFACE_VERSION );
	if ( !m_pSteamFriends )
		return false;

	m_pSteamUtils = SteamClient()->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION );
	if ( !m_pSteamUtils )
		return false;

	m_pSteamMatchmaking = SteamClient()->GetISteamMatchmaking( hSteamUser, hSteamPipe, STEAMMATCHMAKING_INTERFACE_VERSION );
	if ( !m_pSteamMatchmaking )
		return false;

	m_pSteamMatchmakingServers = SteamClient()->GetISteamMatchmakingServers( hSteamUser, hSteamPipe, STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION );
	if ( !m_pSteamMatchmakingServers )
		return false;

	m_pSteamUserStats = SteamClient()->GetISteamUserStats( hSteamUser, hSteamPipe, STEAMUSERSTATS_INTERFACE_VERSION );
	if ( !m_pSteamUserStats )
		return false;
	
	m_pSteamApps = SteamClient()->GetISteamApps( hSteamUser, hSteamPipe, STEAMAPPS_INTERFACE_VERSION );
	if ( !m_pSteamApps )
		return false;

	m_pSteamNetworking = SteamClient()->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION );
	if ( !m_pSteamNetworking )
		return false;

	m_pSteamRemoteStorage = SteamClient()->GetISteamRemoteStorage( hSteamUser, hSteamPipe, STEAMREMOTESTORAGE_INTERFACE_VERSION );
	if ( !m_pSteamRemoteStorage )
		return false;

	return true;
}

#endif // VERSION_SAFE_STEAM_API_INTERFACES

#endif // STEAM_API_H
