//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: interface to app data in Steam
//
//=============================================================================

#ifndef ISTEAMAPPS_H
#define ISTEAMAPPS_H
#ifdef _WIN32
#pragma once
#endif

const int k_cubAppProofOfPurchaseKeyMax = 64;			// max bytes of a legacy cd key we support


//-----------------------------------------------------------------------------
// Purpose: interface to app data
//-----------------------------------------------------------------------------
class ISteamApps
{
public:
	virtual bool BIsSubscribed() = 0;
	virtual bool BIsLowViolence() = 0;
	virtual bool BIsCybercafe() = 0;
	virtual bool BIsVACBanned() = 0;
	virtual const char *GetCurrentGameLanguage() = 0;
	virtual const char *GetAvailableGameLanguages() = 0;

	// only use this member if you need to check ownership of another game related to yours, a demo for example
	virtual bool BIsSubscribedApp( AppId_t appID ) = 0;

	// Takes AppID of DLC and checks if the user owns the DLC & if the DLC is installed
	virtual bool BIsDlcInstalled( AppId_t appID ) = 0;

	// returns the Unix time of the purchase of the app
	virtual uint32 GetEarliestPurchaseUnixTime( AppId_t nAppID ) = 0;

	// Checks if the user is subscribed to the current app through a free weekend
	// This function will return false for users who have a retail or other type of license
	// Before using, please ask your Valve technical contact how to package and secure your free weekened
	virtual bool BIsSubscribedFromFreeWeekend() = 0;

	// Returns the number of DLC pieces for the running app
	virtual int GetDLCCount() = 0;

	// Returns metadata for DLC by index, of range [0, GetDLCCount()]
	virtual bool BGetDLCDataByIndex( int iDLC, AppId_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize ) = 0;

	// Install/Uninstall control for optional DLC
	virtual void InstallDLC( AppId_t nAppID ) = 0;
	virtual void UninstallDLC( AppId_t nAppID ) = 0;
	
	// Request cd-key for yourself or owned DLC. If you are interested in this
	// data then make sure you provide us with a list of valid keys to be distributed
	// to users when they purchase the game, before the game ships.
	// You'll receive an AppProofOfPurchaseKeyResponse_t callback when
	// the key is available (which may be immediately).
	virtual void RequestAppProofOfPurchaseKey( AppId_t nAppID ) = 0;

	virtual bool GetCurrentBetaName( char *pchName, int cchNameBufferSize ) = 0; // returns current beta branch name, 'public' is the default branch
	virtual bool MarkContentCorrupt( bool bMissingFilesOnly ) = 0; // signal Steam that game files seems corrupt or missing
	virtual uint32 GetInstalledDepots( AppId_t appID, DepotId_t *pvecDepots, uint32 cMaxDepots ) = 0; // return installed depots in mount order

	// returns current app install folder for AppID, returns folder name length
	virtual uint32 GetAppInstallDir( AppId_t appID, char *pchFolder, uint32 cchFolderBufferSize ) = 0;
	virtual bool BIsAppInstalled( AppId_t appID ) = 0; // returns true if that app is installed (not necessarily owned)
	
	virtual CSteamID GetAppOwner() = 0; // returns the SteamID of the original owner. If different from current user, it's borrowed

	// Returns the associated launch param if the game is run via steam://run/<appid>//?param1=value1;param2=value2;param3=value3 etc.
	// Parameter names starting with the character '@' are reserved for internal use and will always return and empty string.
	// Parameter names starting with an underscore '_' are reserved for steam features -- they can be queried by the game,
	// but it is advised that you not param names beginning with an underscore for your own features.
	virtual const char *GetLaunchQueryParam( const char *pchKey ) = 0;

	// get download progress for optional DLC
	virtual bool GetDlcDownloadProgress( AppId_t nAppID, uint64 *punBytesDownloaded, uint64 *punBytesTotal ) = 0; 

	// return the buildid of this app, may change at any time based on backend updates to the game
	virtual int GetAppBuildId() = 0;
#ifdef _PS3
	// Result returned in a RegisterActivationCodeResponse_t callresult
	virtual SteamAPICall_t RegisterActivationCode( const char *pchActivationCode ) = 0;
#endif
};

#define STEAMAPPS_INTERFACE_VERSION "STEAMAPPS_INTERFACE_VERSION007"

// callbacks
#if defined( VALVE_CALLBACK_PACK_SMALL )
#pragma pack( push, 4 )
#elif defined( VALVE_CALLBACK_PACK_LARGE )
#pragma pack( push, 8 )
#else
#error isteamclient.h must be included
#endif 
//-----------------------------------------------------------------------------
// Purpose: posted after the user gains ownership of DLC & that DLC is installed
//-----------------------------------------------------------------------------
struct DlcInstalled_t
{
	enum { k_iCallback = k_iSteamAppsCallbacks + 5 };
	AppId_t m_nAppID;		// AppID of the DLC
};


//-----------------------------------------------------------------------------
// Purpose: possible results when registering an activation code
//-----------------------------------------------------------------------------
enum ERegisterActivationCodeResult
{
	k_ERegisterActivationCodeResultOK = 0,
	k_ERegisterActivationCodeResultFail = 1,
	k_ERegisterActivationCodeResultAlreadyRegistered = 2,
	k_ERegisterActivationCodeResultTimeout = 3,
	k_ERegisterActivationCodeAlreadyOwned = 4,
};


//-----------------------------------------------------------------------------
// Purpose: response to RegisterActivationCode()
//-----------------------------------------------------------------------------
struct RegisterActivationCodeResponse_t
{
	enum { k_iCallback = k_iSteamAppsCallbacks + 8 };
	ERegisterActivationCodeResult m_eResult;
	uint32 m_unPackageRegistered;						// package that was registered. Only set on success
};

//-----------------------------------------------------------------------------
// Purpose: response to RegisterActivationCode()
//-----------------------------------------------------------------------------
struct AppProofOfPurchaseKeyResponse_t
{
	enum { k_iCallback = k_iSteamAppsCallbacks + 13 };
	EResult m_eResult;
	uint32	m_nAppID;
	char	m_rgchKey[ k_cubAppProofOfPurchaseKeyMax ];
};

//---------------------------------------------------------------------------------
// Purpose: posted after the user gains executes a steam url with query parameters
// such as steam://run/<appid>//?param1=value1;param2=value2;param3=value3; etc
// while the game is already running.  The new params can be queried
// with GetLaunchQueryParam.
//---------------------------------------------------------------------------------
struct NewLaunchQueryParameters_t
{
	enum { k_iCallback = k_iSteamAppsCallbacks + 14 };
};


#pragma pack( pop )
#endif // ISTEAMAPPS_H
