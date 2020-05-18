//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to app data in Steam
//
//=============================================================================

#ifndef ISTEAMTV_H
#define ISTEAMTV_H
#ifdef _WIN32
#pragma once
#endif

#include "steam_api_common.h"
#include "steamtypes.h"

enum ESteamTVRegionBehavior {
	k_ESteamVideoRegionBehaviorInvalid = -1,
	k_ESteamVideoRegionBehaviorHover = 0,
	k_ESteamVideoRegionBehaviorClickPopup = 1,
	k_ESteamVideoRegionBehaviorClickSurroundingRegion = 2,
};

struct SteamTVRegion_t {
	uint32 unMinX;
	uint32 unMinY;
	uint32 unMaxX;
	uint32 unMaxY;
};

//-----------------------------------------------------------------------------
// Purpose: This is a scaffold for SteamTV. It needs to be updated with Valve's notices, if any.
//-----------------------------------------------------------------------------
class ISteamTV
{
public:
	virtual bool IsBroadcasting( int * pnNumViewers );
	virtual void AddBroadcastGameData( const char * pchKey, const char * pchValue );
	virtual void RemoveBroadcastGameData( const char * pchKey );
	virtual void AddTimelineMarker( const char * pchTemplateName, bool bPersistent, uint8 nColorR, uint8 nColorG, uint8 nColorB );
	virtual void RemoveTimelineMarker( );
	virtual uint32 AddRegion( const char * pchElementName, const char * pchTimelineDataSection, const SteamTVRegion_t * pSteamTVRegion, ESteamTVRegionBehavior eSteamTVRegionBehavior );
	virtual void RemoveRegion( uint32 unRegionHandle );
};


#define STEAMTV_INTERFACE_VERSION "STEAMTV_INTERFACE_V001"

// Global interface accessor
inline ISteamTV *SteamTV();
STEAM_DEFINE_USER_INTERFACE_ACCESSOR( ISteamTV *, SteamTV, STEAMTV_INTERFACE_VERSION );

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error steam_api_common.h should define VALVE_CALLBACK_PACK_xxx
#endif 


// Add any callbacks here. Doesn't appear to be any.

#pragma pack( pop )
#endif // ISTEAMTV_H
