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

#include <strcodec.h>
#include <JXRTest.h>

//================================================================
#define TIF_tagNull 0
#define TIF_tagSubfileType 0xff
#define TIF_tagNewSubfileType 0xfe
#define TIF_tagImageWidth 0x100
#define TIF_tagImageLength 0x101
#define TIF_tagBitsPerSample 0x102
#define TIF_tagCompression 0x103
#define TIF_tagPhotometricInterpretation 0x106
#define TIF_tagStripOffsets 0x111
#define TIF_tagOrientation 0x112
#define TIF_tagSamplesPerPixel 0x115
#define TIF_tagRowsPerStrip 0x116
#define TIF_tagStripByteCounts 0x117
#define TIF_tagXResolution 0x11a
#define TIF_tagYResolution 0x11b
#define TIF_tagPlanarConfiguration 0x11c
#define TIF_tagResolutionUnit 0x128
#define TIF_tagSoftware 0x131
#define TIF_tagColorMap 0x140
#define TIF_tagPredictor 0x13d
#define TIF_tagInkSet 0x14c
#define TIF_tagExtraSamples 0x152
#define TIF_tagSampleFormat 0x153

#define TIF_typBYTE 1
#define TIF_typASCII 2
#define TIF_typSHORT 3
#define TIF_typLONG 4
#define TIF_typRATIOAL 5
#define TIF_typSBYTE 6
#define TIF_typUNDEFINED 7
#define TIF_typSSHORT 8
#define TIF_typSLONG 9
#define TIF_typSRATIONAL 10
#define TIF_typFLOAT 11
#define TIF_typDOUBLE 12


//================================================================
typedef float FLOAT;
typedef double DOUBLE;


//================================================================
// PKImageEncode_TIF helpers
//================================================================
typedef struct tagTifDE
{
    U16 uTag;
    U16 uType;
    U32 uCount;
    U32 uValueOrOffset;
} TifDE;

typedef struct tagTifDEMisc
{
    U32 offBitsPerSample;
    U32 offSampleFormat;
    U32 bps, spp, sf;
    U32 iPhotometricInterpretation;

    U32 offXResolution;
    U32 resXF, resXD;

    U32 offYResolution;
    U32 resYF, resYD;
} TifDEMisc;

ERR PutTifUShort(
    struct WMPStream* pS,
    size_t offPos,
    U16 uValue)
{
    ERR err = WMP_errSuccess;

    Call(pS->SetPos(pS, offPos));
    Call(pS->Write(pS, &uValue, sizeof(uValue)));

Cleanup:
    return err;
}

ERR PutTifULong(
    struct WMPStream* pS,
    size_t offPos,
    U32 uValue)
{
    ERR err = WMP_errSuccess;

    Call(pS->SetPos(pS, offPos));
    Call(pS->Write(pS, &uValue, sizeof(uValue)));

Cleanup:
    return err;
}

ERR WriteTifDE(
    struct WMPStream* pS,
    size_t offPos,
    TifDE* pDE)
{
    ERR err = WMP_errSuccess;

    assert(-1 != pDE->uCount);
    assert(-1 != pDE->uValueOrOffset);

    Call(PutTifUShort(pS, offPos, pDE->uTag)); offPos += 2;
    Call(PutTifUShort(pS, offPos, pDE->uType)); offPos += 2;
    Call(PutTifULong(pS, offPos, pDE->uCount)); offPos += 4;

    switch (pDE->uType)
    {
        case TIF_typSHORT:
            if (1 == pDE->uCount)
            {
                Call(PutTifUShort(pS, offPos, (U16)pDE->uValueOrOffset)); offPos += 2;
                Call(PutTifUShort(pS, offPos, 0)); offPos += 2;
                break;
            }
            
        case TIF_typLONG:
        case TIF_typRATIOAL:
            Call(PutTifULong(pS, offPos, pDE->uValueOrOffset)); offPos += 4;
            break;

        default:
            Call(WMP_errInvalidParameter);
            break;
    }

Cleanup:
    return err;
}

ERR WriteTifHeader(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pS = pIE->pStream;
    size_t offPos = 0;

#ifdef _BIG__ENDIAN_
    U8 IIMM[3] = "MM";
#else // _BIG__ENDIAN_
    U8 IIMM[3] = "II";
#endif // _BIG__ENDIAN_

    TifDEMisc tifDEMisc = {
        (U32) -1, (U32) -1, (U32) -1, (U32) -1, (U32) -1, 
        2, // photometric interpretation
        (U32) -1, 10000, 10000,
        (U32) -1, 10000, 10000,
    };
    // const U32 cbTifDEMisc = sizeof(U16) * 10 + sizeof(U32) * 2 * 2;

    const static TifDE tifDEs[] =
    {
        {0x100, 4,  1, (U32) -1}, // TIF_tagImageWidth
        {0x101, 4,  1, (U32) -1}, // TIF_tagImageLength
        {0x102, 3, (U32) -1, (U32) -1}, // TIF_tagBitsPerSample
        {0x103, 3,  1,  1}, // TIF_tagCompression
        {0x106, 3,  1, (U32) -1}, // TIF_tagPhotometricInterpretation
        {0x111, 4,  1, (U32) -1}, // TIF_tagStripOffsets
        {0x112, 3,  1,  1}, // TIF_tagOrientation
        {0x115, 3,  1, (U32) -1}, // TIF_tagSamplesPerPixel
        {0x116, 4,  1, (U32) -1}, // TIF_tagRowsPerStrip
        {0x117, 4,  1, (U32) -1}, // TIF_tagStripByteCounts
        {0x11a, 5,  1, (U32) -1}, // TIF_tagXResolution
        {0x11b, 5,  1, (U32) -1}, // TIF_tagYResolution
        {0x11c, 3,  1,  1}, // TIF_tagPlanarConfiguration
        {0x128, 3,  1,  2}, // TIF_tagResolutionUnit
        {0x153, 3, (U32) -1, (U32) -1}, // TIF_tagSampleFormat 
//        {0x131, 2,  -1, -1}, // TIF_tagSoftware
//        {0x140, 3,  -1, -1}, // TIF_tagColorMap
    };
    U16 cTifDEs = sizeof2(tifDEs);
    TifDE tifDE = {0};
    PKPixelInfo PI;
    size_t cbLine = 0;

    size_t i = 0;
    size_t j;

    tifDEMisc.resXF = (U32)(pIE->fResX * 10000);
    tifDEMisc.resYF = (U32)(pIE->fResY * 10000);

    Call(pS->GetPos(pS, &offPos));
    FailIf(0 != offPos, WMP_errUnsupportedFormat);

    //================
    // TifHeader
    Call(pS->Write(pS, IIMM, 2)); offPos += 2;
    Call(PutTifUShort(pS, offPos, 42)); offPos += 2;
    Call(PutTifULong(pS, offPos, (U32)(offPos + 4))); offPos += 4;

    //================
    // TifDEMisc
    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    tifDEMisc.iPhotometricInterpretation =
        //the N channel TIF by PS has PhotometricInterpretation of PK_PI_RGB
        PI.uInterpretation == PK_PI_NCH || PI.uInterpretation == PK_PI_RGBE ? PK_PI_RGB :
        (PI.uInterpretation == PK_PI_B0 && pIE->WMP.wmiSCP.bBlackWhite ? PK_PI_W0 : PI.uInterpretation);
    tifDEMisc.spp = PI.uSamplePerPixel;
    tifDEMisc.bps = PI.uBitsPerSample;
    tifDEMisc.sf = PI.uSampleFormat;

    if (tifDEMisc.iPhotometricInterpretation == PK_PI_CMYK)
        cTifDEs++;
    if (PI.grBit & PK_pixfmtHasAlpha)
        cTifDEs++;
    tifDEMisc.offBitsPerSample = (U32)offPos + sizeof(U16) + 12 * cTifDEs + sizeof(U32);
    tifDEMisc.offSampleFormat = tifDEMisc.offBitsPerSample + (tifDEMisc.spp == 1 ? 0 : tifDEMisc.spp * 2);
    tifDEMisc.offXResolution = tifDEMisc.offSampleFormat + (tifDEMisc.spp == 1 ? 0 : tifDEMisc.spp * 2);
    tifDEMisc.offYResolution = tifDEMisc.offXResolution + 8;

    //================
    // TifIFD
    pIE->offPixel = tifDEMisc.offYResolution + 8;
    Call(PutTifUShort(pS, offPos, cTifDEs)); offPos += 2;

    //================
    tifDE = tifDEs[i++];
    assert(TIF_tagImageWidth == tifDE.uTag);
    tifDE.uValueOrOffset = pIE->uWidth;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagImageLength == tifDE.uTag);
    tifDE.uValueOrOffset = pIE->uHeight;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;
    
    tifDE = tifDEs[i++];
    assert(TIF_tagBitsPerSample == tifDE.uTag);
    tifDE.uCount = tifDEMisc.spp;
    tifDE.uValueOrOffset = 1 == tifDE.uCount ? tifDEMisc.bps : tifDEMisc.offBitsPerSample;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagCompression == tifDE.uTag);
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagPhotometricInterpretation == tifDE.uTag);
    tifDE.uValueOrOffset = tifDEMisc.iPhotometricInterpretation;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagStripOffsets == tifDE.uTag);
    tifDE.uValueOrOffset = (U32)pIE->offPixel;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagOrientation == tifDE.uTag);
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagSamplesPerPixel == tifDE.uTag);
    tifDE.uValueOrOffset = tifDEMisc.spp;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagRowsPerStrip == tifDE.uTag);
    tifDE.uValueOrOffset = pIE->uHeight;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagStripByteCounts == tifDE.uTag);
    cbLine = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pIE->uWidth + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pIE->uWidth)); 
    tifDE.uValueOrOffset = (U32)(cbLine * pIE->uHeight);
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagXResolution == tifDE.uTag);
    tifDE.uValueOrOffset = tifDEMisc.offXResolution;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagYResolution == tifDE.uTag);
    tifDE.uValueOrOffset = tifDEMisc.offYResolution;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;
   
    tifDE = tifDEs[i++];
    assert(TIF_tagPlanarConfiguration == tifDE.uTag);
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    tifDE = tifDEs[i++];
    assert(TIF_tagResolutionUnit == tifDE.uTag);
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    if (tifDEMisc.iPhotometricInterpretation == PK_PI_CMYK)
    {
        TifDE tifDE = {TIF_tagInkSet, 3, 1, 1};
        Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;
    }

    if (PI.grBit & PK_pixfmtHasAlpha)
    {
        TifDE tifDE = {TIF_tagExtraSamples, 3, 1, 1};
        if (!(PI.grBit & PK_pixfmtPreMul))
            tifDE.uValueOrOffset++;
        Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;
    }

    tifDE = tifDEs[i++];
    assert(TIF_tagSampleFormat == tifDE.uTag);
    tifDE.uCount = tifDEMisc.spp;
    tifDE.uValueOrOffset = 1 == tifDE.uCount ? tifDEMisc.sf : tifDEMisc.offSampleFormat;
    Call(WriteTifDE(pS, offPos, &tifDE)); offPos += 12;

    //================
    Call(PutTifULong(pS, offPos, 0)); offPos += 4;

    //================
    // TifDEMisc
    if (tifDE.uCount > 1)
    {
        assert(tifDEMisc.offBitsPerSample == offPos);
        if (PI.bdBitDepth == BD_565)
        {
            Call(PutTifUShort(pS, offPos, 5)); offPos += 2;
            Call(PutTifUShort(pS, offPos, 6)); offPos += 2;
            Call(PutTifUShort(pS, offPos, 5)); offPos += 2;
        }
        else
        {
            for (j = 0; j < tifDE.uCount; j++)
            {
                Call(PutTifUShort(pS, offPos, (U16)tifDEMisc.bps)); offPos += 2;
            }
        }

        assert(tifDEMisc.offSampleFormat == offPos);
        for (j = 0; j < tifDE.uCount; j++)
        {
            Call(PutTifUShort(pS, offPos, (U16)tifDEMisc.sf)); offPos += 2;
        }
    }
    
    assert(tifDEMisc.offXResolution == offPos);
    Call(PutTifULong(pS, offPos, tifDEMisc.resXF)); offPos += 4;
    Call(PutTifULong(pS, offPos, tifDEMisc.resXD)); offPos += 4;

    assert(tifDEMisc.offYResolution == offPos);
    Call(PutTifULong(pS, offPos, tifDEMisc.resYF)); offPos += 4;
    Call(PutTifULong(pS, offPos, tifDEMisc.resYD)); offPos += 4;

    assert(pIE->offPixel == offPos);

    pIE->fHeaderDone = !FALSE;

Cleanup:
    return err;
}

//================================================================
// PKImageEncode_TIF
//================================================================
ERR PKImageEncode_WritePixels_TIF(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pIE->pStream;
    PKPixelInfo PI;
    size_t cbLine = 0;
    size_t offPos = 0;
    size_t i = 0;

    // header
    if (!pIE->fHeaderDone)
    {
        Call(WriteTifHeader(pIE));
    }

    // body
    PI.pGUIDPixFmt = &pIE->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    cbLine = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pIE->uWidth + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pIE->uWidth)); 

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

ERR PKImageEncode_Create_TIF(PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;

    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_TIF;

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_TIF helpers
//================================================================
ERR GetTifUShort(
    struct WMPStream* pWS,
    size_t offPos,
    Bool fLittleEndian,
    U16* puValue)
{
    ERR err = WMP_errSuccess;
    U8 buf[2];

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Read(pWS, buf, sizeof2(buf)));

    if (fLittleEndian)
    {
        *puValue = buf[0] + ((U16)buf[1] << 8);
    }
    else
    {
        *puValue = ((U16)buf[0] << 8) + buf[1];
    }

Cleanup:
    return err;
}

ERR GetTifULong(
    struct WMPStream* pWS,
    size_t offPos,
    Bool fLittleEndian,
    U32* puValue)
{
    ERR err = WMP_errSuccess;
    U8 buf[4];

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Read(pWS, buf, sizeof2(buf)));

    if (fLittleEndian)
    {
        *puValue = buf[0] + ((U32)buf[1] << 8) + ((U32)buf[2] << 16) + ((U32)buf[3] << 24);
    }
    else
    {
        *puValue = ((U32)buf[0] << 24) + ((U32)buf[1] << 16) + ((U32)buf[2] << 8) + buf[3];
    }

Cleanup:
    return err;
}

ERR GetTifULongArray(
    struct WMPStream* pWS,
    size_t offPos,
    size_t cElements,
    Bool fLittleEndian,
    U32* puValue)
{
    ERR err = WMP_errSuccess;

    if (1 == cElements)
    {
        puValue[0] = (U32)offPos;
    }
    else
    {
        size_t i = 0;
        for (i = 0; i < cElements; ++i)
        {
            Call(GetTifULong(pWS, offPos, fLittleEndian, &puValue[i]));
            offPos += sizeof(*puValue);
        }
    }

Cleanup:
    return err;
}

ERR ParseTifDEValue(
    PKTestDecode* pID,
    U16 uTag,
    U16 uType,
    U32 uCount)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pWS = pID->pStream;
    U16 bpc[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    U16 sf[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    U32 uPos = 0;
    U16 usValue = 0;
    U32 uValue0 = 0;
    U32 uValue1 = 0;
    size_t i, offPos = 0;

    //================================
    Call(pWS->GetPos(pWS, &offPos));

    //================================
    switch (uType)
    {
        case TIF_typSHORT:
            Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &usValue));
            uValue0 = usValue;
            break;

        case TIF_typLONG:
            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uValue0));
            break;
    }

    //================================
    switch (uTag)
    {
        case TIF_tagNewSubfileType:
            FailIf(0 != uValue0, WMP_errUnsupportedFormat);
            break;

        case TIF_tagSubfileType:
        case TIF_tagPredictor:
            FailIf(1 != uValue0, WMP_errUnsupportedFormat);
            break;

        case TIF_tagImageWidth:
            pID->uWidth = uValue0;
            break;

        case TIF_tagImageLength:
            pID->uHeight = uValue0;
            break;

        case TIF_tagBitsPerSample:
            if (1 == uCount)
            {
                pID->EXT.TIF.uBitsPerSample = uValue0; 
            }
            else
            {
                Bool bpcAnd = 1;

                Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uPos));
                offPos = uPos;

                Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &bpc[0]));

                for (i = 1; i < uCount; i++)
                {
                    Call(GetTifUShort(pWS, offPos + (i << 1) , pID->EXT.TIF.fLittleEndian, &bpc[i]));
                    bpcAnd = (bpcAnd && (bpc[0] == bpc[i]));
                }

                if (bpcAnd)
                    pID->EXT.TIF.uBitsPerSample = bpc[0];
                else
                    Call(WMP_errUnsupportedFormat);
            }
            break;

        case TIF_tagExtraSamples:
            FailIf(0 != uValue0 && 1 != uValue0 && 2 != uValue0, WMP_errUnsupportedFormat);
            pID->EXT.TIF.uExtraSamples = uValue0;
            break;

        case TIF_tagSampleFormat:
            if (1 == uCount)
            {
                pID->EXT.TIF.uSampleFormat = uValue0; 
            }
            else
            {
                Bool sfAnd = 1;

                Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uPos));
                offPos = uPos;

                Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &sf[0]));

                for (i = 1; i < uCount; i++)
                {
                    Call(GetTifUShort(pWS, offPos + (i << 1) , pID->EXT.TIF.fLittleEndian, &sf[i]));
                    sfAnd = (sfAnd && (sf[0] == sf[i]));
                }

                if (sfAnd)
                    pID->EXT.TIF.uSampleFormat = sf[0];
                else
                    Call(WMP_errUnsupportedFormat);
            }
            break;

        case TIF_tagCompression:
            FailIf(1 != uValue0, WMP_errUnsupportedFormat);
            break;

        case TIF_tagPhotometricInterpretation:
            Test(PK_PI_W0 == uValue0 || PK_PI_B0 == uValue0 || PK_PI_RGB == uValue0 
                || PK_PI_RGBPalette == uValue0 || PK_PI_TransparencyMask == uValue0
                || PK_PI_CMYK == uValue0 || PK_PI_YCbCr == uValue0
                || PK_PI_CIELab == uValue0, WMP_errUnsupportedFormat);

            pID->EXT.TIF.uInterpretation = uValue0; 
            break;

        case TIF_tagStripOffsets:
            Call(WMPAlloc((void **) &pID->EXT.TIF.uStripOffsets, sizeof(*pID->EXT.TIF.uStripOffsets) * uCount));
            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uValue0));
            Call(GetTifULongArray(pWS, uValue0, uCount, pID->EXT.TIF.fLittleEndian, pID->EXT.TIF.uStripOffsets));
            break;

        case TIF_tagOrientation:
        case TIF_tagSamplesPerPixel:
            pID->EXT.TIF.uSamplePerPixel = uValue0;
            break;

        case TIF_tagRowsPerStrip:
            pID->EXT.TIF.uRowsPerStrip = uValue0;
            break;

        case TIF_tagStripByteCounts:
            Call(WMPAlloc((void **) &pID->EXT.TIF.uStripByteCounts, sizeof(*pID->EXT.TIF.uStripByteCounts) * uCount));
            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uValue0));
            Call(GetTifULongArray(pWS, uValue0, uCount, pID->EXT.TIF.fLittleEndian, pID->EXT.TIF.uStripByteCounts));
            break;

        case TIF_tagXResolution:
            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uPos));
            offPos = uPos;

            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uValue0));//numerator
            Call(GetTifULong(pWS, offPos + 4, pID->EXT.TIF.fLittleEndian, &uValue1));//denominator

            pID->EXT.TIF.fResX = (Float)uValue0/(Float)uValue1;
            break;

        case TIF_tagYResolution:
            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uPos));
            offPos = uPos;

            Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uValue0));//numerator
            Call(GetTifULong(pWS, offPos + 4, pID->EXT.TIF.fLittleEndian, &uValue1));//denominator
            pID->EXT.TIF.fResY = (Float)uValue0/(Float)uValue1;
            break;

        case TIF_tagResolutionUnit:
            pID->EXT.TIF.uResolutionUnit = usValue;
            break;

        case TIF_tagPlanarConfiguration:
        case TIF_tagSoftware:
        case TIF_tagColorMap:
            break;

        default:
            printf("Unrecognized TIFTag: %d(%#x), %d, %d" CRLF, (int)uTag, (int)uTag, (int)uType, (int)uCount);
            break;
    }

Cleanup:
    return err;
}

ERR ParseTifDEArray(
    PKTestDecode* pID,
    size_t offPos)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pWS = pID->pStream;
    U16 uTag = 0;
    U16 uType = 0;
    U32 uCount = 0;

    Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uTag));
    offPos += 2;

    Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uType));
    offPos += 2;

    Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uCount));
    offPos += 4;

    Call(ParseTifDEValue(pID, uTag, uType, uCount));

Cleanup:
    return err;
}

ERR ParseTifHeader(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;
    PKPixelInfo PI;

    size_t offPosBase = 0;
    size_t offPos = 0;

    U8 szSig[3] = {0, 0, '\0'};
    U16 uTiffId = 0;
    U32 uOffNextIFD = 0;
    U16 uCountDE = 0, i = 0;

    //default
    pID->EXT.TIF.uRowsPerStrip = (U32) -1;
    pID->EXT.TIF.uInterpretation = (U32) -1;
    pID->EXT.TIF.uSamplePerPixel = (U32) -1;
    pID->EXT.TIF.uBitsPerSample = (U32) -1;
    pID->EXT.TIF.uSampleFormat = 1;
    pID->EXT.TIF.uResolutionUnit = 2;
    pID->EXT.TIF.fResX = 96;
    pID->EXT.TIF.fResY = 96;
    
    //================================
    Call(pWS->GetPos(pWS, &offPosBase));
    FailIf(0 != offPosBase, WMP_errUnsupportedFormat);

    //================================
    // Header
    Call(pWS->Read(pWS, szSig, 2));
    offPos += 2;
    if (szSig == (U8 *) strstr((char *) szSig, "II"))
    {
        pID->EXT.TIF.fLittleEndian = !FALSE;
    }
    else if (szSig == (U8 *) strstr((char *) szSig, "MM"))
    {
        pID->EXT.TIF.fLittleEndian = FALSE;
    }
    else
    {
        Call(WMP_errUnsupportedFormat);
    }

    Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uTiffId));
    offPos += 2;
    FailIf(42 != uTiffId, WMP_errUnsupportedFormat);

    Call(GetTifULong(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uOffNextIFD));
    offPos += 4;

    //================================
    // IFD
    offPos = (size_t)uOffNextIFD;
    Call(GetTifUShort(pWS, offPos, pID->EXT.TIF.fLittleEndian, &uCountDE));
    offPos += 2;

    for (i = 0; i < uCountDE; ++i)
    {
        Call(ParseTifDEArray(pID, offPos));
        offPos += 12;
    }

    if(pID->EXT.TIF.uRowsPerStrip == -1)
        pID->EXT.TIF.uRowsPerStrip = pID->uHeight;//default

    FailIf((-1 == pID->EXT.TIF.uInterpretation 
        || -1 == pID->EXT.TIF.uSamplePerPixel
        || -1 == pID->EXT.TIF.uBitsPerSample), WMP_errUnsupportedFormat);

    PI.uInterpretation = pID->EXT.TIF.uInterpretation;
    PI.uSamplePerPixel = pID->EXT.TIF.uSamplePerPixel;
    PI.uBitsPerSample = pID->EXT.TIF.uBitsPerSample;
    PI.uSampleFormat = pID->EXT.TIF.uSampleFormat;

    PI.grBit = pID->EXT.TIF.uExtraSamples == 1 || pID->EXT.TIF.uExtraSamples == 2 ||
        /* Workaround for some images without correct info about alpha channel */
        (pID->EXT.TIF.uExtraSamples == 0 &&  pID->EXT.TIF.uSamplePerPixel > 3) ? PK_pixfmtHasAlpha : 0x0;
    PI.grBit |= pID->EXT.TIF.uExtraSamples == 1 ? PK_pixfmtPreMul : 0x0;

    pID->fResX = (3 == pID->EXT.TIF.uResolutionUnit ? (Float)(pID->EXT.TIF.fResX * 2.54) : pID->EXT.TIF.fResX);//cm -> inch
    pID->fResY = (3 == pID->EXT.TIF.uResolutionUnit ? (Float)(pID->EXT.TIF.fResY * 2.54) : pID->EXT.TIF.fResY);//cm -> inch

    Call(PixelFormatLookup(&PI, LOOKUP_BACKWARD_TIF));

    pID->guidPixFormat = *(PI.pGUIDPixFmt);

Cleanup:
    return err;
}

//================================================================
// PKImageDecode_TIF
//================================================================
ERR PKImageDecode_Initialize_TIF(
    PKTestDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKTestDecode_Initialize(pID, pWS));
    Call(ParseTifHeader(pID, pWS));

Cleanup:
    return err;
}

ERR GetScanLineOffset(
    PKTestDecode* pID,
    I32 iLine,
    U32 cbLine,
    U32 *offLine)
{
    *offLine = pID->EXT.TIF.uRowsPerStrip ? 
        (pID->EXT.TIF.uStripOffsets[iLine / pID->EXT.TIF.uRowsPerStrip] +
        cbLine * (iLine % pID->EXT.TIF.uRowsPerStrip)) :
        0;        

    return WMP_errSuccess;
}

ERR PKImageDecode_Copy_TIF(
    PKTestDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pS = pID->pStream;
    PKPixelInfo PI;
    U32 cbLine = 0;
    I32 i = 0;

    PI.pGUIDPixFmt = &pID->guidPixFormat;
    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    cbLine = (BD_1 == PI.bdBitDepth ? ((PI.cbitUnit * pRect->Width + 7) >> 3) : (((PI.cbitUnit + 7) >> 3) * pRect->Width)); 

    assert(0 == pRect->X && pID->uWidth == (U32)pRect->Width);
    assert(cbLine <= cbStride);

    for (i = 0; i < pRect->Height; ++i)
    {
        U32 offPixels = 0;
        Call(GetScanLineOffset(pID, pRect->Y + i, cbLine, &offPixels));

        Call(pS->SetPos(pS, offPixels));
        Call(pS->Read(pS, pb + cbStride * i, cbLine));

        if (PK_PI_W0 == pID->EXT.TIF.uInterpretation) 
        {
            U32 j, begin = cbStride * (U32)i, end = begin + cbLine;
            for (j = begin; j < end; ++j)
            {
                pb[j] = ~pb[j];
            }
        }
    }

Cleanup:
    return err;
}

ERR PKImageDecode_Release_TIF(PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;

    PKTestDecode *pID = *ppID;

    Call(WMPFree(&pID->EXT.TIF.uStripOffsets));
    Call(WMPFree(&pID->EXT.TIF.uStripByteCounts));

    Call(PKTestDecode_Release(ppID));

Cleanup:
    return err;
}

ERR PKImageDecode_Create_TIF(PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKTestDecode* pID = NULL;

    Call(PKTestDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_TIF;
    pID->Copy = PKImageDecode_Copy_TIF;
    pID->Release = PKImageDecode_Release_TIF;

Cleanup:
    return err;
}

