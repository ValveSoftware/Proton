//====== Copyright Valve Corporation, All rights reserved. ====================
//
// Purpose: misc networking utilities
//
//=============================================================================

#ifndef ISTEAMNETWORKINGUTILS
#define ISTEAMNETWORKINGUTILS
#ifdef _WIN32
#pragma once
#endif

#include <stdint.h>

#include "steamnetworkingtypes.h"
struct SteamDatagramRelayAuthTicket;

//-----------------------------------------------------------------------------
/// Misc networking utilities for checking the local networking environment
/// and estimating pings.
class ISteamNetworkingUtils
{
public:
#ifdef STEAMNETWORKINGSOCKETS_ENABLE_SDR

	//
	// Initialization
	//

	/// If you know that you are going to be using the relay network, call
	/// this to initialize the relay network or check if that initialization
	/// has completed.  If you do not call this, the initialization will
	/// happen the first time you use a feature that requires access to the
	/// relay network, and that use will be delayed.
	///
	/// Returns true if initialization has completed successfully.
	/// (It will probably return false on the first call.)
	///
	/// Typically initialization completes in a few seconds.
	///
	/// Note: dedicated servers hosted with Valve do *not* need to call
	/// this, since they do not make routing decisions.  However, if the
	/// dedicated server will be using P2P functionality, it will act as
	/// a "client" and this should be called.
	inline bool InitializeRelayNetworkAccess();

	//
	// "Ping location" functions
	//
	// We use the ping times to the valve relays deployed worldwide to
	// generate a "marker" that describes the location of an Internet host.
	// Given two such markers, we can estimate the network latency between
	// two hosts, without sending any packets.  The estimate is based on the
	// optimal route that is found through the Valve network.  If you are
	// using the Valve network to carry the traffic, then this is precisely
	// the ping you want.  If you are not, then the ping time will probably
	// still be a reasonable estimate.
	//
	// This is extremely useful to select peers for matchmaking!
	//
	// The markers can also be converted to a string, so they can be transmitted.
	// We have a separate library you can use on your backend to manipulate
	// these objects.  (See steamdatagram_ticketgen.h)

	/// Return location info for the current host.  Returns the approximate
	/// age of the data, in seconds, or -1 if no data is available.
	///
	/// It takes a few seconds to initialize access to the relay network.  If
	/// you call this very soon after calling InitializeRelayNetworkAccess,
	/// the data may not be available yet.
	///
	/// This always return the most up-to-date information we have available
	/// right now, even if we are in the middle of re-calculating ping times.
	virtual float GetLocalPingLocation( SteamNetworkPingLocation_t *result ) = 0;

	/// Estimate the round-trip latency between two arbitrary locations, in
	/// milliseconds.  This is a conservative estimate, based on routing through
	/// the relay network.  For most basic relayed connections, this ping time
	/// will be pretty accurate, since it will be based on the route likely to
	/// be actually used.
	///
	/// If a direct IP route is used (perhaps via NAT traversal), then the route
	/// will be different, and the ping time might be better.  Or it might actually
	/// be a bit worse!  Standard IP routing is frequently suboptimal!
	///
	/// But even in this case, the estimate obtained using this method is a
	/// reasonable upper bound on the ping time.  (Also it has the advantage
	/// of returning immediately and not sending any packets.)
	///
	/// In a few cases we might not able to estimate the route.  In this case
	/// a negative value is returned.  k_nSteamNetworkingPing_Failed means
	/// the reason was because of some networking difficulty.  (Failure to
	/// ping, etc)  k_nSteamNetworkingPing_Unknown is returned if we cannot
	/// currently answer the question for some other reason.
	///
	/// Do you need to be able to do this from a backend/matchmaking server?
	/// You are looking for the "ticketgen" library.
	virtual int EstimatePingTimeBetweenTwoLocations( const SteamNetworkPingLocation_t *location1, const SteamNetworkPingLocation_t *location2 ) = 0;

	/// Same as EstimatePingTime, but assumes that one location is the local host.
	/// This is a bit faster, especially if you need to calculate a bunch of
	/// these in a loop to find the fastest one.
	///
	/// In rare cases this might return a slightly different estimate than combining
	/// GetLocalPingLocation with EstimatePingTimeBetweenTwoLocations.  That's because
	/// this function uses a slightly more complete set of information about what
	/// route would be taken.
	virtual int EstimatePingTimeFromLocalHost( const SteamNetworkPingLocation_t *remoteLocation ) = 0;

	/// Convert a ping location into a text format suitable for sending over the wire.
	/// The format is a compact and human readable.  However, it is subject to change
	/// so please do not parse it yourself.  Your buffer must be at least
	/// k_cchMaxSteamNetworkingPingLocationString bytes.
	virtual void ConvertPingLocationToString( const SteamNetworkPingLocation_t *location, char *pszBuf, int cchBufSize ) = 0;

	/// Parse back SteamNetworkPingLocation_t string.  Returns false if we couldn't understand
	/// the string.
	virtual bool ParsePingLocationString( const char *pszString, SteamNetworkPingLocation_t *result ) = 0;

	//
	// Initialization / ping measurement status
	//

	/// Check if the ping data of sufficient recency is available, and if
	/// it's too old, start refreshing it.
	///
	/// Please only call this function when you *really* do need to force an
	/// immediate refresh of the data.  (For example, in response to a specific
	/// user input to refresh this information.)  Don't call it "just in case",
	/// before every connection, etc.  That will cause extra traffic to be sent
	/// for no benefit. The library will automatically refresh the information
	/// as needed.
	///
	/// Returns true if sufficiently recent data is already available.
	///
	/// Returns false if sufficiently recent data is not available.  In this
	/// case, ping measurement is initiated, if it is not already active.
	/// (You cannot restart a measurement already in progress.)
	virtual bool CheckPingDataUpToDate( float flMaxAgeSeconds ) = 0;

	/// Return true if we are taking ping measurements to update our ping
	/// location or select optimal routing.  Ping measurement typically takes
	/// a few seconds, perhaps up to 10 seconds.
	virtual bool IsPingMeasurementInProgress() = 0;

	//
	// List of Valve data centers, and ping times to them.  This might
	// be useful to you if you are use our hosting, or just need to measure
	// latency to a cloud data center where we are running relays.
	//

	/// Fetch ping time of best available relayed route from this host to
	/// the specified data center.
	virtual int GetPingToDataCenter( SteamNetworkingPOPID popID, SteamNetworkingPOPID *pViaRelayPoP ) = 0;

	/// Get *direct* ping time to the relays at the data center.
	virtual int GetDirectPingToPOP( SteamNetworkingPOPID popID ) = 0;

	/// Get number of network points of presence in the config
	virtual int GetPOPCount() = 0;

	/// Get list of all POP IDs.  Returns the number of entries that were filled into
	/// your list.
	virtual int GetPOPList( SteamNetworkingPOPID *list, int nListSz ) = 0;
#endif // #ifdef STEAMNETWORKINGSOCKETS_ENABLE_SDR

	//
	// Misc
	//

	/// Fetch current timestamp.  This timer has the following properties:
	///
	/// - Monotonicity is guaranteed.
	/// - The initial value will be at least 24*3600*30*1e6, i.e. about
	///   30 days worth of microseconds.  In this way, the timestamp value of
	///   0 will always be at least "30 days ago".  Also, negative numbers
	///   will never be returned.
	/// - Wraparound / overflow is not a practical concern.
	///
	/// If you are running under the debugger and stop the process, the clock
	/// might not advance the full wall clock time that has elapsed between
	/// calls.  If the process is not blocked from normal operation, the
	/// timestamp values will track wall clock time, even if you don't call
	/// the function frequently.
	///
	/// The value is only meaningful for this run of the process.  Don't compare
	/// it to values obtained on another computer, or other runs of the same process.
	virtual SteamNetworkingMicroseconds GetLocalTimestamp() = 0;

	/// Set a function to receive network-related information that is useful for debugging.
	/// This can be very useful during development, but it can also be useful for troubleshooting
	/// problems with tech savvy end users.  If you have a console or other log that customers
	/// can examine, these log messages can often be helpful to troubleshoot network issues.
	/// (Especially any warning/error messages.)
	///
	/// The detail level indicates what message to invoke your callback on.  Lower numeric
	/// value means more important, and the value you pass is the lowest priority (highest
	/// numeric value) you wish to receive callbacks for.
	///
	/// Except when debugging, you should only use k_ESteamNetworkingSocketsDebugOutputType_Msg
	/// or k_ESteamNetworkingSocketsDebugOutputType_Warning.  For best performance, do NOT
	/// request a high detail level and then filter out messages in your callback.  Instead,
	/// call function function to adjust the desired level of detail.
	///
	/// IMPORTANT: This may be called from a service thread, while we own a mutex, etc.
	/// Your output function must be threadsafe and fast!  Do not make any other
	/// Steamworks calls from within the handler.
	virtual void SetDebugOutputFunction( ESteamNetworkingSocketsDebugOutputType eDetailLevel, FSteamNetworkingSocketsDebugOutput pfnFunc ) = 0;

	//
	// Set and get configuration values, see ESteamNetworkingConfigValue for individual descriptions.
	//

	// Shortcuts for common cases.  (Implemented as inline functions below)
	bool SetGlobalConfigValueInt32( ESteamNetworkingConfigValue eValue, int32 val );
	bool SetGlobalConfigValueFloat( ESteamNetworkingConfigValue eValue, float val );
	bool SetGlobalConfigValueString( ESteamNetworkingConfigValue eValue, const char *val );
	bool SetConnectionConfigValueInt32( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, int32 val );
	bool SetConnectionConfigValueFloat( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, float val );
	bool SetConnectionConfigValueString( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, const char *val );

	/// Set a configuration value.
	/// - eValue: which value is being set
	/// - eScope: Onto what type of object are you applying the setting?
	/// - scopeArg: Which object you want to change?  (Ignored for global scope).  E.g. connection handle, listen socket handle, interface pointer, etc.
	/// - eDataType: What type of data is in the buffer at pValue?  This must match the type of the variable exactly!
	/// - pArg: Value to set it to.  You can pass NULL to remove a non-global sett at this scope,
	///   causing the value for that object to use global defaults.  Or at global scope, passing NULL
	///   will reset any custom value and restore it to the system default.
	///   NOTE: When setting callback functions, do not pass the function pointer directly.
	///   Your argument should be a pointer to a function pointer.
	virtual bool SetConfigValue( ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
		ESteamNetworkingConfigDataType eDataType, const void *pArg ) = 0;

	/// Get a configuration value.
	/// - eValue: which value to fetch
	/// - eScopeType: query setting on what type of object
	/// - eScopeArg: the object to query the setting for
	/// - pOutDataType: If non-NULL, the data type of the value is returned.
	/// - pResult: Where to put the result.  Pass NULL to query the required buffer size.  (k_ESteamNetworkingGetConfigValue_BufferTooSmall will be returned.)
	/// - cbResult: IN: the size of your buffer.  OUT: the number of bytes filled in or required.
	virtual ESteamNetworkingGetConfigValueResult GetConfigValue( ESteamNetworkingConfigValue eValue, ESteamNetworkingConfigScope eScopeType, intptr_t scopeObj,
		ESteamNetworkingConfigDataType *pOutDataType, void *pResult, size_t *cbResult ) = 0;

	/// Returns info about a configuration value.  Returns false if the value does not exist.
	/// pOutNextValue can be used to iterate through all of the known configuration values.
	/// (Use GetFirstConfigValue() to begin the iteration, will be k_ESteamNetworkingConfig_Invalid on the last value)
	/// Any of the output parameters can be NULL if you do not need that information.
	virtual bool GetConfigValueInfo( ESteamNetworkingConfigValue eValue, const char **pOutName, ESteamNetworkingConfigDataType *pOutDataType, ESteamNetworkingConfigScope *pOutScope, ESteamNetworkingConfigValue *pOutNextValue ) = 0;

	/// Return the lowest numbered configuration value available in the current environment.
	virtual ESteamNetworkingConfigValue GetFirstConfigValue() = 0;

	// String conversions.  You'll usually access these using the respective
	// inline methods.
	virtual void SteamNetworkingIPAddr_ToString( const SteamNetworkingIPAddr *addr, char *buf, size_t cbBuf, bool bWithPort ) = 0;
	virtual bool SteamNetworkingIPAddr_ParseString( SteamNetworkingIPAddr *pAddr, const char *pszStr ) = 0;
	virtual void SteamNetworkingIdentity_ToString( const SteamNetworkingIdentity *identity, char *buf, size_t cbBuf ) = 0;
	virtual bool SteamNetworkingIdentity_ParseString( SteamNetworkingIdentity *pIdentity, const char *pszStr ) = 0;

protected:
	~ISteamNetworkingUtils(); // Silence some warnings
};
#define STEAMNETWORKINGUTILS_INTERFACE_VERSION "SteamNetworkingUtils001"

// Global accessor.
#ifdef STEAMNETWORKINGSOCKETS_STANDALONELIB

	// Standalone lib
	STEAMNETWORKINGSOCKETS_INTERFACE ISteamNetworkingUtils *SteamNetworkingUtils_Lib();
	inline ISteamNetworkingUtils *SteamNetworkingUtils() { return SteamNetworkingUtils_Lib(); }

#else

	// Steamworks SDK
	inline ISteamNetworkingUtils *SteamNetworkingUtils();
	STEAM_DEFINE_INTERFACE_ACCESSOR( ISteamNetworkingUtils *, SteamNetworkingUtils, SteamInternal_FindOrCreateUserInterface( 0, STEAMNETWORKINGUTILS_INTERFACE_VERSION ) );
#endif

///////////////////////////////////////////////////////////////////////////////
//
// Internal stuff

#ifdef STEAMNETWORKINGSOCKETS_ENABLE_SDR
inline bool ISteamNetworkingUtils::InitializeRelayNetworkAccess() { return CheckPingDataUpToDate( 1e10f ); }
#endif

inline bool ISteamNetworkingUtils::SetGlobalConfigValueInt32( ESteamNetworkingConfigValue eValue, int32 val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Global, 0, k_ESteamNetworkingConfig_Int32, &val ); }
inline bool ISteamNetworkingUtils::SetGlobalConfigValueFloat( ESteamNetworkingConfigValue eValue, float val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Global, 0, k_ESteamNetworkingConfig_Float, &val ); }
inline bool ISteamNetworkingUtils::SetGlobalConfigValueString( ESteamNetworkingConfigValue eValue, const char *val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Global, 0, k_ESteamNetworkingConfig_String, val ); }
inline bool ISteamNetworkingUtils::SetConnectionConfigValueInt32( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, int32 val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Connection, hConn, k_ESteamNetworkingConfig_Int32, &val ); }
inline bool ISteamNetworkingUtils::SetConnectionConfigValueFloat( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, float val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Connection, hConn, k_ESteamNetworkingConfig_Float, &val ); }
inline bool ISteamNetworkingUtils::SetConnectionConfigValueString( HSteamNetConnection hConn, ESteamNetworkingConfigValue eValue, const char *val ) { return SetConfigValue( eValue, k_ESteamNetworkingConfig_Connection, hConn, k_ESteamNetworkingConfig_String, val ); }

#if !defined( STEAMNETWORKINGSOCKETS_STATIC_LINK ) && defined( STEAMNETWORKINGSOCKETS_STEAM )
/*
inline void SteamNetworkingIPAddr::ToString( char *buf, size_t cbBuf, bool bWithPort ) const { SteamNetworkingUtils()->SteamNetworkingIPAddr_ToString( *this, buf, cbBuf, bWithPort ); }
inline bool SteamNetworkingIPAddr::ParseString( const char *pszStr ) { return SteamNetworkingUtils()->SteamNetworkingIPAddr_ParseString( this, pszStr ); }
inline void SteamNetworkingIdentity::ToString( char *buf, size_t cbBuf ) const { SteamNetworkingUtils()->SteamNetworkingIdentity_ToString( *this, buf, cbBuf ); }
inline bool SteamNetworkingIdentity::ParseString( const char *pszStr ) { return SteamNetworkingUtils()->SteamNetworkingIdentity_ParseString( this, pszStr ); }
*/
#endif

#endif // ISTEAMNETWORKINGUTILS
