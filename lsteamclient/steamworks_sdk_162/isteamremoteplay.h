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


// Steam Remote Play mouse cursor ID
typedef uint32 RemotePlayCursorID_t;


//-----------------------------------------------------------------------------
// Purpose: The type of input in ERemotePlayInput_t
//-----------------------------------------------------------------------------
enum ERemotePlayInputType
{
	k_ERemotePlayInputUnknown,
	k_ERemotePlayInputMouseMotion,
	k_ERemotePlayInputMouseButtonDown,
	k_ERemotePlayInputMouseButtonUp,
	k_ERemotePlayInputMouseWheel,
	k_ERemotePlayInputKeyDown,
	k_ERemotePlayInputKeyUp
};


//-----------------------------------------------------------------------------
// Purpose: Mouse buttons in ERemotePlayInput_t
//-----------------------------------------------------------------------------
enum ERemotePlayMouseButton
{
	k_ERemotePlayMouseButtonLeft = 0x0001,
	k_ERemotePlayMouseButtonRight = 0x0002,
	k_ERemotePlayMouseButtonMiddle = 0x0010,
	k_ERemotePlayMouseButtonX1 = 0x0020,
	k_ERemotePlayMouseButtonX2 = 0x0040,
};


//-----------------------------------------------------------------------------
// Purpose: Mouse wheel direction in ERemotePlayInput_t
//-----------------------------------------------------------------------------
enum ERemotePlayMouseWheelDirection
{
	k_ERemotePlayMouseWheelUp = 1,
	k_ERemotePlayMouseWheelDown = 2,
	k_ERemotePlayMouseWheelLeft = 3,
	k_ERemotePlayMouseWheelRight = 4,
};


//-----------------------------------------------------------------------------
// Purpose: Key scancode in ERemotePlayInput_t
//
// This is a USB scancode value as defined for the Keyboard/Keypad Page (0x07)
// This enumeration isn't a complete list, just the most commonly used keys.
//-----------------------------------------------------------------------------
enum ERemotePlayScancode
{
	k_ERemotePlayScancodeUnknown = 0,

	k_ERemotePlayScancodeA = 4,
	k_ERemotePlayScancodeB = 5,
	k_ERemotePlayScancodeC = 6,
	k_ERemotePlayScancodeD = 7,
	k_ERemotePlayScancodeE = 8,
	k_ERemotePlayScancodeF = 9,
	k_ERemotePlayScancodeG = 10,
	k_ERemotePlayScancodeH = 11,
	k_ERemotePlayScancodeI = 12,
	k_ERemotePlayScancodeJ = 13,
	k_ERemotePlayScancodeK = 14,
	k_ERemotePlayScancodeL = 15,
	k_ERemotePlayScancodeM = 16,
	k_ERemotePlayScancodeN = 17,
	k_ERemotePlayScancodeO = 18,
	k_ERemotePlayScancodeP = 19,
	k_ERemotePlayScancodeQ = 20,
	k_ERemotePlayScancodeR = 21,
	k_ERemotePlayScancodeS = 22,
	k_ERemotePlayScancodeT = 23,
	k_ERemotePlayScancodeU = 24,
	k_ERemotePlayScancodeV = 25,
	k_ERemotePlayScancodeW = 26,
	k_ERemotePlayScancodeX = 27,
	k_ERemotePlayScancodeY = 28,
	k_ERemotePlayScancodeZ = 29,

	k_ERemotePlayScancode1 = 30,
	k_ERemotePlayScancode2 = 31,
	k_ERemotePlayScancode3 = 32,
	k_ERemotePlayScancode4 = 33,
	k_ERemotePlayScancode5 = 34,
	k_ERemotePlayScancode6 = 35,
	k_ERemotePlayScancode7 = 36,
	k_ERemotePlayScancode8 = 37,
	k_ERemotePlayScancode9 = 38,
	k_ERemotePlayScancode0 = 39,

	k_ERemotePlayScancodeReturn = 40,
	k_ERemotePlayScancodeEscape = 41,
	k_ERemotePlayScancodeBackspace = 42,
	k_ERemotePlayScancodeTab = 43,
	k_ERemotePlayScancodeSpace = 44,
	k_ERemotePlayScancodeMinus = 45,
	k_ERemotePlayScancodeEquals = 46,
	k_ERemotePlayScancodeLeftBracket = 47,
	k_ERemotePlayScancodeRightBracket = 48,
	k_ERemotePlayScancodeBackslash = 49,
	k_ERemotePlayScancodeSemicolon = 51,
	k_ERemotePlayScancodeApostrophe = 52,
	k_ERemotePlayScancodeGrave = 53,
	k_ERemotePlayScancodeComma = 54,
	k_ERemotePlayScancodePeriod = 55,
	k_ERemotePlayScancodeSlash = 56,
	k_ERemotePlayScancodeCapsLock = 57,

	k_ERemotePlayScancodeF1 = 58,
	k_ERemotePlayScancodeF2 = 59,
	k_ERemotePlayScancodeF3 = 60,
	k_ERemotePlayScancodeF4 = 61,
	k_ERemotePlayScancodeF5 = 62,
	k_ERemotePlayScancodeF6 = 63,
	k_ERemotePlayScancodeF7 = 64,
	k_ERemotePlayScancodeF8 = 65,
	k_ERemotePlayScancodeF9 = 66,
	k_ERemotePlayScancodeF10 = 67,
	k_ERemotePlayScancodeF11 = 68,
	k_ERemotePlayScancodeF12 = 69,

	k_ERemotePlayScancodeInsert = 73,
	k_ERemotePlayScancodeHome = 74,
	k_ERemotePlayScancodePageUp = 75,
	k_ERemotePlayScancodeDelete = 76,
	k_ERemotePlayScancodeEnd = 77,
	k_ERemotePlayScancodePageDown = 78,
	k_ERemotePlayScancodeRight = 79,
	k_ERemotePlayScancodeLeft = 80,
	k_ERemotePlayScancodeDown = 81,
	k_ERemotePlayScancodeUp = 82,

	k_ERemotePlayScancodeLeftControl = 224,
	k_ERemotePlayScancodeLeftShift = 225,
	k_ERemotePlayScancodeLeftAlt = 226,
	k_ERemotePlayScancodeLeftGUI = 227, // windows, command (apple), meta
	k_ERemotePlayScancodeRightControl = 228,
	k_ERemotePlayScancodeRightShift = 229,
	k_ERemotePlayScancodeRightALT = 230,
	k_ERemotePlayScancodeRightGUI = 231, // windows, command (apple), meta
};


//-----------------------------------------------------------------------------
// Purpose: Key modifier in ERemotePlayInput_t
//-----------------------------------------------------------------------------
enum ERemotePlayKeyModifier
{
	k_ERemotePlayKeyModifierNone			= 0x0000,
	k_ERemotePlayKeyModifierLeftShift		= 0x0001,
	k_ERemotePlayKeyModifierRightShift		= 0x0002,
	k_ERemotePlayKeyModifierLeftControl		= 0x0040,
	k_ERemotePlayKeyModifierRightControl	= 0x0080,
	k_ERemotePlayKeyModifierLeftAlt			= 0x0100,
	k_ERemotePlayKeyModifierRightAlt		= 0x0200,
	k_ERemotePlayKeyModifierLeftGUI			= 0x0400,
	k_ERemotePlayKeyModifierRightGUI		= 0x0800,
	k_ERemotePlayKeyModifierNumLock			= 0x1000,
	k_ERemotePlayKeyModifierCapsLock		= 0x2000,
	k_ERemotePlayKeyModifierMask			= 0xFFFF,
};


#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error steam_api_common.h should define VALVE_CALLBACK_PACK_xxx
#endif

// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion
struct RemotePlayInputMouseMotion_t
{
	bool m_bAbsolute;		// True if this is absolute mouse motion and m_flNormalizedX and m_flNormalizedY are valid
	float m_flNormalizedX;	// The absolute X position of the mouse, normalized to the display, if m_bAbsolute is true
	float m_flNormalizedY;	// The absolute Y position of the mouse, normalized to the display, if m_bAbsolute is true
	int m_nDeltaX;			// Relative mouse motion in the X direction
	int m_nDeltaY;			// Relative mouse motion in the Y direction
};

// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel
struct RemotePlayInputMouseWheel_t
{
	ERemotePlayMouseWheelDirection m_eDirection;
	float m_flAmount;		// 1.0f is a single click of the wheel, 120 units on Windows
};

// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp
struct RemotePlayInputKey_t
{
	int m_eScancode;		// Keyboard scancode, common values are defined in ERemotePlayScancode
	uint32 m_unModifiers;	// Mask of ERemotePlayKeyModifier active for this key event
	uint32 m_unKeycode;		// UCS-4 character generated by the keypress, or 0 if it wasn't a character key, e.g. Delete or Left Arrow
};

struct RemotePlayInput_t
{
	RemotePlaySessionID_t m_unSessionID;
	ERemotePlayInputType m_eType;

	union
	{
		// Mouse motion event data, valid when m_eType is k_ERemotePlayInputMouseMotion
		RemotePlayInputMouseMotion_t m_MouseMotion;

		// Mouse button event data, valid when m_eType is k_ERemotePlayInputMouseButtonDown or k_ERemotePlayInputMouseButtonUp
		ERemotePlayMouseButton m_eMouseButton;

		// Mouse wheel event data, valid when m_eType is k_ERemotePlayInputMouseWheel
		RemotePlayInputMouseWheel_t m_MouseWheel;

		// Key event data, valid when m_eType is k_ERemotePlayInputKeyDown or k_ERemotePlayInputKeyUp
		RemotePlayInputKey_t m_Key;

		// Unused space for future use
		char padding[ 64 - ( sizeof( m_unSessionID ) + sizeof( m_eType ) ) ];
	} data;
};
//COMPILE_TIME_ASSERT( sizeof( RemotePlayInput_t ) == 64 );

#pragma pack( pop )


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

	// Show the Remote Play Together UI in the game overlay
	// This returns false if your game is not configured for Remote Play Together
	virtual bool ShowRemotePlayTogetherUI() = 0;

	// Invite a friend to Remote Play Together, or create a guest invite if steamIDFriend is empty
	// This will automatically start Remote Play Together if it hasn't already been started
	// This returns false if the invite can't be sent or your game is not configured for Remote Play Together
	virtual bool BSendRemotePlayTogetherInvite( CSteamID steamIDFriend ) = 0;

	// Make mouse and keyboard input for Remote Play Together sessions available via GetInput() instead of being merged with local input
	virtual bool BEnableRemotePlayTogetherDirectInput() = 0;

	// Merge Remote Play Together mouse and keyboard input with local input
	virtual void DisableRemotePlayTogetherDirectInput() = 0;

	// Get input events from Remote Play Together sessions
	// This is available after calling BEnableRemotePlayTogetherDirectInput()
	//
	// pInput is an array of input events that will be filled in by this function, up to unMaxEvents.
	// This returns the number of events copied to pInput, or the number of events available if pInput is nullptr.
	virtual uint32 GetInput( RemotePlayInput_t *pInput, uint32 unMaxEvents ) = 0;

	// Set the mouse cursor visibility for a remote player
	// This is available after calling BEnableRemotePlayTogetherDirectInput()
	virtual void SetMouseVisibility( RemotePlaySessionID_t unSessionID, bool bVisible ) = 0;

	// Set the mouse cursor position for a remote player
	// This is available after calling BEnableRemotePlayTogetherDirectInput()
	//
	// This is used to warp the cursor to a specific location and isn't needed during normal event processing.
	//
	// The position is normalized relative to the window, where 0,0 is the upper left, and 1,1 is the lower right.
	virtual void SetMousePosition( RemotePlaySessionID_t unSessionID, float flNormalizedX, float flNormalizedY ) = 0;

	// Create a cursor that can be used with SetMouseCursor()
	// This is available after calling BEnableRemotePlayTogetherDirectInput()
	//
	// Parameters:
	// nWidth - The width of the cursor, in pixels
	// nHeight - The height of the cursor, in pixels
	// nHotX - The X coordinate of the cursor hot spot in pixels, offset from the left of the cursor
	// nHotY - The Y coordinate of the cursor hot spot in pixels, offset from the top of the cursor
	// pBGRA - A pointer to the cursor pixels, with the color channels in red, green, blue, alpha order
	// nPitch - The distance between pixel rows in bytes, defaults to nWidth * 4 
	virtual RemotePlayCursorID_t CreateMouseCursor( int nWidth, int nHeight, int nHotX, int nHotY, const void *pBGRA, int nPitch = 0 ) = 0;

	// Set the mouse cursor for a remote player
	// This is available after calling BEnableRemotePlayTogetherDirectInput()
	//
	// The cursor ID is a value returned by CreateMouseCursor()
	virtual void SetMouseCursor( RemotePlaySessionID_t unSessionID, RemotePlayCursorID_t unCursorID ) = 0;
};

#define STEAMREMOTEPLAY_INTERFACE_VERSION "STEAMREMOTEPLAY_INTERFACE_VERSION003"

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
