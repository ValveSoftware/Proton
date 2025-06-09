//====== Copyright � Valve Corporation, All rights reserved. =======
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
const uint32 k_unTimelinePriority_KeepCurrentValue = 1000000; // Use with UpdateRangeTimelineEvent to not change the priority
const float k_flMaxTimelineEventDuration = 600.f;
const uint32 k_cchMaxPhaseIDLength = 64;

typedef uint64 TimelineEventHandle_t;


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
	virtual void SetTimelineTooltip( const char *pchDescription, float flTimeDelta ) = 0;
	virtual void ClearTimelineTooltip( float flTimeDelta ) = 0;

	// Changes the color of the timeline bar. See ETimelineGameMode comments for how to use each value
	virtual void SetTimelineGameMode( ETimelineGameMode eMode ) = 0;

	/*******************    Timeline Events    *******************/

	// The following functions add events and/or tags to the timeline.  There are helpers to add simple events or tags in a single call.
	// or you can use StartEvent and CloseEvent to customize what gets added.
	//
	// Examples of events to add could include:
	//   * a boss battle
	//   * a cut scene
	//   * a large team fight
	//   * picking up a new weapon or ammunition
	//   * scoring a goal
	//
	// Adding an event and a time range with the simple API:
	//   SteamTimeline()->AddSimpleTimelineEvent( "steam_heart", Localize( "#user healed" ), Localize( "#health_amount", 27 ), 15, 0, 0, k_ETimelineEventClipPriority_None );
	//   SteamTimeline()->AddTaggedTimeRange( Localize( "#player_resting" ), "steam_flag", /* don't show filter */nullptr, 15, /* start now */0, 10 );
	//   SteamTimeline()->AddTaggedTimeRange( Localize( "#player_cast_light" ), "steam_starburst", Localize( "#player_spells" ), 10, /* start 10 sec ago */ -10, 5 );
	//
	// Adding a marker and time range in one event:
	//   TimelineEventHandle_t event = SteamTimeline()->StartEvent( /* start now */ 0 );
	//   SteamTimeline()->ShowEventOnTimeline( event, "steam_heart", Localize( "#player_healed" ), Localize( "#player_healed_amount", 27 ), 15 );
	//   SteamTimeline()->AddEventTag( event, Localize( "#player_cast_heal" ), "steam_heart", Localize( "#player_, 15, /* start now */0, 10 );
	//   ... // time passes
	//   SteamTimeline()->CloseEvent( event );
	//
	// Parameters used by the event functions:
	//
	// - ulOpenEvent: An event returned by StartEvent that has not yet had CancelEvent or CloseEvent called on it
	// - ulEvent: An event that has had CloseEvent called on it, or an event returned from AddSimpleTimelineEvent or AddTaggedTimeRange (which
	//   are closed automatically.)
	// - pchIcon: specify the name of the icon uploaded through the Steamworks Partner Site for your title
	//   or one of the provided icons that start with steam_
	// - pchTitle & pchDescription: provide a localized string in the language returned by
	//	 SteamUtils()->GetSteamUILanguage()
	// - unIconPriority: specify how important this range is compared to other markers provided by the game.
	//   Ranges with larger priority values will be displayed more prominently in the UI. This value
	//   may be between 0 and k_unMaxTimelinePriority.
	// - flStartOffsetSeconds: The time that this range started relative to now. Negative times
	//   indicate an event that happened in the past.
	// - flDurationSeconds: How long the time range should be in seconds. For instantaneous events, this
	//   should be 0
	// - ePossibleClip: By setting this parameter to Featured or Standard, the game indicates to Steam that it
	//   would be appropriate to offer this range as a clip to the user. For instantaneous events, the
	//   suggested clip will be for a short time before and after the event itself.
	// - pchTagIcon: specify an icon name that will be used next to the tag name in the UI
	// - pchTagName: The localized name of the tag to show in the UI.
	// - pchTagGroup: The localized name of the tag group to show in the UI. If this is not specified, users will not be able to filter by this tag
	// - unTagPriority: specify how important this tag is compared to other tags provided by the game.
	// Returns:
	//   A TimelineEventHandle_t that can be used to make subsequent calls to refer to the timeline event. This event handle is invalid
	//   after the game exits.

	// quick helpers that add to the timeline in one call
	virtual TimelineEventHandle_t AddInstantaneousTimelineEvent( const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None ) = 0;
	virtual TimelineEventHandle_t AddRangeTimelineEvent( const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unIconPriority, float flStartOffsetSeconds = 0.f, float flDuration = 0.f, ETimelineEventClipPriority ePossibleClip = k_ETimelineEventClipPriority_None ) = 0;

	// Starts a timeline event at a the current time, plus an offset in seconds. This event must be ended with EndRangeTimelineEvent.
	// Any timeline events that have not been ended when the game exits will be discarded.
	virtual TimelineEventHandle_t StartRangeTimelineEvent( const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, float flStartOffsetSeconds, ETimelineEventClipPriority ePossibleClip ) = 0;

	// Updates fields on a range timeline event that was started with StartRangeTimelineEvent, and which has not been ended.
	virtual void UpdateRangeTimelineEvent( TimelineEventHandle_t ulEvent, const char *pchTitle, const char *pchDescription, const char *pchIcon, uint32 unPriority, ETimelineEventClipPriority ePossibleClip ) = 0;

	// Ends a range timeline event and shows it in the UI.
	virtual void EndRangeTimelineEvent( TimelineEventHandle_t ulEvent, float flEndOffsetSeconds ) = 0;

	// delete the event from the timeline. This can be called on a timeline event from AddInstantaneousTimelineEvent,
	// AddRangeTimelineEvent, or StartRangeTimelineEvent/EndRangeTimelineEvent. The timeline event handle must be from the
	// current game process.
	virtual void RemoveTimelineEvent( TimelineEventHandle_t ulEvent ) = 0;

	// add a tag to whatever time range is represented by the event
	STEAM_CALL_RESULT( SteamTimelineEventRecordingExists_t )
	virtual SteamAPICall_t DoesEventRecordingExist( TimelineEventHandle_t ulEvent ) = 0;

	/*******************    Game Phases    *******************/

	// Game phases allow the user to navigate their background recordings and clips. Exactly what a game phase means will vary game to game, but
	// the game phase should be a section of gameplay that is usually between 10 minutes and a few hours in length, and should be the
	// main way a user would think to divide up the game. These are presented to the user in a UI that shows the date the game was played,
	// with one row per game slice. Game phases should be used to mark sections of gameplay that the user might be interested in watching.
	//
	//	Examples could include:
	//		* A single match in a multiplayer PvP game
	//		* A chapter of a story-based singleplayer game
	//		* A single run in a roguelike
	//
	// Game phases are started with StartGamePhase, and while a phase is still happening, they can have tags and attributes added to them.
	//
	// Phase attributes represent generic text fields that can be updated throughout the duration of the phase. They are meant
	// to be used for phase metadata that is not part of a well defined set of options. For example, a KDA attribute that starts
	// with the value "0/0/0" and updates as the phase progresses, or something like a played-entered character name. Attributes
	// can be set as many times as the game likes with SetGamePhaseAttribute, and only the last value will be shown to the user.
	//
	// Phase tags represent data with a well defined set of options, which could be data such as match resolution, hero played,
	// game mode, etc. Tags can have an icon in addition to a text name. Multiple tags within the same group may be added per phase
	// and all will be remembered. For example, AddGamePhaseTag may be called multiple times for a "Bosses Defeated" group, with
	// different names and icons for each boss defeated during the phase, all of which will be shown to the user.
	//
	// The phase will continue until the game exits, until the game calls EndGamePhase, or until the game calls
	// StartGamePhase to start a new phase.
	//
	// The game phase functions take these parameters:
	// - pchTagIcon: The name of a game provided timeline icon or builtin "steam_" icon.
	// - pchPhaseID: A game-provided persistent ID for a game phase. This could be a the match ID in a multiplayer game, a chapter name in a
	//   single player game, the ID of a character, etc.
	// - pchTagName: The localized name of the tag in the language returned by SteamUtils()->GetSteamUILanguage().
	// - pchTagGroup: The localized name of the tag group.
	// - pchAttributeValue: The localized name of the attribute.
	// - pchAttributeGroup: The localized name of the attribute group.
	// - unPriority: Used to order tags and attributes in the UI displayed to the user, with higher priority values leading
	//   to more prominent positioning. In contexts where there is limited space, lower priority items may be hidden.
	virtual void StartGamePhase() = 0;
	virtual void EndGamePhase() = 0;

	// Games can set a phase ID so they can refer back to a phase in OpenOverlayToPhase
	virtual void SetGamePhaseID( const char *pchPhaseID ) = 0;
	STEAM_CALL_RESULT( SteamTimelineGamePhaseRecordingExists_t )
	virtual SteamAPICall_t DoesGamePhaseRecordingExist( const char *pchPhaseID ) = 0;

	// Add a tag that applies to the entire phase
	virtual void AddGamePhaseTag( const char *pchTagName, const char *pchTagIcon, const char *pchTagGroup, uint32 unPriority ) = 0;

	// Add a text attribute that applies to the entire phase
	virtual void SetGamePhaseAttribute( const char *pchAttributeGroup, const char *pchAttributeValue, uint32 unPriority ) = 0;

	/*******************    Opening the overlay    *******************/

	// Opens the Steam overlay to a game phase.
	//
	// Parameters:
	// - pchPhaseID: The ID of a phase that was previously provided by the game in SetGamePhaseID.
	virtual void OpenOverlayToGamePhase( const char *pchPhaseID ) = 0;

	// Opens the Steam overlay to a timeline event.
	//
	// Parameters:
	// - ulEventID: The ID of a timeline event returned by StartEvent or AddSimpleTimelineEvent
	virtual void OpenOverlayToTimelineEvent( const TimelineEventHandle_t ulEvent ) = 0;

};

#define STEAMTIMELINE_INTERFACE_VERSION "STEAMTIMELINE_INTERFACE_V004"

// Global interface accessor
inline ISteamTimeline *SteamTimeline();
STEAM_DEFINE_USER_INTERFACE_ACCESSOR( ISteamTimeline *, SteamTimeline, STEAMTIMELINE_INTERFACE_VERSION );


//-----------------------------------------------------------------------------
// Purpose: Callback for querying UGC
//-----------------------------------------------------------------------------
struct SteamTimelineGamePhaseRecordingExists_t
{
	enum { k_iCallback = k_iSteamTimelineCallbacks + 1 };
	char m_rgchPhaseID[ k_cchMaxPhaseIDLength ];
	uint64 m_ulRecordingMS;
	uint64 m_ulLongestClipMS;
	uint32 m_unClipCount;
	uint32 m_unScreenshotCount;
};

//-----------------------------------------------------------------------------
// Purpose: Callback for querying UGC
//-----------------------------------------------------------------------------
struct SteamTimelineEventRecordingExists_t
{
	enum { k_iCallback = k_iSteamTimelineCallbacks + 2 };
	uint64 m_ulEventID;
	bool m_bRecordingExists;
};



#pragma pack( pop )


#endif // ISTEAMTIMELINE_H
