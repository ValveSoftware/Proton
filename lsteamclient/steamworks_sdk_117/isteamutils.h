//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to utility functions in Steam
//
//=============================================================================

#ifndef ISTEAMUTILS_H
#define ISTEAMUTILS_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"


// Steam API call failure results
enum ESteamAPICallFailure
{
	k_ESteamAPICallFailureNone = -1,			// no failure
	k_ESteamAPICallFailureSteamGone = 0,		// the local Steam process has gone away
	k_ESteamAPICallFailureNetworkFailure = 1,	// the network connection to Steam has been broken, or was already broken
	// SteamServersDisconnected_t callback will be sent around the same time
	// SteamServersConnected_t will be sent when the client is able to talk to the Steam servers again
	k_ESteamAPICallFailureInvalidHandle = 2,	// the SteamAPICall_t handle passed in no longer exists
	k_ESteamAPICallFailureMismatchedCallback = 3,// GetAPICallResult() was called with the wrong callback type for this API call
};

// function prototype for warning message hook
#if defined( POSIX )
#define __cdecl
#endif
extern "C" typedef void (__cdecl *SteamAPIWarningMessageHook_t)(int, const char *);

//-----------------------------------------------------------------------------
// Purpose: interface to user independent utility functions
//-----------------------------------------------------------------------------
class ISteamUtils
{
public:
	// return the number of seconds since the user 
	virtual uint32 GetSecondsSinceAppActive() = 0;
	virtual uint32 GetSecondsSinceComputerActive() = 0;

	// the universe this client is connecting to
	virtual EUniverse GetConnectedUniverse() = 0;

	// Steam server time - in PST, number of seconds since January 1, 1970 (i.e unix time)
	virtual uint32 GetServerRealTime() = 0;

	// returns the 2 digit ISO 3166-1-alpha-2 format country code this client is running in (as looked up via an IP-to-location database)
	// e.g "US" or "UK".
	virtual const char *GetIPCountry() = 0;

	// returns true if the image exists, and valid sizes were filled out
	virtual bool GetImageSize( int iImage, uint32 *pnWidth, uint32 *pnHeight ) = 0;

	// returns true if the image exists, and the buffer was successfully filled out
	// results are returned in RGBA format
	// the destination buffer size should be 4 * height * width * sizeof(char)
	virtual bool GetImageRGBA( int iImage, uint8 *pubDest, int nDestBufferSize ) = 0;

	// returns the IP of the reporting server for valve - currently only used in Source engine games
	virtual bool GetCSERIPPort( uint32 *unIP, uint16 *usPort ) = 0;

	// return the amount of battery power left in the current system in % [0..100], 255 for being on AC power
	virtual uint8 GetCurrentBatteryPower() = 0;

	// returns the appID of the current process
	virtual uint32 GetAppID() = 0;

	// Sets the position where the overlay instance for the currently calling game should show notifications.
	// This position is per-game and if this function is called from outside of a game context it will do nothing.
	virtual void SetOverlayNotificationPosition( ENotificationPosition eNotificationPosition ) = 0;

	// API asynchronous call results
	// can be used directly, but more commonly used via the callback dispatch API (see steam_api.h)
	virtual bool IsAPICallCompleted( SteamAPICall_t hSteamAPICall, bool *pbFailed ) = 0;
	virtual ESteamAPICallFailure GetAPICallFailureReason( SteamAPICall_t hSteamAPICall ) = 0;
	virtual bool GetAPICallResult( SteamAPICall_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed ) = 0;

	// this needs to be called every frame to process matchmaking results
	// redundant if you're already calling SteamAPI_RunCallbacks()
	virtual void RunFrame() = 0;

	// returns the number of IPC calls made since the last time this function was called
	// Used for perf debugging so you can understand how many IPC calls your game makes per frame
	// Every IPC call is at minimum a thread context switch if not a process one so you want to rate
	// control how often you do them.
	virtual uint32 GetIPCCallCount() = 0;

	// API warning handling
	// 'int' is the severity; 0 for msg, 1 for warning
	// 'const char *' is the text of the message
	// callbacks will occur directly after the API function is called that generated the warning or message
	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) = 0;

	// Returns true if the overlay is running & the user can access it. The overlay process could take a few seconds to
	// start & hook the game process, so this function will initially return false while the overlay is loading.
	virtual bool IsOverlayEnabled() = 0;

	// Normally this call is unneeded if your game has a constantly running frame loop that calls the 
	// D3D Present API, or OGL SwapBuffers API every frame.
	//
	// However, if you have a game that only refreshes the screen on an event driven basis then that can break 
	// the overlay, as it uses your Present/SwapBuffers calls to drive it's internal frame loop and it may also
	// need to Present() to the screen any time an even needing a notification happens or when the overlay is
	// brought up over the game by a user.  You can use this API to ask the overlay if it currently need a present
	// in that case, and then you can check for this periodically (roughly 33hz is desirable) and make sure you
	// refresh the screen with Present or SwapBuffers to allow the overlay to do it's work.
	virtual bool BOverlayNeedsPresent() = 0;

#ifndef _PS3
	// Asynchronous call to check if an executable file has been signed using the public key set on the signing tab
	// of the partner site, for example to refuse to load modified executable files.  
	// The result is returned in CheckFileSignature_t.
	//   k_ECheckFileSignatureNoSignaturesFoundForThisApp - This app has not been configured on the signing tab of the partner site to enable this function.
	//   k_ECheckFileSignatureNoSignaturesFoundForThisFile - This file is not listed on the signing tab for the partner site.
	//   k_ECheckFileSignatureFileNotFound - The file does not exist on disk.
	//   k_ECheckFileSignatureInvalidSignature - The file exists, and the signing tab has been set for this file, but the file is either not signed or the signature does not match.
	//   k_ECheckFileSignatureValidSignature - The file is signed and the signature is valid.
	virtual SteamAPICall_t CheckFileSignature( const char *szFileName ) = 0;
#endif

#ifdef _PS3
	virtual void PostPS3SysutilCallback( uint64_t status, uint64_t param, void* userdata ) = 0;
	virtual bool BIsReadyToShutdown() = 0;
	virtual bool BIsPSNOnline() = 0;

	// Call this with localized strings for the language the game is running in, otherwise default english
	// strings will be used by Steam.
	virtual void SetPSNGameBootInviteStrings( const char *pchSubject, const char *pchBody ) = 0;
#endif
};

#define STEAMUTILS_INTERFACE_VERSION "SteamUtils005"


// callbacks
#pragma pack( push, 8 )

//-----------------------------------------------------------------------------
// Purpose: The country of the user changed
//-----------------------------------------------------------------------------
struct IPCountry_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 1 };
};


//-----------------------------------------------------------------------------
// Purpose: Fired when running on a laptop and less than 10 minutes of battery is left, fires then every minute
//-----------------------------------------------------------------------------
struct LowBatteryPower_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 2 };
	uint8 m_nMinutesBatteryLeft;
};


//-----------------------------------------------------------------------------
// Purpose: called when a SteamAsyncCall_t has completed (or failed)
//-----------------------------------------------------------------------------
struct SteamAPICallCompleted_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 3 };
	SteamAPICall_t m_hAsyncCall;
};


//-----------------------------------------------------------------------------
// called when Steam wants to shutdown
//-----------------------------------------------------------------------------
struct SteamShutdown_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 4 };
};

//-----------------------------------------------------------------------------
// results for CheckFileSignature
//-----------------------------------------------------------------------------
enum ECheckFileSignature
{
	k_ECheckFileSignatureInvalidSignature = 0,
	k_ECheckFileSignatureValidSignature = 1,
	k_ECheckFileSignatureFileNotFound = 2,
	k_ECheckFileSignatureNoSignaturesFoundForThisApp = 3,
	k_ECheckFileSignatureNoSignaturesFoundForThisFile = 4,
};

//-----------------------------------------------------------------------------
// callback for CheckFileSignature
//-----------------------------------------------------------------------------
struct CheckFileSignature_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 5 };
	ECheckFileSignature m_eCheckFileSignature;
};

#ifdef _PS3
//-----------------------------------------------------------------------------
// callback for NetCtlNetStartDialog finishing on PS3
//-----------------------------------------------------------------------------
struct NetStartDialogFinished_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 6 };
};

//-----------------------------------------------------------------------------
// callback for NetCtlNetStartDialog unloaded on PS3
//-----------------------------------------------------------------------------
struct NetStartDialogUnloaded_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 7 };
};

//-----------------------------------------------------------------------------
// callback for system menu closing on PS3 - should trigger resyncronizing friends list, etc.
//-----------------------------------------------------------------------------
struct PS3SystemMenuClosed_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 8 };
};

//-----------------------------------------------------------------------------
// callback for NP message being selected by user on PS3 - should trigger handling of message if it's a lobby invite, etc.
//-----------------------------------------------------------------------------
struct PS3NPMessageSelected_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 9 };
	uint32 dataid;
};

//-----------------------------------------------------------------------------
// callback for when the PS3 keyboard dialog closes
//-----------------------------------------------------------------------------
struct PS3KeyboardDialogFinished_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 10 };
};

// k_iSteamUtilsCallbacks + 11 is taken

//-----------------------------------------------------------------------------
// callback for PSN status changing on PS3
//-----------------------------------------------------------------------------
struct PS3PSNStatusChange_t
{
	enum { k_iCallback = k_iSteamUtilsCallbacks + 12 };
	bool m_bPSNOnline;
};

#endif

#pragma pack( pop )

#endif // ISTEAMUTILS_H
