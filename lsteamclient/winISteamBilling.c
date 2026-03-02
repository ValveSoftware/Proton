/* This file is auto-generated, do not edit. */
#include "steamclient_private.h"

WINE_DEFAULT_DEBUG_CHANNEL(steamclient);

DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_InitCreditCardPurchase, 16)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_InitPayPalPurchase, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetActivationCodeInfo, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_PurchaseWithActivationCode, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetFinalPrice, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_CancelPurchase, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_CompletePurchase, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_UpdateCardInfo, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_DeleteCard, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetCardList, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_Obsolete_GetLicenses, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_CancelLicense, 12)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetPurchaseReceipts, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_SetBillingAddress, 44)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetBillingAddress, 44)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_SetShippingAddress, 40)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetShippingAddress, 40)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_SetCardInfo, 36)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetCardInfo, 36)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicensePackageID, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicenseTimeCreated, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicenseTimeNextProcess, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicenseMinuteLimit, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicenseMinutesUsed, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicensePaymentMethod, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicenseFlags, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetLicensePurchaseCountryCode, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptPackageID, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptStatus, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptResultDetail, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptTransTime, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptTransID, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptPaymentMethod, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptBaseCost, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptTotalDiscount, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptTax, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptShipping, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetReceiptCountryCode, 8)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetNumLicenses, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetNumReceipts, 4)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_PurchaseWithMachineID, 12)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_InitClickAndBuyPurchase, 24)
DEFINE_THISCALL_WRAPPER(winISteamBilling_SteamBilling002_GetPreviousClickAndBuyAccount, 16)

int8_t __thiscall winISteamBilling_SteamBilling002_InitCreditCardPurchase(struct w_iface *_this, int32_t nPackageID, uint32_t nCardIndex, int8_t bStoreCardInfo)
{
    struct ISteamBilling_SteamBilling002_InitCreditCardPurchase_params params =
    {
        .u_iface = _this->u_iface,
        .nPackageID = nPackageID,
        .nCardIndex = nCardIndex,
        .bStoreCardInfo = bStoreCardInfo,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_InitCreditCardPurchase, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_InitPayPalPurchase(struct w_iface *_this, int32_t nPackageID)
{
    struct ISteamBilling_SteamBilling002_InitPayPalPurchase_params params =
    {
        .u_iface = _this->u_iface,
        .nPackageID = nPackageID,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_InitPayPalPurchase, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetActivationCodeInfo(struct w_iface *_this, const char *pchActivationCode)
{
    struct ISteamBilling_SteamBilling002_GetActivationCodeInfo_params params =
    {
        .u_iface = _this->u_iface,
        .pchActivationCode = pchActivationCode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetActivationCodeInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_PurchaseWithActivationCode(struct w_iface *_this, const char *pchActivationCode)
{
    struct ISteamBilling_SteamBilling002_PurchaseWithActivationCode_params params =
    {
        .u_iface = _this->u_iface,
        .pchActivationCode = pchActivationCode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_PurchaseWithActivationCode, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetFinalPrice(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_GetFinalPrice_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetFinalPrice, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_CancelPurchase(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_CancelPurchase_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_CancelPurchase, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_CompletePurchase(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_CompletePurchase_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_CompletePurchase, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_UpdateCardInfo(struct w_iface *_this, uint32_t nCardIndex)
{
    struct ISteamBilling_SteamBilling002_UpdateCardInfo_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_UpdateCardInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_DeleteCard(struct w_iface *_this, uint32_t nCardIndex)
{
    struct ISteamBilling_SteamBilling002_DeleteCard_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_DeleteCard, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetCardList(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_GetCardList_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetCardList, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_Obsolete_GetLicenses(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_Obsolete_GetLicenses_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_Obsolete_GetLicenses, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_CancelLicense(struct w_iface *_this, int32_t nPackageID, int32_t nCancelReason)
{
    struct ISteamBilling_SteamBilling002_CancelLicense_params params =
    {
        .u_iface = _this->u_iface,
        .nPackageID = nPackageID,
        .nCancelReason = nCancelReason,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_CancelLicense, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetPurchaseReceipts(struct w_iface *_this, int8_t bUnacknowledgedOnly)
{
    struct ISteamBilling_SteamBilling002_GetPurchaseReceipts_params params =
    {
        .u_iface = _this->u_iface,
        .bUnacknowledgedOnly = bUnacknowledgedOnly,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetPurchaseReceipts, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_SetBillingAddress(struct w_iface *_this, uint32_t nCardIndex, const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
    struct ISteamBilling_SteamBilling002_SetBillingAddress_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
        .pchFirstName = pchFirstName,
        .pchLastName = pchLastName,
        .pchAddress1 = pchAddress1,
        .pchAddress2 = pchAddress2,
        .pchCity = pchCity,
        .pchPostcode = pchPostcode,
        .pchState = pchState,
        .pchCountry = pchCountry,
        .pchPhone = pchPhone,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_SetBillingAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetBillingAddress(struct w_iface *_this, uint32_t nCardIndex, char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
    struct ISteamBilling_SteamBilling002_GetBillingAddress_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
        .pchFirstName = pchFirstName,
        .pchLastName = pchLastName,
        .pchAddress1 = pchAddress1,
        .pchAddress2 = pchAddress2,
        .pchCity = pchCity,
        .pchPostcode = pchPostcode,
        .pchState = pchState,
        .pchCountry = pchCountry,
        .pchPhone = pchPhone,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetBillingAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_SetShippingAddress(struct w_iface *_this, const char *pchFirstName, const char *pchLastName, const char *pchAddress1, const char *pchAddress2, const char *pchCity, const char *pchPostcode, const char *pchState, const char *pchCountry, const char *pchPhone)
{
    struct ISteamBilling_SteamBilling002_SetShippingAddress_params params =
    {
        .u_iface = _this->u_iface,
        .pchFirstName = pchFirstName,
        .pchLastName = pchLastName,
        .pchAddress1 = pchAddress1,
        .pchAddress2 = pchAddress2,
        .pchCity = pchCity,
        .pchPostcode = pchPostcode,
        .pchState = pchState,
        .pchCountry = pchCountry,
        .pchPhone = pchPhone,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_SetShippingAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetShippingAddress(struct w_iface *_this, char *pchFirstName, char *pchLastName, char *pchAddress1, char *pchAddress2, char *pchCity, char *pchPostcode, char *pchState, char *pchCountry, char *pchPhone)
{
    struct ISteamBilling_SteamBilling002_GetShippingAddress_params params =
    {
        .u_iface = _this->u_iface,
        .pchFirstName = pchFirstName,
        .pchLastName = pchLastName,
        .pchAddress1 = pchAddress1,
        .pchAddress2 = pchAddress2,
        .pchCity = pchCity,
        .pchPostcode = pchPostcode,
        .pchState = pchState,
        .pchCountry = pchCountry,
        .pchPhone = pchPhone,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetShippingAddress, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_SetCardInfo(struct w_iface *_this, uint32_t nCardIndex, int32_t eCreditCardType, const char *pchCardNumber, const char *pchCardHolderFirstName, const char *pchCardHolderLastName, const char *pchCardExpYear, const char *pchCardExpMonth, const char *pchCardCVV2)
{
    struct ISteamBilling_SteamBilling002_SetCardInfo_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
        .eCreditCardType = eCreditCardType,
        .pchCardNumber = pchCardNumber,
        .pchCardHolderFirstName = pchCardHolderFirstName,
        .pchCardHolderLastName = pchCardHolderLastName,
        .pchCardExpYear = pchCardExpYear,
        .pchCardExpMonth = pchCardExpMonth,
        .pchCardCVV2 = pchCardCVV2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_SetCardInfo, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetCardInfo(struct w_iface *_this, uint32_t nCardIndex, int32_t *eCreditCardType, char *pchCardNumber, char *pchCardHolderFirstName, char *pchCardHolderLastName, char *pchCardExpYear, char *pchCardExpMonth, char *pchCardCVV2)
{
    struct ISteamBilling_SteamBilling002_GetCardInfo_params params =
    {
        .u_iface = _this->u_iface,
        .nCardIndex = nCardIndex,
        .eCreditCardType = eCreditCardType,
        .pchCardNumber = pchCardNumber,
        .pchCardHolderFirstName = pchCardHolderFirstName,
        .pchCardHolderLastName = pchCardHolderLastName,
        .pchCardExpYear = pchCardExpYear,
        .pchCardExpMonth = pchCardExpMonth,
        .pchCardCVV2 = pchCardCVV2,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetCardInfo, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetLicensePackageID(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicensePackageID_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicensePackageID, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetLicenseTimeCreated(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicenseTimeCreated_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicenseTimeCreated, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetLicenseTimeNextProcess(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicenseTimeNextProcess_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicenseTimeNextProcess, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetLicenseMinuteLimit(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicenseMinuteLimit_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicenseMinuteLimit, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetLicenseMinutesUsed(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicenseMinutesUsed_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicenseMinutesUsed, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetLicensePaymentMethod(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicensePaymentMethod_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicensePaymentMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetLicenseFlags(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicenseFlags_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicenseFlags, &params );
    return params._ret;
}

const char * __thiscall winISteamBilling_SteamBilling002_GetLicensePurchaseCountryCode(struct w_iface *_this, uint32_t nLicenseIndex)
{
    struct ISteamBilling_SteamBilling002_GetLicensePurchaseCountryCode_params params =
    {
        .u_iface = _this->u_iface,
        .nLicenseIndex = nLicenseIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetLicensePurchaseCountryCode, &params );
    return get_unix_buffer( params._ret );
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptPackageID(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptPackageID_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptPackageID, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptStatus(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptStatus_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptStatus, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptResultDetail(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptResultDetail_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptResultDetail, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptTransTime(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptTransTime_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptTransTime, &params );
    return params._ret;
}

uint64_t __thiscall winISteamBilling_SteamBilling002_GetReceiptTransID(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptTransID_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptTransID, &params );
    return params._ret;
}

int32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptPaymentMethod(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptPaymentMethod_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptPaymentMethod, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptBaseCost(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptBaseCost_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptBaseCost, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptTotalDiscount(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptTotalDiscount_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptTotalDiscount, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptTax(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptTax_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptTax, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetReceiptShipping(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptShipping_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptShipping, &params );
    return params._ret;
}

const char * __thiscall winISteamBilling_SteamBilling002_GetReceiptCountryCode(struct w_iface *_this, uint32_t nReceiptIndex)
{
    struct ISteamBilling_SteamBilling002_GetReceiptCountryCode_params params =
    {
        .u_iface = _this->u_iface,
        .nReceiptIndex = nReceiptIndex,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetReceiptCountryCode, &params );
    return get_unix_buffer( params._ret );
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetNumLicenses(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_GetNumLicenses_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetNumLicenses, &params );
    return params._ret;
}

uint32_t __thiscall winISteamBilling_SteamBilling002_GetNumReceipts(struct w_iface *_this)
{
    struct ISteamBilling_SteamBilling002_GetNumReceipts_params params =
    {
        .u_iface = _this->u_iface,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetNumReceipts, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_PurchaseWithMachineID(struct w_iface *_this, int32_t nPackageID, const char *pchCustomData)
{
    struct ISteamBilling_SteamBilling002_PurchaseWithMachineID_params params =
    {
        .u_iface = _this->u_iface,
        .nPackageID = nPackageID,
        .pchCustomData = pchCustomData,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_PurchaseWithMachineID, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_InitClickAndBuyPurchase(struct w_iface *_this, int32_t nPackageID, int64_t nAccountNum, const char *pchState, const char *pchCountryCode)
{
    struct ISteamBilling_SteamBilling002_InitClickAndBuyPurchase_params params =
    {
        .u_iface = _this->u_iface,
        .nPackageID = nPackageID,
        .nAccountNum = nAccountNum,
        .pchState = pchState,
        .pchCountryCode = pchCountryCode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_InitClickAndBuyPurchase, &params );
    return params._ret;
}

int8_t __thiscall winISteamBilling_SteamBilling002_GetPreviousClickAndBuyAccount(struct w_iface *_this, int64_t *pnAccountNum, char *pchState, char *pchCountryCode)
{
    struct ISteamBilling_SteamBilling002_GetPreviousClickAndBuyAccount_params params =
    {
        .u_iface = _this->u_iface,
        .pnAccountNum = pnAccountNum,
        .pchState = pchState,
        .pchCountryCode = pchCountryCode,
    };
    TRACE("%p\n", _this);
    STEAMCLIENT_CALL( ISteamBilling_SteamBilling002_GetPreviousClickAndBuyAccount, &params );
    return params._ret;
}

extern vtable_ptr winISteamBilling_SteamBilling002_vtable;

DEFINE_RTTI_DATA0(winISteamBilling_SteamBilling002, 0, ".?AVISteamBilling@@")

__ASM_BLOCK_BEGIN(winISteamBilling_SteamBilling002_vtables)
    __ASM_VTABLE(winISteamBilling_SteamBilling002,
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_InitCreditCardPurchase)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_InitPayPalPurchase)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetActivationCodeInfo)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_PurchaseWithActivationCode)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetFinalPrice)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_CancelPurchase)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_CompletePurchase)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_UpdateCardInfo)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_DeleteCard)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetCardList)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_Obsolete_GetLicenses)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_CancelLicense)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetPurchaseReceipts)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_SetBillingAddress)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetBillingAddress)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_SetShippingAddress)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetShippingAddress)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_SetCardInfo)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetCardInfo)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicensePackageID)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicenseTimeCreated)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicenseTimeNextProcess)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicenseMinuteLimit)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicenseMinutesUsed)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicensePaymentMethod)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicenseFlags)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetLicensePurchaseCountryCode)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptPackageID)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptStatus)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptResultDetail)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptTransTime)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptTransID)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptPaymentMethod)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptBaseCost)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptTotalDiscount)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptTax)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptShipping)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetReceiptCountryCode)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetNumLicenses)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetNumReceipts)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_PurchaseWithMachineID)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_InitClickAndBuyPurchase)
        VTABLE_ADD_FUNC(winISteamBilling_SteamBilling002_GetPreviousClickAndBuyAccount)
    );
__ASM_BLOCK_END

struct w_iface *create_winISteamBilling_SteamBilling002( struct u_iface u_iface )
{
    struct w_iface *r = alloc_mem_for_iface(sizeof(struct w_iface), "SteamBilling002");
    TRACE("-> %p\n", r);
    r->vtable = alloc_vtable(&winISteamBilling_SteamBilling002_vtable, 43, "SteamBilling002");
    r->u_iface = u_iface;
    return r;
}

void init_winISteamBilling_rtti( char *base )
{
#if defined(__x86_64__) || defined(__aarch64__)
    init_winISteamBilling_SteamBilling002_rtti( base );
#endif /* defined(__x86_64__) || defined(__aarch64__) */
}
