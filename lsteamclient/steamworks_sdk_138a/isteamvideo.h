//====== Copyright © 1996-2014 Valve Corporation, All rights reserved. =======
//
// Purpose: interface to Steam Video
//
//=============================================================================

#ifndef ISTEAMVIDEO_H
#define ISTEAMVIDEO_H
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




//-----------------------------------------------------------------------------
// Purpose: Steam Video API
//-----------------------------------------------------------------------------
class ISteamVideo
{
public:

	// Get a URL suitable for streaming the given Video app ID's video
	virtual void GetVideoURL( AppId_t unVideoAppID ) = 0;

	// returns true if user is uploading a live broadcast
	virtual bool IsBroadcasting( int *pnNumViewers ) = 0;
};

#define STEAMVIDEO_INTERFACE_VERSION "STEAMVIDEO_INTERFACE_V001"

DEFINE_CALLBACK( BroadcastUploadStart_t, k_iClientVideoCallbacks + 4 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( BroadcastUploadStop_t, k_iClientVideoCallbacks + 5 )
	CALLBACK_MEMBER( 0, EBroadcastUploadResult, m_eResult )
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( GetVideoURLResult_t, k_iClientVideoCallbacks + 11 )
	CALLBACK_MEMBER( 0, EResult, m_eResult )
	CALLBACK_MEMBER( 1, AppId_t, m_unVideoAppID )
	CALLBACK_MEMBER( 2, char, m_rgchURL[256] )
END_DEFINE_CALLBACK_1()


#pragma pack( pop )


#endif // ISTEAMVIDEO_H
