#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_103/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_103
#include "struct_converters.h"
#include "cppISteamUser_SteamUser011.h"

struct cppISteamUser_SteamUser011
{
#ifdef __cplusplus
    virtual int32_t GetHSteamUser(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual int32_t InitiateGameConnection( void *, int32_t, CSteamID, uint32_t, uint16_t, bool ) = 0;
    virtual void TerminateGameConnection( uint32_t, uint16_t ) = 0;
    virtual void TrackAppUsageEvent( CGameID, int32_t, const char * ) = 0;
    virtual bool GetUserDataFolder( char *, int32_t ) = 0;
    virtual void StartVoiceRecording(  ) = 0;
    virtual void StopVoiceRecording(  ) = 0;
    virtual uint32_t GetCompressedVoice( void *, uint32_t, uint32_t * ) = 0;
    virtual uint32_t DecompressVoice( void *, uint32_t, void *, uint32_t, uint32_t * ) = 0;
#endif /* __cplusplus */
};

void cppISteamUser_SteamUser011_GetHSteamUser( struct cppISteamUser_SteamUser011_GetHSteamUser_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetHSteamUser(  );
}

void cppISteamUser_SteamUser011_BLoggedOn( struct cppISteamUser_SteamUser011_BLoggedOn_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamUser_SteamUser011_GetSteamID( struct cppISteamUser_SteamUser011_GetSteamID_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamUser_SteamUser011_InitiateGameConnection( struct cppISteamUser_SteamUser011_InitiateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->InitiateGameConnection( params->pAuthBlob, params->cbMaxAuthBlob, params->steamIDGameServer, params->unIPServer, params->usPortServer, params->bSecure );
}

void cppISteamUser_SteamUser011_TerminateGameConnection( struct cppISteamUser_SteamUser011_TerminateGameConnection_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    iface->TerminateGameConnection( params->unIPServer, params->usPortServer );
}

void cppISteamUser_SteamUser011_TrackAppUsageEvent( struct cppISteamUser_SteamUser011_TrackAppUsageEvent_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    iface->TrackAppUsageEvent( params->gameID, params->eAppUsageEvent, params->pchExtraInfo );
}

void cppISteamUser_SteamUser011_GetUserDataFolder( struct cppISteamUser_SteamUser011_GetUserDataFolder_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetUserDataFolder( params->pchBuffer, params->cubBuffer );
}

void cppISteamUser_SteamUser011_StartVoiceRecording( struct cppISteamUser_SteamUser011_StartVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    iface->StartVoiceRecording(  );
}

void cppISteamUser_SteamUser011_StopVoiceRecording( struct cppISteamUser_SteamUser011_StopVoiceRecording_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    iface->StopVoiceRecording(  );
}

void cppISteamUser_SteamUser011_GetCompressedVoice( struct cppISteamUser_SteamUser011_GetCompressedVoice_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->GetCompressedVoice( params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

void cppISteamUser_SteamUser011_DecompressVoice( struct cppISteamUser_SteamUser011_DecompressVoice_params *params )
{
    struct cppISteamUser_SteamUser011 *iface = (struct cppISteamUser_SteamUser011 *)params->linux_side;
    params->_ret = iface->DecompressVoice( params->pCompressed, params->cbCompressed, params->pDestBuffer, params->cbDestBufferSize, params->nBytesWritten );
}

#ifdef __cplusplus
}
#endif
