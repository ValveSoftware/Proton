//====== Copyright Valve Corporation, All rights reserved. ====================
//
// Backend functions to generate authorization tickets for steam datagram
//
//=============================================================================

#ifndef STEAMDATAGRAM_TICKETGEN_H
#define STEAMDATAGRAM_TICKETGEN_H
#ifdef _WIN32
#pragma once
#endif

// Import some common stuff that is useful by both the client
// and the backend ticket-generating authority.
#include "steamdatagram_tickets.h"

#if defined( STEAMDATAGRAM_TICKETGEN_FOREXPORT )
	#define STEAMDATAGRAM_TICKET_INTERFACE DLL_EXPORT
#elif defined( STEAMNETWORKINGSOCKETS_STATIC_LINK )
	#define STEAMDATAGRAM_TICKET_INTERFACE extern "C"
#else
	#define STEAMDATAGRAM_TICKET_INTERFACE DLL_IMPORT
#endif

struct SteamDatagramSignedTicketBlob
{
	int m_sz;
	uint8 m_blob[ k_cbSteamDatagramMaxSerializedTicket ];
};

/// Initialize ticket generation with an Ed25519 private key.
/// See: https://ed25519.cr.yp.to/
///
/// Input buffer will be securely wiped.
///
/// You can generate an Ed25519 key using OpenSSH: ssh-keygen -t ed25519
/// Or with our cert tool: steamnetworkingsockets_certtool gen_keypair
///
/// The private key should be a PEM-like block of text
/// ("-----BEGIN OPENSSH PRIVATE KEY-----").
/// Private keys encrypted with a password are not supported.
///
/// In order for signatures using this key to be accepted by the relay network,
/// you need to send your public key to Valve.  This key should be on a single line
/// of text that begins with "ssh-ed25519".  (The format used in the .ssh/authorized_keys
/// file.)
STEAMDATAGRAM_TICKET_INTERFACE bool SteamDatagram_InitTicketGenerator_Ed25519( void *pvPrivateKey, size_t cbPrivateKey );

/// Serialize the specified auth ticket and attach a signature.
/// Returns false if you did something stupid like forgot to load a key.
/// Will also fail if your ticket is too big.  (Probably because you
/// added too many extra fields.)
///
/// The resulting blob should be sent to the client, who will put it in
/// their ticket cache using ISteamNetworkingSockets::ReceivedRelayAuthTicket
STEAMDATAGRAM_TICKET_INTERFACE bool SteamDatagram_SerializeAndSignTicket( const SteamDatagramRelayAuthTicket &ticket, SteamDatagramSignedTicketBlob &outBlob, SteamNetworkingErrMsg &errMsg );

//
// Some ping-related tools that don't have anything to do with tickets.
// But it's something that a backend might find useful, so we're putting it in this library for now.
//

/// Parse location string.  Returns true on success
STEAMDATAGRAM_TICKET_INTERFACE bool SteamDatagram_ParsePingLocation( const char *pszString, SteamNetworkPingLocation_t &outLocation );

/// Estimate ping time between two locations.
STEAMDATAGRAM_TICKET_INTERFACE int SteamDatagram_EstimatePingBetweenTwoLocations( const SteamNetworkPingLocation_t &location1, const SteamNetworkPingLocation_t &location2 );

#endif // STEAMDATAGRAM_TICKETGEN_H
