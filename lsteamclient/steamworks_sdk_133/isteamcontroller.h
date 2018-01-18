//====== Copyright 1996-2013, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to valve controller
//
//=============================================================================

#ifndef ISTEAMCONTROLLER_H
#define ISTEAMCONTROLLER_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 

#define MAX_STEAM_CONTROLLERS 16

#pragma pack( pop )

#define STEAM_RIGHT_TRIGGER_MASK            0x0000001
#define STEAM_LEFT_TRIGGER_MASK             0x0000002
#define STEAM_RIGHT_BUMPER_MASK             0x0000004
#define STEAM_LEFT_BUMPER_MASK              0x0000008
#define STEAM_BUTTON_0_MASK                 0x0000010
#define STEAM_BUTTON_1_MASK                 0x0000020
#define STEAM_BUTTON_2_MASK                 0x0000040
#define STEAM_BUTTON_3_MASK                 0x0000080
#define STEAM_TOUCH_0_MASK                  0x0000100
#define STEAM_TOUCH_1_MASK                  0x0000200
#define STEAM_TOUCH_2_MASK                  0x0000400
#define STEAM_TOUCH_3_MASK                  0x0000800
#define STEAM_BUTTON_MENU_MASK              0x0001000
#define STEAM_BUTTON_STEAM_MASK             0x0002000
#define STEAM_BUTTON_ESCAPE_MASK            0x0004000
#define STEAM_BUTTON_BACK_LEFT_MASK         0x0008000
#define STEAM_BUTTON_BACK_RIGHT_MASK        0x0010000
#define STEAM_BUTTON_LEFTPAD_CLICKED_MASK   0x0020000
#define STEAM_BUTTON_RIGHTPAD_CLICKED_MASK  0x0040000
#define STEAM_LEFTPAD_FINGERDOWN_MASK       0x0080000
#define STEAM_RIGHTPAD_FINGERDOWN_MASK      0x0100000
#define STEAM_JOYSTICK_BUTTON_MASK			0x0400000


#pragma pack( push, 1 )

struct SteamControllerState001_t
{
	// If packet num matches that on your prior call, then the controller state hasn't been changed since 
	// your last call and there is no need to process it
	uint32 unPacketNum;
	
	// bit flags for each of the buttons
	uint64 ulButtons;
	
	// Left pad coordinates
	short sLeftPadX;
	short sLeftPadY;
	
	// Right pad coordinates
	short sRightPadX;
	short sRightPadY;
	
};

#pragma pack( pop )

#define SteamControllerState_t SteamControllerState001_t

enum ESteamControllerPad
{
	k_ESteamControllerPad_Left,
	k_ESteamControllerPad_Right
};

//-----------------------------------------------------------------------------
// Purpose: Native Steam controller support API
//-----------------------------------------------------------------------------
class ISteamController
{
public:

	//
	// Native controller support API
	//

	// Must call init and shutdown when starting/ending use of the interface
	virtual bool Init( const char *pchAbsolutePathToControllerConfigVDF ) = 0;
	virtual bool Shutdown() = 0;

	// Pump callback/callresult events, SteamAPI_RunCallbacks will do this for you, 
	// normally never need to call directly.
	virtual void RunFrame() = 0;

	// Get the state of the specified controller, returns false if that controller is not connected
	virtual bool GetControllerState( uint32 unControllerIndex, SteamControllerState_t *pState ) = 0;

	// Trigger a haptic pulse on the controller
	virtual void TriggerHapticPulse( uint32 unControllerIndex, ESteamControllerPad eTargetPad, unsigned short usDurationMicroSec ) = 0;

	// Set the override mode which is used to choose to use different base/legacy bindings from your config file
	virtual void SetOverrideMode( const char *pchMode ) = 0;
};

#define STEAMCONTROLLER_INTERFACE_VERSION "STEAMCONTROLLER_INTERFACE_VERSION"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
/*
struct ControllerCallback_t
{
	enum { k_iCallback = k_iSteamControllerCallbacks + 1 };
	
};
*/


#pragma pack( pop )


#endif // ISTEAMCONTROLLER_H
