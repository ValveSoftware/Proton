//====== Copyright Valve Corporation, All rights reserved. ====================
//
// This header includes *all* of the interfaces and callback structures
// in the Steamworks SDK, and some high level functions to control the SDK
// (init, shutdown, etc) that you probably only need in one or two files.
//
// To save your compile times, we recommend that you not include this file
// in header files.  Instead, include the specific headers for the interfaces
// and callback structures you need.  The one file you might consider including
// in your precompiled header (e.g. stdafx.h) is steam_api_common.h
//
//=============================================================================

#ifndef STEAM_API_H
#define STEAM_API_H
#ifdef _WIN32
#pragma once
#endif

// Basic stuff
#include "steam_api_common.h"

// All of the interfaces
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
#include "isteamcontroller.h"
#include "isteamugc.h"
#include "isteamapplist.h"
#include "isteamhtmlsurface.h"
#include "isteaminventory.h"
#include "isteamvideo.h"
#include "isteamparentalsettings.h"
#include "isteaminput.h"
#include "isteamremoteplay.h"


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

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
S_API void SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

// backwards compat export, passes through to SteamAPI_ variants
S_API HSteamPipe GetHSteamPipe();
S_API HSteamUser GetHSteamUser();


#if defined( VERSION_SAFE_STEAM_API_INTERFACES )
// exists only for backwards compat with code written against older SDKs
S_API bool S_CALLTYPE SteamAPI_InitSafe();
#endif

#if defined(USE_BREAKPAD_HANDLER) || defined(STEAM_API_EXPORTS)
// this should be called before the game initialized the steam APIs
// pchDate should be of the format "Mmm dd yyyy" (such as from the __ DATE __ macro )
// pchTime should be of the format "hh:mm:ss" (such as from the __ TIME __ macro )
// bFullMemoryDumps (Win32 only) -- writes out a uuid-full.dmp in the client/dumps folder
// pvContext-- can be NULL, will be the void * context passed into m_pfnPreMinidumpCallback
// PFNPreMinidumpCallback m_pfnPreMinidumpCallback   -- optional callback which occurs just before a .dmp file is written during a crash.  Applications can hook this to allow adding additional information into the .dmp comment stream.
S_API void S_CALLTYPE SteamAPI_UseBreakpadCrashHandler( char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback );
S_API void S_CALLTYPE SteamAPI_SetBreakpadAppID( uint32 unAppID );
#endif


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//
//	CSteamAPIContext
//
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

#ifndef STEAM_API_EXPORTS

// Deprecated!  Use the global accessors directly
inline bool CSteamAPIContext::Init()
{
	m_pSteamClient = ::SteamClient();
	if ( !m_pSteamClient )
		return false;

	m_pSteamUser = ::SteamUser();
	if ( !m_pSteamUser )
		return false;

	m_pSteamFriends = ::SteamFriends();
	if ( !m_pSteamFriends )
		return false;

	m_pSteamUtils = ::SteamUtils();
	if ( !m_pSteamUtils )
		return false;

	m_pSteamMatchmaking = ::SteamMatchmaking();
	if ( !m_pSteamMatchmaking )
		return false;

	m_pSteamGameSearch = ::SteamGameSearch();
	if ( !m_pSteamGameSearch )
		return false;

#if !defined( IOSALL) // Not yet supported on iOS.
	m_pSteamMatchmakingServers = ::SteamMatchmakingServers();
	if ( !m_pSteamMatchmakingServers )
		return false;
#endif

	m_pSteamUserStats = ::SteamUserStats();
	if ( !m_pSteamUserStats )
		return false;

	m_pSteamApps = ::SteamApps();
	if ( !m_pSteamApps )
		return false;

	m_pSteamNetworking = ::SteamNetworking();
	if ( !m_pSteamNetworking )
		return false;

	m_pSteamRemoteStorage = ::SteamRemoteStorage();
	if ( !m_pSteamRemoteStorage )
		return false;

	m_pSteamScreenshots = ::SteamScreenshots();
	if ( !m_pSteamScreenshots )
		return false;

	m_pSteamHTTP = ::SteamHTTP();
	if ( !m_pSteamHTTP )
		return false;

	m_pController = ::SteamController();
	if ( !m_pController )
		return false;

	m_pSteamUGC = ::SteamUGC();
	if ( !m_pSteamUGC )
		return false;

	m_pSteamAppList = ::SteamAppList();
	if ( !m_pSteamAppList )
		return false;

	m_pSteamMusic = ::SteamMusic();
	if ( !m_pSteamMusic )
		return false;

	m_pSteamMusicRemote = ::SteamMusicRemote();
	if ( !m_pSteamMusicRemote )
		return false;

#if !defined( ANDROID ) && !defined( IOSALL) // Not yet supported on Android or ios.
	m_pSteamHTMLSurface = ::SteamHTMLSurface();
	if ( !m_pSteamHTMLSurface )
	return false;
#endif

	m_pSteamInventory = ::SteamInventory();
	if ( !m_pSteamInventory )
		return false;

	m_pSteamVideo = ::SteamVideo();
	if ( !m_pSteamVideo )
		return false;

	m_pSteamParentalSettings = ::SteamParentalSettings();
	if ( !m_pSteamParentalSettings )
		return false;

	m_pSteamInput = ::SteamInput();
	if ( !m_pSteamInput )
		return false;

	return true;
}

#endif

#endif // STEAM_API_H
