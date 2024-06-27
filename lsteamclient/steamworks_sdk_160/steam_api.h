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
#include "isteamhtmlsurface.h"
#include "isteaminventory.h"
#include "isteamtimeline.h"
#include "isteamvideo.h"
#include "isteamparentalsettings.h"
#include "isteaminput.h"
#include "isteamremoteplay.h"
#include "isteamnetworkingmessages.h"
#include "isteamnetworkingsockets.h"
#include "isteamnetworkingutils.h"


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//	Steam API setup & shutdown
//
//	These functions manage loading, initializing and shutdown of the steamclient.dll
//
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

enum ESteamAPIInitResult
{
	k_ESteamAPIInitResult_OK = 0,
	k_ESteamAPIInitResult_FailedGeneric = 1, // Some other failure
	k_ESteamAPIInitResult_NoSteamClient = 2, // We cannot connect to Steam, steam probably isn't running
	k_ESteamAPIInitResult_VersionMismatch = 3, // Steam client appears to be out of date
};

// Initializing the Steamworks SDK
// -----------------------------
// 
// There are three different methods you can use to initialize the Steamworks SDK, depending on
// your project's environment. You should only use one method in your project.
// 
// If you are able to include this C++ header in your project, we recommend using the following
// initialization methods. They will ensure that all ISteam* interfaces defined in other
// C++ header files have versions that are supported by the user's Steam Client:
// - SteamAPI_InitEx() for new projects so you can show a detailed error message to the user
// - SteamAPI_Init() for existing projects that only display a generic error message
// 
// If you are unable to include this C++ header in your project and are dynamically loading
// Steamworks SDK methods from dll/so, you can use the following method:
// - SteamAPI_InitFlat()


// See "Initializing the Steamworks SDK" above for how to choose an init method.
// On success k_ESteamAPIInitResult_OK is returned. Otherwise, returns a value that can be used
// to create a localized error message for the user. If pOutErrMsg is non-NULL,
// it will receive an example error message, in English, that explains the reason for the failure.
//
// Example usage:
// 
//   SteamErrMsg errMsg;
//   if ( SteamAPI_Init(&errMsg) != k_ESteamAPIInitResult_OK )
//       FatalError( "Failed to init Steam.  %s", errMsg );
inline ESteamAPIInitResult SteamAPI_InitEx( SteamErrMsg *pOutErrMsg );

// See "Initializing the Steamworks SDK" above for how to choose an init method.
// Returns true on success
inline bool SteamAPI_Init()
{
	return SteamAPI_InitEx( NULL ) == k_ESteamAPIInitResult_OK;
}

// See "Initializing the Steamworks SDK" above for how to choose an init method.
// Same usage as SteamAPI_InitEx(), however does not verify ISteam* interfaces are
// supported by the user's client and is exported from the dll
S_API ESteamAPIInitResult S_CALLTYPE SteamAPI_InitFlat( SteamErrMsg *pOutErrMsg );

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

// returns the filename path of the current running Steam process, used if you need to load an explicit steam dll by name.
// DEPRECATED - implementation is Windows only, and the path returned is a UTF-8 string which must be converted to UTF-16 for use with Win32 APIs
S_API const char *SteamAPI_GetSteamInstallPath();

// sets whether or not Steam_RunCallbacks() should do a try {} catch (...) {} around calls to issuing callbacks
// This is ignored if you are using the manual callback dispatch method
S_API void SteamAPI_SetTryCatchCallbacks( bool bTryCatchCallbacks );

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
// Manual callback loop
//
// An alternative method for dispatching callbacks.  Similar to a windows message loop.
//
// If you use the manual callback dispatch, you must NOT use:
//
// - SteamAPI_RunCallbacks or SteamGameServer_RunCallbacks
// - STEAM_CALLBACK, CCallResult, CCallback, or CCallbackManual
//
// Here is the basic template for replacing SteamAPI_RunCallbacks() with manual dispatch
/*

	HSteamPipe hSteamPipe = SteamAPI_GetHSteamPipe(); // See also SteamGameServer_GetHSteamPipe()
	SteamAPI_ManualDispatch_RunFrame( hSteamPipe )
	CallbackMsg_t callback;
	while ( SteamAPI_ManualDispatch_GetNextCallback( hSteamPipe, &callback ) )
	{
		// Check for dispatching API call results
		if ( callback.m_iCallback == SteamAPICallCompleted_t::k_iCallback )
		{
			SteamAPICallCompleted_t *pCallCompleted = (SteamAPICallCompleted_t *)callback.
			void *pTmpCallResult = malloc( pCallback->m_cubParam );
			bool bFailed;
			if ( SteamAPI_ManualDispatch_GetAPICallResult( hSteamPipe, pCallCompleted->m_hAsyncCall, pTmpCallResult, pCallback->m_cubParam, pCallback->m_iCallback, &bFailed ) )
			{
				// Dispatch the call result to the registered handler(s) for the
				// call identified by pCallCompleted->m_hAsyncCall
			}
			free( pTmpCallResult );
		}
		else
		{
			// Look at callback.m_iCallback to see what kind of callback it is,
			// and dispatch to appropriate handler(s)
		}
		SteamAPI_ManualDispatch_FreeLastCallback( hSteamPipe );
	}

*/
//----------------------------------------------------------------------------------------------------------------------------------------------------------//

/// Inform the API that you wish to use manual event dispatch.  This must be called after SteamAPI_Init, but before
/// you use any of the other manual dispatch functions below.
S_API void S_CALLTYPE SteamAPI_ManualDispatch_Init();

/// Perform certain periodic actions that need to be performed.
S_API void S_CALLTYPE SteamAPI_ManualDispatch_RunFrame( HSteamPipe hSteamPipe );

/// Fetch the next pending callback on the given pipe, if any.  If a callback is available, true is returned
/// and the structure is populated.  In this case, you MUST call SteamAPI_ManualDispatch_FreeLastCallback
/// (after dispatching the callback) before calling SteamAPI_ManualDispatch_GetNextCallback again.
S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetNextCallback( HSteamPipe hSteamPipe, CallbackMsg_t *pCallbackMsg );

/// You must call this after dispatching the callback, if SteamAPI_ManualDispatch_GetNextCallback returns true.
S_API void S_CALLTYPE SteamAPI_ManualDispatch_FreeLastCallback( HSteamPipe hSteamPipe );

/// Return the call result for the specified call on the specified pipe.  You really should
/// only call this in a handler for SteamAPICallCompleted_t callback.
S_API bool S_CALLTYPE SteamAPI_ManualDispatch_GetAPICallResult( HSteamPipe hSteamPipe, SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed );

// Internal implementation of SteamAPI_InitEx.  This is done in a way that checks
// all of the versions of interfaces from headers being compiled into this code.
S_API ESteamAPIInitResult S_CALLTYPE SteamInternal_SteamAPI_Init( const char *pszInternalCheckInterfaceVersions, SteamErrMsg *pOutErrMsg );
inline ESteamAPIInitResult SteamAPI_InitEx( SteamErrMsg *pOutErrMsg )
{
	const char *pszInternalCheckInterfaceVersions = 
		STEAMUTILS_INTERFACE_VERSION "\0"
		STEAMNETWORKINGUTILS_INTERFACE_VERSION "\0"
		STEAMAPPS_INTERFACE_VERSION "\0"
		STEAMCONTROLLER_INTERFACE_VERSION "\0"
		STEAMFRIENDS_INTERFACE_VERSION "\0"
		STEAMGAMESEARCH_INTERFACE_VERSION "\0"
		STEAMHTMLSURFACE_INTERFACE_VERSION "\0"
		STEAMHTTP_INTERFACE_VERSION "\0"
		STEAMINPUT_INTERFACE_VERSION "\0"
		STEAMINVENTORY_INTERFACE_VERSION "\0"
		STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION "\0"
		STEAMMATCHMAKING_INTERFACE_VERSION "\0"
		STEAMMUSICREMOTE_INTERFACE_VERSION "\0"
		STEAMMUSIC_INTERFACE_VERSION "\0"
		STEAMNETWORKINGMESSAGES_INTERFACE_VERSION "\0"
		STEAMNETWORKINGSOCKETS_INTERFACE_VERSION "\0"
		STEAMNETWORKING_INTERFACE_VERSION "\0"
		STEAMPARENTALSETTINGS_INTERFACE_VERSION "\0"
		STEAMPARTIES_INTERFACE_VERSION "\0"
		STEAMREMOTEPLAY_INTERFACE_VERSION "\0"
		STEAMREMOTESTORAGE_INTERFACE_VERSION "\0"
		STEAMSCREENSHOTS_INTERFACE_VERSION "\0"
		STEAMUGC_INTERFACE_VERSION "\0"
		STEAMUSERSTATS_INTERFACE_VERSION "\0"
		STEAMUSER_INTERFACE_VERSION "\0"
		STEAMVIDEO_INTERFACE_VERSION "\0"

		"\0";

	return SteamInternal_SteamAPI_Init( pszInternalCheckInterfaceVersions, pOutErrMsg );
}

#endif // STEAM_API_H
