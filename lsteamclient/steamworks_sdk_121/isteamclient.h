//====== Copyright � 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: Main interface for loading and accessing Steamworks API's from the 
//			Steam client.
//			For most uses, this code is wrapped inside of SteamAPI_Init()
//=============================================================================

#ifndef ISTEAMCLIENT_H
#define ISTEAMCLIENT_H
#ifdef _WIN32
#pragma once
#endif

#include "steamtypes.h"
#include "steamclientpublic.h"

// handle to a communication pipe to the Steam client
typedef int32 HSteamPipe;
// handle to single instance of a steam user
typedef int32 HSteamUser;
// function prototype
#if defined( POSIX )
#define __cdecl
#endif
extern "C" typedef void (__cdecl *SteamAPIWarningMessageHook_t)(int, const char *);

#if defined( __SNC__ )
	#pragma diag_suppress=1700	   // warning 1700: class "%s" has virtual functions but non-virtual destructor
#endif

// interface predec
class ISteamUser;
class ISteamGameServer;
class ISteamFriends;
class ISteamUtils;
class ISteamMatchmaking;
class ISteamContentServer;
class ISteamMatchmakingServers;
class ISteamUserStats;
class ISteamApps;
class ISteamNetworking;
class ISteamRemoteStorage;
class ISteamScreenshots;
class ISteamGameServerStats;
class ISteamPS3OverlayRender;
class ISteamHTTP;

//-----------------------------------------------------------------------------
// Purpose: Interface to creating a new steam instance, or to
//			connect to an existing steam instance, whether it's in a
//			different process or is local.
//
//			For most scenarios this is all handled automatically via SteamAPI_Init().
//			You'll only need to use these interfaces if you have a more complex versioning scheme,
//			where you want to get different versions of the same interface in different dll's in your project.
//-----------------------------------------------------------------------------
class ISteamClient
{
public:
	// Creates a communication pipe to the Steam client
	virtual HSteamPipe CreateSteamPipe() = 0;

	// Releases a previously created communications pipe
	virtual bool BReleaseSteamPipe( HSteamPipe hSteamPipe ) = 0;

	// connects to an existing global user, failing if none exists
	// used by the game to coordinate with the steamUI
	virtual HSteamUser ConnectToGlobalUser( HSteamPipe hSteamPipe ) = 0;

	// used by game servers, create a steam user that won't be shared with anyone else
	virtual HSteamUser CreateLocalUser( HSteamPipe *phSteamPipe, EAccountType eAccountType ) = 0;

	// removes an allocated user
	virtual void ReleaseUser( HSteamPipe hSteamPipe, HSteamUser hUser ) = 0;

	// retrieves the ISteamUser interface associated with the handle
	virtual ISteamUser *GetISteamUser( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// retrieves the ISteamGameServer interface associated with the handle
	virtual ISteamGameServer *GetISteamGameServer( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// set the local IP and Port to bind to
	// this must be set before CreateLocalUser()
	virtual void SetLocalIPBinding( uint32 unIP, uint16 usPort ) = 0; 

	// returns the ISteamFriends interface
	virtual ISteamFriends *GetISteamFriends( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the ISteamUtils interface
	virtual ISteamUtils *GetISteamUtils( HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the ISteamMatchmaking interface
	virtual ISteamMatchmaking *GetISteamMatchmaking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the ISteamMatchmakingServers interface
	virtual ISteamMatchmakingServers *GetISteamMatchmakingServers( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the a generic interface
	virtual void *GetISteamGenericInterface( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the ISteamUserStats interface
	virtual ISteamUserStats *GetISteamUserStats( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns the ISteamGameServerStats interface
	virtual ISteamGameServerStats *GetISteamGameServerStats( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns apps interface
	virtual ISteamApps *GetISteamApps( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// networking
	virtual ISteamNetworking *GetISteamNetworking( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// remote storage
	virtual ISteamRemoteStorage *GetISteamRemoteStorage( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// user screenshots
	virtual ISteamScreenshots *GetISteamScreenshots( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;


	// this needs to be called every frame to process matchmaking results
	// redundant if you're already calling SteamAPI_RunCallbacks()
	virtual void RunFrame() = 0;

	// returns the number of IPC calls made since the last time this function was called
	// Used for perf debugging so you can understand how many IPC calls your game makes per frame
	// Every IPC call is at minimum a thread context switch if not a process one so you want to rate
	// control how often you do them.
	virtual uint32 GetIPCCallCount() = 0;

	// API warning handling
	// 'int' is the severity; 0 for msg, 1 for warning
	// 'const char *' is the text of the message
	// callbacks will occur directly after the API function is called that generated the warning or message
	virtual void SetWarningMessageHook( SteamAPIWarningMessageHook_t pFunction ) = 0;

	// Trigger global shutdown for the DLL
	virtual bool BShutdownIfAllPipesClosed() = 0;

#ifdef _PS3
	virtual ISteamPS3OverlayRender *GetISteamPS3OverlayRender() = 0;
#endif

	// Expose HTTP interface
	virtual ISteamHTTP *GetISteamHTTP( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;


};

#define STEAMCLIENT_INTERFACE_VERSION		"SteamClient012"

//-----------------------------------------------------------------------------
// Purpose: Base values for callback identifiers, each callback must
//			have a unique ID.
//-----------------------------------------------------------------------------
enum { k_iSteamUserCallbacks = 100 };
enum { k_iSteamGameServerCallbacks = 200 };
enum { k_iSteamFriendsCallbacks = 300 };
enum { k_iSteamBillingCallbacks = 400 };
enum { k_iSteamMatchmakingCallbacks = 500 };
enum { k_iSteamContentServerCallbacks = 600 };
enum { k_iSteamUtilsCallbacks = 700 };
enum { k_iClientFriendsCallbacks = 800 };
enum { k_iClientUserCallbacks = 900 };
enum { k_iSteamAppsCallbacks = 1000 };
enum { k_iSteamUserStatsCallbacks = 1100 };
enum { k_iSteamNetworkingCallbacks = 1200 };
enum { k_iClientRemoteStorageCallbacks = 1300 };
enum { k_iSteamUserItemsCallbacks = 1400 };
enum { k_iSteamGameServerItemsCallbacks = 1500 };
enum { k_iClientUtilsCallbacks = 1600 };
enum { k_iSteamGameCoordinatorCallbacks = 1700 };
enum { k_iSteamGameServerStatsCallbacks = 1800 };
enum { k_iSteam2AsyncCallbacks = 1900 };
enum { k_iSteamGameStatsCallbacks = 2000 };
enum { k_iClientHTTPCallbacks = 2100 };
enum { k_iClientScreenshotsCallbacks = 2200 };
enum { k_iSteamScreenshotsCallbacks = 2300 };
enum { k_iClientAudioCallbacks = 2400 };


//-----------------------------------------------------------------------------
// The CALLBACK macros are for client side callback logging enabled with
// log_callback <first callnbackID> <last callbackID>
// Do not change any of these. 
//-----------------------------------------------------------------------------

class CSteamCallback
{
public:
	virtual const char *GetCallbackName() const = 0;
	virtual uint32 GetCallbackID() const = 0;
	virtual uint8 *GetFixedData() const = 0;
	virtual uint32 GetFixedSize() const = 0;
	virtual uint32 GetNumMemberVariables() const = 0;
	virtual bool GetMemberVariable( uint32 index, uint32 &varOffset, uint32 &varSize, uint32 &varCount, const char **pszName, const char **pszType  ) const = 0;
};

#define DEFINE_CALLBACK( callbackname, callbackid ) \
struct callbackname##_t { \
	enum { k_iCallback = callbackid }; \
	static callbackname##_t *GetNullPointer() { return 0; }

#define CALLBACK_MEMBER( varidx, vartype, varname ) \
	public: vartype varname ; \
	static void GetMemberVar_##varidx( unsigned int &varOffset, unsigned int &varSize, uint32 &varCount, const char **pszName, const char **pszType ) { \
			varOffset = (unsigned int)(size_t)&GetNullPointer()->varname; \
			varSize = sizeof( vartype ); \
			varCount = 1; \
			*pszName = #varname; *pszType = #vartype; }

#define CALLBACK_ARRAY( varidx, vartype, varname, varcount ) \
	public: vartype varname [ varcount ]; \
	static void GetMemberVar_##varidx( unsigned int &varOffset, unsigned int &varSize, uint32 &varCount, const char **pszName, const char **pszType ) { \
	varOffset = (unsigned int)(size_t)&GetNullPointer()->varname[0]; \
	varSize = sizeof( vartype ); \
	varCount = varcount; \
	*pszName = #varname; *pszType = #vartype; }


#define END_CALLBACK_INTERNAL_BEGIN( callbackname, numvars )  }; \
class C##callbackname : public CSteamCallback { \
public: callbackname##_t m_Data; \
	C##callbackname () { memset( &m_Data, 0, sizeof(m_Data) ); } \
	virtual const char *GetCallbackName() const { return #callbackname; } \
	virtual uint32  GetCallbackID() const { return callbackname##_t::k_iCallback; } \
	virtual uint32  GetFixedSize() const { return sizeof( m_Data ); } \
	virtual uint8  *GetFixedData() const { return (uint8*)&m_Data; } \
	virtual uint32  GetNumMemberVariables() const { return numvars; } \
	virtual bool    GetMemberVariable( uint32 index, uint32 &varOffset, uint32 &varSize,  uint32 &varCount, const char **pszName, const char **pszType ) const { \
	switch ( index ) { default : return false;


#define END_CALLBACK_INTERNAL_SWITCH( varidx ) case varidx : m_Data.GetMemberVar_##varidx( varOffset, varSize, varCount, pszName, pszType ); return true;

#define END_CALLBACK_INTERNAL_END() }; }; };

#define END_DEFINE_CALLBACK_0( callbackname )  }; \
class C##callbackname : public CSteamCallback { \
public: callbackname##_t m_Data; \
	virtual const char *GetCallbackName() const { return #callbackname; } \
	virtual uint32  GetCallbackID() const { return callbackname##_t::k_iCallback; } \
	virtual uint32  GetFixedSize() const { return sizeof( m_Data ); } \
	virtual uint8  *GetFixedData() const { return (uint8*)&m_Data; } \
	virtual uint32  GetNumMemberVariables() const { return 0; } \
	virtual bool    GetMemberVariable( uint32 index, uint32 &varOffset, uint32 &varSize,  uint32 &varCount, const char **pszName, const char **pszType ) const { return false; } \
	}; \
	

#define END_DEFINE_CALLBACK_1( callbackname ) \
	END_CALLBACK_INTERNAL_BEGIN( callbackname, 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_2( callbackname ) \
	END_CALLBACK_INTERNAL_BEGIN( callbackname, 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_3( callbackname ) \
	END_CALLBACK_INTERNAL_BEGIN( callbackname, 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_4( callbackname ) \
	END_CALLBACK_INTERNAL_BEGIN( callbackname, 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_END()


#define END_DEFINE_CALLBACK_6( callbackname ) \
	END_CALLBACK_INTERNAL_BEGIN( callbackname, 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_END()

#endif // ISTEAMCLIENT_H
