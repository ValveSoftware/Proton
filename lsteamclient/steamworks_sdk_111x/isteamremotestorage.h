//====== Copyright © 1996-2008, Valve Corporation, All rights reserved. =======
//
// Purpose: public interface to user remote file storage in Steam
//
//=============================================================================

#ifndef ISTEAMREMOTESTORAGE_H
#define ISTEAMREMOTESTORAGE_H
#ifdef _WIN32
#pragma once
#endif

#include "isteamclient.h"

// A handle to a piece of user generated content
typedef uint64 UGCHandle_t;
const UGCHandle_t k_UGCHandleInvalid = 0xffffffffffffffffull;

// Ways to handle a synchronization conflict
enum EResolveConflict
{
	k_EResolveConflictKeepClient = 1,		// The local version of each file will be used to overwrite the server version
	k_EResolveConflictKeepServer = 2,		// The server version of each file will be used to overwrite the local version
};

enum ERemoteStoragePlatform
{
	k_ERemoteStoragePlatformNone = 0,
	k_ERemoteStoragePlatformWindows = (1 << 0),
	k_ERemoteStoragePlatformOSX = (1 << 1 ),
	k_ERemoteStoragePlatformPS3 = (1 << 2),

	k_ERemoteStoragePlatformAll = 0xffffffff
};

//-----------------------------------------------------------------------------
// Purpose: Functions for accessing, reading and writing files stored remotely 
//			and cached locally
//-----------------------------------------------------------------------------
class ISteamRemoteStorage
{
	public:
		// NOTE
		//
		// Filenames are case-insensitive, and will be converted to lowercase automatically.
		// So "foo.bar" and "Foo.bar" are the same file, and if you write "Foo.bar" then
		// iterate the files, the filename returned will be "foo.bar".
		//

		// file operations
		virtual bool	FileWrite( const char *pchFile, const void *pvData, int32 cubData ) = 0;
		virtual int32	FileRead( const char *pchFile, void *pvData, int32 cubDataToRead ) = 0;
		virtual bool	FileForget( const char *pchFile ) = 0;
		virtual bool	FileDelete( const char *pchFile ) = 0;
		virtual SteamAPICall_t FileShare( const char *pchFile ) = 0;

		// file information
		virtual bool	FileExists( const char *pchFile ) = 0;
		virtual bool	FilePersisted( const char *pchFile ) = 0;
		virtual int32	GetFileSize( const char *pchFile ) = 0;
		virtual int64	GetFileTimestamp( const char *pchFile ) = 0;

		// iteration
		virtual int32 GetFileCount() = 0;
		virtual const char *GetFileNameAndSize( int iFile, int32 *pnFileSizeInBytes ) = 0;

		// configuration management
		virtual bool GetQuota( int32 *pnTotalBytes, int32 *puAvailableBytes ) = 0;
		virtual bool IsCloudEnabledForAccount() = 0;
		virtual bool IsCloudEnabledForApp() = 0;
		virtual void SetCloudEnabledForApp( bool bEnabled ) = 0;

		// user generated content
		virtual SteamAPICall_t UGCDownload( UGCHandle_t hContent ) = 0;
		virtual bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner ) = 0;
		virtual int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead ) = 0;

		// user generated content iteration
		virtual int32	GetCachedUGCCount() = 0;
		virtual	UGCHandle_t GetCachedUGCHandle( int32 iCachedContent ) = 0;
};

#define STEAMREMOTESTORAGE_INTERFACE_VERSION "STEAMREMOTESTORAGE_INTERFACE_VERSION003"

// callbacks
#pragma pack( push, 8 )

//-----------------------------------------------------------------------------
// Purpose: sent when the local file cache is fully synced with the server for an app
//          That means that an application can be started and has all latest files
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncedClient_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 1 };
	AppId_t m_nAppID;
	EResult m_eResult;
	int m_unNumDownloads;
};

//-----------------------------------------------------------------------------
// Purpose: sent when the server is fully synced with the local file cache for an app
//          That means that we can shutdown Steam and our data is stored on the server
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncedServer_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 2 };
	AppId_t m_nAppID;
	EResult m_eResult;
	int m_unNumUploads;
};

//-----------------------------------------------------------------------------
// Purpose: Status of up and downloads during a sync session
//       
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncProgress_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 3 };
	char m_rgchCurrentFile[260];				// Current file being transferred
	AppId_t m_nAppID;							// App this info relates to
	uint32 m_uBytesTransferredThisChunk;		// Bytes transferred this chunk
	double m_dAppPercentComplete;				// Percent complete that this app's transfers are
	bool m_bUploading;							// if false, downloading
};

//
// IMPORTANT! k_iClientRemoteStorageCallbacks + 4-5 are used, see iclientremotestorage.h
//

//-----------------------------------------------------------------------------
// Purpose: Sent after a conflict resolution attempt.
//-----------------------------------------------------------------------------
struct RemoteStorageConflictResolution_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 6 };
	AppId_t m_nAppID;
	EResult m_eResult;
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to FileShare()
//-----------------------------------------------------------------------------
struct RemoteStorageFileShareResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 7 };
	EResult m_eResult;			// The result of the operation
	UGCHandle_t m_hFile;		// The handle that can be shared with users and features
};

//-----------------------------------------------------------------------------
// Purpose: The result of a call to UGCDownload()
//-----------------------------------------------------------------------------
struct RemoteStorageDownloadUGCResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 8 };
	EResult m_eResult;				// The result of the operation.
	UGCHandle_t m_hFile;			// The handle to the file that was attempted to be downloaded.
	AppId_t m_nAppID;				// ID of the app that created this file.
	int32 m_nSizeInBytes;			// The size of the file that was downloaded, in bytes.
	char *m_pchFileName;			// The name of the file that was downloaded. This pointer is
									// not guaranteed to be valid indefinitely.
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
};

#pragma pack( pop )


#endif // ISTEAMREMOTESTORAGE_H
