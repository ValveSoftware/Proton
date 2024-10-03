//============ Copyright (c) Valve Corporation, All rights reserved. ============

#ifndef ISTEAMREMOTEPLAY_H
#define ISTEAMREMOTEPLAY_H
#ifdef _WIN32
#pragma once
#endif

#include "steam_api_common.h"


//-----------------------------------------------------------------------------
// Purpose: The form factor of a device
//-----------------------------------------------------------------------------
enum ESteamDeviceFormFactor
{
	k_ESteamDeviceFormFactorUnknown		= 0,
	k_ESteamDeviceFormFactorPhone		= 1,
	k_ESteamDeviceFormFactorTablet		= 2,
	k_ESteamDeviceFormFactorComputer	= 3,
	k_ESteamDeviceFormFactorTV			= 4,
	k_ESteamDeviceFormFactorVRHeadset	= 5,
};

// Steam Remote Play session ID
typedef uint32 RemotePlaySessionID_t;


//-----------------------------------------------------------------------------
// Purpose: Functions to provide information about Steam Remote Play sessions
//-----------------------------------------------------------------------------
class ISteamRemotePlay
{
public:
	// Get the number of currently connected Steam Remote Play sessions
	virtual uint32 GetSessionCount() = 0;
	
	// Get the currently connected Steam Remote Play session ID at the specified index. Returns zero if index is out of bounds.
	virtual RemotePlaySessionID_t GetSessionID( int iSessionIndex ) = 0;

	// Get the SteamID of the connected user
	virtual CSteamID GetSessionSteamID( RemotePlaySessionID_t unSessionID ) = 0;

	// Get the name of the session client device
	// This returns NULL if the sessionID is not valid
	virtual const char *GetSessionClientName( RemotePlaySessionID_t unSessionID ) = 0;

	// Get the form factor of the session client device
	virtual ESteamDeviceFormFactor GetSessionClientFormFactor( RemotePlaySessionID_t unSessionID ) = 0;

	// Get the resolution, in pixels, of the session client device
	// This is set to 0x0 if the resolution is not available
	virtual bool BGetSessionClientResolution( RemotePlaySessionID_t unSessionID, int *pnResolutionX, int *pnResolutionY ) = 0;

	// Start Remote Play Together and optionally show the UI in the overlay
	// This returns false if Remote Play Together can't be started or your game is not configured for Remote Play Together
	virtual bool BStartRemotePlayTogether( bool bShowOverlay = true ) = 0;

	// Invite a friend to Remote Play Together, or create a guest invite if steamIDFriend is empty
	// This will automatically start Remote Play Together if it hasn't already been started
	// This returns false if the invite can't be sent or your game is not configured for Remote Play Together
	virtual bool BSendRemotePlayTogetherInvite( CSteamID steamIDFriend ) = 0;
};

#define STEAMREMOTEPLAY_INTERFACE_VERSION "STEAMREMOTEPLAY_INTERFACE_VERSION002"

// Global interface accessor
inline ISteamRemotePlay *SteamRemotePlay();
STEAM_DEFINE_USER_INTERFACE_ACCESSOR( ISteamRemotePlay *, SteamRemotePlay, STEAMREMOTEPLAY_INTERFACE_VERSION );

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error steam_api_common.h should define VALVE_CALLBACK_PACK_xxx
#endif 


STEAM_CALLBACK_BEGIN( SteamRemotePlaySessionConnected_t, k_iSteamRemotePlayCallbacks + 1 )
	STEAM_CALLBACK_MEMBER( 0, RemotePlaySessionID_t, m_unSessionID )
STEAM_CALLBACK_END( 0 )


STEAM_CALLBACK_BEGIN( SteamRemotePlaySessionDisconnected_t, k_iSteamRemotePlayCallbacks + 2 )
	STEAM_CALLBACK_MEMBER( 0, RemotePlaySessionID_t, m_unSessionID )
STEAM_CALLBACK_END( 0 )


STEAM_CALLBACK_BEGIN( SteamRemotePlayTogetherGuestInvite_t, k_iSteamRemotePlayCallbacks + 3 )
	STEAM_CALLBACK_MEMBER_ARRAY( 0, char, m_szConnectURL, 1024 )
STEAM_CALLBACK_END( 0 )


#pragma pack( pop )


#endif // #define ISTEAMREMOTEPLAY_H
