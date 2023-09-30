/* This file is auto-generated, do not edit. */
#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchKeyToFind;
    const char *pchValuesToFind;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams( struct cppISteamGameSearch_SteamMatchGameSearch001_AddGameSearchParams_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDLobby;
    int32_t nPlayerMin;
    int32_t nPlayerMax;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameWithLobby_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nPlayerMin;
    int32_t nPlayerMax;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo( struct cppISteamGameSearch_SteamMatchGameSearch001_SearchForGameSolo_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame( struct cppISteamGameSearch_SteamMatchGameSearch001_AcceptGame_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame( struct cppISteamGameSearch_SteamMatchGameSearch001_DeclineGame_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params
{
    void *linux_side;
    uint32_t _ret;
    CSteamID steamIDHost;
    char *pchConnectionDetails;
    int32_t cubConnectionDetails;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_RetrieveConnectionDetails_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGameSearch_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams( struct cppISteamGameSearch_SteamMatchGameSearch001_SetGameHostParams_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params
{
    void *linux_side;
    uint32_t _ret;
    const char *pchConnectionDetails;
    int32_t cubConnectionDetails;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails( struct cppISteamGameSearch_SteamMatchGameSearch001_SetConnectionDetails_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params
{
    void *linux_side;
    uint32_t _ret;
    int32_t nPlayerMin;
    int32_t nPlayerMax;
    int32_t nMaxTeamSize;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_RequestPlayersForGame_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ullUniqueGameID;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart( struct cppISteamGameSearch_SteamMatchGameSearch001_HostConfirmGameStart_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame( struct cppISteamGameSearch_SteamMatchGameSearch001_CancelRequestPlayersForGame_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ullUniqueGameID;
    CSteamID steamIDPlayer;
    uint32_t EPlayerResult;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult( struct cppISteamGameSearch_SteamMatchGameSearch001_SubmitPlayerResult_params *params );

struct cppISteamGameSearch_SteamMatchGameSearch001_EndGame_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t ullUniqueGameID;
};
extern void cppISteamGameSearch_SteamMatchGameSearch001_EndGame( struct cppISteamGameSearch_SteamMatchGameSearch001_EndGame_params *params );

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */
