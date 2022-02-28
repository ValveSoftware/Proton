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
#include "isteamscreenshots.h"
#include "isteammusic.h"
#include "isteammusicremote.h"
#include "isteamhttp.h"
#include "isteamunifiedmessages.h"
#include "isteamcontroller.h"
#include "isteamugc.h"
#include "isteamapplist.h"
#include "isteamhtmlsurface.h"
#include "isteaminventory.h"
#include "isteamvideo.h"

#if defined( _PS3 )
#include "steamps3params.h"
#endif

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
S_API void S_CALLTYPE SteamAPI_Shutdown();

// checks if a local Steam client is running 
S_API bool S_CALLTYPE SteamAPI_IsSteamRunning();

// Detects if your executable was launched through the Steam client, and restarts your game through 
// the client if necessary. The Steam client will be started if it is not running.
//
// Returns: true if your executable was NOT launched through the Steam client. This function will
//          then start your application through the client. Your current process should exit.
//
//          false if your executable was started through the Steam client or a steam_appid.txt file
//          is present in your game's directory (for development). Your current process should continue.
//
// NOTE: This function should be used only if you are using CEG or not using Steam's DRM. Once applied
//       to your executable, Steam's DRM will handle restarting through Steam if necessary.
S_API bool S_CALLTYPE SteamAPI_RestartAppIfNecessary( uint32 unOwnAppID );

// crash dump recording functions
S_API void S_CALLTYPE SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID );
S_API void S_CALLTYPE SteamAPI_SetMiniDumpComment( const char *pchMsg );

// interface pointers, configured by SteamAPI_Init()
S_API ISteamClient *S_CALLTYPE SteamClient();


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
S_API bool S_CALLTYPE SteamAPI_InitSafe();
#else

#if defined(_PS3)
S_API bool S_CALLTYPE SteamAPI_Init( SteamPS3Params_t *pParams );
#else
S_API bool S_CALLTYPE SteamAPI_Init();
#endif

S_API ISteamUser *S_CALLTYPE SteamUser();
S_API ISteamFriends *S_CALLTYPE SteamFriends();
S_API ISteamUtils *S_CALLTYPE SteamUtils();
S_API ISteamMatchmaking *S_CALLTYPE SteamMatchmaking();
S_API ISteamUserStats *S_CALLTYPE SteamUserStats();
S_API ISteamApps *S_CALLTYPE SteamApps();
S_API ISteamNetworking *S_CALLTYPE SteamNetworking();
S_API ISteamMatchmakingServers *S_CALLTYPE SteamMatchmakingServers();
S_API ISteamRemoteStorage *S_CALLTYPE SteamRemoteStorage();
S_API ISteamScreenshots *S_CALLTYPE SteamScreenshots();
S_API ISteamHTTP *S_CALLTYPE SteamHTTP();
S_API ISteamUnifiedMessages *S_CALLTYPE SteamUnifiedMessages();
S_API ISteamController *S_CALLTYPE SteamController();
S_API ISteamUGC *S_CALLTYPE SteamUGC();
S_API ISteamAppList *S_CALLTYPE SteamAppList();
S_API ISteamMusic *S_CALLTYPE SteamMusic();
S_API ISteamMusicRemote *S_CALLTYPE SteamMusicRemote();
S_API ISteamHTMLSurface *S_CALLTYPE SteamHTMLSurface();
S_API ISteamInventory *S_CALLTYPE SteamInventory();
S_API ISteamVideo *S_CALLTYPE SteamVideo();
#ifdef _PS3
S_API ISteamPS3OverlayRender *S_CALLTYPE SteamPS3OverlayRender();
#endif
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

S_API void S_CALLTYPE SteamAPI_RunCallbacks();



// functions used by the utility CCallback objects to receive callbacks
S_API void S_CALLTYPE SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback );
S_API void S_CALLTYPE SteamAPI_UnregisterCallback( class CCallbackBase *pCallback );
// functions used by the utility CCallResult objects to receive async call results
S_API void S_CALLTYPE SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
S_API void S_CALLTYPE SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );


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
		m_hAPICall = k_uAPICallInvalid;
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

	bool IsActive() const
	{
		return ( m_hAPICall != k_uAPICallInvalid );
	}

	void Cancel()
	{
		if ( m_hAPICall != k_uAPICallInvalid )
		{
			SteamAPI_UnregisterCallResult( this, m_hAPICall );
			m_hAPICall = k_uAPICallInvalid;
		}
		
	}

	~CCallResult()
	{
		Cancel();
	}

	void SetGameserverFlag() { m_nCallbackFlags |= k_ECallbackFlagsGameServer; }
private:
	virtual void Run( void *pvParam )
	{
		m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
		(m_pObj->*m_Func)( (P *)pvParam, false );		
	}
	void Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall )
	{
		if ( hSteamAPICall == m_hAPICall )
		{
			m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
			(m_pObj->*m_Func)( (P *)pvParam, bIOFailure );			
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
class CCallback : protected CCallbackBase
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
		if ( m_nCallbackFlags & k_ECallbackFlagsRegistered )
			Unregister();
	}

	// manual registration of the callback
	void Register( T *pObj, func_t func )
	{
		if ( !pObj || !func )
			return;

		if ( m_nCallbackFlags & k_ECallbackFlagsRegistered )
			Unregister();

		if ( bGameServer )
		{
			m_nCallbackFlags |= k_ECallbackFlagsGameServer;
		}
		m_pObj = pObj;
		m_Func = func;
		// SteamAPI_RegisterCallback sets k_ECallbackFlagsRegistered
		SteamAPI_RegisterCallback( this, P::k_iCallback );
	}

	void Unregister()
	{
		// SteamAPI_UnregisterCallback removes k_ECallbackFlagsRegistered
		SteamAPI_UnregisterCallback( this );
	}

	void SetGameserverFlag() { m_nCallbackFlags |= k_ECallbackFlagsGameServer; }
protected:
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

// Allows you to defer registration of the callback
template< class T, class P, bool bGameServer >
class CCallbackManual : public CCallback< T, P, bGameServer >
{
public:
	CCallbackManual() : CCallback< T, P, bGameServer >( NULL, NULL ) {}
};

// utility macro for declaring the function and callback object together
#define STEAM_CALLBACK( thisclass, func, param, var ) CCallback< thisclass, param, false > var; void func( param *pParam )

// same as above, but lets you defer the callback binding by calling Register later
#define STEAM_CALLBACK_MANUAL( thisclass, func, param, var ) CCallbackManual< thisclass, param, false > var; void func( param *pParam )


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

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
S_API void SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

// backwards compat export, passes through to SteamAPI_ variants
S_API HSteamPipe GetHSteamPipe();
S_API HSteamUser GetHSteamUser();

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
	ISteamScreenshots*	SteamScreenshots()					{ return m_pSteamScreenshots; }
	ISteamHTTP*			SteamHTTP()							{ return m_pSteamHTTP; }
	ISteamUnifiedMessages*	SteamUnifiedMessages()			{ return m_pSteamUnifiedMessages; }
	ISteamController*	SteamController()					{ return m_pController; }
	ISteamUGC*			SteamUGC()							{ return m_pSteamUGC; }
	ISteamAppList*		SteamAppList()						{ return m_pSteamAppList; }
	ISteamMusic*		SteamMusic()						{ return m_pSteamMusic; }
	ISteamMusicRemote*	SteamMusicRemote()					{ return m_pSteamMusicRemote; }
	ISteamHTMLSurface*	SteamHTMLSurface()					{ return m_pSteamHTMLSurface; }
	ISteamInventory*	SteamInventory()					{ return m_pSteamInventory; }
	ISteamVideo*		SteamVideo()						{ return m_pSteamVideo; }
#ifdef _PS3
	ISteamPS3OverlayRender* SteamPS3OverlayRender()		{ return m_pSteamPS3OverlayRender; }
#endif

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
	ISteamScreenshots	*m_pSteamScreenshots;
	ISteamHTTP			*m_pSteamHTTP;
	ISteamUnifiedMessages*m_pSteamUnifiedMessages;
	ISteamController	*m_pController;
	ISteamUGC			*m_pSteamUGC;
	ISteamAppList		*m_pSteamAppList;
	ISteamMusic			*m_pSteamMusic;
	ISteamMusicRemote	*m_pSteamMusicRemote;
	ISteamHTMLSurface	*m_pSteamHTMLSurface;
	ISteamInventory		*m_pSteamInventory;
	ISteamVideo			*m_pSteamVideo;
#ifdef _PS3
	ISteamPS3OverlayRender *m_pSteamPS3OverlayRender;
#endif
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
	m_pSteamHTTP = NULL;
	m_pSteamScreenshots = NULL;
	m_pSteamMusic = NULL;
	m_pSteamUnifiedMessages = NULL;
	m_pController = NULL;
	m_pSteamUGC = NULL;
	m_pSteamAppList = NULL;
	m_pSteamMusic = NULL;
	m_pSteamMusicRemote= NULL;
	m_pSteamHTMLSurface = NULL;
	m_pSteamInventory = NULL;
#ifdef _PS3
	m_pSteamPS3OverlayRender = NULL;
#endif
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

	m_pSteamScreenshots = SteamClient()->GetISteamScreenshots( hSteamUser, hSteamPipe, STEAMSCREENSHOTS_INTERFACE_VERSION );
	if ( !m_pSteamScreenshots )
		return false;

	m_pSteamHTTP = SteamClient()->GetISteamHTTP( hSteamUser, hSteamPipe, STEAMHTTP_INTERFACE_VERSION );
	if ( !m_pSteamHTTP )
		return false;

	m_pSteamUnifiedMessages = SteamClient()->GetISteamUnifiedMessages( hSteamUser, hSteamPipe, STEAMUNIFIEDMESSAGES_INTERFACE_VERSION );
	if ( !m_pSteamUnifiedMessages )
		return false;

	m_pController = SteamClient()->GetISteamController( hSteamUser, hSteamPipe, STEAMCONTROLLER_INTERFACE_VERSION );
	if ( !m_pController )
		return false;

	m_pSteamUGC = SteamClient()->GetISteamUGC( hSteamUser, hSteamPipe, STEAMUGC_INTERFACE_VERSION );
	if ( !m_pSteamUGC )
		return false;

	m_pSteamAppList = SteamClient()->GetISteamAppList( hSteamUser, hSteamPipe, STEAMAPPLIST_INTERFACE_VERSION );
	if ( !m_pSteamAppList )
		return false;

	m_pSteamMusic = SteamClient()->GetISteamMusic( hSteamUser, hSteamPipe, STEAMMUSIC_INTERFACE_VERSION );
	if ( !m_pSteamMusic )
	{
		return false;
	}

	m_pSteamMusicRemote = SteamClient()->GetISteamMusicRemote( hSteamUser, hSteamPipe, STEAMMUSICREMOTE_INTERFACE_VERSION );
	if ( !m_pSteamMusicRemote )
	{
		return false;
	}

	m_pSteamHTMLSurface = SteamClient()->GetISteamHTMLSurface( hSteamUser, hSteamPipe, STEAMHTMLSURFACE_INTERFACE_VERSION );
	if ( !m_pSteamHTMLSurface )
	{
		return false;
	}

	m_pSteamInventory = SteamClient()->GetISteamInventory( hSteamUser, hSteamPipe, STEAMINVENTORY_INTERFACE_VERSION );
	if ( !m_pSteamInventory )
	{
		return false;
	}

	m_pSteamVideo = SteamClient()->GetISteamVideo( hSteamUser, hSteamPipe, STEAMVIDEO_INTERFACE_VERSION );
	if ( !m_pSteamVideo )
	{
		return false;
	}

#ifdef _PS3
	m_pSteamPS3OverlayRender = SteamClient()->GetISteamPS3OverlayRender();
#endif

	return true;
}

#endif // VERSION_SAFE_STEAM_API_INTERFACES

#if defined(USE_BREAKPAD_HANDLER) || defined(STEAM_API_EXPORTS)
// this should be called before the game initialized the steam APIs
// pchDate should be of the format "Mmm dd yyyy" (such as from the __DATE__ macro )
// pchTime should be of the format "hh:mm:ss" (such as from the __TIME__ macro )
// bFullMemoryDumps (Win32 only) -- writes out a uuid-full.dmp in the client/dumps folder
// pvContext-- can be NULL, will be the void * context passed into m_pfnPreMinidumpCallback
// PFNPreMinidumpCallback m_pfnPreMinidumpCallback   -- optional callback which occurs just before a .dmp file is written during a crash.  Applications can hook this to allow adding additional information into the .dmp comment stream.
S_API void S_CALLTYPE SteamAPI_UseBreakpadCrashHandler( char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback );
S_API void S_CALLTYPE SteamAPI_SetBreakpadAppID( uint32 unAppID );
#endif

#endif // STEAM_API_H
