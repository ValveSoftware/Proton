//========= Copyright © 1996-2013, Valve LLC, All rights reserved. ============
//
// Purpose: Controller related public types/constants
//
//=============================================================================

#ifndef STEAMCONTROLLERPUBLIC_H
#define STEAMCONTROLLERPUBLIC_H
#ifdef _WIN32
#pragma once
#endif


#if defined( STEAM ) || defined( ISTEAMCONTROLLER_H )
// This file should only be included by the Steam build or directly from
// isteamcontroller.h.
#include "steamtypes.h"
#else
// Otherwise, we assume it's a firmware build, which doesn't deal with all the
// things that exist in steamtypes.h, and hardcode the typedefs we need.
typedef unsigned           int uint32;
typedef unsigned       __int64 uint64;
#endif

#pragma pack(1)

// Safe to add new bitfields at the end of this list for new buttons/actions, 
// but never re-use or re-number an existing flag as old client code will be 
// confused.
#define STEAM_RIGHT_TRIGGER_MASK            0x0000000000000001l
#define STEAM_LEFT_TRIGGER_MASK             0x0000000000000002l
#define STEAM_RIGHT_BUMPER_MASK             0x0000000000000004l
#define STEAM_LEFT_BUMPER_MASK              0x0000000000000008l
#define STEAM_BUTTON_0_MASK                 0x0000000000000010l
#define STEAM_BUTTON_1_MASK                 0x0000000000000020l
#define STEAM_BUTTON_2_MASK                 0x0000000000000040l
#define STEAM_BUTTON_3_MASK                 0x0000000000000080l
#define STEAM_TOUCH_0_MASK                  0x0000000000000100l
#define STEAM_TOUCH_1_MASK                  0x0000000000000200l
#define STEAM_TOUCH_2_MASK                  0x0000000000000400l
#define STEAM_TOUCH_3_MASK                  0x0000000000000800l
#define STEAM_BUTTON_MENU_MASK              0x0000000000001000l
#define STEAM_BUTTON_STEAM_MASK             0x0000000000002000l
#define STEAM_BUTTON_ESCAPE_MASK            0x0000000000004000l
#define STEAM_BUTTON_BACK_LEFT_MASK         0x0000000000008000l
#define STEAM_BUTTON_BACK_RIGHT_MASK        0x0000000000010000l
#define STEAM_BUTTON_LEFTPAD_CLICKED_MASK   0x0000000000020000l
#define STEAM_BUTTON_RIGHTPAD_CLICKED_MASK  0x0000000000040000l
#define STEAM_LEFTPAD_FINGERDOWN_MASK       0x0000000000080000l
#define STEAM_RIGHTPAD_FINGERDOWN_MASK      0x0000000000100000l

// Only add fields to the end of this struct, or if you need to change it in a larger
// way add a new message id and new struct completely so as to not break old clients.
typedef struct 
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

} SteamControllerState_t; 

#pragma pack()

#endif // STEAMCONTROLLERPUBLIC_H

