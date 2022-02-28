//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: public interface to user remote file storage in Steam
//
//=============================================================================

#ifndef ISTEAMSCREENSHOTS_H
#define ISTEAMSCREENSHOTS_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

const uint32 k_nScreenshotMaxTaggedUsers = 32;
const int k_cubUFSTagTypeMax = 255;
const int k_cubUFSTagValueMax = 255;

// Required with of a thumbnail provided to AddScreenshotToLibrary.  If you do not provide a thumbnail
// one will be generated.
const int k_ScreenshotThumbWidth = 200;

// Handle is valid for the lifetime of your process and no longer
typedef uint32 ScreenshotHandle; 
#define INVALID_SCREENSHOT_HANDLE 0

//-----------------------------------------------------------------------------
// Purpose: Functions for adding screenshots to the user's screenshot library
//-----------------------------------------------------------------------------
class ISteamScreenshots
{
public:
	// Writes a screenshot to the user's screenshot library given the raw image data, which must be in RGB format.
	// The return value is a handle that is valid for the duration of the game process and can be used to apply tags.
	virtual ScreenshotHandle WriteScreenshot( void *pubRGB, uint32 cubRGB, int nWidth, int nHeight ) = 0;

	// Adds a screenshot to the user's screenshot library from disk.  If a thumbnail is provided, it must be 200 pixels wide and the same aspect ratio
	// as the screenshot, otherwise a thumbnail will be generated if the user uploads the screenshot.  The screenshots must be in either JPEG or TGA format.
	// The return value is a handle that is valid for the duration of the game process and can be used to apply tags.
	// JPEG, TGA, and PNG formats are supported.
	virtual ScreenshotHandle AddScreenshotToLibrary( const char *pchFilename, const char *pchThumbnailFilename, int nWidth, int nHeight ) = 0;

	// Causes the Steam overlay to take a screenshot.  If screenshots are being hooked by the game then a ScreenshotRequested_t callback is sent back to the game instead. 
	virtual void TriggerScreenshot() = 0;

	// Toggles whether the overlay handles screenshots when the user presses the screenshot hotkey, or the game handles them.  If the game is hooking screenshots,
	// then the ScreenshotRequested_t callback will be sent if the user presses the hotkey, and the game is expected to call WriteScreenshot or AddScreenshotToLibrary
	// in response.
	virtual void HookScreenshots( bool bHook ) = 0;

	// Sets metadata about a screenshot's location (for example, the name of the map)
	virtual bool SetLocation( ScreenshotHandle hScreenshot, const char *pchLocation ) = 0;
	
	// Tags a user as being visible in the screenshot
	virtual bool TagUser( ScreenshotHandle hScreenshot, CSteamID steamID ) = 0;
};

#define STEAMSCREENSHOTS_INTERFACE_VERSION "STEAMSCREENSHOTS_INTERFACE_VERSION001"

// callbacks
#pragma pack( push, 8 )
//-----------------------------------------------------------------------------
// Purpose: Screenshot successfully written or otherwise added to the library
// and can now be tagged
//-----------------------------------------------------------------------------
struct ScreenshotReady_t
{
	enum { k_iCallback = k_iSteamScreenshotsCallbacks + 1 };
	ScreenshotHandle m_hLocal;
	EResult m_eResult;
};

//-----------------------------------------------------------------------------
// Purpose: Screenshot has been requested by the user.  Only sent if
// HookScreenshots() has been called, in which case Steam will not take
// the screenshot itself.
//-----------------------------------------------------------------------------
struct ScreenshotRequested_t
{
	enum { k_iCallback = k_iSteamScreenshotsCallbacks + 2 };
};

#pragma pack( pop )


#endif // ISTEAMSCREENSHOTS_H
