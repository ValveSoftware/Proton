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
#include "strcodec.h"
#include "decode.h"
#include "strTransform.h"
#include <math.h>
#include "perfTimer.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

#ifdef X86OPT_INLINE
#define _FORCEINLINE __forceinline
#else // X86OPT_INLINE
#define _FORCEINLINE
#endif // X86OPT_INLINE

#if defined(WMP_OPT_SSE2) || defined(WMP_OPT_CC_DEC) || defined(WMP_OPT_TRFM_DEC)
void StrDecOpt(CWMImageStrCodec* pSC);
#endif // OPT defined

Int processMacroblockDec(CWMImageStrCodec *);

U8 readQuantizerSB(U8 pQPIndex[MAX_CHANNELS], SimpleBitIO * pIO, size_t cChannel)
{
    U8 cChMode = 0;
    
    if(cChannel >= MAX_CHANNELS)
        return 0;

    if(cChannel > 1)
        cChMode = (U8)getBit32_SB(pIO, 2); // Channel mode

    pQPIndex[0] = (U8)getBit32_SB(pIO, 8); // Y

    if(cChMode == 1)  // MIXED
        pQPIndex[1] = (U8)getBit32_SB(pIO, 8); // UV
    else if(cChMode > 0){ // INDEPENDENT
        size_t i;

        for(i = 1; i < cChannel; i ++)
#pragma prefast(suppress: __WARNING_UNRELATED_LOOP_TERMINATION_NO_SIZEEXPR, "PREfast false alarm: 1 <= i < MAX_CHANNELS, no buffer over/underrun!")
            pQPIndex[i] = (U8)getBit32_SB(pIO, 8); // UV
    }

    return cChMode;
}

U8 readQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS], BitIOInfo * pIO, size_t cChannel, size_t iPos)
{
    U8 cChMode = 0;

    if(cChannel > 1)
        cChMode = (U8)getBit16(pIO, 2); // Channel mode

    pQuantizer[0][iPos].iIndex = (U8)getBit16(pIO, 8); // Y

    if(cChMode == 1)  // MIXED
        pQuantizer[1][iPos].iIndex = (U8)getBit16(pIO, 8); // UV
    else if(cChMode > 0){ // INDEPENDENT
        size_t i;

        for(i = 1; i < cChannel; i ++)
            pQuantizer[i][iPos].iIndex = (U8)getBit16(pIO, 8); // UV
    }

    return cChMode;
}

// packet header: 00000000 00000000 00000001 ?????xxx
// xxx:           000(spatial) 001(DC) 010(AD) 011(AC) 100(FL) 101-111(reserved)
// ?????:         (iTileY * cNumOfSliceV + iTileX) % 32
Int readPacketHeader(BitIOInfo * pIO, U8 ptPacketType, U8 pID)
{
    UNREFERENCED_PARAMETER( ptPacketType );
    UNREFERENCED_PARAMETER( pID );
    if(getBit16(pIO, 8) != 0 || getBit16(pIO, 8) != 0 || getBit16(pIO, 8) != 1)
        return ICERR_ERROR;
    getBit16(pIO, 8);
    return ICERR_OK;
}

Int readTileHeaderDC(CWMImageStrCodec * pSC, BitIOInfo * pIO)
{
    if((pSC->m_param.uQPMode & 1) != 0){ // not DC uniform
        size_t iTile;
        CWMITile * pTile = pSC->pTile + pSC->cTileColumn;

        if(pSC->cTileRow + pSC->cTileColumn == 0) // allocate DC QP info
            for(iTile = 0; iTile <= pSC->WMISCP.cNumOfSliceMinus1V; iTile ++)
                if(allocateQuantizer(pSC->pTile[iTile].pQuantizerDC, pSC->m_param.cNumChannels, 1) != ICERR_OK)
                    return ICERR_ERROR;

        pTile->cChModeDC = readQuantizer(pTile->pQuantizerDC, pIO, pSC->m_param.cNumChannels, 0);
        formatQuantizer(pTile->pQuantizerDC, pTile->cChModeDC, pSC->m_param.cNumChannels, 0, TRUE, pSC->m_param.bScaledArith);
    }

    return ICERR_OK;
}

Int readTileHeaderLP(CWMImageStrCodec * pSC, BitIOInfo * pIO)
{
    if(pSC->WMISCP.sbSubband != SB_DC_ONLY && (pSC->m_param.uQPMode & 2) != 0){ // not LP uniform
        CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
        U8 i;

        pTile->bUseDC = (getBit16(pIO, 1) == 1 ? TRUE : FALSE);
        pTile->cBitsLP = 0;
        pTile->cNumQPLP = 1;

        if(pSC->cTileRow > 0)
            freeQuantizer(pTile->pQuantizerLP);
        
        if(pTile->bUseDC == TRUE){
            if(allocateQuantizer(pTile->pQuantizerLP, pSC->m_param.cNumChannels, pTile->cNumQPLP) != ICERR_OK)
                return ICERR_ERROR;
            useDCQuantizer(pSC, pSC->cTileColumn);
        }
        else{
            pTile->cNumQPLP = (U8)getBit16(pIO, 4) + 1;
            pTile->cBitsLP = dquantBits(pTile->cNumQPLP);
            
            if(allocateQuantizer(pTile->pQuantizerLP, pSC->m_param.cNumChannels, pTile->cNumQPLP) != ICERR_OK)
                return ICERR_ERROR;

            for(i = 0; i < pTile->cNumQPLP; i ++){
                pTile->cChModeLP[i] = readQuantizer(pTile->pQuantizerLP, pIO, pSC->m_param.cNumChannels, i);
                formatQuantizer(pTile->pQuantizerLP, pTile->cChModeLP[i], pSC->m_param.cNumChannels, i, TRUE, pSC->m_param.bScaledArith);
            }
        }
    }

    return ICERR_OK;
}

Int readTileHeaderHP(CWMImageStrCodec * pSC, BitIOInfo * pIO)
{
    if(pSC->WMISCP.sbSubband != SB_DC_ONLY && pSC->WMISCP.sbSubband != SB_NO_HIGHPASS && (pSC->m_param.uQPMode & 4) != 0){ // not HP uniform
        CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
        U8 i;

        pTile->bUseLP = (getBit16(pIO, 1) == 1 ? TRUE : FALSE);
        pTile->cBitsHP = 0;
        pTile->cNumQPHP = 1;

        if(pSC->cTileRow > 0)
            freeQuantizer(pTile->pQuantizerHP);
        
        if(pTile->bUseLP == TRUE){
            pTile->cNumQPHP = pTile->cNumQPLP;
            if(allocateQuantizer(pTile->pQuantizerHP, pSC->m_param.cNumChannels, pTile->cNumQPHP) != ICERR_OK)
                return ICERR_ERROR;
            useLPQuantizer(pSC, pTile->cNumQPHP, pSC->cTileColumn);
        }
        else{
            pTile->cNumQPHP = (U8)getBit16(pIO, 4) + 1;
            pTile->cBitsHP = dquantBits(pTile->cNumQPHP);

            if(allocateQuantizer(pTile->pQuantizerHP, pSC->m_param.cNumChannels, pTile->cNumQPHP) != ICERR_OK)
                return ICERR_ERROR;

            for(i = 0; i < pTile->cNumQPHP; i ++){
                pTile->cChModeHP[i] = readQuantizer(pTile->pQuantizerHP, pIO, pSC->m_param.cNumChannels, i);
                formatQuantizer(pTile->pQuantizerHP, pTile->cChModeHP[i], pSC->m_param.cNumChannels, i, FALSE, pSC->m_param.bScaledArith);
            }
        }
    }

    return ICERR_OK;
}

Int readPackets(CWMImageStrCodec * pSC)
{
    if(pSC->cColumn == 0 && pSC->cRow == pSC->WMISCP.uiTileY[pSC->cTileRow]){ // start of a new horizontal slice
        size_t k;
        
        if (pSC->m_bSecondary) {
             if(pSC->cNumBitIO > 0){
                for(k = 0; k <= pSC->WMISCP.cNumOfSliceMinus1V; k ++){
                    // reset coding contexts
                    ResetCodingContextDec(&pSC->m_pCodingContext[k]);
                }
            }
            else{ // for multiple decoding calls!
                ResetCodingContextDec(&pSC->m_pCodingContext[0]);
            }
        }
        else {
            // get sizes of each packet and update index table
            for(k = 0; k < pSC->cNumBitIO; k ++){
                if(pSC->ppWStream != NULL){ // new API
                    unsigned cBands = (pSC->WMISCP.bfBitstreamFormat == SPATIAL ? 1 : pSC->cSB);
                    struct WMPStream ** ppWS = pSC->ppWStream + (pSC->WMISCP.cNumOfSliceMinus1V + 1) * pSC->cTileRow * cBands
                        + k / cBands * cBands + (k % cBands);

                    if(pSC->cTileRow > 0 && pSC->m_ppBitIO[k]->pWS != NULL)     // attached to the same packet of the tile on top
                        detachISRead(pSC, pSC->m_ppBitIO[k]);    // detach it
                    
                    if(ppWS[0] != NULL)
                        attachISRead(pSC->m_ppBitIO[k], ppWS[0], pSC); // need to attach it
                }
                else{
                    if(pSC->cTileRow > 0)
                        detachISRead(pSC, pSC->m_ppBitIO[k]);
                    pSC->WMISCP.pWStream->SetPos(pSC->WMISCP.pWStream, pSC->pIndexTable[pSC->cNumBitIO * pSC->cTileRow + k] + pSC->cHeaderSize);
                    attachISRead(pSC->m_ppBitIO[k], pSC->WMISCP.pWStream, pSC);
                }
            }
            
            if(pSC->cNumBitIO == 0){
                detachISRead(pSC, pSC->pIOHeader);
                if(pSC->ppWStream != NULL){// new API
                    attachISRead(pSC->pIOHeader, pSC->ppWStream[0], pSC); // need to attach it
                }
                else{
                    pSC->WMISCP.pWStream->SetPos(pSC->WMISCP.pWStream, pSC->cHeaderSize);
                    attachISRead(pSC->pIOHeader, pSC->WMISCP.pWStream, pSC);
                }
            }
            
            for(k = 0; k <= pSC->WMISCP.cNumOfSliceMinus1V; k ++){
                U8 pID = (U8)((pSC->cTileRow * (pSC->WMISCP.cNumOfSliceMinus1V + 1) + k) & 0x1F);
                
                // read packet header
                if(pSC->WMISCP.bfBitstreamFormat == SPATIAL){
                    BitIOInfo * pIO = (pSC->cNumBitIO == 0 ? pSC->pIOHeader : pSC->m_ppBitIO[k]);

                    if(pIO->pWS == NULL || readPacketHeader(pIO, 0, pID) != ICERR_OK)
                        return ICERR_ERROR;
                    pSC->m_pCodingContext[k].m_iTrimFlexBits = (pSC->m_param.bTrimFlexbitsFlag) ? getBit16(pIO, 4) : 0;
                }
                else{
                    if(pSC->m_ppBitIO[k * pSC->cSB + 0] == NULL || readPacketHeader(pSC->m_ppBitIO[k * pSC->cSB + 0], 1, pID) != ICERR_OK)
                        return ICERR_ERROR;
                    if(pSC->cSB > 1){
                        if(pSC->m_ppBitIO[k * pSC->cSB + 1] == NULL || readPacketHeader(pSC->m_ppBitIO[k * pSC->cSB + 1], 2, pID) != ICERR_OK)
                            return ICERR_ERROR;
                    }
                    if(pSC->cSB > 2){
                        if(pSC->m_ppBitIO[k * pSC->cSB + 2] == NULL || readPacketHeader(pSC->m_ppBitIO[k * pSC->cSB + 2], 3, pID) != ICERR_OK)
                            return ICERR_ERROR;
//                        readTileHeaderHP(pSC, pSC->m_ppBitIO[k * pSC->cSB + 2]);
                    }
                    if(pSC->cSB > 3){
                        if(pSC->m_ppBitIO[k * pSC->cSB + 3] == NULL)
                            return ICERR_ERROR;
                        readPacketHeader(pSC->m_ppBitIO[k * pSC->cSB + 3], 4, pID);  // bad flexbits packet doesn't generate an error
                        pSC->m_pCodingContext[k].m_iTrimFlexBits = (pSC->m_param.bTrimFlexbitsFlag) ? getBit16(pSC->m_ppBitIO[k * pSC->cSB + 3], 4) : 0;
                    }
                }

                // reset coding contexts
                ResetCodingContextDec(&pSC->m_pCodingContext[k]);
            }
        }
    }
    
    if(pSC->m_bCtxLeft && pSC->m_bCtxTop && pSC->m_bSecondary == FALSE){
        CCodingContext *pContext = &pSC->m_pCodingContext[pSC->cTileColumn];
        
        readTileHeaderDC(pSC, pContext->m_pIODC);
        if(pSC->m_pNextSC != NULL)
            readTileHeaderDC(pSC->m_pNextSC, pContext->m_pIODC);
        if(pSC->cSB > 1){
            readTileHeaderLP(pSC, pContext->m_pIOLP);
            if(pSC->m_pNextSC != NULL)
                readTileHeaderLP(pSC->m_pNextSC, pContext->m_pIOLP);
        }
        if(pSC->cSB > 2){
            readTileHeaderHP(pSC, pContext->m_pIOAC);
            if(pSC->m_pNextSC != NULL)
                readTileHeaderHP(pSC->m_pNextSC, pContext->m_pIOAC);
        }
    }

    return ICERR_OK;
}

/* inverse transform and overlap possible part of a macroblock */
Int processMacroblockDec(CWMImageStrCodec * pSC)
{
    const OVERLAP olOverlap = pSC->WMISCP.olOverlap;
    // const Bool left = (pSC->cColumn == 0);
    const Bool /*top = (pSC->cRow == 0),*/ bottom = (pSC->cRow == pSC->cmbHeight);
    const Bool bottomORright = (bottom || pSC->cColumn == pSC->cmbWidth);
    // const size_t mbWidth = pSC->cmbWidth, mbX = pSC->cColumn;
    // Int iQIndex = 0;
    ERR_CODE result = ICERR_OK;
    size_t j, jend = (pSC->m_pNextSC != NULL);

    for (j = 0; j <= jend; j++) {
        if(!bottomORright){
            CCodingContext *pContext;
            
            getTilePos(pSC, pSC->cColumn, pSC->cRow);
            
            if(jend){
                pSC->m_pNextSC->cTileColumn = pSC->cTileColumn;
                pSC->m_pNextSC->cTileRow = pSC->cTileRow;
            }

            pContext = &pSC->m_pCodingContext[pSC->cTileColumn];
           
            if(readPackets(pSC) != ICERR_OK)
                return ICERR_ERROR;
         
            // check if we need to do entropy decode
			if(!pSC->m_Dparam->bDecodeFullFrame){
				if(pSC->cColumn == pSC->WMISCP.uiTileX[pSC->cTileColumn]){ // switching to a new tile
					size_t rLeft = pSC->m_Dparam->cROILeftX, rRight = pSC->m_Dparam->cROIRightX;
					size_t rTop = pSC->m_Dparam->cROITopY, rBottom = pSC->m_Dparam->cROIBottomY;
					size_t rExt = (olOverlap == OL_NONE ? 0 : olOverlap == OL_ONE ? 2 : 10);
					size_t tLeft = pSC->cColumn * 16, tTop = pSC->WMISCP.uiTileY[pSC->cTileRow] * 16;
					size_t tRight = (pSC->cTileColumn != pSC->WMISCP.cNumOfSliceMinus1V ? pSC->WMISCP.uiTileX[pSC->cTileColumn + 1] : pSC->cmbWidth) * 16;
					size_t tBottom = (pSC->cTileRow != pSC->WMISCP.cNumOfSliceMinus1H ? pSC->WMISCP.uiTileY[pSC->cTileRow + 1] : pSC->cmbHeight) * 16;

					// tile overlaps with ROI?
					pContext->m_bInROI = ((rLeft >= tRight + rExt || rTop >= tBottom + rExt || tLeft > rRight + rExt ||
						tTop > rBottom + rExt || pSC->cRow * 16 > rBottom + rExt) ? FALSE : TRUE);
				}
			}

            if(pSC->m_Dparam->bDecodeFullFrame || pContext->m_bInROI){                
                if ((result = DecodeMacroblockDC(pSC, pContext, (Int)pSC->cColumn, (Int)pSC->cRow)) != ICERR_OK)
                    return result;

                if(pSC->m_Dparam->bDecodeLP){
                    if ((result = DecodeMacroblockLowpass(pSC, pContext, (Int)pSC->cColumn, (Int)pSC->cRow)) != ICERR_OK)
                        return result;
                }

                predDCACDec(pSC);
                                
                dequantizeMacroblock(pSC);

                if(pSC->m_Dparam->bDecodeHP){
                    if ((result = DecodeMacroblockHighpass(pSC, pContext, (Int)pSC->cColumn, (Int)pSC->cRow)) != ICERR_OK)
                        return result;
                    predACDec(pSC);
                }
           
                /* keep necessary info for future prediction */
                updatePredInfo(pSC, &pSC->MBInfo, (Int)pSC->cColumn, pSC->m_param.cfColorFormat);
            }
        }

        if((!pSC->m_Dparam->bDecodeFullFrame) &&
            ((pSC->cColumn * 16 > pSC->m_Dparam->cROIRightX  + 25) || (pSC->cColumn * 16 + 25 < pSC->m_Dparam->cROILeftX)
            || (pSC->cRow * 16 > pSC->m_Dparam->cROIBottomY + 25) || (pSC->cRow * 16 + 25 < pSC->m_Dparam->cROITopY)))
        {
            // do nothing
        }
        else {
            pSC->Transform(pSC);
        }

        if (jend) {
            pSC->m_pNextSC->cRow = pSC->cRow;
            pSC->m_pNextSC->cColumn = pSC->cColumn;
            pSC = pSC->m_pNextSC;
        }
    }

    return result;
}

//================================================================
// Inverse Color Conversion 
//#define _ICC1(r, g, b) (g^=b^=g^=b, r^=g^=r^=g, b += ((g) >> 1), r += ((g) >> 1), g -= (b+3*r+2) >> 2) 
//#define _ICC(r, g, b) (g^=b^=g^=b, r^=g^=r^=g, b += ((g) >> 1), r += ((g) >> 1), g -= (b+3*r+2) >> 2) 
//================================================================
//#define _ICC1(r, g, b) r -= (g >> 1), g += r, r -= ((b + 1) >> 1), b += r
//#define _ICC(r, g, b) r -= (g >> 1), g += r, r -= (b >> 1), b += r

#define _ICC(r, g, b)  (g -= ((r + 0) >> 1), r -= ((b + 1) >> 1) - g, b += r)
#define _ICC_CMYK(c, m, y, k) (k -= ((m + 1) >> 1), m -= (c >> 1) - k, c -= ((y + 1) >> 1) - m, y += c)

#define _CLIP2(l, v, h) ((v) < (l) ? (l) : ((h) < (v) ? (h) : (v)))
#define _CLIP8(v) ((U8)_CLIP2(0, v, 255))
#define _CLIP16(v) ((I16)_CLIP2(-32768, v, 32767))
#define _CLIPU16(v) ((U16)_CLIP2(0, v, 65535))

#define min(a,b) (((a) < (b)) ? (a) : (b))

//inverseConvert: Inverse conversion from float RGB to RGBE
static _FORCEINLINE void inverseConvert (PixelI iF, U8 *pRGB, U8 *pE)
{
    if (iF <= 0) {
        *pRGB = *pE = 0;
    }
    else if ((iF >> 7) > 1) {
        /** normal form **/
        *pE = (U8) (iF >> 7); //+ 1;
        *pRGB = (iF & 0x7f) | 0x80;
    }
    else {  
        /** denormal form **/
        *pE = 1;
        *pRGB = (U8) iF;
    }
}

#ifdef __ANSI__
#define max(a,b) ((a) > (b) ? (a) : (b))
#endif // __ANSI__

static _FORCEINLINE void inverseConvertRGBE (PixelI iFr, PixelI iFg, PixelI iFb, U8 *pR, U8 *pG, U8 *pB, U8 *pE)
{
    U8 iShift;

    U8 pR_E, pG_E, pB_E;

    inverseConvert (iFr, pR, &pR_E);
    inverseConvert (iFg, pG, &pG_E);
    inverseConvert (iFb, pB, &pB_E);

    *pE = max(max(pR_E, pG_E), pB_E); 

    if(*pE > pR_E){
            iShift = (*pE - pR_E);
            *pR = (U8)((((int)*pR) * 2 + 1) >> (iShift + 1));
    }
    if(*pE > pG_E){
            iShift = (*pE - pG_E);
            *pG = (U8)((((int)*pG) * 2 + 1) >> (iShift + 1));
    }
    if(*pE > pB_E){
            iShift = (*pE - pB_E);
            *pB = (U8)((((int)*pB) * 2 + 1) >> (iShift + 1));
    }
}


//pixel to float 32!
static _FORCEINLINE float pixel2float(PixelI _h, const char _c, const unsigned char _lm)
{
    union uif
    {
        I32   i;
        float f;
    } x;

    I32 s, iTempH, m, e, lmshift = (1 << _lm);

    // assert (_c <= 127);

    iTempH = (I32) _h ;
    s = (iTempH >> 31);
    iTempH = (iTempH ^ s) - s; // abs(iTempH)

    e = (U32) iTempH >> _lm;// & ((1 << (31 - _lm)) - 1);
    m = (iTempH & (lmshift - 1)) | lmshift; // actual mantissa, with normalizer
    if (e == 0) { // denormal land
        m ^= lmshift; // normalizer removed
        e = 1; // actual exponent
    }

    e += (127 - _c);
    while (m < lmshift && e > 1 && m > 0) { // denormal originally, see if normal is possible
        e--;
        m <<= 1;
    }
    if (m < lmshift) // truly denormal
        e = 0;
    else
        m ^= lmshift;
    m <<= (23 - _lm);

    x.i = (s & 0x80000000) | (e << 23) | m;

    return x.f;
}

//convert Half-16 to internal format, only need to handle sign bit
static _FORCEINLINE U16 backwardHalf (PixelI hHalf)
{
    PixelI s;
    s = hHalf >> 31;
    hHalf = ((hHalf & 0x7fff) ^ s) - s; // don't worry about overflow
    return (U16) hHalf;
}


Void interpolateUV(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cfExt = pSC->WMII.cfColorFormat;
    const size_t cWidth = pSC->cmbWidth * 16;
    PixelI * pSrcU = pSC->a0MBbuffer[1], * pSrcV = pSC->a0MBbuffer[2];
    PixelI * pDstU = pSC->pResU, * pDstV = pSC->pResV;
    size_t iRow, iColumn;
    size_t iIdxS = 0, iIdxD = 0;

    if(pSC->m_param.cfColorFormat == YUV_422){  // 422 => 444, interpolate horizontally
        for(iRow = 0; iRow < 16; iRow ++){
            for(iColumn = 0; iColumn < cWidth; iColumn += 2){
                iIdxS = ((iColumn >> 4) << 7) + idxCC[iRow][(iColumn >> 1) & 7];
                iIdxD = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];

                // copy over
                pDstU[iIdxD] = pSrcU[iIdxS];
                pDstV[iIdxD] = pSrcV[iIdxS];

                if(iColumn > 0){
                    size_t iL = iColumn - 2, iIdxL = ((iL >> 4) << 8) + idxCC[iRow][iL & 15];
                    size_t iC = iColumn - 1, iIdxC = ((iC >> 4) << 8) + idxCC[iRow][iC & 15];
                    
                    // interpolate
                    pDstU[iIdxC] = ((pDstU[iIdxL] + pDstU[iIdxD] + 1) >> 1);
                    pDstV[iIdxC] = ((pDstV[iIdxL] + pDstV[iIdxD] + 1) >> 1);
                }
            }

            //last pixel
            iIdxS = (((iColumn - 1) >> 4) << 8) + idxCC[iRow][(iColumn - 1) & 15];
            pDstU[iIdxS] = pDstU[iIdxD];
            pDstV[iIdxS] = pDstV[iIdxD];
        }
    }
    else{ // 420 => 422 or 444, interpolate vertically
        const size_t cShift = (cfExt == YUV_422 ? 3 : 4);
        
        for(iColumn = 0; iColumn < cWidth; iColumn += 2){
            const size_t cMB = ((iColumn >> 4) << (4 + cShift)), cPix = (iColumn >> (4 - cShift)) & ((1 << cShift) - 1);
            
            for(iRow = 0; iRow < 16; iRow += 2){
                iIdxS = ((iColumn >> 4) << 6) + idxCC_420[iRow >> 1][(iColumn >> 1) & 7];
                iIdxD = cMB + idxCC[iRow][cPix];
                
                // copy over
                pDstU[iIdxD] = pSrcU[iIdxS];
                pDstV[iIdxD] = pSrcV[iIdxS];

                if(iRow > 0){
                    size_t iIdxT = cMB + idxCC[iRow - 2][cPix];
                    size_t iIdxC = cMB + idxCC[iRow - 1][cPix];
                    
                    // interpolate
                    pDstU[iIdxC] = ((pDstU[iIdxT] + pDstU[iIdxD] + 1) >> 1);
                    pDstV[iIdxC] = ((pDstV[iIdxT] + pDstV[iIdxD] + 1) >> 1);
                }
            }

            //last row
            iIdxS = cMB + idxCC[15][cPix];
            if(pSC->cRow == pSC->cmbHeight){ // image boundary
                pDstU[iIdxS] = pDstU[iIdxD];
                pDstV[iIdxS] = pDstV[iIdxD];
            }
            else{ // need next MB row
                size_t iIdxB = ((iColumn >> 4) << 6) + idxCC_420[0][(iColumn >> 1) & 7];

                pDstU[iIdxS] = ((pSC->a1MBbuffer[1][iIdxB] + pDstU[iIdxD] + 1) >> 1);
                pDstV[iIdxS] = ((pSC->a1MBbuffer[2][iIdxB] + pDstV[iIdxD] + 1) >> 1);
            }
        }

        if(cfExt != YUV_422){ // 420 => 444, interpolate horizontally
            for(iRow = 0; iRow < 16; iRow ++){
                for(iColumn = 1; iColumn < cWidth - 2; iColumn += 2){
                    size_t iIdxL = (((iColumn - 1) >> 4) << 8) + idxCC[iRow][(iColumn - 1) & 15];

                    iIdxD = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                    iIdxS = (((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15];
                    
                    pDstU[iIdxD] = ((pDstU[iIdxS] + pDstU[iIdxL] + 1) >> 1);
                    pDstV[iIdxD] = ((pDstV[iIdxS] + pDstV[iIdxL] + 1) >> 1);
                }

                // last pixel
                iIdxD = (((cWidth - 1) >> 4) << 8) + idxCC[iRow][(cWidth - 1) & 15];
                pDstU[iIdxD] = pDstU[iIdxS];
                pDstV[iIdxD] = pDstV[iIdxS];
            }
        }
    }
}

// write one MB row of Y_ONLY/CF_ALPHA/YUV_444/N_CHANNEL to output buffer
Void outputNChannel(CWMImageStrCodec * pSC, size_t iFirstRow, size_t iFirstColumn, size_t cWidth, size_t cHeight, size_t iShift, PixelI iBias)
{
    const CWMImageInfo* pII = &pSC->WMII;
    const size_t cChannel = pII->cfColorFormat == Y_ONLY ? 1 : pSC->WMISCP.cChannel;
    // const U8 cbChannels[BDB_MAX] = {-1, 1, 2, 2, 2, 4, 4, -1, -1, };
    const U8 nLen = pSC->WMISCP.nLenMantissaOrShift;
    const I8 nExpBias = pSC->WMISCP.nExpBias;

    PixelI * pChannel[16];
    size_t iChannel, iRow, iColumn;
    size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * 16, iY;

    assert(cChannel <= 16);

    for(iChannel = 0; iChannel < cChannel; iChannel ++)
        pChannel[iChannel & 15] = pSC->a0MBbuffer[iChannel];

    if(pSC->m_bUVResolutionChange)
        pChannel[1] = pSC->pResU, pChannel[2] = pSC->pResV;

    switch(pSC->WMII.bdBitDepth){
        case BD_8:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    U8 * pDst = (U8 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
                        
                        pDst[iChannel] = _CLIP8(p);
                    }
                }
            }
            break;

        case BD_16:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    U16 * pDst = (U16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
                        
                        p <<= nLen;
                        pDst[iChannel] = _CLIPU16(p);
                    }
                }
            }
            break;

        case BD_16S:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    I16 * pDst = (I16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);

                        p <<= nLen;                        
                        pDst[iChannel] = _CLIP16(p);
                    }
                }
            }
            break;

        case BD_16F:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    U16 * pDst = (U16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + iBias) >> iShift);
                        
                        pDst[iChannel] = backwardHalf(p);
                    }
                }
            }
            break;

        case BD_32:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    U32 * pDst = (U32 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + iBias) >> iShift);

                        p <<= nLen;
                        pDst[iChannel] = (U32)(p);
                    }
                }
            }
            break;

        case BD_32S:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    I32 * pDst = (I32 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + iBias) >> iShift);

                        p <<= nLen;
                        pDst[iChannel] = (I32)(p);
                    }
                }
            }
            break;

        case BD_32F:
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    float * pDst = (float *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + iBias) >> iShift);                       
                        
                        pDst[iChannel] = pixel2float (p, nExpBias, nLen);
                    }
                }
            }
            break;

        default:
            assert(0);
            break;
    }
}

static void fixup_Y_ONLY_to_Others(
    const CWMImageStrCodec* pSC,
    const CWMImageBufferInfo* pBI)
{
    const CWMImageInfo* pII = &pSC->WMII;
    const CWMIStrCodecParam* pSCP = &pSC->WMISCP;
    size_t cWidth = 0, cHeight = 0;
    size_t idxY = 0, idxX = 0;

    if (CF_RGB != pII->cfColorFormat || Y_ONLY != pSCP->cfColorFormat)
        return;

    cWidth = 0 != pII->cROIWidth ? pII->cROIWidth : pII->cWidth;
    cHeight = 0 != pII->cROIHeight ? pII->cROIHeight : pII->cHeight;

#define fixup(type, nCh) \
for (idxY = 0; idxY < cHeight; ++idxY) \
{ \
    type * pT = (type *)((U8*)pBI->pv + pBI->cbStride * idxY); \
    for (idxX = 0; idxX < cWidth; ++idxX) \
    { \
        pT[2] = pT[1] = pT[0]; \
        pT += nCh; \
    } \
} \
break

    switch (pII->bdBitDepth)
    {
        case BD_8:
            fixup(U8, (pII->cBitsPerUnit >> 3));
            break;

        case BD_16:
        case BD_16S:
        case BD_16F:
            fixup(U16, (pII->cBitsPerUnit >> 3) / sizeof(U16));
            break;

        case BD_32:
        case BD_32S:
        case BD_32F:
            fixup(U32, (pII->cBitsPerUnit >> 3) / sizeof(float));
            break;

        case BD_5:
        case BD_10:
        case BD_565:
        default:
            break;
    }
}

// centralized alpha channel color conversion, small perf penalty
Int outputMBRowAlpha(CWMImageStrCodec * pSC)
{
    if(pSC->WMII.bdBitDepth == BD_8 && pSC->WMISCP.cfColorFormat == CF_RGB)  // has been taken care of and optimized out
        return ICERR_OK;

    if(pSC->m_bSecondary == FALSE && pSC->m_pNextSC != NULL){ // with alpha channel
        const BITDEPTH_BITS bd = pSC->WMII.bdBitDepth;
        const PixelI iShift = (pSC->m_param.bScaledArith ? SHIFTZERO + QPFRACBITS : 0);
        const size_t cHeight = min((pSC->m_Dparam->cROIBottomY + 1) - (pSC->cRow - 1) * 16, 16);
        const size_t cWidth = (pSC->m_Dparam->cROIRightX + 1);
        const size_t iFirstRow = ((pSC->cRow - 1) * 16 > pSC->m_Dparam->cROITopY ? 0 : (pSC->m_Dparam->cROITopY & 0xf)), iFirstColumn = pSC->m_Dparam->cROILeftX;
        const size_t iAlphaPos = pSC->WMII.cLeadingPadding + (pSC->WMII.cfColorFormat == CMYK ? 4 : 3);//only RGB and CMYK may have interleaved alpha
        const PixelI * pA = pSC->m_pNextSC->a0MBbuffer[0];
        const U8 nLen = pSC->WMISCP.nLenMantissaOrShift;
        const I8 nExpBias = pSC->WMISCP.nExpBias;
        size_t iRow, iColumn;
        size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * 16, iY;
        
        if (CF_RGB != pSC->WMII.cfColorFormat && CMYK != pSC->WMII.cfColorFormat)
            return ICERR_ERROR;

        if(bd == BD_8){
            const PixelI iBias = (1 << (iShift + 7)) + (iShift == 0 ? 0 : (1 << (iShift - 1)));
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = ((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
                    ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = _CLIP8(a);
                }
        }
        else if(bd == BD_16){
            const PixelI iBias = (1 << (iShift + 15)) + (iShift == 0 ? 0 : (1 << (iShift - 1)));

            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = (((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift) << nLen);
                    ((U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = _CLIPU16(a);
                }
        }
        else if(bd == BD_16S){
            const PixelI iBias = (iShift == 0 ? 0 : (1 << (iShift - 1)));
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = (((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift) << nLen);
                    ((I16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = _CLIP16(a);
                }
        }
        else if(bd == BD_16F){
            const PixelI iBias = (iShift == 0 ? 0 : (1 << (iShift - 1)));

            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = ((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
                    ((U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = backwardHalf(a);
                }
        }
        else if(bd == BD_32S){
            const PixelI iBias = (iShift == 0 ? 0 : (1 << (iShift - 1)));
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = (((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift) << nLen);
                    ((I32 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = a;
                }
        }
        else if(bd == BD_32F){
            const PixelI iBias = (iShift == 0 ? 0 : (1 << (iShift - 1)));
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    PixelI a = ((pA[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
                    ((float *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY)[iAlphaPos] = pixel2float (a, nExpBias, nLen);
                }
        }
        else // not supported
            return ICERR_ERROR;
    }

    return ICERR_OK;
}

Int outputMBRow(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cfExt = (pSC->m_param.cfColorFormat == Y_ONLY ? Y_ONLY : pSC->WMII.cfColorFormat);
    const BITDEPTH_BITS bd = pSC->WMII.bdBitDepth;
    const PixelI iShift = (pSC->m_param.bScaledArith ? SHIFTZERO + QPFRACBITS : 0);
    const size_t cHeight = min((pSC->m_Dparam->cROIBottomY + 1) - (pSC->cRow - 1) * 16, 16);
    const size_t cWidth = (pSC->m_Dparam->cROIRightX + 1);
    const size_t iFirstRow = ((pSC->cRow - 1) * 16 > pSC->m_Dparam->cROITopY ? 0 : (pSC->m_Dparam->cROITopY & 0xf)), iFirstColumn = pSC->m_Dparam->cROILeftX;
    const PixelI *pY = pSC->a0MBbuffer[0];
    const PixelI *pU = (pSC->m_bUVResolutionChange ? pSC->pResU : pSC->a0MBbuffer[1]);
    const PixelI *pV = (pSC->m_bUVResolutionChange ? pSC->pResV : pSC->a0MBbuffer[2]);
    const PixelI *pA = NULL;
	const size_t iB = (pSC->WMII.bRGB ? 2 : 0);
	const size_t iR = 2 - iB;
    const U8 nLen = pSC->WMISCP.nLenMantissaOrShift;
    const I8 nExpBias = pSC->WMISCP.nExpBias;
    size_t iRow, iColumn, iIdx;
    size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * (cfExt == YUV_420 ? 8 : 16), iY;


    if (pSC->m_pNextSC) {
        assert (pSC->m_param.bScaledArith == pSC->m_pNextSC->m_param.bScaledArith);  // will be relaxed later
    }

    // guard output buffer
    if(checkImageBuffer(pSC, pSC->WMII.oOrientation >= O_RCW ? pSC->WMII.cROIHeight : pSC->WMII.cROIWidth, cHeight - iFirstRow) != ICERR_OK)
        return ICERR_ERROR;

    if(pSC->m_bUVResolutionChange)
        interpolateUV(pSC);

    if(pSC->WMISCP.bYUVData){
        I32 * pDst = (I32 *)pSC->WMIBI.pv + (pSC->cRow - 1) *
            (pSC->m_param.cfColorFormat == YUV_420 ? 8 : 16) * pSC->WMIBI.cbStride / sizeof(I32);

        switch(pSC->m_param.cfColorFormat){
        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            {
                PixelI * pChannel[16];
                size_t iChannel;

                const size_t cChannel = pSC->WMII.cfColorFormat == Y_ONLY ? 1 : pSC->WMISCP.cChannel;
                assert(cChannel <= 16);

                for(iChannel = 0; iChannel < cChannel; iChannel ++)
                    pChannel[iChannel & 15] = pSC->a0MBbuffer[iChannel];

                for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                    I32 * pRow = pDst;
                    for(iColumn = iFirstColumn; iColumn < cWidth; iColumn ++){
                        for(iChannel = 0; iChannel < cChannel; iChannel ++){
                            PixelI p = pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]];

                            *pRow++ = p;
                        }
                    }
                    pDst += pSC->WMIBI.cbStride / sizeof(I32);
                }
            }
            break;

        case YUV_422:
            {
				PixelI y0, y1, u, v;
	
				for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                    I32 * pRow = pDst;
					for(iColumn = iFirstColumn; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 4) << 7) + idxCC[iRow][(iColumn >> 1) & 7];
						u = pU[iIdx], v = pV[iIdx];
	
						y0 = pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]];
						y1 = pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]];
						
						pRow[0] = u, pRow[1] = y0, pRow[2] = v, pRow[3] = y1;
                        pRow += 4;
					}
                    pDst += pSC->WMIBI.cbStride / sizeof(I32);
				}
			}
            break;

        case YUV_420:
			{
				PixelI y0, y1, y2, y3, u, v;
				// const size_t iS4[8][4] = {{0, 1, 2, 3}, {2, 3, 0, 1}, {1, 0, 3, 2}, {3, 2, 1, 0}, {1, 3, 0, 2}, {3, 1, 2, 0}, {0, 2, 1, 3}, {2, 0, 3, 1}};
	
				for(iRow = iFirstRow; iRow < cHeight; iRow += 2){
                    I32 * pRow = pDst;
					for(iColumn = iFirstColumn; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 4) << 6) + idxCC_420[iRow >> 1][(iColumn >> 1) & 7];
						u = pU[iIdx], v = pV[iIdx];
	
						y0 = pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]];
						y1 = pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]];
						y2 = pY[((iColumn >> 4) << 8) + idxCC[iRow + 1][iColumn & 15]];
						y3 = pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow + 1][(iColumn + 1) & 15]];
	
						pRow[0] = y0, pRow[1] = y1, pRow[2] = y2, pRow[3] = y3, pRow[4] = u, pRow[5] = v;
                        pRow += 6;
					}
                    pDst += pSC->WMIBI.cbStride / sizeof(I32);
				}
			}
            break;

        default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_8){
        U8 * pDst;
        const PixelI iBias1 = 128 << iShift;
        const PixelI iBias2 = pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0;
        const PixelI iBias = iBias1 + iBias2;

        switch(cfExt){
        case CF_RGB:
        {
            PixelI r, g, b, a;

            if (pSC->m_pNextSC && pSC->WMISCP.uAlphaMode > 0) { // RGBA

                pA = pSC->m_pNextSC->a0MBbuffer[0];

                if (pSC->m_param.bScaledArith == FALSE) {
                    for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                        for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                            iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                            
                            g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                            a = pA[iIdx] + iBias;

                            _ICC(r, g, b);
                            
                            pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                            if ((g | b | r | a) & ~0xff)
                                pDst[iR] = _CLIP8(r), pDst[1] = _CLIP8(g), pDst[iB] = _CLIP8(b), pDst[3] = _CLIP8(a);
                            else
                                pDst[iR] = (U8)r, pDst[1] = (U8)g, pDst[iB] = (U8)b, pDst[3] = (U8)(a);
                        }
                }
                else{
                    for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                        for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                            iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                            
                            g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                            a = pA[iIdx] + iBias;

                            _ICC(r, g, b);

                            g >>= iShift, b >>= iShift, r >>= iShift, a >>= iShift;
                            pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                            if ((g | b | r | a) & ~0xff)
                                pDst[iR] = _CLIP8(r), pDst[1] = _CLIP8(g), pDst[iB] = _CLIP8(b), pDst[3] = _CLIP8(a);
                            else
                                pDst[iR] = (U8)r, pDst[1] = (U8)g, pDst[iB] = (U8)b, pDst[3] = (U8)(a);
                        }
                }
            }
            else {
                if (pSC->m_param.bScaledArith == FALSE) {
                    for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                        for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                            iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                            
                            g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

                            _ICC(r, g, b);
                            
                            pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                            if ((g | b | r) & ~0xff)
                                pDst[iR] = _CLIP8(r), pDst[1] = _CLIP8(g), pDst[iB] = _CLIP8(b);
                            else
                                pDst[iR] = (U8)r, pDst[1] = (U8)g, pDst[iB] = (U8)b;
                        }
                }
                else{
                    for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                        for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                            iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                            
                            g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

                            _ICC(r, g, b);

                            g >>= iShift, b >>= iShift, r >>= iShift;
                            pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                            if ((g | b | r) & ~0xff)
                                pDst[iR] = _CLIP8(r), pDst[1] = _CLIP8(g), pDst[iB] = _CLIP8(b);
                            else
                                pDst[iR] = (U8)r, pDst[1] = (U8)g, pDst[iB] = (U8)b;
                        }
                }
            }
            break;
        }

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;

        case YUV_422:
			{
				PixelI y0, y1, u, v;
				// const ORIENTATION oO = pSC->WMII.oOrientation;
				// const size_t i0 = ((oO > O_FLIPV && oO <= O_RCW_FLIPVH) ? 1 : 0), i1 = 1 - i0;
	
				for(iRow = iFirstRow; iRow < cHeight; iRow ++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 4) << 7) + idxCC[iRow][(iColumn >> 1) & 7];
						u = ((pU[iIdx] + iBias) >> iShift), v = ((pV[iIdx] + iBias) >> iShift);
	
						y0 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
						y1 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]] + iBias) >> iShift);
						
						pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> 1] + iY;
						if ((y0 | y1 | u | v) & ~0xff)//UYVY
							pDst[0] = _CLIP8(u), pDst[1] = _CLIP8(y0), pDst[2] = _CLIP8(v), pDst[3] = _CLIP8(y1);
						else
							pDst[0] = (U8)u, pDst[1] = (U8)y0, pDst[2] = (U8)v, pDst[3] = (U8)y1;
					}
				}
			}
			break;

        case YUV_420:
			{
				PixelI y0, y1, y2, y3, u, v;
				const size_t iS4[8][4] = {{0, 1, 2, 3}, {2, 3, 0, 1}, {1, 0, 3, 2}, {3, 2, 1, 0}, {1, 3, 0, 2}, {3, 1, 2, 0}, {0, 2, 1, 3}, {2, 0, 3, 1}};
				const ORIENTATION oO = pSC->WMII.oOrientation;
				const size_t i0 = iS4[oO][0], i1 = iS4[oO][1], i2 = iS4[oO][2], i3 = iS4[oO][3];
	
				for(iRow = iFirstRow; iRow < cHeight; iRow += 2){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> 1]; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 4) << 6) + idxCC_420[iRow >> 1][(iColumn >> 1) & 7];
						u = ((pU[iIdx] + iBias) >> iShift), v = ((pV[iIdx] + iBias) >> iShift);
	
						y0 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift);
						y1 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]] + iBias) >> iShift);
						y2 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow + 1][iColumn & 15]] + iBias) >> iShift);
						y3 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow + 1][(iColumn + 1) & 15]] + iBias) >> iShift);
	
						pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> 1] + iY;
						if ((y0 | y1 | y2 | y3 | u | v) & ~0xff)
							pDst[i0] = _CLIP8(y0), pDst[i1] = _CLIP8(y1), pDst[i2] = _CLIP8(y2), pDst[i3] = _CLIP8(y3), pDst[4] = _CLIP8(u), pDst[5] = _CLIP8(v);
						else
							pDst[i0] = (U8)y0, pDst[i1] = (U8)y1, pDst[i2] = (U8)y2, pDst[i3] = (U8)y3, pDst[4] = (U8)u, pDst[5] = (U8)v;
					}
				}
			}
			break;

        case CMYK:
			{
				PixelI c, m, y, k;
				PixelI * pK = pSC->a0MBbuffer[3];
	
				for(iRow = iFirstRow; iRow < cHeight; iRow++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
	
						m = -pY[iIdx] + iBias1, c = pU[iIdx], y = -pV[iIdx], k = pK[iIdx] + iBias2;
						
						_ICC_CMYK(c, m, y, k); // color conversion
	
						c >>= iShift, m >>= iShift, y >>= iShift, k >>= iShift;
	
						pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						if ((c | m | y | k) & ~0xff)
							pDst[0] = _CLIP8(c), pDst[1] = _CLIP8(m), pDst[2] = _CLIP8(y), pDst[3] = _CLIP8(k);
						else
							pDst[0] = (U8)c, pDst[1] = (U8)m, pDst[2] = (U8)y, pDst[3] = (U8)k;
					}
				}
			}
			break;

        case CF_RGBE:
			{
				PixelI r, g, b;
				
				for(iRow = iFirstRow; iRow < cHeight; iRow ++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
							iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
							
							g = pY[iIdx] + iBias2, r = -pU[iIdx], b = pV[iIdx];
	
							_ICC(r, g, b);
	
							pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
	
							inverseConvertRGBE (r >> iShift, g >> iShift, b >> iShift, pDst, pDst + 1, pDst + 2, pDst + 3);
						}
				}
			}
			break;

        default:
            assert(0);
            break;
    }
    }
    else if(bd == BD_16){
        const PixelI iBias = (((1 << 15) >> nLen) << iShift) + (iShift == 0 ? 0 : (1 << (iShift - 1)));
        U16 * pDst;

        switch(cfExt){
        case CF_RGB:
        {
            PixelI r, g, b;
			if (pSC->m_param.bScaledArith == FALSE) {
				for(iRow = iFirstRow; iRow < cHeight; iRow ++)
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
						
						g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

						_ICC(r, g, b);

						g <<= nLen, b <<= nLen, r <<= nLen;
						
						pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						
						if ((g | b | r) & ~0xffff)
							pDst[0] = _CLIPU16(r),  pDst[1] = _CLIPU16(g), pDst[2] = _CLIPU16(b);
						else
							pDst[0] = (U16)r, pDst[1] = (U16)g, pDst[2] = (U16)b;
					}
			}
			else{
				for(iRow = iFirstRow; iRow < cHeight; iRow ++)
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
						
						g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

						_ICC(r, g, b);

						g = (g >> iShift) << nLen, b = (b >> iShift) << nLen, r = (r >> iShift) << nLen;
						pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						if ((g | b | r) & ~0xffff)
							pDst[0] = _CLIPU16(r),  pDst[1] = _CLIPU16(g), pDst[2] = _CLIPU16(b);
						else
							pDst[0] = (U16)r, pDst[1] = (U16)g, pDst[2] = (U16)b;
					}
			}
            break;
        }

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;

        case YUV_422:
			{
				PixelI y0, y1, u, v;
				const ORIENTATION oO = pSC->WMII.oOrientation;
				const size_t i0 = ((oO == O_FLIPH || oO == O_FLIPVH || oO == O_RCW_FLIPV || oO == O_RCW_FLIPVH) ? 1 : 0), i1 = 1 - i0;
	
				for(iRow = iFirstRow; iRow < cHeight; iRow ++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 4) << 7) + idxCC[iRow][(iColumn >> 1) & 7];
						u = ((pU[iIdx] + iBias) >> iShift) << nLen, v = ((pV[iIdx] + iBias) >> iShift) << nLen;
	
						y0 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift) << nLen;
						y1 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]] + iBias) >> iShift) << nLen;
						
						pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> 1] + iY;
						if ((y0 | y1 | u | v) & ~0xffff)
							{
								pDst[i0] = _CLIPU16(u);
								pDst[i1] = _CLIPU16(y0); 
								pDst[2] = _CLIPU16(v); 
								pDst[3] = _CLIPU16(y1);
							}
						else
							{
								pDst[i0] = (U16)(u);
								pDst[i1] = (U16)(y0);
								pDst[2] = (U16)(v); 
								pDst[3] = (U16)(y1);
							}
					}
				}
			}
			break;

        case YUV_420:
			{
				PixelI y0, y1, y2, y3, u, v;
				const size_t iS4[8][4] = {{0, 1, 2, 3}, {2, 3, 0, 1}, {1, 0, 3, 2}, {3, 2, 1, 0}, {1, 3, 0, 2}, {3, 1, 2, 0}, {0, 2, 1, 3}, {2, 0, 3, 1}};
				const ORIENTATION oO = pSC->WMII.oOrientation;
				const size_t i0 = iS4[oO][0], i1 = iS4[oO][1], i2 = iS4[oO][2], i3 = iS4[oO][3];
	
				for(iRow = iFirstRow; iRow < cHeight; iRow += 2){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> 1]; iColumn < cWidth; iColumn += 2){
						iIdx = ((iColumn >> 3) << 6) + idxCC[iRow][(iColumn >> 1) & 7];
						u = ((pU[iIdx] + iBias) >> iShift) << nLen, v = ((pV[iIdx] + iBias) >> iShift) << nLen;
	
						y0 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iBias) >> iShift) << nLen;
						y1 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow][(iColumn + 1) & 15]] + iBias) >> iShift) << nLen;
						y2 = ((pY[((iColumn >> 4) << 8) + idxCC[iRow + 1][iColumn & 15]] + iBias) >> iShift) << nLen;
						y3 = ((pY[(((iColumn + 1) >> 4) << 8) + idxCC[iRow + 1][(iColumn + 1) & 15]] + iBias) >> iShift) << nLen;
	
						pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> 1] + iY;
						if ((y0 | y1 | y2 | y3 | u | v) & ~0xffff)
							{
								pDst[i0] = _CLIPU16(y0); 
								pDst[i1] = _CLIPU16(y1); 
								pDst[i2] = _CLIPU16(y2); 
								pDst[i3] = _CLIPU16(y3); 
								pDst[4] = _CLIPU16(u);
								pDst[5] = _CLIPU16(v);
							}
						else
							{
								pDst[i0] = (U16)(y0);
								pDst[i1] = (U16)(y1);
								pDst[i2] = (U16)(y2);
								pDst[i3] = (U16)(y3);
								pDst[4] = (U16)(u);
								pDst[5] = (U16)(v);
							}
					}
				}
			}
			break;

        case CMYK:
			{
				PixelI c, m, y, k;
				PixelI * pK = pSC->a0MBbuffer[3];
				const PixelI iBias1 = (32768 >> nLen) << iShift;
				const PixelI iBias2 = iBias - iBias1;
	
				for(iRow = iFirstRow; iRow < cHeight; iRow++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
	
						m = -pY[iIdx] + iBias1, c = pU[iIdx], y = -pV[iIdx], k = pK[iIdx] + iBias2;
						
						_ICC_CMYK(c, m, y, k); // color conversion
	
						c = (c >> iShift) << nLen, m = (m >> iShift) << nLen, y = (y >> iShift) << nLen, k = (k >> iShift) << nLen;
	
						pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						if ((c | m | y | k) & ~0xffff)
							pDst[0] = _CLIPU16(c), pDst[1] = _CLIPU16(m), pDst[2] = _CLIPU16(y), pDst[3] = _CLIPU16(k);
						else
							pDst[0] = (U16)(c), pDst[1] = (U16)(m), pDst[2] = (U16)(y), pDst[3] = (U16)(k);
						}
				}
			}
			break; 
        default:
            assert(0);
            break;
    }
    }
    else if(bd == BD_16S){
        const PixelI iBias = pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0;
        I16 * pDst;

        switch(cfExt){
        case CF_RGB:
        {
            PixelI r, g, b;
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];

                    g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                    
                    _ICC(r, g, b);
                    
                    r = (r >> iShift) << nLen, g = (g >> iShift) << nLen, b = (b >> iShift) << nLen;
                    
                    pDst = (I16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                    pDst[0] = _CLIP16(r), pDst[1] = _CLIP16(g), pDst[2] = _CLIP16(b);
                }
            break;
        }

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;

        case CMYK:
			{
				PixelI c, m, y, k;
				PixelI * pK = pSC->a0MBbuffer[3];
	
				for(iRow = iFirstRow; iRow < cHeight; iRow++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
	
						m = -pY[iIdx], c = pU[iIdx], y = -pV[iIdx], k = pK[iIdx] + iBias;
						
						_ICC_CMYK(c, m, y, k); // color conversion
	
						c = (c >> iShift) << nLen, m = (m >> iShift) << nLen, y = (y >> iShift) << nLen, k = (k >> iShift) << nLen;
	
						pDst = (I16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						pDst[0] = (I16)(c), pDst[1] = (I16)(m), pDst[2] = (I16)(y), pDst[3] = (I16)(k);
					}
				}
			}
			break;

        default:
            assert(0);
            break;
    }
    }
    else if(bd == BD_16F){
        const PixelI iBias = pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0;
        U16 *pDst;

        switch (cfExt)
        {
        case CF_RGB:
        {
            PixelI r, g, b;
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                    
                    g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                    
                    _ICC(r, g, b);
                                        
                    pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                    pDst[0] = backwardHalf(r >> iShift);
                    pDst[1] = backwardHalf(g >> iShift);
                    pDst[2] = backwardHalf(b >> iShift);
                }
            }
            break;
        }

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;

        default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_32){
        const PixelI iBias = (((1 << 31) >> nLen) << iShift) + (iShift == 0 ? 0 : (1 << (iShift - 1)));
        U32 * pDst;

        switch (cfExt)
        {
        case CF_RGB:
			{
				PixelI r, g, b;
				
				for(iRow = iFirstRow; iRow < cHeight; iRow ++){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
						iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
						
						g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
	
						_ICC(r, g, b);
						
						pDst = (U32 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
						pDst[0] = ((r >> iShift) << nLen);
						pDst[1] = ((g >> iShift) << nLen);
						pDst[2] = ((b >> iShift) << nLen);
					}
				}
			}
			break;

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
        {
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;    
        }
        default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_32S){
        const PixelI iBias = pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0;
        int * pDst;

        switch (cfExt)
        {
        case CF_RGB:
        {
            PixelI r, g, b;
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                    
                    g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                    
                    _ICC(r, g, b);
                                        
                    pDst = (int *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                    pDst[0] = ((r >> iShift) << nLen);
                    pDst[1] = ((g >> iShift) << nLen);
                    pDst[2] = ((b >> iShift) << nLen);
                }
            }
            break;
        }

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;    

		default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_32F){
        const PixelI iBias = pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0;
        float * pDst;

        switch (cfExt)
        {
        case CF_RGB:
        {
            PixelI r, g, b;
            
            for(iRow = iFirstRow; iRow < cHeight; iRow ++){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                    iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                    
                    g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];
                    
                    _ICC(r, g, b);
                                        
                    pDst = (float *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                    pDst[0] = pixel2float (r >> iShift, nExpBias, nLen);
                    pDst[1] = pixel2float (g >> iShift, nExpBias, nLen);
                    pDst[2] = pixel2float (b >> iShift, nExpBias, nLen);
                }
            }
            break;
        }
        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannel(pSC, iFirstRow, iFirstColumn, cWidth, cHeight, iShift, iBias);
            break;    

        default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_5){
        const PixelI iBias = (16 << iShift) + (pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0);
        PixelI r, g, b;
        U16 * pDst;

        assert(cfExt == CF_RGB);

        for(iRow = iFirstRow; iRow < cHeight; iRow ++)
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                
                g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

                _ICC(r, g, b);
                
                g >>= iShift, b >>= iShift, r >>= iShift;
                pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                if (pSC->m_param.bRBSwapped)
                    pDst[0] = (U16)_CLIP2(0, b, 31) + (((U16)_CLIP2(0, g, 31)) << 5) + (((U16)_CLIP2(0, r, 31)) << 10);
                else
                    pDst[0] = (U16)_CLIP2(0, r, 31) + (((U16)_CLIP2(0, g, 31)) << 5) + (((U16)_CLIP2(0, b, 31)) << 10);
            }
    }
    else if(bd == BD_565){
        const PixelI iBias = (32 << iShift) + (pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0);
        PixelI r, g, b;
        U16 * pDst;

        assert(cfExt == CF_RGB);

        for(iRow = iFirstRow; iRow < cHeight; iRow ++)
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                
                g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

                _ICC(r, g, b);
                
                g >>= iShift, b >>= iShift + 1, r >>= iShift + 1;
                pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                if (pSC->m_param.bRBSwapped)
                    pDst[0] = (U16)_CLIP2(0, b, 31) + (((U16)_CLIP2(0, g, 63)) << 5) + (((U16)_CLIP2(0, r, 31)) << 11);
                else
                    pDst[0] = (U16)_CLIP2(0, r, 31) + (((U16)_CLIP2(0, g, 63)) << 5) + (((U16)_CLIP2(0, b, 31)) << 11);
            }
    }
    else if(bd == BD_10){
        const PixelI iBias = (512 << iShift) + (pSC->m_param.bScaledArith ? ((1 << (SHIFTZERO + QPFRACBITS - 1)) - 1) : 0);
        PixelI r, g, b;
        U32 * pDst;

        assert(cfExt == CF_RGB);

        for(iRow = iFirstRow; iRow < cHeight; iRow ++)
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){
                iIdx = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                
                g = pY[iIdx] + iBias, r = -pU[iIdx], b = pV[iIdx];

                _ICC(r, g, b);
                
                g >>= iShift, b >>= iShift, r >>= iShift;

                pDst = (U32 *)pSC->WMIBI.pv + pOffsetX[iColumn] + iY;
                if (pSC->m_param.bRBSwapped)
                    pDst[0] = (U32)_CLIP2(0, b, 1023) + 
                        (((U32)_CLIP2(0, g, 1023)) << 10) + 
                        (((U32)_CLIP2(0, r, 1023)) << 20);
                else
                    pDst[0] = (U32)_CLIP2(0, r, 1023) + 
                        (((U32)_CLIP2(0, g, 1023)) << 10) + 
                        (((U32)_CLIP2(0, b, 1023)) << 20);
            }
    }
    else if(bd == BD_1){
        const size_t iPos = pSC->WMII.cLeadingPadding;
        const Int iTh = (iShift > 0) ? (1 << (iShift - 1)) : 1;
        assert(cfExt == Y_ONLY && pSC->m_param.cfColorFormat == Y_ONLY);
        
        if(pSC->WMII.oOrientation < O_RCW)
            for(iRow = iFirstRow; iRow < cHeight; iRow ++) {
                iY = pOffsetY[iRow] + iPos;
                for(iColumn = iFirstColumn; iColumn < cWidth; iColumn ++) {
                    U8 cByte = ((U8 *)pSC->WMIBI.pv + (pOffsetX[iColumn] >> 3) + iY)[0];
                    U8 cShift = (U8)(7 - (pOffsetX[iColumn] & 7));
                    ((U8 *)pSC->WMIBI.pv + (pOffsetX[iColumn] >> 3) + iY)[0] ^= // exor is used because we can't assume the byte was originally zero
                    (((pSC->WMISCP.bBlackWhite + (pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] >= iTh)
                    + (cByte >> cShift)) & 0x1) << cShift);
                }
            }
        else
            for(iRow = iFirstRow; iRow < cHeight; iRow ++) {
                iY = pOffsetY[iRow] + iPos;
                for(iColumn = iFirstColumn; iColumn < cWidth; iColumn ++) {
                    U8 cByte = ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + (iY >> 3))[0];
                    U8 cShift = (U8)(7 - (iY & 7));  // should be optimized out
                    ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn] + (iY >> 3))[0] ^= // exor is used because we can't assume the byte was originally zero
                    (((pSC->WMISCP.bBlackWhite + (pY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] >= iTh)
                    + (cByte >> cShift)) & 0x1) << cShift);
                }
            }
    }

    if(pSC->WMISCP.uAlphaMode > 0)
        if(outputMBRowAlpha(pSC) != ICERR_OK)
            return ICERR_ERROR;

#ifdef REENTRANT_MODE
    pSC->WMIBI.cLinesDecoded = cHeight - iFirstRow;

    if (CF_RGB == pSC->WMII.cfColorFormat && Y_ONLY == pSC->WMISCP.cfColorFormat)
    {
        const CWMImageInfo* pII = &pSC->WMII;

#define fixupFullSize(type, nCh) \
for(iRow = iFirstRow; iRow < cHeight; iRow ++) {\
    size_t iY;\
    for(iColumn = iFirstColumn, iY = pOffsetY[iRow]; iColumn < cWidth; iColumn ++){\
        type *pT = (type*)(U8 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn];\
        pT[2] = pT[1] = pT[0]; \
        pT += nCh; \
    } \
} \
break

        switch (pII->bdBitDepth)
        {
            case BD_8:
                fixupFullSize(U8, (pII->cBitsPerUnit >> 3));
                break;

            case BD_16:
            case BD_16S:
            case BD_16F:
                fixupFullSize(U16, (pII->cBitsPerUnit >> 3) / sizeof(U16));
                break;

            case BD_32:
            case BD_32S:
            case BD_32F:
                fixupFullSize(U32, (pII->cBitsPerUnit >> 3) / sizeof(float));
                break;

            case BD_5:
            case BD_10:
            case BD_565:
            default:
                break;
        }
    }
#endif

    return ICERR_OK;
}

// Y_ONLY/CF_ALPHA/YUV_444/N_CHANNEL thumbnail decode
Void outputNChannelThumbnail(CWMImageStrCodec * pSC, const PixelI cMul, const size_t rShiftY, size_t iFirstRow, size_t iFirstColumn)
{
    const size_t tScale = pSC->m_Dparam->cThumbnailScale;
    const size_t cWidth = (pSC->m_Dparam->cROIRightX + 1);
    const size_t cHeight = min((pSC->m_Dparam->cROIBottomY + 1) - (pSC->cRow - 1) * 16, 16);
    const size_t cChannel = pSC->WMISCP.cChannel;
    const U8 nLen = pSC->WMISCP.nLenMantissaOrShift;
    const I8 nExpBias = pSC->WMISCP.nExpBias;
    size_t nBits = 0;
    PixelI iOffset;
    PixelI * pChannel[16];
    size_t iChannel, iRow, iColumn;
    size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * 16 / tScale, iY;

    while((size_t)(1U << nBits) < tScale)
        nBits ++;

    assert(cChannel <= 16);

    for(iChannel = 0; iChannel < cChannel; iChannel ++)
        pChannel[iChannel & 15] = pSC->a0MBbuffer[iChannel];

    if(pSC->m_bUVResolutionChange)
        pChannel[1] = pSC->pResU, pChannel[2] = pSC->pResV;

    switch(pSC->WMII.bdBitDepth){
        case BD_8:
            for(iOffset = (128 << rShiftY) / cMul, iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    U8 * pDst = (U8 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iOffset) * cMul) >> rShiftY;
                        
                        pDst[iChannel] = _CLIP8(p);
                    }
                }
            }
            break;

        case BD_16:
            for(iOffset = (32768 << rShiftY) / cMul, iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    U16 * pDst = (U16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = (((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iOffset) * cMul) >> rShiftY) << nLen;
                        
                        pDst[iChannel] = _CLIPU16(p);
                    }
                }
            }
            break;

        case BD_16S:
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    I16 * pDst = (I16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] * cMul) >> rShiftY) << nLen;
                        
                        pDst[iChannel] = _CLIP16(p);
                    }
                }
            }
            break;

        case BD_16F:
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    U16 * pDst = (U16 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = (pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] * cMul) >> rShiftY;
                        
                        pDst[iChannel] = backwardHalf(p);
                    }
                }
            }
            break;
        case BD_32:
            for(iOffset = (((1 << 31) >> nLen) << rShiftY) / cMul, iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    U32 * pDst = (U32 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = (((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] + iOffset) * cMul) >> rShiftY) << nLen;
                        
                        pDst[iChannel] = (U32)(p);
                    }
                }
            }
            break;
        case BD_32S:
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    I32 * pDst = (I32 *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = ((pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] * cMul) >> rShiftY) << nLen;
                        
                        pDst[iChannel] = (I32)(p);
                    }
                }
            }
            break;
        case BD_32F:
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    float * pDst = (float *)pSC->WMIBI.pv + iY + pOffsetX[iColumn >> nBits];

                    for(iChannel = 0; iChannel < cChannel; iChannel ++){
                        PixelI p = (pChannel[iChannel & 15][((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] * cMul) >> rShiftY;
                        
                        pDst[iChannel] = pixel2float (p, nExpBias, nLen);
                    }
                }
            }
            break;

        default:
            assert(0);
            break;
    }
}

// centralized alpha channel thumbnail, small perf penalty
Int decodeThumbnailAlpha(CWMImageStrCodec * pSC, const size_t nBits, const PixelI cMul, const size_t rShiftY)
{
    if(pSC->m_bSecondary == FALSE && pSC->m_pNextSC != NULL){ // with alpha channel
        const size_t tScale = (size_t)(1U << nBits);
        const size_t cHeight = min((pSC->m_Dparam->cROIBottomY + 1) - (pSC->cRow - 1) * 16, 16);
        const size_t cWidth = (pSC->m_Dparam->cROIRightX + 1);
        const size_t iFirstRow = ((((pSC->cRow - 1) * 16 > pSC->m_Dparam->cROITopY ? 0 : (pSC->m_Dparam->cROITopY & 0xf)) + tScale - 1) / tScale * tScale);
        const size_t iFirstColumn = (pSC->m_Dparam->cROILeftX + tScale - 1) / tScale * tScale;
        const size_t iAlphaPos = pSC->WMII.cLeadingPadding + (pSC->WMII.cfColorFormat == CMYK ? 4 : 3);//only RGB and CMYK may have interleaved alpha
        const BITDEPTH_BITS bd = pSC->WMII.bdBitDepth;
        const PixelI * pSrc = pSC->m_pNextSC->a0MBbuffer[0];
        const U8 nLen = pSC->m_pNextSC->WMISCP.nLenMantissaOrShift;
        const I8 nExpBias = pSC->m_pNextSC->WMISCP.nExpBias;
        size_t iRow, iColumn;
        size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * 16 / tScale, iY;
        
        if (CF_RGB != pSC->WMII.cfColorFormat && CMYK != pSC->WMII.cfColorFormat)
            return ICERR_ERROR;

        if(bd == BD_8){
            const PixelI offset = (128 << rShiftY) / cMul;

            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = ((pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + offset) * cMul) >> rShiftY;
                    
                    ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = _CLIP8(a);
                }
        }
        else if(bd == BD_16){
            const PixelI offset = (32768 << rShiftY) / cMul;

            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = (((pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] + offset) * cMul) >> rShiftY) << nLen;

                    ((U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = _CLIPU16(a);
                }
        }
        else if(bd == BD_16S){
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = ((pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] * cMul) >> rShiftY) << nLen;

                    ((I16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = _CLIP16(a);
                }
        }
        else if(bd == BD_16F){
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = (pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] * cMul) >> rShiftY;

                    ((U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = backwardHalf(a);
                }
        }
        else if(bd == BD_32S){
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = ((pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] * cMul) >> rShiftY) << nLen;

                    ((I32 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = a;
                }
        }
        else if(bd == BD_32F){
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    PixelI a = (pSrc[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf]] * cMul) >> rShiftY;

                    ((float *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY)[iAlphaPos] = pixel2float (a, nExpBias, nLen);
                }
        }
        else // not supported
            return ICERR_ERROR;
    }

    return ICERR_OK;
}

Int decodeThumbnail(CWMImageStrCodec * pSC)
{
    const size_t tScale = pSC->m_Dparam->cThumbnailScale;
    const size_t cHeight = min((pSC->m_Dparam->bDecodeFullFrame ? pSC->WMII.cHeight : pSC->m_Dparam->cROIBottomY + 1) - (pSC->cRow - 1) * 16, 16);
    const size_t cWidth = (pSC->m_Dparam->bDecodeFullFrame ? pSC->WMII.cWidth : pSC->m_Dparam->cROIRightX + 1);
    const size_t iFirstRow = ((((pSC->cRow - 1) * 16 > pSC->m_Dparam->cROITopY ? 0 : (pSC->m_Dparam->cROITopY & 0xf)) + tScale - 1) / tScale * tScale);
    const size_t iFirstColumn = (pSC->m_Dparam->cROILeftX + tScale - 1) / tScale * tScale;
    const COLORFORMAT cfInt = pSC->m_param.cfColorFormat;
    const COLORFORMAT cfExt = (pSC->m_param.cfColorFormat == Y_ONLY ? Y_ONLY : pSC->WMII.cfColorFormat);
    const BITDEPTH_BITS bd = pSC->WMII.bdBitDepth;
    const OVERLAP ol = pSC->WMISCP.olOverlap;
	const size_t iB = (pSC->WMII.bRGB ? 2 : 0);
    const size_t iR = 2 - iB;

    const U8 nLen = pSC->WMISCP.nLenMantissaOrShift;
    const I8 nExpBias = pSC->WMISCP.nExpBias;
    PixelI offset;
    size_t iRow, iColumn, iIdx1, iIdx2, iIdx3 = 0, nBits = 0;
    PixelI * pSrcY = pSC->a0MBbuffer[0];
    PixelI * pSrcU = pSC->a0MBbuffer[1], * pSrcV = pSC->a0MBbuffer[2];
    size_t * pOffsetX = pSC->m_Dparam->pOffsetX, * pOffsetY = pSC->m_Dparam->pOffsetY + (pSC->cRow - 1) * 16 / tScale, iY;
    const PixelI cMul = (tScale >= 16 ? (ol == OL_NONE ? 16 : (ol == OL_ONE ? 23 : 34)) : (tScale >= 4 ? (ol == OL_NONE ? 64 : 93) : 258));
    const size_t rShiftY = 8 + (pSC->m_param.bScaledArith ? (SHIFTZERO + QPFRACBITS) : 0);
    const size_t rShiftUV = rShiftY - ((pSC->m_param.bScaledArith && tScale >= 16) ? ((cfInt == YUV_420 || cfInt == YUV_422) ? 2 : 1) : 0);

    while((size_t)(1U << nBits) < tScale)
        nBits ++;

    assert(tScale == (size_t)(1U << nBits));

    // guard output buffer
    if(checkImageBuffer(pSC, pSC->WMII.oOrientation < O_RCW ? pSC->WMII.cROIWidth : pSC->WMII.cROIHeight, (cHeight - iFirstRow) / pSC->m_Dparam->cThumbnailScale) != ICERR_OK)
        return ICERR_ERROR;

    if((((pSC->cRow - 1) * 16) % tScale) != 0)
        return ICERR_OK;

    if(pSC->cRow * 16 <= pSC->m_Dparam->cROITopY || pSC->cRow * 16 > pSC->m_Dparam->cROIBottomY + 16)
        return ICERR_OK;
    
    if((cfInt == YUV_422 || cfInt == YUV_420) && cfExt != Y_ONLY){
        PixelI * pDstU = pSC->pResU, * pDstV = pSC->pResV;

        for(iRow = 0; iRow < 16; iRow += tScale){
            for(iColumn = 0; iColumn < cWidth; iColumn += tScale){
                iIdx1 = (cfInt == YUV_422 ? ((iColumn >> 4) << 7) + idxCC[iRow][(iColumn >> 1) & 7] : ((iColumn >> 4) << 6) + idxCC_420[iRow >> 1][(iColumn >> 1) & 7]);
                iIdx2 = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];

                // copy over
                pDstU[iIdx2] = pSrcU[iIdx1];
                pDstV[iIdx2] = pSrcV[iIdx1];
            }
        }

        if(tScale == 4){
            if(cfInt == YUV_420){
                for(iColumn = 0; iColumn < cWidth; iColumn += 8){
                    iIdx1 = ((iColumn >> 4) << 8) + idxCC[0][iColumn & 15];
                    iIdx2 = ((iColumn >> 4) << 8) + idxCC[4][iColumn & 15];
                    iIdx3 = ((iColumn >> 4) << 8) + idxCC[8][iColumn & 15];

                    pDstU[iIdx2] = ((pDstU[iIdx1] + pDstU[iIdx3] + 1) >> 1);
                    pDstV[iIdx2] = ((pDstV[iIdx1] + pDstV[iIdx3] + 1) >> 1);

                    iIdx1 = ((iColumn >> 4) << 8) + idxCC[12][iColumn & 15];
                    pDstU[iIdx1] = pDstU[iIdx3];
                    pDstV[iIdx1] = pDstV[iIdx3];
                }
            }

            for(iRow = 0; iRow < 16; iRow += 4){
                for(iColumn = 0; iColumn < cWidth - 8; iColumn += 8){
                    iIdx1 = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15];
                    iIdx2 = ((iColumn >> 4) << 8) + idxCC[iRow][(iColumn + 4) & 15];
                    iIdx3 = ((iColumn >> 4) << 8) + idxCC[iRow][(iColumn + 8) & 15];

                    pDstU[iIdx2] = ((pDstU[iIdx1] + pDstU[iIdx3] + 1) >> 1);
                    pDstV[iIdx2] = ((pDstV[iIdx1] + pDstV[iIdx3] + 1) >> 1);
                }

                iIdx2 = ((iColumn >> 4) << 8) + idxCC[iRow][(iColumn + 4) & 15];
                pDstU[iIdx2] = pDstU[iIdx3];
                pDstV[iIdx2] = pDstV[iIdx3];
            }
        }

        pSrcU = pDstU, pSrcV = pDstV;
    }

    if(bd == BD_8){
        U8 * pDst;

        offset = (128 << rShiftY) / cMul;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);

                        pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        pDst[iB] = _CLIP8(b), pDst[1] = _CLIP8(g), pDst[iR] = _CLIP8(r);
                }
            }
            break;

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

        case CF_RGBE:
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                    PixelI g = ((pSrcY[iPos] * cMul) >> rShiftY), r = - ((pSrcU[iPos] * cMul) >> rShiftUV), b = ((pSrcV[iPos] * cMul) >> rShiftUV);
                    
                    _ICC(r, g, b);
                    
                    pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                    inverseConvertRGBE (r, g, b, pDst, pDst + 1, pDst + 2, pDst + 3);
                }
            }
            break;

        case CMYK:
        {
            PixelI * pSrcK = pSC->a0MBbuffer[3];
            PixelI iBias1 = (128 << rShiftY) / cMul, iBias2 = (((128 << rShiftUV) / cMul) >> 1);

            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                    PixelI m = ((-pSrcY[iPos] + iBias1) * cMul) >> rShiftY, c = (pSrcU[iPos] * cMul) >> rShiftUV, y = -(pSrcV[iPos] * cMul) >> rShiftUV, k = ((pSrcK[iPos] + iBias2) * cMul) >> rShiftUV;
                    
                    _ICC_CMYK(c, m, y, k);
                    
                    pDst = (U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                    pDst[0] = _CLIP8(c), pDst[1] = _CLIP8(m), pDst[2] = _CLIP8(y), pDst[3] = _CLIP8(k);
                }
            }
            break;
        }
        default:
            assert(0);
            break;
        }
    }
    if(bd == BD_16){
        U16 * pDst;

        offset = (((1 << 15) >> nLen) << rShiftY) / cMul;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                                                
                        pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        r <<= nLen, g <<= nLen, b <<= nLen;
                        pDst[0] = _CLIPU16(r);
                        pDst[1] = _CLIPU16(g);
                        pDst[2] = _CLIPU16(b);
                }
            }
            break;

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

        case CMYK:
        {
            PixelI * pSrcK = pSC->a0MBbuffer[3];
            PixelI iBias1 = (32768 << rShiftY) / cMul, iBias2 = (((32768 << rShiftUV) / cMul) >> 1);

            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                    size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                    PixelI m = ((-pSrcY[iPos] + iBias1) * cMul) >> rShiftY, c = (pSrcU[iPos] * cMul) >> rShiftUV, y = -(pSrcV[iPos] * cMul) >> rShiftUV, k = ((pSrcK[iPos] + iBias2) * cMul) >> rShiftUV;
                    
                    _ICC_CMYK(c, m, y, k);
                    
                    pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                    c <<= nLen, m <<= nLen, y <<= nLen, k <<= nLen;
                    pDst[0] = _CLIPU16(c);
                    pDst[1] = _CLIPU16(m);
                    pDst[2] = _CLIPU16(y);
                    pDst[3] = _CLIPU16(k);
                }
            }
            break;
        }
        default:
            assert(0);
            break;
        }
    }
    if(bd == BD_16S){
        I16 * pDst;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = (pSrcY[iPos] * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                                                
                        pDst = (I16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        r <<= nLen, g <<= nLen, b <<= nLen;
                        pDst[0] = _CLIP16(r);
                        pDst[1] = _CLIP16(g);
                        pDst[2] = _CLIP16(b);
                }
            }
            break;

        case Y_ONLY:
        case YUV_444:
        case NCOMPONENT:
            outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

        case CMYK:
			{
				PixelI * pSrcK = pSC->a0MBbuffer[3];
	
				for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
					for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
						size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
						PixelI m = -(pSrcY[iPos] * cMul) >> rShiftY, c = (pSrcU[iPos] * cMul) >> rShiftUV, y = -(pSrcV[iPos] * cMul) >> rShiftUV, k = (pSrcK[iPos] * cMul) >> rShiftUV;
						
						_ICC_CMYK(c, m, y, k);
	
						pDst = (I16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
						c <<= nLen, m <<= nLen, y <<= nLen, k <<= nLen;
						pDst[0] = _CLIP16(c); 
						pDst[1] = _CLIP16(m);
						pDst[2] = _CLIP16(y);
						pDst[3] = _CLIP16(k);
					}
				}
			}
			break;

        default:
            assert(0);
            break;
        }
    }
    else if(bd == BD_16F){
        U16 * pDst;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = (pSrcY[iPos] * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                        
                        pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        pDst[0] = backwardHalf (r);
                        pDst[1] = backwardHalf (g);
                        pDst[2] = backwardHalf (b);
                    }
                }
                break;

            case Y_ONLY:
            case YUV_444:
            case NCOMPONENT:
                outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

            default:
                assert(0);
                break;
        }        
    }
    else if(bd == BD_32){
        U32 * pDst;

        offset = (((1 << 31) >> nLen) << rShiftY) / cMul;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                        
                        pDst = (U32 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;

                        pDst[0] = (U32)(r << nLen);
                        pDst[1] = (U32)(g << nLen);
                        pDst[2] = (U32)(b << nLen);
                    }
                }
                break;

            case Y_ONLY:
            case YUV_444:
            case NCOMPONENT:
                outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

            default:
                assert(0);
                break;
        }    
    }
    else if(bd == BD_32S){
        I32 * pDst;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = (pSrcY[iPos] * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                        
                        pDst = (I32 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        pDst[0] = (I32)(r << nLen);
                        pDst[1] = (I32)(g << nLen);
                        pDst[2] = (I32)(b << nLen);
                    }
                }
                break;

            case Y_ONLY:
            case YUV_444:
            case NCOMPONENT:
                outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
            break;

            default:
                assert(0);
                break;
        }        
    }

    else if(bd == BD_32F){
        float * pDst;

        switch(cfExt){
            case CF_RGB:
                for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
                    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                        size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                        PixelI g = (pSrcY[iPos] * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                        _ICC(r, g, b);
                        
                        pDst = (float *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                        pDst[0] = pixel2float (r, nExpBias, nLen);
                        pDst[1] = pixel2float (g, nExpBias, nLen);
                        pDst[2] = pixel2float (b, nExpBias, nLen);
                    }
                }
                break;

            case Y_ONLY:
            case YUV_444:
            case NCOMPONENT:
                outputNChannelThumbnail(pSC, cMul, rShiftY, iFirstRow, iFirstColumn);
                break;

            default:
                assert(0);
                break;
        }        
    }
    else if(bd == BD_1){
        const size_t iPos = pSC->WMII.cLeadingPadding;
        Bool bBW; 
        U8 cByte, cShift;
        assert(cfExt == Y_ONLY && pSC->m_param.cfColorFormat == Y_ONLY);        

        if(pSC->WMII.oOrientation < O_RCW){
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits] + iPos; iColumn < cWidth; iColumn += tScale){
                    bBW = (pSC->WMISCP.bBlackWhite ^ (pSrcY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] > 0));
                    cByte = ((U8 *)pSC->WMIBI.pv + (pOffsetX[iColumn >> nBits] >> 3) + iY)[0];
                    cShift = (U8)(7 - (pOffsetX[iColumn >> nBits] & 7)); 
                    ((U8 *)pSC->WMIBI.pv + (pOffsetX[iColumn >> nBits] >> 3) + iY)[0] ^= ((((bBW + (cByte >> cShift)) & 0x1)) << cShift);
                }
        }
        else{
            for(iRow = iFirstRow; iRow < cHeight; iRow += tScale)
                for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits] + iPos; iColumn < cWidth; iColumn += tScale){
                    bBW = (pSC->WMISCP.bBlackWhite ^ (pSrcY[((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 15]] > 0));
                    cByte = ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + (iY >> 3))[0];
                    cShift = (U8)(7 - (iY & 7));
                    ((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + (iY >> 3))[0] ^= ((((bBW + (cByte >> cShift)) & 0x1)) << cShift);
                }
        }
    }
    else if(bd == BD_5){
        U16 * pDst;

        offset = (16 << rShiftY) / cMul;
        
        for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                _ICC(r, g, b);
                pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                pDst[0] = (U16)_CLIP2(0, r, 31) + (((U16)_CLIP2(0, g, 31)) << 5) + (((U16)_CLIP2(0, b, 31)) << 10);
            }
        }
    }
    else if(bd == BD_565){
        U16 * pDst;

        offset = (32 << rShiftY) / cMul;
        
        for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                _ICC(r, g, b);
                r /= 2, b /= 2;
                pDst = (U16 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                pDst[0] = (U16)_CLIP2(0, r, 31) + (((U16)_CLIP2(0, g, 63)) << 5) + (((U16)_CLIP2(0, b, 31)) << 11);
            }
        }
    }
    else if(bd == BD_10){
        U32 * pDst;

        offset = (512 << rShiftY) / cMul;
        
        for(iRow = iFirstRow; iRow < cHeight; iRow += tScale){
            for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){
                size_t iPos = ((iColumn >> 4) << 8) + idxCC[iRow][iColumn & 0xf];
                PixelI g = ((pSrcY[iPos] + offset) * cMul) >> rShiftY, r = -(pSrcU[iPos] * cMul) >> rShiftUV, b = (pSrcV[iPos] * cMul) >> rShiftUV;

                _ICC(r, g, b);
                pDst = (U32 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY;
                pDst[0] = (U32)_CLIP2(0, r, 1023) + 
                    (((U32)_CLIP2(0, g, 1023)) << 10) + 
                    (((U32)_CLIP2(0, b, 1023)) << 20);
            }
        }
    }

    if(pSC->WMISCP.uAlphaMode > 0)
        if(decodeThumbnailAlpha(pSC, nBits, cMul, rShiftY) != ICERR_OK)
            return ICERR_ERROR;

#ifdef REENTRANT_MODE
    pSC->WMIBI.cLinesDecoded = ( cHeight - iFirstRow + tScale - 1 ) / tScale;
    if (CF_RGB == pSC->WMII.cfColorFormat && Y_ONLY == pSC->WMISCP.cfColorFormat)
    {
        const CWMImageInfo* pII = &pSC->WMII;

#define fixupThumb(type, nCh) \
for(iRow = iFirstRow; iRow < cHeight; iRow += tScale) {\
    size_t iY;\
    for(iColumn = iFirstColumn, iY = pOffsetY[iRow >> nBits]; iColumn < cWidth; iColumn += tScale){\
        type *pT = (type*)((U8 *)pSC->WMIBI.pv + pOffsetX[iColumn >> nBits] + iY);\
        pT[iB] = pT[1] = pT[iR]; \
    } \
} \
break

        switch (pII->bdBitDepth)
        {
            case BD_8:
                fixupThumb(U8, (pII->cBitsPerUnit >> 3));
                break;

            case BD_16:
            case BD_16S:
            case BD_16F:
                fixupThumb(U16, (pII->cBitsPerUnit >> 3) / sizeof(U16));
                break;

            case BD_32:
            case BD_32S:
            case BD_32F:
                fixupThumb(U32, (pII->cBitsPerUnit >> 3) / sizeof(float));
                break;

            case BD_5:
            case BD_10:
            case BD_565:
            default:
                break;
        }
    }
#endif

    return ICERR_OK;
}

/*************************************************************************
    Read variable length byte aligned integer
*************************************************************************/
static size_t GetVLWordEsc(BitIOInfo* pIO, Int *iEscape)
{
    size_t s;

    if (iEscape)
        *iEscape = 0;

    s = getBit32(pIO, 8);
    if (s == 0xfd || s == 0xfe || s == 0xff) {
        if (iEscape)
            *iEscape = (Int) s;
        s = 0;
    }
    else if (s < 0xfb) {
        s = (s << 8) | getBit32(pIO, 8);
    }
    else {
        s -= 0xfb;
        if (s) {
            s = getBit32(pIO, 16) << 16;
            s = (s | getBit32(pIO, 16)) << 16;
            s <<= 16;
        }
        s |= (getBit32(pIO, 16) << 16);
        s |= getBit32(pIO, 16);
    }
    return s;
}

//================================================================
Int readIndexTable(CWMImageStrCodec * pSC)
{
    BitIOInfo* pIO = pSC->pIOHeader;
    readIS_L1(pSC, pIO);

    if(pSC->cNumBitIO > 0){
        size_t *pTable = pSC->pIndexTable;
        U32 iEntry = (U32)pSC->cNumBitIO * (pSC->WMISCP.cNumOfSliceMinus1H + 1), i;

        // read index table header [0x0001] - 2 bytes
        if (getBit32(pIO, 16) != 1)
            return ICERR_ERROR;

        //iBits = getBit16(pIO, 5) + 1; // how many bits per entry
        for(i = 0; i < iEntry; i ++){
            readIS_L1(pSC, pIO);
            pTable[i] = GetVLWordEsc(pIO, NULL);  // escape handling is not important since the respective band is not accessed
        }
    }

    pSC->cHeaderSize = GetVLWordEsc(pIO, NULL);  // escape handling is not important
    flushToByte(pIO);    
    
    pSC->cHeaderSize += getPosRead(pSC->pIOHeader); // get header length

    return ICERR_OK;
}

Int StrIODecInit(CWMImageStrCodec* pSC)
{
    if(allocateBitIOInfo(pSC) != ICERR_OK){
        return ICERR_ERROR;
    }
    
    attachISRead(pSC->pIOHeader, pSC->WMISCP.pWStream, pSC);

    readIndexTable(pSC);

    if(pSC->WMISCP.bVerbose){
        U32 i, j;

        printf("\n%d horizontal tiles:\n", pSC->WMISCP.cNumOfSliceMinus1H + 1);
        for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1H; i ++){
            printf("    offset of tile %d in MBs: %d\n", i, pSC->WMISCP.uiTileY[i]);
        }

        printf("\n%d vertical tiles:\n", pSC->WMISCP.cNumOfSliceMinus1V + 1);
        for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1V; i ++){
            printf("    offset of tile %d in MBs: %d\n", i, pSC->WMISCP.uiTileX[i]);
        }

        if(pSC->WMISCP.bfBitstreamFormat == SPATIAL){
            printf("\nSpatial order bitstream\n");
        }
        else{
            printf("\nFrequency order bitstream\n");
        }

        if(!pSC->m_param.bIndexTable){
            printf("\nstreaming mode, no index table.\n");
        }
        else if(pSC->WMISCP.bfBitstreamFormat == SPATIAL){
            for(j = 0; j <= pSC->WMISCP.cNumOfSliceMinus1H; j ++){
                for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1V; i ++){
                    size_t * p = &pSC->pIndexTable[j * (pSC->WMISCP.cNumOfSliceMinus1V + 1) + i];
                    if(i + j != pSC->WMISCP.cNumOfSliceMinus1H + pSC->WMISCP.cNumOfSliceMinus1V){
                        printf("bitstream size for tile (%d, %d): %d.\n", j, i, (int) (p[1] - p[0]));
                    }
                    else{
                        printf("bitstream size for tile (%d, %d): unknown.\n", j, i);
                    }
                }
            }
        }
        else{
            for(j = 0; j <= pSC->WMISCP.cNumOfSliceMinus1H; j ++){
                for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1V; i ++){
                    size_t * p = &pSC->pIndexTable[(j * (pSC->WMISCP.cNumOfSliceMinus1V + 1) + i) * 4];
                    if(i + j != pSC->WMISCP.cNumOfSliceMinus1H + pSC->WMISCP.cNumOfSliceMinus1V){
                        printf("bitstream size of (DC, LP, AC, FL) for tile (%d, %d): %d %d %d %d.\n", j, i,
                            (int) (p[1] - p[0]), (int) (p[2] - p[1]), (int) (p[3] - p[2]), (int) (p[4] - p[3]));
                    }
                    else{
                        printf("bitstream size of (DC, LP, AC, FL) for tile (%d, %d): %d %d %d unknown.\n", j, i,
                            (int) (p[1] - p[0]), (int) (p[2] - p[1]), (int) (p[3] - p[2]));
                    }
                }
            }
        }
    }

    return 0;
}

Int StrIODecTerm(CWMImageStrCodec* pSC)
{
    detachISRead(pSC, pSC->pIOHeader);

    free(pSC->m_ppBitIO);
    free(pSC->pIndexTable);

    return 0;
}

Int initLookupTables(CWMImageStrCodec* pSC)
{
    static const U8 cbChannels[BDB_MAX] = {1, 1, 2, 2, 2, 4, 4, 4, (U8) -1, (U8) -1, (U8) -1 };

    CWMImageInfo * pII = &pSC->WMII;
    size_t cStrideX, cStrideY;
    size_t w, h, i, iFirst = 0;
    Bool bReverse;

    // lookup tables for rotation and flipping
    if(pSC->m_Dparam->cThumbnailScale > 1) // thumbnail
        w = pII->cThumbnailWidth, h = pII->cThumbnailHeight;
    else
        w = pII->cWidth, h = pII->cHeight;
    w += (pSC->m_Dparam->cROILeftX + pSC->m_Dparam->cThumbnailScale - 1) / pSC->m_Dparam->cThumbnailScale;
    h += (pSC->m_Dparam->cROITopY + pSC->m_Dparam->cThumbnailScale - 1) / pSC->m_Dparam->cThumbnailScale;

    switch(pII->bdBitDepth){
        case BD_16:
        case BD_16S:
        case BD_5:
        case BD_565:
        case BD_16F:
            cStrideY = pSC->WMIBI.cbStride / 2;
            break;

        case BD_32:
        case BD_32S:
        case BD_32F:
        case BD_10:
            cStrideY = pSC->WMIBI.cbStride / 4;
            break;

        default: //BD_8, BD_1
            cStrideY = pSC->WMIBI.cbStride;
            break;
    }

    switch(pII->cfColorFormat){
        case YUV_420:
            cStrideX = 6;
            w >>= 1, h >>= 1;
            break;

        case YUV_422:
            cStrideX = 4;
            w >>= 1;
            break;

        default:
            cStrideX = (pII->cBitsPerUnit >> 3) / cbChannels[pII->bdBitDepth];
            break;
    }

    if(pII->bdBitDepth == BD_1 || pII->bdBitDepth == BD_5 || pII->bdBitDepth == BD_10 ||  pII->bdBitDepth == BD_565)
        cStrideX = 1;

    if(pII->oOrientation > O_FLIPVH) // rotated !!
        i =cStrideX, cStrideX = cStrideY, cStrideY = i;

    pSC->m_Dparam->pOffsetX = (size_t *)malloc(w * sizeof(size_t));
    if(pSC->m_Dparam->pOffsetX == NULL || w * sizeof(size_t) < w)
        return ICERR_ERROR;
    /*
    consider a row in the source image. if it becomes a reversed row in the target, or a reversed (upside-down)column 
    in the target, we have to reverse the offsets. bReverse here tells us when this happened.
    */
    bReverse = (pII->oOrientation == O_FLIPH || pII->oOrientation == O_FLIPVH || 
        pII->oOrientation == O_RCW_FLIPV || pII->oOrientation == O_RCW_FLIPVH);
    if(!pSC->m_Dparam->bDecodeFullFrame) // take care of region decode here!
        iFirst = (pSC->m_Dparam->cROILeftX + pSC->m_Dparam->cThumbnailScale - 1) / pSC->m_Dparam->cThumbnailScale;
    for(i = 0; i + iFirst < w; i ++){
        pSC->m_Dparam->pOffsetX[i + iFirst] = pII->cLeadingPadding + (bReverse ? (pSC->m_Dparam->bDecodeFullFrame ? w : 
    (pSC->m_Dparam->cROIRightX - pSC->m_Dparam->cROILeftX + pSC->m_Dparam->cThumbnailScale) / pSC->m_Dparam->cThumbnailScale / ((pII->cfColorFormat == YUV_420 || pII->cfColorFormat == YUV_422) ? 2 : 1)) - 1 - i : i) * cStrideX;
    }

    pSC->m_Dparam->pOffsetY = (size_t *)malloc(h * sizeof(size_t));
    if(pSC->m_Dparam->pOffsetY == NULL || h * sizeof(size_t) < h)
        return ICERR_ERROR;
    /*
    consider a column in the source image. if it becomes an upside-down column in the target, or a reversed row 
    in the target, we have to reverse the offsets. bReverse here tells us when this happened.
    */
    bReverse = (pII->oOrientation == O_FLIPV || pII->oOrientation == O_FLIPVH || 
        pII->oOrientation == O_RCW || pII->oOrientation == O_RCW_FLIPV);
    if(!pSC->m_Dparam->bDecodeFullFrame) // take care of region decode here!
        iFirst = (pSC->m_Dparam->cROITopY + pSC->m_Dparam->cThumbnailScale - 1) / pSC->m_Dparam->cThumbnailScale;
    for(i = 0; i + iFirst < h; i ++){
        pSC->m_Dparam->pOffsetY[i + iFirst] = (bReverse ? (pSC->m_Dparam->bDecodeFullFrame ? h : 
    (pSC->m_Dparam->cROIBottomY - pSC->m_Dparam->cROITopY + pSC->m_Dparam->cThumbnailScale) / pSC->m_Dparam->cThumbnailScale / (pII->cfColorFormat == YUV_420 ? 2 : 1)) - 1 - i : i) * cStrideY;
    }

    return ICERR_OK;
}

Void setROI(CWMImageStrCodec* pSC)
{
    CWMImageInfo * pWMII = &pSC->WMII;
    CWMIStrCodecParam * pSCP = &pSC->WMISCP;

    // inscribed image size
    pWMII->cWidth -= pSC->m_param.cExtraPixelsLeft + pSC->m_param.cExtraPixelsRight;
    pWMII->cHeight -= pSC->m_param.cExtraPixelsTop + pSC->m_param.cExtraPixelsBottom;

    pSC->m_Dparam->bSkipFlexbits = (pSCP->sbSubband == SB_NO_FLEXBITS);
    pSC->m_Dparam->bDecodeHP = (pSCP->sbSubband == SB_ALL || pSCP->sbSubband == SB_NO_FLEXBITS);
    pSC->m_Dparam->bDecodeLP = (pSCP->sbSubband != SB_DC_ONLY);
    pSC->m_Dparam->cThumbnailScale = 1;
    while(pSC->m_Dparam->cThumbnailScale * pWMII->cThumbnailWidth < pWMII->cWidth)
        pSC->m_Dparam->cThumbnailScale <<= 1;
    if(pSC->WMISCP.bfBitstreamFormat == FREQUENCY){
        if(pSC->m_Dparam->cThumbnailScale >= 4)
            pSC->m_Dparam->bDecodeHP = FALSE;  // no need to decode HP
        if(pSC->m_Dparam->cThumbnailScale >= 16)
            pSC->m_Dparam->bDecodeLP = FALSE; // only need to decode DC
    }

    // original image size
    pWMII->cWidth += pSC->m_param.cExtraPixelsLeft + pSC->m_param.cExtraPixelsRight;
    pWMII->cHeight += pSC->m_param.cExtraPixelsTop + pSC->m_param.cExtraPixelsBottom;

    /** region decode stuff */
    pSC->m_Dparam->cROILeftX = pWMII->cROILeftX * pSC->m_Dparam->cThumbnailScale + pSC->m_param.cExtraPixelsLeft;
    pSC->m_Dparam->cROIRightX = pSC->m_Dparam->cROILeftX + pWMII->cROIWidth * pSC->m_Dparam->cThumbnailScale - 1;
    pSC->m_Dparam->cROITopY = pWMII->cROITopY * pSC->m_Dparam->cThumbnailScale + pSC->m_param.cExtraPixelsTop;
    pSC->m_Dparam->cROIBottomY = pSC->m_Dparam->cROITopY + pWMII->cROIHeight * pSC->m_Dparam->cThumbnailScale - 1;
    if(pSC->m_Dparam->cROIRightX >= pWMII->cWidth)
        pSC->m_Dparam->cROIRightX = pWMII->cWidth - 1;
    if(pSC->m_Dparam->cROIBottomY >= pWMII->cHeight)
        pSC->m_Dparam->cROIBottomY = pWMII->cHeight - 1;

    pSC->m_Dparam->bDecodeFullFrame = (pSC->m_Dparam->cROILeftX + pSC->m_Dparam->cROITopY == 0 &&
        ((pSC->m_Dparam->cROIRightX + 15) / 16 >= (pWMII->cWidth + 14) / 16) && ((pSC->m_Dparam->cROIBottomY + 15) / 16 >= (pWMII->cHeight + 14) / 16));

    pSC->m_Dparam->bDecodeFullWidth = (pSC->m_Dparam->cROILeftX == 0 && ((pSC->m_Dparam->cROIRightX + 15) / 16 >= (pWMII->cWidth + 14) / 16));

    // inscribed image size
    pWMII->cWidth -= pSC->m_param.cExtraPixelsLeft + pSC->m_param.cExtraPixelsRight;
    pWMII->cHeight -= pSC->m_param.cExtraPixelsTop + pSC->m_param.cExtraPixelsBottom;

    if(pSC->WMISCP.bfBitstreamFormat == FREQUENCY && pWMII->bSkipFlexbits == TRUE)
        pSC->m_Dparam->bSkipFlexbits = TRUE;

    pSC->cTileColumn = pSC->cTileRow = 0;
}

Int StrDecInit(CWMImageStrCodec* pSC)
{
    // CWMImageInfo * pWMII = &pSC->WMII;
    COLORFORMAT cfInt = pSC->m_param.cfColorFormat;
    COLORFORMAT cfExt = pSC->WMII.cfColorFormat;
    size_t i;

    /** color transcoding with resolution change **/
    pSC->m_bUVResolutionChange = ((cfExt != Y_ONLY) && ((cfInt == YUV_420 && cfExt != YUV_420) || 
        (cfInt == YUV_422 && cfExt != YUV_422))) && !pSC->WMISCP.bYUVData;
    if(pSC->m_bUVResolutionChange){
        pSC->pResU = (PixelI *)malloc((cfExt == YUV_422 ? 128 : 256) * pSC->cmbWidth * sizeof(PixelI));
        pSC->pResV = (PixelI *)malloc((cfExt == YUV_422 ? 128 : 256) * pSC->cmbWidth * sizeof(PixelI));
        if(pSC->pResU == NULL || pSC->pResV == NULL || (cfExt == YUV_422 ? 128 : 256) * pSC->cmbWidth * sizeof(PixelI) < pSC->cmbWidth){
            return ICERR_ERROR;
        }
    }

    if(allocatePredInfo(pSC) != ICERR_OK){
        return ICERR_ERROR;
    }

    if(allocateTileInfo(pSC) != ICERR_OK)
        return ICERR_ERROR;

    if((pSC->m_param.uQPMode & 1) == 0){ // DC frame uniform quantization
        if(allocateQuantizer(pSC->pTile[0].pQuantizerDC, pSC->m_param.cNumChannels, 1) != ICERR_OK)
            return ICERR_ERROR;
        setUniformQuantizer(pSC, 0);
        for(i = 0; i < pSC->m_param.cNumChannels; i ++)
            pSC->pTile[0].pQuantizerDC[i]->iIndex = pSC->m_param.uiQPIndexDC[i];
        formatQuantizer(pSC->pTile[0].pQuantizerDC, (pSC->m_param.uQPMode >> 3) & 3, pSC->m_param.cNumChannels, 0, TRUE, pSC->m_param.bScaledArith);
    }

    if(pSC->WMISCP.sbSubband != SB_DC_ONLY){
        if((pSC->m_param.uQPMode & 2) == 0){ // LP frame uniform quantization
            if(allocateQuantizer(pSC->pTile[0].pQuantizerLP, pSC->m_param.cNumChannels, 1) != ICERR_OK)
                return ICERR_ERROR;
            setUniformQuantizer(pSC, 1);
            if((pSC->m_param.uQPMode & 0x200) == 0) // use DC quantizer
                useDCQuantizer(pSC, 0);
            else{
                for(i = 0; i < pSC->m_param.cNumChannels; i ++)
                    pSC->pTile[0].pQuantizerLP[i]->iIndex = pSC->m_param.uiQPIndexLP[i];
                formatQuantizer(pSC->pTile[0].pQuantizerLP, (pSC->m_param.uQPMode >> 5) & 3, pSC->m_param.cNumChannels, 0, TRUE, pSC->m_param.bScaledArith);
            }
        }

        if(pSC->WMISCP.sbSubband != SB_NO_HIGHPASS){
            if((pSC->m_param.uQPMode & 4) == 0){ // HP frame uniform quantization
                if(allocateQuantizer(pSC->pTile[0].pQuantizerHP, pSC->m_param.cNumChannels, 1) != ICERR_OK)
                    return ICERR_ERROR;
                setUniformQuantizer(pSC, 2);

                if((pSC->m_param.uQPMode & 0x400) == 0) // use LP quantizer
                    useLPQuantizer(pSC, 1, 0);
                else{
                    for(i = 0; i < pSC->m_param.cNumChannels; i ++)
                        pSC->pTile[0].pQuantizerHP[i]->iIndex = pSC->m_param.uiQPIndexHP[i];
                    formatQuantizer(pSC->pTile[0].pQuantizerHP, (pSC->m_param.uQPMode >> 7) & 3, pSC->m_param.cNumChannels, 0, FALSE, pSC->m_param.bScaledArith);
                }
            }
        }
    }

    if(pSC->WMISCP.cNumOfSliceMinus1V >= MAX_TILES || AllocateCodingContextDec(pSC, pSC->WMISCP.cNumOfSliceMinus1V + 1) != ICERR_OK){
        return ICERR_ERROR;
    }

    if (pSC->m_bSecondary) {
        pSC->pIOHeader = pSC->m_pNextSC->pIOHeader;
        pSC->m_ppBitIO = pSC->m_pNextSC->m_ppBitIO;
        pSC->cNumBitIO = pSC->m_pNextSC->cNumBitIO;
        pSC->cSB = pSC->m_pNextSC->cSB;
    }

    setBitIOPointers(pSC);

    return ICERR_OK;
}

Int StrDecTerm(CWMImageStrCodec* pSC)
{
    size_t j, jend = (pSC->m_pNextSC != NULL);

    for (j = 0; j <= jend; j++) {
        if(pSC->m_bUVResolutionChange){        
            if(pSC->pResU != NULL)
                free(pSC->pResU);
            if(pSC->pResV != NULL)
                free(pSC->pResV);
        }

        freePredInfo(pSC);

        freeTileInfo(pSC);

        FreeCodingContextDec(pSC);

        if (j == 0) {
            StrIODecTerm(pSC);

            // free lookup tables for rotation and flipping
            if(pSC->m_Dparam->pOffsetX != NULL)
                free(pSC->m_Dparam->pOffsetX);
            if(pSC->m_Dparam->pOffsetY != NULL)
                free(pSC->m_Dparam->pOffsetY);
        }

        pSC = pSC->m_pNextSC;
    }

    return 0;
}

/*************************************************************************
    Read header of image plane
*************************************************************************/
Int ReadImagePlaneHeader(CWMImageInfo* pII, CWMIStrCodecParam *pSCP,
    CCoreParameters *pSC, SimpleBitIO* pSB)
{
    ERR err = WMP_errSuccess;

    pSC->cfColorFormat = getBit32_SB(pSB, 3); // internal color format
    FailIf((pSC->cfColorFormat < Y_ONLY || pSC->cfColorFormat > NCOMPONENT), WMP_errUnsupportedFormat);
    pSCP->cfColorFormat = pSC->cfColorFormat;  // this should be removed later
    pSC->bScaledArith = getBit32_SB(pSB, 1); // lossless mode

    // subbands
    pSCP->sbSubband = getBit32_SB(pSB, 4);

// color parameters
    switch (pSC->cfColorFormat) {
        case Y_ONLY:
            pSC->cNumChannels = 1;
            break;
        case YUV_420:
            pSC->cNumChannels = 3;
            getBit32_SB(pSB, 1);
            pII->cChromaCenteringX = (U8) getBit32_SB(pSB, 3);
            getBit32_SB(pSB, 1);
            pII->cChromaCenteringY = (U8) getBit32_SB(pSB, 3);
            break; 
        case YUV_422:
            pSC->cNumChannels = 3;
            getBit32_SB(pSB, 1);
            pII->cChromaCenteringX = (U8) getBit32_SB(pSB, 3);
            getBit32_SB(pSB, 4);
            break; 
        case YUV_444:
            pSC->cNumChannels = 3;
            getBit32_SB(pSB, 4);
            getBit32_SB(pSB, 4);
            break;
        case NCOMPONENT:
            pSC->cNumChannels = (Int) getBit32_SB(pSB, 4) + 1;
            getBit32_SB(pSB, 4);
            break;
        case CMYK:
            pSC->cNumChannels = 4;
            break;
        default:
            break;
    }

// float and 32s additional parameters
    switch (pII->bdBitDepth) {
        case BD_16:
        case BD_16S:
        case BD_32:
        case BD_32S:
            pSCP->nLenMantissaOrShift = (U8) getBit32_SB(pSB, 8);
            break;
        case BD_32F:
            pSCP->nLenMantissaOrShift = (U8) getBit32_SB(pSB, 8);//float conversion parameters
            pSCP->nExpBias = (I8) getBit32_SB(pSB, 8);
            break;
        default:
            break;
    }

        // quantization
    pSC->uQPMode = 0;
    if(getBit32_SB(pSB, 1) == 1) // DC uniform
        pSC->uQPMode += (readQuantizerSB(pSC->uiQPIndexDC, pSB, pSC->cNumChannels) << 3);
    else
        pSC->uQPMode ++;
    if(pSCP->sbSubband != SB_DC_ONLY){
        if(getBit32_SB(pSB, 1) == 0){ // don't use DC QP
            pSC->uQPMode += 0x200;
            if(getBit32_SB(pSB, 1) == 1) // LP uniform
                pSC->uQPMode += (readQuantizerSB(pSC->uiQPIndexLP, pSB, pSC->cNumChannels) << 5);
            else
                pSC->uQPMode += 2;
        }
        else
            pSC->uQPMode += ((pSC->uQPMode & 1) << 1) + ((pSC->uQPMode & 0x18) << 2);

        if(pSCP->sbSubband != SB_NO_HIGHPASS){
            if(getBit32_SB(pSB, 1) == 0){ // don't use LP QP
                pSC->uQPMode += 0x400;
                if(getBit32_SB(pSB, 1) == 1) // HP uniform
                    pSC->uQPMode += (readQuantizerSB(pSC->uiQPIndexHP, pSB, pSC->cNumChannels) << 7);
                else
                    pSC->uQPMode += 4;
            }
            else
                pSC->uQPMode += ((pSC->uQPMode & 2) << 1) + ((pSC->uQPMode & 0x60) << 2);
        }
    }

    if(pSCP->sbSubband == SB_DC_ONLY)
        pSC->uQPMode |= 0x200;
    else if(pSCP->sbSubband == SB_NO_HIGHPASS)
        pSC->uQPMode |= 0x400;
    

    FailIf((pSC->uQPMode & 0x600) == 0, WMP_errInvalidParameter); // frame level QPs must be specified independently!

    flushToByte_SB(pSB);  // remove this later

Cleanup:
    return WMP_errSuccess == err ? ICERR_OK : ICERR_ERROR;
}

/*************************************************************************
    Read header of image, and header of FIRST PLANE only
*************************************************************************/
Int ReadWMIHeader(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP,
    CCoreParameters *pSC)
{
    U32 i;
    ERR err = WMP_errSuccess;
    Bool bTilingPresent, bInscribed, bTileStretch, bAbbreviatedHeader;
    struct WMPStream* pWS = pSCP->pWStream;

    SimpleBitIO SB = {0};
    SimpleBitIO* pSB = &SB;

    U8 szMS[8] = {0};
    U32 cbStream = 0;

    // U32 bits = 0;
    // Int HEADERSIZE = 0;

    assert(pSC != NULL);
    //================================
// 0
    /** signature **/
    Call(pWS->Read(pWS, szMS, sizeof(szMS)));
    FailIf(szMS != (U8 *) strstr((char *) szMS, "WMPHOTO"), WMP_errUnsupportedFormat);
    //================================
    Call(attach_SB(pSB, pWS));

// 8
    /** codec version and subversion **/
    i = getBit32_SB(pSB, 4);
    FailIf((i != CODEC_VERSION), WMP_errIncorrectCodecVersion);
    pSC->cVersion = i;
    i = getBit32_SB(pSB, 4); // subversion
    FailIf((i != CODEC_SUBVERSION &&
        i != CODEC_SUBVERSION_NEWSCALING_SOFT_TILES && i != CODEC_SUBVERSION_NEWSCALING_HARD_TILES),
        WMP_errIncorrectCodecSubVersion);
    pSC->cSubVersion = i;

    pSC->bUseHardTileBoundaries = FALSE;
    if (pSC->cSubVersion == CODEC_SUBVERSION_NEWSCALING_HARD_TILES) 
        pSC->bUseHardTileBoundaries = TRUE;

    pSCP->bUseHardTileBoundaries = pSC->bUseHardTileBoundaries;

// 9 primary parameters
    bTilingPresent = (Bool) getBit32_SB(pSB, 1); // tiling present
    pSCP->bfBitstreamFormat = getBit32_SB(pSB, 1); // bitstream layout
    pII->oOrientation = (ORIENTATION)getBit32_SB(pSB, 3); // presentation orientation
    pSC->bIndexTable = getBit32_SB(pSB, 1);
    i = getBit32_SB(pSB, 2); // overlap
    FailIf((i == 3), WMP_errInvalidParameter);
    pSCP->olOverlap = i;

// 11 some other parameters
    bAbbreviatedHeader = (Bool) getBit32_SB(pSB, 1); // short words for size and tiles
    pSCP->bdBitDepth = (BITDEPTH) getBit32_SB(pSB, 1); // long word
pSCP->bdBitDepth = BD_LONG; // remove when optimization is done
    bInscribed = (Bool) getBit32_SB(pSB, 1); // windowing
    pSC->bTrimFlexbitsFlag = (Bool) getBit32_SB(pSB, 1); // trim flexbits flag
    bTileStretch = (Bool) getBit32_SB(pSB, 1); // tile stretching flag
    pSC->bRBSwapped = (Bool) getBit32_SB(pSB, 1); // red-blue swap flag
    getBit32_SB(pSB, 1);  // padding / reserved bit
    pSC->bAlphaChannel = (Bool) getBit32_SB(pSB, 1); // alpha channel present

// 10 - informational
    pII->cfColorFormat = getBit32_SB(pSB, 4); // source color format
    pII->bdBitDepth = getBit32_SB(pSB, 4); // source bit depth

    if(BD_1alt == pII->bdBitDepth)
    {
        pII->bdBitDepth = BD_1;
        pSCP->bBlackWhite = 1;
    }

// 12 - Variable length fields
// size
    pII->cWidth = getBit32_SB(pSB, bAbbreviatedHeader ? 16 : 32) + 1;
    pII->cHeight = getBit32_SB(pSB, bAbbreviatedHeader ? 16 : 32) + 1;
    pSC->cExtraPixelsTop = pSC->cExtraPixelsLeft = pSC->cExtraPixelsBottom = pSC->cExtraPixelsRight = 0;
    if (bInscribed == FALSE && (pII->cWidth & 0xf) != 0)
        pSC->cExtraPixelsRight = 0x10 - (pII->cWidth & 0xF);
    if (bInscribed == FALSE && (pII->cHeight & 0xf) != 0)
        pSC->cExtraPixelsBottom = 0x10 - (pII->cHeight & 0xF);

// tiling
    pSCP->cNumOfSliceMinus1V = pSCP->cNumOfSliceMinus1H = 0;
    if (bTilingPresent) {
        pSCP->cNumOfSliceMinus1V = getBit32_SB(pSB, LOG_MAX_TILES); // # of vertical slices along X axis
        pSCP->cNumOfSliceMinus1H = getBit32_SB(pSB, LOG_MAX_TILES); // # of horizontal slices along Y axis
    }
    FailIf((pSC->bIndexTable == FALSE) && (pSCP->bfBitstreamFormat == FREQUENCY || pSCP->cNumOfSliceMinus1V + pSCP->cNumOfSliceMinus1H > 0),
        WMP_errUnsupportedFormat);

// tile sizes
    pSCP->uiTileX[0] = pSCP->uiTileY[0] = 0;
    for(i = 0; i < pSCP->cNumOfSliceMinus1V; i ++){ // width in MB of vertical slices, not needed for last slice!
        pSCP->uiTileX[i + 1] = (U32) getBit32_SB(pSB, bAbbreviatedHeader ? 8 : 16) + pSCP->uiTileX[i];
    }
    for(i = 0; i < pSCP->cNumOfSliceMinus1H; i ++){ // width in MB of vertical slices, not needed for last slice!
        pSCP->uiTileY[i + 1] = (U32) getBit32_SB(pSB, bAbbreviatedHeader ? 8 : 16) + pSCP->uiTileY[i];
    }
    if (bTileStretch) {  // no handling of tile stretching enabled as of now
        for (i = 0; i < (pSCP->cNumOfSliceMinus1V + 1) * (pSCP->cNumOfSliceMinus1H + 1); i++)
            getBit32_SB(pSB, 8);
    }

// window due to compressed domain processing
    if (bInscribed) {
        pSC->cExtraPixelsTop = (U8)getBit32_SB(pSB, 6);
        pSC->cExtraPixelsLeft = (U8)getBit32_SB(pSB, 6);
        pSC->cExtraPixelsBottom = (U8)getBit32_SB(pSB, 6);
        pSC->cExtraPixelsRight = (U8)getBit32_SB(pSB, 6);
    }
    
    if(((pII->cWidth + pSC->cExtraPixelsLeft + pSC->cExtraPixelsRight) & 0xf) + ((pII->cHeight + pSC->cExtraPixelsTop + pSC->cExtraPixelsBottom) & 0xf) != 0){
        FailIf((pII->cWidth & 0xf) + (pII->cHeight & 0xf) + pSC->cExtraPixelsLeft + pSC->cExtraPixelsTop != 0, WMP_errInvalidParameter);
        FailIf(pII->cWidth <= pSC->cExtraPixelsRight || pII->cHeight <= pSC->cExtraPixelsBottom, WMP_errInvalidParameter);
        pII->cWidth -= pSC->cExtraPixelsRight, pII->cHeight -= pSC->cExtraPixelsBottom;
    }

    flushToByte_SB(pSB);  // redundant

    // read header of first image plane
    FailIf(ReadImagePlaneHeader(pII, pSCP, pSC, pSB), WMP_errUnsupportedFormat);

    // maybe UNALIGNED!!!

    //================================
    detach_SB(pSB);
    pSCP->cbStream = cbStream - getByteRead_SB(pSB);

    pSCP->uAlphaMode = (pSC->bAlphaChannel ? pSCP->uAlphaMode : 0);
    pSCP->cChannel = pSC->cNumChannels;

    if((pII->bdBitDepth == BD_5 || pII->bdBitDepth == BD_10 || pII->bdBitDepth == BD_565) && 
        (pSCP->cfColorFormat != YUV_444 && pSCP->cfColorFormat != YUV_422 && pSCP->cfColorFormat != YUV_420 && pSCP->cfColorFormat != Y_ONLY))
        return ICERR_ERROR;
    
Cleanup:
    return WMP_errSuccess == err ? ICERR_OK : ICERR_ERROR;
}

//----------------------------------------------------------------
// streaming api init/decode/term
EXTERN_C Int ImageStrDecGetInfo(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP)
{
    ERR err = WMP_errSuccess;
    size_t cMarker;
    CCoreParameters aDummy;
    // mark position of start of data
    Call(pSCP->pWStream->GetPos(pSCP->pWStream, &cMarker));
    Call(ReadWMIHeader(pII, pSCP, &aDummy));
    // rewind to start of data
    Call(pSCP->pWStream->SetPos(pSCP->pWStream, cMarker));
    return ICERR_OK;

Cleanup:
    return ICERR_ERROR;
}

EXTERN_C Int WMPhotoValidate(
    CWMImageInfo * pII,
    CWMIStrCodecParam * pSCP)
{
    CWMImageInfo cII;
    CWMIStrCodecParam cSCP = *pSCP;
    size_t cScale = 1;

    if(ImageStrDecGetInfo(&cII, pSCP) != ICERR_OK)
        return ICERR_ERROR;

    // copy over un-overwritable ImageInfo parameters
    pII->bdBitDepth = cII.bdBitDepth;
    pII->cWidth = cII.cWidth;
    pII->cHeight = cII.cHeight;

    if(pII->cWidth == 0 || pII->cHeight == 0)
        return ICERR_ERROR;

    // copy over overwritable CodecParam parameters
    pSCP->bVerbose = cSCP.bVerbose;
    pSCP->cbStream = cSCP.cbStream;
    pSCP->pWStream = cSCP.pWStream;
    if(pSCP->uAlphaMode > 1) // something + alpha
        pSCP->uAlphaMode = cSCP.uAlphaMode; // something + alpha to alpha or something transcoding!

    // validate color transcoding
    if(pSCP->cfColorFormat == NCOMPONENT)
        pII->cfColorFormat = NCOMPONENT;
    if(pSCP->cfColorFormat == CMYK && pII->cfColorFormat != Y_ONLY && pII->cfColorFormat != CF_RGB)
        pII->cfColorFormat = CMYK;
    if(pSCP->cfColorFormat == YUV_422 && pII->cfColorFormat == YUV_420)
        pII->cfColorFormat = YUV_422;
    if(pSCP->cfColorFormat == YUV_444 && (pII->cfColorFormat == YUV_422 || pII->cfColorFormat == YUV_420))
        pII->cfColorFormat = YUV_444;
    if(cII.cfColorFormat == CF_RGB && pII->cfColorFormat != Y_ONLY && 
        pII->cfColorFormat != NCOMPONENT)  // no guarantee that number of channels will be >= 3
        pII->cfColorFormat = cII.cfColorFormat;
    if(cII.cfColorFormat == CF_RGBE)
        pII->cfColorFormat = CF_RGBE;

    // validate thumbnail parameters
    if(pII->cThumbnailWidth == 0 || pII->cThumbnailWidth > pII->cWidth)
        pII->cThumbnailWidth = pII->cWidth;
    if(pII->cThumbnailHeight == 0 || pII->cThumbnailHeight > pII->cHeight)
        pII->cThumbnailHeight = pII->cHeight;
    if((pII->cWidth + pII->cThumbnailWidth - 1) / pII->cThumbnailWidth != (pII->cHeight + pII->cThumbnailHeight - 1) / pII->cThumbnailHeight) {
        while((pII->cWidth + cScale - 1) / cScale > pII->cThumbnailWidth &&
            (pII->cHeight + cScale - 1) / cScale > pII->cThumbnailHeight && (cScale << 1))
            cScale <<= 1;
    }
    else {
        cScale = (pII->cWidth + pII->cThumbnailWidth - 1) / pII->cThumbnailWidth;    
        if (cScale == 0)
            cScale = 1;
    }
    pII->cThumbnailWidth = (pII->cWidth + cScale - 1) / cScale;
    pII->cThumbnailHeight = (pII->cHeight + cScale - 1) / cScale;

    // validate region decode parameters
    if(pII->cROIHeight == 0 || pII->cROIWidth == 0){
        pII->cROILeftX = pII->cROITopY = 0;
        pII->cROIWidth = pII->cThumbnailWidth;
        pII->cROIHeight = pII->cThumbnailHeight;
    }
    if(pII->cROILeftX >= pII->cThumbnailWidth)
        pII->cROILeftX = 0;
    if(pII->cROITopY >= pII->cThumbnailHeight)
        pII->cROITopY = 0;
    if(pII->cROILeftX + pII->cROIWidth > pII->cThumbnailWidth)
        pII->cROIWidth = pII->cThumbnailWidth - pII->cROILeftX;
    if(pII->cROITopY + pII->cROIHeight > pII->cThumbnailHeight)
        pII->cROIHeight = pII->cThumbnailHeight - pII->cROITopY;

    return ICERR_OK;
}

/*************************************************************************
  Initialization of CWMImageStrCodec struct
*************************************************************************/
static Void InitializeStrDec(CWMImageStrCodec *pSC,
  const CCoreParameters *pParams, const CWMImageStrCodec *pSCIn)
{
    // copy core parameters
    memcpy (&(pSC->m_param), pParams, sizeof (CCoreParameters));

    pSC->cbStruct = sizeof(*pSC);
    pSC->WMII = pSCIn->WMII;
    pSC->WMISCP = pSCIn->WMISCP;

    pSC->cRow = 0;
    pSC->cColumn = 0;
    
    pSC->cmbWidth = (pSC->WMII.cWidth + 15) / 16;
    pSC->cmbHeight = (pSC->WMII.cHeight + 15) / 16;

    pSC->Load = outputMBRow; // output decoding result (ICC, etc)
    pSC->Transform = pParams->cSubVersion == CODEC_SUBVERSION ?
        invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;
    pSC->TransformCenter = pSC->Transform;

    pSC->ProcessTopLeft = processMacroblockDec;
    pSC->ProcessTop = processMacroblockDec;
    pSC->ProcessTopRight = processMacroblockDec;
    pSC->ProcessLeft = processMacroblockDec;
    pSC->ProcessCenter = processMacroblockDec;
    pSC->ProcessRight = processMacroblockDec;
    pSC->ProcessBottomLeft = processMacroblockDec;
    pSC->ProcessBottom = processMacroblockDec;
    pSC->ProcessBottomRight = processMacroblockDec;

    pSC->m_pNextSC = NULL;
    pSC->m_bSecondary = FALSE;
}

/*************************************************************************
  ImageStrDecInit
*************************************************************************/
Int ImageStrDecInit(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP,
    CTXSTRCODEC* pctxSC)
{
    static size_t cbChannels[BD_MAX] = {2, 4};
    ERR err = WMP_errSuccess;

    size_t cbChannel = 0, cblkChroma = 0;
    size_t cbMacBlockStride = 0, cbMacBlockChroma = 0, cMacBlock = 0;

    CWMImageStrCodec SC = {0};
    CWMImageStrCodec *pSC = NULL, *pNextSC = NULL;
    char* pb = NULL;
    size_t cb = 0, i;
    Bool bLossyTranscoding = FALSE;
    Bool bUseHardTileBoundaries = FALSE; //default is soft tile boundaries
    Bool bLessThan64Bit = sizeof(void *) < 8;

    *pctxSC = NULL;

    if(WMPhotoValidate(pII, pSCP) != ICERR_OK)
        return ICERR_ERROR;

    if(pSCP->sbSubband == SB_ISOLATED) // can not do anything with isolated bitstream
        return ICERR_ERROR;

    //================================================
    SC.WMISCP.pWStream = pSCP->pWStream;
    if (ReadWMIHeader(&SC.WMII, &SC.WMISCP, &SC.m_param) != ICERR_OK) {
        return ICERR_ERROR;
    }

    bUseHardTileBoundaries = SC.WMISCP.bUseHardTileBoundaries;
    if(SC.WMII.cfColorFormat == CMYK && pII->cfColorFormat == CF_RGB)
        bLossyTranscoding = TRUE;
    if(pSCP->cfColorFormat != CMYK && (pII->cfColorFormat == CMYK))
        return ICERR_ERROR;

    //================================================
    SC.WMISCP = *pSCP;
    SC.WMII   = *pII;

    // original image size
    SC.WMII.cWidth += SC.m_param.cExtraPixelsLeft + SC.m_param.cExtraPixelsRight;
    SC.WMII.cHeight += SC.m_param.cExtraPixelsTop + SC.m_param.cExtraPixelsBottom;
    pII->cROILeftX += SC.m_param.cExtraPixelsLeft;
    pII->cROITopY += SC.m_param.cExtraPixelsTop;
    
    //================================================
    cbChannel = cbChannels[SC.WMISCP.bdBitDepth];
    cblkChroma = cblkChromas[SC.m_param.cfColorFormat];

    cbMacBlockStride = cbChannel * 16 * 16;
    cbMacBlockChroma = cbChannel * 16 * cblkChroma;
    cMacBlock = (SC.WMII.cWidth + 15) / 16;

    //================================================
    cb = sizeof(*pSC) + (128 - 1) + sizeof(CWMDecoderParameters);
    cb += (PACKETLENGTH * 4 - 1) + (PACKETLENGTH * 2 ) + sizeof(*pSC->pIOHeader);

    i = (cbMacBlockStride + cbMacBlockChroma * (SC.m_param.cNumChannels - 1)) * 2; // i <= 2^15
    if (bLessThan64Bit && ((i * (cMacBlock >> 16)) & 0xffffc000)) {
        /** potential overflow - 32 bit pointers insufficient to address cache **/
        return ICERR_ERROR;
    }
    cb += i * cMacBlock;

    pb = malloc(cb);
    if(pb == NULL)
        return WMP_errOutOfMemory;
    memset(pb, 0, cb);

    //================================================
    pSC = (CWMImageStrCodec*)pb; pb += sizeof(*pSC);
    if(pSC == NULL)
        return ICERR_ERROR;

    // Set up perf timers
    PERFTIMER_ONLY(pSC->m_fMeasurePerf = pSCP->fMeasurePerf);
    PERFTIMER_NEW(pSC->m_fMeasurePerf, &pSC->m_ptEndToEndPerf);
    PERFTIMER_NEW(pSC->m_fMeasurePerf, &pSC->m_ptEncDecPerf);
    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEndToEndPerf);
    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    PERFTIMER_COPYSTARTTIME(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf, pSC->m_ptEndToEndPerf);

    pSC->m_Dparam = (CWMDecoderParameters*)pb; pb += sizeof(CWMDecoderParameters);
    pSC->cbChannel = cbChannel;
    //pSC->cNumChannels = SC.WMISCP.cChannel;
    pSC->bUseHardTileBoundaries = bUseHardTileBoundaries;

    //================================================
    InitializeStrDec(pSC, &SC.m_param, &SC);

    //================================================
    // 2 Macro Row buffers for each channel
    pb = ALIGNUP(pb, 128);
    for (i = 0; i < pSC->m_param.cNumChannels; i++) {
        pSC->a0MBbuffer[i] = (PixelI*)pb; pb += cbMacBlockStride * pSC->cmbWidth;
        pSC->a1MBbuffer[i] = (PixelI*)pb; pb += cbMacBlockStride * pSC->cmbWidth;
        cbMacBlockStride = cbMacBlockChroma;
    }

    //================================================
    // lay 2 aligned IO buffers just below pIO struct
    pb = (char*)ALIGNUP(pb, PACKETLENGTH * 4) + PACKETLENGTH * 2;
    pSC->pIOHeader = (BitIOInfo*)pb; pb += sizeof(*pSC->pIOHeader);

    // if interleaved alpha is needed
    if (pSC->m_param.bAlphaChannel) {
        SimpleBitIO SB = {0};
        cbMacBlockStride = cbChannel * 16 * 16;

        // 1. allocate new pNextSC info
        //================================================
        cb = sizeof(*pNextSC) + (128 - 1) + cbMacBlockStride * cMacBlock * 2;
        // if primary image is safe to allocate, alpha channel is certainly safe
        pb = malloc(cb);
        if(pb == NULL)
            return WMP_errOutOfMemory;
        memset(pb, 0, cb);
        //================================================
        pNextSC = (CWMImageStrCodec*)pb; pb += sizeof(*pNextSC);

        // read plane header of second image plane
        Call(attach_SB(&SB, pSCP->pWStream));
        InitializeStrDec(pNextSC, &SC.m_param, &SC);
        ReadImagePlaneHeader(&pNextSC->WMII, &pNextSC->WMISCP, &pNextSC->m_param, &SB);
        detach_SB(&SB);

        // 2. initialize pNextSC
        if(pNextSC == NULL)
            return ICERR_ERROR;
        pNextSC->m_Dparam = pSC->m_Dparam;
        pNextSC->cbChannel = cbChannel;
        //================================================

        // 3. initialize arrays
//        InitializeStrDec(pNextSC, &SC.m_param, &SC);
        pNextSC->m_param.cfColorFormat = Y_ONLY;
        pNextSC->m_param.cNumChannels = 1;
        pNextSC->m_param.bAlphaChannel = TRUE;
        //================================================

        // 2 Macro Row buffers for each channel
        pb = ALIGNUP(pb, 128);
        pNextSC->a0MBbuffer[0] = (PixelI*)pb; pb += cbMacBlockStride * pNextSC->cmbWidth;
        pNextSC->a1MBbuffer[0] = (PixelI*)pb;
        //================================================
        pNextSC->pIOHeader = pSC->pIOHeader;
        //================================================

        // 4. link pSC->pNextSC = pNextSC
        pNextSC->m_pNextSC = pSC;
        pNextSC->m_bSecondary = TRUE;

    }
    else
        pSC->WMISCP.uAlphaMode = 0;

    //================================================
    FailIf((StrIODecInit(pSC) != ICERR_OK), WMP_errOutOfMemory);
    FailIf((StrDecInit(pSC) != ICERR_OK), WMP_errOutOfMemory);
    if (pNextSC) {
        // 5. StrEncInit
        FailIf((StrDecInit(pNextSC) != ICERR_OK), WMP_errOutOfMemory);
    }

    pSC->m_pNextSC = pNextSC;
    //================================================
    *pII = pSC->WMII;
    *pSCP = pSC->WMISCP;
    *pctxSC = (CTXSTRCODEC)pSC;

    // original image size
    pII->cROILeftX += SC.m_param.cExtraPixelsLeft;
    pII->cROITopY += SC.m_param.cExtraPixelsTop;

    if(pSC->WMII.cPostProcStrength){
        initPostProc(pSC->pPostProcInfo, pSC->cmbWidth, pSC->m_param.cNumChannels);
        if (pSC->m_param.bAlphaChannel) 
            initPostProc(pNextSC->pPostProcInfo, pNextSC->cmbWidth, pNextSC->m_param.cNumChannels);
    }

    PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);

Cleanup:
    return WMP_errSuccess == err ? ICERR_OK : ICERR_ERROR;
}

Int ImageStrDecDecode(
    CTXSTRCODEC ctxSC,
    const CWMImageBufferInfo* pBI
#ifdef REENTRANT_MODE
    , size_t *pcDecodedLines
#endif
    )
{
    CWMImageStrCodec* pSC = (CWMImageStrCodec*)ctxSC;
    CWMImageStrCodec* pNextSC = pSC->m_pNextSC;
    size_t cMBRow, k;

    ImageDataProc ProcessLeft, ProcessCenter, ProcessRight;
    ImageDataProc Transform = NULL;
    const size_t iChromaElements = (pSC->m_param.cfColorFormat == YUV_420) ? 8 * 8 
        : ((pSC->m_param.cfColorFormat == YUV_422) ? 8 * 16 : 16 * 16);

    if (sizeof(*pSC) != pSC->cbStruct)
    {
        return ICERR_ERROR;
    }

    //================================
    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);

    pSC->WMIBI = *pBI;

#ifdef REENTRANT_MODE
    if (0 == pSC->WMIBI.uiFirstMBRow)
    {
        setROI(pSC);
        if (pNextSC) {
            pNextSC->WMIBI = pSC->WMIBI;
            setROI(pNextSC);
        }
    }
#else
    setROI(pSC);
    if (pNextSC) {
        pNextSC->WMIBI = pSC->WMIBI;
        setROI(pNextSC);
    }
#endif // REENTRANT_MODE

// optimization flags can be defined only after ROI is set!
#if defined(WMP_OPT_SSE2) || defined(WMP_OPT_CC_DEC) || defined(WMP_OPT_TRFM_DEC)
    StrDecOpt(pSC);
#endif // OPT defined



    cMBRow = (pSC->m_Dparam->bDecodeFullFrame ? pSC->cmbHeight : ((pSC->m_Dparam->cROIBottomY + 16) >> 4));

#ifdef REENTRANT_MODE
    if (0 == pSC->WMIBI.uiFirstMBRow)
    {
        if(initLookupTables(pSC) != ICERR_OK)
            return ICERR_ERROR;
        if (pNextSC && initLookupTables(pNextSC) != ICERR_OK)
            return ICERR_ERROR;
    }
#else
    if(initLookupTables(pSC) != ICERR_OK)
        return ICERR_ERROR;
    if (pNextSC && initLookupTables(pNextSC) != ICERR_OK)
        return ICERR_ERROR;
#endif // REENTRANT_MODE

#ifndef REENTRANT_MODE
    if(pSC->WMII.bdBitDepth == BD_1){
        size_t i;


        for(i = 0; i < pSC->WMIBI.cLine; i ++)
            memset(pSC->WMIBI.pv, 0, pSC->WMIBI.cbStride);
    }
#endif

    //================================
    // top row
#ifdef REENTRANT_MODE
#else
    pSC->cRow = 0;
    ProcessLeft = pSC->ProcessTopLeft;
    ProcessCenter = pSC->ProcessTop;
    ProcessRight = pSC->ProcessTopRight;
    Transform = pSC->m_param.cSubVersion == CODEC_SUBVERSION ?
        invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;
#endif // REENTRANT_MODE

#ifdef REENTRANT_MODE
    for (pSC->cRow = pSC->WMIBI.uiFirstMBRow; pSC->cRow <= pSC->WMIBI.uiLastMBRow; pSC->cRow++)
    {
        // const COLORFORMAT cfExt = (pSC->m_param.cfColorFormat == Y_ONLY ? Y_ONLY : pSC->WMII.cfColorFormat);

        if (0 == pSC->cRow)
        {
            ProcessLeft = pSC->ProcessTopLeft;
            ProcessCenter = pSC->ProcessTop;
            ProcessRight = pSC->ProcessTopRight;
            Transform = pSC->m_param.cSubVersion == CODEC_SUBVERSION ?
                invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;
        }
        else if (cMBRow == pSC->cRow)
        {
            //================================
            // bottom row
            ProcessLeft = pSC->ProcessBottomLeft;
            ProcessCenter = pSC->ProcessBottom;
            ProcessRight = pSC->ProcessBottomRight;
            Transform = pSC->m_param.cSubVersion == CODEC_SUBVERSION ?
                invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;
        }
        else { // middle rows
            ProcessLeft = pSC->ProcessLeft;
            ProcessCenter = pSC->ProcessCenter;
            ProcessRight = pSC->ProcessRight;
            Transform = pSC->TransformCenter;
        }
#else
    //================================
    // central rows
    for(pSC->cRow = 0; pSC->cRow <= cMBRow; pSC->cRow++)
    {
#endif // REENTRANT_MODE
        pSC->cColumn = 0;
        initMRPtr(pSC);
        /** zero out the transform coefficients (pull this out to once per MB row) **/
        memset(pSC->p1MBbuffer[0], 0, sizeof(PixelI) * 16 * 16 * pSC->cmbWidth);
        for (k = 1; k < pSC->m_param.cNumChannels; k++) {
            memset(pSC->p1MBbuffer[k], 0, sizeof(PixelI) * iChromaElements * pSC->cmbWidth);
        }
        if (pSC->m_pNextSC != NULL) {  // alpha channel
            memset(pSC->m_pNextSC->p1MBbuffer[0], 0, sizeof(PixelI) * 16 * 16 * pSC->m_pNextSC->cmbWidth);
        }

        if(ProcessLeft(pSC) != ICERR_OK)
            return ICERR_ERROR;
        advanceMRPtr(pSC);

        pSC->Transform = Transform;
        for (pSC->cColumn = 1; pSC->cColumn < pSC->cmbWidth; ++pSC->cColumn)
        {
            if(ProcessCenter(pSC) != ICERR_OK)
                return ICERR_ERROR;
            advanceMRPtr(pSC);
        }
        pSC->Transform = pSC->m_param.cSubVersion == CODEC_SUBVERSION ?
            invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;

        if(ProcessRight(pSC) != ICERR_OK)
            return ICERR_ERROR;

        if (pSC->cRow) {
            if(pSC->m_Dparam->cThumbnailScale < 2 && (pSC->m_Dparam->bDecodeFullFrame || 
                ((pSC->cRow * 16 > pSC->m_Dparam->cROITopY) && (pSC->cRow * 16 <= pSC->m_Dparam->cROIBottomY + 16))))
                pSC->Load(pSC); // bypass CC for thumbnail decode

            if(pSC->m_Dparam->cThumbnailScale >= 2) // decode thumbnail
                decodeThumbnail(pSC);
        }

        advanceOneMBRow(pSC);
        swapMRPtr(pSC);
#ifdef REENTRANT_MODE
        *pcDecodedLines = pSC->WMIBI.cLinesDecoded;
#else
        if (pSC->cRow == cMBRow - 1) {
        //================================
        // bottom row
            ProcessLeft = pSC->ProcessBottomLeft;
            ProcessCenter = pSC->ProcessBottom;
            ProcessRight = pSC->ProcessBottomRight;
            Transform = pSC->m_param.cSubVersion == CODEC_SUBVERSION ?
                invTransformMacroblock : invTransformMacroblock_alteredOperators_hard;
        }
        else {
            ProcessLeft = pSC->ProcessLeft;
            ProcessCenter = pSC->ProcessCenter;
            ProcessRight = pSC->ProcessRight;
            Transform = pSC->TransformCenter;
        }
#endif // REENTRANT_MODE
    }

#ifndef REENTRANT_MODE
    fixup_Y_ONLY_to_Others(pSC, pBI);
#endif // REENTRANT_MODE

    PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    return ICERR_OK;
}

Int ImageStrDecTerm(
    CTXSTRCODEC ctxSC)
{
    CWMImageStrCodec* pSC = (CWMImageStrCodec*)ctxSC;
    if (NULL == pSC)
    {
        return ICERR_OK;
    }
    if (sizeof(*pSC) != pSC->cbStruct)
    {
        return ICERR_ERROR;
    }

    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);

    StrDecTerm(pSC);
    PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    PERFTIMER_REPORT(pSC->m_fMeasurePerf, pSC);
    PERFTIMER_DELETE(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    PERFTIMER_DELETE(pSC->m_fMeasurePerf, pSC->m_ptEndToEndPerf);

    free(pSC);

    return ICERR_OK;
}

