//============ Copyright (c) Valve Corporation, All rights reserved. ============

#ifndef ISTEAMMUSIC_H
#define ISTEAMMUSIC_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
enum AudioPlayback_Status
{
	AudioPlayback_Undefined = 0, 
	AudioPlayback_Playing = 1,
	AudioPlayback_Paused = 2,
	AudioPlayback_Idle = 3
};


//-----------------------------------------------------------------------------
// Purpose: Functions to control music playback in the steam client
//-----------------------------------------------------------------------------
class ISteamMusic
{
public:
	virtual bool BIsEnabled() = 0;
	virtual bool BIsPlaying() = 0;
	
	virtual AudioPlayback_Status GetPlaybackStatus() = 0; 

	virtual void Play() = 0;
	virtual void Pause() = 0;
	virtual void PlayPrevious() = 0;
	virtual void PlayNext() = 0;

	// volume is between 0.0 and 1.0
	virtual void SetVolume( float flVolume ) = 0;
	virtual float GetVolume() = 0;
	
};

#define STEAMMUSIC_INTERFACE_VERSION "STEAMMUSIC_INTERFACE_VERSION001"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 


DEFINE_CALLBACK( PlaybackStatusHasChanged_t, k_iSteamMusicCallbacks + 1 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( VolumeHasChanged_t, k_iSteamMusicCallbacks + 2 )
 	CALLBACK_MEMBER( 0,	float, m_flNewVolume )
END_DEFINE_CALLBACK_1()

#pragma pack( pop )


#endif // #define ISTEAMMUSIC_H
