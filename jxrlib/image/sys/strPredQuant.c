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

#define ORIENT_WEIGHT 4

/* reciprocal (pMantissa, exponent) lookup table */
typedef struct tagQPManExp
{
    int iMan;
    int iExp;
} QPManExp;

static QPManExp gs_QPRecipTable[32] = {
    {0x0, 0}, // 0, invalid
    {0x0, 0}, // 1, lossless
    {0x0, 1}, // 2
    {0xaaaaaaab, 1},
    {0x0, 2}, // 4
    {0xcccccccd, 2},
    {0xaaaaaaab, 2},
    {0x92492493, 2},
    {0x0, 3}, // 8
    {0xe38e38e4, 3},
    {0xcccccccd, 3},
    {0xba2e8ba3, 3},
    {0xaaaaaaab, 3},
    {0x9d89d89e, 3},
    {0x92492493, 3},
    {0x88888889, 3},
    {0x0, 4}, // 16
    {0xf0f0f0f1, 4},
    {0xe38e38e4, 4},
    {0xd79435e6, 4},
    {0xcccccccd, 4},
    {0xc30c30c4, 4},
    {0xba2e8ba3, 4},
    {0xb21642c9, 4},
    {0xaaaaaaab, 4},
    {0xa3d70a3e, 4},
    {0x9d89d89e, 4},
    {0x97b425ee, 4},
    {0x92492493, 4},
    {0x8d3dcb09, 4},
    {0x88888889, 4},
    {0x84210843, 4},
};

/*************************************************************************
    QPRemapping
*************************************************************************/

Void remapQP(CWMIQuantizer * pQP, I32 iShift, Bool bScaledArith)
{
    U8 uiQPIndex = pQP->iIndex;

    if(uiQPIndex == 0) // Lossless mode!
        pQP->iQP = 1, pQP->iMan = pQP->iExp = pQP->iOffset = 0;
    else if (!bScaledArith) {
        I32 man = 0, exp = 0;
        const I32 ciShift = SHIFTZERO - (SHIFTZERO + QPFRACBITS); // == -QPFRACBITS

        if (pQP->iIndex < 32)
            man = (pQP->iIndex + 3) >> 2, exp = ciShift + 2;
        else if (pQP->iIndex < 48)
            man = (16 + (pQP->iIndex & 0xf) + 1) >> 1, exp = ((pQP->iIndex >> 4) - 1) + 1 + ciShift;
        else
            man = 16 + (pQP->iIndex & 0xf), exp = ((pQP->iIndex >> 4) - 1) + ciShift;

        pQP->iQP = man << exp;
        pQP->iMan = gs_QPRecipTable[man].iMan;
        pQP->iExp = gs_QPRecipTable[man].iExp + exp;
        pQP->iOffset = ((pQP->iQP * 3 + 1) >> 3);
#if defined(WMP_OPT_QT)
        pQP->f1_QP = 1.0f / pQP->iQP;
        pQP->d1_QP = 1.0 / pQP->iQP;
#endif    
    }
    else {
        I32 man = 0, exp = 0;

        if(pQP->iIndex < 16)
            man = pQP->iIndex, exp = iShift;
        else
            man = 16 + (pQP->iIndex & 0xf), exp = ((pQP->iIndex >> 4) - 1) + iShift;
        
        pQP->iQP = man << exp;
        pQP->iMan = gs_QPRecipTable[man].iMan;
        pQP->iExp = gs_QPRecipTable[man].iExp + exp;
        pQP->iOffset = ((pQP->iQP * 3 + 1) >> 3);
#if defined(WMP_OPT_QT)
        pQP->f1_QP = 1.0f / pQP->iQP;
        pQP->d1_QP = 1.0 / pQP->iQP;
#endif    
    }
}

/* allocate PredInfo buffers */
Int allocatePredInfo(CWMImageStrCodec *pSC)
{
    size_t i, j;
    // COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const size_t mbWidth = pSC->cmbWidth;
    const size_t iChannels = pSC->m_param.cNumChannels;
    CWMIPredInfo* pMemory;
    Bool b32Bit = sizeof(size_t) == 4;
    
    if(b32Bit) // integer overlow/underflow check for 32-bit system
        if(((mbWidth >> 16) * iChannels * 2 * sizeof(CWMIPredInfo)) & 0xffff0000)
            return ICERR_ERROR;    
    pMemory = (CWMIPredInfo *)malloc(mbWidth * iChannels * 2 * sizeof(CWMIPredInfo));
    if (pMemory == NULL)
        return ICERR_ERROR;

    pSC->pPredInfoMemory = pMemory;
    for(i = 0; i < iChannels; i ++){
        pSC->PredInfo[i] = pMemory;
        pMemory += mbWidth;
        pSC->PredInfoPrevRow[i] = pMemory;
        pMemory += mbWidth;
        
        for(j = 0; j < mbWidth; j ++){
            pSC->PredInfo[i][j].piAD = pSC->PredInfo[i][j].iAD;
            pSC->PredInfoPrevRow[i][j].piAD = pSC->PredInfoPrevRow[i][j].iAD;
        }
    }
    
    return ICERR_OK;
}

/* clear PredInfo buffers */
Void freePredInfo(CWMImageStrCodec *pSC)
{
    if (pSC->pPredInfoMemory)
        free (pSC->pPredInfoMemory);
    pSC->pPredInfoMemory = NULL;
}

/* get AC prediction mode: 0(from left) 1(from top) 2(none) */
Int getACPredMode(CWMIMBInfo * pMBInfo, COLORFORMAT cf)
{
    //Int blkIdx = (cf == Y_ONLY ? 16 : (cf == YUV_420 ? 24 : (cf == YUV_422 ? 32 : 48)));
    PixelI * pCoeffs = pMBInfo->iBlockDC[0];
    Int StrH = abs(pCoeffs[1]) + abs(pCoeffs[2]) + abs(pCoeffs[3]);
    Int StrV = abs(pCoeffs[4]) + abs(pCoeffs[8]) + abs(pCoeffs[12]);

    if(cf != Y_ONLY && cf != NCOMPONENT){
        PixelI * pCoeffsU = pMBInfo->iBlockDC[1];
        PixelI * pCoeffsV = pMBInfo->iBlockDC[2];

        StrH += abs(pCoeffsU[1]) + abs(pCoeffsV[1]);
        if(cf == YUV_420){
            StrV += abs(pCoeffsU[2]) + abs(pCoeffsV[2]);
        }
        else if (cf == YUV_422){
            StrV += abs(pCoeffsU[2]) + abs(pCoeffsV[2]) + abs(pCoeffsU[6]) + abs(pCoeffsV[6]);
            StrH += abs(pCoeffsU[5]) + abs(pCoeffsV[5]);
        }
        else { // YUV_444 or CMYK
            StrV += abs(pCoeffsU[4]) + abs(pCoeffsV[4]);
        }
    }

    return (StrH * ORIENT_WEIGHT < StrV ? 1 : (StrV * ORIENT_WEIGHT < StrH ? 0 : 2));
}

/* get DCAC prediction mode: 0(from left) 1(from top) 2(none) */
Int getDCACPredMode(CWMImageStrCodec *pSC, size_t mbX)
{
    Int iDCMode, iADMode = 2;  // DC: 0(left) 1(top) 2(mean) 3(no)
                               // AD: 0(left) 1(top) 2(no)

    if(pSC->m_bCtxLeft && pSC->m_bCtxTop){ // topleft corner, no prediction
        iDCMode = 3;
    }
    else if(pSC->m_bCtxLeft){
        iDCMode = 1; // left column, predict from top
    }
    else if(pSC->m_bCtxTop){
        iDCMode = 0; // top row, predict from left
    }
    else{
        COLORFORMAT cf = pSC->m_param.cfColorFormat;
        Int iL = pSC->PredInfo[0][mbX - 1].iDC, iT = pSC->PredInfoPrevRow[0][mbX].iDC, iTL = pSC->PredInfoPrevRow[0][mbX - 1].iDC;
        Int StrH, StrV;

        if(cf == Y_ONLY || cf == NCOMPONENT){ // CMYK uses YUV metric
            StrH = abs(iTL - iL);
            StrV = abs(iTL - iT);
        }
        else{
            CWMIPredInfo * pTU = pSC->PredInfoPrevRow[1] + mbX, * pLU = pSC->PredInfo[1] + mbX - 1, * pTLU = pTU - 1;
            CWMIPredInfo * pTV = pSC->PredInfoPrevRow[2] + mbX, * pLV = pSC->PredInfo[2] + mbX - 1, * pTLV = pTV - 1;
            Int scale = (cf == YUV_420 ? 8 : (cf == YUV_422 ? 4 : 2));

            StrH = abs(iTL - iL) * scale + abs(pTLU->iDC - pLU->iDC) + abs(pTLV->iDC - pLV->iDC);
            StrV = abs(iTL - iT) * scale + abs(pTLU->iDC - pTU->iDC) + abs(pTLV->iDC - pTV->iDC);
        }
        iDCMode = (StrH * ORIENT_WEIGHT < StrV ? 1 : (StrV * ORIENT_WEIGHT < StrH ? 0 : 2));
    }

    if(iDCMode == 1 && pSC->MBInfo.iQIndexLP == pSC->PredInfoPrevRow[0][mbX].iQPIndex)
        iADMode = 1;
    if(iDCMode == 0 && pSC->MBInfo.iQIndexLP == pSC->PredInfo[0][mbX - 1].iQPIndex)
        iADMode = 0;

    return (iDCMode + (iADMode << 2));
}

Void copyAC(PixelI * src, PixelI * dst)
{
    /* first row of ACs */
    dst[0] = src[1];
    dst[1] = src[2];
    dst[2] = src[3];

    /* first column of ACs */
    dst[3] = src[4];
    dst[4] = src[8];
    dst[5] = src[12];
}

/* info of current MB to be saved for future prediction */
Void updatePredInfo(CWMImageStrCodec *pSC, CWMIMBInfo * pMBInfo, size_t mbX, COLORFORMAT cf)
{
    CWMIPredInfo *pPredInfo;
    PixelI * p;
    Int  i, iChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : (Int) pSC->m_param.cNumChannels;

    for(i = 0; i < iChannels; i ++){
        pPredInfo = pSC->PredInfo[i] + mbX;
        p = pMBInfo->iBlockDC[i];//[dcBlkIdx + i];

        /* DC of DC block */
        pPredInfo->iDC = p[0];

        /* QP Index */
        pPredInfo->iQPIndex = pMBInfo->iQIndexLP;
        
        /* first row and first column of ACs of DC block */
        copyAC(p, pPredInfo->piAD);
    }

    if(cf == YUV_420){ // 420 UV channels
        for(i = 1U; i < 3U; i ++){
            pPredInfo = pSC->PredInfo[i] + mbX;
            p = pMBInfo->iBlockDC[i];//[dcBlkIdx + i];
            
            /* DC of DC block */
            pPredInfo->iDC = p[0];
            
            /* QP Index */
            pPredInfo->iQPIndex = pMBInfo->iQIndexLP;
            /* first row and first column of ACs of DC block */
            pPredInfo->piAD[0] = p[1];
            pPredInfo->piAD[1] = p[2];
        }
    }
    else if(cf == YUV_422){ // 420 UV channels
        for(i = 1U; i < 3U; i ++){
            pPredInfo = pSC->PredInfo[i] + mbX;

            /* QP Index */
            pPredInfo->iQPIndex = pMBInfo->iQIndexLP;

            p = pMBInfo->iBlockDC[i];//[dcBlkIdx + i];

            /* DC of DC block */
            pPredInfo->iDC = p[0];
            
            /* first row and first column of ACs of first DC block */
            pPredInfo->piAD[0] = p[1];
            pPredInfo->piAD[1] = p[2];
            /* first row and first column of ACs of second DC block */
            pPredInfo->piAD[2] = p[5];
            pPredInfo->piAD[3] = p[6];
            pPredInfo->piAD[4] = p[4]; //AC of 1D HT!!!
        }
    }
}
