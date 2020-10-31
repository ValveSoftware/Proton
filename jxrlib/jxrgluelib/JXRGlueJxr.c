
//*@@@+++@@@@******************************************************************
//
// Copyright © Microsoft Corp.
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// 
// • Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// • Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
// LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
// CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
// SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
// CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
// ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
// POSSIBILITY OF SUCH DAMAGE.
//
//*@@@---@@@@******************************************************************
#include <limits.h>
#include <JXRGlue.h>


static const char szHDPhotoFormat[] = "<dc:format>image/vnd.ms-photo</dc:format>";
const U32 IFDEntryTypeSizes[] = { 0, 1, 1, 2, 4, 8, 1, 1, 2, 4, 8, 4, 8 };
const U32 SizeofIFDEntry = sizeof(struct IFDEntry);


void CalcMetadataSizeLPSTR(const DPKPROPVARIANT var,
                           U16 *pcInactiveMetadata,
                           U32 *pcbOffsetSize,
                           U32 *pcbCount)
{
    if (DPKVT_EMPTY != var.vt)
    {
        U32 uiLenWithNull = (U32)strlen(var.VT.pszVal) + 1; // +1 for NULL;
        assert(DPKVT_LPSTR == var.vt);

        // We only use offset if size > 4
        if (uiLenWithNull > 4)
            *pcbOffsetSize += uiLenWithNull;

        if (pcbCount)
            *pcbCount = uiLenWithNull;
    }
    else
        *pcInactiveMetadata += 1;
}

void CalcMetadataSizeLPWSTR(const DPKPROPVARIANT var,
                            U16 *pcInactiveMetadata,
                            U32 *pcbOffsetSize,
                            U32 *pcbCount)
{
    if (DPKVT_EMPTY != var.vt)
    {
        U32 uiCBWithNull = sizeof(U16) * ((U32)wcslen((wchar_t *) var.VT.pwszVal) + 1); // +1 for NULL term;
        assert(DPKVT_LPWSTR == var.vt);

        // We only use offset if size > 4
        if (uiCBWithNull > 4)
            *pcbOffsetSize += uiCBWithNull;

        if (pcbCount)
            *pcbCount = uiCBWithNull;
    }
    else
        *pcInactiveMetadata += 1;
}

void CalcMetadataSizeUI2(const DPKPROPVARIANT var,
                         U16 *pcInactiveMetadata,
                         U32 *pcbMetadataSize)
{
    UNREFERENCED_PARAMETER( pcbMetadataSize );
    if (DPKVT_EMPTY != var.vt)
    {
        assert(DPKVT_UI2 == var.vt);
        // This is a single UI2, so it will not be written via offset, but rather as value
    }
    else
        *pcInactiveMetadata += 1;
}

void CalcMetadataSizeUI4(const DPKPROPVARIANT var,
                         U16 *pcInactiveMetadata,
                         U32 *pcbContainer)
{
    UNREFERENCED_PARAMETER( pcbContainer );
    if (DPKVT_EMPTY != var.vt)
    {
        assert(DPKVT_UI4 == var.vt);
        // This is a single UI4, so it will not be written via offset, but rather as value
    }
    else
        *pcInactiveMetadata += 1;
}

ERR CalcMetadataOffsetSize(PKImageEncode* pIE,
                           U16 *pcInactiveMetadata,
                           U32 *pcbMetadataSize)
{
    ERR err = WMP_errSuccess;

    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarImageDescription, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarCameraMake, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarCameraModel, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarSoftware, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarDateTime, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarArtist, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarCopyright, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeUI2(pIE->sDescMetadata.pvarRatingStars, pcInactiveMetadata, pcbMetadataSize);
    CalcMetadataSizeUI2(pIE->sDescMetadata.pvarRatingValue, pcInactiveMetadata, pcbMetadataSize);
    CalcMetadataSizeLPWSTR(pIE->sDescMetadata.pvarCaption, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarDocumentName, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarPageName, pcInactiveMetadata, pcbMetadataSize, NULL);
    CalcMetadataSizeUI4(pIE->sDescMetadata.pvarPageNumber, pcInactiveMetadata, pcbMetadataSize);
    CalcMetadataSizeLPSTR(pIE->sDescMetadata.pvarHostComputer, pcInactiveMetadata, pcbMetadataSize, NULL);

    return err;
}


ERR CopyDescMetadata(DPKPROPVARIANT *pvarDst,
                     const DPKPROPVARIANT varSrc)
{
    ERR err = WMP_errSuccess;
    size_t  uiSize;

    pvarDst->vt = varSrc.vt;
    switch (varSrc.vt)
    {
        case DPKVT_LPSTR:
            pvarDst->vt = DPKVT_LPSTR;
            uiSize = strlen(varSrc.VT.pszVal) + 1;
            Call(PKAlloc((void **) &pvarDst->VT.pszVal, uiSize));
            memcpy(pvarDst->VT.pszVal, varSrc.VT.pszVal, uiSize);
            break;
            
        case DPKVT_LPWSTR:
            pvarDst->vt = DPKVT_LPWSTR;
            uiSize = sizeof(U16) * (wcslen((wchar_t *) varSrc.VT.pwszVal) + 1); // +1 for NULL term
            Call(PKAlloc((void **) &pvarDst->VT.pszVal, uiSize));
            memcpy(pvarDst->VT.pwszVal, varSrc.VT.pwszVal, uiSize);
            break;

        case DPKVT_UI2:
            pvarDst->VT.uiVal = varSrc.VT.uiVal;
            break;

        case DPKVT_UI4:
            pvarDst->VT.ulVal = varSrc.VT.ulVal;
            break;

        default:
            assert(FALSE); // This case is not handled
            FailIf(TRUE, WMP_errNotYetImplemented);

            // *** FALL THROUGH ***

        case DPKVT_EMPTY:
            memset(pvarDst, 0, sizeof(*pvarDst));
            assert(DPKVT_EMPTY == pvarDst->vt);
            break;
    }

Cleanup:
    return err;
}


void FreeDescMetadata(DPKPROPVARIANT *pvar)
{
    switch (pvar->vt)
    {
        case DPKVT_LPSTR:
            PKFree((void **) &pvar->VT.pszVal);
            break;

        case DPKVT_LPWSTR:
            PKFree((void **) &pvar->VT.pwszVal);
            break;

        default:
            assert(FALSE); // This case is not handled
            break;

        case DPKVT_EMPTY:
        case DPKVT_UI2:
        case DPKVT_UI4:
            break;
    }
}


ERR WriteDescMetadata(PKImageEncode *pIE,
                      const DPKPROPVARIANT var,
                      WmpDE *pwmpDE,
                      U32 *puiCurrDescMetadataOffset,
                      size_t *poffPos)
{
    ERR err = WMP_errSuccess;
    WmpDEMisc* pDEMisc = &pIE->WMP.wmiDEMisc;
    struct WMPStream* pWS = pIE->pStream;
    U32 uiMetadataOffsetSize = 0;
    U32 uiCount = 0;
    U32 uiDataWrittenToOffset = 0;
    U16 uiTemp = 0;

    if (0 == pDEMisc->uDescMetadataOffset || 0 == pDEMisc->uDescMetadataByteCount)
        goto Cleanup; // Nothing to do here

    // Sanity check before - can be equal due to remaining metadata being DPKVT_EMPTY
    assert(*puiCurrDescMetadataOffset <= pDEMisc->uDescMetadataByteCount);

    switch (var.vt)
    {
        case DPKVT_EMPTY:
            break;

        case DPKVT_LPSTR:
            CalcMetadataSizeLPSTR(var, &uiTemp, &uiMetadataOffsetSize, &uiCount);
            pwmpDE->uCount = uiCount;
            pwmpDE->uValueOrOffset = pDEMisc->uDescMetadataOffset + *puiCurrDescMetadataOffset;
            Call(WriteWmpDE(pWS, poffPos, pwmpDE, (U8*)var.VT.pszVal, &uiDataWrittenToOffset));
            break;

        case DPKVT_LPWSTR:
            CalcMetadataSizeLPWSTR(var, &uiTemp, &uiMetadataOffsetSize, &uiCount);
            pwmpDE->uCount = uiCount;
            pwmpDE->uValueOrOffset = pDEMisc->uDescMetadataOffset + *puiCurrDescMetadataOffset;
            Call(WriteWmpDE(pWS, poffPos, pwmpDE, (U8*)var.VT.pwszVal, &uiDataWrittenToOffset));
            break;

        case DPKVT_UI2:
            CalcMetadataSizeUI2(var, &uiTemp, &uiMetadataOffsetSize);
            pwmpDE->uCount = 1;
            pwmpDE->uValueOrOffset = var.VT.uiVal;
            Call(WriteWmpDE(pWS, poffPos, pwmpDE, NULL, NULL));
            break;

        case DPKVT_UI4:
            CalcMetadataSizeUI4(var, &uiTemp, &uiMetadataOffsetSize);
            pwmpDE->uCount = 1;
            pwmpDE->uValueOrOffset = var.VT.ulVal;
            Call(WriteWmpDE(pWS, poffPos, pwmpDE, NULL, NULL));
            break;

        default:
            assert(FALSE); // This case is not handled
            FailIf(TRUE, WMP_errNotYetImplemented);
            break;
    }

    *puiCurrDescMetadataOffset += uiDataWrittenToOffset;

    // Sanity check after
    assert(*puiCurrDescMetadataOffset <= pDEMisc->uDescMetadataByteCount); // Can be equal

Cleanup:
    return err;
}



//================================================================
// PKImageEncode_WMP
//================================================================
ERR WriteContainerPre(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    const U32 OFFSET_OF_PFD = 0x20;
    struct WMPStream* pWS = pIE->pStream;
    WmpDEMisc* pDEMisc = &pIE->WMP.wmiDEMisc;
    PKPixelInfo PI;
    size_t offPos = 0;

    U8 IIMM[2] = {'\x49', '\x49'};
    // const U32 cbWmpDEMisc = OFFSET_OF_PFD;
    U32 cbMetadataOffsetSize = 0;
    U16 cInactiveMetadata = 0;
    U32 uiCurrDescMetadataOffset = 0;

    static WmpDE wmpDEs[] =
    {
        {WMP_tagDocumentName, WMP_typASCII, 1, (U32) -1},     // Descriptive metadata
        {WMP_tagImageDescription, WMP_typASCII, 1, (U32) -1}, // Descriptive metadata
        {WMP_tagCameraMake, WMP_typASCII, 1, (U32) -1},       // Descriptive metadata
        {WMP_tagCameraModel, WMP_typASCII, 1, (U32) -1},      // Descriptive metadata
        {WMP_tagPageName, WMP_typASCII, 1, (U32) -1},         // Descriptive metadata
        {WMP_tagPageNumber, WMP_typSHORT, 2, (U32) -1},       // Descriptive metadata
        {WMP_tagSoftware, WMP_typASCII, 1, (U32) -1},         // Descriptive metadata
        {WMP_tagDateTime, WMP_typASCII, 1, (U32) -1},         // Descriptive metadata
        {WMP_tagArtist, WMP_typASCII, 1, (U32) -1},           // Descriptive metadata
        {WMP_tagHostComputer, WMP_typASCII, 1, (U32) -1},     // Descriptive metadata
        {WMP_tagRatingStars, WMP_typSHORT, 1, (U32) -1},      // Descriptive metadata
        {WMP_tagRatingValue, WMP_typSHORT, 1, (U32) -1},      // Descriptive metadata
        {WMP_tagCopyright, WMP_typASCII, 1, (U32) -1},        // Descriptive metadata
        {WMP_tagCaption, WMP_typBYTE, 1, (U32) -1},           // Descriptive metadata

        {WMP_tagXMPMetadata, WMP_typBYTE, 1, (U32) -1},
        {WMP_tagIPTCNAAMetadata, WMP_typBYTE, 1, (U32) -1},
        {WMP_tagPhotoshopMetadata, WMP_typBYTE, 1, (U32) -1},
        {WMP_tagEXIFMetadata, WMP_typLONG, 1, (U32) -1},
        {WMP_tagIccProfile, WMP_typUNDEFINED, 1, (U32) -1},
        {WMP_tagGPSInfoMetadata, WMP_typLONG, 1, (U32) -1},

        {WMP_tagPixelFormat, WMP_typBYTE, 16, (U32) -1},
        {WMP_tagTransformation, WMP_typLONG, 1, (U32) -1},
        {WMP_tagImageWidth, WMP_typLONG, 1, (U32) -1},
        {WMP_tagImageHeight, WMP_typLONG, 1, (U32) -1},
        {WMP_tagWidthResolution, WMP_typFLOAT, 1, (U32) -1},
        {WMP_tagHeightResolution, WMP_typFLOAT, 1, (U32) -1},
        {WMP_tagImageOffset, WMP_typLONG, 1, (U32) -1},
        {WMP_tagImageByteCount, WMP_typLONG, 1, (U32) -1},
        {WMP_tagAlphaOffset, WMP_typLONG, 1, (U32) -1},
        {WMP_tagAlphaByteCount, WMP_typLONG, 1, (U32) -1},
    };
    U16 cWmpDEs = sizeof(wmpDEs) / sizeof(wmpDEs[0]);
    WmpDE wmpDE = {0};
    size_t i = 0;

    U8* pbEXIFMetadata = NULL;
    U8* pbGPSInfoMetadata = NULL;

    // const unsigned char Zero[0x20] = { 0 };
    const unsigned char Zero[sizeof(struct IFDEntry) * sizeof(wmpDEs) / sizeof(wmpDEs[0]) + sizeof(U32)] = { 0 };
    assert(SizeofIFDEntry * sizeof(wmpDEs) / sizeof(wmpDEs[0]) + sizeof(U32) > 0x20);

    //================
    Call(pWS->GetPos(pWS, &offPos));
    FailIf(0 != offPos, WMP_errUnsupportedFormat);

    //================
    // Header (8 bytes)
    Call(pWS->Write(pWS, IIMM, sizeof(IIMM))); offPos += 2;
    Call(PutUShort(pWS, offPos, 0x01bc)); offPos += 2;
    Call(PutULong(pWS, offPos, (U32)OFFSET_OF_PFD)); offPos += 4;

    //================
    // Write overflow area
    pDEMisc->uOffPixelFormat = (U32)offPos;
    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    //Call(pWS->Write(pWS, PI.pGUIDPixFmt, sizeof(*PI.pGUIDPixFmt))); offPos += 16;
    /** following code is endian-agnostic **/
    {
        unsigned char *pGuid = (unsigned char *) &pIE->guidPixFormat;
        Call(PutULong(pWS, offPos, ((U32 *)pGuid)[0]));
        Call(PutUShort(pWS, offPos + 4, ((U16 *)(pGuid + 4))[0]));
        Call(PutUShort(pWS, offPos + 6, ((U16 *)(pGuid + 6))[0]));
        Call(pWS->Write(pWS, pGuid + 8, 8));
        offPos += 16;
    }

    //================
    // Tally up space required for descriptive metadata 
    Call(CalcMetadataOffsetSize(pIE, &cInactiveMetadata, &cbMetadataOffsetSize));
    cWmpDEs -= cInactiveMetadata;

    //================
    // PFD
    assert (offPos <= OFFSET_OF_PFD); // otherwise stuff is overwritten
    if (offPos < OFFSET_OF_PFD)
        Call(pWS->Write(pWS, Zero, OFFSET_OF_PFD - offPos));
    offPos = (size_t)OFFSET_OF_PFD;

    if (!pIE->WMP.bHasAlpha || pIE->WMP.wmiSCP.uAlphaMode != 2) //no planar alpha
        cWmpDEs -= 2;

    if (0 == pIE->cbXMPMetadataByteCount)
        cWmpDEs -= 1; // No XMP metadata

    if (0 == pIE->cbIPTCNAAMetadataByteCount)
        cWmpDEs -= 1; // No IPTCNAA metadata

    if (0 == pIE->cbPhotoshopMetadataByteCount)
        cWmpDEs -= 1; // No Photoshop metadata

    if (0 == pIE->cbEXIFMetadataByteCount)
        cWmpDEs -= 1; // No EXIF metadata

    if (0 == pIE->cbColorContext)
        cWmpDEs -= 1; // No color context

    if (0 == pIE->cbGPSInfoMetadataByteCount)
        cWmpDEs -= 1; // No GPSInfo metadata

    pDEMisc->uImageOffset = (U32)(offPos + sizeof(U16) + SizeofIFDEntry * cWmpDEs + sizeof(U32));
    
    if (cbMetadataOffsetSize > 0)
    {
        pDEMisc->uDescMetadataByteCount = cbMetadataOffsetSize;
        pDEMisc->uDescMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += cbMetadataOffsetSize;
    }

    if (pIE->cbXMPMetadataByteCount > 0)
    {
        pDEMisc->uXMPMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += pIE->cbXMPMetadataByteCount;
    }

    if (pIE->cbIPTCNAAMetadataByteCount > 0)
    {
        pDEMisc->uIPTCNAAMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += pIE->cbIPTCNAAMetadataByteCount;
    }

    if (pIE->cbPhotoshopMetadataByteCount > 0)
    {
        pDEMisc->uPhotoshopMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += pIE->cbPhotoshopMetadataByteCount;
    }

    if (pIE->cbEXIFMetadataByteCount > 0)
    {
        pDEMisc->uEXIFMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += (pDEMisc->uImageOffset & 1);
        pDEMisc->uImageOffset += pIE->cbEXIFMetadataByteCount;
    }

    if (pIE->cbColorContext > 0)
    {
        pDEMisc->uColorProfileOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += pIE->cbColorContext;
    }

    if (pIE->cbGPSInfoMetadataByteCount > 0)
    {
        pDEMisc->uGPSInfoMetadataOffset = pDEMisc->uImageOffset;
        pDEMisc->uImageOffset += (pDEMisc->uImageOffset & 1);
        pDEMisc->uImageOffset += pIE->cbGPSInfoMetadataByteCount;
    }

    Call(PutUShort(pWS, offPos, cWmpDEs)); offPos += 2;
    Call(pWS->Write(pWS, Zero, SizeofIFDEntry * cWmpDEs + sizeof(U32)));

    //================
    wmpDE = wmpDEs[i++];
    assert(WMP_tagDocumentName == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarDocumentName, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagImageDescription == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarImageDescription, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagCameraMake == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarCameraMake, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagCameraModel == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarCameraModel, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagPageName == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarPageName, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagPageNumber == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarPageNumber, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagSoftware == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarSoftware, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagDateTime == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarDateTime, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagArtist == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarArtist, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagHostComputer == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarHostComputer, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagRatingStars == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarRatingStars, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagRatingValue == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarRatingValue, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagCopyright == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarCopyright, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagCaption == wmpDE.uTag);
    Call(WriteDescMetadata(pIE, pIE->sDescMetadata.pvarCaption, &wmpDE,
        &uiCurrDescMetadataOffset, &offPos));

    // XMP Metadata
    wmpDE = wmpDEs[i++];
    assert(WMP_tagXMPMetadata == wmpDE.uTag);
    if (pIE->cbXMPMetadataByteCount > 0)
    {
        U32 uiTemp;
        wmpDE.uCount = pIE->cbXMPMetadataByteCount;
        wmpDE.uValueOrOffset = pDEMisc->uXMPMetadataOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, pIE->pbXMPMetadata, &uiTemp));
    }

    // IPTCNAA Metadata
    wmpDE = wmpDEs[i++];
    assert(WMP_tagIPTCNAAMetadata == wmpDE.uTag);
    if (pIE->cbIPTCNAAMetadataByteCount > 0)
    {
        U32 uiTemp;
        wmpDE.uCount = pIE->cbIPTCNAAMetadataByteCount;
        wmpDE.uValueOrOffset = pDEMisc->uIPTCNAAMetadataOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, pIE->pbIPTCNAAMetadata, &uiTemp));
    }

    // Photoshop Metadata
    wmpDE = wmpDEs[i++];
    assert(WMP_tagPhotoshopMetadata == wmpDE.uTag);
    if (pIE->cbPhotoshopMetadataByteCount > 0)
    {
        U32 uiTemp;
        wmpDE.uCount = pIE->cbPhotoshopMetadataByteCount;
        wmpDE.uValueOrOffset = pDEMisc->uPhotoshopMetadataOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, pIE->pbPhotoshopMetadata, &uiTemp));
    }

    // EXIF Metadata
    wmpDE = wmpDEs[i++];
    assert(WMP_tagEXIFMetadata == wmpDE.uTag);
    if (pIE->cbEXIFMetadataByteCount > 0)
    {
        U32 uiTemp;
        if ((pDEMisc->uEXIFMetadataOffset & 1) != 0)
        {
            Call(pWS->SetPos(pWS, pDEMisc->uEXIFMetadataOffset));
            Call(pWS->Write(pWS, Zero, 1));
        }
        pDEMisc->uEXIFMetadataOffset += (pDEMisc->uEXIFMetadataOffset & 1);
        wmpDE.uValueOrOffset = pDEMisc->uEXIFMetadataOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

        Call(PKAlloc((void **) &pbEXIFMetadata, pIE->cbEXIFMetadataByteCount));
        uiTemp = pDEMisc->uEXIFMetadataOffset;
        Call(BufferCopyIFD(pIE->pbEXIFMetadata, pIE->cbEXIFMetadataByteCount, 0, WMP_INTEL_ENDIAN,
            pbEXIFMetadata - uiTemp, uiTemp + pIE->cbEXIFMetadataByteCount, &uiTemp));
        Call(pWS->SetPos(pWS, pDEMisc->uEXIFMetadataOffset));
        Call(pWS->Write(pWS, pbEXIFMetadata, pIE->cbEXIFMetadataByteCount));
    }

    // ICC Profile
    wmpDE = wmpDEs[i++];
    assert(WMP_tagIccProfile == wmpDE.uTag);
    if (pIE->cbColorContext > 0)
    {
        U32 uiTemp;
        wmpDE.uCount = pIE->cbColorContext;
        wmpDE.uValueOrOffset = pDEMisc->uColorProfileOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, pIE->pbColorContext, &uiTemp));
    }

    // GPSInfo Metadata
    wmpDE = wmpDEs[i++];
    assert(WMP_tagGPSInfoMetadata == wmpDE.uTag);
    if (pIE->cbGPSInfoMetadataByteCount > 0)
    {
        U32 uiTemp;
        if ((pDEMisc->uGPSInfoMetadataOffset & 1) != 0)
        {
            Call(pWS->SetPos(pWS, pDEMisc->uGPSInfoMetadataOffset));
            Call(pWS->Write(pWS, Zero, 1));
        }
        pDEMisc->uGPSInfoMetadataOffset += (pDEMisc->uGPSInfoMetadataOffset & 1);
        wmpDE.uValueOrOffset = pDEMisc->uGPSInfoMetadataOffset;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

        Call(PKAlloc((void **) &pbGPSInfoMetadata, pIE->cbGPSInfoMetadataByteCount));
        uiTemp = pDEMisc->uGPSInfoMetadataOffset;
        Call(BufferCopyIFD(pIE->pbGPSInfoMetadata, pIE->cbGPSInfoMetadataByteCount, 0, WMP_INTEL_ENDIAN,
            pbGPSInfoMetadata - uiTemp, uiTemp + pIE->cbGPSInfoMetadataByteCount, &uiTemp));
        Call(pWS->SetPos(pWS, pDEMisc->uGPSInfoMetadataOffset));
        Call(pWS->Write(pWS, pbGPSInfoMetadata, pIE->cbGPSInfoMetadataByteCount));
    }

    wmpDE = wmpDEs[i++];
    assert(WMP_tagPixelFormat == wmpDE.uTag);
    wmpDE.uValueOrOffset = pDEMisc->uOffPixelFormat;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagTransformation == wmpDE.uTag);
    wmpDE.uValueOrOffset = pIE->WMP.oOrientation;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagImageWidth == wmpDE.uTag);
    wmpDE.uValueOrOffset = pIE->uWidth;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagImageHeight == wmpDE.uTag);
    wmpDE.uValueOrOffset = pIE->uHeight;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));
    
    wmpDE = wmpDEs[i++];
    assert(WMP_tagWidthResolution == wmpDE.uTag);
    *((float *) &wmpDE.uValueOrOffset) = pIE->fResX;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    wmpDE = wmpDEs[i++];
    assert(WMP_tagHeightResolution == wmpDE.uTag);
    *((float *) &wmpDE.uValueOrOffset) = pIE->fResY;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));
   
    wmpDE = wmpDEs[i++];
    assert(WMP_tagImageOffset == wmpDE.uTag);
    wmpDE.uValueOrOffset = pDEMisc->uImageOffset;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    // fix up in WriteContainerPost()
    wmpDE = wmpDEs[i++];
    assert(WMP_tagImageByteCount == wmpDE.uTag);
    pDEMisc->uOffImageByteCount = (U32)offPos;
    wmpDE.uValueOrOffset = 0;
    Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2)
    {
        // fix up in WriteContainerPost()
        wmpDE = wmpDEs[i++];
        assert(WMP_tagAlphaOffset == wmpDE.uTag);
        pDEMisc->uOffAlphaOffset = (U32)offPos;
        wmpDE.uValueOrOffset = 0;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));

        // fix up in WriteContainerPost()
        wmpDE = wmpDEs[i++];
        assert(WMP_tagAlphaByteCount == wmpDE.uTag);
        pDEMisc->uOffAlphaByteCount = (U32)offPos;
        wmpDE.uValueOrOffset = 0;
        Call(WriteWmpDE(pWS, &offPos, &wmpDE, NULL, NULL));
    }

    //================
    Call(PutULong(pWS, offPos, 0)); offPos += 4;

    assert(0 == (offPos & 1));
    if (pDEMisc->uColorProfileOffset > 0 || pDEMisc->uDescMetadataOffset > 0 ||
        pDEMisc->uXMPMetadataOffset > 0 || pDEMisc->uIPTCNAAMetadataOffset > 0 ||
        pDEMisc->uPhotoshopMetadataOffset > 0 || pDEMisc->uEXIFMetadataOffset > 0 ||
        pDEMisc->uGPSInfoMetadataOffset > 0)
    {
        assert(pDEMisc->uColorProfileOffset == offPos ||
               pDEMisc->uDescMetadataOffset == offPos ||
               pDEMisc->uXMPMetadataOffset == offPos ||
               pDEMisc->uIPTCNAAMetadataOffset == offPos ||
               pDEMisc->uPhotoshopMetadataOffset == offPos ||
               pDEMisc->uEXIFMetadataOffset == offPos ||
               pDEMisc->uGPSInfoMetadataOffset == offPos);

        // OK, now skip to image offset
        Call(pWS->SetPos(pWS, pDEMisc->uImageOffset));
        offPos = pDEMisc->uImageOffset;
    }
    assert(pDEMisc->uImageOffset == offPos);

Cleanup:
    if (pbEXIFMetadata != NULL)
        PKFree((void **) &pbEXIFMetadata);
    if (pbGPSInfoMetadata != NULL)
        PKFree((void **) &pbGPSInfoMetadata);
    return err;
}



ERR WriteContainerPost(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pWS = pIE->pStream;
    WmpDEMisc* pDEMisc = &pIE->WMP.wmiDEMisc;
    size_t offPos;

    WmpDE deImageByteCount = {WMP_tagImageByteCount, WMP_typLONG,  1, 0};
    WmpDE deAlphaOffset     = {WMP_tagAlphaOffset, WMP_typLONG,  1, 0};
    WmpDE deAlphaByteCount  = {WMP_tagAlphaByteCount, WMP_typLONG,  1, 0};

    deImageByteCount.uValueOrOffset = pIE->WMP.nCbImage;
    offPos = pDEMisc->uOffImageByteCount;
    Call(WriteWmpDE(pWS, &offPos, &deImageByteCount, NULL, NULL));

    //Alpha
    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2)
    {                
        deAlphaOffset.uValueOrOffset = pIE->WMP.nOffAlpha;
        offPos = pDEMisc->uOffAlphaOffset;
        Call(WriteWmpDE(pWS, &offPos, &deAlphaOffset, NULL, NULL));

        deAlphaByteCount.uValueOrOffset = pIE->WMP.nCbAlpha + pIE->WMP.nOffAlpha;
        offPos = pDEMisc->uOffAlphaByteCount;
        Call(WriteWmpDE(pWS, &offPos, &deAlphaByteCount, NULL, NULL));
    }

Cleanup:
    return err;
}


//================================================
ERR PKImageEncode_Initialize_WMP(
    PKImageEncode* pIE,
    struct WMPStream* pStream,
    void* pvParam,
    size_t cbParam)
{
    ERR err = WMP_errSuccess;

    FailIf(sizeof(pIE->WMP.wmiSCP) != cbParam, WMP_errInvalidArgument);

    pIE->WMP.wmiSCP = *(CWMIStrCodecParam*)pvParam;
    pIE->WMP.wmiSCP_Alpha = *(CWMIStrCodecParam*)pvParam;
    pIE->pStream = pStream;

    pIE->WMP.wmiSCP.pWStream = pIE->pStream;
    pIE->WMP.wmiSCP_Alpha.pWStream = pIE->pStream;

Cleanup:
    return err;
}

ERR PKImageEncode_Terminate_WMP(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    UNREFERENCED_PARAMETER( pIE );
    return err;
}


ERR PKImageEncode_EncodeContent_Init(
    PKImageEncode* pIE, 
    PKPixelInfo PI,
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    // init codec
    pIE->WMP.wmiI.cWidth = pIE->uWidth;
    pIE->WMP.wmiI.cHeight = pIE->uHeight;
    pIE->WMP.wmiI.bdBitDepth = PI.bdBitDepth;
    pIE->WMP.wmiI.cBitsPerUnit = PI.cbitUnit;
    pIE->WMP.wmiI.bRGB = !(PI.grBit & PK_pixfmtBGR);
    pIE->WMP.wmiI.cfColorFormat = PI.cfColorFormat;
    pIE->WMP.wmiI.oOrientation = pIE->WMP.oOrientation;
    
    // Set the fPaddedUserBuffer if the following conditions are met
    if (0 == ((size_t)pbPixels % 128) &&        // Frame buffer is aligned to 128-byte boundary
        0 == (pIE->uWidth % 16) &&              // Horizontal resolution is multiple of 16
        0 == (cLine % 16) &&                    // Vertical resolution is multiple of 16
        0 == (cbStride % 128))                  // Stride is a multiple of 128 bytes
    {
        pIE->WMP.wmiI.fPaddedUserBuffer = TRUE;
        // Note that there are additional conditions in strenc_x86.c's strEncOpt
        // which could prevent optimization from being engaged
    }

    //if (pIE->WMP.bHasAlpha)
    //{
    //    pIE->WMP.wmiSCP.cChannel = PI.cChannel - 1;
    //    pIE->WMP.wmiI.cfColorFormat = PI.cfStripAlpha;
    //}
    //else

    if(PI.cfColorFormat == NCOMPONENT && (!(PI.grBit & PK_pixfmtHasAlpha)))//N-channel without Alpha
        pIE->WMP.wmiSCP.cChannel = PI.cChannel;
    else 
        pIE->WMP.wmiSCP.cChannel = PI.cChannel - 1;//other formats and (N-channel + Alpha)

    pIE->idxCurrentLine = 0;
    
    pIE->WMP.wmiSCP.fMeasurePerf = TRUE;
    FailIf(ICERR_OK != ImageStrEncInit(&pIE->WMP.wmiI, &pIE->WMP.wmiSCP, &pIE->WMP.ctxSC), WMP_errFail);

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeContent_Encode(
    PKImageEncode* pIE, 
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 i = 0;

    //================================
    for (i = 0; i < cLine; i += 16)
    {
		Bool f420 = ( pIE->WMP.wmiI.cfColorFormat == YUV_420 || 
					  (pIE->WMP.wmiSCP.bYUVData && pIE->WMP.wmiSCP.cfColorFormat==YUV_420) );
        CWMImageBufferInfo wmiBI = { 0 };
        wmiBI.pv = pbPixels + cbStride * i / (f420 ? 2 : 1);
        wmiBI.cLine = min(16, cLine - i);
        wmiBI.cbStride = cbStride;
        FailIf(ICERR_OK != ImageStrEncEncode(pIE->WMP.ctxSC, &wmiBI), WMP_errFail);
    }
    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeContent_Term(PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;

    FailIf(ICERR_OK != ImageStrEncTerm(pIE->WMP.ctxSC), WMP_errFail);

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeContent(
    PKImageEncode* pIE, 
    PKPixelInfo PI,
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    size_t offPos = 0;

    Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
    pIE->WMP.nOffImage = (Long)offPos;

    Call(PKImageEncode_EncodeContent_Init(pIE, PI, cLine, pbPixels, cbStride));
    Call(PKImageEncode_EncodeContent_Encode(pIE, cLine, pbPixels, cbStride));
    Call(PKImageEncode_EncodeContent_Term(pIE));

    Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
    pIE->WMP.nCbImage = (Long)offPos - pIE->WMP.nOffImage;

Cleanup:
    return err;
}


ERR PKImageEncode_EncodeAlpha_Init(
    PKImageEncode* pIE, 
    PKPixelInfo PI,
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( cLine );
    UNREFERENCED_PARAMETER( pbPixels );
    UNREFERENCED_PARAMETER( cbStride );

    pIE->WMP.wmiI_Alpha = pIE->WMP.wmiI;

    pIE->WMP.wmiI_Alpha.cWidth = pIE->uWidth;
    pIE->WMP.wmiI_Alpha.cHeight = pIE->uHeight;
    pIE->WMP.wmiI_Alpha.bdBitDepth = PI.bdBitDepth;
    pIE->WMP.wmiI_Alpha.cBitsPerUnit = PI.cbitUnit;
    pIE->WMP.wmiI_Alpha.bRGB = !(PI.grBit & PK_pixfmtBGR);
    pIE->WMP.wmiI.oOrientation = pIE->WMP.oOrientation;
//    pIE->WMP.wmiI_Alpha.cLeadingPadding += pIE->WMP.wmiSCP.cChannel;
//    pIE->WMP.wmiI_Alpha.cLeadingPadding += PI.cChannel - 1;

    switch (pIE->WMP.wmiI.bdBitDepth)
    {
        case BD_8:
            pIE->WMP.wmiI_Alpha.cLeadingPadding += (pIE->WMP.wmiI.cBitsPerUnit >> 3) - 1;
            break;
        
        case BD_16:
        case BD_16S:
        case BD_16F:
            pIE->WMP.wmiI_Alpha.cLeadingPadding += (pIE->WMP.wmiI.cBitsPerUnit >> 3) / sizeof(U16) - 1;
            break;
        
        case BD_32:
        case BD_32S:
        case BD_32F:
            pIE->WMP.wmiI_Alpha.cLeadingPadding += (pIE->WMP.wmiI.cBitsPerUnit >> 3) / sizeof(float) - 1;
            break;
        
        case BD_5:
        case BD_10:
        case BD_565:
        default:
            break;
    }

//    pIE->WMP.wmiSCP_Alpha.uAlphaMode = 1;


    //assert(pIE->WMP.wmiI_Alpha.cfColorFormat == CF_RGB); // only RGBA is supported for now!
    pIE->WMP.wmiI_Alpha.cfColorFormat = Y_ONLY;
    
    pIE->WMP.wmiSCP_Alpha.cfColorFormat = Y_ONLY;

    pIE->idxCurrentLine = 0;
    pIE->WMP.wmiSCP_Alpha.fMeasurePerf = TRUE;
    FailIf(ICERR_OK != ImageStrEncInit(&pIE->WMP.wmiI_Alpha, &pIE->WMP.wmiSCP_Alpha, &pIE->WMP.ctxSC_Alpha), WMP_errFail);

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeAlpha_Encode(
    PKImageEncode* pIE, 
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 i = 0;

    //================================
    for (i = 0; i < cLine; i += 16)
    {
        CWMImageBufferInfo wmiBI = { 0 };
        wmiBI.pv = pbPixels + cbStride * i;
        wmiBI.cLine = min(16, cLine - i);
        wmiBI.cbStride = cbStride;
        FailIf(ICERR_OK != ImageStrEncEncode(pIE->WMP.ctxSC_Alpha, &wmiBI), WMP_errFail);
    }
    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeAlpha_Term(PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;

    FailIf(ICERR_OK != ImageStrEncTerm(pIE->WMP.ctxSC_Alpha), WMP_errFail);

Cleanup:
    return err;
}

ERR PKImageEncode_EncodeAlpha(
    PKImageEncode* pIE, 
    PKPixelInfo PI,
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    size_t offPos = 0;

    Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
    if ((offPos & 1) != 0)
    {
        // Make the mark even if it is odd by inserting a pad byte
        char zero = 0;
        Call(pIE->pStream->Write(pIE->pStream, &zero, 1));
        offPos++;
    }
    pIE->WMP.nOffAlpha = (Long)offPos;

    Call(PKImageEncode_EncodeAlpha_Init(pIE, PI, cLine, pbPixels, cbStride));
    Call(PKImageEncode_EncodeAlpha_Encode(pIE, cLine, pbPixels, cbStride));
    Call(PKImageEncode_EncodeAlpha_Term(pIE));

    Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
    pIE->WMP.nCbAlpha = (Long)offPos - pIE->WMP.nOffAlpha;

Cleanup:
    return err;
}



static ERR SetMetadata(PKImageEncode *pIE, const U8 *pbMetadata, U32 cbMetadata, U8** pbSet, U32* pcbSet)
{
    ERR err = WMP_errSuccess;

    // Fail if the caller called us after we've already written the header out
    if (pIE->fHeaderDone)
    {
        assert(FALSE); // Message to programmer
        err = WMP_errOutOfSequence;
        goto Cleanup;
    }

    // Make a copy of the metadata
    PKFree((void **) pbSet);
    *pcbSet = 0;

    Call(PKAlloc((void **) pbSet, cbMetadata));
    memcpy(*pbSet, pbMetadata, cbMetadata);
    *pcbSet = cbMetadata;

Cleanup:
    return err;
}



ERR PKImageEncode_SetColorContext_WMP(PKImageEncode *pIE,
                                      const U8 *pbColorContext,
                                      U32 cbColorContext)
{
    return SetMetadata(pIE, pbColorContext, cbColorContext, &pIE->pbColorContext, &pIE->cbColorContext);
}



ERR PKImageEncode_SetXMPMetadata_WMP(PKImageEncode *pIE, const U8 *pbXMPMetadata, U32 cbXMPMetadata)
{   // same as the other Set's, but make sure dc:format is <dc:format>image/vnd.ms-photo</dc:format>
    ERR err = WMP_errSuccess;
    char* pbTemp = 0;
    U32 cbTemp;
    char* pszFormatBegin;
    // const char* pszXMPMetadata = (const char*)pbXMPMetadata;
    size_t cbBuffer;

    // Fail if the caller called us after we've already written the header out
    FailIf(pIE->fHeaderDone, WMP_errOutOfSequence);
    
    // Free any previously set XMP metadata
    PKFree((void **) &pIE->pbXMPMetadata);
    pIE->cbXMPMetadataByteCount = 0;

    // allocate a block big enough for data passed in plus added trailing null plus added HD Photo dc:format
    // there may already be a trailing null (but ps doesn't seem to)
    // there may already be a dc:format we will replace with HD Photo's
    // but anyway this block will be large enough guaranteed
    cbBuffer = cbXMPMetadata + 1 + sizeof("<dc:format>") - 1 + sizeof("</dc:format>") - 1 + sizeof(szHDPhotoFormat) - 1;
    Call(PKAlloc((void **) &pbTemp, cbBuffer));
    memcpy(pbTemp, pbXMPMetadata, cbXMPMetadata); // Make a copy of the metadata
    pbTemp[cbXMPMetadata] = '\0';
    cbXMPMetadata = (U32)strlen(pbTemp);
    pszFormatBegin = strstr(pbTemp, "<dc:format>");
    if ( pszFormatBegin != 0 )
    {
        char* pszFormatEnd;
        const char* pszLessThan;

        pszFormatEnd = strstr(pszFormatBegin, "</dc:format>");
        FailIf(pszFormatEnd == 0, WMP_errFail);
        pszLessThan = strchr(pszFormatBegin + sizeof("<dc:format>") - 1, '<');
        FailIf(pszLessThan != pszFormatEnd, WMP_errFail);
        pszFormatEnd += sizeof("</dc:format>") - 1;

        // photoshop doesn't put a trailing null, so we don't either
        // hd and tiff don't put a trailing null, so we don't either
        cbTemp = cbXMPMetadata - (U32) ( pszFormatEnd - pszFormatBegin ) + sizeof(szHDPhotoFormat) - 1;
        assert(cbTemp <= cbBuffer);
        FailIf(0 != STRCPY_SAFE(pszFormatBegin,
            cbBuffer - (pszFormatBegin - pbTemp),
            szHDPhotoFormat),
            WMP_errBufferOverflow);
        memcpy(pszFormatBegin + sizeof(szHDPhotoFormat) - 1, pbXMPMetadata + ( pszFormatEnd - pbTemp ),
            cbXMPMetadata - ( pszFormatEnd - pbTemp ));
    }
    else
    {
        cbTemp = cbXMPMetadata;
    }

    pIE->pbXMPMetadata = (U8 *) pbTemp;
    pIE->cbXMPMetadataByteCount = cbTemp;
    return ( err );

Cleanup:
    PKFree((void **) &pbTemp);
    pIE->cbXMPMetadataByteCount = 0;
    return err;
}



ERR PKImageEncode_SetEXIFMetadata_WMP(PKImageEncode *pIE, const U8 *pbEXIFMetadata, U32 cbEXIFMetadata)
{
    return SetMetadata(pIE, pbEXIFMetadata, cbEXIFMetadata,
        &pIE->pbEXIFMetadata, &pIE->cbEXIFMetadataByteCount);
}



ERR PKImageEncode_SetGPSInfoMetadata_WMP(PKImageEncode *pIE, const U8 *pbGPSInfoMetadata, U32 cbGPSInfoMetadata)
{
    return SetMetadata(pIE, pbGPSInfoMetadata, cbGPSInfoMetadata,
        &pIE->pbGPSInfoMetadata, &pIE->cbGPSInfoMetadataByteCount);
}



ERR PKImageEncode_SetIPTCNAAMetadata_WMP(PKImageEncode *pIE, const U8 *pbIPTCNAAMetadata, U32 cbIPTCNAAMetadata)
{
    return SetMetadata(pIE, pbIPTCNAAMetadata, cbIPTCNAAMetadata,
        &pIE->pbIPTCNAAMetadata, &pIE->cbIPTCNAAMetadataByteCount);
}



ERR PKImageEncode_SetPhotoshopMetadata_WMP(PKImageEncode *pIE, const U8 *pbPhotoshopMetadata, U32 cbPhotoshopMetadata)
{
    return SetMetadata(pIE, pbPhotoshopMetadata, cbPhotoshopMetadata,
        &pIE->pbPhotoshopMetadata, &pIE->cbPhotoshopMetadataByteCount);
}



ERR PKImageEncode_SetDescriptiveMetadata_WMP(PKImageEncode *pIE, const DESCRIPTIVEMETADATA *pSrcMeta)
{
    ERR                     err = WMP_errSuccess;
    DESCRIPTIVEMETADATA    *pDstMeta = &pIE->sDescMetadata;

    // Fail if the caller called us after we've already written the header out
    if (pIE->fHeaderDone)
    {
        assert(FALSE); // Message to programmer
        FailIf(TRUE, WMP_errOutOfSequence);
    }

    // Make a copy of the descriptive metadata
    Call(CopyDescMetadata(&pDstMeta->pvarImageDescription, pSrcMeta->pvarImageDescription));
    Call(CopyDescMetadata(&pDstMeta->pvarCameraMake, pSrcMeta->pvarCameraMake));
    Call(CopyDescMetadata(&pDstMeta->pvarCameraModel, pSrcMeta->pvarCameraModel));
    Call(CopyDescMetadata(&pDstMeta->pvarSoftware, pSrcMeta->pvarSoftware));
    Call(CopyDescMetadata(&pDstMeta->pvarDateTime, pSrcMeta->pvarDateTime));
    Call(CopyDescMetadata(&pDstMeta->pvarArtist, pSrcMeta->pvarArtist));
    Call(CopyDescMetadata(&pDstMeta->pvarCopyright, pSrcMeta->pvarCopyright));
    Call(CopyDescMetadata(&pDstMeta->pvarRatingStars, pSrcMeta->pvarRatingStars));
    Call(CopyDescMetadata(&pDstMeta->pvarRatingValue, pSrcMeta->pvarRatingValue));
    Call(CopyDescMetadata(&pDstMeta->pvarCaption, pSrcMeta->pvarCaption));
    Call(CopyDescMetadata(&pDstMeta->pvarDocumentName, pSrcMeta->pvarDocumentName));
    Call(CopyDescMetadata(&pDstMeta->pvarPageName, pSrcMeta->pvarPageName));
    Call(CopyDescMetadata(&pDstMeta->pvarPageNumber, pSrcMeta->pvarPageNumber));
    Call(CopyDescMetadata(&pDstMeta->pvarHostComputer, pSrcMeta->pvarHostComputer));

Cleanup:
    return err;
}



ERR PKImageEncode_WritePixels_WMP(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixels,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    // U32 i = 0;
    PKPixelInfo PI;

    // Performing non-banded encode
    assert(BANDEDENCSTATE_UNINITIALIZED == pIE->WMP.eBandedEncState);
    pIE->WMP.eBandedEncState = BANDEDENCSTATE_NONBANDEDENCODE;

    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);
    pIE->WMP.bHasAlpha = !!(PI.grBit & PK_pixfmtHasAlpha);

    if (!pIE->fHeaderDone)
    {
        // write metadata
        Call(WriteContainerPre(pIE));

        pIE->fHeaderDone = !FALSE;
    }

/*    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2){
        pIE->WMP.wmiSCP_Alpha = pIE->WMP.wmiSCP;
    }
*/
    Call(PKImageEncode_EncodeContent(pIE, PI, cLine, pbPixels, cbStride));
    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2){//planar alpha
        Call(PKImageEncode_EncodeAlpha(pIE, PI, cLine, pbPixels, cbStride));
    }
    
    Call(WriteContainerPost(pIE));

Cleanup:
    return err;
}


ERR PKImageEncode_WritePixelsBandedBegin_WMP(PKImageEncode* pIE, struct WMPStream *pPATempFile)
{
    ERR err = WMP_errSuccess;

    // Just make sure that we are in the correct state to begin a banded decode
    assert(BANDEDENCSTATE_UNINITIALIZED == pIE->WMP.eBandedEncState);
    pIE->WMP.eBandedEncState = BANDEDENCSTATE_INIT;

    // Save the planar alpha tempfile for future use
    pIE->WMP.pPATempFile = pPATempFile;

//Cleanup:
    return err;
}

ERR PKImageEncode_WritePixelsBanded_WMP(PKImageEncode* pIE, U32 cLine, U8* pbPixels, U32 cbStride, Bool fLastCall)
{
    ERR err = WMP_errSuccess;
    PKPixelInfo PI = {0};
    Bool fPI = FALSE;
    BANDEDENCSTATE eEncStateOrig = pIE->WMP.eBandedEncState;
    struct WMPStream *pPATempFile = pIE->WMP.pPATempFile;

    // Unless this is the last call, reject inputs which are not multiples of 16
    FailIf(!fLastCall && 0 != cLine % 16, WMP_errMustBeMultipleOf16LinesUntilLastCall);

    if (!pIE->fHeaderDone || BANDEDENCSTATE_INIT == pIE->WMP.eBandedEncState)
    {
        PI.pGUIDPixFmt = &pIE->guidPixFormat;
        PixelFormatLookup(&PI, LOOKUP_FORWARD);
        pIE->WMP.bHasAlpha = !!(PI.grBit & PK_pixfmtHasAlpha);
        fPI = TRUE;

        // Check if this is planar alpha: banded encode requires temp file
        if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2)
        {
            FailIf(NULL == pPATempFile, WMP_errPlanarAlphaBandedEncRequiresTempFile);
        }
    }

    if (!pIE->fHeaderDone)
    {
        // write metadata
        assert(fPI);
        Call(WriteContainerPre(pIE));
        pIE->fHeaderDone = !FALSE;
    }

    if (BANDEDENCSTATE_INIT == pIE->WMP.eBandedEncState)
    {
        // Record start of main content for future call to WriteContainerPost
        size_t offPos;
        Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
        pIE->WMP.nOffImage = (Long)offPos;

        assert(fPI);
        Call(PKImageEncode_EncodeContent_Init(pIE, PI, cLine, pbPixels, cbStride));
        pIE->WMP.eBandedEncState = BANDEDENCSTATE_ENCODING;
    }

    Call(PKImageEncode_EncodeContent_Encode(pIE, cLine, pbPixels, cbStride));
    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2)
    {
        //planar alpha
        if (BANDEDENCSTATE_INIT == eEncStateOrig)
        {
            size_t  offStart;

            // We assume the following which allows us to avoid saving state
            Call(pPATempFile->GetPos(pPATempFile, &offStart));
            assert(0 == offStart);
            assert(pIE->WMP.wmiSCP_Alpha.pWStream == pIE->WMP.wmiSCP.pWStream);

            // For planar alpha, we write the file to a temp file
            pIE->WMP.wmiSCP_Alpha.pWStream = pPATempFile;
            Call(PKImageEncode_EncodeAlpha_Init(pIE, PI, cLine, pbPixels, cbStride));
        }

        Call(PKImageEncode_EncodeAlpha_Encode(pIE, cLine, pbPixels, cbStride));
    }

Cleanup:
    return err;
}

ERR PKImageEncode_WritePixelsBandedEnd_WMP(PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    struct WMPStream *pMainStream = pIE->WMP.wmiSCP.pWStream;
    size_t offAlpha;

    assert(BANDEDENCSTATE_ENCODING == pIE->WMP.eBandedEncState);

    // Finish off main content, update its length ptr for WriteContainerPost
    Call(PKImageEncode_EncodeContent_Term(pIE));
    Call(pMainStream->GetPos(pIE->pStream, &offAlpha));
    pIE->WMP.nCbImage = (Long)offAlpha - pIE->WMP.nOffImage;

    if (pIE->WMP.bHasAlpha && pIE->WMP.wmiSCP.uAlphaMode == 2)
    {
        size_t cbAlpha;
        size_t cbBytesCopied;
        struct WMPStream *pAlphaStream = pIE->WMP.wmiSCP_Alpha.pWStream;

        assert(pAlphaStream != pMainStream); // Otherwise we didn't use a temp file

        // Close it up - this causes write to temp file
        Call(PKImageEncode_EncodeAlpha_Term(pIE));

        // Calculate size of alpha bitstream and its new offset
        Call(pAlphaStream->GetPos(pAlphaStream, &cbAlpha));

        // Copy alpha bitstream to end of main stream
        cbBytesCopied = 0;
        Call(pAlphaStream->SetPos(pAlphaStream, 0));
        while (cbBytesCopied < cbAlpha)
        {
            char rgbBuf[TEMPFILE_COPYBUF_SIZE];
            size_t cbCopy;

            cbCopy = min(sizeof(rgbBuf), cbAlpha - cbBytesCopied);
            Call(pAlphaStream->Read(pAlphaStream, rgbBuf, cbCopy));
            Call(pMainStream->Write(pMainStream, rgbBuf, cbCopy));

            cbBytesCopied += cbCopy;
        }
        assert(cbBytesCopied == cbAlpha);

        // Update alpha offset/length for WriteContainerPost
        pIE->WMP.nOffAlpha = (Long)offAlpha;
        pIE->WMP.nCbAlpha = (Long)cbAlpha;
    }

    Call(WriteContainerPost(pIE));

Cleanup:
    return err;
}


ERR PKImageEncode_Transcode_WMP(
    PKImageEncode* pIE,
    PKImageDecode* pID,
    CWMTranscodingParam* pParam)
{
    ERR err = WMP_errSuccess;
    Float fResX = 0, fResY = 0;
    PKPixelFormatGUID pixGUID = {0};
    CWMTranscodingParam tcParamAlpha;
    size_t offPos = 0;
    Bool fPlanarAlpha;
    PKPixelInfo PI;

    struct WMPStream* pWSDec = NULL;
    struct WMPStream* pWSEnc= pIE->pStream;

    // pass through metadata
    Call(pID->GetPixelFormat(pID, &pixGUID));
    Call(pIE->SetPixelFormat(pIE, pixGUID));

    Call(pIE->SetSize(pIE, (I32)pParam->cWidth, (I32)pParam->cHeight));

    Call(pID->GetResolution(pID, &fResX, &fResY));
    Call(pIE->SetResolution(pIE, fResX, fResY));

    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);
    pIE->WMP.bHasAlpha = !!(PI.grBit & PK_pixfmtHasAlpha) && (2 == pParam->uAlphaMode);
    assert(0 == pIE->WMP.bHasAlpha || (pParam->uAlphaMode == 2)); // Decode alpha mode does not match encode alpha mode!

    // Check for any situations where transcoder is being asked to convert alpha - we can't do this
    // NOTE: Decoder's bHasAlpha parameter really means, "has PLANAR alpha"
    PI.pGUIDPixFmt = &pixGUID;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);
    FailIf(0 == (PI.grBit & PK_pixfmtHasAlpha) && pParam->uAlphaMode != 0,
        WMP_errAlphaModeCannotBeTranscoded); // Destination is planar/interleaved, src has no alpha
    FailIf(!!(PI.grBit & PK_pixfmtHasAlpha) && 2 == pParam->uAlphaMode &&
        FALSE == pID->WMP.bHasAlpha, WMP_errAlphaModeCannotBeTranscoded);  // Destination is planar, src is interleaved
    FailIf(!!(PI.grBit & PK_pixfmtHasAlpha) && 3 == pParam->uAlphaMode &&
        pID->WMP.bHasAlpha, WMP_errAlphaModeCannotBeTranscoded);  // Destination is interleaved, src is planar
    assert(/*pParam->uAlphaMode >= 0 &&*/ pParam->uAlphaMode <= 3); // All the above statements make this assumption

    fPlanarAlpha = pIE->WMP.bHasAlpha && (2 == pParam->uAlphaMode);

    // write matadata
    Call(WriteContainerPre(pIE));

    // Copy transcoding params for alpha (codec changes the struct)
    if (fPlanarAlpha)
        tcParamAlpha = *pParam;

    // write compressed bitstream
    Call(pID->GetRawStream(pID, &pWSDec));

    FailIf(ICERR_OK != WMPhotoTranscode(pWSDec, pWSEnc, pParam), WMP_errFail);
    Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
    pIE->WMP.nCbImage = (Long)offPos - pIE->WMP.nOffImage;

    if (fPlanarAlpha)
    {
        pIE->WMP.nOffAlpha = (Long)offPos;

        // Cue the stream to alpha block
        assert(pID->WMP.wmiDEMisc.uAlphaOffset > 0);
        Call(pWSDec->SetPos(pWSDec, pID->WMP.wmiDEMisc.uAlphaOffset));

        FailIf(ICERR_OK != WMPhotoTranscode(pWSDec, pWSEnc, &tcParamAlpha), WMP_errFail);
        Call(pIE->pStream->GetPos(pIE->pStream, &offPos));
        pIE->WMP.nCbAlpha = (Long)offPos - pIE->WMP.nOffAlpha;
    }

    // fixup matadata
    Call(WriteContainerPost(pIE));

Cleanup:
    return err;
}

ERR PKImageEncode_CreateNewFrame_WMP(
    PKImageEncode* pIE,
    void* pvParam,
    size_t cbParam)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pIE );
    UNREFERENCED_PARAMETER( pvParam );
    UNREFERENCED_PARAMETER( cbParam );

    Call(WMP_errNotYetImplemented);
    
Cleanup:
    return err;
}

ERR PKImageEncode_Release_WMP(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;

    PKImageEncode *pIE = *ppIE;
    pIE->pStream->Close(&pIE->pStream);

    PKFree((void **) &pIE->pbColorContext);
    pIE->cbColorContext = 0;
    PKFree((void **) &pIE->pbXMPMetadata);
    pIE->cbXMPMetadataByteCount = 0;
    PKFree((void **) &pIE->pbEXIFMetadata);
    pIE->cbEXIFMetadataByteCount = 0;
    PKFree((void **) &pIE->pbGPSInfoMetadata);
    pIE->cbGPSInfoMetadataByteCount = 0;
    PKFree((void **) &pIE->pbIPTCNAAMetadata);
    pIE->cbIPTCNAAMetadataByteCount = 0;
    PKFree((void **) &pIE->pbPhotoshopMetadata);
    pIE->cbPhotoshopMetadataByteCount = 0;

    // Free descriptive metadata
    FreeDescMetadata(&pIE->sDescMetadata.pvarImageDescription);
    FreeDescMetadata(&pIE->sDescMetadata.pvarCameraMake);
    FreeDescMetadata(&pIE->sDescMetadata.pvarCameraModel);
    FreeDescMetadata(&pIE->sDescMetadata.pvarSoftware);
    FreeDescMetadata(&pIE->sDescMetadata.pvarDateTime);
    FreeDescMetadata(&pIE->sDescMetadata.pvarArtist);
    FreeDescMetadata(&pIE->sDescMetadata.pvarCopyright);
    FreeDescMetadata(&pIE->sDescMetadata.pvarRatingStars);
    FreeDescMetadata(&pIE->sDescMetadata.pvarRatingValue);
    FreeDescMetadata(&pIE->sDescMetadata.pvarCaption);
    FreeDescMetadata(&pIE->sDescMetadata.pvarDocumentName);
    FreeDescMetadata(&pIE->sDescMetadata.pvarPageName);
    FreeDescMetadata(&pIE->sDescMetadata.pvarPageNumber);
    FreeDescMetadata(&pIE->sDescMetadata.pvarHostComputer);

    Call(PKFree((void **) ppIE));

Cleanup:
    return err;
}

//----------------------------------------------------------------
ERR PKImageEncode_Create_WMP(PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;

    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->Initialize = PKImageEncode_Initialize_WMP;
    pIE->Terminate = PKImageEncode_Terminate_WMP;
    pIE->SetColorContext = PKImageEncode_SetColorContext_WMP;
    pIE->SetDescriptiveMetadata = PKImageEncode_SetDescriptiveMetadata_WMP;
    pIE->WritePixels = PKImageEncode_WritePixels_WMP;

    pIE->WritePixelsBandedBegin = PKImageEncode_WritePixelsBandedBegin_WMP;
    pIE->WritePixelsBanded = PKImageEncode_WritePixelsBanded_WMP;
    pIE->WritePixelsBandedEnd = PKImageEncode_WritePixelsBandedEnd_WMP;

    pIE->Transcode = PKImageEncode_Transcode_WMP;
    pIE->CreateNewFrame = PKImageEncode_CreateNewFrame_WMP;
    pIE->Release = PKImageEncode_Release_WMP;
	pIE->bWMP = TRUE; 

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_WMP
//================================================================
ERR ParsePFDEntry(
    PKImageDecode* pID,
    U16 uTag,
    U16 uType,
    U32 uCount,
    U32 uValue)
{
    ERR err = WMP_errSuccess;
    ERR errTmp = WMP_errSuccess;
    PKPixelInfo PI;
    struct WMPStream* pWS = pID->pStream;
    // size_t offPos = 0;

    union uf{
        U32 uVal;
        Float fVal;
    }ufValue = {0};

    //================================
    switch (uTag)
    {
        case WMP_tagPixelFormat:
        {
            unsigned char *pGuid = (unsigned char *) &pID->guidPixFormat;
            /** following code is endian-agnostic **/
            Call(GetULong(pWS, uValue, (U32 *)pGuid));
            Call(GetUShort(pWS, uValue + 4, (unsigned short *)(pGuid + 4)));
            Call(GetUShort(pWS, uValue + 6, (unsigned short *)(pGuid + 6)));
            Call(pWS->Read(pWS, pGuid + 8, 8));
                
            PI.pGUIDPixFmt = &pID->guidPixFormat;
            PixelFormatLookup(&PI, LOOKUP_FORWARD);

            pID->WMP.bHasAlpha = !!(PI.grBit & PK_pixfmtHasAlpha);
            pID->WMP.wmiI.cBitsPerUnit = PI.cbitUnit;
            pID->WMP.wmiI.bRGB = !(PI.grBit & PK_pixfmtBGR);

            break;
        }

        case WMP_tagTransformation:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            assert(uValue < O_MAX);
            pID->WMP.fOrientationFromContainer = TRUE;
            pID->WMP.oOrientationFromContainer = uValue;
            break;

        case WMP_tagImageWidth:
            FailIf(0 == uValue, WMP_errUnsupportedFormat);
            break;

        case WMP_tagImageHeight:
            FailIf(0 == uValue, WMP_errUnsupportedFormat);
            break;

        case WMP_tagImageOffset:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            pID->WMP.wmiDEMisc.uImageOffset = uValue;
            break;

        case WMP_tagImageByteCount:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            pID->WMP.wmiDEMisc.uImageByteCount = uValue;
            break;

        case WMP_tagAlphaOffset:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            pID->WMP.wmiDEMisc.uAlphaOffset = uValue;
            break;

        case WMP_tagAlphaByteCount:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            pID->WMP.wmiDEMisc.uAlphaByteCount = uValue;
            break;

        case WMP_tagWidthResolution:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            ufValue.uVal = uValue; 
            pID->fResX = ufValue.fVal;
            break;

        case WMP_tagHeightResolution:
            FailIf(1 != uCount, WMP_errUnsupportedFormat);
            ufValue.uVal = uValue; 
            pID->fResY = ufValue.fVal;
            break;

        case WMP_tagIccProfile:
            pID->WMP.wmiDEMisc.uColorProfileByteCount = uCount;
            pID->WMP.wmiDEMisc.uColorProfileOffset = uValue;
            break;

        case WMP_tagXMPMetadata:
            pID->WMP.wmiDEMisc.uXMPMetadataByteCount = uCount;
            pID->WMP.wmiDEMisc.uXMPMetadataOffset = uValue;
            break;

        case WMP_tagEXIFMetadata:
            pID->WMP.wmiDEMisc.uEXIFMetadataOffset = uValue;
            CallIgnoreError(errTmp, StreamCalcIFDSize(pWS, uValue, &pID->WMP.wmiDEMisc.uEXIFMetadataByteCount));
            break;

        case WMP_tagGPSInfoMetadata:
            pID->WMP.wmiDEMisc.uGPSInfoMetadataOffset = uValue;
            CallIgnoreError(errTmp, StreamCalcIFDSize(pWS, uValue, &pID->WMP.wmiDEMisc.uGPSInfoMetadataByteCount));
            break;

        case WMP_tagIPTCNAAMetadata:
            pID->WMP.wmiDEMisc.uIPTCNAAMetadataByteCount = uCount;
            pID->WMP.wmiDEMisc.uIPTCNAAMetadataOffset = uValue;
            break;

        case WMP_tagPhotoshopMetadata:
            pID->WMP.wmiDEMisc.uPhotoshopMetadataByteCount = uCount;
            pID->WMP.wmiDEMisc.uPhotoshopMetadataOffset = uValue;
            break;

        case WMP_tagCompression:
        case WMP_tagImageType:
        case WMP_tagImageDataDiscard:
        case WMP_tagAlphaDataDiscard:
            break;

        // Descriptive Metadata
        case WMP_tagImageDescription:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarImageDescription));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarImageDescription.vt);
            break;

        case WMP_tagCameraMake:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarCameraMake));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarCameraMake.vt);
            break;

        case WMP_tagCameraModel:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarCameraModel));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarCameraModel.vt);
            break;

        case WMP_tagSoftware:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarSoftware));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarSoftware.vt);
            break;

        case WMP_tagDateTime:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarDateTime));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarDateTime.vt);
            break;

        case WMP_tagArtist:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarArtist));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarArtist.vt);
            break;

        case WMP_tagCopyright:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarCopyright));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarCopyright.vt);
            break;

        case WMP_tagRatingStars:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarRatingStars));
            assert(DPKVT_UI2 == pID->WMP.sDescMetadata.pvarRatingStars.vt);
            break;

        case WMP_tagRatingValue:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarRatingValue));
            assert(DPKVT_UI2 == pID->WMP.sDescMetadata.pvarRatingValue.vt);
            break;

        case WMP_tagCaption:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarCaption));
            assert((DPKVT_BYREF | DPKVT_UI1) == pID->WMP.sDescMetadata.pvarCaption.vt);

            // Change type from C-style byte array to LPWSTR
            assert((U8*)pID->WMP.sDescMetadata.pvarCaption.VT.pwszVal ==
                pID->WMP.sDescMetadata.pvarCaption.VT.pbVal);
            assert(0 == pID->WMP.sDescMetadata.pvarCaption.VT.pwszVal[uCount/sizeof(U16) - 1]); // Confirm null-term
            //  make sure null term (ReadPropvar allocated enough space for this)
            pID->WMP.sDescMetadata.pvarCaption.VT.pwszVal[uCount/sizeof(U16)] = 0;
            pID->WMP.sDescMetadata.pvarCaption.vt = DPKVT_LPWSTR;
            break;

        case WMP_tagDocumentName:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarDocumentName));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarDocumentName.vt);
            break;

        case WMP_tagPageName:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarPageName));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarPageName.vt);
            break;

        case WMP_tagPageNumber:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarPageNumber));
            assert(DPKVT_UI4 == pID->WMP.sDescMetadata.pvarPageNumber.vt);
            break;

        case WMP_tagHostComputer:
            CallIgnoreError(errTmp, ReadPropvar(pWS, uType, uCount, uValue,
                &pID->WMP.sDescMetadata.pvarHostComputer));
            assert(DPKVT_LPSTR == pID->WMP.sDescMetadata.pvarHostComputer.vt);
            break;

        default:
            fprintf(stderr, "Unrecognized WMPTag: %d(%#x), %d, %d, %#x" CRLF,
                (int)uTag, (int)uTag, (int)uType, (int)uCount, (int)uValue);
            break;
    }

Cleanup:
    return err;
}

ERR ParsePFD(
    PKImageDecode* pID,
    size_t offPos,
    U16 cEntry)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = pID->pStream;
    U16 i = 0;

    for (i = 0; i < cEntry; ++i)
    {
        U16 uTag = 0;
        U16 uType = 0;
        U32 uCount = 0;
        U32 uValue = 0;

        Call(GetUShort(pWS, offPos, &uTag)); offPos += 2;
        Call(GetUShort(pWS, offPos, &uType)); offPos += 2;
        Call(GetULong(pWS, offPos, &uCount)); offPos += 4;
        Call(GetULong(pWS, offPos, &uValue)); offPos += 4;

        Call(ParsePFDEntry(pID, uTag, uType, uCount, uValue)); 
    }

    pID->WMP.bHasAlpha = ((pID->WMP.bHasAlpha) && (pID->WMP.wmiDEMisc.uAlphaOffset != 0) && (pID->WMP.wmiDEMisc.uAlphaByteCount != 0));//has planar alpha

Cleanup:
    return err;
}

ERR ReadContainer(
    PKImageDecode* pID)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pWS = pID->pStream;
    size_t offPos = 0;

    char szSig[2] = {0};
    U16 uWmpID = 0;
    U32 offPFD = 0;
    U16 cPFDEntry = 0;
    U8 bVersion;
    
    //================================
    Call(pWS->GetPos(pWS, &offPos));
    FailIf(0 != offPos, WMP_errUnsupportedFormat);

    //================================
    // Header
    Call(pWS->Read(pWS, szSig, sizeof(szSig))); offPos += 2;
    FailIf(szSig != strstr(szSig, "II"), WMP_errUnsupportedFormat);

    Call(GetUShort(pWS, offPos, &uWmpID)); offPos += 2;
    FailIf(WMP_valWMPhotoID != (0x00FF & uWmpID), WMP_errUnsupportedFormat);

    // We accept version 00 and version 01 bitstreams - all others rejected
    bVersion = (0xFF00 & uWmpID) >> 8;
    FailIf(bVersion != 0 && bVersion != 1, WMP_errUnsupportedFormat);

    Call(GetULong(pWS, offPos, &offPFD)); offPos += 4;

    //================================
    // PFD
    offPos = (size_t)offPFD;
    Call(GetUShort(pWS, offPos, &cPFDEntry)); offPos += 2;
    FailIf(0 == cPFDEntry || USHRT_MAX == cPFDEntry, WMP_errUnsupportedFormat);
    Call(ParsePFD(pID, offPos, cPFDEntry));

    //================================
    Call(pWS->SetPos(pWS, pID->WMP.wmiDEMisc.uImageOffset));

Cleanup:
    return err;
}


//================================================
ERR PKImageDecode_Initialize_WMP(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    CWMImageInfo* pII = NULL;

    //================================
    Call(PKImageDecode_Initialize(pID, pWS));

    //================================
    Call(ReadContainer(pID));

    //================================
    pID->WMP.wmiSCP.pWStream = pWS;
    pID->WMP.DecoderCurrMBRow = 0;
    pID->WMP.cLinesDecoded = 0;
    pID->WMP.cLinesCropped = 0;
    pID->WMP.fFirstNonZeroDecode = FALSE;

    FailIf(ICERR_OK != ImageStrDecGetInfo(&pID->WMP.wmiI, &pID->WMP.wmiSCP), WMP_errFail);
    assert(Y_ONLY <= pID->WMP.wmiSCP.cfColorFormat && pID->WMP.wmiSCP.cfColorFormat < CFT_MAX);
    assert(BD_SHORT == pID->WMP.wmiSCP.bdBitDepth || BD_LONG == pID->WMP.wmiSCP.bdBitDepth);

    // If HD Photo container provided an orientation, this should override bitstream orientation
    // If container did NOT provide an orientation, force O_NONE. This is to be consistent with
    // Vista behaviour, which is to ignore bitstream orientation (only looks at container).
    if (pID->WMP.fOrientationFromContainer)
    {
        pID->WMP.wmiI.oOrientation = pID->WMP.oOrientationFromContainer;
    }
    else
    {
        // Force to O_NONE to match Vista decode behaviour
        pID->WMP.wmiI.oOrientation = O_NONE;
    }

    pII = &pID->WMP.wmiI;
    pID->uWidth = (U32)pII->cWidth;
    pID->uHeight = (U32)pII->cHeight;

Cleanup:
    return err;
}


ERR PKImageDecode_GetSize_WMP(
    PKImageDecode* pID,
    I32* piWidth,
    I32* piHeight)
{
    if (pID->WMP.wmiI.oOrientation >= O_RCW)
    {
        *piWidth = (I32)pID->uHeight;
        *piHeight = (I32)pID->uWidth;
    }
    else
    {
        *piWidth = (I32)pID->uWidth;
        *piHeight = (I32)pID->uHeight;
    }
    return WMP_errSuccess;
}


ERR PKImageDecode_GetRawStream_WMP(
    PKImageDecode* pID,
    struct WMPStream** ppWS)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = pID->pStream;

    *ppWS = NULL;
    Call(pWS->SetPos(pWS, pID->WMP.wmiDEMisc.uImageOffset));
    *ppWS = pWS;

Cleanup:
    return err;
}

ERR PKImageDecode_Copy_WMP(
    PKImageDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 cThumbnailScale;
    U32 linesperMBRow;
    CWMImageBufferInfo wmiBI = { 0 };
#ifdef REENTRANT_MODE
    U8 *pbLowMemAdj = NULL;
    U32 i, cMBRow;
    U32 cMBRowStart;
#endif // REENTRANT_MODE
    struct WMPStream* pWS = pID->pStream;
    U8 tempAlphaMode = 0;
    wmiBI.pv = pb;
    wmiBI.cLine = pRect->Height;
    wmiBI.cbStride = cbStride;
#ifdef REENTRANT_MODE
    // In REENTRANT_MODE, we allow rectangles with any top left corner (not just (0,0))
#else
    FailIf(0 != pRect->X, WMP_errInvalidParameter);
    FailIf(0 != pRect->Y, WMP_errInvalidParameter);
#endif // REENTRANT_MODE

    cThumbnailScale = 1;
	if (pID->WMP.wmiI.cThumbnailWidth > 0)
	{
		while(cThumbnailScale * pID->WMP.wmiI.cThumbnailWidth < pID->uWidth)
			cThumbnailScale <<= 1;
	}
    // note the following implementation can't handle fractional linesperMBRow limiting
    // us to >= 1/256 thumbnail which is unfortunate, but all the PS plugin needs is 1/256
    // and I didn't care to get into floating point or a bunch of conditional tests or
    // other rewrite for a case not needed nor tested by PS plugin.  sorry.
    linesperMBRow = 16 / cThumbnailScale;

#ifdef REENTRANT_MODE
    if (0 == pID->WMP.DecoderCurrMBRow) 
    {
#endif // REENTRANT_MODE
    // Set the fPaddedUserBuffer if the following conditions are met
    if (0 == ((size_t)pb % 128) &&    // Frame buffer is aligned to 128-byte boundary
        0 == (pRect->Height % 16) &&        // Horizontal resolution is multiple of 16
        0 == (pRect->Width % 16) &&        // Vertical resolution is multiple of 16
        0 == (cbStride % 128))              // Stride is a multiple of 128 bytes
    {
        pID->WMP.wmiI.fPaddedUserBuffer = TRUE;
        // Note that there are additional conditions in strdec_x86.c's strDecOpt
        // which could prevent optimization from being engaged
    }
#ifdef REENTRANT_MODE
    }
#endif // REENTRANT_MODE
    //if(pID->WMP.wmiSCP.uAlphaMode != 1)
    if((!pID->WMP.bHasAlpha) || (pID->WMP.wmiSCP.uAlphaMode != 1))
    {
        if(pID->WMP.bHasAlpha)//planar alpha
        {
            tempAlphaMode = pID->WMP.wmiSCP.uAlphaMode;
            pID->WMP.wmiSCP.uAlphaMode = 0;
        }
        pID->WMP.wmiSCP.fMeasurePerf = TRUE;
#ifdef REENTRANT_MODE
        if (0 == pID->WMP.DecoderCurrMBRow) 
        {
            Call(pID->WMP.wmiSCP.pWStream->GetPos(pID->WMP.wmiSCP.pWStream, &(pID->WMP.cMarker)));
            FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI, &pID->WMP.wmiSCP, &pID->WMP.ctxSC), WMP_errFail);
        }
        cMBRow = ((U32) pID->WMP.wmiI.cROITopY + pRect->Y + pRect->Height + linesperMBRow - 1) / linesperMBRow + 1;
        cMBRowStart = pRect->Y / linesperMBRow + 1;
        // if current request starts before current state, then rewind.
        if (cMBRowStart < pID->WMP.DecoderCurrMBRow) 
        {
            pID->WMP.DecoderCurrMBRow = 0;
            pID->WMP.cLinesDecoded = 0;
            pID->WMP.cLinesCropped = 0;
            pID->WMP.fFirstNonZeroDecode = FALSE;
            FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC), WMP_errFail);   
            Call(pID->WMP.wmiSCP.pWStream->SetPos(pID->WMP.wmiSCP.pWStream, pID->WMP.cMarker));
            FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI, &pID->WMP.wmiSCP, &pID->WMP.ctxSC), WMP_errFail);
        }

        // In "Low Memory mode", we don't have full frame buffer. We therefore cannot rotate the image.
        // We can flip H, V and HV, but no rotations.
        FailIf(pID->WMP.wmiI.oOrientation >= O_RCW, WMP_errFail);

        // In low-memory mode, the full frame buffer is unavailable. This doesn't seem to
        // matter in O_NONE and O_FLIPH, but for O_FLIPV and O_FLIPVH, outputMBRow tries to write to
        // the bottom of full-frame buffer. Adjust the buffer pointer to compensate.
        if (O_FLIPV == pID->WMP.wmiI.oOrientation || O_FLIPVH == pID->WMP.wmiI.oOrientation)
        {
            I32 iActualY2 = pRect->Y + pRect->Height;
            pbLowMemAdj = pb - (pID->WMP.wmiI.cROIHeight - (iActualY2 - pID->WMP.cLinesCropped)) * cbStride;
        }
        else
        {
            pbLowMemAdj = pb - (pRect->Y - pID->WMP.cLinesCropped) * cbStride;
        }
        wmiBI.pv = pbLowMemAdj;

        for (i = (U32)pID->WMP.DecoderCurrMBRow; i < cMBRow; i++)
        {
            size_t cLinesDecoded;
            wmiBI.uiFirstMBRow = i;
            wmiBI.uiLastMBRow = i;
            FailIf(ICERR_OK != ImageStrDecDecode(pID->WMP.ctxSC, &wmiBI, &cLinesDecoded), WMP_errFail);
            pID->WMP.cLinesDecoded += cLinesDecoded;
            if (FALSE == pID->WMP.fFirstNonZeroDecode && cLinesDecoded > 0)
            {
                pID->WMP.cLinesCropped += (linesperMBRow - cLinesDecoded);
                pID->WMP.fFirstNonZeroDecode = TRUE;
            }

            if (0 == cLinesDecoded && pRect->Y > 0)
            {
                pID->WMP.cLinesCropped += linesperMBRow;
            }
        }
        wmiBI.pv = pbLowMemAdj;

        // If we're past the top of the image, then we're done, so terminate.
        if (linesperMBRow * (cMBRow - 1) >= pID->WMP.wmiI.cROIHeight) {
            FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC), WMP_errFail);        
        }
        pID->WMP.DecoderCurrMBRow = cMBRow; // Set to next possible MBRow that is decodable

#else
        FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI, &pID->WMP.wmiSCP, &pID->WMP.ctxSC), WMP_errFail);
        FailIf(ICERR_OK != ImageStrDecDecode(pID->WMP.ctxSC, &wmiBI), WMP_errFail);
        FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC), WMP_errFail);
#endif //REENTRANT_MODE

        if(pID->WMP.bHasAlpha)//planar alpha
        {
            pID->WMP.wmiSCP.uAlphaMode = tempAlphaMode;
        }
    }

//    if(pID->WMP.bHasAlpha && pID->WMP.wmiSCP.uAlphaMode == 2)
//    if(pID->WMP.bHasAlpha && pID->WMP.wmiSCP.uAlphaMode != 1)
    if(pID->WMP.bHasAlpha && pID->WMP.wmiSCP.uAlphaMode != 0)
    {
        pID->WMP.wmiI_Alpha = pID->WMP.wmiI;
        pID->WMP.wmiSCP_Alpha = pID->WMP.wmiSCP;

//        assert(pID->WMP.wmiI_Alpha.cfColorFormat == CF_RGB); // only RGBA is supported for now!
        pID->WMP.wmiI_Alpha.cfColorFormat = Y_ONLY;

        switch (pID->WMP.wmiI.bdBitDepth)
        {
            case BD_8:
                pID->WMP.wmiI_Alpha.cLeadingPadding += (pID->WMP.wmiI.cBitsPerUnit >> 3) - 1;
                break;
            
            case BD_16:
            case BD_16S:
            case BD_16F:
                pID->WMP.wmiI_Alpha.cLeadingPadding += (pID->WMP.wmiI.cBitsPerUnit >> 3) / sizeof(U16) - 1;
                break;
            
            case BD_32:
            case BD_32S:
            case BD_32F:
                pID->WMP.wmiI_Alpha.cLeadingPadding += (pID->WMP.wmiI.cBitsPerUnit >> 3) / sizeof(float) - 1;
                break;
            
            case BD_5:
            case BD_10:
            case BD_565:
            default:
                break;
        }

        pID->WMP.wmiSCP_Alpha.fMeasurePerf = TRUE;
        Call(pWS->SetPos(pWS, pID->WMP.wmiDEMisc.uAlphaOffset));
#ifdef REENTRANT_MODE
        if (0 == pID->WMP.DecoderCurrAlphaMBRow) // add this to WMP struct!
        {
            FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI_Alpha, &pID->WMP.wmiSCP_Alpha, &pID->WMP.ctxSC_Alpha), WMP_errFail);
        }
        
        cMBRow = ((U32) pID->WMP.wmiI.cROITopY + pRect->Y + pRect->Height + linesperMBRow - 1) / linesperMBRow + 1;
        cMBRowStart = pRect->Y / linesperMBRow + 1;
        // if current request starts before current state, then rewind.
        if (cMBRowStart < pID->WMP.DecoderCurrAlphaMBRow) 
        {
            pID->WMP.DecoderCurrAlphaMBRow = 0;
            FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC_Alpha), WMP_errFail);
            FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI_Alpha, &pID->WMP.wmiSCP_Alpha, &pID->WMP.ctxSC_Alpha), WMP_errFail);
        }

        for (i = (U32)pID->WMP.DecoderCurrAlphaMBRow; i < cMBRow; i++)
        {
            size_t cLinesDecoded;
            wmiBI.uiFirstMBRow = i;
            wmiBI.uiLastMBRow = i;
            FailIf(ICERR_OK != ImageStrDecDecode(pID->WMP.ctxSC_Alpha, &wmiBI, &cLinesDecoded), WMP_errFail);
        }

        // If we're past the top of the image, then we're done, so terminate
        if (linesperMBRow * (cMBRow - 1) >= pID->WMP.wmiI.cROIHeight) {
            FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC_Alpha), WMP_errFail);
        }
        pID->WMP.DecoderCurrAlphaMBRow = cMBRow; // Set to next possible MBRow that is decodable
        wmiBI.pv = pb;
#else
        FailIf(ICERR_OK != ImageStrDecInit(&pID->WMP.wmiI_Alpha, &pID->WMP.wmiSCP_Alpha, &pID->WMP.ctxSC_Alpha), WMP_errFail);
        FailIf(ICERR_OK != ImageStrDecDecode(pID->WMP.ctxSC_Alpha, &wmiBI), WMP_errFail);
        FailIf(ICERR_OK != ImageStrDecTerm(pID->WMP.ctxSC_Alpha), WMP_errFail);
#endif //REENTRANT_MODE
    }

    pID->idxCurrentLine += pRect->Height;

Cleanup:
    return err;
}


ERR PKImageDecode_GetMetadata_WMP(PKImageDecode *pID, U32 uOffset, U32 uByteCount, U8 *pbGot, U32 *pcbGot)
{
    ERR err = WMP_errSuccess;

    if (pbGot && uOffset)
    {
        struct WMPStream* pWS = pID->pStream;
        size_t iCurrPos;

        FailIf(*pcbGot < uByteCount, WMP_errBufferOverflow);
        Call(pWS->GetPos(pWS, &iCurrPos));
        Call(pWS->SetPos(pWS, uOffset));
        Call(pWS->Read(pWS, pbGot, uByteCount));
        Call(pWS->SetPos(pWS, iCurrPos));
    }

Cleanup:
    if (Failed(err))
        *pcbGot = 0;
    else
        *pcbGot = uByteCount;

    return err;
}



ERR PKImageDecode_GetColorContext_WMP(PKImageDecode *pID, U8 *pbColorContext, U32 *pcbColorContext)
{
    return PKImageDecode_GetMetadata_WMP(pID, pID->WMP.wmiDEMisc.uColorProfileOffset,
        pID->WMP.wmiDEMisc.uColorProfileByteCount, pbColorContext, pcbColorContext);
}



ERR PKImageDecode_GetDescriptiveMetadata_WMP(PKImageDecode *pID, DESCRIPTIVEMETADATA *pDescMetadata)
{
    ERR err = WMP_errSuccess;
    *pDescMetadata = pID->WMP.sDescMetadata;
    return err;
}


ERR PKImageDecode_Release_WMP(PKImageDecode** ppID)
{
    ERR             err = WMP_errSuccess;
    PKImageDecode  *pID;

    if (NULL == ppID)
        goto Cleanup;

    pID = *ppID;

    // Free descriptive metadata
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarImageDescription);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarCameraMake);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarCameraModel);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarSoftware);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarDateTime);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarArtist);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarCopyright);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarRatingStars);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarRatingValue);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarCaption);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarDocumentName);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarPageName);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarPageNumber);
    FreeDescMetadata(&pID->WMP.sDescMetadata.pvarHostComputer);

    // Release base class
    Call(PKImageDecode_Release(ppID));

Cleanup:
    return err;
}



ERR PKImageDecode_Create_WMP(PKImageDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKImageDecode* pID = NULL;

    Call(PKImageDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_WMP;
    pID->GetSize = PKImageDecode_GetSize_WMP;
    pID->GetRawStream = PKImageDecode_GetRawStream_WMP;
    pID->Copy = PKImageDecode_Copy_WMP;
    pID->GetColorContext = PKImageDecode_GetColorContext_WMP;
    pID->GetDescriptiveMetadata = PKImageDecode_GetDescriptiveMetadata_WMP;
    pID->Release = PKImageDecode_Release_WMP;

Cleanup:
    return err;
}

