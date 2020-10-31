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

#include <JXRTest.h>


//================================================================
// PKImageEncode_PNM helpers
//================================================================
ERR WritePNMHeader(PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;

    PKPixelInfo PI;
    struct WMPStream* pS = pIE->pStream;
    U8 buf[64] = {0};
    int cb = 0;

    char szSig[2];
    U32 uMaxVal = 0;

    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    if (IsEqualGUID(&GUID_PKPixelFormatBlackWhite, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = '5';
        uMaxVal = 1;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat8bppGray, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = '5';
        uMaxVal = 255;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat24bppRGB, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = '6';
        uMaxVal = 255;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat48bppRGB, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = '6';
        uMaxVal = 65535;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat16bppGray, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = '6';
        uMaxVal = 65535;
    }
    else if (IsEqualGUID(&GUID_PKPixelFormat96bppRGBFloat, PI.pGUIDPixFmt))
    {
        szSig[0] = 'P', szSig[1] = 'F';
    }
    else
        Call(WMP_errUnsupportedFormat);

    if('P' == szSig[0] && 'F' == szSig[1])
        cb = sprintf((char *) buf, "%c%c\n%u\n%u\n%s\n",
            szSig[0], szSig[1], (int)pIE->uWidth, (int)pIE->uHeight, "-1.0000");
    else
        cb = sprintf((char *) buf, "%c%c\n%u %u\n%u\n",
            szSig[0], szSig[1], (int)pIE->uWidth, (int)pIE->uHeight, (int)uMaxVal);

    assert(cb < sizeof2(buf));
    Call(pS->Write(pS, buf, cb));

    Call(pS->GetPos(pS, &pIE->offPixel));
    pIE->cbPixel = ((PI.cbitUnit + 7) >> 3);// ->cbPixel / pPI->cbPixelDenom;
    pIE->fHeaderDone = !FALSE;

Cleanup:
    return err;
}

//================================================================
// PKImageEncode_PNM
//================================================================
ERR PKImageEncode_WritePixels_PNM(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pIE->pStream;
    size_t cbLine = 0;
    size_t offPos = 0;
    size_t i = 0;

    // header
    if (!pIE->fHeaderDone)
    {
        Call(WritePNMHeader(pIE));
    }

    // body
    cbLine = pIE->cbPixel * pIE->uWidth;
    FailIf(cbStride < cbLine, WMP_errInvalidParameter);

    offPos = pIE->offPixel + cbLine * pIE->idxCurrentLine;
    Call(pS->SetPos(pS, offPos));

    for (i = 0; i < cLine; ++i)
    {
        Call(pS->Write(pS, pbPixel + cbStride * i, cbLine));
    }
    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}

ERR PKImageEncode_Create_PNM(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_PNM;

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_PNM helpers
//================================================================
ERR GetLineSkipPound(struct WMPStream* pWS, U8* pb, size_t cb)
{
    ERR err = WMP_errSuccess;
    U8 *pb1;
    size_t cb1;

    do
    {
        pb1 = pb;
        cb1 = cb;

        do {
            Call(pWS->Read(pWS, pb1, 1));
            cb1--;
            pb1++;
        }
        while (cb1 > 0 && pb1[-1] != '\n');

        //Call(pWS->GetLine(pWS, pb, cb));
    } while('#' == pb[0]);

Cleanup:
    return err;
}

ERR ParsePNMHeader(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    U8 line[128] = {0};
    size_t idxChannel = 0, idxBitDepth = 0;
    unsigned int width = 0, height = 0, maxval = 0;

    static const PKPixelFormatGUID* pixFormat[2][2] =
    {
        {&GUID_PKPixelFormat8bppGray, &GUID_PKPixelFormat16bppGray,},
        {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat48bppRGB,},
    };

    //================================
    Call(GetLineSkipPound(pWS, line, sizeof2(line)));
    if (line == (U8 *) strstr((char *) line, "P5"))
    {
        idxChannel = 0;
        Call(GetLineSkipPound(pWS, line, sizeof2(line)));
        FailIf(2 != sscanf((char *) line, "%u %u", &width, &height), WMP_errUnsupportedFormat);
    }
    else if(line == (U8 *) strstr((char *) line, "P6"))
    {
        idxChannel = 1;
        Call(GetLineSkipPound(pWS, line, sizeof2(line)));
        FailIf(2 != sscanf((char *) line, "%u %u", &width, &height), WMP_errUnsupportedFormat);
    } 
    else if(line == (U8 *) strstr((char *) line, "PF")) 
    {
        idxChannel = 2;
        Call(GetLineSkipPound(pWS, line, sizeof2(line)));
        FailIf(1 != sscanf((char *) line, "%u", &width), WMP_errUnsupportedFormat);
        Call(GetLineSkipPound(pWS, line, sizeof2(line)));
        FailIf(1 != sscanf((char *) line, "%u", &height), WMP_errUnsupportedFormat);
    } 
    else
    {
        Call(WMP_errUnsupportedFormat);
    }

    //================================
//    Call(GetLineSkipPound(pWS, line, sizeof2(line)));
//    FailIf(2 != sscanf(line, "%u %u", &width, &height), WMP_errUnsupportedFormat);

    FailIf(0 == width || 0 == height, WMP_errUnsupportedFormat);

    pID->uWidth = (U32)width;
    pID->uHeight = (U32)height;

    //================================
    Call(GetLineSkipPound(pWS, line, sizeof2(line)));

    FailIf(1 != sscanf((char *) line, "%u", &maxval), WMP_errUnsupportedFormat);

    if (2==idxChannel)
    {
        FailIf(maxval != -1, WMP_errUnsupportedFormat);
        pID->guidPixFormat = GUID_PKPixelFormat96bppRGBFloat;
    }
    else
    {
        FailIf(maxval < 1 || 65535 < maxval, WMP_errUnsupportedFormat);
        idxBitDepth = 255 < maxval;
        pID->guidPixFormat = *pixFormat[idxChannel][idxBitDepth];
    }

    Call(pWS->GetPos(pWS, &pID->EXT.PNM.offPixel));

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_PNM
//================================================================
ERR PKImageDecode_Initialize_PNM(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKTestDecode_Initialize(pID, pWS));
    Call(ParsePNMHeader(pID, pWS));

Cleanup:
    return err;
}


ERR PKImageDecode_Copy_PNM(
    PKTestDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pID->pStream;
    PKPixelInfo PI;
    size_t cbLineS = 0;
    size_t cbLineM = 0;
    I32 i = 0;

    PI.pGUIDPixFmt = &pID->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    cbLineS = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pID->uWidth + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pID->uWidth)); 
    cbLineM = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pRect->Width + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pRect->Width)); 
    FailIf(cbStride < cbLineM, WMP_errInvalidParameter);

    for (i = 0; i < pRect->Height; ++i)
    {
        size_t offLine = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pRect->X + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pRect->X)); 
        size_t offS = cbLineS * (pRect->Y + i) + offLine;
        size_t offM = cbStride * i + offLine;

        Call(pS->SetPos(pS, pID->EXT.PNM.offPixel + offS));
        Call(pS->Read(pS, pb + offM, cbLineM));
    }

Cleanup:
    return err;
}

ERR PKImageDecode_Create_PNM(
    PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKTestDecode* pID = NULL;

    Call(PKTestDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_PNM;
    pID->Copy = PKImageDecode_Copy_PNM;

Cleanup:
    return err;
}

