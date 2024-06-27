//====== Copyright © Valve Corporation, All rights reserved. =======
//
// Purpose: interface to Steam Timeline
//
//=============================================================================

#ifndef ISTEAMTIMELINE_H
#define ISTEAMTIMELINE_H
#ifdef _WIN32
#pragma once
#endif

#include "steam_api_common.h"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error steam_api_common.h should define VALVE_CALLBACK_PACK_xxx
#endif

// Controls the color of the timeline bar segments. The value names listed here map to a multiplayer game, where
// the user starts a game (in menus), then joins a multiplayer session that first has a character selection lobby
// then finally the multiplayer session starts. However, you can also map these values to any type of game. In a single
// player game where you visit towns & dungeons, you could set k_ETimelineGameMode_Menus when the player is in a town
// buying items, k_ETimelineGameMode_Staging for when a dungeon is loading and k_ETimelineGameMode_Playing for when
// inside the dungeon fighting monsters.
enum ETimelineGameMode
{
	k_ETimelineGameMode_Invalid = 0,
	k_ETimelineGameMode_Playing = 1,
	k_ETimelineGameMode_Staging = 2,
	k_ETimelineGameMode_Menus = 3,
	k_ETimelineGameMode_LoadingScreen = 4,

	k_ETimelineGameMode_Max, // one past the last valid value
};

// Used in AddTimelineEvent, where Featured events will be offered before Standard events
enum ETimelineEventClipPriority
{
	k_ETimelineEventClipPriority_Invalid = 0,
	k_ETimelineEventClipPriority_None = 1,
	k_ETimelineEventClipPriority_Standard = 2,
	k_ETimelineEventClipPriority_Featured = 3,
};

const uint32 k_unMaxTimelinePriority = 1000;
const float k_flMaxTimelineEventDuration = 600.f;

//-----------------------------------------------------------------------------
// Purpose: Steam Timeline API
//-----------------------------------------------------------------------------
class ISteamTimeline
{
public:

	// Sets a description for the current game state in the timeline. These help the user to find specific
	// moments in the timeline when saving clips. Setting a new state description replaces any previous
	// description.
	// 
	// Examples could include:
	//  * Where the user is in the world in a single player game
	//  * Which round is happening in a multiplayer game
	//  * The current score for a sports game
	// 	
	// Parameters:
	// - pchDescription: provide a localized string in the language returned by SteamUtils()->GetSteamUILanguage()
	// - flTimeDelta: The time offset in seconds to apply to this event. Negative times indicate an 
	//			event that happened in the past.
	virtual void SetTimelineStateDescription( const char *pchDescription, float flTimeDelta ) = 0;
	virtual void ClearTimelineStateDescription( float flTimeDelta ) = 0;

	// Use this to mark an event on the Timeline. The event can be instantaneous or take some amount of time
	// to complete, depending on the value passed in flDurationSeconds
	// 
	// Examples could include:
	//   * a boss battle
	//   * a cut scene
	//   * a large team fight
	//   * picking up a new weapon or ammunition
	//   * scoring a goal
	// 	
	// Parameters:
	// 
	// - pchIcon: specify the name of the icon uploaded through the Steamworks Partner Site for your title
	//   or one of the provided icons that start with steam_
	// - pchTitle & pchDescription: provide a localized string in the language returned by
	//	 SteamUtils()->GetSteamUILanguage()
	// - unPriority: specify how important this range is compared to other markers provided by the game. 
	//   Ranges with larger priority values will be displayed more prominently in the UI. This value
	//   may be between 0 and k_unMaxTimelinePriority.
	// - flStartOffsetSeconds: The time that this range started relative to now. Negative times 
	//   indicate an event that happened in the past.
	// - flDurationSeconds: How long the time range should be in seconds. For instantaneous events, this
	//   should be 0
	// - ePossibleClip: By setting this parameter to Featured or Standard, the game indicates to Steam that it
	//   would be appropriate to offer this range as a clip to the user. For instantaneous events, the
	//   suggested clip will be for a short time before and after the event itself.
	virtual void AddTimelineEvent( const char *pchIcon, const char *pchTitle, const char *pchDescription, uint32 unPriority, float flStartOffsetSeconds, float flDurationSeconds, ETimelineEventClipPriority ePossibleClip ) = 0;

	// Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value
	virtual void SetTimelineGameMode( ETimelineGameMode eMode ) = 0;
};

#define STEAMTIMELINE_INTERFACE_VERSION "STEAMTIMELINE_INTERFACE_V001"

// Global interface accessor
inline ISteamTimeline *SteamTimeline();
STEAM_DEFINE_USER_INTERFACE_ACCESSOR( ISteamTimeline *, SteamTimeline, STEAMTIMELINE_INTERFACE_VERSION );


#pragma pack( pop )


#endif // ISTEAMTIMELINE_H
