/* This file is auto-generated, do not edit. */
#include "unix_private.h"
#include "cppISteamFriends_SteamFriends003.h"

struct u_ISteamFriends_SteamFriends003
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual int32_t GetFriendAvatar( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, uint64_t *, uint32_t *, uint16_t *, uint16_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamFriends_SteamFriends003_GetPersonaName( struct cppISteamFriends_SteamFriends003_GetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends003_SetPersonaName( struct cppISteamFriends_SteamFriends003_SetPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends003_GetPersonaState( struct cppISteamFriends_SteamFriends003_GetPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends003_GetFriendCount( struct cppISteamFriends_SteamFriends003_GetFriendCount_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends003_GetFriendByIndex( struct cppISteamFriends_SteamFriends003_GetFriendByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends003_GetFriendRelationship( struct cppISteamFriends_SteamFriends003_GetFriendRelationship_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends003_GetFriendPersonaState( struct cppISteamFriends_SteamFriends003_GetFriendPersonaState_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends003_GetFriendPersonaName( struct cppISteamFriends_SteamFriends003_GetFriendPersonaName_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends003_GetFriendAvatar( struct cppISteamFriends_SteamFriends003_GetFriendAvatar_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends003_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends003_GetFriendGamePlayed_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pulGameID, params->punGameIP, params->pusGamePort, params->pusQueryPort );
}

void cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends003_GetFriendPersonaNameHistory_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends003_HasFriend( struct cppISteamFriends_SteamFriends003_HasFriend_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends003_GetClanCount( struct cppISteamFriends_SteamFriends003_GetClanCount_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends003_GetClanByIndex( struct cppISteamFriends_SteamFriends003_GetClanByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends003_GetClanName( struct cppISteamFriends_SteamFriends003_GetClanName_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends003_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends003_GetFriendCountFromSource_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends003_GetFriendFromSourceByIndex_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends003_IsUserInSource( struct cppISteamFriends_SteamFriends003_IsUserInSource_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends003_SetInGameVoiceSpeaking_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends003_ActivateGameOverlay( struct cppISteamFriends_SteamFriends003_ActivateGameOverlay_params *params )
{
    struct u_ISteamFriends_SteamFriends003 *iface = (struct u_ISteamFriends_SteamFriends003 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

