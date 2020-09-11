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

#include <stdio.h>
#include <stdlib.h>
#include "strcodec.h"
#include "encode.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

/** local function definitions **/
#ifdef X86OPT_INLINE
__forceinline
#endif
static Int EncodeBlock (Bool bChroma, const Int *aLocalCoef, Int iNumNonzero,
                         struct CAdaptiveHuffman **pAHexpt,
                         Int iContextOffset, BitIOInfo* pOut, UInt iLocation);

/*************************************************************************
    EncodeSignificantAbsLevel
*************************************************************************/
#ifdef X86OPT_INLINE
//__forceinline
#endif
static Void EncodeSignificantAbsLevel (UInt iAbsLevel, struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pOut)
{
    Int iIndex, iFixed, aIndex[] = { 0,1,2,2, 3,3,3,3, 4,4,4,4, 5,5,5,5 };
    Int aFixedLength[] = { 0, 0, 1, 2, 2, 2 };

    assert(iAbsLevel > 0);
    iAbsLevel--;
    if (iAbsLevel >= 16) {
        Int i = iAbsLevel;
        iIndex = 6;
        /** find leftmost bit **/
        i >>= 5;
        iFixed = 4;
        while (i) { /** caution - infinite loop if not careful **/
            iFixed++;
            assert (iFixed < 30);
            i >>= 1;
        }
        
        pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
        putBit16z(pOut, pAHexpt->m_pTable[iIndex * 2 + 1], pAHexpt->m_pTable[iIndex * 2 + 2]);
        if (iFixed > 18) {
            putBit16z (pOut, 15, 4);
            if (iFixed > 21) {
                putBit16z (pOut, 3, 2);
                putBit16 (pOut, iFixed - 22, 3); // 22 - 29
            }
            else
                putBit16z (pOut, iFixed - 19, 2); // 19 20 21
        }
        else {
            putBit16z(pOut, (iFixed - 4), 4);
        }
        putBit32(pOut, iAbsLevel, iFixed);
    }
    else {
        iIndex = aIndex[iAbsLevel];
        iFixed = aFixedLength[iIndex];

        pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
        putBit16z(pOut, pAHexpt->m_pTable[iIndex * 2 + 1], pAHexpt->m_pTable[iIndex * 2 + 2]);
        putBit32(pOut, iAbsLevel, iFixed);
    }
}

/*************************************************************************
    EncodeMacroblockDC
*************************************************************************/

Void encodeQPIndex(BitIOInfo* pIO, U8 iIndex,U8 cBits)
{
    if(iIndex == 0)
        putBit16z(pIO, 0, 1);
    else{
        putBit16z(pIO, 1, 1);
        putBit16z(pIO, iIndex - 1, cBits);
    }
}

Int EncodeMacroblockDC (CWMImageStrCodec *pSC, CCodingContext *pContext, Int iMBX, Int iMBY)
{
    CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
    BitIOInfo* pIO = pContext->m_pIODC;
    CWMIMBInfo *pMBInfo = &pSC->MBInfo;
    Int iIndex, j = 0;
    struct CAdaptiveHuffman *pAH;
    Int aLaplacianMean[2] = { 0, 0}, *pLM = aLaplacianMean;
    Int iModelBits = pContext->m_aModelDC.m_iFlcBits[0];
    COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    writeIS_L1(pSC, pIO);

    if(pSC->m_param.bTranscode == FALSE){
        pMBInfo->iQIndexLP = (U8)(pTile->cNumQPLP > 1 ? (rand() % pTile->cNumQPLP) : 0);
        pMBInfo->iQIndexHP = (U8)(pTile->cNumQPHP > 1 ? (rand() % pTile->cNumQPHP) : 0);
    }
    if(pTile->cBitsHP == 0 && pTile->cNumQPHP > 1) // use LP QP
        pMBInfo->iQIndexHP = pMBInfo->iQIndexLP;

    if(pSC->WMISCP.bfBitstreamFormat == SPATIAL && pSC->WMISCP.sbSubband != SB_DC_ONLY){
        if(pTile->cBitsLP > 0)  // MB-based LP QP index
            encodeQPIndex(pIO, pMBInfo->iQIndexLP, pTile->cBitsLP);
        if( pSC->WMISCP.sbSubband != SB_NO_HIGHPASS && pTile->cBitsHP > 0)  // MB-based HP QP index
            encodeQPIndex(pIO, pMBInfo->iQIndexHP, pTile->cBitsHP);
    }

    if(pSC->m_param.bTranscode == FALSE)
        pSC->Quantize(pSC);

    predMacroblockEnc(pSC);

    /** code path for Y_ONLY, CMYK and N_CHANNEL DC **/
    if(cf == Y_ONLY || cf == CMYK || cf == NCOMPONENT) {
        Int iQDC, iDC, iSign;
        for (j = 0; j < iChannels; j++) {
            iDC = pMBInfo->iBlockDC[j][0];
            iSign = (iDC < 0);
            iDC = abs(iDC);
            iQDC = iDC >> iModelBits;

            /** send luminance DC **/
            if (iQDC) {
                putBit16z(pIO, 1, 1);
                EncodeSignificantAbsLevel((UInt) iQDC, pContext->m_pAHexpt[3], pIO);
                *pLM += 1;
            }
            else {
                putBit16z(pIO, 0, 1);
            }

            putBit16(pIO, iDC, iModelBits);
            if (iDC) {
                putBit16z(pIO, iSign, 1);
            }

            pLM = aLaplacianMean + 1;
            iModelBits = pContext->m_aModelDC.m_iFlcBits[1];
        }
    }
    else {  /** code path for YUV DC **/
        Int iDCY, iDCU, iDCV, iQDCY, iQDCU, iQDCV;

        pAH = pContext->m_pAHexpt[2];
        iQDCY = abs(iDCY = pMBInfo->iBlockDC[0][0]);
        iQDCU = abs(iDCU = pMBInfo->iBlockDC[1][0]);
        iQDCV = abs(iDCV = pMBInfo->iBlockDC[2][0]);
        if (iModelBits) {
            iQDCY >>= iModelBits;
        }

        iModelBits = pContext->m_aModelDC.m_iFlcBits[1];
        if (iModelBits) {
            iQDCU >>= iModelBits;
            iQDCV >>= iModelBits;
        }
        iModelBits = pContext->m_aModelDC.m_iFlcBits[0];

        iIndex = (iQDCY != 0) * 4 + (iQDCU != 0) * 2 + (iQDCV != 0);
        putBit16z(pIO, pAH->m_pTable[iIndex * 2 + 1], pAH->m_pTable[iIndex * 2 + 2]);

        /** send luminance DC **/
        if (iQDCY) {
            EncodeSignificantAbsLevel((UInt) iQDCY, pContext->m_pAHexpt[3], pIO);
            *pLM += 1;
        }
        putBit16(pIO, abs(iDCY), iModelBits);
        if (iDCY) {
            putBit16z(pIO, (iDCY < 0), 1);
        }

        /** send chroma DC **/
        pLM = aLaplacianMean + 1;
        iModelBits = pContext->m_aModelDC.m_iFlcBits[1];

        if (iQDCU) {
            EncodeSignificantAbsLevel((UInt) iQDCU, pContext->m_pAHexpt[4], pIO);
            *pLM += 1;
        }
        putBit16(pIO, abs(iDCU), iModelBits);
        if (iDCU) {
            putBit16z(pIO, (iDCU < 0), 1);
        }

        if (iQDCV) {
            EncodeSignificantAbsLevel((UInt) iQDCV, pContext->m_pAHexpt[4], pIO);
            *pLM += 1;
        }
        putBit16(pIO, abs(iDCV), iModelBits);
        if (iDCV) {
            putBit16z(pIO, (iDCV < 0), 1);
        }
    }

    UpdateModelMB (cf, iChannels, aLaplacianMean, &(pContext->m_aModelDC));

    if (pSC->m_bResetContext && pSC->WMISCP.sbSubband == SB_DC_ONLY) {
        AdaptDiscriminant(pContext->m_pAHexpt[2]);
        AdaptDiscriminant(pContext->m_pAHexpt[3]);
        AdaptDiscriminant(pContext->m_pAHexpt[4]);
    }

    return ICERR_OK;
}

/*************************************************************************
    Scan block with zero model bits
*************************************************************************/
#ifdef X86OPT_INLINE
__forceinline
#endif
static Int AdaptiveScanZero (const PixelI *pCoeffs, CAdaptiveScan *pScan,
                             Int *pRLCoeffs, const Int iCount)
{
    Int k, iRun = 1, iLevel, iNumNonzero = 0; 

	iLevel = pCoeffs[pScan[1].uScan];
    if (iLevel) {
        pScan[1].uTotal++;
        pRLCoeffs[iNumNonzero * 2] = 0;
        pRLCoeffs[iNumNonzero * 2 + 1] = iLevel;
        iNumNonzero++;
        iRun = 0;
    }
    for (k = 2; k < iCount; k++) {
        iLevel = pCoeffs[pScan[k].uScan];
        iRun++;
        if (iLevel) {
            pScan[k].uTotal++;
            if (pScan[k].uTotal > pScan[k - 1].uTotal) {
                CAdaptiveScan cTemp = pScan[k];
                pScan[k] = pScan[k - 1];
                pScan[k - 1] = cTemp;
            }
            pRLCoeffs[iNumNonzero * 2] = iRun - 1;
            pRLCoeffs[iNumNonzero * 2 + 1] = iLevel;
            iNumNonzero++;
            iRun = 0;
        }
    }
    return iNumNonzero;
}

/*************************************************************************
    Scan block with nonzero model bits, all trimmed
*************************************************************************/
#ifdef X86OPT_INLINE
__forceinline
#endif
static Int AdaptiveScanTrim (const PixelI *pCoeffs, CAdaptiveScan *pScan,
                             const Int iModelBits, Int *pRLCoeffs, const Int iCount)
{
    Int k, iRun = 1, iLevel, iNumNonzero = 0;
    Int iTemp; 
    unsigned int iThOff = (1 << iModelBits) - 1, iTh = iThOff * 2 + 1;

    iLevel = pCoeffs[pScan[1].uScan];

    if ((unsigned int)(iLevel + iThOff) >= iTh) {
        iTemp = abs (iLevel) >> iModelBits;
        pScan[1].uTotal++;
        pRLCoeffs[iNumNonzero * 2] = 0;
        pRLCoeffs[iNumNonzero * 2 + 1] = (iLevel < 0) ? -iTemp : iTemp;
        iNumNonzero++;
        iRun = 0;
    }
    for (k = 2; k < iCount; k++) {
        iRun++;
        iLevel = pCoeffs[pScan[k].uScan];
        if ((unsigned int)(iLevel + iThOff) >= iTh) {
            iTemp = abs (iLevel) >> iModelBits;
            pScan[k].uTotal++;
            if (pScan[k].uTotal > pScan[k - 1].uTotal) {
                CAdaptiveScan cTemp = pScan[k];
                pScan[k] = pScan[k - 1];
                pScan[k - 1] = cTemp;
            }
            pRLCoeffs[iNumNonzero * 2] = iRun - 1;
            pRLCoeffs[iNumNonzero * 2 + 1] =  (iLevel < 0) ? -iTemp : iTemp;
            iNumNonzero++;
            iRun = 0;
        }
    }
    return iNumNonzero;
}

/*************************************************************************
    Scan block with nonzero model bits
*************************************************************************/
/** saves around 1.5% at QP=1 (no SIMD opt) **/
#define USE_GRES_LUT
#ifdef USE_GRES_LUT
static const Int gRes[] = {
65*2+1, 63*2+1, 61*2+1, 59*2+1, 57*2+1, 55*2+1, 53*2+1, 51*2+1, 49*2+1, 47*2+1, 45*2+1, 43*2+1, 41*2+1,
39*2+1, 37*2+1, 35*2+1, 33*2+1, 31*2+1, 29*2+1, 27*2+1, 25*2+1, 23*2+1, 21*2+1, 19*2+1, 17*2+1, 15*2+1,
13*2+1, 11*2+1,  9*2+1,  7*2+1,  5*2+1,  3*2+1,
0,
2*2+1,  4*2+1,  6*2+1,  8*2+1, 10*2+1, 12*2+1, 14*2+1, 16*2+1, 18*2+1, 20*2+1, 22*2+1, 24*2+1,
26*2+1, 28*2+1, 30*2+1, 32*2+1, 34*2+1, 36*2+1, 38*2+1, 40*2+1, 42*2+1, 44*2+1, 46*2+1, 48*2+1, 50*2+1,
52*2+1, 54*2+1, 56*2+1, 58*2+1, 60*2+1, 62*2+1, 64*2+1 };
#endif // USE_GRES_LUT

#ifdef X86OPT_INLINE
//__forceinline
#endif
static Int AdaptiveScan (const PixelI *pCoeffs, Int *pResidual,
                         CAdaptiveScan *pScan,
                         const Int iModelBits, const Int iTrimBits,
                         Int *pRLCoeffs, const Int iCount)
{
    if (iModelBits == 0) {
        return AdaptiveScanZero (pCoeffs, pScan, pRLCoeffs, iCount);
    }
    else if (iModelBits <= iTrimBits) {
        return AdaptiveScanTrim (pCoeffs, pScan, iModelBits, pRLCoeffs, iCount);
    }
    else if (iTrimBits == 0
#ifdef USE_GRES_LUT
        && iModelBits < 6
#endif // USE_GRES_LUT
        ) {
        Int k, iRun = 0, iLevel, iNumNonzero = 0;
        Int iTemp, iTemp1; 
        const unsigned int iThOff = (1 << iModelBits) - 1, iTh = iThOff * 2 + 1;

        iLevel = pCoeffs[pScan[1].uScan];

        if ((unsigned int)(iLevel + iThOff) >= iTh) {
            iTemp1 = abs (iLevel);
            iTemp = iTemp1 >> iModelBits;
            pResidual[pScan[1].uScan] = (iTemp1 & iThOff) * 2;
            pScan[1].uTotal++;
            pRLCoeffs[iNumNonzero * 2] = iRun;
            pRLCoeffs[iNumNonzero * 2 + 1] = (iLevel < 0) ? -iTemp : iTemp;
            iNumNonzero++;
            iRun = 0;
        }
        else {
            iRun++;
#ifdef USE_GRES_LUT
            pResidual[pScan[1].uScan] = gRes[(iLevel + 32)];
#else // USE_GRES_LUT
            iTemp = -(iLevel < 0);
            pResidual[pScan[1].uScan] = (iLevel ^ iTemp) * 4 + (6 & iTemp) + (iLevel != 0);
#endif // USE_GRES_LUT
        }
        for (k = 2; k < iCount; k++) {
            const Int sk = pScan[k].uScan;
            //pResidual++;
            iLevel = pCoeffs[sk];
            if ((unsigned int)(iLevel + iThOff) >= iTh) {
                const Int iSign = -(iLevel < 0);
                iTemp1 = (iSign ^ iLevel) - iSign;
                iTemp = iTemp1 >> iModelBits;
                pResidual[sk] = (iTemp1 & iThOff) * 2;
                pScan[k].uTotal++;
                if (pScan[k].uTotal > pScan[k - 1].uTotal) {
                    CAdaptiveScan cTemp = pScan[k];
                    pScan[k] = pScan[k - 1];
                    pScan[k - 1] = cTemp;
                }
                pRLCoeffs[iNumNonzero * 2] = iRun;
                pRLCoeffs[iNumNonzero * 2 + 1] =  (iTemp ^ iSign) - iSign;
                iNumNonzero++;
                iRun = 0;
            }
            else {
                iRun++;
#ifdef USE_GRES_LUT
                pResidual[sk] = gRes[(iLevel + 32)];
#else // USE_GRES_LUT
                iTemp = -(iLevel < 0);
                pResidual[sk] = (iLevel ^ iTemp) * 4 + (6 & iTemp) + (iLevel != 0);
#endif // USE_GRES_LUT
                 ////(abs(iLevel) * 4) + ((iLevel < 0) * 2) + (iLevel != 0);
            }
        }
        return iNumNonzero;
    }
    else {
        Int k, iRun = 0, iLevel, iNumNonzero = 0;
        Int iTemp, iTemp1; 
        const unsigned int iThOff = (1 << iModelBits) - 1, iTh = iThOff * 2 + 1;

        iLevel = pCoeffs[pScan[1].uScan];
        //pResidual++;
        if ((unsigned int)(iLevel + iThOff) >= iTh) {
            iTemp1 = abs (iLevel);
            iTemp = iTemp1 >> iModelBits;
            pResidual[pScan[1].uScan] = ((iTemp1 & iThOff) >> iTrimBits) * 2;
            pScan[1].uTotal++;
            pRLCoeffs[iNumNonzero * 2] = iRun;
            pRLCoeffs[iNumNonzero * 2 + 1] = (iLevel < 0) ? -iTemp : iTemp;
            iNumNonzero++;
            iRun = 0;
        }
        else {
            iRun++;
            iTemp = -(iLevel < 0);
            iLevel = ((iLevel + iTemp) >> iTrimBits) - iTemp;  // round towards zero
            iTemp = -(iLevel < 0);
            pResidual[pScan[1].uScan] = (iLevel ^ iTemp) * 4 + (6 & iTemp) + (iLevel != 0);
        }
        for (k = 2; k < iCount; k++) {
            const Int sk = pScan[k].uScan;
            //pResidual++;
			iLevel = pCoeffs[sk];
            if ((unsigned int)(iLevel + iThOff) >= iTh) {
                iTemp1 = abs (iLevel);
                iTemp = iTemp1 >> iModelBits;
                pResidual[sk] = ((iTemp1 & iThOff) >> iTrimBits) * 2;
                pScan[k].uTotal++;
                if (pScan[k].uTotal > pScan[k - 1].uTotal) {
                    CAdaptiveScan cTemp = pScan[k];
                    pScan[k] = pScan[k - 1];
                    pScan[k - 1] = cTemp;
                }
                pRLCoeffs[iNumNonzero * 2] = iRun;
                pRLCoeffs[iNumNonzero * 2 + 1] =  (iLevel < 0) ? -iTemp : iTemp;
                iNumNonzero++;
                iRun = 0;
            }
            else {
                iRun++;
                iTemp = -(iLevel < 0);
                iLevel = ((iLevel + iTemp) >> iTrimBits) - iTemp;  // round towards zero
                iTemp = -(iLevel < 0);
                pResidual[sk] = (iLevel ^ iTemp) * 4 + (6 & iTemp) + (iLevel != 0);
            }
        }
        return iNumNonzero;
    }
}

/*************************************************************************
    EncodeMacroblockLowpass
*************************************************************************/
Int EncodeMacroblockLowpass (CWMImageStrCodec *pSC, CCodingContext *pContext, Int iMBX, Int iMBY)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;
    Int iFullChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : iChannels;
    CWMIMBInfo *pMBInfo = &pSC->MBInfo;
    BitIOInfo* pIO = pContext->m_pIOLP;

    CAdaptiveScan *pScan = pContext->m_aScanLowpass;
    Int  k, /*iPrevRun = -1,*/ iRun = 0;// iLastIndex = 0;
    Int iModelBits = pContext->m_aModelLP.m_iFlcBits[0];
    PixelI aBuf[2][8];
    Int aLaplacianMean[2] = {0, 0}, *pLM = aLaplacianMean;
    Int iChannel, iVal;
    Int aRLCoeffs[MAX_CHANNELS][32], iNumCoeffs[MAX_CHANNELS];
    const I32 *aDC[MAX_CHANNELS];
    Int aResidual[MAX_CHANNELS][16];
    Void (*putBits)(BitIOInfo* pIO, U32 uiBits, U32 cBits) = putBit16;

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    if (iChannels > MAX_CHANNELS)
        return ICERR_ERROR;

    if((pSC->WMISCP.bfBitstreamFormat != SPATIAL) && (pSC->pTile[pSC->cTileColumn].cBitsLP > 0))  // MB-based LP QP index
        encodeQPIndex(pIO, pMBInfo->iQIndexLP, pSC->pTile[pSC->cTileColumn].cBitsLP);

    // set arrays
    for (k = 0; k < iChannels; k++) {
        aDC[k] = pMBInfo->iBlockDC[k];
    }

    /** reset adaptive scan totals **/
    if (pSC->m_bResetRGITotals) {
        int iScale = 2;
        int iWeight = iScale * 16;
        pScan[0].uTotal = MAXTOTAL;
        for (k = 1; k < 16; k++) {
            pScan[k].uTotal = iWeight;
            iWeight -= iScale;
        }
    }

    /** scan 4x4 transform **/
    for (iChannel = 0; iChannel < iFullChannels; iChannel++) {
        iNumCoeffs[iChannel] = AdaptiveScan (aDC[iChannel], aResidual[iChannel],
            pScan, iModelBits, 0, aRLCoeffs[iChannel], 16);

        iModelBits = pContext->m_aModelLP.m_iFlcBits[1];
    }

    if (cf == YUV_420 || cf == YUV_422) {  /** interleave U and V **/
        static const Int aRemap[] = { 4,  1,2,3,  5,6,7 };
        const Int *pRemap = aRemap + (cf == YUV_420);
        const Int iCount = (cf == YUV_420) ? 6 : 14;
        Int iCoef = 0;

        iRun = 0;
        iModelBits = pContext->m_aModelLP.m_iFlcBits[1];

        for (k = 0; k < iCount; k++) {
            Int iIndex = pRemap[k >> 1];
            Int iDC = aDC[(k & 1) + 1][iIndex];
            aBuf[k & 1][iIndex] = iVal = abs (iDC) >> iModelBits;

            if (iVal) {
                aRLCoeffs[1][iCoef * 2] = iRun;
                aRLCoeffs[1][iCoef * 2 + 1] = (iDC < 0) ? -iVal : iVal;
                iCoef++;
                iRun = 0;
            }
            else {
                iRun++;
            }
        }
        iNumCoeffs[1] = iCoef;
    }

    /** in raw mode, this can take 6% of the bits in the extreme low rate case!!! **/
    if (cf == YUV_420 || cf == YUV_422)
        iFullChannels = 2;

    if (cf == YUV_420 || cf == YUV_422 || cf == YUV_444) {
        int iCBP, iMax = iFullChannels * 4 - 5; /* actually (1 << iNChannels) - 1 **/
        int iCountM = pContext->m_iCBPCountMax, iCountZ = pContext->m_iCBPCountZero;
        iCBP = (iNumCoeffs[0] > 0) + (iNumCoeffs[1] > 0) * 2;
        if (iFullChannels == 3)
            iCBP += (iNumCoeffs[2] > 0) * 4;

        if (iCountZ <= 0 || iCountM < 0) {
            iVal = iCBP;
            if (iCountM < iCountZ) {
                iVal = iMax - iCBP;
            }
            if (iVal == 0)
                putBit16z(pIO, 0, 1);
            else if (iVal == 1)
                putBit16z(pIO, (iFullChannels + 1) & 0x6, iFullChannels);  // 2 or 4
            else
                putBit16z(pIO, iVal + iMax + 1, iFullChannels + 1);  // cbp + 4 or cbp + 8
        }
        else {
            putBit16z(pIO, iCBP, iFullChannels);
        }

        iCountM += 1 - 4 * (iCBP == iMax);//(b + c - 2*a);
        iCountZ += 1 - 4 * (iCBP == 0);//(a + b - 2*c);
        if (iCountM < -8)
            iCountM = -8;
        else if (iCountM > 7)
            iCountM = 7;
        pContext->m_iCBPCountMax = iCountM;

        if (iCountZ < -8)
            iCountZ = -8;
        else if (iCountZ > 7)
            iCountZ = 7;
        pContext->m_iCBPCountZero = iCountZ;
    }
    else { /** 1 or N channel **/
        for (iChannel = 0; iChannel < iChannels; iChannel++) {
            putBit16z(pIO, (iNumCoeffs[iChannel] > 0), 1);
        }
    }

    // set appropriate function pointer
    if (pContext->m_aModelLP.m_iFlcBits[0] > 14 || pContext->m_aModelLP.m_iFlcBits[1] > 14) {
        putBits = putBit32;
    }

    iModelBits = pContext->m_aModelLP.m_iFlcBits[0];

    for (iChannel = 0; iChannel < iFullChannels; iChannel++) {
        const Int *pRL = aRLCoeffs[iChannel];
        Int iCoef = iNumCoeffs[iChannel];

        if (iCoef) {
            (*pLM) += iCoef;
            if(EncodeBlock (iChannel > 0, pRL, iCoef, pContext->m_pAHexpt, CTDC,
                pIO, 1 + 9 * ((cf == YUV_420) && (iChannel == 1)) + ((cf == YUV_422) && (iChannel == 1))) != ICERR_OK)
                return ICERR_ERROR;
        }

        if (iModelBits) {
            if ((cf == YUV_420 || cf == YUV_422) && iChannel) {  // 420/422 chroma
                for (k = 1; k < ((cf == YUV_420) ? 4 : 8); k++) {
                    putBits(pIO, abs(aDC[1][k]), iModelBits);
                    if (aBuf[0][k] == 0 && aDC[1][k]) {
                        putBit16z(pIO, (aDC[1][k] < 0), 1);
                    }                      
                    putBits(pIO, abs(aDC[2][k]), iModelBits);
                    if (aBuf[1][k] == 0 && aDC[2][k]) {
                        putBit16z(pIO, (aDC[2][k] < 0), 1);
                    }
                }
            }
            else {  // normal case
                for (k = 1; k < 16; k++) {
                    putBit16z(pIO, aResidual[iChannel][k] >> 1, iModelBits + (aResidual[iChannel][k] & 1));
                }
            }
        }

        pLM = aLaplacianMean + 1;
        iModelBits = pContext->m_aModelLP.m_iFlcBits[1];
    }

    writeIS_L1(pSC, pIO);

    UpdateModelMB (cf, iChannels, aLaplacianMean, &pContext->m_aModelLP);

    if (pSC->m_bResetContext) {
        AdaptLowpassEnc(pContext);
    }

    return ICERR_OK;
}

/*************************************************************************
    Adapt
*************************************************************************/
Void AdaptLowpassEnc(CCodingContext *pSC)
{
    Int kk;
    for (kk = 0; kk < CONTEXTX + CTDC; kk++) { /** adapt fixed code (index 0 and 1) as well **/
        AdaptDiscriminant (pSC->m_pAHexpt[kk]);
    }
}

Void AdaptHighpassEnc(CCodingContext *pSC)
{
    Int kk;
    //Adapt (pSC->m_pAdaptHuffCBPCY, FALSE);
    AdaptDiscriminant (pSC->m_pAdaptHuffCBPCY);
    AdaptDiscriminant (pSC->m_pAdaptHuffCBPCY1);
    for (kk = 0; kk < CONTEXTX; kk++) { /** adapt fixed code **/
        AdaptDiscriminant (pSC->m_pAHexpt[kk + CONTEXTX + CTDC]);
    }
}

/*************************************************************************
    Experimental code -- encodeBlock
    SR = <0 1 2> == <last, nonsignificant, significant run>
    alphabet 12:
        pAHexpt[0] == <SR', SL, SR | first symbol>
    alphabet 6:
        pAHexpt[1] == <SR', SL | continuous>
        pAHexpt[2] == <SR', SL | continuous>
    alphabet 4:
        pAHexpt[3] == <SR', SL | 1 free slot> (SR may be last or insignificant only)
    alphabet f(run) (this can be extended to 6 contexts - SL and SR')
        pAHexpt[4] == <run | continuous>
    alphabet f(lev) (this can be extended to 9 contexts)
        pAHexpt[5-6] == <lev | continuous> first symbol
        pAHexpt[7-8] == <lev | continuous> condition on SRn no use
*************************************************************************/
#ifdef X86OPT_INLINE
__forceinline
#endif
static Void EncodeSignificantRun (Int iRun, Int iMaxRun, struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pOut)
{
    Int iIndex, iFLC, iBin;
    static const Int aIndex[] = {
        0,1,2,2,3,3,4,4,4,4,4,4,4,4,
        0,1,2,2,3,3,4,4,4,4,0,0,0,0,
        0,1,2,3,4,4 
    };

    if (iMaxRun < 5) {
        //if (iMaxRun == 4) {
            //static const Int gCode[] = { 0, 1, 1, 1 };
            static const Int gLen[] = { 3, 3, 2, 1 };
            if (iMaxRun > 1)
                putBit16z(pOut, (iMaxRun != iRun), gLen[iMaxRun - iRun] - (4 - iMaxRun));
        //}
        //else if (iMaxRun == 3) {
        //    if (iRun == 1) {
        //        putBit16z(pOut, 1, 1);
        //    }
        //    else {
        //        putBit16z(pOut, 3 ^ iRun, 2);
        //    }
        //}
        //else if (iMaxRun == 2) {
        //    putBit16z(pOut, 2 - iRun, 1);
        //}
        return;
    }

    iBin = gSignificantRunBin[iMaxRun];
    iIndex = aIndex[iRun + iBin * 14 - 1];
    iFLC = gSignificantRunFixedLength[iIndex + iBin * 5];
    putBit16z(pOut, pAHexpt->m_pTable[iIndex * 2 + 1], pAHexpt->m_pTable[iIndex * 2 + 2]);
    //this always uses table 0
    //pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
    putBit16(pOut, iRun + 1, iFLC);
}

#ifdef X86OPT_INLINE
__forceinline
#endif
static Void EncodeFirstIndex (Bool bChroma, Int iLoc, Int iCont, Int iIndex, Int iSign,
                  struct CAdaptiveHuffman **ppAHexpt, BitIOInfo* pOut)
{
    // Int iContext = iCont + 1 + bChroma * 3;
    struct CAdaptiveHuffman *pAHexpt = ppAHexpt[bChroma * 3];
    UNREFERENCED_PARAMETER( iLoc );
    UNREFERENCED_PARAMETER( iCont );
    pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
    pAHexpt->m_iDiscriminant1 += pAHexpt->m_pDelta1[iIndex];
    putBit16z(pOut, pAHexpt->m_pTable[iIndex * 2 + 1] * 2 + iSign, pAHexpt->m_pTable[iIndex * 2 + 2] + 1);
    return;
}

#ifdef X86OPT_INLINE
__forceinline
#endif
static Void EncodeIndex (Bool bChroma, Int iLoc, Int iCont, Int iIndex, Int  iSign,
                         struct CAdaptiveHuffman **ppAHexpt, BitIOInfo* pOut)
{
    Int iContext = iCont + 1 + bChroma * 3;

    if (iLoc < 15) {
        struct CAdaptiveHuffman *pAHexpt = ppAHexpt[iContext];
        pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
        pAHexpt->m_iDiscriminant1 += pAHexpt->m_pDelta1[iIndex];
        putBit16z(pOut, pAHexpt->m_pTable[iIndex * 2 + 1] * 2 + iSign, pAHexpt->m_pTable[iIndex * 2 + 2] + 1);
    }
    else if (iLoc == 15) {
        static const U32 gCode[] = { 0, 6, 2, 7 };
        static const U32 gLen[] = { 1, 3, 2, 3 };
        putBit16z(pOut, gCode[iIndex] * 2 + iSign, gLen[iIndex] + 1);
        return;
    }
    else {//if (iLoc == 16) {
        putBit16z(pOut, iIndex * 2 + iSign, 1 + 1);
        return;
    }
}

#ifdef X86OPT_INLINE
__forceinline
#endif
static Int EncodeBlock (Bool bChroma, const Int *aLocalCoef, Int iNumNonzero,
                         struct CAdaptiveHuffman **pAHexpt, Int iContextOffset,
                         BitIOInfo* pOut, UInt iLocation)
{
    Int iSR, iSL, iSRn, iIndex, k, iCont, iLev;

    /** first symbol **/
    iLev = aLocalCoef[1];
    iSR = (aLocalCoef[0] == 0);
    iSL = ((unsigned int) (iLev + 1) > 2U);
    iSRn = 1;
    if (iNumNonzero == 1) {
        iSRn = 0;
    }
    else if (aLocalCoef[2] > 0) {
        iSRn = 2;
    }
    iIndex = iSRn * 4 + iSL * 2 + iSR;
    EncodeFirstIndex (bChroma, iLocation, 0, iIndex, (iLev < 0), pAHexpt + iContextOffset, pOut);
    iCont = iSR & iSRn;
    if (iSL) {
        EncodeSignificantAbsLevel ((UInt)(abs(iLev) - 1), pAHexpt[6 + iContextOffset + iCont], pOut);
    }
    if (iSR == 0) {
        EncodeSignificantRun (aLocalCoef[0], 15 - iLocation, pAHexpt[0], pOut);
    }
    iLocation += aLocalCoef[0] + 1;

    for (k = 1; k < iNumNonzero; k++) {
        if (iSRn == 2) {
            EncodeSignificantRun (aLocalCoef[k * 2], 15 - iLocation, pAHexpt[0], pOut);
        }
        iLocation += aLocalCoef[k * 2] + 1;
        iSRn = 1;
        if (k == iNumNonzero - 1) {
            iSRn = 0;
        }
        else if (aLocalCoef[k * 2 + 2] > 0) {
            iSRn = 2;
        }
        //iSL = (abs(aLocalCoef[k * 2 + 1]) > 1);
        iLev = aLocalCoef[k * 2 + 1];
        iSL = ((unsigned int) (iLev + 1) > 2U);
        iIndex = iSRn * 2 + iSL;
        EncodeIndex (bChroma, iLocation, iCont, iIndex, (iLev < 0), pAHexpt + iContextOffset, pOut);

        iCont &= iSRn;  /** big difference! **/
        if (iSL) {
            EncodeSignificantAbsLevel ((UInt)(abs(iLev) - 1), pAHexpt[6 + iContextOffset + iCont], pOut);
        }
        //else {
        //    putBit16z(pOut, (iLev < 0), 1);
        //}
    }

    return ICERR_OK;
}

/*************************************************************************
    CodeCoeffs
*************************************************************************/
#ifdef X86OPT_INLINE
__forceinline
#endif
static Int CodeCoeffs (CWMImageStrCodec * pSC, CCodingContext *pContext,
                        Int iMBX, Int iMBY, BitIOInfo* pIO, BitIOInfo* pIOFL)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;
    const Int iPlanes = (cf == YUV_420 || cf == YUV_422) ? 1 : iChannels;
    CWMIMBInfo * pMBInfo = &pSC->MBInfo;
    CAdaptiveScan *pScan;
    Int iBlock, iNBlocks = 4;
    Int iSubblock, iIndex = 0;
    Int i, k;
    const Int iNumCoeffs = 16;
    Int iModelBits = pContext->m_aModelAC.m_iFlcBits[0], iFlex = 0, iTrim = 0, iMask = 0;
    Int aLaplacianMean[2] = { 0, 0}, *pLM = aLaplacianMean;
    Bool bChroma = FALSE;

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    assert (iModelBits < 16);
    if (pContext->m_iTrimFlexBits <= iModelBits && pSC->WMISCP.sbSubband != SB_NO_FLEXBITS) {
        iTrim = pContext->m_iTrimFlexBits;
        iFlex = iModelBits - pContext->m_iTrimFlexBits;
        iMask = (1 << iFlex) - 1;
    }

    if(pSC->WMISCP.sbSubband != SB_NO_FLEXBITS)
        writeIS_L1(pSC, pIOFL);

    /** set scan arrays **/
    if (pMBInfo->iOrientation == 1) {
        pScan = pContext->m_aScanVert;
    }
    else {
        pScan = pContext->m_aScanHoriz;
    }

    /** write out coefficients **/
    for (i = 0; i < iPlanes; i++) {
        Int iPattern = pMBInfo->iCBP[i];

        if (cf == YUV_420) {
            iNBlocks = 6;
            iPattern += (pMBInfo->iCBP[1] << 16) + (pMBInfo->iCBP[2] << 20);
        }
        else if (cf == YUV_422) {
            iNBlocks = 8;
            iPattern += (pMBInfo->iCBP[1] << 16) + (pMBInfo->iCBP[2] << 24);
        }

        for (iBlock = iIndex = 0; iBlock < iNBlocks; iBlock++) {
            writeIS_L2(pSC, pIO);
            if (pIO != pIOFL)
                writeIS_L2(pSC, pIOFL);
            
            for (iSubblock = 0; iSubblock < 4; iSubblock++, iPattern >>= 1, iIndex ++) {
                const PixelI *pCoeffs = NULL;

                if(iBlock < 4){
                    pCoeffs = pSC->pPlane[i] + blkOffset[iIndex];
                }
                else if(cf == YUV_420){
                    pCoeffs = pSC->pPlane[iBlock - 3] + blkOffsetUV[iSubblock];
                }
                else if(cf == YUV_422){
                    pCoeffs = pSC->pPlane[1 + ((iBlock - 4) >> 1)] + blkOffsetUV_422[(iBlock & 1) * 4 + iSubblock];
                }

                /** put AC bits **/

                if ((iPattern & 1) == 0) {
                    if (iFlex) {
                      /**  FLC only, all else is skipped **/
                        for (k = 1; k < iNumCoeffs; k++) {
                            Int data = pCoeffs[dctIndex[0][k]];
                            Int atdata = (abs(data) >> iTrim);
                            Int word = atdata & iMask, len = iFlex;
                            if (atdata) {
                                word += word + (data < 0);
                                len++;
                            }
                            putBit16z(pIOFL, word, len);
                        }
                    }
                }
                else {
// WARNING!!! interaction between lowpass coefficients and highpass scan ordering - may lead to break in decoding when model bits is nonzero!
// Fix is to use same scan order in model bits transmission, and defer update of scan order to end of block
                /** collect coefficients **/
                    Int aLocalCoef[32], iNumNonzero = 0;
                    Int aResidual[16];

                    iNumNonzero = AdaptiveScan (pCoeffs, aResidual,
                        pScan, iModelBits, iTrim, aLocalCoef, 16);
                    (*pLM) += iNumNonzero;
                    EncodeBlock (bChroma, aLocalCoef, iNumNonzero, pContext->m_pAHexpt, CTDC + CONTEXTX, pIO, 1);

                    if (iFlex) {
                        for (k = 1; k < iNumCoeffs; k++) {
                            putBit16z(pIOFL, aResidual[dctIndex[0][k]] >> 1, iFlex + (aResidual[dctIndex[0][k]] & 1));
                        }
                    }
                }
            }
            if (iBlock == 3) {
                iModelBits = pContext->m_aModelAC.m_iFlcBits[1];
                assert (iModelBits < 16);
                pLM = aLaplacianMean + 1;
                bChroma = TRUE;
                iTrim = iFlex = iMask = 0;
                if (pContext->m_iTrimFlexBits <= iModelBits && pSC->WMISCP.sbSubband != SB_NO_FLEXBITS) {
                    iTrim = pContext->m_iTrimFlexBits;
                    iFlex = iModelBits - iTrim;
                    iMask = (1 << iFlex) - 1;
                }
            }
        }
    }

    /** update model at end of MB **/
    UpdateModelMB (cf, iChannels, aLaplacianMean, &pContext->m_aModelAC);

    return ICERR_OK;
}


/*************************************************************************
    CodeCBP
*************************************************************************/
static Void CodeCBP (CWMImageStrCodec * pSC, CCodingContext *pContext, 
                     Int iMBX, Int iMBY, BitIOInfo *pIO)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannel = (cf == NCOMPONENT || cf == CMYK) ? (Int) pSC->m_param.cNumChannels : 1;
    Int iDiffCBPCY, iDiffCBPCU = 0, iDiffCBPCV = 0, iDY;
    Int iBlock, i, k;
    static const Int aNumOnes[] = { 0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4 };
    static const Int aTabLen[] =  { 0, 2, 2, 2, 2, 2, 3, 2, 2, 3, 3, 2, 3, 2, 2, 0 };
    static const Int aTabCode[] = { 0, 0, 1, 0, 2, 1, 4, 3, 3, 5, 6, 2, 7, 1, 0, 0 };
    CAdaptiveHuffman *pAH;
    Int iCount, iPattern, iCode, iCodeU = 0, iCodeV = 0;

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    predCBPEnc(pSC, pContext);
    writeIS_L1(pSC, pIO);

    iDiffCBPCU = pSC->MBInfo.iDiffCBP[1];
    iDiffCBPCV = pSC->MBInfo.iDiffCBP[2];

    for (i = 0; i < iChannel; i++) {
        iDiffCBPCY = pSC->MBInfo.iDiffCBP[i];

        if(cf == YUV_420){ // PackCBP420
            iDiffCBPCY = (iDiffCBPCY & 0xf) + ((iDiffCBPCU & 1) <<  4) + ((iDiffCBPCV & 1) <<  5) +
                ((iDiffCBPCY & 0x00f0) << 2) + ((iDiffCBPCU & 2) <<  9) + ((iDiffCBPCV & 2) << 10) +
                ((iDiffCBPCY & 0x0f00) << 4) + ((iDiffCBPCU & 4) << 14) + ((iDiffCBPCV & 4) << 15) +
                ((iDiffCBPCY & 0xf000) << 6) + ((iDiffCBPCU & 8) << 19) + ((iDiffCBPCV & 8) << 20);
        }
        else if(cf == YUV_422){// PackCBP422
            iDiffCBPCY = (iDiffCBPCY & 0xf) + ((iDiffCBPCU & 1) <<  4) + ((iDiffCBPCU & 4) <<  3) +
                ((iDiffCBPCV & 1) << 6) + ((iDiffCBPCV & 4) <<  5) +
                ((iDiffCBPCY & 0x00f0) << 4) + ((iDiffCBPCU & 2) <<  11) + ((iDiffCBPCU & 8) << 10) +
                ((iDiffCBPCV & 2) <<  13) + ((iDiffCBPCV & 8) <<  12) +
                ((iDiffCBPCY & 0x0f00) << 8) + ((iDiffCBPCU & 16) << 16) + ((iDiffCBPCU & 64) << 15) +
                ((iDiffCBPCV & 16) <<  18) + ((iDiffCBPCV & 64) <<  17) +
                ((iDiffCBPCY & 0xf000) << 12) + ((iDiffCBPCU & 32) << 23) + ((iDiffCBPCU & 128) << 22) +
                ((iDiffCBPCV & 32) <<  25) + ((iDiffCBPCV & 128) <<  24);
        }

        /** send CBPCY **/
        iPattern = 0;
        iDY = iDiffCBPCY;
        if (cf == YUV_444) {
            iDY |= (iDiffCBPCU | iDiffCBPCV);
        }

        for (iBlock = 0; iBlock < 4; iBlock++) {
            if(cf == YUV_422) {
                iPattern |= ((iDY & 0xff) != 0) * 0x10;
                iDY >>= 8;
            }
            else if (cf == YUV_420) {
                iPattern |= ((iDY & 0x3f) != 0) * 0x10;
                iDY >>= 6;
            }
            else {
                iPattern |= ((iDY & 0xf) != 0) * 0x10;
                iDY >>= 4;
            }
            iPattern >>= 1;
        }

        pAH = pContext->m_pAdaptHuffCBPCY1;
        iCount = aNumOnes[iPattern];
        putBit16z(pIO, pAH->m_pTable[iCount * 2 + 1], pAH->m_pTable[iCount * 2 + 2]);
        pAH->m_iDiscriminant += pAH->m_pDelta[iCount];
        if (aTabLen[iPattern]) {
            putBit16z(pIO, aTabCode[iPattern], aTabLen[iPattern]);
        }

        for (iBlock = 0; iBlock < 4; iBlock++) {
            switch (cf) {
                case YUV_444:
                    iCode = iDiffCBPCY & 0xf;
                    iCodeU = iDiffCBPCU & 0xf;
                    iCodeV = iDiffCBPCV & 0xf;
                    iCode |= ((iCodeU != 0) << 4);
                    iCode |= ((iCodeV != 0) << 5);
                    iDiffCBPCY >>= 4;
                    iDiffCBPCU >>= 4;
                    iDiffCBPCV >>= 4;
                    break;

                case YUV_422:
                    iCode = iDiffCBPCY & 0xff;
                    iDiffCBPCY >>= 8;
                    break;

                case YUV_420:
                    iCode = iDiffCBPCY & 0x3f;
                    iDiffCBPCY >>= 6;
                    break;

                default:
                    iCode = iDiffCBPCY & 0xf;
                    iDiffCBPCY >>= 4;
            }

            if (iCode) {
                static const Int gTab0[16]  = { 0,1,1,2, 1,3,3,4, 1,3,3,4, 2,4,4,5 };
                static const Int gFL0[16]   = { 0,2,2,1, 2,2,2,2, 2,2,2,2, 1,2,2,0 };
                static const Int gCode0[16] = { 0,0,1,0, 2,0,1,0, 3,2,3,1, 1,2,3,0 };
                int val, iChroma = (iCode >> 4);
                iCode &= 0xf;
                
                if(cf == YUV_422) {
                    iCodeU = (iChroma & 3);
                    iCodeV = ((iChroma >> 2) & 3);
                    iChroma = (iCodeU == 0 ? 0 : 1);
                    if(iCodeV != 0) {
                        iChroma += 2;
                    }
                }

                if (iChroma) {
                    if (gTab0[iCode] > 2) {
                        val = 8;
                    }
                    else {
                        val = gTab0[iCode] + 6 - 1;
                    }
                }
                else {
                    val = gTab0[iCode] - 1;
                }
                pAH = pContext->m_pAdaptHuffCBPCY;
                putBit16z(pIO, pAH->m_pTable[val * 2 + 1], pAH->m_pTable[val * 2 + 2]);
                pAH->m_iDiscriminant += pAH->m_pDelta[val];

                if (iChroma) {
                    if (iChroma == 1)
                        putBit16z(pIO, 1, 1);
                    else
                        putBit16z(pIO, 3 - iChroma, 2);
                }
                if (val == 8) {
                    if (gTab0[iCode] == 3) {
                        putBit16z(pIO, 1, 1);
                    }
                    else {
                        putBit16z(pIO, 5 - gTab0[iCode], 2);
                    }
                }
                if (gFL0[iCode]) {
                    putBit16z(pIO, gCode0[iCode], gFL0[iCode]);
                }

                if (cf == YUV_444) {
                    pAH = pContext->m_pAHexpt[1];
                    iPattern = iCodeU;
                    for (k = 0; k < 2; k++) {
                        if (iPattern) {
                            iCount = aNumOnes[iPattern];
                            iCount--;
                            putBit16z(pIO, pAH->m_pTable[iCount * 2 + 1], pAH->m_pTable[iCount * 2 + 2]);
                            if (aTabLen[iPattern]) {
                                putBit16z(pIO, aTabCode[iPattern], aTabLen[iPattern]);
                            }
                        }
                        iPattern = iCodeV;
                    }
                }
                else if (cf == YUV_422){
                    iPattern = iCodeU;
                    for(k = 0; k < 2; k ++) {
                        if(iPattern) {
                            if (iPattern == 1)
                                putBit16z(pIO, 1, 1);
                            else {
                                putBit16z(pIO, 3 - iPattern, 2);
                            }
                        }
                        iPattern = iCodeV;
                    }
                }
            }
        }
    }
}

/*************************************************************************
    macroblock encode function using 4x4 transforms
*************************************************************************/
Int EncodeMacroblockHighpass(CWMImageStrCodec * pSC, CCodingContext *pContext, Int iMBX, Int iMBY)
{
    BitIOInfo* pIO = pContext->m_pIOAC;
    BitIOInfo* pIOFL = pContext->m_pIOFL;

    if((pSC->WMISCP.bfBitstreamFormat != SPATIAL) && (pSC->pTile[pSC->cTileColumn].cBitsHP > 0))  // MB-based HP QP index
        encodeQPIndex(pIO, pSC->MBInfo.iQIndexHP, pSC->pTile[pSC->cTileColumn].cBitsHP);

    /** reset adaptive scan totals **/
    if (pSC->m_bResetRGITotals) {
        Int iScale = 2;
        Int iWeight = iScale * 16;
        Int k;
        pContext->m_aScanHoriz[0].uTotal = pContext->m_aScanVert[0].uTotal = MAXTOTAL;
        for (k = 1; k < 16; k++) {
            pContext->m_aScanHoriz[k].uTotal = pContext->m_aScanVert[k].uTotal = iWeight;
            iWeight -= iScale;
        }
    }
    CodeCBP(pSC, pContext, iMBX, iMBY, pIO);
    if(CodeCoeffs(pSC, pContext, iMBX, iMBY, pIO, pIOFL) != ICERR_OK)
        return ICERR_ERROR;

    if (pSC->m_bResetContext) {
        AdaptHighpassEnc(pContext);
    }

    return ICERR_OK;
}
