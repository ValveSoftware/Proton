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
#include <stdlib.h>
#include <string.h>

#include <JXRTest.h>

#pragma pack(push, 1)

#define BI_RGB 0
#define BI_BITFIELDS 3

#define BI_RGB555_MASK_B 0x001F
#define BI_RGB555_MASK_G 0x03E0
#define BI_RGB555_MASK_R 0x7C00

#define BI_RGB565_MASK_B 0x001F
#define BI_RGB565_MASK_G 0x07E0
#define BI_RGB565_MASK_R 0xF800

#define BI_RGB101010_MASK_B 0x000003FF
#define BI_RGB101010_MASK_G 0x000FFC00
#define BI_RGB101010_MASK_R 0x3FF00000

typedef struct tagBITMAPFILEHEADER { 
    U8 szBM[2];
    U32 uSize;
    U16 reserved1;
    U16 reserved2;
    U32 uOffBits;
} BITMAPFILEHEADER, *PBITMAPFILEHEADER; 

typedef struct tagBITMAPINFOHEADER{
    U32 uSize;
    I32 iWidth;
    I32 iHeight;
    I16 iPlanes;
    I16 iBitCount;
    U32 uCompression;
    U32 uImageSize;
    I32 iPelsPerMeterX;
    I32 iPelsPerMeterY;
    U32 uColorUsed;
    U32 uColorImportant;
} BITMAPINFOHEADER, *PBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADEREXT{
    U32 uA;
    U32 uB;
    U32 uC;
    U32 uD;
} BITMAPINFOHEADEREXT, *PBITMAPINFOHEADEREXT;


#pragma pack(pop)

//================================================================
// PKImageEncode_BMP
//================================================================
ERR WriteBMPHeader(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;

    static U32 rguColorTable[256] = {0};
    size_t cbColorTable = 0;
    size_t cbLineS = 0;
    U32 i = 0;

    struct WMPStream* pS = pIE->pStream;
    BITMAPFILEHEADER bmpFH = { 0, };
    BITMAPINFOHEADER bmpIH = {sizeof(bmpIH), 0, };

    bmpFH.szBM[0] = 'B';
    bmpFH.szBM[1] = 'M';

    if (IsEqualGUID(&GUID_PKPixelFormat24bppRGB, &pIE->guidPixFormat) || IsEqualGUID(&GUID_PKPixelFormat24bppBGR, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 3;
        cbColorTable = 0;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat32bppBGRA, &pIE->guidPixFormat) 
        || IsEqualGUID(&GUID_PKPixelFormat32bppBGR, &pIE->guidPixFormat)
        || IsEqualGUID(&GUID_PKPixelFormat32bppPBGRA, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 4;
        cbColorTable = 0;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat8bppGray, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 1;

        cbColorTable = sizeof(rguColorTable);
        for (i = 0; i < sizeof2(rguColorTable); ++i)
        {
            rguColorTable[i] = i | (i << 8) | (i << 16);
        }
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat16bppRGB555, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 2;
        bmpIH.uCompression = BI_BITFIELDS;

        cbColorTable = sizeof(rguColorTable[0]) * 3;
        rguColorTable[0] = BI_RGB555_MASK_R;
        rguColorTable[1] = BI_RGB555_MASK_G;
        rguColorTable[2] = BI_RGB555_MASK_B;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat16bppRGB565, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 2;
        bmpIH.uCompression = BI_BITFIELDS;

        cbColorTable = sizeof(rguColorTable[0]) * 3;
        rguColorTable[0] = BI_RGB565_MASK_R;
        rguColorTable[1] = BI_RGB565_MASK_G;
        rguColorTable[2] = BI_RGB565_MASK_B;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat32bppRGB101010, &pIE->guidPixFormat))
    {
        pIE->cbPixel = 4;
        bmpIH.uCompression = BI_BITFIELDS;

        cbColorTable = sizeof(rguColorTable[0]) * 3;
        rguColorTable[0] = BI_RGB101010_MASK_R;
        rguColorTable[1] = BI_RGB101010_MASK_G;
        rguColorTable[2] = BI_RGB101010_MASK_B;
    }            
    else
        Call(WMP_errUnsupportedFormat);

    cbLineS = (pIE->cbPixel * pIE->uWidth + 3) / 4 * 4;

    bmpFH.uOffBits = (U32)(sizeof(bmpFH) + sizeof(bmpIH) + cbColorTable);
    bmpFH.uSize = (U32)(bmpFH.uOffBits + cbLineS * pIE->uHeight);

    bmpIH.iWidth = pIE->uWidth;
    bmpIH.iHeight = pIE->uHeight;
    bmpIH.iPlanes = 1;
    bmpIH.iBitCount = (I16)(8 * pIE->cbPixel);
    bmpIH.uImageSize = (U32)(cbLineS * pIE->uHeight);
    bmpIH.iPelsPerMeterX = (I32)(pIE->fResX * 39.37);
    bmpIH.iPelsPerMeterY = (I32)(pIE->fResY * 39.37);

    Call(pS->Write(pS, &bmpFH, sizeof(bmpFH)));
    Call(pS->Write(pS, &bmpIH, sizeof(bmpIH)));
    Call(pS->Write(pS, rguColorTable, cbColorTable));

    pIE->offPixel = pIE->offStart + bmpFH.uOffBits;
    pIE->fHeaderDone = !FALSE;

Cleanup:
    return err;
}

ERR PKImageEncode_WritePixels_BMP(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pIE->pStream;
    size_t cbLineM = 0, cbLineS = 0;
    I32 i = 0;
    static U8 pPadding[4] = {0};

    // header
    if (!pIE->fHeaderDone)
    {
        // WriteBMPHeader() also inits this object
        Call(WriteBMPHeader(pIE));
    }

    // body
    // calculate line size in memory and in stream
    cbLineM = pIE->cbPixel * pIE->uWidth;
    cbLineS = (cbLineM + 3) / 4 * 4;

    //FailIf(pRect->X < 0 || pID->uWidth <= pRect->X, WMP_errInvalidParameter);
    //FailIf(pRect->Y < 0 || pID->uHeight <= pRect->Y, WMP_errInvalidParameter);
    //FailIf(pRect->Width < 0 || pID->uWidth < pRect->X + pRect->Width, WMP_errInvalidParameter);
    //FailIf(pRect->Height < 0 || pID->uHeight < pRect->Y + pRect->Height, WMP_errInvalidParameter);
    FailIf(cbStride < cbLineM, WMP_errInvalidParameter);

    for (i = cLine - 1; 0 <= i; --i)
    {
        size_t offM = cbStride * i;
        size_t offS = cbLineS * (pIE->uHeight - (pIE->idxCurrentLine + i + 1));

        Call(pS->SetPos(pS, pIE->offPixel + offS));
        Call(pS->Write(pS, pbPixel + offM, cbLineM));
    }
    Call(pS->Write(pS, pPadding, (cbLineS - cbLineM)));
    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}

ERR PKImageEncode_Create_BMP(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_BMP;

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_BMP
//================================================================
ERR ParseBMPHeader(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    BITMAPFILEHEADER bmpFH = {0};
    BITMAPINFOHEADER bmpIH = {0};
    static U32 bmpIHE[32] = {0};    // should be >= sizeof(BITMAPV5HEADER) - sizeof(BITMAPINFOHEADER)
    static U32 rguColorTable[256] = {0};
    U32 i = 0;

    Call(pWS->Read(pWS, &bmpFH, sizeof(bmpFH)));
    FailIf(bmpFH.szBM != (U8 *) strstr((char *) bmpFH.szBM, "BM"), WMP_errUnsupportedFormat);

    Call(pWS->Read(pWS, &bmpIH, sizeof(bmpIH)));

    FailIf(((sizeof(bmpIH) > bmpIH.uSize) || ((sizeof(bmpIH) + sizeof(bmpIHE)) < bmpIH.uSize)), WMP_errUnsupportedFormat);

    if (sizeof(bmpIH) < bmpIH.uSize)
        Call(pWS->Read(pWS, &bmpIHE, bmpIH.uSize - sizeof(bmpIH)));

    switch (bmpIH.iBitCount)
    {
        case 8:
            // check the color table to verify the image is actually gray scale
            Call(pWS->Read(pWS, rguColorTable, sizeof(rguColorTable)));
            for (i = 0; i < sizeof2(rguColorTable); ++i)
            {
                U32 c = i | (i << 8) | (i << 16);
                FailIf(c != rguColorTable[i], WMP_errUnsupportedFormat);
            }
            
            pID->guidPixFormat = GUID_PKPixelFormat8bppGray;
            pID->EXT.BMP.cbPixel = 1;
            break;

        case 16:
//            Call(pWS->Read(pWS, rguColorTable, sizeof(rguColorTable[0] * 3)));
/*            if (BI_RGB555_MASK_B == rguColorTable[0] && BI_RGB555_MASK_G == rguColorTable[1] && BI_RGB555_MASK_R == rguColorTable[2])
            {
                pID->guidPixFormat = GUID_PKPixelFormat16bppRGB555;
            }
            if (BI_RGB565_MASK_B == rguColorTable[0] && BI_RGB565_MASK_G == rguColorTable[1] && BI_RGB565_MASK_R == rguColorTable[2])
            {
                pID->guidPixFormat = GUID_PKPixelFormat16bppRGB565;
            }
            else
            {
                Call(WMP_errUnsupportedFormat);
            }
*/
            pID->EXT.BMP.cbPixel = 2;
            break;
            
        case 24:
            pID->guidPixFormat = GUID_PKPixelFormat24bppBGR;
            pID->EXT.BMP.cbPixel = 3;
            break;

        case 32:
/*            Call(pWS->Read(pWS, rguColorTable, sizeof(rguColorTable[0] * 3)));
            if (BI_RGB101010_MASK_B == rguColorTable[0] && BI_RGB101010_MASK_G == rguColorTable[1] && BI_RGB101010_MASK_R == rguColorTable[2])
            {
                pID->guidPixFormat = GUID_PKPixelFormat32bppRGB101010;
            }
            else
            {
                Call(WMP_errUnsupportedFormat);
            }
*/
//            pID->guidPixFormat = GUID_PKPixelFormat32bppBGRA;
            pID->EXT.BMP.cbPixel = 4;
            break;
            
        default:
            Call(WMP_errUnsupportedFormat);
            break;
    }

    pID->uWidth = (U32)bmpIH.iWidth;
    pID->uHeight = (U32)bmpIH.iHeight;

    pID->fResX = (0 == bmpIH.iPelsPerMeterX ? 96 : (Float)(bmpIH.iPelsPerMeterX * .0254));
    pID->fResY = (0 == bmpIH.iPelsPerMeterY ? 96 : (Float)(bmpIH.iPelsPerMeterY * .0254));
    
    pID->EXT.BMP.offPixel = pID->offStart + bmpFH.uOffBits;

Cleanup:
    return err;
}

ERR PKImageDecode_Initialize_BMP(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKTestDecode_Initialize(pID, pWS));
    Call(ParseBMPHeader(pID, pWS));

Cleanup:
    return err;
}

ERR PKImageDecode_Copy_BMP(
    PKTestDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pID->pStream;

    size_t cbLineS = (pID->EXT.BMP.cbPixel * pID->uWidth + 3) / 4 * 4;
    size_t cbLineM = pID->EXT.BMP.cbPixel * pRect->Width;
    
    I32 i = 0;

    //FailIf(pRect->X < 0 || pID->uWidth <= pRect->X, WMP_errInvalidParameter);
    //FailIf(pRect->Y < 0 || pID->uHeight <= pRect->Y, WMP_errInvalidParameter);
    //FailIf(pRect->Width < 0 || pID->uWidth < pRect->X + pRect->Width, WMP_errInvalidParameter);
    //FailIf(pRect->Height < 0 || pID->uHeight < pRect->Y + pRect->Height, WMP_errInvalidParameter);
    FailIf(cbStride < cbLineM, WMP_errInvalidParameter);

    for (i = pRect->Y + pRect->Height - 1; pRect->Y <= i; --i)
    {
        size_t offLine = pID->EXT.BMP.cbPixel * pRect->X;
        size_t offS = cbLineS * (pID->uHeight - i - 1) + offLine;
        size_t offM = cbStride * (i - pRect->Y) + offLine;

        Call(pS->SetPos(pS, pID->EXT.BMP.offPixel + offS));
        Call(pS->Read(pS, pb + offM, cbLineM));
    }

Cleanup:
    return err;
}

ERR PKImageDecode_Create_BMP(
    PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKTestDecode* pID = NULL;

    Call(PKTestDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_BMP;
    pID->Copy = PKImageDecode_Copy_BMP;

Cleanup:
    return err;
}

