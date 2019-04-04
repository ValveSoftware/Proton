//========= Copyright © 1996-2008, Valve LLC, All rights reserved. ============
//
// Purpose:
//
//=============================================================================

#ifndef STEAMCLIENTPUBLIC_H
#define STEAMCLIENTPUBLIC_H
#ifdef _WIN32
#pragma once
#endif
//lint -save -e1931 -e1927 -e1924 -e613 -e726

// This header file defines the interface between the calling application and the code that
// knows how to communicate with the connection manager (CM) from the Steam service 

// This header file is intended to be portable; ideally this 1 header file plus a lib or dll
// is all you need to integrate the client library into some other tree.  So please avoid
// including or requiring other header files if possible.  This header should only describe the 
// interface layer, no need to include anything about the implementation.

#include "steamtypes.h"


// General result codes
enum EResult
{
	k_EResultOK	= 1,							// success
	k_EResultFail = 2,							// generic failure 
	k_EResultNoConnection = 3,					// no/failed network connection
//	k_EResultNoConnectionRetry = 4,				// OBSOLETE - removed
	k_EResultInvalidPassword = 5,				// password/ticket is invalid
	k_EResultLoggedInElsewhere = 6,				// same user logged in elsewhere
	k_EResultInvalidProtocolVer = 7,			// protocol version is incorrect
	k_EResultInvalidParam = 8,					// a parameter is incorrect
	k_EResultFileNotFound = 9,					// file was not found
	k_EResultBusy = 10,							// called method busy - action not taken
	k_EResultInvalidState = 11,					// called object was in an invalid state
	k_EResultInvalidName = 12,					// name is invalid
	k_EResultInvalidEmail = 13,					// email is invalid
	k_EResultDuplicateName = 14,				// name is not unique
	k_EResultAccessDenied = 15,					// access is denied
	k_EResultTimeout = 16,						// operation timed out
	k_EResultBanned = 17,						// VAC2 banned
	k_EResultAccountNotFound = 18,				// account not found
	k_EResultInvalidSteamID = 19,				// steamID is invalid
	k_EResultServiceUnavailable = 20,			// The requested service is currently unavailable
	k_EResultNotLoggedOn = 21,					// The user is not logged on
	k_EResultPending = 22,						// Request is pending (may be in process, or waiting on third party)
	k_EResultEncryptionFailure = 23,			// Encryption or Decryption failed
	k_EResultInsufficientPrivilege = 24,		// Insufficient privilege
	k_EResultLimitExceeded = 25,				// Too much of a good thing
	k_EResultRevoked = 26,						// Access has been revoked (used for revoked guest passes)
	k_EResultExpired = 27,						// License/Guest pass the user is trying to access is expired
	k_EResultAlreadyRedeemed = 28,				// Guest pass has already been redeemed by account, cannot be acked again
	k_EResultDuplicateRequest = 29,				// The request is a duplicate and the action has already occurred in the past, ignored this time
	k_EResultAlreadyOwned = 30,					// All the games in this guest pass redemption request are already owned by the user
	k_EResultIPNotFound = 31,					// IP address not found
	k_EResultPersistFailed = 32,				// failed to write change to the data store
	k_EResultLockingFailed = 33,				// failed to acquire access lock for this operation
	k_EResultLogonSessionReplaced = 34,
	k_EResultConnectFailed = 35,
	k_EResultHandshakeFailed = 36,
	k_EResultIOFailure = 37,
	k_EResultRemoteDisconnect = 38,
	k_EResultShoppingCartNotFound = 39,			// failed to find the shopping cart requested
	k_EResultBlocked = 40,						// a user didn't allow it
	k_EResultIgnored = 41,						// target is ignoring sender
};

// Result codes to GSHandleClientDeny/Kick
typedef enum
{
	k_EDenyInvalidVersion = 1,
	k_EDenyGeneric = 2,
	k_EDenyNotLoggedOn = 3,
	k_EDenyNoLicense = 4,
	k_EDenyCheater = 5,
	k_EDenyLoggedInElseWhere = 6,
	k_EDenyUnknownText = 7,
	k_EDenyIncompatibleAnticheat = 8,
	k_EDenyMemoryCorruption = 9,
	k_EDenyIncompatibleSoftware = 10,
	k_EDenySteamConnectionLost = 11,
	k_EDenySteamConnectionError = 12,
	k_EDenySteamResponseTimedOut = 13,
	k_EDenySteamValidationStalled = 14,
} EDenyReason;

// Steam universes.  Each universe is a self-contained Steam instance.
enum EUniverse
{
	k_EUniverseInvalid = 0,
	k_EUniversePublic = 1,
	k_EUniverseBeta = 2,
	k_EUniverseInternal = 3,
	k_EUniverseDev = 4,
	k_EUniverseRC = 5,

	k_EUniverseMax
};

// Steam account types
enum EAccountType
{
	k_EAccountTypeInvalid = 0,			
	k_EAccountTypeIndividual = 1,		// single user account
	k_EAccountTypeMultiseat = 2,		// multiseat (e.g. cybercafe) account
	k_EAccountTypeGameServer = 3,		// game server account
	k_EAccountTypeAnonGameServer = 4,	// anonymous game server account
	k_EAccountTypePending = 5,			// pending
	k_EAccountTypeContentServer = 6,	// content server
	k_EAccountTypeClan = 7,
	k_EAccountTypeChat = 8,
	k_EAccountTypeP2PSuperSeeder = 9,	// a fake steamid used by superpeers to seed content to users of Steam P2P stuff
	k_EAccountTypeAnonUser = 10,

	// Max of 16 items in this field
	k_EAccountTypeMax
};


//-----------------------------------------------------------------------------
// types of user game stats fields
// WARNING: DO NOT RENUMBER EXISTING VALUES - STORED IN DATABASE
//-----------------------------------------------------------------------------
enum ESteamUserStatType
{
	k_ESteamUserStatTypeINVALID = 0,
	k_ESteamUserStatTypeINT = 1,
	k_ESteamUserStatTypeFLOAT = 2,
	// Read as FLOAT, set with count / session length
	k_ESteamUserStatTypeAVGRATE = 3,
	k_ESteamUserStatTypeACHIEVEMENTS = 4,
	k_ESteamUserStatTypeGROUPACHIEVEMENTS = 5,
};


//-----------------------------------------------------------------------------
// Purpose: Chat Entry Types (previously was only friend-to-friend message types)
//-----------------------------------------------------------------------------
enum EChatEntryType
{
	k_EChatEntryTypeChatMsg = 1,		// Normal text message from another user
	k_EChatEntryTypeTyping = 2,			// Another user is typing (not used in multi-user chat)
	k_EChatEntryTypeInviteGame = 3,		// Invite from other user into that users current game
	k_EChatEntryTypeEmote = 4,			// text emote message
	k_EChatEntryTypeLobbyGameStart = 5,	// lobby game is starting
	// Above are previous FriendMsgType entries, now merged into more generic chat entry types
};


//-----------------------------------------------------------------------------
// Purpose: Chat Room Enter Responses
//-----------------------------------------------------------------------------
enum EChatRoomEnterResponse
{
	k_EChatRoomEnterResponseSuccess = 1,		// Success
	k_EChatRoomEnterResponseDoesntExist = 2,	// Chat doesn't exist (probably closed)
	k_EChatRoomEnterResponseNotAllowed = 3,		// General Denied - You don't have the permissions needed to join the chat
	k_EChatRoomEnterResponseFull = 4,			// Chat room has reached its maximum size
	k_EChatRoomEnterResponseError = 5,			// Unexpected Error
	k_EChatRoomEnterResponseBanned = 6,			// You are banned from this chat room and may not join
};


typedef void (*PFNLegacyKeyRegistration)( const char *pchCDKey, const char *pchInstallPath );
typedef bool (*PFNLegacyKeyInstalled)();


#pragma pack( push, 1 )		

// Steam ID structure (64 bits total)
class CSteamID
{
public:

	//-----------------------------------------------------------------------------
	// Purpose: Constructor
	//-----------------------------------------------------------------------------
	CSteamID()
	{
		m_unAccountID = 0;
		m_EAccountType = k_EAccountTypeInvalid;
		m_EUniverse = k_EUniverseInvalid;
		m_unAccountInstance = 0;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Constructor
	// Input  : unAccountID -	32-bit account ID
	//			eUniverse -		Universe this account belongs to
	//			eAccountType -	Type of account
	//-----------------------------------------------------------------------------
	CSteamID( uint32 unAccountID, EUniverse eUniverse, EAccountType eAccountType )
	{
		Set( unAccountID, eUniverse, eAccountType );
	}


	//-----------------------------------------------------------------------------
	// Purpose: Constructor
	// Input  : unAccountID -	32-bit account ID
	//			unAccountInstance - instance 
	//			eUniverse -		Universe this account belongs to
	//			eAccountType -	Type of account
	//-----------------------------------------------------------------------------
	CSteamID( uint32 unAccountID, unsigned int unAccountInstance, EUniverse eUniverse, EAccountType eAccountType )
	{
#if defined(_SERVER) && defined(Assert)
		Assert( ! ( ( k_EAccountTypeIndividual == eAccountType ) && ( 1 != unAccountInstance ) ) );	// enforce that for individual accounts, instance is always 1
#endif // _SERVER
		InstancedSet( unAccountID, unAccountInstance, eUniverse, eAccountType );
	}


	//-----------------------------------------------------------------------------
	// Purpose: Constructor
	// Input  : ulSteamID -		64-bit representation of a Steam ID
	// Note:	Will not accept a uint32 or int32 as input, as that is a probable mistake.
	//			See the stubbed out overloads in the private: section for more info.
	//-----------------------------------------------------------------------------
	CSteamID( uint64 ulSteamID )
	{
		SetFromUint64( ulSteamID );
	}


	//-----------------------------------------------------------------------------
	// Purpose: Sets parameters for steam ID
	// Input  : unAccountID -	32-bit account ID
	//			eUniverse -		Universe this account belongs to
	//			eAccountType -	Type of account
	//-----------------------------------------------------------------------------
	void Set( uint32 unAccountID, EUniverse eUniverse, EAccountType eAccountType )
	{
		m_unAccountID = unAccountID;
		m_EUniverse = eUniverse;
		m_EAccountType = eAccountType;
		m_unAccountInstance = 1;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Sets parameters for steam ID
	// Input  : unAccountID -	32-bit account ID
	//			eUniverse -		Universe this account belongs to
	//			eAccountType -	Type of account
	//-----------------------------------------------------------------------------
	void InstancedSet( uint32 unAccountID, uint32 unInstance, EUniverse eUniverse, EAccountType eAccountType )
	{
		m_unAccountID = unAccountID;
		m_EUniverse = eUniverse;
		m_EAccountType = eAccountType;
		m_unAccountInstance = unInstance;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Initializes a steam ID from its 52 bit parts and universe/type
	// Input  : ulIdentifier - 52 bits of goodness
	//-----------------------------------------------------------------------------
	void FullSet( uint64 ulIdentifier, EUniverse eUniverse, EAccountType eAccountType )
	{
		m_unAccountID = ( ulIdentifier & 0xFFFFFFFF );						// account ID is low 32 bits
		m_unAccountInstance = ( ( ulIdentifier >> 32 ) & 0xFFFFF );			// account instance is next 20 bits
		m_EUniverse = eUniverse;
		m_EAccountType = eAccountType;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Initializes a steam ID from its 64-bit representation
	// Input  : ulSteamID -		64-bit representation of a Steam ID
	//-----------------------------------------------------------------------------
	void SetFromUint64( uint64 ulSteamID )
	{
		m_unAccountID = ( ulSteamID & 0xFFFFFFFF );							// account ID is low 32 bits
		m_unAccountInstance = ( ( ulSteamID >> 32 ) & 0xFFFFF );			// account instance is next 20 bits

		m_EAccountType = ( EAccountType ) ( ( ulSteamID >> 52 ) & 0xF );	// type is next 4 bits
		m_EUniverse = ( EUniverse ) ( ( ulSteamID >> 56 ) & 0xFF );			// universe is next 8 bits
	}


#if defined( INCLUDED_STEAM_COMMON_STEAMCOMMON_H ) 
	//-----------------------------------------------------------------------------
	// Purpose: Initializes a steam ID from a Steam2 ID structure
	// Input:	pTSteamGlobalUserID -	Steam2 ID to convert
	//			eUniverse -				universe this ID belongs to
	//-----------------------------------------------------------------------------
	void SetFromSteam2( TSteamGlobalUserID *pTSteamGlobalUserID, EUniverse eUniverse )
	{
		m_unAccountID = pTSteamGlobalUserID->m_SteamLocalUserID.Split.Low32bits * 2 + 
			pTSteamGlobalUserID->m_SteamLocalUserID.Split.High32bits;
		m_EUniverse = eUniverse;		// set the universe
		m_EAccountType = k_EAccountTypeIndividual; // Steam 2 accounts always map to account type of individual
		m_unAccountInstance = 1;	// individual accounts always have an account instance ID of 1
	}

	//-----------------------------------------------------------------------------
	// Purpose: Fills out a Steam2 ID structure
	// Input:	pTSteamGlobalUserID -	Steam2 ID to write to
	//-----------------------------------------------------------------------------
	void ConvertToSteam2( TSteamGlobalUserID *pTSteamGlobalUserID ) const
	{
		// only individual accounts have any meaning in Steam 2, only they can be mapped
		// Assert( m_EAccountType == k_EAccountTypeIndividual );

		pTSteamGlobalUserID->m_SteamInstanceID = 0;
		pTSteamGlobalUserID->m_SteamLocalUserID.Split.High32bits = m_unAccountID % 2;
		pTSteamGlobalUserID->m_SteamLocalUserID.Split.Low32bits = m_unAccountID / 2;
	}
#endif // defined( INCLUDED_STEAM_COMMON_STEAMCOMMON_H )

	//-----------------------------------------------------------------------------
	// Purpose: Converts steam ID to its 64-bit representation
	// Output : 64-bit representation of a Steam ID
	//-----------------------------------------------------------------------------
	uint64 ConvertToUint64() const
	{
		return (uint64) ( ( ( (uint64) m_EUniverse ) << 56 ) + ( ( (uint64) m_EAccountType ) << 52 ) + 
			( ( (uint64) m_unAccountInstance ) << 32 ) + m_unAccountID );
	}


	//-----------------------------------------------------------------------------
	// Purpose: Converts the static parts of a steam ID to a 64-bit representation.
	//			For multiseat accounts, all instances of that account will have the
	//			same static account key, so they can be grouped together by the static
	//			account key.
	// Output : 64-bit static account key
	//-----------------------------------------------------------------------------
	uint64 GetStaticAccountKey() const
	{
		// note we do NOT include the account instance (which is a dynamic property) in the static account key
		return (uint64) ( ( ( (uint64) m_EUniverse ) << 56 ) + ((uint64) m_EAccountType << 52 ) + m_unAccountID );
	}


	//-----------------------------------------------------------------------------
	// Purpose: create an anonymous game server login to be filled in by the AM
	//-----------------------------------------------------------------------------
	void CreateBlankAnonLogon( EUniverse eUniverse )
	{
		m_unAccountID = 0;
		m_EAccountType = k_EAccountTypeAnonGameServer;
		m_EUniverse = eUniverse;
		m_unAccountInstance = 0;
	}


	//-----------------------------------------------------------------------------
	// Purpose: create an anonymous game server login to be filled in by the AM
	//-----------------------------------------------------------------------------
	void CreateBlankAnonUserLogon( EUniverse eUniverse )
	{
		m_unAccountID = 0;
		m_EAccountType = k_EAccountTypeAnonUser;
		m_EUniverse = eUniverse;
		m_unAccountInstance = 0;
	}

	//-----------------------------------------------------------------------------
	// Purpose: Is this an anonymous game server login that will be filled in?
	//-----------------------------------------------------------------------------
	bool BBlankAnonAccount() const
	{
		return m_unAccountID == 0 && BAnonAccount() && m_unAccountInstance == 0;
	}

	//-----------------------------------------------------------------------------
	// Purpose: Is this a game server account id?
	//-----------------------------------------------------------------------------
	bool BGameServerAccount() const
	{
		return m_EAccountType == k_EAccountTypeGameServer || m_EAccountType == k_EAccountTypeAnonGameServer;
	}

	//-----------------------------------------------------------------------------
	// Purpose: Is this a content server account id?
	//-----------------------------------------------------------------------------
	bool BContentServerAccount() const
	{
		return m_EAccountType == k_EAccountTypeContentServer;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Is this a clan account id?
	//-----------------------------------------------------------------------------
	bool BClanAccount() const
	{
		return m_EAccountType == k_EAccountTypeClan;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Is this a chat account id?
	//-----------------------------------------------------------------------------
	bool BChatAccount() const
	{
		return m_EAccountType == k_EAccountTypeChat;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Is this an individual user account id?
	//-----------------------------------------------------------------------------
	bool BIndividualAccount() const
	{
		return m_EAccountType == k_EAccountTypeIndividual;
	}


	//-----------------------------------------------------------------------------
	// Purpose: Is this an anonymous account?
	//-----------------------------------------------------------------------------
	bool BAnonAccount() const
	{
		return m_EAccountType == k_EAccountTypeAnonUser || m_EAccountType == k_EAccountTypeAnonGameServer;
	}


	// simple accessors
	void SetAccountID( uint32 unAccountID )		{ m_unAccountID = unAccountID; }
	uint32 GetAccountID() const					{ return m_unAccountID; }
	uint32 GetUnAccountInstance() const			{ return m_unAccountInstance; }
	EAccountType GetEAccountType() const		{ return ( EAccountType ) m_EAccountType; }
	EUniverse GetEUniverse() const				{ return m_EUniverse; }
	void SetEUniverse( EUniverse eUniverse )	{ m_EUniverse = eUniverse; }
	bool IsValid() const						{ return ( m_EAccountType != k_EAccountTypeInvalid && m_EUniverse != k_EUniverseInvalid ); }

	// this set of functions is hidden, will be moved out of class
	explicit CSteamID( const char *pchSteamID, EUniverse eDefaultUniverse = k_EUniverseInvalid );
	char * Render() const;				// renders this steam ID to string
	static char * Render( uint64 ulSteamID );	// static method to render a uint64 representation of a steam ID to a string

	void SetFromString( const char *pchSteamID, EUniverse eDefaultUniverse );
	bool SetFromSteam2String( const char *pchSteam2ID, EUniverse eUniverse );

	bool operator==( const CSteamID &val ) const
	{
		return ( ( val.m_unAccountID == m_unAccountID ) && ( val.m_unAccountInstance == m_unAccountInstance )
			&& ( val.m_EAccountType == m_EAccountType ) &&  ( val.m_EUniverse == m_EUniverse ) );
	} 

	bool operator!=( const CSteamID &val ) const { return !operator==( val ); }
	bool operator<( const CSteamID &val ) const { return ConvertToUint64() < val.ConvertToUint64(); }
	bool operator>( const CSteamID &val ) const { return ConvertToUint64() > val.ConvertToUint64(); }

	// DEBUG function
	bool BValidExternalSteamID() const;

private:
	// These are defined here to prevent accidental implicit conversion of a u32AccountID to a CSteamID.
	// If you get a compiler error about an ambiguous constructor/function then it may be because you're
	// passing a 32-bit int to a function that takes a CSteamID. You should explicitly create the SteamID
	// using the correct Universe and account Type/Instance values.
	CSteamID( uint32 );
	CSteamID( int32 );

#ifdef _WIN32
#pragma warning(push)
#pragma warning(disable:4201)	// nameless union is nonstandard
	// 64 bits total
	union
	{
		struct
		{
#endif
			uint32				m_unAccountID : 32;			// unique account identifier
			unsigned int		m_unAccountInstance : 20;	// dynamic instance ID (used for multiseat type accounts only)
			unsigned int		m_EAccountType : 4;			// type of account - can't show as EAccountType, due to signed / unsigned difference
			EUniverse			m_EUniverse : 8;			// universe this account belongs to
#ifdef _WIN32
		};

		uint64 m_unAll64Bits;
	};
#pragma warning(pop)			// no more anonymous unions until next time
#endif
};

const int k_unSteamAccountIDMask = 0xFFFFFFFF;
const int k_unSteamAccountInstanceMask = 0x000FFFFF;


// Special flags for Chat accounts - they go in the top 8 bits
// of the steam ID's "instance", leaving 12 for the actual instances
enum EChatSteamIDInstanceFlags
{
	k_EChatAccountInstanceMask = 0x00000FFF, // top 8 bits are flags

	k_EChatInstanceFlagClan = ( k_unSteamAccountInstanceMask + 1 ) >> 1,	// top bit
	k_EChatInstanceFlagLobby = ( k_unSteamAccountInstanceMask + 1 ) >> 2,	// next one down, etc

	// Max of 8 flags
};


// generic invalid CSteamID
const CSteamID k_steamIDNil;

// This steamID comes from a user game connection to an out of date GS that hasnt implemented the protocol
// to provide its steamID
const CSteamID k_steamIDOutofDateGS( 0, 0, k_EUniverseInvalid, k_EAccountTypeInvalid );
// This steamID comes from a user game connection to an sv_lan GS
const CSteamID k_steamIDLanModeGS( 0, 0, k_EUniversePublic, k_EAccountTypeInvalid );
// This steamID can come from a user game connection to a GS that has just booted but hasnt yet even initialized
// its steam3 component and started logging on.
const CSteamID k_steamIDNotInitYetGS( 1, 0, k_EUniverseInvalid, k_EAccountTypeInvalid );


#ifdef STEAM
// Returns the matching chat steamID, with the default instance of 0
// If the steamID passed in is already of type k_EAccountTypeChat it will be returned with the same instance
CSteamID ChatIDFromSteamID( CSteamID &steamID );
// Returns the matching clan steamID, with the default instance of 0
// If the steamID passed in is already of type k_EAccountTypeClan it will be returned with the same instance
CSteamID ClanIDFromSteamID( CSteamID &steamID );
// Asserts steamID type before conversion
CSteamID ChatIDFromClanID( CSteamID &steamIDClan );
// Asserts steamID type before conversion
CSteamID ClanIDFromChatID( CSteamID &steamIDChat );

#endif // _STEAM


//-----------------------------------------------------------------------------
// Purpose: encapsulates an appID/modID pair
//-----------------------------------------------------------------------------
class CGameID
{
public:
	CGameID()
	{
		m_ulGameID = 0;
	}

	explicit CGameID( uint64 ulGameID )
	{
		m_ulGameID = ulGameID;
	}

	explicit CGameID( int32 nAppID )
	{
		m_ulGameID = 0;
		m_gameID.m_nAppID = nAppID;
	}

	explicit CGameID( uint32 nAppID )
	{
		m_ulGameID = 0;
		m_gameID.m_nAppID = nAppID;
	}

	CGameID( uint32 nAppID, uint32 nModID )
	{
		m_ulGameID = 0;
		m_gameID.m_nAppID = nAppID;
		m_gameID.m_nModID = nModID;
		m_gameID.m_nType = k_EGameIDTypeGameMod;
	}

	// Hidden functions used only by Steam
	explicit CGameID( const char *pchGameID );
	char * Render() const;				// renders this Game ID to string
	static char * Render( uint64 ulGameID );	// static method to render a uint64 representation of a Game ID to a string

	// must include checksum_crc.h first to get this functionality
#if defined( CHECKSUM_CRC_H )
	CGameID( uint32 nAppID, const char *pchModPath )
	{
		m_ulGameID = 0;
		m_gameID.m_nAppID = nAppID;
		m_gameID.m_nType = k_EGameIDTypeGameMod;

		char rgchModDir[MAX_PATH];
		Q_FileBase( pchModPath, rgchModDir, sizeof( rgchModDir ) );
		CRC32_t crc32;
		CRC32_Init( &crc32 );
		CRC32_ProcessBuffer( &crc32, rgchModDir, Q_strlen( rgchModDir ) );
		CRC32_Final( &crc32 );

		// set the high-bit on the mod-id 
		// reduces crc32 to 31bits, but lets us use the modID as a guaranteed unique
		// replacement for appID's
		m_gameID.m_nModID = crc32 | (0x80000000);
	}

	CGameID( const char *pchExePath, const char *pchAppName )
	{
		m_ulGameID = 0;
		m_gameID.m_nAppID = 0;
		m_gameID.m_nType = k_EGameIDTypeShortcut;

		CRC32_t crc32;
		CRC32_Init( &crc32 );
		CRC32_ProcessBuffer( &crc32, pchExePath, Q_strlen( pchExePath ) );
		CRC32_ProcessBuffer( &crc32, pchAppName, Q_strlen( pchAppName ) );
		CRC32_Final( &crc32 );

		// set the high-bit on the mod-id 
		// reduces crc32 to 31bits, but lets us use the modID as a guaranteed unique
		// replacement for appID's
		m_gameID.m_nModID = crc32 | (0x80000000);
	}
#endif

	void SetAsShortcut()
	{
		m_gameID.m_nAppID = 0;
		m_gameID.m_nType = k_EGameIDTypeShortcut;
	}

	void SetAsP2PFile()
	{
		m_gameID.m_nAppID = 0;
		m_gameID.m_nType = k_EGameIDTypeP2P;
	}

	uint64 ToUint64() const
	{
		return m_ulGameID;
	}

	uint64 *GetUint64Ptr()
	{
		return &m_ulGameID;
	}

	bool IsMod() const
	{
		return ( m_gameID.m_nType == k_EGameIDTypeGameMod );
	}

	bool IsShortcut() const
	{
		return ( m_gameID.m_nType == k_EGameIDTypeShortcut );
	}

	bool IsP2PFile() const
	{
		return ( m_gameID.m_nType == k_EGameIDTypeP2P );
	}

	bool IsSteamApp() const
	{
		return ( m_gameID.m_nType == k_EGameIDTypeApp );
	}
		


	uint32 ModID() const
	{
		return m_gameID.m_nModID;
	}

	uint32 AppID() const
	{
		return m_gameID.m_nAppID;
	}

	bool operator == ( const CGameID &rhs ) const
	{
		return m_ulGameID == rhs.m_ulGameID;
	}

	bool operator != ( const CGameID &rhs ) const
	{
		return !(*this == rhs);
	}

	bool operator < ( const CGameID &rhs ) const
	{
		return ( m_ulGameID < rhs.m_ulGameID );
	}

	bool IsValid() const
	{
		return ( m_ulGameID != 0 );
	}

	void Reset() 
	{
		m_ulGameID = 0;
	}



private:
	enum EGameIDType
	{
		k_EGameIDTypeApp		= 0,
		k_EGameIDTypeGameMod	= 1,
		k_EGameIDTypeShortcut	= 2,
		k_EGameIDTypeP2P		= 3,
	};

	struct GameID_t
	{
		unsigned int m_nAppID : 24;
		unsigned int m_nType : 8;
		unsigned int m_nModID : 32;
	};

	union
	{
		uint64 m_ulGameID;
		GameID_t m_gameID;
	};
};

#pragma pack( pop )

const int k_cchGameExtraInfoMax = 64;


// Max number of credit cards stored for one account
const int k_nMaxNumCardsPerAccount = 1;


//-----------------------------------------------------------------------------
// Constants used for query ports.
//-----------------------------------------------------------------------------

#define QUERY_PORT_NOT_INITIALIZED		0xFFFF	// We haven't asked the GS for this query port's actual value yet.
#define QUERY_PORT_ERROR				0xFFFE	// We were unable to get the query port for this server.

#endif // STEAMCLIENTPUBLIC_H
