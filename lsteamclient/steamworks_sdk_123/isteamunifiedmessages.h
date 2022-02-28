//====== Copyright � 1996-2007, Valve Corporation, All rights reserved. =======
//
// Purpose: Interface to unified messages client
//
//		You should not need to use this interface except if your product is using a language other than C++.
//		Contact your Steam Tech contact for more details.
//
//=============================================================================

#ifndef ISTEAMUNIFIEDMESSAGES_H
#define ISTEAMUNIFIEDMESSAGES_H
#ifdef _WIN32
#pragma once
#endif

typedef uint64 ClientUnifiedMessageHandle;

class ISteamUnifiedMessages
{
public:
	static const ClientUnifiedMessageHandle k_InvalidUnifiedMessageHandle = 0;

	// Sends a service method (in binary serialized form) using the Steam Client.
	// Returns a unified message handle (k_InvalidUnifiedMessageHandle if could not send the message).
	virtual ClientUnifiedMessageHandle SendMethod( const char *pchServiceMethod, const void *pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext ) = 0;

	// Gets the size of the response and the EResult. Returns false if the response is not ready yet.
	virtual bool GetMethodResponseInfo( ClientUnifiedMessageHandle hHandle, uint32 *punResponseSize, EResult *peResult ) = 0;

	// Gets a response in binary serialized form (and optionally release the corresponding allocated memory).
	virtual bool GetMethodResponseData( ClientUnifiedMessageHandle hHandle, void *pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease ) = 0;

	// Releases the message and its corresponding allocated memory.
	virtual bool ReleaseMethod( ClientUnifiedMessageHandle hHandle ) = 0;

	// Sends a service notification (in binary serialized form) using the Steam Client.
	// Returns true if the notification was sent successfully.
	virtual bool SendNotification( const char *pchServiceNotification, const void *pNotificationBuffer, uint32 unNotificationBufferSize ) = 0;
};

#define STEAMUNIFIEDMESSAGES_INTERFACE_VERSION "STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 

struct SteamUnifiedMessagesSendMethodResult_t
{
	enum { k_iCallback = k_iClientUnifiedMessagesCallbacks + 1 };
	ClientUnifiedMessageHandle m_hHandle;	// The handle returned by SendMethod().
	uint64 m_unContext;						// Context provided when calling SendMethod().
	EResult m_eResult;						// The result of the method call.
	uint32 m_unResponseSize;				// The size of the response.
};

#pragma pack( pop )

#endif // ISTEAMUNIFIEDMESSAGES_H
