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

#include "windowsmediaphoto.h"
#include "strcodec.h"
#include "decode.h"

EXTERN_C Void freePredInfo(CWMImageStrCodec *);

EXTERN_C Int ReadWMIHeader(CWMImageInfo *, CWMIStrCodecParam *, CCoreParameters *);
EXTERN_C Int StrIODecInit(CWMImageStrCodec *);
EXTERN_C Int StrDecInit(CWMImageStrCodec *);
EXTERN_C Int readPackets(CWMImageStrCodec *);
EXTERN_C Int DecodeMacroblockDC(CWMImageStrCodec *, CCodingContext *, Int, Int);
EXTERN_C Int DecodeMacroblockLowpass(CWMImageStrCodec *, CCodingContext *, Int, Int);
EXTERN_C Int DecodeMacroblockHighpass(CWMImageStrCodec *, CCodingContext *, Int, Int);
EXTERN_C Void predDCACDec(CWMImageStrCodec *);
EXTERN_C Void predACDec(CWMImageStrCodec *);
EXTERN_C Void StrIODecTerm(CWMImageStrCodec *);
EXTERN_C Void FreeCodingContextDec(CWMImageStrCodec *);

EXTERN_C Int StrEncInit(CWMImageStrCodec *);
EXTERN_C Void StrIOEncTerm(CWMImageStrCodec *);
EXTERN_C Void FreeCodingContextEnc(CWMImageStrCodec *);
EXTERN_C Int encodeMB(CWMImageStrCodec *, Int, Int);
EXTERN_C Int  writeIndexTableNull(CWMImageStrCodec *);
EXTERN_C Void writePacketHeader(BitIOInfo *, U8, U8);

EXTERN_C Int WriteWMIHeader(CWMImageStrCodec *);
EXTERN_C Int ReadImagePlaneHeader(CWMImageInfo *, CWMIStrCodecParam *, CCoreParameters *, SimpleBitIO *);
EXTERN_C Int WriteImagePlaneHeader(CWMImageStrCodec *);
EXTERN_C Int writeIndexTable(CWMImageStrCodec *);
EXTERN_C Int copyTo(struct WMPStream *, struct WMPStream *, size_t);

const static Bool bFlipV[O_MAX] = {FALSE, TRUE , FALSE, TRUE, TRUE , TRUE, FALSE, FALSE};
const static Bool bFlipH[O_MAX] = {FALSE, FALSE, TRUE , TRUE, FALSE, TRUE, FALSE, TRUE};

typedef struct CTileQPInfo
{
    U8 dcMode;
    U8 dcIndex[MAX_CHANNELS];

    Bool bUseDC;
    U8 lpNum;
    Bool bUseDCAlpha;
    U8 lpNumAlpha;
    U8 lpMode[16];
    U8 lpIndex[16][MAX_CHANNELS];

    Bool bUseLP;
    U8 hpNum;
    Bool bUseLPAlpha;
    U8 hpNumAlpha;
    U8 hpMode[16];
    U8 hpIndex[16][MAX_CHANNELS];
} CTileQPInfo;

Void transcodeQuantizer(BitIOInfo * pIO, U8 cIndex[MAX_CHANNELS], U8 cChMode, size_t cChannel)
{
    if(cChMode > 2)
        cChMode = 2;

    if(cChannel > 1)
        putBit16(pIO, cChMode, 2); // Channel mode
    else
        cChMode = 0;

    putBit16(pIO, cIndex[0], 8); // Y

    if(cChMode == 1)  // MIXED
        putBit16(pIO, cIndex[1], 8); // UV
    else if(cChMode > 0){ // INDEPENDENT
        size_t i;

        for(i = 1; i < cChannel; i ++)
            putBit16(pIO, cIndex[i], 8); // UV
    }
}

Void transcodeQuantizers(BitIOInfo * pIO, U8 cIndex[16][MAX_CHANNELS], U8 cChMode[16], U32 cNum, size_t cChannel, Bool bCopy)
{
    putBit16(pIO, bCopy == TRUE ? 1 : 0, 1);
    if(bCopy == FALSE){
        U32 i;

        putBit16(pIO, cNum - 1, 4);

        for(i = 0; i < cNum; i ++)
            transcodeQuantizer(pIO, cIndex[i], cChMode[i], cChannel);
    }
}

Void transcodeQuantizersAlpha(BitIOInfo * pIO, U8 cIndex[16][MAX_CHANNELS], U32 cNum, size_t iChannel, Bool bCopy)
{
    putBit16(pIO, bCopy == TRUE ? 1 : 0, 1);
    if(bCopy == FALSE){
        U32 i;

        putBit16(pIO, cNum - 1, 4);

        for(i = 0; i < cNum; i ++)
            putBit16(pIO, cIndex[i][iChannel], 8);
    }
}

Void transcodeTileHeader(CWMImageStrCodec * pSC, CTileQPInfo * pTileQPInfo)
{
    if(pSC->m_bCtxLeft && pSC->m_bCtxTop && pSC->m_bSecondary == FALSE){ // write packet headers
        CCodingContext * pContext = &pSC->m_pCodingContext[pSC->cTileColumn];
        CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
        U8 pID = (U8)((pSC->cTileRow * (pSC->WMISCP.cNumOfSliceMinus1V + 1) + pSC->cTileColumn) & 0x1F);
        CWMImageStrCodec * pSCAlpha = (pSC->m_param.bAlphaChannel ? pSC->m_pNextSC : NULL);
        const size_t iAlphaPos = pSC->m_param.cNumChannels;

        writePacketHeader(pContext->m_pIODC, pSC->WMISCP.bfBitstreamFormat == SPATIAL ? 0 : 1, pID);
        if (pSC->m_param.bTrimFlexbitsFlag && pSC->WMISCP.bfBitstreamFormat == SPATIAL)
            putBit16(pContext->m_pIODC, pContext->m_iTrimFlexBits, 4);
        
        if((pSC->m_param.uQPMode & 1) != 0) // not DC uniform
            transcodeQuantizer(pContext->m_pIODC, pTileQPInfo->dcIndex, pTileQPInfo->dcMode, pSC->WMISCP.cChannel);
        if(pSCAlpha != NULL && (pSCAlpha->m_param.uQPMode & 1) != 0) // not DC uniform
            putBit16(pContext->m_pIODC, pTileQPInfo->dcIndex[iAlphaPos], 8);

        if(pSC->WMISCP.bfBitstreamFormat == SPATIAL) {
            if(pSC->WMISCP.sbSubband != SB_DC_ONLY){
                if((pSC->m_param.uQPMode & 2) != 0) // not LP uniform
                    transcodeQuantizers(pContext->m_pIODC, pTileQPInfo->lpIndex, pTileQPInfo->lpMode, pTileQPInfo->lpNum, pSC->WMISCP.cChannel, pTileQPInfo->bUseDC);
                if(pSCAlpha != NULL && (pSCAlpha->m_param.uQPMode & 2) != 0) // not LP uniform
                    transcodeQuantizersAlpha(pContext->m_pIODC, pTileQPInfo->lpIndex, pTileQPInfo->lpNumAlpha, iAlphaPos, pTileQPInfo->bUseDCAlpha);
                if(pSC->WMISCP.sbSubband != SB_NO_HIGHPASS){
                    if((pSC->m_param.uQPMode & 4) != 0) // not HP uniform
                        transcodeQuantizers(pContext->m_pIODC, pTileQPInfo->hpIndex, pTileQPInfo->hpMode, pTileQPInfo->hpNum, pSC->WMISCP.cChannel, pTileQPInfo->bUseLP);
                    if(pSCAlpha != NULL && (pSCAlpha->m_param.uQPMode & 4) != 0) // not HP uniform
                        transcodeQuantizersAlpha(pContext->m_pIODC, pTileQPInfo->hpIndex, pTileQPInfo->hpNumAlpha, iAlphaPos, pTileQPInfo->bUseLPAlpha);
                }
            }
        }
        else{
            if(pSC->WMISCP.sbSubband != SB_DC_ONLY){
                writePacketHeader(pContext->m_pIOLP, 2, pID);
                if((pSC->m_param.uQPMode & 2) != 0) // not LP uniform
                    transcodeQuantizers(pContext->m_pIOLP, pTileQPInfo->lpIndex, pTileQPInfo->lpMode, pTileQPInfo->lpNum, pSC->WMISCP.cChannel, pTileQPInfo->bUseDC);
                if(pSCAlpha != NULL && (pSCAlpha->m_param.uQPMode & 2) != 0) // not LP uniform
                    transcodeQuantizersAlpha(pContext->m_pIOLP, pTileQPInfo->lpIndex, pTileQPInfo->lpNumAlpha, iAlphaPos, pTileQPInfo->bUseDCAlpha);

                if(pSC->WMISCP.sbSubband != SB_NO_HIGHPASS){
                    writePacketHeader(pContext->m_pIOAC, 3, pID);
                    if((pSC->m_param.uQPMode & 4) != 0) // not HP uniform
                        transcodeQuantizers(pContext->m_pIOAC, pTileQPInfo->hpIndex, pTileQPInfo->hpMode, pTileQPInfo->hpNum, pSC->WMISCP.cChannel, pTileQPInfo->bUseLP);
                    if(pSCAlpha != NULL && (pSCAlpha->m_param.uQPMode & 4) != 0) // not HP uniform
                        transcodeQuantizersAlpha(pContext->m_pIOAC, pTileQPInfo->hpIndex, pTileQPInfo->hpNumAlpha, iAlphaPos, pTileQPInfo->bUseLPAlpha);

                    if(pSC->WMISCP.sbSubband != SB_NO_FLEXBITS){
                        writePacketHeader(pContext->m_pIOFL, 4, pID);
                        if (pSC->m_param.bTrimFlexbitsFlag)
                            putBit16(pContext->m_pIOFL, pContext->m_iTrimFlexBits, 4);
                    }
                }
            }
        }
        pTile->cBitsLP = (pTileQPInfo->bUseDC ? 0 : dquantBits(pTileQPInfo->lpNum));
        pTile->cBitsHP = (pTileQPInfo->bUseLP ? 0 : dquantBits(pTileQPInfo->hpNum));
        if(pSCAlpha != NULL){
            pTile = pSCAlpha->pTile + pSC->cTileColumn;
            pTile->cBitsLP = (pTileQPInfo->bUseDCAlpha ? 0 : dquantBits(pTileQPInfo->lpNumAlpha));
            pTile->cBitsHP = (pTileQPInfo->bUseLPAlpha ? 0 : dquantBits(pTileQPInfo->hpNumAlpha));
        }
    }
}

Void transformDCBlock(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    size_t i;

    if(bFlipV[oOrientation])
        for(i = 0; i < 16; i += 4)
            pOrg[i + 1] = -pOrg[i + 1], pOrg[i + 3] = -pOrg[i + 3];

    if(bFlipH[oOrientation])
        for(i = 0; i < 4; i ++)
            pOrg[i + 4] = -pOrg[i + 4], pOrg[i + 12] = -pOrg[i + 12];

    if(oOrientation < O_RCW)
        memcpy(pDst, pOrg, 16 * sizeof(PixelI));
    else
        for(i = 0; i < 16; i ++)
            pDst[i] = pOrg[(i >> 2) + ((i & 3) << 2)];
}

Void transformDCBlock422(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    assert(oOrientation < O_RCW);

    if(bFlipV[oOrientation])
        pOrg[1] = -pOrg[1], pOrg[3] = -pOrg[3], pOrg[4] = -pOrg[4], pOrg[5] = -pOrg[5], pOrg[7] = -pOrg[7];

    if(bFlipH[oOrientation])
        pOrg[2] = -pOrg[2], pOrg[3] = -pOrg[3], pOrg[6] = -pOrg[6], pOrg[7] = -pOrg[7];

    if(bFlipV[oOrientation])
        pDst[0] = pOrg[0], pDst[1] = pOrg[5], pDst[2] = pOrg[6], pDst[3] = pOrg[7], pDst[4] = pOrg[4], pDst[5] = pOrg[1], pDst[6] = pOrg[2], pDst[7] = pOrg[3];
    else
        memcpy(pDst, pOrg, 8 * sizeof(PixelI));
}

Void transformDCBlock420(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    if(bFlipV[oOrientation])
        pOrg[1] = -pOrg[1], pOrg[3] = -pOrg[3];

    if(bFlipH[oOrientation])
        pOrg[2] = -pOrg[2], pOrg[3] = -pOrg[3];

    pDst[0] = pOrg[0], pDst[3] = pOrg[3];
    if(oOrientation < O_RCW)
        pDst[1] = pOrg[1], pDst[2] = pOrg[2];
    else
        pDst[1] = pOrg[2], pDst[2] = pOrg[1];
}

Void transformACBlocks(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    PixelI * pO, * pD;
    const Int * pT = dctIndex[0];
    size_t i, j, k;

    for(j = 0, pO = pOrg; j < 16; j ++, pO += 16){
        if(bFlipV[oOrientation])
            for(i = 0; i < 16; i += 4)
                pO[pT[i + 1]] = -pO[pT[i + 1]], pO[pT[i + 3]] = -pO[pT[i + 3]];
        
        if(bFlipH[oOrientation])
            for(i = 0; i < 4; i ++)
                pO[pT[i + 4]] = -pO[pT[i + 4]], pO[pT[i + 12]] = -pO[pT[i + 12]];
    }

    for(j = 0; j < 4; j ++)
        for(i = 0; i < 4; i ++){
            size_t ii = (bFlipV[oOrientation] ? 3 - i : i);
            size_t jj = (bFlipH[oOrientation] ? 3 - j : j);

            if(oOrientation < O_RCW)
                memcpy(pDst + (jj * 4 + ii) * 16, pOrg + (j * 4 + i) * 16, 16 * sizeof(PixelI));
            else{
                pO = pOrg + (j * 4 + i) * 16;
                pD = pDst + (ii * 4 + jj) * 16;
                for(k = 1; k < 16; k ++)
                    pD[pT[k]] = pO[pT[(k >> 2) + ((k & 3) << 2)]];
            }
        }
}

Void transformACBlocks422(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    PixelI * pO;
    const Int * pT = dctIndex[0];
    size_t i, j;

    assert(oOrientation < O_RCW);

    for(j = 0, pO = pOrg; j < 8; j ++, pO += 16){
        if(bFlipV[oOrientation])
            for(i = 0; i < 16; i += 4)
                pO[pT[i + 1]] = -pO[pT[i + 1]], pO[pT[i + 3]] = -pO[pT[i + 3]];
        
        if(bFlipH[oOrientation])
            for(i = 0; i < 4; i ++)
                pO[pT[i + 4]] = -pO[pT[i + 4]], pO[pT[i + 12]] = -pO[pT[i + 12]];
    }

    for(j = 0; j < 2; j ++)
        for(i = 0; i < 4; i ++){
            size_t ii = (bFlipV[oOrientation] ? 3 - i : i);
            size_t jj = (bFlipH[oOrientation] ? 1 - j : j);

            memcpy(pDst + (jj * 4 + ii) * 16, pOrg + (j * 4 + i) * 16, 16 * sizeof(PixelI));
        }
}

Void transformACBlocks420(PixelI * pOrg, PixelI * pDst, ORIENTATION oOrientation)
{
    PixelI * pO, * pD;
    const Int * pT = dctIndex[0];
    size_t i, j, k;

    for(j = 0, pO = pOrg; j < 4; j ++, pO += 16){
        if(bFlipV[oOrientation])
            for(i = 0; i < 16; i += 4)
                pO[pT[i + 1]] = -pO[pT[i + 1]], pO[pT[i + 3]] = -pO[pT[i + 3]];
        
        if(bFlipH[oOrientation])
            for(i = 0; i < 4; i ++)
                pO[pT[i + 4]] = -pO[pT[i + 4]], pO[pT[i + 12]] = -pO[pT[i + 12]];
    }

    for(j = 0; j < 2; j ++)
        for(i = 0; i < 2; i ++){
            size_t ii = (bFlipV[oOrientation] ? 1 - i : i);
            size_t jj = (bFlipH[oOrientation] ? 1 - j : j);

            if(oOrientation < O_RCW)
                memcpy(pDst + (jj * 2 + ii) * 16, pOrg + (j * 2 + i) * 16, 16 * sizeof(PixelI));
            else{
                pO = pOrg + (j * 2 + i) * 16;
                pD = pDst + (ii * 2 + jj) * 16;
                for(k = 1; k < 16; k ++)
                    pD[pT[k]] = pO[pT[(k >> 2) + ((k & 3) << 2)]];
            }
        }
}

Int getROI(CWMImageInfo * pII, CCoreParameters * pCore, CWMIStrCodecParam * pSCP, CWMTranscodingParam * pParam)
{
    const ORIENTATION oO = pParam->oOrientation;
    size_t iLeft, iTop, cWidth, cHeight, i, j;
    size_t mbLeft, mbRight, mbTop, mbBottom;
    size_t * iTile = (size_t *)malloc(MAX_TILES * sizeof(size_t));

    if(iTile == NULL)
        return ICERR_ERROR;
    
    if(pParam->cLeftX + pParam->cWidth > pII->cWidth || pParam->cTopY + pParam->cHeight > pII->cHeight) // invalid region
        return ICERR_ERROR;

    cWidth = pParam->cWidth, cHeight = pParam->cHeight;
    iLeft = pParam->cLeftX + pCore->cExtraPixelsLeft, iTop = pParam->cTopY + pCore->cExtraPixelsTop;
    if(pSCP->olOverlap != OL_NONE && pParam->bIgnoreOverlap == FALSE){ // include pixels borrowed
        size_t cBlurred = (pSCP->olOverlap == OL_TWO ? 10 : 2);

        if(iLeft > cBlurred)
            iLeft -= cBlurred, cWidth += cBlurred;
        else
            cWidth += iLeft, iLeft = 0;
        if(iTop > cBlurred)
            iTop -= cBlurred, cHeight += cBlurred;
        else
            cHeight += iTop, iTop = 0;
        cWidth += cBlurred, cHeight += cBlurred;
        if(iLeft + cWidth > pII->cWidth + pCore->cExtraPixelsLeft + pCore->cExtraPixelsRight)
            cWidth = pII->cWidth  + pCore->cExtraPixelsLeft + pCore->cExtraPixelsRight - iLeft;
        if(iTop + cHeight > pII->cHeight + pCore->cExtraPixelsTop + pCore->cExtraPixelsBottom)
            cHeight = pII->cHeight + pCore->cExtraPixelsTop + pCore->cExtraPixelsBottom - iTop;
    }

    mbTop = (iTop >> 4), mbLeft = (iLeft >> 4);
    mbBottom = (iTop + cHeight + 15) >> 4, mbRight = (iLeft + cWidth + 15) >> 4;
    pCore->cExtraPixelsLeft += pParam->cLeftX - (mbLeft << 4);
    pCore->cExtraPixelsRight = ((mbRight - mbLeft) << 4) - pParam->cWidth - pCore->cExtraPixelsLeft;
    pCore->cExtraPixelsTop += pParam->cTopY - (mbTop << 4);
    pCore->cExtraPixelsBottom = ((mbBottom - mbTop) << 4) - pParam->cHeight - pCore->cExtraPixelsTop;

    pII->cWidth = ((mbRight - mbLeft) << 4) - pCore->cExtraPixelsLeft - pCore->cExtraPixelsRight;
    pII->cHeight = ((mbBottom - mbTop) << 4) - pCore->cExtraPixelsTop - pCore->cExtraPixelsBottom;
    pParam->cLeftX = iLeft, pParam->cTopY = iTop;
    pParam->cWidth = cWidth, pParam->cHeight = cHeight;

    // extra pixels in transformed space
#define SWAP(a, b) i = a, a = b, b = i
    if(oO == O_FLIPH || oO == O_FLIPVH || oO == O_RCW_FLIPV || oO == O_RCW_FLIPVH)
        SWAP(pCore->cExtraPixelsLeft, pCore->cExtraPixelsRight);
    if(oO == O_FLIPV || oO == O_FLIPVH || oO == O_RCW || oO == O_RCW_FLIPV)
        SWAP(pCore->cExtraPixelsTop, pCore->cExtraPixelsBottom);
    if(oO >= O_RCW){
        SWAP(pCore->cExtraPixelsLeft, pCore->cExtraPixelsTop);
        SWAP(pCore->cExtraPixelsRight, pCore->cExtraPixelsBottom);
    }

    // adjust tiling
    for(i = 0, j = 0, iTile[0] = 0; i <= (size_t)pSCP->cNumOfSliceMinus1V; i ++)
        if((size_t)pSCP->uiTileX[i] >= mbLeft && (size_t)pSCP->uiTileX[i] < mbRight){
            if(j >= MAX_TILES)
                j = MAX_TILES - 1;
            iTile[j] = (size_t)pSCP->uiTileX[i] - mbLeft, j ++;
        }
    if(iTile[0] == 0)
        for(i = 0, pSCP->cNumOfSliceMinus1V = (j == 0 ? 0 : (U32)(j - 1)); i < j; i ++)
            pSCP->uiTileX[i] = (U32)iTile[i];
    else
        for(i = 1, pSCP->uiTileX[0] = 0, pSCP->cNumOfSliceMinus1V = (U32)j; i <= j; i ++)
            pSCP->uiTileX[i] = (U32)iTile[i - 1];
    if(oO == O_FLIPH || oO == O_FLIPVH || oO == O_RCW_FLIPV || oO == O_RCW_FLIPVH){ // reverse order
        for(i = 0; i <= (size_t)pSCP->cNumOfSliceMinus1V; i ++)
            iTile[i] = mbRight - mbLeft - (size_t)pSCP->uiTileX[i];
        for(i = 1, pSCP->uiTileX[0] = 0; i <= (size_t)pSCP->cNumOfSliceMinus1V; i ++)
            pSCP->uiTileX[i] = (U32)(iTile[(size_t)pSCP->cNumOfSliceMinus1V - i + 1]);
    }
    for(i = 0, j = 0, iTile[0] = 0; i <= (size_t)pSCP->cNumOfSliceMinus1H; i ++)
        if(pSCP->uiTileY[i] >= mbTop && pSCP->uiTileY[i] < mbBottom){
            if(j >= MAX_TILES)
                j = MAX_TILES - 1;
            iTile[j] = (size_t)pSCP->uiTileY[i] - mbTop, j ++;
        }
    if(iTile[0] == 0)
        for(i = 0, pSCP->cNumOfSliceMinus1H = (j == 0 ? 0 : (U32)(j - 1)); i < j; i ++)
            pSCP->uiTileY[i] = (U32)iTile[i];
    else
        for(i = 1, pSCP->uiTileY[0] = 0, pSCP->cNumOfSliceMinus1H = (U32)j; i <= j; i ++)
            pSCP->uiTileY[i] = (U32)iTile[i - 1];
    if(oO == O_FLIPV || oO == O_FLIPVH || oO == O_RCW || oO == O_RCW_FLIPV){ // reverse order
        for(i = 0; i <= (size_t)pSCP->cNumOfSliceMinus1H; i ++)
            iTile[i] = mbBottom - mbTop - (size_t)pSCP->uiTileY[i];
        for(i = 1, pSCP->uiTileY[0] = 0; i <= (size_t)pSCP->cNumOfSliceMinus1H; i ++)
            pSCP->uiTileY[i] = (U32)(iTile[(size_t)pSCP->cNumOfSliceMinus1H - i + 1]);
    }
    if(oO >= O_RCW){ // switch X & Y
        for(i = 0; i <= (size_t)pSCP->cNumOfSliceMinus1V; i ++)
            iTile[i] = (size_t)pSCP->uiTileX[i];
        for(i = 0; i <= (size_t)pSCP->cNumOfSliceMinus1H; i ++)
            pSCP->uiTileX[i] = pSCP->uiTileY[i];
        for(i = 0; i <= (size_t)pSCP->cNumOfSliceMinus1V; i ++)
            pSCP->uiTileY[i] = (U32)iTile[i];
        i = (size_t)pSCP->cNumOfSliceMinus1H, pSCP->cNumOfSliceMinus1H = pSCP->cNumOfSliceMinus1V, pSCP->cNumOfSliceMinus1V = (U32)i;
    }

    free(iTile);

    return ICERR_OK;
}

Bool isTileBoundary(U32 * pTilePos, U32 cTiles, U32 cMBs, U32 iPos)
{
    U32 i;
    
    for(i = 0; i < cTiles; i ++)
        if(iPos == pTilePos[i] * 16)
            break;

    return ((i < cTiles || (iPos + 15) / 16 >= cMBs) ? TRUE : FALSE);
}

Bool isTileExtraction(CWMImageStrCodec * pSC, CWMTranscodingParam * pParam)
{
    if(pParam->bIgnoreOverlap == FALSE && pSC->WMISCP.olOverlap == OL_NONE)
        pParam->bIgnoreOverlap = TRUE;

    if(pParam->bIgnoreOverlap == TRUE && pParam->oOrientation == O_NONE && pParam->bfBitstreamFormat == pSC->WMISCP.bfBitstreamFormat){
        if(pParam->bfBitstreamFormat == SPATIAL && pParam->sbSubband != pSC->WMISCP.sbSubband)
            return FALSE;

        return (isTileBoundary(pSC->WMISCP.uiTileX, pSC->WMISCP.cNumOfSliceMinus1V + 1, (U32)pSC->cmbWidth, (U32)(pParam->cLeftX + pSC->m_param.cExtraPixelsLeft)) &&
            isTileBoundary(pSC->WMISCP.uiTileY, pSC->WMISCP.cNumOfSliceMinus1H + 1, (U32)pSC->cmbHeight, (U32)(pParam->cTopY + pSC->m_param.cExtraPixelsTop)) &&
            isTileBoundary(pSC->WMISCP.uiTileX, pSC->WMISCP.cNumOfSliceMinus1V + 1, (U32)pSC->cmbWidth, (U32)(pParam->cLeftX + pParam->cWidth + pSC->m_param.cExtraPixelsLeft)) &&
            isTileBoundary(pSC->WMISCP.uiTileY, pSC->WMISCP.cNumOfSliceMinus1H + 1, (U32)pSC->cmbHeight, (U32)(pParam->cTopY + pParam->cHeight + pSC->m_param.cExtraPixelsTop)));
    }

    return FALSE;
}

Int WMPhotoTranscode(struct WMPStream * pStreamIn, struct WMPStream * pStreamOut, CWMTranscodingParam * pParam)
{
    PixelI * pMBBuf, MBBufAlpha[256]; // shared buffer, decoder <=> encoder bridge
    PixelI * pFrameBuf = NULL, * pFrameBufAlpha = NULL;
    CWMIMBInfo * pMBInfo = NULL, * pMBInfoAlpha = NULL;
    CWMImageStrCodec * pSCDec, * pSCEnc, * pSC;
    CWMDecoderParameters aDecoderParam = {0};
    U8 * pIOHeaderDec, * pIOHeaderEnc;
    CCodingContext * pContext;
    CTileQPInfo * pTileQPInfo = NULL;
    ORIENTATION oO = pParam->oOrientation;
    size_t iAlphaPos = 0;
    size_t cUnit;
    size_t i, j, mbLeft, mbRight, mbTop, mbBottom, mbWidth, mbHeight;

    if(pStreamIn == NULL || pStreamOut == NULL || pParam == NULL)
        return ICERR_ERROR;

    // initialize decoder
    if((pSCDec = (CWMImageStrCodec *)malloc(sizeof(CWMImageStrCodec))) == NULL)
        return ICERR_ERROR;
    memset(pSCDec, 0, sizeof(CWMImageStrCodec));

    pSCDec->WMISCP.pWStream = pStreamIn;
    if(ReadWMIHeader(&pSCDec->WMII, &pSCDec->WMISCP, &pSCDec->m_param) != ICERR_OK)
        return ICERR_ERROR;

    if(pSCDec->WMISCP.cfColorFormat == YUV_422 && oO >= O_RCW)
        pParam->oOrientation = oO = O_NONE; // Can not rotate 422 in compressed domain!

    pSCDec->cmbWidth = (pSCDec->WMII.cWidth + pSCDec->m_param.cExtraPixelsLeft + pSCDec->m_param.cExtraPixelsRight + 15) / 16;
    pSCDec->cmbHeight = (pSCDec->WMII.cHeight + pSCDec->m_param.cExtraPixelsTop + pSCDec->m_param.cExtraPixelsBottom + 15) / 16;
    pSCDec->m_param.cNumChannels = pSCDec->WMISCP.cChannel;
    pSCDec->m_Dparam = &aDecoderParam;
    pSCDec->m_Dparam->bSkipFlexbits = (pSCDec->WMISCP.sbSubband == SB_NO_FLEXBITS);
    pSCDec->m_param.bTranscode = TRUE;

    pParam->bIgnoreOverlap = isTileExtraction(pSCDec, pParam);

    cUnit = (pSCDec->m_param.cfColorFormat == YUV_420 ? 384 : (pSCDec->m_param.cfColorFormat == YUV_422 ? 512 : 256 * pSCDec->m_param.cNumChannels));
    if(cUnit > 256 * MAX_CHANNELS)
        return ICERR_ERROR;
    pSCDec->p1MBbuffer[0] = pMBBuf = (PixelI *)malloc(cUnit * sizeof(PixelI));
    if(pMBBuf == NULL)
        return ICERR_ERROR;
    pSCDec->p1MBbuffer[1] = pSCDec->p1MBbuffer[0] + 256;
    for(i = 2; i < pSCDec->m_param.cNumChannels; i ++)
        pSCDec->p1MBbuffer[i] = pSCDec->p1MBbuffer[i - 1] + (pSCDec->m_param.cfColorFormat == YUV_420 ? 64 : (pSCDec->m_param.cfColorFormat == YUV_422 ? 128 : 256));

    if(pSCDec->m_param.bAlphaChannel){ // alpha channel
        SimpleBitIO SB = {0};

        iAlphaPos = pSCDec->m_param.cNumChannels;
        if((pSCDec->m_pNextSC = (CWMImageStrCodec *)malloc(sizeof(CWMImageStrCodec))) == NULL)
            return ICERR_ERROR;
        *pSCDec->m_pNextSC = *pSCDec;
        pSCDec->m_pNextSC->p1MBbuffer[0] = MBBufAlpha;
        pSCDec->m_pNextSC->WMISCP.cfColorFormat = pSCDec->m_pNextSC->WMII.cfColorFormat = pSCDec->m_pNextSC->m_param.cfColorFormat = Y_ONLY;
        pSCDec->m_pNextSC->WMISCP.cChannel  = pSCDec->m_pNextSC->m_param.cNumChannels = 1;
        pSCDec->m_pNextSC->m_bSecondary = TRUE;
        pSCDec->m_pNextSC->m_pNextSC = pSCDec;
 
        // read plane header of second image plane
        if(attach_SB(&SB, pSCDec->WMISCP.pWStream) != ICERR_OK)
            return ICERR_ERROR;
        ReadImagePlaneHeader(&pSCDec->m_pNextSC->WMII, &pSCDec->m_pNextSC->WMISCP, &pSCDec->m_pNextSC->m_param, &SB);
        detach_SB(&SB);

        if(StrDecInit(pSCDec->m_pNextSC) != ICERR_OK)
            return ICERR_ERROR;
    }
    else
        pParam->uAlphaMode = 0;

    pIOHeaderDec = (U8 *)malloc((PACKETLENGTH * 4 - 1) + PACKETLENGTH * 4 + sizeof(BitIOInfo));
    if(pIOHeaderDec == NULL)
        return ICERR_ERROR;
    memset(pIOHeaderDec, 0, (PACKETLENGTH * 4 - 1) + PACKETLENGTH * 4 + sizeof(BitIOInfo));
    pSCDec->pIOHeader = (BitIOInfo *)((U8 *)ALIGNUP(pIOHeaderDec, PACKETLENGTH * 4) + PACKETLENGTH * 2);
    
    if(StrIODecInit(pSCDec) != ICERR_OK)
        return ICERR_ERROR;

    if(StrDecInit(pSCDec) != ICERR_OK)
        return ICERR_ERROR;

    if(pSCDec->m_param.bAlphaChannel){ // alpha channel
        if(StrDecInit(pSCDec->m_pNextSC) != ICERR_OK)
            return ICERR_ERROR;
    }

    // initialize encoder
    if((pSCEnc = (CWMImageStrCodec *)malloc(sizeof(CWMImageStrCodec))) == NULL)
        return ICERR_ERROR;
    memset(pSCEnc, 0, sizeof(CWMImageStrCodec));

    pSCEnc->WMII = pSCDec->WMII;
    pSCEnc->WMISCP = pSCDec->WMISCP;
    pSCEnc->m_param = pSCDec->m_param;
    pSCEnc->WMISCP.pWStream = pStreamOut;
    pSCEnc->WMISCP.bfBitstreamFormat = pParam->bfBitstreamFormat;
//    pSCEnc->m_param.cfColorFormat = pSCEnc->WMISCP.cfColorFormat = pParam->cfColorFormat;
    pSCEnc->m_param.cfColorFormat = pSCEnc->WMISCP.cfColorFormat;
    pSCEnc->m_param.cNumChannels = (pSCEnc->WMISCP.cfColorFormat == Y_ONLY ? 1 : (pSCEnc->WMISCP.cfColorFormat == YUV_444 ? 3 : pSCEnc->WMISCP.cChannel));
    pSCEnc->m_param.bAlphaChannel = (pParam->uAlphaMode > 0);
    pSCEnc->m_param.bTranscode = TRUE;
    if(pParam->sbSubband >= SB_MAX)
        pParam->sbSubband = SB_ALL;
    if(pParam->sbSubband > pSCEnc->WMISCP.sbSubband)
        pSCEnc->WMISCP.sbSubband = pParam->sbSubband;
    pSCEnc->m_bSecondary = FALSE;

    pIOHeaderEnc = (U8 *)malloc((PACKETLENGTH * 4 - 1) + PACKETLENGTH * 4 + sizeof(BitIOInfo));
    if(pIOHeaderEnc == NULL)
        return ICERR_ERROR;
    memset(pIOHeaderEnc, 0, (PACKETLENGTH * 4 - 1) + PACKETLENGTH * 4 + sizeof(BitIOInfo));
    pSCEnc->pIOHeader = (BitIOInfo *)((U8 *)ALIGNUP(pIOHeaderEnc, PACKETLENGTH * 4) + PACKETLENGTH * 2);
    
    for(i = 0; i < pSCEnc->m_param.cNumChannels; i ++)
        pSCEnc->pPlane[i] = pSCDec->p1MBbuffer[i];
    
    for(i = 1; i < pSCDec->cNumBitIO * (pSCDec->WMISCP.cNumOfSliceMinus1H + 1); i ++){
        if(pSCDec->pIndexTable[i] == 0 && i + 1 != pSCDec->cNumBitIO * (pSCDec->WMISCP.cNumOfSliceMinus1H + 1)) // empty packet
            pSCDec->pIndexTable[i] = pSCDec->pIndexTable[i + 1];
        if(pSCDec->pIndexTable[i] != 0 && pSCDec->pIndexTable[i] < pSCDec->pIndexTable[i - 1]) // out of order bitstream, can not do fast tile extraction!
            pParam->bIgnoreOverlap = FALSE;
    }

    if(getROI(&pSCEnc->WMII, &pSCEnc->m_param, &pSCEnc->WMISCP, pParam) != ICERR_OK)
        return ICERR_ERROR;

    mbLeft = (pParam->cLeftX >> 4);
    mbRight = ((pParam->cLeftX + pParam->cWidth + 15) >> 4);
    mbTop = (pParam->cTopY >> 4);
    mbBottom = ((pParam->cTopY + pParam->cHeight + 15) >> 4);

    if(pSCDec->WMISCP.uiTileX[pSCDec->WMISCP.cNumOfSliceMinus1V] >= mbLeft && pSCDec->WMISCP.uiTileX[pSCDec->WMISCP.cNumOfSliceMinus1V] <= mbRight &&
        pSCDec->WMISCP.uiTileY[pSCDec->WMISCP.cNumOfSliceMinus1H] >= mbTop && pSCDec->WMISCP.uiTileY[pSCDec->WMISCP.cNumOfSliceMinus1H] <= mbBottom)
        pParam->bIgnoreOverlap = FALSE;

    pSCEnc->bTileExtraction = pParam->bIgnoreOverlap;

    mbWidth = pSCEnc->cmbWidth = mbRight - mbLeft;
    mbHeight = pSCEnc->cmbHeight = mbBottom - mbTop;
    if(oO >= O_RCW){
        SWAP(pSCEnc->WMII.cWidth, pSCEnc->WMII.cHeight);
        SWAP(pSCEnc->cmbWidth, pSCEnc->cmbHeight);
    }

    if(oO != O_NONE){
        pFrameBuf = (PixelI *)malloc(pSCEnc->cmbWidth * pSCEnc->cmbHeight * cUnit * sizeof(PixelI));
        if(pFrameBuf == NULL || (pSCEnc->cmbWidth * pSCEnc->cmbHeight * cUnit * sizeof(PixelI) < pSCEnc->cmbWidth * pSCEnc->cmbHeight * cUnit))
            return ICERR_ERROR;
        pMBInfo = (CWMIMBInfo *)malloc(pSCEnc->cmbWidth * pSCEnc->cmbHeight * sizeof(CWMIMBInfo));
        if(pMBInfo == NULL || (pSCEnc->cmbWidth * pSCEnc->cmbHeight * sizeof(CWMIMBInfo) < pSCEnc->cmbWidth * pSCEnc->cmbHeight))
            return ICERR_ERROR;
        if(pParam->uAlphaMode > 0){ // alpha channel
            pFrameBufAlpha = (PixelI *)malloc(pSCEnc->cmbWidth * pSCEnc->cmbHeight * 256 * sizeof(PixelI));
            if(pFrameBufAlpha == NULL || (pSCEnc->cmbWidth * pSCEnc->cmbHeight * 256 * sizeof(PixelI) < pSCEnc->cmbWidth * pSCEnc->cmbHeight * 256))
                return ICERR_ERROR;
            pMBInfoAlpha = (CWMIMBInfo *)malloc(pSCEnc->cmbWidth * pSCEnc->cmbHeight * sizeof(CWMIMBInfo));
            if(pMBInfoAlpha == NULL || (pSCEnc->cmbWidth * pSCEnc->cmbHeight * sizeof(CWMIMBInfo) < pSCEnc->cmbWidth * pSCEnc->cmbHeight))
                return ICERR_ERROR;
        }
    }

    if(oO < O_RCW && pSCEnc->WMII.oOrientation < O_RCW)
        pSCEnc->WMII.oOrientation ^= oO;
    else if(oO >= O_RCW && pSCEnc->WMII.oOrientation >= O_RCW){
        pSCEnc->WMII.oOrientation ^= oO;
        pSCEnc->WMII.oOrientation = (pSCEnc->WMII.oOrientation & 1) * 2 + (pSCEnc->WMII.oOrientation >> 1);
    }
    else if(oO >= O_RCW && pSCEnc->WMII.oOrientation < O_RCW)
        pSCEnc->WMII.oOrientation = oO ^ ((pSCEnc->WMII.oOrientation & 1) * 2 + (pSCEnc->WMII.oOrientation >> 1));
    else
        pSCEnc->WMII.oOrientation ^= ((oO & 1) * 2 + (oO >> 1));
    
//    pSCEnc->WMISCP.nExpBias += 128;

    if(pParam->bIgnoreOverlap == TRUE){
        attachISWrite(pSCEnc->pIOHeader, pSCEnc->WMISCP.pWStream);
        pSCEnc->pTile = pSCDec->pTile;
        if(pSCEnc->WMISCP.cNumOfSliceMinus1H + pSCEnc->WMISCP.cNumOfSliceMinus1V == 0 && pSCEnc->WMISCP.bfBitstreamFormat == SPATIAL)
            pSCEnc->m_param.bIndexTable = FALSE;
        WriteWMIHeader(pSCEnc);
    }
    else{
        pTileQPInfo = (CTileQPInfo *)malloc((oO == O_NONE ? 1 : (pSCEnc->WMISCP.cNumOfSliceMinus1H + 1) * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1)) * sizeof( CTileQPInfo));
        if(pTileQPInfo == NULL || ((oO == O_NONE ? 1 : (pSCEnc->WMISCP.cNumOfSliceMinus1H + 1) * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1)) * sizeof( CTileQPInfo) < (oO == O_NONE ? 1 : (pSCEnc->WMISCP.cNumOfSliceMinus1H + 1) * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1))))
            return ICERR_ERROR;
        
        if(StrEncInit(pSCEnc) != ICERR_OK)
            return ICERR_ERROR;
    }

    if(pParam->uAlphaMode > 0){ // alpha channel
//        pSCEnc->WMISCP.nExpBias -= 128;
        if((pSCEnc->m_pNextSC = (CWMImageStrCodec *)malloc(sizeof(CWMImageStrCodec))) == NULL)
            return ICERR_ERROR;
        *pSCEnc->m_pNextSC = *pSCEnc;
        pSCEnc->m_pNextSC->pPlane[0] = pSCDec->m_pNextSC->p1MBbuffer[0];
        pSCEnc->m_pNextSC->WMISCP.cfColorFormat = pSCEnc->m_pNextSC->WMII.cfColorFormat = pSCEnc->m_pNextSC->m_param.cfColorFormat = Y_ONLY;
        pSCEnc->m_pNextSC->WMISCP.cChannel  = pSCEnc->m_pNextSC->m_param.cNumChannels = 1;
        pSCEnc->m_pNextSC->m_bSecondary = TRUE;
        pSCEnc->m_pNextSC->m_pNextSC = pSCEnc;
        pSCEnc->m_pNextSC->m_param = pSCDec->m_pNextSC->m_param;
        pSCEnc->m_param.bAlphaChannel = TRUE;

        if(pParam->bIgnoreOverlap == TRUE)
            pSCEnc->m_pNextSC->pTile = pSCDec->m_pNextSC->pTile;
        else if(StrEncInit(pSCEnc->m_pNextSC) != ICERR_OK)
                return ICERR_ERROR;

        WriteImagePlaneHeader(pSCEnc->m_pNextSC);
    }

    if(pParam->bIgnoreOverlap == TRUE){
        SUBBAND sbEnc = pSCEnc->WMISCP.sbSubband, sbDec = pSCDec->WMISCP.sbSubband;
        size_t cfEnc = ((pSCEnc->WMISCP.bfBitstreamFormat == SPATIAL || sbEnc == SB_DC_ONLY) ? 1 : (sbEnc == SB_NO_HIGHPASS ? 2 : (sbEnc == SB_NO_FLEXBITS ? 3 : 4)));
        size_t cfDec = ((pSCDec->WMISCP.bfBitstreamFormat == SPATIAL || sbDec == SB_DC_ONLY) ? 1 : (sbDec == SB_NO_HIGHPASS ? 2 : (sbDec == SB_NO_FLEXBITS ? 3 : 4)));
        size_t k, l = 0;

        pSCEnc->pIndexTable = (size_t *)malloc(sizeof(size_t) * (pSCEnc->WMISCP.cNumOfSliceMinus1H + 1) * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1) * cfEnc);

        if(pSCEnc->pIndexTable == NULL || cfEnc > cfDec)
            return ICERR_ERROR;

        pSCEnc->cNumBitIO = cfEnc * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1);
        
        for(j = 0; j <= pSCDec->WMISCP.cNumOfSliceMinus1H; j ++){
            for(i = 0; i <= pSCDec->WMISCP.cNumOfSliceMinus1V; i ++)
                if(pSCDec->WMISCP.uiTileX[i] >= mbLeft && pSCDec->WMISCP.uiTileX[i] < mbRight && 
                    pSCDec->WMISCP.uiTileY[j] >= mbTop && pSCDec->WMISCP.uiTileY[j] < mbBottom){
                        for(k = 0; k < cfEnc; k ++, l ++)
                            pSCEnc->pIndexTable[l] = pSCDec->pIndexTable[(j * (pSCDec->WMISCP.cNumOfSliceMinus1V + 1) + i) * cfDec + k + 1] - pSCDec->pIndexTable[(j * (pSCDec->WMISCP.cNumOfSliceMinus1V + 1) + i) * cfDec + k];
                }
        }

        if(pSCEnc->WMISCP.cNumOfSliceMinus1H + pSCEnc->WMISCP.cNumOfSliceMinus1V == 0 && pSCEnc->WMISCP.bfBitstreamFormat == SPATIAL){
            pSCEnc->m_param.bIndexTable = FALSE;
            pSCEnc->cNumBitIO = 0;
            writeIndexTableNull(pSCEnc);
        }
        else
            writeIndexTable(pSCEnc);
                
        detachISWrite(pSCEnc, pSCEnc->pIOHeader);

        for(j = l = 0; j <= pSCDec->WMISCP.cNumOfSliceMinus1H; j ++){
            for(i = 0; i <= pSCDec->WMISCP.cNumOfSliceMinus1V; i ++)
                if(pSCDec->WMISCP.uiTileX[i] >= mbLeft && pSCDec->WMISCP.uiTileX[i] < mbRight && 
                    pSCDec->WMISCP.uiTileY[j] >= mbTop && pSCDec->WMISCP.uiTileY[j] < mbBottom){
                        for(k = 0; k < cfEnc; k ++){
                            pSCDec->WMISCP.pWStream->SetPos(pSCDec->WMISCP.pWStream, pSCDec->pIndexTable[(j * (pSCDec->WMISCP.cNumOfSliceMinus1V + 1) + i) * cfDec + k] + pSCDec->cHeaderSize);
                            copyTo(pSCDec->WMISCP.pWStream, pSCEnc->WMISCP.pWStream, pSCEnc->pIndexTable[l++]);
                        }
                }
        }

        free(pSCEnc->pIndexTable);
    }
    else
        writeIndexTableNull(pSCEnc);

    for(pSCDec->cRow = 0; pSCDec->cRow < mbBottom && pParam->bIgnoreOverlap == FALSE; pSCDec->cRow ++){
        for(pSCDec->cColumn = 0; pSCDec->cColumn < pSCDec->cmbWidth; pSCDec->cColumn ++){
            Int cRow = (Int)pSCDec->cRow, cColumn = (Int)pSCDec->cColumn;
            CWMITile * pTile;
            
            memset(pMBBuf, 0, sizeof(PixelI) * cUnit);
            if(pSCDec->m_param.bAlphaChannel){ // alpha channel
                memset(pSCDec->m_pNextSC->p1MBbuffer[0], 0, sizeof(PixelI) * 256);
                pSCDec->m_pNextSC->cRow = pSCDec->cRow;
                pSCDec->m_pNextSC->cColumn = pSCDec->cColumn;
            }

            // decode
            pSC = pSCDec;
            for(i = (pSCDec->m_param.bAlphaChannel ? 2 : 1); i > 0; i --){
                getTilePos(pSCDec, cColumn, cRow);
                if(i == 2){
                    pSCDec->m_pNextSC->cTileColumn = pSCDec->cTileColumn;
                    pSCDec->m_pNextSC->cTileRow = pSCDec->cTileRow;
                }
                
                if(readPackets(pSCDec) != ICERR_OK)
                    return ICERR_ERROR;

                pContext = &pSCDec->m_pCodingContext[pSCDec->cTileColumn];
                
                if(DecodeMacroblockDC(pSCDec, pContext, cColumn, cRow) != ICERR_OK)
                    return ICERR_ERROR;
                
                if(pSCDec->cSB > 1)
                    if(DecodeMacroblockLowpass(pSCDec, pContext, cColumn, cRow) != ICERR_OK)
                        return ICERR_ERROR;

                predDCACDec(pSCDec);

                if(pSCDec->cSB > 2)
                    if(DecodeMacroblockHighpass(pSCDec, pContext, cColumn, cRow) != ICERR_OK)
                        return ICERR_ERROR;

                predACDec(pSCDec);
                
                updatePredInfo(pSCDec, &pSCDec->MBInfo, cColumn, pSCDec->WMISCP.cfColorFormat);

                pSCDec = pSCDec->m_pNextSC;
            }
            pSCDec = pSC;

            if(pSCDec->cRow >= mbTop && pSCDec->cColumn >= mbLeft && pSCDec->cColumn < mbRight){
                cRow = (Int)(pSCDec->cRow - mbTop);
                if(bFlipV[oO])
                    cRow = (Int)mbHeight - cRow - 1;
                cColumn = (Int)(pSCDec->cColumn - mbLeft);
                if(bFlipH[oO])
                    cColumn = (Int)mbWidth - cColumn - 1;

                pSCEnc->m_bCtxLeft = pSCEnc->m_bCtxTop = FALSE;
                for(i = 0; i <= pSCEnc->WMISCP.cNumOfSliceMinus1H; i ++)
                    if(pSCEnc->WMISCP.uiTileY[i] == (U32)(oO < O_RCW ? cRow : cColumn)){
                        pSCEnc->cTileRow = i;
                        pSCEnc->m_bCtxTop = TRUE;
                        break;
                    }
                for(i = 0; i <= pSCEnc->WMISCP.cNumOfSliceMinus1V; i ++)
                    if(pSCEnc->WMISCP.uiTileX[i] == (U32)(oO < O_RCW ? cColumn : cRow)){
                        pSCEnc->cTileColumn = i;
                        pSCEnc->m_bCtxLeft = TRUE;
                        break;
                    }

                if(pSCEnc->m_bCtxLeft && pSCEnc->m_bCtxTop){ // a new tile, buffer tile DQuant info
                    CTileQPInfo * pTmp = pTileQPInfo;
                    
                    pTile = pSCDec->pTile + pSCDec->cTileColumn;
                    
                    if(oO != O_NONE)
                        pTmp += pSCEnc->cTileRow * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1) + pSCEnc->cTileColumn;
                    
                    pTmp->dcMode = pTile->cChModeDC;
                    for(i = 0; i < pSCEnc->WMISCP.cChannel; i ++)
                        pTmp->dcIndex[i] = pTile->pQuantizerDC[i][0].iIndex;
                    
                    if(pSCEnc->WMISCP.sbSubband != SB_DC_ONLY){
                        pTmp->bUseDC = pTile->bUseDC;
                        pTmp->lpNum = pTile->cNumQPLP;
                        if(pTmp->bUseDC == FALSE)
                            for(j = 0; j < pTmp->lpNum; j ++){
                                pTmp->lpMode[j] = pTile->cChModeLP[j];
                                for(i = 0; i < pSCEnc->WMISCP.cChannel; i ++)
                                    pTmp->lpIndex[j][i] = pTile->pQuantizerLP[i][j].iIndex;
                            }
                            
                            if(pSCEnc->WMISCP.sbSubband != SB_NO_HIGHPASS){
                                pTmp->bUseLP = pTile->bUseLP;
                                pTmp->hpNum = pTile->cNumQPHP;
                                if(pTmp->bUseLP == FALSE)
                                    for(j = 0; j < pTmp->hpNum; j ++){
                                        pTmp->hpMode[j] = pTile->cChModeHP[j];
                                        for(i = 0; i < pSCEnc->WMISCP.cChannel; i ++)
                                            pTmp->hpIndex[j][i] = pTile->pQuantizerHP[i][j].iIndex;
                                    }
                            }
                    }

                    if(pParam->uAlphaMode > 0){
                        pTile = pSCDec->m_pNextSC->pTile + pSCDec->cTileColumn;

                        pTmp->dcIndex[iAlphaPos] = pTile->pQuantizerDC[0][0].iIndex;

                        if(pSCEnc->WMISCP.sbSubband != SB_DC_ONLY){
                            pTmp->bUseDCAlpha = pTile->bUseDC;
                            pTmp->lpNumAlpha = pTile->cNumQPLP;
                            if(pTmp->bUseDCAlpha == FALSE)
                                for(j = 0; j < pTmp->lpNumAlpha; j ++)
                                    pTmp->lpIndex[j][iAlphaPos] = pTile->pQuantizerLP[0][j].iIndex;
                            if(pSCEnc->WMISCP.sbSubband != SB_NO_HIGHPASS){
                                pTmp->bUseLPAlpha = pTile->bUseLP;
                                pTmp->hpNumAlpha = pTile->cNumQPHP;
                                if(pTmp->bUseLPAlpha == FALSE)
                                    for(j = 0; j < pTmp->hpNumAlpha; j ++)
                                        pTmp->hpIndex[j][iAlphaPos] = pTile->pQuantizerHP[0][j].iIndex;
                            }
                        }
                    }
                }

                if(oO == O_NONE){
                    // encode
                    pSCEnc->cColumn = pSCDec->cColumn - mbLeft + 1;
                    pSCEnc->cRow = pSCDec->cRow + 1 - mbTop;
                    pSCEnc->MBInfo = pSCDec->MBInfo;

                    getTilePos(pSCEnc, cColumn, cRow);
                    
                    if(pSCEnc->m_bCtxLeft && pSCEnc->m_bCtxTop)
                        transcodeTileHeader(pSCEnc, pTileQPInfo);

                    encodeMB(pSCEnc, cColumn, cRow);
                    if(pParam->uAlphaMode > 0){
                        pSCEnc->m_pNextSC->cColumn = pSCDec->cColumn - mbLeft + 1;
                        pSCEnc->m_pNextSC->cRow = pSCDec->cRow + 1 - mbTop;
                        getTilePos(pSCEnc->m_pNextSC, cColumn, cRow);
                        pSCEnc->m_pNextSC->MBInfo = pSCDec->m_pNextSC->MBInfo;
                        encodeMB(pSCEnc->m_pNextSC, cColumn, cRow);
                    }
                }
                else{
                    size_t cOff = (oO < O_RCW ? (size_t)cRow * mbWidth + (size_t)cColumn : (size_t)cRow + mbHeight * (size_t)cColumn);

                    pMBInfo[cOff] = pSCDec->MBInfo;

                    memcpy(&pFrameBuf[cOff * cUnit], pMBBuf, cUnit * sizeof(PixelI));

                    if(pParam->uAlphaMode > 0){
                        pMBInfoAlpha[cOff] = pSCDec->m_pNextSC->MBInfo;
                        
                        memcpy(&pFrameBufAlpha[cOff * 256], MBBufAlpha, 256 * sizeof(PixelI));
                    }
                }
            }
        }

        advanceOneMBRow(pSCDec);

        if(oO == O_NONE)
            advanceOneMBRow(pSCEnc);
    }

    if(oO != O_NONE){
        for(pSCEnc->cRow = 1; pSCEnc->cRow <= pSCEnc->cmbHeight; pSCEnc->cRow ++){
            for(pSCEnc->cColumn = 1; pSCEnc->cColumn <= pSCEnc->cmbWidth; pSCEnc->cColumn ++){
                Int cRow, cColumn;
                size_t cOff = (pSCEnc->cRow - 1) * pSCEnc->cmbWidth + pSCEnc->cColumn - 1;
                
                for(i = 0; i < ((pSCEnc->m_param.cfColorFormat == YUV_420 || pSCEnc->m_param.cfColorFormat == YUV_422) ? 1 : pSCEnc->m_param.cNumChannels); i ++){
                    transformDCBlock(pMBInfo[cOff].iBlockDC[i], pSCEnc->MBInfo.iBlockDC[i], oO);
                    transformACBlocks(pFrameBuf + cOff * cUnit + i * 256, pMBBuf + 256 * i, oO);
                }
                if(pSCEnc->WMISCP.cfColorFormat == YUV_420)
                    for(i = 0; i < 2; i ++){
                        transformDCBlock420(pMBInfo[cOff].iBlockDC[i + 1], pSCEnc->MBInfo.iBlockDC[i + 1], oO);
                        transformACBlocks420(pFrameBuf + cOff * cUnit + 256 + i * 64, pMBBuf + 256 + i * 64, oO);
                    }
                else if(pSCEnc->WMISCP.cfColorFormat == YUV_422)
                    for(i = 0; i < 2; i ++){
                        transformDCBlock422(pMBInfo[cOff].iBlockDC[i + 1], pSCEnc->MBInfo.iBlockDC[i + 1], oO);
                        transformACBlocks422(pFrameBuf + cOff * cUnit + 256 + i * 128, pMBBuf + 256 + i * 128, oO);
                    }

                    pSCEnc->MBInfo.iQIndexLP = pMBInfo[cOff].iQIndexLP;
                    pSCEnc->MBInfo.iQIndexHP = pMBInfo[cOff].iQIndexHP;

                cRow = (Int)pSCEnc->cRow - 1;
                cColumn = (Int)pSCEnc->cColumn - 1;
                getTilePos(pSCEnc, cColumn, cRow);

                if(pSCEnc->m_bCtxLeft && pSCEnc->m_bCtxTop)
                    transcodeTileHeader(pSCEnc, pTileQPInfo + pSCEnc->cTileRow * (pSCEnc->WMISCP.cNumOfSliceMinus1V + 1) + pSCEnc->cTileColumn);
                encodeMB(pSCEnc, cColumn, cRow);
                
                if(pParam->uAlphaMode > 0){
                    pSCEnc->m_pNextSC->cColumn = pSCEnc->cColumn;
                    pSCEnc->m_pNextSC->cRow = pSCEnc->cRow;
                    getTilePos(pSCEnc->m_pNextSC, cColumn, cRow);
                    pSCEnc->m_pNextSC->MBInfo = pSCDec->m_pNextSC->MBInfo;

                    transformDCBlock(pMBInfoAlpha[cOff].iBlockDC[0], pSCEnc->m_pNextSC->MBInfo.iBlockDC[0], oO);
                    transformACBlocks(pFrameBufAlpha + cOff * 256, MBBufAlpha, oO);

                    pSCEnc->m_pNextSC->MBInfo.iQIndexLP = pMBInfoAlpha[cOff].iQIndexLP;
                    pSCEnc->m_pNextSC->MBInfo.iQIndexHP = pMBInfoAlpha[cOff].iQIndexHP;

                    encodeMB(pSCEnc->m_pNextSC, cColumn, cRow);
                }
            }

            advanceOneMBRow(pSCEnc);
        }
    }

    free(pMBBuf);
    if(oO != O_NONE){
        free(pFrameBuf);
        free(pMBInfo);
        if(pParam->uAlphaMode > 0){ // alpha channel
            free(pFrameBufAlpha);
            free(pMBInfoAlpha);
        }
    }

    freePredInfo(pSCDec);
    freeTileInfo(pSCDec);
    StrIODecTerm(pSCDec);
    FreeCodingContextDec(pSCDec);
    if(pSCDec->m_param.bAlphaChannel)
        free(pSCDec->m_pNextSC);
    free(pSCDec);
    free(pIOHeaderDec);

    if(pParam->bIgnoreOverlap == FALSE){
        freePredInfo(pSCEnc);
        freeTileInfo(pSCEnc);
        StrIOEncTerm(pSCEnc);
        free(pTileQPInfo);
        FreeCodingContextEnc(pSCEnc);
    }
    free(pSCEnc);
    free(pIOHeaderEnc);

    return ICERR_OK;
}
