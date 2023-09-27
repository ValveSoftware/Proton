struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params
{
    void *linux_side;
    uint32 _ret;
    uint32 nAppID;
    void *pvBuffer;
    uint32 cbBufferLength;
    uint32 *piAppId;
    uint32 *piSteamId;
    uint32 *piSignature;
    uint32 *pcbSignature;
};
extern void cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params );

