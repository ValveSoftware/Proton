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
#include "steamcontrollerpublic.h"

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
