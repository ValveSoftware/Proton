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
#ifndef ANSI
#define _CRT_SECURE_NO_WARNINGS
#endif ANSI

#include <stdlib.h>
#include <string.h>

#include <JXRTest.h>

#pragma pack(push, 1)
#pragma pack(pop)

//================================================================
// PKImageEncode_HDR
//================================================================
ERR WriteHDRHeader(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pS = pIE->pStream;

    char txtbuff[100];

    strcpy(txtbuff, "#?RADIANCE\nFORMAT=32-bit_rle_rgbe\n\n");
    Call(pS->Write(pS, txtbuff, strlen(txtbuff)));

    pIE->offPixel = strlen(txtbuff);

    sprintf(txtbuff, "-Y %d +X %d\n", pIE->uHeight, pIE->uWidth);
    Call(pS->Write(pS, txtbuff, strlen(txtbuff)));
    pIE->offPixel += strlen(txtbuff);

    pIE->cbPixel = 4;

    pIE->fHeaderDone = !FALSE;

Cleanup:
    return err;
}

ERR PKImageEncode_WritePixels_HDR(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pIE->pStream;
    size_t cbLineM = 0, cbLineS = 0;
    size_t i = 0;

    // header
    if (!pIE->fHeaderDone)
    {
        // WriteHDRHeader() also inits this object
        Call(WriteHDRHeader(pIE));
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

    for (i = 0; i <= cLine - 1; i++)
    {
        size_t offM = cbStride * i;
        size_t offS = cbLineS * (pIE->idxCurrentLine + i);

        Call(pS->SetPos(pS, pIE->offPixel + offS));
        Call(pS->Write(pS, pbPixel + offM, cbLineM));
    }
    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}

ERR PKImageEncode_Create_HDR(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_HDR;

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_HDR
//================================================================
ERR ParseHDRHeader(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    char txtbuff[512];
    Bool done = FALSE;

    FailIf(NULL == fgets(txtbuff, 12, pWS->state.file.pFile), WMP_errUnsupportedFormat);
    FailIf(0 != strcmp(txtbuff, "#?RADIANCE\n"), WMP_errUnsupportedFormat);

    // Read lines to image size
    while (!done) {
        FailIf(NULL == fgets(txtbuff, 512, pWS->state.file.pFile), WMP_errUnsupportedFormat);

        if (0 == strncmp(txtbuff, "FORMAT", 6)) {
            FailIf(0 != strcmp(txtbuff, "FORMAT=32-bit_rle_rgbe\n"), WMP_errUnsupportedFormat);
        }
        if (0 == strncmp(txtbuff, "-Y", 2)) {
            sscanf(txtbuff, "-Y %d +X %d\n", &pID->uHeight, &pID->uWidth);
            done = TRUE;
        }
      }

    Call(pWS->Read(pWS, txtbuff, 3));

    if(((2 == txtbuff[0]) && (2 == txtbuff[1]) && (0 == (txtbuff[2] & 0x80))) ||
       ((1 == txtbuff[0]) && (1 == txtbuff[1]) && (1 == txtbuff[2])))
    {
        printf("Doesn't support compressed HDR files.\n");
        err = WMP_errUnsupportedFormat;
        goto Cleanup;
    }

    // Set header other header parameters
    pID->guidPixFormat = GUID_PKPixelFormat32bppRGBE;
    pID->EXT.HDR.cbPixel = 4; 
    // Set pointer to first pixel
    Call(pWS->GetPos(pWS, &pID->EXT.HDR.offPixel));
    pID->EXT.HDR.offPixel -= 3;
    Call(pWS->SetPos(pWS, pID->EXT.HDR.offPixel));

    // We don't need: pID->fResX and pID->fResY
Cleanup:
    return err;
}

ERR PKImageDecode_Initialize_HDR(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKTestDecode_Initialize(pID, pWS));
    Call(ParseHDRHeader(pID, pWS));

Cleanup:
    return err;
}

ERR PKImageDecode_Copy_HDR(
    PKTestDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pID->pStream;

    size_t cbLineS = (pID->EXT.HDR.cbPixel * pID->uWidth + 3) / 4 * 4;
    size_t cbLineM = pID->EXT.HDR.cbPixel * pRect->Width;
    
    I32 i = 0;

    //FailIf(pRect->X < 0 || pID->uWidth <= pRect->X, WMP_errInvalidParameter);
    //FailIf(pRect->Y < 0 || pID->uHeight <= pRect->Y, WMP_errInvalidParameter);
    //FailIf(pRect->Width < 0 || pID->uWidth < pRect->X + pRect->Width, WMP_errInvalidParameter);
    //FailIf(pRect->Height < 0 || pID->uHeight < pRect->Y + pRect->Height, WMP_errInvalidParameter);
    FailIf(cbStride < cbLineM, WMP_errInvalidParameter);

    for (i = pRect->Y ; i < pRect->Y + pRect->Height ; i++)
    {
        size_t offLine = pID->EXT.HDR.cbPixel * pRect->X;
        size_t offS = cbLineS * i + offLine;
        size_t offM = cbStride * (i - pRect->Y) + offLine;

        Call(pS->SetPos(pS, pID->EXT.HDR.offPixel + offS));
        Call(pS->Read(pS, pb + offM, cbLineM));
    }

Cleanup:
    return err;
}

ERR PKImageDecode_Create_HDR(
    PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKTestDecode* pID = NULL;

    Call(PKTestDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_HDR;
    pID->Copy = PKImageDecode_Copy_HDR;

Cleanup:
    return err;
}

