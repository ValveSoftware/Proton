struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001;
struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t nAppID;
    void *pvBuffer;
    uint32_t cbBufferLength;
    uint32_t *piAppId;
    uint32_t *piSteamId;
    uint32_t *piSignature;
    uint32_t *pcbSignature;
};
extern void cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData( struct cppISteamAppTicket_STEAMAPPTICKET_INTERFACE_VERSION001_GetAppOwnershipTicketData_params *params );

