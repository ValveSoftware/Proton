/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamUser_SteamUser011_GetHSteamUser_params
{
    void *linux_side;
    int32_t _ret;
};
extern void cppISteamUser_SteamUser011_GetHSteamUser( struct cppISteamUser_SteamUser011_GetHSteamUser_params *params );

struct cppISteamUser_SteamUser011_BLoggedOn_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUser_SteamUser011_BLoggedOn( struct cppISteamUser_SteamUser011_BLoggedOn_params *params );

struct cppISteamUser_SteamUser011_GetSteamID_params
{
    void *linux_side;
    CSteamID *_ret;
};
extern void cppISteamUser_SteamUser011_GetSteamID( struct cppISteamUser_SteamUser011_GetSteamID_params *params );

struct cppISteamUser_SteamUser011_InitiateGameConnection_params
{
    void *linux_side;
    int32_t _ret;
    void *pAuthBlob;
    int32_t cbMaxAuthBlob;
    CSteamID steamIDGameServer;
    uint32_t unIPServer;
    uint16_t usPortServer;
    bool bSecure;
};
extern void cppISteamUser_SteamUser011_InitiateGameConnection( struct cppISteamUser_SteamUser011_InitiateGameConnection_params *params );

struct cppISteamUser_SteamUser011_TerminateGameConnection_params
{
    void *linux_side;
    uint32_t unIPServer;
    uint16_t usPortServer;
};
extern void cppISteamUser_SteamUser011_TerminateGameConnection( struct cppISteamUser_SteamUser011_TerminateGameConnection_params *params );

struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params
{
    void *linux_side;
    CGameID gameID;
    int32_t eAppUsageEvent;
    const char *pchExtraInfo;
};
extern void cppISteamUser_SteamUser011_TrackAppUsageEvent( struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params *params );

struct cppISteamUser_SteamUser011_GetUserDataFolder_params
{
    void *linux_side;
    bool _ret;
    char *pchBuffer;
    int32_t cubBuffer;
};
extern void cppISteamUser_SteamUser011_GetUserDataFolder( struct cppISteamUser_SteamUser011_GetUserDataFolder_params *params );

struct cppISteamUser_SteamUser011_StartVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser011_StartVoiceRecording( struct cppISteamUser_SteamUser011_StartVoiceRecording_params *params );

struct cppISteamUser_SteamUser011_StopVoiceRecording_params
{
    void *linux_side;
};
extern void cppISteamUser_SteamUser011_StopVoiceRecording( struct cppISteamUser_SteamUser011_StopVoiceRecording_params *params );

struct cppISteamUser_SteamUser011_GetCompressedVoice_params
{
    void *linux_side;
    uint32_t _ret;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
};
extern void cppISteamUser_SteamUser011_GetCompressedVoice( struct cppISteamUser_SteamUser011_GetCompressedVoice_params *params );

struct cppISteamUser_SteamUser011_DecompressVoice_params
{
    void *linux_side;
    uint32_t _ret;
    void *pCompressed;
    uint32_t cbCompressed;
    void *pDestBuffer;
    uint32_t cbDestBufferSize;
    uint32_t *nBytesWritten;
};
extern void cppISteamUser_SteamUser011_DecompressVoice( struct cppISteamUser_SteamUser011_DecompressVoice_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
