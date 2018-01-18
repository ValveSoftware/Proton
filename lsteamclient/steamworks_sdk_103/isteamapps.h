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
};

#define STEAMAPPS_INTERFACE_VERSION "STEAMAPPS_INTERFACE_VERSION002"

#endif // ISTEAMAPPS_H
