//====== Copyright Valve Corporation, All rights reserved. ====================
//
// Types and utilities for handling steam datagram tickets.  These are
// useful for both the client and the backend ticket generating authority.
//
//=============================================================================

#ifndef STEAMDATAGRAM_TICKETS_H
#define STEAMDATAGRAM_TICKETS_H
#ifdef _WIN32
#pragma once
#endif

#ifndef assert
	#include <assert.h>
#endif

#include <string.h>
#include "steamnetworkingtypes.h"

#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error "Must define VALVE_CALLBACK_PACK_SMALL or VALVE_CALLBACK_PACK_LARGE"
#endif

/// Max length of serialized auth ticket.  This is important so that we
/// can ensure that we always fit into a single UDP datagram (along with
/// other certs and signatures) and keep the implementation simple.
const size_t k_cbSteamDatagramMaxSerializedTicket = 512;

/// Network-routable identifier for a service.  This is an intentionally
/// opaque byte blob.  The relays know how to use this to forward it on
/// to the intended destination, but otherwise clients really should not
/// need to know what's inside.  (Indeed, we don't really want them to
/// know, as it could reveal information useful to an attacker.)
struct SteamDatagramHostedAddress
{

	// Size of data blob.
	int m_cbSize;

	// Opaque data
	char m_data[ 128 ];

	// Reset to empty state
	void Clear() { memset( this, 0, sizeof(*this) ); }

	// Parse the data center out of the blob.
	SteamNetworkingPOPID GetPopID() const { return CalculateSteamNetworkingPOPIDFromString( m_data ); }

	/// Set a dummy routing blob with a hardcoded IP:port.  You should only use
	/// this in a dev environment, since the address is in plaintext!
	/// In production this information should come from the server,
	/// using ISteamNetworkingSockets::GetHostedDedicatedServerAddress
	void SetDevAddress( uint32 nIP, uint16 nPort, SteamNetworkingPOPID popid = 0 )
	{
		GetSteamNetworkingLocationPOPStringFromID( popid, m_data );
		m_cbSize = 4;
		m_data[m_cbSize++] = 1;
		m_data[m_cbSize++] = 1;
		m_data[m_cbSize++] = char(nPort);
		m_data[m_cbSize++] = char(nPort>>8);
		m_data[m_cbSize++] = char(nIP);
		m_data[m_cbSize++] = char(nIP>>8);
		m_data[m_cbSize++] = char(nIP>>16);
		m_data[m_cbSize++] = char(nIP>>24);
	}

	/// Convert to/from std::string (or anything that acts like it).
	/// Useful for interfacing with google protobuf.  It's a template
	/// mainly so that we don't have to include <string> in the header.
	/// Note: by "string", we don't mean that it's text.  It's a binary
	/// blob, and it might have zeros in it.  (std::string can handle that.)
	template <typename T> bool SetFromStdString( const T &str )
	{
		if ( str.length() >= sizeof(m_data) )
		{
			m_cbSize = 0;
			return false;
		}
		m_cbSize = (int)str.length();
		memcpy( m_data, str.c_str(), m_cbSize );
		return true;
	}
	template <typename T> void GetAsStdString( T *str ) const
	{
		str->assign( m_data, m_cbSize );
	}
};

/// Ticket used to gain access to the relay network.
struct SteamDatagramRelayAuthTicket
{
	SteamDatagramRelayAuthTicket() { Clear(); }

	/// Reset all fields
	void Clear() { memset( this, 0, sizeof(*this) ); m_nRestrictToVirtualPort = -1; }

	/// Identity of the gameserver we want to talk to.  This is required.
	SteamNetworkingIdentity m_identityGameserver;

	/// Identity of the person who was authorized.  This is required.
	SteamNetworkingIdentity m_identityAuthorizedClient;

	/// SteamID is authorized to send from a particular public IP.  If this
	/// is 0, then the sender is not restricted to a particular IP.
	///
	/// Recommend to leave this set to zero.
	uint32 m_unPublicIP;

	/// Time when the ticket expires.  Recommended: take the current
	/// time and add 6 hours, or maybe a bit longer if your gameplay
	/// sessions are longer.
	///
	/// NOTE: relays may reject tickets with expiry times excessively
	/// far in the future, so contact us if you wish to use an expiry
	/// longer than, say, 24 hours.
	RTime32 m_rtimeTicketExpiry;

	/// Routing information where the gameserver is listening for
	/// relayed traffic.  You should fill this in when generating
	/// a ticket.
	///
	/// When generating tickets on your backend:
	/// - In production: The gameserver knows the proper routing
	///   information, so you need to call
	///   ISteamNetworkingSockets::GetHostedDedicatedServerAddress
	///   and send the info to your backend.
	/// - In development, you will need to provide public IP
	///   of the server using SteamDatagramServiceNetID::SetDevAddress.
	///   Relays need to be able to send UDP
	///   packets to this server.  Since it's very likely that
	///   your server is behind a firewall/NAT, make sure that
	///   the address is the one that the outside world can use.
	///   The traffic from the relays will be "unsolicited", so
	///   stateful firewalls won't work -- you will probably have
	///   to set up an explicit port forward.
	/// On the client:
	/// - this field will always be blank.
	SteamDatagramHostedAddress m_routing;

	/// App ID this is for.  This is required, and should be the
	/// App ID the client is running.  (Even if your gameserver
	/// uses a different App ID.)
	uint32 m_nAppID;

	/// Restrict this ticket to be used for a particular virtual port?
	/// Set to -1 to allow any virtual port.
	///
	/// This is useful as a security measure, and also so the client will
	/// use the right ticket (which might have extra fields that are useful
	/// for proper analytics), if the client happens to have more than one
	/// appropriate ticket.
	///
	/// Note: if a client has more that one acceptable ticket, they will
	/// always use the one expiring the latest.
	int m_nRestrictToVirtualPort;

	//
	// Extra fields.
	//
	// These are collected for backend analytics.  For example, you might
	// send a MatchID so that all of the records for a particular match can
	// be located.  Or send a game mode field so that you can compare
	// the network characteristics of different game modes.
	//
	// (At the time of this writing we don't have a way to expose the data
	// we collect to partners, but we hope to in the future so that you can
	// get visibility into network conditions.)
	//

	struct ExtraField
	{
		enum EType
		{
			k_EType_String,
			k_EType_Int, // For most small integral values.  Uses google protobuf sint64, so it's small on the wire.  WARNING: In some places this value may be transmitted in JSON, in which case precision may be lost in backend analytics.  Don't use this for an "identifier", use it for a scalar quantity.
			k_EType_Fixed64, // 64 arbitrary bits.  This value is treated as an "identifier".  In places where JSON format is used, it will be serialized as a string.  No aggregation / analytics can be performed on this value.
		};
		int /* EType */ m_eType;
		char m_szName[28];

		union {
			char m_szStringValue[128];
			int64 m_nIntValue;
			uint64 m_nFixed64Value;
		};
	};
	enum { k_nMaxExtraFields = 16 };
	int m_nExtraFields;
	ExtraField m_vecExtraFields[ k_nMaxExtraFields ];

	/// Helper to add an extra field in a single call
	void AddExtraField_Int( const char *pszName, int64 val )
	{
		ExtraField *p = AddExtraField( pszName, ExtraField::k_EType_Int );
		if ( p )
			p->m_nIntValue = val;
	}
	void AddExtraField_Fixed64( const char *pszName, uint64 val )
	{
		ExtraField *p = AddExtraField( pszName, ExtraField::k_EType_Fixed64 );
		if ( p )
			p->m_nFixed64Value = val;
	}
	void AddExtraField_String( const char *pszName, const char *val )
	{
		ExtraField *p = AddExtraField( pszName, ExtraField::k_EType_String );
		if ( p )
		{
			size_t l = strlen( val );
			if ( l > sizeof(p->m_szStringValue)-1 )
				l = sizeof(p->m_szStringValue)-1;
			memcpy( p->m_szStringValue, val, l );
			p->m_szStringValue[l] = '\0';
		}
	}

private:
	ExtraField *AddExtraField( const char *pszName, ExtraField::EType eType )
	{
		if ( m_nExtraFields >= k_nMaxExtraFields )
		{
			assert( false );
			return NULL;
		}
		ExtraField *p = &m_vecExtraFields[ m_nExtraFields++ ];
		p->m_eType = eType;

		size_t l = strlen( pszName );
		if ( l > sizeof(p->m_szName)-1 )
			l = sizeof(p->m_szName)-1;
		memcpy( p->m_szName, pszName, l );
		p->m_szName[l] = '\0';
		return p;
	}
};

#pragma pack(pop)

/// Max size of user data blob
const size_t k_cbMaxSteamDatagramGameCoordinatorServerLoginAppData = 2048;

/// Max size of serialized data blob
const size_t k_cbMaxSteamDatagramGameCoordinatorServerLoginSerialized = 4096;

/// Structure that describes a gameserver attempting to authenticate
/// with your central server allocator / matchmaking service ("game coordinator").
/// This is useful because the game coordinator needs to know:
///
/// - What data center is the gameserver running in?
/// - The routing blob of the gameserver
/// - Is the gameserver actually trusted?
///
/// Using this structure, you can securely communicate this information
/// to your server, and you can do this WITHOUT maintaining any
/// whitelists or tables of IP addresses.
///
/// See ISteamNetworkingSockets::GetGameCoordinatorServerLogin
struct SteamDatagramGameCoordinatorServerLogin
{
	/// Server's identity
	SteamNetworkingIdentity m_identity;

	/// Routing info.  Note that this includes the POPID
	SteamDatagramHostedAddress m_routing;

	/// AppID that the server thinks it is running
	AppId_t m_nAppID;

	/// Unix timestamp when this was generated
	RTime32 m_rtime;

	/// Size of application data
	int m_cbAppData;

	/// Application data.  This is any additional information
	/// that you need to identify the server not contained above.
	/// (E.g. perhaps a public IP as seen by the coordinator service.)
	char m_appData[ k_cbMaxSteamDatagramGameCoordinatorServerLoginAppData ];
};

#endif // STEAMDATAGRAM_TICKETS_H
