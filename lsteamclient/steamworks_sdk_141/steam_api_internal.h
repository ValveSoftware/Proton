//====== Copyright 1996-2015, Valve Corporation, All rights reserved. =======
//
// Purpose: Internal private Steamworks API declarations and definitions
//
//=============================================================================

#ifndef STEAM_API_INTERNAL_H
#define STEAM_API_INTERNAL_H

S_API HSteamUser SteamAPI_GetHSteamUser();
S_API void * S_CALLTYPE SteamInternal_ContextInit( void *pContextInitData );
S_API void * S_CALLTYPE SteamInternal_CreateInterface( const char *ver );

#if !defined( STEAM_API_EXPORTS )

inline void S_CALLTYPE SteamInternal_OnContextInit( void* p )
{
	((CSteamAPIContext*)p)->Clear();
	if ( SteamAPI_GetHSteamPipe() )
		((CSteamAPIContext*)p)->Init();
}
inline CSteamAPIContext& SteamInternal_ModuleContext()
{
	// SteamInternal_ContextInit takes a base pointer for the equivalent of
	// struct { void (*pFn)(void* pCtx); uintp counter; CSteamAPIContext ctx; }
	// Do not change layout of 2 + sizeof... or add non-pointer aligned data!
	// NOTE: declaring "static CSteamAPIConext" creates a large function
	// which queries the initialization status of the object. We know that
	// it is pointer-aligned and fully memset with zeros, so just alias a
	// static buffer of the appropriate size and call it a CSteamAPIContext.
	static void* s_CallbackCounterAndContext[ 2 + sizeof(CSteamAPIContext)/sizeof(void*) ] = { (void*)&SteamInternal_OnContextInit, 0 };
	return *(CSteamAPIContext*)SteamInternal_ContextInit( s_CallbackCounterAndContext );
}

inline ISteamClient *SteamClient()							{ return SteamInternal_ModuleContext().SteamClient(); }
inline ISteamUser *SteamUser()								{ return SteamInternal_ModuleContext().SteamUser(); }
inline ISteamFriends *SteamFriends()						{ return SteamInternal_ModuleContext().SteamFriends(); }
inline ISteamUtils *SteamUtils()							{ return SteamInternal_ModuleContext().SteamUtils(); }
inline ISteamMatchmaking *SteamMatchmaking()				{ return SteamInternal_ModuleContext().SteamMatchmaking(); }
inline ISteamUserStats *SteamUserStats()					{ return SteamInternal_ModuleContext().SteamUserStats(); }
inline ISteamApps *SteamApps()								{ return SteamInternal_ModuleContext().SteamApps(); }
inline ISteamMatchmakingServers *SteamMatchmakingServers()	{ return SteamInternal_ModuleContext().SteamMatchmakingServers(); }
inline ISteamNetworking *SteamNetworking()					{ return SteamInternal_ModuleContext().SteamNetworking(); }
inline ISteamRemoteStorage *SteamRemoteStorage()			{ return SteamInternal_ModuleContext().SteamRemoteStorage(); }
inline ISteamScreenshots *SteamScreenshots()				{ return SteamInternal_ModuleContext().SteamScreenshots(); }
inline ISteamHTTP *SteamHTTP()								{ return SteamInternal_ModuleContext().SteamHTTP(); }
inline ISteamUnifiedMessages *SteamUnifiedMessages()		{ return SteamInternal_ModuleContext().SteamUnifiedMessages(); }
inline ISteamController *SteamController()					{ return SteamInternal_ModuleContext().SteamController(); }
inline ISteamUGC *SteamUGC()								{ return SteamInternal_ModuleContext().SteamUGC(); }
inline ISteamAppList *SteamAppList()						{ return SteamInternal_ModuleContext().SteamAppList(); }
inline ISteamMusic *SteamMusic()							{ return SteamInternal_ModuleContext().SteamMusic(); }
inline ISteamMusicRemote *SteamMusicRemote()				{ return SteamInternal_ModuleContext().SteamMusicRemote(); }
inline ISteamHTMLSurface *SteamHTMLSurface()				{ return SteamInternal_ModuleContext().SteamHTMLSurface(); }
inline ISteamInventory *SteamInventory()					{ return SteamInternal_ModuleContext().SteamInventory(); }
inline ISteamVideo *SteamVideo()							{ return SteamInternal_ModuleContext().SteamVideo(); }
inline ISteamParentalSettings *SteamParentalSettings()		{ return SteamInternal_ModuleContext().SteamParentalSettings(); }

#endif // !defined( STEAM_API_EXPORTS )


inline void CSteamAPIContext::Clear()
{
	m_pSteamClient = NULL;
	m_pSteamUser = NULL;
	m_pSteamFriends = NULL;
	m_pSteamUtils = NULL;
	m_pSteamMatchmaking = NULL;
	m_pSteamUserStats = NULL;
	m_pSteamApps = NULL;
	m_pSteamMatchmakingServers = NULL;
	m_pSteamNetworking = NULL;
	m_pSteamRemoteStorage = NULL;
	m_pSteamHTTP = NULL;
	m_pSteamScreenshots = NULL;
	m_pSteamMusic = NULL;
	m_pSteamUnifiedMessages = NULL;
	m_pController = NULL;
	m_pSteamUGC = NULL;
	m_pSteamAppList = NULL;
	m_pSteamMusic = NULL;
	m_pSteamMusicRemote = NULL;
	m_pSteamHTMLSurface = NULL;
	m_pSteamInventory = NULL;
	m_pSteamVideo = NULL;
	m_pSteamParentalSettings = NULL;
}


// This function must be declared inline in the header so the module using steam_api.dll gets the version names they want.
inline bool CSteamAPIContext::Init()
{
	HSteamUser hSteamUser = SteamAPI_GetHSteamUser();
	HSteamPipe hSteamPipe = SteamAPI_GetHSteamPipe();
	if ( !hSteamPipe )
		return false;

	m_pSteamClient = (ISteamClient*) SteamInternal_CreateInterface( STEAMCLIENT_INTERFACE_VERSION );
	if ( !m_pSteamClient )
		return false;
	
	m_pSteamUser = m_pSteamClient->GetISteamUser( hSteamUser, hSteamPipe, STEAMUSER_INTERFACE_VERSION );
	if ( !m_pSteamUser )
		return false;

	m_pSteamFriends = m_pSteamClient->GetISteamFriends( hSteamUser, hSteamPipe, STEAMFRIENDS_INTERFACE_VERSION );
	if ( !m_pSteamFriends )
		return false;

	m_pSteamUtils = m_pSteamClient->GetISteamUtils( hSteamPipe, STEAMUTILS_INTERFACE_VERSION );
	if ( !m_pSteamUtils )
		return false;

	m_pSteamMatchmaking = m_pSteamClient->GetISteamMatchmaking( hSteamUser, hSteamPipe, STEAMMATCHMAKING_INTERFACE_VERSION );
	if ( !m_pSteamMatchmaking )
		return false;

	m_pSteamMatchmakingServers = m_pSteamClient->GetISteamMatchmakingServers( hSteamUser, hSteamPipe, STEAMMATCHMAKINGSERVERS_INTERFACE_VERSION );
	if ( !m_pSteamMatchmakingServers )
		return false;

	m_pSteamUserStats = m_pSteamClient->GetISteamUserStats( hSteamUser, hSteamPipe, STEAMUSERSTATS_INTERFACE_VERSION );
	if ( !m_pSteamUserStats )
		return false;

	m_pSteamApps = m_pSteamClient->GetISteamApps( hSteamUser, hSteamPipe, STEAMAPPS_INTERFACE_VERSION );
	if ( !m_pSteamApps )
		return false;

	m_pSteamNetworking = m_pSteamClient->GetISteamNetworking( hSteamUser, hSteamPipe, STEAMNETWORKING_INTERFACE_VERSION );
	if ( !m_pSteamNetworking )
		return false;

	m_pSteamRemoteStorage = m_pSteamClient->GetISteamRemoteStorage( hSteamUser, hSteamPipe, STEAMREMOTESTORAGE_INTERFACE_VERSION );
	if ( !m_pSteamRemoteStorage )
		return false;

	m_pSteamScreenshots = m_pSteamClient->GetISteamScreenshots( hSteamUser, hSteamPipe, STEAMSCREENSHOTS_INTERFACE_VERSION );
	if ( !m_pSteamScreenshots )
		return false;

	m_pSteamHTTP = m_pSteamClient->GetISteamHTTP( hSteamUser, hSteamPipe, STEAMHTTP_INTERFACE_VERSION );
	if ( !m_pSteamHTTP )
		return false;

	m_pSteamUnifiedMessages = m_pSteamClient->GetISteamUnifiedMessages( hSteamUser, hSteamPipe, STEAMUNIFIEDMESSAGES_INTERFACE_VERSION );
	if ( !m_pSteamUnifiedMessages )
		return false;

	m_pController = m_pSteamClient->GetISteamController( hSteamUser, hSteamPipe, STEAMCONTROLLER_INTERFACE_VERSION );
	if ( !m_pController )
		return false;

	m_pSteamUGC = m_pSteamClient->GetISteamUGC( hSteamUser, hSteamPipe, STEAMUGC_INTERFACE_VERSION );
	if ( !m_pSteamUGC )
		return false;

	m_pSteamAppList = m_pSteamClient->GetISteamAppList( hSteamUser, hSteamPipe, STEAMAPPLIST_INTERFACE_VERSION );
	if ( !m_pSteamAppList )
		return false;

	m_pSteamMusic = m_pSteamClient->GetISteamMusic( hSteamUser, hSteamPipe, STEAMMUSIC_INTERFACE_VERSION );
	if ( !m_pSteamMusic )
		return false;

	m_pSteamMusicRemote = m_pSteamClient->GetISteamMusicRemote( hSteamUser, hSteamPipe, STEAMMUSICREMOTE_INTERFACE_VERSION );
	if ( !m_pSteamMusicRemote )
		return false;

	m_pSteamHTMLSurface = m_pSteamClient->GetISteamHTMLSurface( hSteamUser, hSteamPipe, STEAMHTMLSURFACE_INTERFACE_VERSION );
	if ( !m_pSteamHTMLSurface )
		return false;

	m_pSteamInventory = m_pSteamClient->GetISteamInventory( hSteamUser, hSteamPipe, STEAMINVENTORY_INTERFACE_VERSION );
	if ( !m_pSteamInventory )
		return false;

	m_pSteamVideo = m_pSteamClient->GetISteamVideo( hSteamUser, hSteamPipe, STEAMVIDEO_INTERFACE_VERSION );
	if ( !m_pSteamVideo )
		return false;

	m_pSteamParentalSettings = m_pSteamClient->GetISteamParentalSettings( hSteamUser, hSteamPipe, STEAMPARENTALSETTINGS_INTERFACE_VERSION );
	if ( !m_pSteamParentalSettings )
		return false;

	return true;
}


//-----------------------------------------------------------------------------
// The following macros are implementation details, not intended for public use
//-----------------------------------------------------------------------------
#define _STEAM_CALLBACK_AUTO_HOOK( thisclass, func, param )
#define _STEAM_CALLBACK_HELPER( _1, _2, SELECTED, ... )		_STEAM_CALLBACK_##SELECTED
#define _STEAM_CALLBACK_SELECT( X, Y )						_STEAM_CALLBACK_HELPER X Y
#define _STEAM_CALLBACK_3( extra_code, thisclass, func, param ) \
	struct CCallbackInternal_ ## func : private CCallbackImpl< sizeof( param ) > { \
		CCallbackInternal_ ## func () { extra_code SteamAPI_RegisterCallback( this, param::k_iCallback ); } \
		CCallbackInternal_ ## func ( const CCallbackInternal_ ## func & ) { extra_code SteamAPI_RegisterCallback( this, param::k_iCallback ); } \
		CCallbackInternal_ ## func & operator=( const CCallbackInternal_ ## func & ) { return *this; } \
		private: virtual void Run( void *pvParam ) { _STEAM_CALLBACK_AUTO_HOOK( thisclass, func, param ) \
			thisclass *pOuter = reinterpret_cast<thisclass*>( reinterpret_cast<char*>(this) - offsetof( thisclass, m_steamcallback_ ## func ) ); \
			pOuter->func( reinterpret_cast<param*>( pvParam ) ); \
		} \
	} m_steamcallback_ ## func ; void func( param *pParam )
#define _STEAM_CALLBACK_4( _, thisclass, func, param, var ) \
	CCallback< thisclass, param > var; void func( param *pParam )


//-----------------------------------------------------------------------------
// Purpose: maps a steam async call result to a class member function
//			template params: T = local class, P = parameter struct
//-----------------------------------------------------------------------------
template< class T, class P >
inline CCallResult<T, P>::CCallResult()
{
	m_hAPICall = k_uAPICallInvalid;
	m_pObj = NULL;
	m_Func = NULL;
	m_iCallback = P::k_iCallback;
}

template< class T, class P >
inline void CCallResult<T, P>::Set( SteamAPICall_t hAPICall, T *p, func_t func )
{
	if ( m_hAPICall )
		SteamAPI_UnregisterCallResult( this, m_hAPICall );

	m_hAPICall = hAPICall;
	m_pObj = p;
	m_Func = func;

	if ( hAPICall )
		SteamAPI_RegisterCallResult( this, hAPICall );
}

template< class T, class P >
inline bool CCallResult<T, P>::IsActive() const
{
	return (m_hAPICall != k_uAPICallInvalid);
}

template< class T, class P >
inline void CCallResult<T, P>::Cancel()
{
	if ( m_hAPICall != k_uAPICallInvalid )
	{
		SteamAPI_UnregisterCallResult( this, m_hAPICall );
		m_hAPICall = k_uAPICallInvalid;
	}

}

template< class T, class P >
inline CCallResult<T, P>::~CCallResult()
{
	Cancel();
}

template< class T, class P >
inline void CCallResult<T, P>::Run( void *pvParam )
{
	m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
	(m_pObj->*m_Func)((P *)pvParam, false);
}

template< class T, class P >
inline void CCallResult<T, P>::Run( void *pvParam, bool bIOFailure, SteamAPICall_t hSteamAPICall )
{
	if ( hSteamAPICall == m_hAPICall )
	{
		m_hAPICall = k_uAPICallInvalid; // caller unregisters for us
		(m_pObj->*m_Func)((P *)pvParam, bIOFailure);
	}
}


//-----------------------------------------------------------------------------
// Purpose: maps a steam callback to a class member function
//			template params: T = local class, P = parameter struct,
//			bGameserver = listen for gameserver callbacks instead of client callbacks
//-----------------------------------------------------------------------------
template< class T, class P, bool bGameserver >
inline CCallback< T, P, bGameserver >::CCallback( T *pObj, func_t func )
	: m_pObj( NULL ), m_Func( NULL )
{
	if ( bGameserver )
	{
		this->SetGameserverFlag();
	}
	Register( pObj, func );
}

template< class T, class P, bool bGameserver >
inline void CCallback< T, P, bGameserver >::Register( T *pObj, func_t func )
{
	if ( !pObj || !func )
		return;

	if ( this->m_nCallbackFlags & CCallbackBase::k_ECallbackFlagsRegistered )
		Unregister();

	m_pObj = pObj;
	m_Func = func;
	// SteamAPI_RegisterCallback sets k_ECallbackFlagsRegistered
	SteamAPI_RegisterCallback( this, P::k_iCallback );
}

template< class T, class P, bool bGameserver >
inline void CCallback< T, P, bGameserver >::Unregister()
{
	// SteamAPI_UnregisterCallback removes k_ECallbackFlagsRegistered
	SteamAPI_UnregisterCallback( this );
}

template< class T, class P, bool bGameserver >
inline void CCallback< T, P, bGameserver >::Run( void *pvParam )
{
	(m_pObj->*m_Func)((P *)pvParam);
}


#if defined(USE_BREAKPAD_HANDLER) || defined(STEAM_API_EXPORTS)
// this should be called before the game initialized the steam APIs
// pchDate should be of the format "Mmm dd yyyy" (such as from the __ DATE __ macro )
// pchTime should be of the format "hh:mm:ss" (such as from the __ TIME __ macro )
// bFullMemoryDumps (Win32 only) -- writes out a uuid-full.dmp in the client/dumps folder
// pvContext-- can be NULL, will be the void * context passed into m_pfnPreMinidumpCallback
// PFNPreMinidumpCallback m_pfnPreMinidumpCallback   -- optional callback which occurs just before a .dmp file is written during a crash.  Applications can hook this to allow adding additional information into the .dmp comment stream.
S_API void S_CALLTYPE SteamAPI_UseBreakpadCrashHandler( char const *pchVersion, char const *pchDate, char const *pchTime, bool bFullMemoryDumps, void *pvContext, PFNPreMinidumpCallback m_pfnPreMinidumpCallback );
S_API void S_CALLTYPE SteamAPI_SetBreakpadAppID( uint32 unAppID );
#endif


#endif // STEAM_API_INTERNAL_H
