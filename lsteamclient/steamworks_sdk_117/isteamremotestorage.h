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

//-----------------------------------------------------------------------------
// Purpose: Structure that contains an array of const char * strings and the number of those strings
//-----------------------------------------------------------------------------
#pragma pack( push, 8 )
struct SteamParamStringArray_t
{
	const char ** m_ppStrings;
	int32 m_nNumStrings;
};
#pragma pack( pop )

// A handle to a piece of user generated content
typedef uint64 UGCHandle_t;
typedef uint64 PublishedFileId_t;
const UGCHandle_t k_UGCHandleInvalid = 0xffffffffffffffffull;

const uint32 k_cchPublishedDocumentTitleMax = 128 + 1;
const uint32 k_cchPublishedDocumentDescriptionMax = 256 + 1;
const uint32 k_unEnumeratePublishedFilesMaxResults = 50;
const uint32 k_cchTagListMax = 1024 + 1;
const uint32 k_cchFilenameMax = 260;

// Ways to handle a synchronization conflict
enum EResolveConflict
{
	k_EResolveConflictKeepClient = 1,		// The local version of each file will be used to overwrite the server version
	k_EResolveConflictKeepServer = 2,		// The server version of each file will be used to overwrite the local version
};

enum ERemoteStoragePlatform
{
	k_ERemoteStoragePlatformNone		= 0,
	k_ERemoteStoragePlatformWindows		= (1 << 0),
	k_ERemoteStoragePlatformOSX			= (1 << 1 ),
	k_ERemoteStoragePlatformPS3			= (1 << 2),
	k_ERemoteStoragePlatformReserved1	= (1 << 3),
	k_ERemoteStoragePlatformReserved2	= (1 << 4),

	k_ERemoteStoragePlatformAll = 0xffffffff
};

enum ERemoteStoragePublishedFileVisibility
{
	k_ERemoteStoragePublishedFileVisibilityPublic = 0,
	k_ERemoteStoragePublishedFileVisibilityFriendsOnly = 1,
	k_ERemoteStoragePublishedFileVisibilityPrivate = 2,
};


//-----------------------------------------------------------------------------
// Purpose: helper structure for making updates to published files.
//	make sure to update serialization/deserialization in interfacemap.cpp if new properties are added
//-----------------------------------------------------------------------------
#pragma pack( push, 8 )
struct RemoteStorageUpdatePublishedFileRequest_t
{
public:
	RemoteStorageUpdatePublishedFileRequest_t()
	{
		Initialize( k_GIDNil );
	}

	RemoteStorageUpdatePublishedFileRequest_t( PublishedFileId_t unPublishedFileId )
	{
		Initialize( unPublishedFileId );
	}

	PublishedFileId_t GetPublishedFileId() { return m_unPublishedFileId; }

	void SetFile( const char *pchFile )
	{
		m_pchFile = pchFile;
		m_bUpdateFile = true;
	}

	const char *GetFile() { return m_pchFile; }
	bool BUpdateFile() { return m_bUpdateFile; }

	void SetPreviewFile( const char *pchPreviewFile )
	{
		m_pchPreviewFile = pchPreviewFile;
		m_bUpdatePreviewFile = true;
	}

	const char *GetPreviewFile() { return m_pchPreviewFile; }
	bool BUpdatePreviewFile() { return m_bUpdatePreviewFile; }

	void SetTitle( const char *pchTitle )
	{
		m_pchTitle = pchTitle;
		m_bUpdateTitle = true;
	}

	const char *GetTitle() { return m_pchTitle; }
	bool BUpdateTitle() { return m_bUpdateTitle; }

	void SetDescription( const char *pchDescription )
	{
		m_pchDescription = pchDescription;
		m_bUpdateDescription = true;
	}

	const char *GetDescription() { return m_pchDescription; }
	bool BUpdateDescription() { return m_bUpdateDescription; }

	void SetVisibility( ERemoteStoragePublishedFileVisibility eVisibility )
	{
		m_eVisibility = eVisibility;
		m_bUpdateVisibility = true;
	}

	const ERemoteStoragePublishedFileVisibility GetVisibility() { return m_eVisibility; }
	bool BUpdateVisibility() { return m_bUpdateVisibility; }

	void SetTags( SteamParamStringArray_t *pTags )
	{
		m_pTags = pTags;
		m_bUpdateTags = true;
	}

	SteamParamStringArray_t *GetTags() { return m_pTags; }
	bool BUpdateTags() { return m_bUpdateTags; }
	SteamParamStringArray_t **GetTagsPointer() { return &m_pTags; }

	void Initialize( PublishedFileId_t unPublishedFileId )
	{
		m_unPublishedFileId = unPublishedFileId;
		m_pchFile = 0;
		m_pchPreviewFile = 0;
		m_pchTitle = 0;
		m_pchDescription = 0;
		m_pTags = 0;

		m_bUpdateFile = false;
		m_bUpdatePreviewFile = false;
		m_bUpdateTitle = false;
		m_bUpdateDescription = false;
		m_bUpdateTags = false;
		m_bUpdateVisibility = false;
	}

private:
	PublishedFileId_t m_unPublishedFileId;
	const char *m_pchFile;
	const char *m_pchPreviewFile;
	const char *m_pchTitle;
	const char *m_pchDescription;
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	SteamParamStringArray_t *m_pTags;

	bool m_bUpdateFile;
	bool m_bUpdatePreviewFile;
	bool m_bUpdateTitle;
	bool m_bUpdateDescription;
	bool m_bUpdateVisibility;
	bool m_bUpdateTags;
};
#pragma pack( pop )

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
		virtual bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform ) = 0;

		// file information
		virtual bool	FileExists( const char *pchFile ) = 0;
		virtual bool	FilePersisted( const char *pchFile ) = 0;
		virtual int32	GetFileSize( const char *pchFile ) = 0;
		virtual int64	GetFileTimestamp( const char *pchFile ) = 0;
		virtual ERemoteStoragePlatform GetSyncPlatforms( const char *pchFile ) = 0;

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

		// The following functions are only necessary on the Playstation 3. On PC & Mac, the Steam client will handle these operations for you
		// On Playstation 3, the game controls which files are stored in the cloud, via FilePersist, FileFetch, and FileForget.
			
#if defined(_PS3) || defined(_SERVER)
		// Connect to Steam and get a list of files in the Cloud - results in a RemoteStorageAppSyncStatusCheck_t callback
		virtual void GetFileListFromServer() = 0;
		// Indicate this file should be downloaded in the next sync
		virtual bool FileFetch( const char *pchFile ) = 0;
		// Indicate this file should be persisted in the next sync
		virtual bool FilePersist( const char *pchFile ) = 0;
		// Pull any requested files down from the Cloud - results in a RemoteStorageAppSyncedClient_t callback
		virtual bool SynchronizeToClient() = 0;
		// Upload any requested files to the Cloud - results in a RemoteStorageAppSyncedServer_t callback
		virtual bool SynchronizeToServer() = 0;
		// Reset any fetch/persist/etc requests
		virtual bool ResetFileRequestState() = 0;
#endif

		// publishing UGC
		virtual SteamAPICall_t	PublishFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags ) = 0;
		virtual SteamAPICall_t	PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, SteamParamStringArray_t *pTags ) = 0;
		virtual SteamAPICall_t	UpdatePublishedFile( RemoteStorageUpdatePublishedFileRequest_t updatePublishedFileRequest ) = 0;
		virtual SteamAPICall_t	GetPublishedFileDetails( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	DeletePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	EnumerateUserPublishedFiles( uint32 unStartIndex ) = 0;
		virtual SteamAPICall_t	SubscribePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	EnumerateUserSubscribedFiles( uint32 unStartIndex ) = 0;
		virtual SteamAPICall_t	UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
};

#define STEAMREMOTESTORAGE_INTERFACE_VERSION "STEAMREMOTESTORAGE_INTERFACE_VERSION005"

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
	char m_rgchCurrentFile[k_cchFilenameMax];				// Current file being transferred
	AppId_t m_nAppID;							// App this info relates to
	uint32 m_uBytesTransferredThisChunk;		// Bytes transferred this chunk
	double m_dAppPercentComplete;				// Percent complete that this app's transfers are
	bool m_bUploading;							// if false, downloading
};

//
// IMPORTANT! k_iClientRemoteStorageCallbacks + 4 is used, see iclientremotestorage.h
//


//-----------------------------------------------------------------------------
// Purpose: Sent after we've determined the list of files that are out of sync
//          with the server.
//-----------------------------------------------------------------------------
struct RemoteStorageAppSyncStatusCheck_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 5 };
	AppId_t m_nAppID;
	EResult m_eResult;
};

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


// k_iClientRemoteStorageCallbacks + 8 is deprecated! Do not reuse


//-----------------------------------------------------------------------------
// Purpose: The result of a call to PublishFile()
//-----------------------------------------------------------------------------
struct RemoteStoragePublishFileResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 9 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetPublishedFileDetails()
//-----------------------------------------------------------------------------
struct RemoteStorageGetPublishedFileDetailsResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 10 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;		// ID of the app that created this file.
	AppId_t m_nConsumerAppID;		// ID of the app that created this file.
	char m_rgchTitle[k_cchPublishedDocumentTitleMax];		// title of document
	char m_rgchDescription[k_cchPublishedDocumentDescriptionMax];	// description of document
	UGCHandle_t m_hFile;			// The handle of the primary file
	UGCHandle_t m_hPreviewFile;		// The handle of the preview file
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
	uint32 m_rtimeCreated;			// time when the published file was created
	uint32 m_rtimeUpdated;			// time when the published file was last updated
	ERemoteStoragePublishedFileVisibility m_eVisibility;
	bool m_bBanned;
	char m_rgchTags[k_cchTagListMax];	// comma separated list of all tags associated with this file
	bool m_bTagsTruncated;			// whether the list of tags was too long to be returned in the provided buffer
	char m_pchFileName[k_cchFilenameMax];		// The name of the primary file
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to DeletePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageDeletePublishedFileResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 11 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumerateUserPublishedFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateUserPublishedFilesResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 12 };
	EResult m_eResult;				// The result of the operation.
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to SubscribePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageSubscribePublishedFileResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 13 };
	EResult m_eResult;				// The result of the operation.
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to EnumerateSubscribePublishedFiles()
//-----------------------------------------------------------------------------
struct RemoteStorageEnumerateUserSubscribedFilesResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 14 };
	EResult m_eResult;				// The result of the operation.
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	uint32 m_rgRTimeSubscribed[ k_unEnumeratePublishedFilesMaxResults ];
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to UnsubscribePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageUnsubscribePublishedFileResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 15 };
	EResult m_eResult;				// The result of the operation.
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to UpdatePublishedFile()
//-----------------------------------------------------------------------------
struct RemoteStorageUpdatePublishedFileResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 16 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to UGCDownload()
//-----------------------------------------------------------------------------
struct RemoteStorageDownloadUGCResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 17 };
	EResult m_eResult;				// The result of the operation.
	UGCHandle_t m_hFile;			// The handle to the file that was attempted to be downloaded.
	AppId_t m_nAppID;				// ID of the app that created this file.
	int32 m_nSizeInBytes;			// The size of the file that was downloaded, in bytes.
	char m_pchFileName[k_cchFilenameMax];		// The name of the file that was downloaded. 
	uint64 m_ulSteamIDOwner;		// Steam ID of the user who created this content.
};


#pragma pack( pop )


#endif // ISTEAMREMOTESTORAGE_H
