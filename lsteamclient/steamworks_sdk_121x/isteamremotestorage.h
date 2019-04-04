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
// Purpose: Defines the largest allowed file size. Cloud files cannot be
//	larger than 100MB.
//-----------------------------------------------------------------------------
const uint32 k_unMaxCloudFileSize = 100 * 1024 * 1024;


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
typedef uint64 PublishedFileUpdateHandle_t;
typedef uint64 PublishedFileId_t;
const UGCHandle_t k_UGCHandleInvalid = 0xffffffffffffffffull;
const PublishedFileUpdateHandle_t k_PublishedFileUpdateHandleInvalid = 0xffffffffffffffffull;

// Handle for writing to Steam Cloud
typedef uint64 UGCFileWriteStreamHandle_t;
const UGCFileWriteStreamHandle_t k_UGCFileStreamHandleInvalid = 0xffffffffffffffffull;

const uint32 k_cchPublishedDocumentTitleMax = 128 + 1;
const uint32 k_cchPublishedDocumentDescriptionMax = 8000;
const uint32 k_cchPublishedDocumentChangeDescriptionMax = 256;
const uint32 k_unEnumeratePublishedFilesMaxResults = 50;
const uint32 k_cchTagListMax = 1024 + 1;
const uint32 k_cchFilenameMax = 260;
const uint32 k_cchPublishedFileURLMax = 256;

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
	k_ERemoteStoragePlatformOSX			= (1 << 1),
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


enum EWorkshopFileType
{
	k_EWorkshopFileTypeFirst = 0,

	k_EWorkshopFileTypeCommunity = 0,
	k_EWorkshopFileTypeMicrotransaction = 1,
	k_EWorkshopFileTypeCollection = 2,
	k_EWorkshopFileTypeArt = 3,
	k_EWorkshopFileTypeVideo = 4,
	k_EWorkshopFileTypeScreenshot = 5,
	k_EWorkshopFileTypeGame = 6,
	k_EWorkshopFileTypeSoftware = 7,
	k_EWorkshopFileTypeConcept = 8,

	// Update k_EWorkshopFileTypeMax if you add values
	k_EWorkshopFileTypeMax = 9
	
};

enum EWorkshopVote
{
	k_EWorkshopVoteUnvoted = 0,
	k_EWorkshopVoteFor = 1,
	k_EWorkshopVoteAgainst = 2,
};

enum EWorkshopFileAction
{
	k_EWorkshopFileActionPlayed = 0,
	k_EWorkshopFileActionCompleted = 1,
};

enum EWorkshopEnumerationType
{
	k_EWorkshopEnumerationTypeRankedByVote = 0,
	k_EWorkshopEnumerationTypeRecent = 1,
	k_EWorkshopEnumerationTypeTrending = 2,
	k_EWorkshopEnumerationTypeFavoritesOfFriends = 3,
	k_EWorkshopEnumerationTypeVotedByFriends = 4,
	k_EWorkshopEnumerationTypeContentByFriends = 5,
	k_EWorkshopEnumerationTypeRecentFromFollowedUsers = 6,
};

enum EWorkshopVideoProvider
{
	k_EWorkshopVideoProviderNone = 0,
	k_EWorkshopVideoProviderYoutube = 1
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
		virtual bool	SetSyncPlatforms( const char *pchFile, ERemoteStoragePlatform eRemoteStoragePlatform ) = 0;

		// file operations that cause network IO
		virtual UGCFileWriteStreamHandle_t FileWriteStreamOpen( const char *pchFile ) = 0;
		virtual bool FileWriteStreamWriteChunk( UGCFileWriteStreamHandle_t writeHandle, const void *pvData, int32 cubData ) = 0;
		virtual bool FileWriteStreamClose( UGCFileWriteStreamHandle_t writeHandle ) = 0;
		virtual bool FileWriteStreamCancel( UGCFileWriteStreamHandle_t writeHandle ) = 0;

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

		// Downloads a UGC file.  A priority value of 0 will download the file immediately,
		// otherwise it will wait to download the file until all downloads with a lower priority
		// value are completed.  Downloads with equal priority will occur simultaneously.
		virtual SteamAPICall_t UGCDownload( UGCHandle_t hContent ) = 0;

		// Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false
		// or if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage
		virtual bool	GetUGCDownloadProgress( UGCHandle_t hContent, int32 *pnBytesDownloaded, int32 *pnBytesExpected ) = 0;

		// Gets metadata for a file after it has been downloaded. This is the same metadata given in the RemoteStorageDownloadUGCResult_t call result
		virtual bool	GetUGCDetails( UGCHandle_t hContent, AppId_t *pnAppID, char **ppchName, int32 *pnFileSizeInBytes, CSteamID *pSteamIDOwner ) = 0;

		// After download, gets the content of the file
		virtual int32	UGCRead( UGCHandle_t hContent, void *pvData, int32 cubDataToRead, uint32 cOffset ) = 0;

		// Functions to iterate through UGC that has finished downloading but has not yet been read via UGCRead()
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
		virtual SteamAPICall_t	PublishWorkshopFile( const char *pchFile, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags, EWorkshopFileType eWorkshopFileType ) = 0;
		virtual PublishedFileUpdateHandle_t CreatePublishedFileUpdateRequest( PublishedFileId_t unPublishedFileId ) = 0;
		virtual bool UpdatePublishedFileFile( PublishedFileUpdateHandle_t updateHandle, const char *pchFile ) = 0;
		virtual bool UpdatePublishedFilePreviewFile( PublishedFileUpdateHandle_t updateHandle, const char *pchPreviewFile ) = 0;
		virtual bool UpdatePublishedFileTitle( PublishedFileUpdateHandle_t updateHandle, const char *pchTitle ) = 0;
		virtual bool UpdatePublishedFileDescription( PublishedFileUpdateHandle_t updateHandle, const char *pchDescription ) = 0;
		virtual bool UpdatePublishedFileVisibility( PublishedFileUpdateHandle_t updateHandle, ERemoteStoragePublishedFileVisibility eVisibility ) = 0;
		virtual bool UpdatePublishedFileTags( PublishedFileUpdateHandle_t updateHandle, SteamParamStringArray_t *pTags ) = 0;
		virtual SteamAPICall_t	CommitPublishedFileUpdate( PublishedFileUpdateHandle_t updateHandle ) = 0;
		virtual SteamAPICall_t	GetPublishedFileDetails( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	DeletePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
		// enumerate the files that the current user published with this app
		virtual SteamAPICall_t	EnumerateUserPublishedFiles( uint32 unStartIndex ) = 0;
		virtual SteamAPICall_t	SubscribePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	EnumerateUserSubscribedFiles( uint32 unStartIndex ) = 0;
		virtual SteamAPICall_t	UnsubscribePublishedFile( PublishedFileId_t unPublishedFileId ) = 0;
		virtual bool UpdatePublishedFileSetChangeDescription( PublishedFileUpdateHandle_t updateHandle, const char *pchChangeDescription ) = 0;
		virtual SteamAPICall_t	GetPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	UpdateUserPublishedItemVote( PublishedFileId_t unPublishedFileId, bool bVoteUp ) = 0;
		virtual SteamAPICall_t	GetUserPublishedItemVoteDetails( PublishedFileId_t unPublishedFileId ) = 0;
		virtual SteamAPICall_t	EnumerateUserSharedWorkshopFiles( CSteamID steamId, uint32 unStartIndex, SteamParamStringArray_t *pRequiredTags, SteamParamStringArray_t *pExcludedTags ) = 0;
		virtual SteamAPICall_t	PublishVideo( EWorkshopVideoProvider eVideoProvider, const char *pchVideoAccount, const char *pchVideoIdentifier, const char *pchPreviewFile, AppId_t nConsumerAppId, const char *pchTitle, const char *pchDescription, ERemoteStoragePublishedFileVisibility eVisibility, SteamParamStringArray_t *pTags ) = 0;
		virtual SteamAPICall_t	SetUserPublishedFileAction( PublishedFileId_t unPublishedFileId, EWorkshopFileAction eAction ) = 0;
		virtual SteamAPICall_t	EnumeratePublishedFilesByUserAction( EWorkshopFileAction eAction, uint32 unStartIndex ) = 0;
		// this method enumerates the public view of workshop files
		virtual SteamAPICall_t	EnumeratePublishedWorkshopFiles( EWorkshopEnumerationType eEnumerationType, uint32 unStartIndex, uint32 unCount, uint32 unDays, SteamParamStringArray_t *pTags, SteamParamStringArray_t *pUserTags ) = 0;
};

#define STEAMREMOTESTORAGE_INTERFACE_VERSION "STEAMREMOTESTORAGE_INTERFACE_VERSION009"


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
// Purpose: The result of a call to CommitPublishedFileUpdate()
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


//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetPublishedFileDetails()
//-----------------------------------------------------------------------------
struct RemoteStorageGetPublishedFileDetailsResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 18 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;
	AppId_t m_nCreatorAppID;		// ID of the app that created this file.
	AppId_t m_nConsumerAppID;		// ID of the app that will consume this file.
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
	int32 m_nFileSize;				// Size of the primary file
	int32 m_nPreviewFileSize;		// Size of the preview file
	char m_rgchURL[k_cchPublishedFileURLMax];	// URL (for a video or a website)
	EWorkshopFileType m_eFileType;	// Type of the file
};


struct RemoteStorageEnumerateWorkshopFilesResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 19 };
	EResult m_eResult;
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	float m_rgScore[ k_unEnumeratePublishedFilesMaxResults ];
};


//-----------------------------------------------------------------------------
// Purpose: The result of GetPublishedItemVoteDetails
//-----------------------------------------------------------------------------
struct RemoteStorageGetPublishedItemVoteDetailsResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 20 };
	EResult m_eResult;
	PublishedFileId_t m_unPublishedFileId;
	int32 m_nVotesFor;
	int32 m_nVotesAgainst;
	int32 m_nReports;
	float m_fScore;
};


//-----------------------------------------------------------------------------
// Purpose: User subscribed to a file for the app (from within the app or on the web)
//-----------------------------------------------------------------------------
struct RemoteStoragePublishedFileSubscribed_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 21 };
	PublishedFileId_t m_nPublishedFileId;	// The published file id
	AppId_t m_nAppID;						// ID of the app that will consume this file.
};

//-----------------------------------------------------------------------------
// Purpose: User unsubscribed from a file for the app (from within the app or on the web)
//-----------------------------------------------------------------------------
struct RemoteStoragePublishedFileUnsubscribed_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 22 };
	PublishedFileId_t m_nPublishedFileId;	// The published file id
	AppId_t m_nAppID;						// ID of the app that will consume this file.
};


//-----------------------------------------------------------------------------
// Purpose: Published file that a user owns was deleted (from within the app or the web)
//-----------------------------------------------------------------------------
struct RemoteStoragePublishedFileDeleted_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 23 };
	PublishedFileId_t m_nPublishedFileId;	// The published file id
	AppId_t m_nAppID;						// ID of the app that will consume this file.
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to UpdateUserPublishedItemVote()
//-----------------------------------------------------------------------------
struct RemoteStorageUpdateUserPublishedItemVoteResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 24 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;	// The published file id
};


//-----------------------------------------------------------------------------
// Purpose: The result of a call to GetUserPublishedItemVoteDetails()
//-----------------------------------------------------------------------------
struct RemoteStorageUserVoteDetails_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 25 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;	// The published file id
	EWorkshopVote m_eVote;			// what the user voted
};

struct RemoteStorageEnumerateUserSharedWorkshopFilesResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 26 };
	EResult m_eResult;				// The result of the operation.
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
};

struct RemoteStorageSetUserPublishedFileActionResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 27 };
	EResult m_eResult;				// The result of the operation.
	PublishedFileId_t m_nPublishedFileId;	// The published file id
	EWorkshopFileAction m_eAction;	// the action that was attempted
};

struct RemoteStorageEnumeratePublishedFilesByUserActionResult_t
{
	enum { k_iCallback = k_iClientRemoteStorageCallbacks + 28 };
	EResult m_eResult;				// The result of the operation.
	EWorkshopFileAction m_eAction;	// the action that was filtered on
	int32 m_nResultsReturned;
	int32 m_nTotalResultCount;
	PublishedFileId_t m_rgPublishedFileId[ k_unEnumeratePublishedFilesMaxResults ];
	uint32 m_rgRTimeUpdated[ k_unEnumeratePublishedFilesMaxResults ];
};


#pragma pack( pop )


#endif // ISTEAMREMOTESTORAGE_H
