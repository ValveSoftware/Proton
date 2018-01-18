//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to user account information in Steam
//
//=============================================================================

#ifndef ISTEAMUSERSTATS_H
#define ISTEAMUSERSTATS_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

// size limit on stat or achievement name
const uint32 k_cchStatNameMax = 128;

class ISteamUserStats
{
public:
	// Ask the server to send down this user's data and achievements for this game
	virtual bool RequestCurrentStats() = 0;

	// Data accessors
	virtual bool GetStat( const char *pchName, int32 *pData ) = 0;
	virtual bool GetStat( const char *pchName, float *pData ) = 0;

	// Set / update data
	virtual bool SetStat( const char *pchName, int32 nData ) = 0;
	virtual bool SetStat( const char *pchName, float fData ) = 0;
	virtual bool UpdateAvgRateStat( const char *pchName, float flCountThisSession, double dSessionLength ) = 0;

	// Achievement flag accessors
	virtual bool GetAchievement( const char *pchName, bool *pbAchieved ) = 0;
	virtual bool SetAchievement( const char *pchName ) = 0;
	virtual bool ClearAchievement( const char *pchName ) = 0;

	// Store the current data on the server, will get a callback when set
	// And one callback for every new achievement
	virtual bool StoreStats() = 0;

	// Achievement / GroupAchievement metadata

	// Gets the icon of the achievement, which is a handle to be used in IClientUtils::GetImageRGBA(), or 0 if none set
	virtual int GetAchievementIcon( const char *pchName ) = 0;
	// Get general attributes (display name / text, etc) for an Achievement
	virtual const char *GetAchievementDisplayAttribute( const char *pchName, const char *pchKey ) = 0;

	// Achievement progress - triggers an AchievementProgress callback, that is all.
	// Calling this w/ N out of N progress will NOT set the achievement, the game must still do that.
	virtual bool IndicateAchievementProgress( const char *pchName, uint32 nCurProgress, uint32 nMaxProgress ) = 0;

	// Friends stats & achievements

	// downloads stats for the user
	// returns a UserStatsReceived_t received when completed
	// if the other user has no stats, UserStatsReceived_t.m_eResult will be set to k_EResultFail
	// these stats won't be auto-updated; you'll need to call RequestUserStats() again to refresh any data
	virtual SteamAPICall_t RequestUserStats( CSteamID steamIDUser ) = 0;

	// requests stat information for a user, usable after a successful call to RequestUserStats()
	virtual bool GetUserStat( CSteamID steamIDUser, const char *pchName, int32 *pData ) = 0;
	virtual bool GetUserStat( CSteamID steamIDUser, const char *pchName, float *pData ) = 0;
	virtual bool GetUserAchievement( CSteamID steamIDUser, const char *pchName, bool *pbAchieved ) = 0;
};

#define STEAMUSERSTATS_INTERFACE_VERSION "STEAMUSERSTATS_INTERFACE_VERSION004"


//-----------------------------------------------------------------------------
// Purpose: called when the latests stats and achievements have been received
//			from the server
//-----------------------------------------------------------------------------
struct UserStatsReceived_t
{
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 1 };
	uint64		m_nGameID;		// Game these stats are for
	EResult		m_eResult;		// Success / error fetching the stats
	CSteamID	m_steamIDUser;	// The user for whom the stats are retrieved for
};


//-----------------------------------------------------------------------------
// Purpose: result of a request to store the user stats for a game
//-----------------------------------------------------------------------------
struct UserStatsStored_t
{
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 2 };
	uint64		m_nGameID;		// Game these stats are for
	EResult		m_eResult;		// success / error
};


//-----------------------------------------------------------------------------
// Purpose: result of a request to store the achievements for a game, or an 
//			"indicate progress" call. If both m_nCurProgress and m_nMaxProgress
//			are zero, that means the achievement has been fully unlocked.
//-----------------------------------------------------------------------------
struct UserAchievementStored_t
{
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 3 };

	uint64		m_nGameID;				// Game this is for
	bool		m_bGroupAchievement;	// if this is a "group" achievement
	char		m_rgchAchievementName[k_cchStatNameMax];		// name of the achievement
	uint32		m_nCurProgress;			// current progress towards the achievement
	uint32		m_nMaxProgress;			// "out of" this many
};


#endif // ISTEAMUSER_H
