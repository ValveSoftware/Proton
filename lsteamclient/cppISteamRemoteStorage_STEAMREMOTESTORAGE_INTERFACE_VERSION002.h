struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
    const void *pvData;
    int32 cubData;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileWrite_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead_params
{
    void *linux_side;
    int32 _ret;
    const char *pchFile;
    void *pvData;
    int32 cubDataToRead;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileRead_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists_params
{
    void *linux_side;
    bool _ret;
    const char *pchFile;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_FileExists_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount_params
{
    void *linux_side;
    int32 _ret;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileCount_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize_params
{
    void *linux_side;
    const char *_ret;
    int iFile;
    int32 *pnFileSizeInBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetFileNameAndSize_params *params );

struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota_params
{
    void *linux_side;
    bool _ret;
    int32 *pnTotalBytes;
    int32 *puAvailableBytes;
};
extern void cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota( struct cppISteamRemoteStorage_STEAMREMOTESTORAGE_INTERFACE_VERSION002_GetQuota_params *params );

