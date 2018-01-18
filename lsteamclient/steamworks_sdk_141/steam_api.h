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
#include "isteamparentalsettings.h"


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


// SteamAPI_Init must be called before using any other API functions. If it fails, an
// error message will be output to the debugger (or stderr) with further information.
S_API bool S_CALLTYPE SteamAPI_Init();

// SteamAPI_Shutdown should be called during process shutdown if possible.
S_API void S_CALLTYPE SteamAPI_Shutdown();

// SteamAPI_RestartAppIfNecessary ensures that your executable was launched through Steam.
//
// Returns true if the current process should terminate. Steam is now re-launching your application.
//
// Returns false if no action needs to be taken. This means that your executable was started through
// the Steam client, or a steam_appid.txt file is present in your game's directory (for development).
// Your current process should continue if false is returned.
//
// NOTE: If you use the Steam DRM wrapper on your primary executable file, this check is unnecessary
// since the DRM wrapper will ensure that your application was launched properly through Steam.
S_API bool S_CALLTYPE SteamAPI_RestartAppIfNecessary( uint32 unOwnAppID );

// Many Steam API functions allocate a small amount of thread-local memory for parameter storage.
// SteamAPI_ReleaseCurrentThreadMemory() will free API memory associated with the calling thread.
// This function is also called automatically by SteamAPI_RunCallbacks(), so a single-threaded
// program never needs to explicitly call this function.
S_API void S_CALLTYPE SteamAPI_ReleaseCurrentThreadMemory();


// crash dump recording functions
S_API void S_CALLTYPE SteamAPI_WriteMiniDump( uint32 uStructuredExceptionCode, void* pvExceptionInfo, uint32 uBuildID );
S_API void S_CALLTYPE SteamAPI_SetMiniDumpComment( const char *pchMsg );


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// Global accessors for Steamworks C++ APIs. See individual isteam*.h files for details.
// You should not cache the results of these accessors or pass the result pointers across
// modules! Different modules may be compiled against different SDK header versions, and
// the interface pointers could therefore be different across modules. Every line of code
// which calls into a Steamworks API should retrieve the interface from a global accessor.
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
#if !defined( STEAM_API_EXPORTS )
inline ISteamClient *SteamClient();
inline ISteamUser *SteamUser();
inline ISteamFriends *SteamFriends();
inline ISteamUtils *SteamUtils();
inline ISteamMatchmaking *SteamMatchmaking();
inline ISteamUserStats *SteamUserStats();
inline ISteamApps *SteamApps();
inline ISteamNetworking *SteamNetworking();
inline ISteamMatchmakingServers *SteamMatchmakingServers();
inline ISteamRemoteStorage *SteamRemoteStorage();
inline ISteamScreenshots *SteamScreenshots();
inline ISteamHTTP *SteamHTTP();
inline ISteamUnifiedMessages *SteamUnifiedMessages();
inline ISteamController *SteamController();
inline ISteamUGC *SteamUGC();
inline ISteamAppList *SteamAppList();
inline ISteamMusic *SteamMusic();
inline ISteamMusicRemote *SteamMusicRemote();
inline ISteamHTMLSurface *SteamHTMLSurface();
inline ISteamInventory *SteamInventory();
inline ISteamVideo *SteamVideo();
inline ISteamParentalSettings *SteamParentalSettings();
#endif // VERSION_SAFE_STEAM_API_INTERFACES


// CSteamAPIContext encapsulates the Steamworks API global accessors into
// a single object. This is DEPRECATED and only remains for compatibility.
class CSteamAPIContext
{
public:
	// DEPRECATED - there is no benefit to using this over the global accessors
	CSteamAPIContext() { Clear(); }
	void Clear();
	bool Init();
	ISteamClient*		SteamClient() const					{ return m_pSteamClient; }
	ISteamUser*			SteamUser() const					{ return m_pSteamUser; }
	ISteamFriends*		SteamFriends() const				{ return m_pSteamFriends; }
	ISteamUtils*		SteamUtils() const					{ return m_pSteamUtils; }
	ISteamMatchmaking*	SteamMatchmaking() const			{ return m_pSteamMatchmaking; }
	ISteamUserStats*	SteamUserStats() const				{ return m_pSteamUserStats; }
	ISteamApps*			SteamApps() const					{ return m_pSteamApps; }
	ISteamMatchmakingServers* SteamMatchmakingServers() const { return m_pSteamMatchmakingServers; }
	ISteamNetworking*	SteamNetworking() const				{ return m_pSteamNetworking; }
	ISteamRemoteStorage* SteamRemoteStorage() const			{ return m_pSteamRemoteStorage; }
	ISteamScreenshots*	SteamScreenshots() const			{ return m_pSteamScreenshots; }
	ISteamHTTP*			SteamHTTP() const					{ return m_pSteamHTTP; }
	ISteamUnifiedMessages* SteamUnifiedMessages() const		{ return m_pSteamUnifiedMessages; }
	ISteamController*	SteamController() const				{ return m_pController; }
	ISteamUGC*			SteamUGC() const					{ return m_pSteamUGC; }
	ISteamAppList*		SteamAppList() const				{ return m_pSteamAppList; }
	ISteamMusic*		SteamMusic() const					{ return m_pSteamMusic; }
	ISteamMusicRemote*	SteamMusicRemote() const			{ return m_pSteamMusicRemote; }
	ISteamHTMLSurface*	SteamHTMLSurface() const			{ return m_pSteamHTMLSurface; }
	ISteamInventory*	SteamInventory() const				{ return m_pSteamInventory; }
	ISteamVideo*		SteamVideo() const					{ return m_pSteamVideo; }
	ISteamParentalSettings* SteamParentalSettings() const	{ return m_pSteamParentalSettings; }
	// DEPRECATED - there is no benefit to using this over the global accessors
private:
	ISteamClient		*m_pSteamClient;
	ISteamUser			*m_pSteamUser;
	ISteamFriends		*m_pSteamFriends;
	ISteamUtils			*m_pSteamUtils;
	ISteamMatchmaking	*m_pSteamMatchmaking;
	ISteamUserStats		*m_pSteamUserStats;
	ISteamApps			*m_pSteamApps;
	ISteamMatchmakingServers *m_pSteamMatchmakingServers;
	ISteamNetworking	*m_pSteamNetworking;
	ISteamRemoteStorage *m_pSteamRemoteStorage;
	ISteamScreenshots	*m_pSteamScreenshots;
	ISteamHTTP			*m_pSteamHTTP;
	ISteamUnifiedMessages *m_pSteamUnifiedMessages;
	ISteamController	*m_pController;
	ISteamUGC			*m_pSteamUGC;
	ISteamAppList		*m_pSteamAppList;
	ISteamMusic			*m_pSteamMusic;
	ISteamMusicRemote	*m_pSteamMusicRemote;
	ISteamHTMLSurface	*m_pSteamHTMLSurface;
	ISteamInventory		*m_pSteamInventory;
	ISteamVideo			*m_pSteamVideo;
	ISteamParentalSettings *m_pSteamParentalSettings;
};


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steam callback and call-result helpers
//
//	The following macros and classes are used to register your application for
//	callbacks and call-results, which are delivered in a predictable manner.
//
//	STEAM_CALLBACK macros are meant for use inside of a C++ class definition.
//	They map a Steam notification callback directly to a class member function
//	which is automatically prototyped as "void func( callback_type *pParam )".
//
//	CCallResult is used with specific Steam APIs that return "result handles".
//	The handle can be passed to a CCallResult object's Set function, along with
//	an object pointer and member-function pointer. The member function will
//	be executed once the results of the Steam API call are available.
//
//	CCallback and CCallbackManual classes can be used instead of STEAM_CALLBACK
//	macros if you require finer control over registration and unregistration.
//
//	Callbacks and call-results are queued automatically and are only
//	delivered/executed when your application calls SteamAPI_RunCallbacks().
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// SteamAPI_RunCallbacks is safe to call from multiple threads simultaneously,
// but if you choose to do this, callback code could be executed on any thread.
// One alternative is to call SteamAPI_RunCallbacks from the main thread only,
// and call SteamAPI_ReleaseCurrentThreadMemory regularly on other threads.
S_API void S_CALLTYPE SteamAPI_RunCallbacks();


// Declares a callback member function plus a helper member variable which
// registers the callback on object creation and unregisters on destruction.
// The optional fourth 'var' param exists only for backwards-compatibility
// and can be ignored.
#define STEAM_CALLBACK( thisclass, func, .../*callback_type, [deprecated] var*/ ) \
	_STEAM_CALLBACK_SELECT( ( __VA_ARGS__, 4, 3 ), ( /**/, thisclass, func, __VA_ARGS__ ) )

// Declares a callback function and a named CCallbackManual variable which
// has Register and Unregister functions instead of automatic registration.
#define STEAM_CALLBACK_MANUAL( thisclass, func, callback_type, var )	\
	CCallbackManual< thisclass, callback_type > var; void func( callback_type *pParam )


// Internal functions used by the utility CCallback objects to receive callbacks
S_API void S_CALLTYPE SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback );
S_API void S_CALLTYPE SteamAPI_UnregisterCallback( class CCallbackBase *pCallback );
// Internal functions used by the utility CCallResult objects to receive async call results
S_API void S_CALLTYPE SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );
S_API void S_CALLTYPE SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, SteamAPICall_t hAPICall );


//-----------------------------------------------------------------------------
// Purpose: base for callbacks and call results - internal implementation detail
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

private:
	CCallbackBase( const CCallbackBase& );
	CCallbackBase& operator=( const CCallbackBase& );
};

//-----------------------------------------------------------------------------
// Purpose: templated base for callbacks - internal implementation detail
//-----------------------------------------------------------------------------
template< int sizeof_P >
class CCallbackImpl : protected CCallbackBase
{
public:
	~CCallbackImpl() { if ( m_nCallbackFlags & k_ECallbackFlagsRegistered ) SteamAPI_UnregisterCallback( this ); }
	void SetGameserverFlag() { m_nCallbackFlags |= k_ECallbackFlagsGameServer; }

protected:
	virtual void Run( void *pvParam ) = 0;
	virtual void Run( void *pvParam, bool /*bIOFailure*/, SteamAPICall_t /*hSteamAPICall*/ ) { Run( pvParam ); }
	virtual int GetCallbackSizeBytes() { return sizeof_P; }
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

	CCallResult();
	~CCallResult();
	
	void Set( SteamAPICall_t hAPICall, T *p, func_t func );
	bool IsActive() const;
	void Cancel();

	void SetGameserverFlag() { m_nCallbackFlags |= k_ECallbackFlagsGameServer; }
private:
	virtual void Run( void *pvParam );
	virtual void Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall );
	virtual int GetCallbackSizeBytes() { return sizeof( P ); }

	SteamAPICall_t m_hAPICall;
	T *m_pObj;
	func_t m_Func;
};



//-----------------------------------------------------------------------------
// Purpose: maps a steam callback to a class member function
//			template params: T = local class, P = parameter struct,
//			bGameserver = listen for gameserver callbacks instead of client callbacks
//-----------------------------------------------------------------------------
template< class T, class P, bool bGameserver = false >
class CCallback : public CCallbackImpl< sizeof( P ) >
{
public:
	typedef void (T::*func_t)(P*);

	// NOTE: If you can't provide the correct parameters at construction time, you should
	// use the CCallbackManual callback object (STEAM_CALLBACK_MANUAL macro) instead.
	CCallback( T *pObj, func_t func );

	void Register( T *pObj, func_t func );
	void Unregister();

protected:
	virtual void Run( void *pvParam );
	
	T *m_pObj;
	func_t m_Func;
};


//-----------------------------------------------------------------------------
// Purpose: subclass of CCallback which allows default-construction in
//			an unregistered state; you must call Register manually
//-----------------------------------------------------------------------------
template< class T, class P, bool bGameServer = false >
class CCallbackManual : public CCallback< T, P, bGameServer >
{
public:
	CCallbackManual() : CCallback< T, P, bGameServer >( NULL, NULL ) {}

	// Inherits public Register and Unregister functions from base class
};



#ifdef _WIN32
// disable this warning; this pattern need for steam callback registration
#pragma warning( disable: 4355 )	// 'this' : used in base member initializer list
#endif


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	steamclient.dll private wrapper functions
//
//	The following functions are part of abstracting API access to the steamclient.dll, but should only be used in very specific cases
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

// SteamAPI_IsSteamRunning() returns true if Steam is currently running
S_API bool S_CALLTYPE SteamAPI_IsSteamRunning();

// Pumps out all the steam messages, calling registered callbacks.
// NOT THREADSAFE - do not call from multiple threads simultaneously.
S_API void Steam_RunCallbacks( HSteamPipe hSteamPipe, bool bGameServerCallbacks );

// register the callback funcs to use to interact with the steam dll
S_API void Steam_RegisterInterfaceFuncs( void *hModule );

// returns the HSteamUser of the last user to dispatch a callback
S_API HSteamUser Steam_GetHSteamUserCurrent();

// returns the filename path of the current running Steam process, used if you need to load an explicit steam dll by name.
// DEPRECATED - implementation is Windows only, and the path returned is a UTF-8 string which must be converted to UTF-16 for use with Win32 APIs
S_API const char *SteamAPI_GetSteamInstallPath();

// returns the pipe we are communicating to Steam with
S_API HSteamPipe SteamAPI_GetHSteamPipe();

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
S_API void SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

// backwards compat export, passes through to SteamAPI_ variants
S_API HSteamPipe GetHSteamPipe();
S_API HSteamUser GetHSteamUser();


#if defined( VERSION_SAFE_STEAM_API_INTERFACES )
// exists only for backwards compat with code written against older SDKs
S_API bool S_CALLTYPE SteamAPI_InitSafe();
#endif

#include "steam_api_internal.h"

#endif // STEAM_API_H
