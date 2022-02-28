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
       virtual uint32 GetNumStats( CGameID nGameID ) = 0;
       virtual const char *GetStatName( CGameID nGameID, uint32 iStat ) = 0;
       virtual ESteamUserStatType GetStatType( CGameID nGameID, const char *pchName ) = 0;
       virtual uint32 GetNumAchievements( CGameID nGameID ) = 0;
       virtual const char *GetAchievementName( CGameID nGameID, uint32 iAchievement ) = 0;
       virtual bool RequestCurrentStats( CGameID nGameID ) = 0;
       virtual bool GetStat( CGameID nGameID, const char *pchName, int32 *pData ) = 0;
       virtual bool GetStat( CGameID nGameID, const char *pchName, float *pData ) = 0;
       virtual bool SetStat( CGameID nGameID, const char *pchName, int32 nData ) = 0;
       virtual bool SetStat( CGameID nGameID, const char *pchName, float fData ) = 0;
       virtual bool UpdateAvgRateStat( CGameID nGameID, const char *pchName, float flCountThisSession, double dSessionLength ) = 0;
       virtual bool GetAchievement( CGameID nGameID, const char *pchName, bool *pbAchieved ) = 0;
       virtual bool SetAchievement( CGameID nGameID, const char *pchName ) = 0;
       virtual bool ClearAchievement( CGameID nGameID, const char *pchName ) = 0;
       virtual bool StoreStats( CGameID nGameID ) = 0;
       virtual int GetAchievementIcon( CGameID nGameID, const char *pchName ) = 0;
       virtual const char *GetAchievementDisplayAttribute( CGameID nGameID, const char *pchName, const char *pchKey ) = 0;
       virtual bool IndicateAchievementProgress( CGameID nGameID, const char *pchName, uint32 nCurProgress, uint32 nMaxProgress ) = 0;
};


#define STEAMUSERSTATS_INTERFACE_VERSION "STEAMUSERSTATS_INTERFACE_VERSION002"

//-----------------------------------------------------------------------------
// Purpose: called when the latests stats and achievements have been received
//			from the server
//-----------------------------------------------------------------------------
struct UserStatsReceived_t
{
	enum { k_iCallback = k_iSteamUserStatsCallbacks + 1 };
	uint64		m_nGameID;		// Game these stats are for
	EResult		m_eResult;		// Success / error fetching the stats
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
