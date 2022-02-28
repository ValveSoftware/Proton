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

// Define compile time assert macros to let us validate the structure sizes.
#define VALVE_COMPILE_TIME_ASSERT( pred ) typedef char compile_time_assert_type[(pred) ? 1 : -1];

#ifndef REFERENCE
#define REFERENCE(arg) ((void)arg)
#endif

#if defined(__linux__) || defined(__APPLE__) 
// The 32-bit version of gcc has the alignment requirement for uint64 and double set to
// 4 meaning that even with #pragma pack(8) these types will only be four-byte aligned.
// The 64-bit version of gcc has the alignment requirement for these types set to
// 8 meaning that unless we use #pragma pack(4) our structures will get bigger.
// The 64-bit structure packing has to match the 32-bit structure packing for each platform.
#define VALVE_CALLBACK_PACK_SMALL
#else
#define VALVE_CALLBACK_PACK_LARGE
#endif

#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error ???
#endif 

typedef struct ValvePackingSentinel_t
{
    uint32 m_u32;
    uint64 m_u64;
    uint16 m_u16;
    double m_d;
} ValvePackingSentinel_t;

#pragma pack( pop )


#if defined(VALVE_CALLBACK_PACK_SMALL)
VALVE_COMPILE_TIME_ASSERT( sizeof(ValvePackingSentinel_t) == 24 )
#elif defined(VALVE_CALLBACK_PACK_LARGE)
VALVE_COMPILE_TIME_ASSERT( sizeof(ValvePackingSentinel_t) == 32 )
#else
#error ???
#endif


// handle to a communication pipe to the Steam client
typedef int32 HSteamPipe;
// handle to single instance of a steam user
typedef int32 HSteamUser;
// function prototype
#if defined( POSIX )
#define __cdecl
#endif
extern "C" typedef void (__cdecl *SteamAPIWarningMessageHook_t)(int, const char *);
extern "C" typedef void( *SteamAPI_PostAPIResultInProcess_t )(SteamAPICall_t callHandle, void *, uint32 unCallbackSize, int iCallbackNum);
extern "C" typedef uint32 ( *SteamAPI_CheckCallbackRegistered_t )( int iCallbackNum );
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
class ISteamMusic;
class ISteamMusicRemote;
class ISteamGameServerStats;
class ISteamPS3OverlayRender;
class ISteamHTTP;
class ISteamUnifiedMessages;
class ISteamController;
class ISteamUGC;
class ISteamAppList;
class ISteamHTMLSurface;
class ISteamInventory;
class ISteamVideo;

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

	// Exposes the ISteamUnifiedMessages interface
	virtual ISteamUnifiedMessages *GetISteamUnifiedMessages( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// Exposes the ISteamController interface
	virtual ISteamController *GetISteamController( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// Exposes the ISteamUGC interface
	virtual ISteamUGC *GetISteamUGC( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// returns app list interface, only available on specially registered apps
	virtual ISteamAppList *GetISteamAppList( HSteamUser hSteamUser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;
	
	// Music Player
	virtual ISteamMusic *GetISteamMusic( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// Music Player Remote
	virtual ISteamMusicRemote *GetISteamMusicRemote(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) = 0;

	// html page display
	virtual ISteamHTMLSurface *GetISteamHTMLSurface(HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion) = 0;

	// Helper functions for internal Steam usage
	virtual void Set_SteamAPI_CPostAPIResultInProcess( SteamAPI_PostAPIResultInProcess_t func ) = 0;
	virtual void Remove_SteamAPI_CPostAPIResultInProcess( SteamAPI_PostAPIResultInProcess_t func ) = 0;
	virtual void Set_SteamAPI_CCheckCallbackRegisteredInProcess( SteamAPI_CheckCallbackRegistered_t func ) = 0;

	// inventory
	virtual ISteamInventory *GetISteamInventory( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;

	// Video
	virtual ISteamVideo *GetISteamVideo( HSteamUser hSteamuser, HSteamPipe hSteamPipe, const char *pchVersion ) = 0;
};


#define STEAMCLIENT_INTERFACE_VERSION		"SteamClient017"

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
enum { k_iClientDepotBuilderCallbacks = 1400 };
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
enum { k_iClientUnifiedMessagesCallbacks = 2500 };
enum { k_iSteamStreamLauncherCallbacks = 2600 };
enum { k_iClientControllerCallbacks = 2700 };
enum { k_iSteamControllerCallbacks = 2800 };
enum { k_iClientParentalSettingsCallbacks = 2900 };
enum { k_iClientDeviceAuthCallbacks = 3000 };
enum { k_iClientNetworkDeviceManagerCallbacks = 3100 };
enum { k_iClientMusicCallbacks = 3200 };
enum { k_iClientRemoteClientManagerCallbacks = 3300 };
enum { k_iClientUGCCallbacks = 3400 };
enum { k_iSteamStreamClientCallbacks = 3500 };
enum { k_IClientProductBuilderCallbacks = 3600 };
enum { k_iClientShortcutsCallbacks = 3700 };
enum { k_iClientRemoteControlManagerCallbacks = 3800 };
enum { k_iSteamAppListCallbacks = 3900 };
enum { k_iSteamMusicCallbacks = 4000 };
enum { k_iSteamMusicRemoteCallbacks = 4100 };
enum { k_iClientVRCallbacks = 4200 };
enum { k_iClientReservedCallbacks = 4300 };
enum { k_iSteamReservedCallbacks = 4400 };
enum { k_iSteamHTMLSurfaceCallbacks = 4500 };
enum { k_iClientVideoCallbacks = 4600 };
enum { k_iClientInventoryCallbacks = 4700 };

//-----------------------------------------------------------------------------
// The CALLBACK macros are for client side callback logging enabled with
// log_callback <first callnbackID> <last callbackID>
// Do not change any of these. 
//-----------------------------------------------------------------------------

struct SteamCallback_t
{
public:
	SteamCallback_t() {}
};

#define DEFINE_CALLBACK( callbackname, callbackid ) \
struct callbackname : SteamCallback_t { \
	enum { k_iCallback = callbackid }; \
	static callbackname *GetNullPointer() { return 0; } \
	static const char *GetCallbackName() { return #callbackname; } \
	static uint32  GetCallbackID() { return callbackname::k_iCallback; }

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


#define END_CALLBACK_INTERNAL_BEGIN( numvars )  \
	static uint32  GetNumMemberVariables() { return numvars; } \
	static bool    GetMemberVariable( uint32 index, uint32 &varOffset, uint32 &varSize,  uint32 &varCount, const char **pszName, const char **pszType ) { \
	switch ( index ) { default : return false;


#define END_CALLBACK_INTERNAL_SWITCH( varidx ) case varidx : GetMemberVar_##varidx( varOffset, varSize, varCount, pszName, pszType ); return true;

#define END_CALLBACK_INTERNAL_END() }; } };

#define END_DEFINE_CALLBACK_0() \
	static uint32  GetNumMemberVariables() { return 0; } \
	static bool    GetMemberVariable( uint32 index, uint32 &varOffset, uint32 &varSize,  uint32 &varCount, const char **pszName, const char **pszType ) { REFERENCE( pszType ); REFERENCE( pszName ); REFERENCE( varCount ); REFERENCE( varSize ); REFERENCE( varOffset ); REFERENCE( index ); return false; } \
	};
	

#define END_DEFINE_CALLBACK_1() \
	END_CALLBACK_INTERNAL_BEGIN( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_2() \
	END_CALLBACK_INTERNAL_BEGIN( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_3() \
	END_CALLBACK_INTERNAL_BEGIN( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_4() \
	END_CALLBACK_INTERNAL_BEGIN( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_5() \
	END_CALLBACK_INTERNAL_BEGIN( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_END()


#define END_DEFINE_CALLBACK_6() \
	END_CALLBACK_INTERNAL_BEGIN( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_7() \
	END_CALLBACK_INTERNAL_BEGIN( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_8() \
	END_CALLBACK_INTERNAL_BEGIN( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_9() \
	END_CALLBACK_INTERNAL_BEGIN( 9 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_10() \
	END_CALLBACK_INTERNAL_BEGIN( 10 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 9 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_11() \
	END_CALLBACK_INTERNAL_BEGIN( 11 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 9 ) \
	END_CALLBACK_INTERNAL_SWITCH( 10 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_12() \
	END_CALLBACK_INTERNAL_BEGIN( 12 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 9 ) \
	END_CALLBACK_INTERNAL_SWITCH( 10 ) \
	END_CALLBACK_INTERNAL_SWITCH( 11 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_13() \
	END_CALLBACK_INTERNAL_BEGIN( 13 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 9 ) \
	END_CALLBACK_INTERNAL_SWITCH( 10 ) \
	END_CALLBACK_INTERNAL_SWITCH( 11 ) \
	END_CALLBACK_INTERNAL_SWITCH( 12 ) \
	END_CALLBACK_INTERNAL_END()

#define END_DEFINE_CALLBACK_14() \
	END_CALLBACK_INTERNAL_BEGIN( 14 ) \
	END_CALLBACK_INTERNAL_SWITCH( 0 ) \
	END_CALLBACK_INTERNAL_SWITCH( 1 ) \
	END_CALLBACK_INTERNAL_SWITCH( 2 ) \
	END_CALLBACK_INTERNAL_SWITCH( 3 ) \
	END_CALLBACK_INTERNAL_SWITCH( 4 ) \
	END_CALLBACK_INTERNAL_SWITCH( 5 ) \
	END_CALLBACK_INTERNAL_SWITCH( 6 ) \
	END_CALLBACK_INTERNAL_SWITCH( 7 ) \
	END_CALLBACK_INTERNAL_SWITCH( 8 ) \
	END_CALLBACK_INTERNAL_SWITCH( 9 ) \
	END_CALLBACK_INTERNAL_SWITCH( 10 ) \
	END_CALLBACK_INTERNAL_SWITCH( 11 ) \
	END_CALLBACK_INTERNAL_SWITCH( 12 ) \
	END_CALLBACK_INTERNAL_SWITCH( 13 ) \
	END_CALLBACK_INTERNAL_END()

#endif // ISTEAMCLIENT_H
