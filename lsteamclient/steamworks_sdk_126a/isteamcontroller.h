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


#pragma pack( pop )

//-----------------------------------------------------------------------------
// Purpose: Functions for accessing stats, achievements, and leaderboard information
//-----------------------------------------------------------------------------
class ISteamController
{
public:
	
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
