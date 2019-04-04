//============ Copyright (c) Valve Corporation, All rights reserved. ============

#ifndef ISTEAMMUSICREMOTE_H
#define ISTEAMMUSICREMOTE_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"
#include "isteammusic.h"

#define k_SteamMusicNameMaxLength 255
#define k_SteamMusicPNGMaxLength 65535
 

class ISteamMusicRemote
{
public: 
	// Service Definition
 	virtual bool RegisterSteamMusicRemote( const char *pchName ) = 0;
 	virtual bool DeregisterSteamMusicRemote() = 0;
	virtual bool BIsCurrentMusicRemote() = 0;
	virtual bool BActivationSuccess( bool bValue ) = 0;

	virtual bool SetDisplayName( const char *pchDisplayName ) = 0;
	virtual bool SetPNGIcon_64x64( void *pvBuffer, uint32 cbBufferLength ) = 0;
	
	// Abilities for the user interface
	virtual bool EnablePlayPrevious(bool bValue) = 0;
	virtual bool EnablePlayNext( bool bValue ) = 0;
	virtual bool EnableShuffled( bool bValue ) = 0;
	virtual bool EnableLooped( bool bValue ) = 0;
	virtual bool EnableQueue( bool bValue ) = 0;
	virtual bool EnablePlaylists( bool bValue ) = 0;

	// Status
 	virtual bool UpdatePlaybackStatus( AudioPlayback_Status nStatus ) = 0;
	virtual bool UpdateShuffled( bool bValue ) = 0;
	virtual bool UpdateLooped( bool bValue ) = 0;
	virtual bool UpdateVolume( float flValue ) = 0; // volume is between 0.0 and 1.0

	// Current Entry
	virtual bool CurrentEntryWillChange() = 0;
	virtual bool CurrentEntryIsAvailable( bool bAvailable ) = 0;
	virtual bool UpdateCurrentEntryText( const char *pchText ) = 0;
	virtual bool UpdateCurrentEntryElapsedSeconds( int nValue ) = 0;
	virtual bool UpdateCurrentEntryCoverArt( void *pvBuffer, uint32 cbBufferLength ) = 0;
	virtual bool CurrentEntryDidChange() = 0;

	// Queue
	virtual bool QueueWillChange() = 0;
	virtual bool ResetQueueEntries() = 0;
	virtual bool SetQueueEntry( int nID, int nPosition, const char *pchEntryText ) = 0;
	virtual bool SetCurrentQueueEntry( int nID ) = 0;
	virtual bool QueueDidChange() = 0;

	// Playlist
	virtual bool PlaylistWillChange() = 0;
	virtual bool ResetPlaylistEntries() = 0;
	virtual bool SetPlaylistEntry( int nID, int nPosition, const char *pchEntryText ) = 0;
	virtual bool SetCurrentPlaylistEntry( int nID ) = 0;
	virtual bool PlaylistDidChange() = 0;
};

#define STEAMMUSICREMOTE_INTERFACE_VERSION "STEAMMUSICREMOTE_INTERFACE_VERSION001"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 


DEFINE_CALLBACK( MusicPlayerRemoteWillActivate_t, k_iSteamMusicRemoteCallbacks + 1)
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerRemoteWillDeactivate_t, k_iSteamMusicRemoteCallbacks + 2 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerRemoteToFront_t, k_iSteamMusicRemoteCallbacks + 3 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWillQuit_t, k_iSteamMusicRemoteCallbacks + 4 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWantsPlay_t, k_iSteamMusicRemoteCallbacks + 5 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWantsPause_t, k_iSteamMusicRemoteCallbacks + 6 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWantsPlayPrevious_t, k_iSteamMusicRemoteCallbacks + 7 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWantsPlayNext_t, k_iSteamMusicRemoteCallbacks + 8 )
END_DEFINE_CALLBACK_0()

DEFINE_CALLBACK( MusicPlayerWantsShuffled_t, k_iSteamMusicRemoteCallbacks + 9 )
	CALLBACK_MEMBER( 0, bool, m_bShuffled )
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( MusicPlayerWantsLooped_t, k_iSteamMusicRemoteCallbacks + 10 )
	CALLBACK_MEMBER(0, bool, m_bLooped )
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( MusicPlayerWantsVolume_t, k_iSteamMusicCallbacks + 11 )
	CALLBACK_MEMBER(0, float, m_flNewVolume)
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( MusicPlayerSelectsQueueEntry_t, k_iSteamMusicCallbacks + 12 )
	CALLBACK_MEMBER(0, int, nID )
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( MusicPlayerSelectsPlaylistEntry_t, k_iSteamMusicCallbacks + 13 )
	CALLBACK_MEMBER(0, int, nID )
END_DEFINE_CALLBACK_1()

DEFINE_CALLBACK( MusicPlayerWantsPlayingRepeatStatus_t, k_iSteamMusicRemoteCallbacks + 14 )
	CALLBACK_MEMBER(0, int, m_nPlayingRepeatStatus )
END_DEFINE_CALLBACK_1()

#pragma pack( pop )



#endif // #define ISTEAMMUSICREMOTE_H
