#if 0
#pragma makedep unix
#endif

#include "unix_private.h"
#include <type_traits>

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_144 &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_sender = src.m_sender;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
}

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_147 &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
}

template< typename Wmsg >
static void steam_networking_message_utow( Wmsg &dst, const u_SteamNetworkingMessage_t_153a &src )
{
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
    dst.m_idxLane = src.m_idxLane;
}

static void U_CDECL u_SteamNetworkingMessage_t_147_FreeData( u_SteamNetworkingMessage_t_147 *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template< typename Wmsg >
static void steam_networking_message_wtou( u_SteamNetworkingMessage_t_147& dst, const Wmsg& src )
{
    if (!dst.m_pData)
    {
        dst.m_pData = malloc( src.m_cbSize );
        dst.m_pfnFreeData = u_SteamNetworkingMessage_t_147_FreeData;
    }

    memcpy( dst.m_pData, src.m_pData, src.m_cbSize );
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
}

static void U_CDECL u_SteamNetworkingMessage_t_153a_FreeData( u_SteamNetworkingMessage_t_153a *msg )
{
    free( msg->m_pData );
    msg->m_pData = NULL;
}

template< typename Wmsg >
static void steam_networking_message_wtou( u_SteamNetworkingMessage_t_153a& dst, const Wmsg& src )
{
    if (!dst.m_pData)
    {
        dst.m_pData = malloc( src.m_cbSize );
        dst.m_pfnFreeData = u_SteamNetworkingMessage_t_153a_FreeData;
    }

    memcpy( dst.m_pData, src.m_pData, src.m_cbSize );
    dst.m_cbSize = src.m_cbSize;
    dst.m_conn = src.m_conn;
    dst.m_identityPeer = src.m_identityPeer;
    dst.m_nConnUserData = src.m_nConnUserData;
    dst.m_usecTimeReceived = src.m_usecTimeReceived;
    dst.m_nMessageNumber = src.m_nMessageNumber;
    dst.m_nChannel = src.m_nChannel;
    dst.m_nFlags = src.m_nFlags;
    dst.m_nUserData = src.m_nUserData;
    dst.m_idxLane = src.m_idxLane;
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, Wmsg **w_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = networking_message::from_w( w_msgs[i] );
        auto *w_msg = &message->w_msg( **w_msgs );
        message->u_msg( **w_msgs ) = u_msgs[i];
        steam_networking_message_utow( *w_msg, *u_msgs[i] );
    }
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, ptr32< Wmsg** > w_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    uint32_t i;

    for (i = 0; i < count; ++i) msgs[i] = w_msgs[i];
    receive_messages_utow( count, u_msgs, msgs );
    delete[] msgs;
}

template< typename Umsg, typename Wmsg >
static void receive_messages_utow( uint32_t count, Umsg **u_msgs, ptr32< Wmsg* > *w_msg )
{
    receive_messages_utow( count, u_msgs, w_msg );
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, Wmsg *const *w_msgs, Umsg **u_msgs )
{
    uint32_t i;

    for (i = 0; i < count; i++)
    {
        struct networking_message *message = networking_message::from_w( w_msgs[i] );
        auto *w_msg = &message->w_msg( **w_msgs );
        auto *u_msg = message->u_msg( **w_msgs );
        steam_networking_message_wtou( *u_msg, *w_msg );
        /* steamclient library takes ownership */
        message->u_msg( **w_msgs ) = NULL;
        u_msgs[i] = u_msg;
    }
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, ptr32< Wmsg *const* > w_msgs, Umsg **u_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    uint32_t i;

    for (i = 0; i < count; ++i) msgs[i] = w_msgs[i];
    send_messages_wtou( count, msgs, u_msgs );
    delete[] msgs;
}

template< typename Wmsg, typename Umsg >
static void send_messages_wtou( uint32_t count, ptr32< Wmsg** > w_msgs, Umsg **u_msgs )
{
    Wmsg **msgs = new Wmsg *[count];
    uint32_t i;

    for (i = 0; i < count; ++i) msgs[i] = w_msgs[i];
    send_messages_wtou( count, msgs, u_msgs );
    delete[] msgs;
}

template< typename Params >
static NTSTATUS steamclient_networking_messages_receive( Params *params, bool wow64 )
{
    uint32_t i;

    for (i = 0; i < params->count; i++)
    {
        struct networking_message *message = networking_message::from_w( params->w_msgs[i] );
        auto *w_msg = &message->w_msg( **params->w_msgs );
        auto *u_msg = message->u_msg( **params->w_msgs );
        memcpy( w_msg->m_pData, u_msg->m_pData, u_msg->m_cbSize );
        u_msg->m_pfnRelease( u_msg );
        message->u_msg( **params->w_msgs ) = NULL;
    }

    return 0;
}

template< typename Params >
static NTSTATUS steamclient_networking_message_release( Params *params, bool wow64 )
{
    struct networking_message *message = networking_message::from_w( params->w_msg );
    auto *u_msg = message->u_msg( *params->w_msg );

    if (!message->u_msg( *params->w_msg )) return 0;
    u_msg->m_pfnRelease( u_msg );
    message->u_msg( *params->w_msg ) = NULL;
    return 0;
}

/* ISteamNetworkingSockets_SteamNetworkingSockets002 */

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnConnection( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnConnection( params->hConn, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnListenSocket( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnListenSocket( params->hSocket, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_SendMessages( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMessages];
    send_messages_wtou( params->nMessages, params->pMessages, u_msgs );
    iface->SendMessages( params->nMessages, u_msgs, params->pOutMessageNumberOrResult );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceiveMessagesOnPollGroup( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnPollGroup( params->hPollGroup, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

struct u_ISteamNetworkingConnectionCustomSignaling *create_LinuxISteamNetworkingConnectionCustomSignaling( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

struct u_ISteamNetworkingCustomSignalingRecvContext *create_LinuxISteamNetworkingCustomSignalingRecvContext( void *win )
{
    FIXME( "not implemented!\n" );
    return NULL;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ConnectP2PCustomSignaling( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    u_ISteamNetworkingConnectionCustomSignaling *u_pSignaling = create_LinuxISteamNetworkingConnectionCustomSignaling( params->pSignaling );
    params->_ret = iface->ConnectP2PCustomSignaling( u_pSignaling, params->pPeerIdentity, params->nOptions, params->pOptions );
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingSockets_ReceivedP2PCustomSignal( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    u_ISteamNetworkingCustomSignalingRecvContext *u_pContext = create_LinuxISteamNetworkingCustomSignalingRecvContext( params->pContext );
    params->_ret = iface->ReceivedP2PCustomSignal( params->pMsg, params->cbMsg, u_pContext );
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_AllocateMessage( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg *u_msg = iface->AllocateMessage( params->cbAllocateBuffer );
    if (u_msg) receive_messages_utow( 1, &u_msg, &params->_ret );
    return 0;
}

template <typename w_callback_type, typename u_callback_type>
class wrap_callback_cdecl_impl
{
    private:
        static void *w_callback_func;
        static void U_CDECL u_callback( u_callback_type *u_dat )
        {
            TRACE( "u_callback %p, w_callback_func %p, u_dat %p.\n", u_callback, w_callback_func, u_dat );
            if (std::is_same<w_callback_type, u_callback_type>::value)
            {
                if (w_callback_func) queue_cdecl_func_callback( (w_cdecl_func)w_callback_func, u_dat, sizeof(*u_dat) );
            }
            else
            {
                w_callback_type w_dat = *u_dat;
                if (w_callback_func) queue_cdecl_func_callback( (w_cdecl_func)w_callback_func, &w_dat, sizeof(w_dat) );
            }
        }

    public:
        static void *get_wrapped_callback( void ***w_callback_ptr )
        {
            *w_callback_ptr = &w_callback_func;
            return (void *)u_callback;
        }
};

template<typename w_callback_type, typename u_callback_type>
void *wrap_callback_cdecl_impl<w_callback_type, u_callback_type>::w_callback_func;

template <int sdk_version>
void *wrap_callback_cdecl( int eValue, void ***w_callback_ptr )
{
    static_assert(sdk_version == 151 || sdk_version == 153);

    switch (eValue)
    {
        case 201 /*ConnectionStatusChanged*/:
            if (sdk_version == 151)
                return wrap_callback_cdecl_impl<w_SteamNetConnectionStatusChangedCallback_t_151, u_SteamNetConnectionStatusChangedCallback_t_151>
                       ::get_wrapped_callback( w_callback_ptr );
            return wrap_callback_cdecl_impl<w_SteamNetConnectionStatusChangedCallback_t_153a, u_SteamNetConnectionStatusChangedCallback_t_153a>
                   ::get_wrapped_callback( w_callback_ptr );
        case 202 /*AuthStatusChanged*/:
            return wrap_callback_cdecl_impl<SteamNetAuthenticationStatus_t, SteamNetAuthenticationStatus_t>::get_wrapped_callback( w_callback_ptr );
        case 203 /*RelayNetworkStatusChanged*/:
            return wrap_callback_cdecl_impl<SteamRelayNetworkStatus_t, SteamRelayNetworkStatus_t>::get_wrapped_callback( w_callback_ptr );
        case 204 /*MessagesSessionRequest*/:
            return wrap_callback_cdecl_impl<SteamNetworkingMessagesSessionRequest_t_151, SteamNetworkingMessagesSessionRequest_t_151>::get_wrapped_callback( w_callback_ptr );
        case 205 /*MessagesSessionFailed*/:
            if (sdk_version == 151)
                return wrap_callback_cdecl_impl<SteamNetworkingMessagesSessionFailed_t_151, SteamNetworkingMessagesSessionFailed_t_151>
                       ::get_wrapped_callback( w_callback_ptr );
            return wrap_callback_cdecl_impl<SteamNetworkingMessagesSessionFailed_t_153a, SteamNetworkingMessagesSessionFailed_t_153a>
                   ::get_wrapped_callback( w_callback_ptr );
        case 206 /*CreateConnectionSignaling*/:
            FIXME( "CreateConnectionSignaling not handled.\n");
            break;
        case 207 /*FakeIPResult*/:
            return wrap_callback_cdecl_impl<SteamNetworkingFakeIPResult_t, SteamNetworkingFakeIPResult_t>
                   ::get_wrapped_callback( w_callback_ptr );
    }
    return nullptr;
}

class convert_SteamNetworkingConfigValue_t_array
{
    private:
        bool converted;

    public:
        SteamNetworkingConfigValue_t *converted_options;

        convert_SteamNetworkingConfigValue_t_array( const SteamNetworkingConfigValue_t *options, int count )
            : converted_options((SteamNetworkingConfigValue_t *)options), converted(false)
        {
            void **wrap_callback_ptr;
            void *u_fn;
            int i;

            if (!options || !count) return;

            for (i = 0; i < count; ++i)
            {
                TRACE( "option eValue %d, type %d, value %s.\n", options[i].m_eValue, options[i].m_eDataType, wine_dbgstr_longlong(*(int64_t *)&options[i].m_val) );
                if (converted) converted_options[i] = options[i];
                if ((u_fn = wrap_callback_cdecl<153>( options[i].m_eValue, &wrap_callback_ptr)))
                {
                    *wrap_callback_ptr = *(void **)&options[i].m_val;
                    if (!converted)
                    {
                        converted_options = (SteamNetworkingConfigValue_t *)malloc( sizeof(*converted_options) * count );
                        converted = true;
                        memcpy( converted_options, options, (i + 1) * sizeof(*converted_options) );
                    }
                    *(void **)&converted_options[i].m_val = u_fn;
                }
            }
        }
        ~convert_SteamNetworkingConfigValue_t_array()
        {
            if (converted) free( converted_options );
        }
};

template< typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_SetConfigValue( u_ISteamNetworkingUtils_SteamNetworkingUtils003 *iface, Params *params, bool wow64, Umsg const& )
{
    void *u_fn; /* api requires passing pointer-to-pointer */
    void **w_callback_ptr;

    TRACE("eValue %d, pArg %p.\n", params->eValue, params->pArg);

    if (params->pArg && (u_fn = wrap_callback_cdecl<151>( params->eValue, &w_callback_ptr )))
    {
        if (!*(void **)(const void *)params->pArg) u_fn = NULL;
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,
                                              params->scopeObj, params->eDataType, &u_fn );
        if (params->_ret) *w_callback_ptr = *(void **)(const void *)params->pArg;
    }
    else
    {
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }
    return 0;
}

template< typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingUtils_SetConfigValue( u_ISteamNetworkingUtils_SteamNetworkingUtils004 *iface, Params *params, bool wow64, Umsg const& )
{
    void *u_fn; /* api requires passing pointer-to-pointer */
    void **w_callback_ptr;

    TRACE("eValue %d, pArg %p.\n", params->eValue, params->pArg);

    if (params->pArg && (u_fn = wrap_callback_cdecl<153>( params->eValue, &w_callback_ptr )))
    {
        if (!*(void **)(const void *)params->pArg) u_fn = NULL;
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType,
                                              params->scopeObj, params->eDataType, &u_fn );
        if (params->_ret) *w_callback_ptr = *(void **)(const void *)params->pArg;
    }
    else
    {
        params->_ret = iface->SetConfigValue( params->eValue, params->eScopeType, params->scopeObj,
                                              params->eDataType, params->pArg );
    }
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingFakeUDPPort_ReceiveMessages( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessages( u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params, typename Umsg >
static NTSTATUS ISteamNetworkingMessages_ReceiveMessagesOnChannel( Iface *iface, Params *params, bool wow64, Umsg const& )
{
    Umsg **u_msgs = new Umsg*[params->nMaxMessages];
    params->_ret = iface->ReceiveMessagesOnChannel( params->nLocalChannel, u_msgs, params->nMaxMessages );
    if (params->_ret > 0) receive_messages_utow( params->_ret, u_msgs, params->ppOutMessages );
    delete[] u_msgs;
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_CreateListenSocketIP( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->CreateListenSocketIP( params->localAddress, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_ConnectP2PCustomSignaling( Iface *iface, Params *params, bool wow64, u_SteamNetworkingMessage_t_153a const & )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->ConnectP2PCustomSignaling( params->pSignaling, params->pPeerIdentity, params->nRemoteVirtualPort, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_ConnectByIPAddress( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->ConnectByIPAddress( params->address, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_CreateListenSocketP2P( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->CreateListenSocketP2P( params->nLocalVirtualPort, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_ConnectP2P( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->ConnectP2P( params->identityRemote, params->nRemoteVirtualPort, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_ConnectToHostedDedicatedServer( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->ConnectToHostedDedicatedServer( params->identityTarget, params->nRemoteVirtualPort, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_CreateHostedDedicatedServerListenSocket( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->CreateHostedDedicatedServerListenSocket( params->nLocalVirtualPort, params->nOptions, conv.converted_options );
    return 0;
}

template< typename Iface, typename Params >
static NTSTATUS ISteamNetworkingSockets_CreateListenSocketP2PFakeIP( Iface *iface, Params *params, bool wow64 )
{
    convert_SteamNetworkingConfigValue_t_array conv( params->pOptions, params->nOptions );
    params->_ret = iface->CreateListenSocketP2PFakeIP( params->idxFakePort, params->nOptions, conv.converted_options );
    return 0;
}

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets002, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_144() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets002, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_144() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets004, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_144() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets004, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_144() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceiveMessagesOnListenSocket, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, SendMessages, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ConnectP2PCustomSignaling, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets006, ReceivedP2PCustomSignal, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, SendMessages, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ConnectP2PCustomSignaling, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets008, ReceivedP2PCustomSignal, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets009, SendMessages, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ReceiveMessagesOnConnection, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ReceiveMessagesOnPollGroup, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, SendMessages, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, CreateListenSocketIP );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ConnectP2PCustomSignaling, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ConnectByIPAddress );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, CreateListenSocketP2P );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ConnectP2P );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, ConnectToHostedDedicatedServer );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, CreateHostedDedicatedServerListenSocket );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingSockets, SteamNetworkingSockets012, CreateListenSocketP2PFakeIP );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils003, AllocateMessage, u_SteamNetworkingMessage_t_147() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils003, SetConfigValue, u_SteamNetworkingMessage_t_147() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils004, AllocateMessage, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingUtils, SteamNetworkingUtils004, SetConfigValue, u_SteamNetworkingMessage_t_153a() );

LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingFakeUDPPort, SteamNetworkingFakeUDPPort001, ReceiveMessages, u_SteamNetworkingMessage_t_153a() );
LSTEAMCLIENT_UNIX_IMPL( ISteamNetworkingMessages, SteamNetworkingMessages002, ReceiveMessagesOnChannel, u_SteamNetworkingMessage_t_153a() );

#if defined(__x86_64__) || defined(__aarch64__)
#define STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ... ) \
    NTSTATUS wow64_ ## name ## _ ## version( void *args ) { return name( (struct wow64_ ## name ## _ ## version ## _params *)args, true, ## __VA_ARGS__ ); }
#else
#define STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ... )
#endif

#define STEAMCLIENT_UNIX_FUNC( name, version, ... ) \
    NTSTATUS name ## _ ## version( void *args ) { return name( (struct name ## _ ## version ## _params *)args, false, ## __VA_ARGS__ ); } \
    STEAMCLIENT_UNIX_WOW64_FUNC( name, version, ## __VA_ARGS__ )

STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 144 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 147 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_messages_receive, 153a );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_message_release, 147 );
STEAMCLIENT_UNIX_FUNC( steamclient_networking_message_release, 153a );
