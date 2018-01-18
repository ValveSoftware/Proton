//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to steam for game play statistics
//
//=============================================================================

#ifndef ISTEAMGAMESTATS_H
#define ISTEAMGAMESTATS_H
#ifdef _WIN32
#pragma once
#endif

//-----------------------------------------------------------------------------
// Purpose: Functions for recording game play sessions and details thereof
//-----------------------------------------------------------------------------
class ISteamGameStats
{
public:
	virtual SteamAPICall_t GetNewSession( int8 nAccountType, uint64 ulAccountID, int32 nAppID, RTime32 rtTimeStarted ) = 0;
	virtual SteamAPICall_t EndSession( uint64 ulSessionID, RTime32 rtTimeEnded, int nReasonCode ) = 0;
	virtual EResult AddSessionAttributeInt( uint64 ulSessionID, const char* pstrName, int32 nData ) = 0;
	virtual EResult AddSessionAttributeString( uint64 ulSessionID, const char* pstrName, const char *pstrData ) = 0;
	virtual EResult AddSessionAttributeFloat( uint64 ulSessionID, const char* pstrName, float fData ) = 0;

	virtual EResult AddNewRow( uint64 *pulRowID, uint64 ulSessionID, const char *pstrTableName ) = 0;
	virtual EResult CommitRow( uint64 ulRowID ) = 0;
	virtual EResult CommitOutstandingRows( uint64 ulSessionID ) = 0;
	virtual EResult AddRowAttributeInt( uint64 ulRowID, const char *pstrName, int32 nData ) = 0;
	virtual EResult AddRowAtributeString( uint64 ulRowID, const char *pstrName, const char *pstrData ) = 0;
	virtual EResult AddRowAttributeFloat( uint64 ulRowID, const char *pstrName, float fData ) = 0;

	virtual EResult AddSessionAttributeInt64( uint64 ulSessionID, const char *pstrName, int64 llData ) = 0;
	virtual EResult AddRowAttributeInt64( uint64 ulRowID, const char *pstrName, int64 llData ) = 0;
};

#define STEAMGAMESTATS_INTERFACE_VERSION "SteamGameStats001"


//-----------------------------------------------------------------------------
// Purpose: nAccountType for GetNewSession
//-----------------------------------------------------------------------------
enum EGameStatsAccountType
{
	k_EGameStatsAccountType_Steam = 1,				// ullAccountID is a 64-bit SteamID for a player
	k_EGameStatsAccountType_Xbox = 2,				// ullAccountID is a 64-bit XUID
	k_EGameStatsAccountType_SteamGameServer = 3,	// ullAccountID is a 64-bit SteamID for a game server
};


//-----------------------------------------------------------------------------
// Purpose: callback for GetNewSession() method
//-----------------------------------------------------------------------------
struct GameStatsSessionIssued_t
{
	enum { k_iCallback = k_iSteamGameStatsCallbacks + 1 };

	uint64	m_ulSessionID;
	EResult	m_eResult;
	bool	m_bCollectingAny;
	bool	m_bCollectingDetails;
};


//-----------------------------------------------------------------------------
// Purpose: callback for EndSession() method
//-----------------------------------------------------------------------------
struct GameStatsSessionClosed_t
{
	enum { k_iCallback = k_iSteamGameStatsCallbacks + 2 };

	uint64	m_ulSessionID;
	EResult	m_eResult;
};

#endif // ISTEAMGAMESTATS_H
