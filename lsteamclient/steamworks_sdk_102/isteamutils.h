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
};

#define STEAMUTILS_INTERFACE_VERSION "SteamUtils002"


// callbacks


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

#endif // ISTEAMUTILS_H
