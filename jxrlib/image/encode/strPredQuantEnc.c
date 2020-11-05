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
#include "encode.h"

I32 QUANT_Mulless(PixelI v, PixelI o, I32 r)
{
    const I32 m = v >> 31;

    assert(sizeof(PixelI) == sizeof(U32));
    return ((((v ^ m) - m + o) >> r) ^ m) - m;
}

I32 MUL32HR(U32 a, U32 b, U32 r)
{
    return (I32)((U32)((U64)a * b >> 32) >> r);
}

I32 QUANT(PixelI v, PixelI o, I32 man, I32 exp)
{
    const I32 m = v >> 31;

    assert(sizeof(PixelI) == sizeof(U32));
    return (MUL32HR((v ^ m) - m + o, man, exp) ^ m) - m;
}

Int quantizeMacroblock(CWMImageStrCodec* pSC)
{
    CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
    CWMIMBInfo * pMBInfo = &pSC->MBInfo;
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    int iChannel, i, j;

    if(/*pSC->m_param.bScaledArith && */pSC->m_param.bTranscode == FALSE)
        for(iChannel = 0; iChannel < (int)pSC->m_param.cNumChannels; iChannel ++){
            const Bool bUV = (iChannel > 0 && (cf == YUV_444 || cf == YUV_422 || cf == YUV_420));
            const int iNumBlock = (bUV ? (cf == YUV_422 ? 8 : (cf == YUV_420 ? 4 : 16)) : 16);
            const int * pOffset = (iNumBlock == 4 ? blkOffsetUV : (iNumBlock == 8 ? blkOffsetUV_422 : blkOffset));
            CWMIQuantizer * pQPDC = pTile->pQuantizerDC[iChannel];
            CWMIQuantizer * pQPLP = pTile->pQuantizerLP[iChannel] + pMBInfo->iQIndexLP;
            CWMIQuantizer * pQPHP = pTile->pQuantizerHP[iChannel] + pMBInfo->iQIndexHP;

            for(j = 0; j < iNumBlock; j ++){
                PixelI * pData = pSC->pPlane[iChannel] + pOffset[j];

                if(j == 0) // DC
                    pData[0] = (pQPDC->iMan == 0 ? QUANT_Mulless(pData[0], pQPDC->iOffset, pQPDC->iExp) : QUANT(pData[0], pQPDC->iOffset, pQPDC->iMan, pQPDC->iExp));
                else if(pSC->WMISCP.sbSubband != SB_DC_ONLY) // LP
                    pData[0] = (pQPLP->iMan == 0 ? QUANT_Mulless(pData[0], pQPLP->iOffset, pQPLP->iExp) : QUANT(pData[0], pQPLP->iOffset, pQPLP->iMan, pQPLP->iExp));

                // quantize HP
                if(pSC->WMISCP.sbSubband != SB_DC_ONLY && pSC->WMISCP.sbSubband != SB_NO_HIGHPASS)
                    for(i = 1; i < 16; i ++)
                        pData[i] = (pQPHP->iMan == 0 ? QUANT_Mulless(pData[i], pQPHP->iOffset, pQPHP->iExp) : QUANT(pData[i], pQPHP->iOffset, pQPHP->iMan, pQPHP->iExp));
            }
        }
    
    for(iChannel = 0; iChannel < (int)pSC->m_param.cNumChannels; iChannel ++){
        I32 * pDC = pSC->MBInfo.iBlockDC[iChannel];
        PixelI * pData = pSC->pPlane[iChannel];

        if(iChannel > 0 && cf == YUV_422){
            for(i = 0; i < 8; i ++){
                pDC[i] = pData[blkOffsetUV_422[i]];
            }
        }
        else if(iChannel > 0 && cf == YUV_420){
            for(i = 0; i < 4; i ++){
                pDC[i] = pData[blkOffsetUV[i]];
            }
        }
        else{
            for(i = 0; i < 16; i ++){
                pDC[i] = pData[dctIndex[2][i]];
            }
        }
    }

    return 0;
}

/* frequency domain prediction */
Void predMacroblockEnc(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : (Int) pSC->m_param.cNumChannels;
    size_t mbX = pSC->cColumn - 1;// mbY = pSC->cRow - 1;
    CWMIMBInfo *pMBInfo = &(pSC->MBInfo);
    Int iDCACPredMode = getDCACPredMode(pSC, mbX);
    Int iDCPredMode = (iDCACPredMode & 0x3);
    Int iADPredMode = (iDCACPredMode & 0xC);
    Int iACPredMode = getACPredMode(pMBInfo, cf);
    PixelI * pOrg, * pRef;
    Int i, j, k;

    pMBInfo->iOrientation = 2 - iACPredMode;

    /* keep necessary info for future prediction */
    updatePredInfo(pSC, pMBInfo, mbX, cf);

    for(i = 0; i < iChannels; i ++){
        pOrg = pMBInfo->iBlockDC[i]; // current DC block
        
        /* DC prediction */
        if(iDCPredMode == 1){ // predict DC from top
            pOrg[0] -= (pSC->PredInfoPrevRow[i] + mbX)->iDC;
        }
        else if(iDCPredMode == 0){ // predict DC from left
            pOrg[0] -= (pSC->PredInfo[i] + mbX - 1)->iDC;
        }
        else if(iDCPredMode == 2){// predict DC from top&left
            pOrg[0] -= ((pSC->PredInfo[i] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[i] + mbX)->iDC) >> 1;
        }

        /* AD prediction */
        if(iADPredMode == 4){// predict AD from top
            pRef = (pSC->PredInfoPrevRow[i] + mbX)->piAD;
            pOrg[4] -= pRef[3], pOrg[8] -= pRef[4], pOrg[12] -= pRef[5];
        }
        else if(iADPredMode == 0){// predict AD from left
            pRef = (pSC->PredInfo[i] + mbX - 1)->piAD;
            pOrg[1] -= pRef[0], pOrg[2] -= pRef[1], pOrg[3] -= pRef[2];
        }
        
        pOrg = pSC->pPlane[i];
        /* AC prediction */
        if(iACPredMode == 1){ // predict from top
            for(k = 0; k <= 192; k += 64){
                /* inside macroblock, in reverse order */
                for(j = 48; j > 0; j -= 16){
                    pOrg[k + j + 10] -= pOrg[k + j + 10 - 16];
                    pOrg[k + j +  2] -= pOrg[k + j +  2 - 16];
                    pOrg[k + j +  9] -= pOrg[k + j +  9 - 16];
                }
            }
        }
        else if(iACPredMode == 0){ // predict from left
            for(k = 0; k < 64; k += 16){
                /* inside macroblock, in reverse order */
                for(j = 192; j > 0; j -= 64){
                    pOrg[k + j + 5] -= pOrg[k + j + 5 - 64];
                    pOrg[k + j + 1] -= pOrg[k + j + 1 - 64];
                    pOrg[k + j + 6] -= pOrg[k + j + 6 - 64];
                }
            }
        }
    }

    if(cf == YUV_420){
        for(i = 1; i < 3; i ++){
            pOrg = pMBInfo->iBlockDC[i]; // current DC block

            /* DC prediciton */
            if(iDCPredMode == 1){ // predict DC from top
                pOrg[0] -= (pSC->PredInfoPrevRow[i] + mbX)->iDC;
            }
            else if(iDCPredMode == 0){ // predict DC from left
                pOrg[0] -= (pSC->PredInfo[i] + mbX - 1)->iDC;
            }
            else if(iDCPredMode == 2){ // predict DC from top&left
                pOrg[0] -= (((pSC->PredInfo[i] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[i] + mbX)->iDC + 1) >> 1);
            }

            /* AD prediction */
            if(iADPredMode == 4){// predict AD from top
                pOrg[2] -= (pSC->PredInfoPrevRow[i] + mbX)->piAD[1];
            }
            else if(iADPredMode == 0){// predict AD from left
                pOrg[1] -= (pSC->PredInfo[i] + mbX - 1)->piAD[0];
            }

            pOrg = pSC->pPlane[i];
            /* AC prediction */
            if(iACPredMode == 1){ // predict from top
                for(j = 16; j <= 48; j += 32){
                    /* inside macroblock */
                    pOrg[j + 10] -= pOrg[j + 10 - 16];
                    pOrg[j +  2] -= pOrg[j +  2 - 16];
                    pOrg[j +  9] -= pOrg[j +  9 - 16];
                }
            }
            else if(iACPredMode == 0){ // predict from left
                for(j = 32; j <= 48; j += 16){
                    /* inside macroblock */
                    pOrg[j + 5] -= pOrg[j + 5 - 32];
                    pOrg[j + 1] -= pOrg[j + 1 - 32];
                    pOrg[j + 6] -= pOrg[j + 6 - 32];
                }
            }
        }
    }
    else if(cf == YUV_422){
        for(i = 1; i < 3; i ++){
            pOrg = pMBInfo->iBlockDC[i]; // current DC block

            /* DC prediciton */
            if(iDCPredMode == 1){ // predict DC from top
                pOrg[0] -= (pSC->PredInfoPrevRow[i] + mbX)->iDC;
            }
            else if(iDCPredMode == 0){ // predict DC from left
                pOrg[0] -= (pSC->PredInfo[i] + mbX - 1)->iDC;
            }
            else if(iDCPredMode == 2){ // predict DC from top&left
                pOrg[0] -= (((pSC->PredInfo[i] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[i] + mbX)->iDC + 1) >> 1);
            }

            /* AD prediction */
            if(iADPredMode == 4){// predict AD from top
                pOrg[4] -= (pSC->PredInfoPrevRow[i] + mbX)->piAD[4]; // AC of HT !!!
                pOrg[6] -= pOrg[2];
                pOrg[2] -= (pSC->PredInfoPrevRow[i] + mbX)->piAD[3];
            }
            else if(iADPredMode == 0){// predict AD from left
                pOrg[4] -= (pSC->PredInfo[i] + mbX - 1)->piAD[4];  // AC of HT !!!
                pOrg[1] -= (pSC->PredInfo[i] + mbX - 1)->piAD[0];
                pOrg[5] -= (pSC->PredInfo[i] + mbX - 1)->piAD[2];
            }
            else if(iDCPredMode == 1){
                pOrg[6] -= pOrg[2];
            }

            pOrg = pSC->pPlane[i]; // current MB
            /* AC prediction */
            if(iACPredMode == 1){ // predict from top
                for(j = 48; j > 0; j -= 16){
                    for(k = 0; k <= 64; k += 64){
                        /* inside macroblock */
                        pOrg[j + k + 10] -= pOrg[j + k + 10 - 16];
                        pOrg[j + k +  2] -= pOrg[j + k +  2 - 16];
                        pOrg[j + k +  9] -= pOrg[j + k +  9 - 16];
                    }
                }
            }
            else if(iACPredMode == 0){ // predict from left
                for(j = 64; j <= 112; j += 16){
                    /* inside macroblock */
                    pOrg[j + 5] -= pOrg[j + 5 - 64];
                    pOrg[j + 1] -= pOrg[j + 1 - 64];
                    pOrg[j + 6] -= pOrg[j + 6 - 64];
                }
            }
        }
    }
}


/* CBP prediction for 16 x 16 MB */
/* block index */
/*  0  1  4  5 */
/*  2  3  6  7 */
/*  8  9 12 13 */
/* 10 11 14 15 */

static int NumOnes(int i)
{
    int retval = 0;
    static const int g_Count[] = { 0,1,1,2, 1,2,2,3, 1,2,2,3, 2,3,3,4 };
    i = i & 0xffff;
    while (i) {
        retval += g_Count[i & 0xf];
        i >>= 4;
    }
    return retval;
}

#define SATURATE32(x) if((unsigned int)(x + 16) >= 32) { if (x < 0) x = -16; else x = 15; }

static Int predCBPCEnc(CWMImageStrCodec *pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iPredCBP = 0, iRetval = 0;
    Int iNOrig = NumOnes(iCBP), iNDiff = AVG_NDIFF;//NumOnes(iPredCBP ^ iCBP);

    UNREFERENCED_PARAMETER( mbY );

    /* only top left block pattern is predicted from neighbour */
    if(pSC->m_bCtxLeft) {
        if (pSC->m_bCtxTop) {
            iPredCBP = 1;
        }
        else {
            Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
            iPredCBP = (iTopCBP >> 10) & 1; // left: top(10) => 0
        }
    }
    else {
        Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
        iPredCBP = ((iLeftCBP >> 5) & 1); // left(5) => 0
    }

    iPredCBP |= (iCBP & 0x3300) << 2; // [8 9 12 13]->[10 11 14 15]
    iPredCBP |= (iCBP & 0xcc) << 6; // [2 3 6 7]->[8 9 12 13]
    iPredCBP |= (iCBP & 0x33) << 2; // [0 1 4 5]->[2 3 6 7]
    iPredCBP |= (iCBP & 0x11) << 1; // [0 4]->[1 5]
    iPredCBP |= (iCBP & 0x2) << 3; // [1]->[4]

    if (c) c = 1;
    if (pModel->m_iState[c] == 0) {
        iRetval = iPredCBP ^ iCBP;
    }
    else if (pModel->m_iState[c] == 1) {
        iRetval = iCBP;
    }
    else {
        iRetval = iCBP ^ 0xffff;
    }

    pModel->m_iCount0[c] += iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount0[c]);

    pModel->m_iCount1[c] += 16 - iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount1[c]);

    if (pModel->m_iCount0[c] < 0) {
        if (pModel->m_iCount0[c] < pModel->m_iCount1[c]) {
            pModel->m_iState[c] = 1;
        }
        else {
            pModel->m_iState[c] = 2;
        }
    }
    else if (pModel->m_iCount1[c] < 0) {
        pModel->m_iState[c] = 2;
    }
    else {
        pModel->m_iState[c] = 0;
    }
    return iRetval;
}

static Int predCBPC420Enc(CWMImageStrCodec *pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iPredCBP = 0, iRetval = 0;
    Int iNOrig = NumOnes(iCBP) * 4, iNDiff = AVG_NDIFF;//NumOnes(iPredCBP ^ iCBP);

    UNREFERENCED_PARAMETER( mbY );

    /* only top left block pattern is predicted from neighbour */
    if(pSC->m_bCtxLeft) {
        if (pSC->m_bCtxTop) {
            iPredCBP = 1;
        }
        else {
            Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
            iPredCBP = (iTopCBP >> 2) & 1; // left: top(2) => 0
        }
    }
    else {
        Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
        iPredCBP = ((iLeftCBP >> 1) & 1); // left(1) => 0
    }

    iPredCBP |= (iCBP & 0x1) << 1; // [0]->[1]
    iPredCBP |= (iCBP & 0x3) << 2; // [0 1]->[2 3]

    if (pModel->m_iState[1] == 0) {
        iRetval = iPredCBP ^ iCBP;
    }
    else if (pModel->m_iState[1] == 1) {
        iRetval = iCBP;
    }
    else {
        iRetval = iCBP ^ 0xf;
    }

    pModel->m_iCount0[1] += iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount0[1]);

    pModel->m_iCount1[1] += 16 - iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount1[1]);

    if (pModel->m_iCount0[1] < 0) {
        if (pModel->m_iCount0[1] < pModel->m_iCount1[1]) {
            pModel->m_iState[1] = 1;
        }
        else {
            pModel->m_iState[1] = 2;
        }
    }
    else if (pModel->m_iCount1[1] < 0) {
        pModel->m_iState[1] = 2;
    }
    else {
        pModel->m_iState[1] = 0;
    }
    return iRetval;
}

static Int predCBPC422Enc(CWMImageStrCodec *pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iPredCBP = 0, iRetval = 0;
    Int iNOrig = NumOnes(iCBP) * 2, iNDiff = AVG_NDIFF;//NumOnes(iPredCBP ^ iCBP);

    UNREFERENCED_PARAMETER( mbY );

    /* only top left block pattern is predicted from neighbour */
    if(pSC->m_bCtxLeft) {
        if (pSC->m_bCtxTop) {
            iPredCBP = 1;
        }
        else {
            Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
            iPredCBP = (iTopCBP >> 6) & 1; // left: top(6) => 0
        }
    }
    else {
        Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
        iPredCBP = ((iLeftCBP >> 1) & 1); // left(1) => 0
    }

    iPredCBP |= (iCBP & 0x1) << 1; // [0]->[1]
    iPredCBP |= (iCBP & 0x3) << 2; // [0 1]->[2 3]
    iPredCBP |= (iCBP & 0xc) << 2; // [2 3]->[4 5]
    iPredCBP |= (iCBP & 0x30) << 2; // [4 5]->[6 7]

    if (pModel->m_iState[1] == 0) {
        iRetval = iPredCBP ^ iCBP;
    }
    else if (pModel->m_iState[1] == 1) {
        iRetval = iCBP;
    }
    else {
        iRetval = iCBP ^ 0xff;
    }

    pModel->m_iCount0[1] += iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount0[1]);

    pModel->m_iCount1[1] += 16 - iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount1[1]);

    if (pModel->m_iCount0[1] < 0) {
        if (pModel->m_iCount0[1] < pModel->m_iCount1[1]) {
            pModel->m_iState[1] = 1;
        }
        else {
            pModel->m_iState[1] = 2;
        }
    }
    else if (pModel->m_iCount1[1] < 0) {
        pModel->m_iState[1] = 2;
    }
    else {
        pModel->m_iState[1] = 0;
    }
    return iRetval;
}

Void predCBPEnc(CWMImageStrCodec* pSC, CCodingContext *pContext)
{
    size_t mbX = pSC->cColumn - 1, mbY = pSC->cRow - 1;
    CWMIMBInfo * pMBInfo = &(pSC->MBInfo);
    int iChannel, i, j;

    for(iChannel = 0; iChannel < (int)pSC->m_param.cNumChannels; iChannel ++){
        const COLORFORMAT cf = pSC->m_param.cfColorFormat;
        const Bool bUV = (iChannel > 0);
        const int iNumBlock = (bUV ? (cf == YUV_422 ? 8 : (cf == YUV_420 ? 4 : 16)) : 16);
        const int * pOffset = (iNumBlock == 4 ? blkOffsetUV : (iNumBlock == 8 ? blkOffsetUV_422 : blkOffset));
        const Int threshold = (1 << pContext->m_aModelAC.m_iFlcBits[bUV ? 1 : 0]) - 1, threshold2 = threshold * 2 + 1;
        Int iCBP = 0;

        for(j = 0; j < iNumBlock; j ++){
            PixelI * pData = pSC->pPlane[iChannel] + pOffset[j];
            for(i = 1; i < 16; i ++){
                if((unsigned int)(pData[i] + threshold) >= (unsigned int) threshold2){ // significant coeff
                    iCBP |= (1 << j); // update CBP
                    break;
                }
            }
        }
        
        pMBInfo->iCBP[iChannel] = (pSC->PredInfo[iChannel] + mbX)->iCBP = iCBP;

        if(iNumBlock == 16){
            pMBInfo->iDiffCBP[iChannel] = predCBPCEnc(pSC, pMBInfo->iCBP[iChannel], mbX, mbY, iChannel, &pContext->m_aCBPModel);
        }
        else if(iNumBlock == 8){
            pSC->MBInfo.iDiffCBP[iChannel] = predCBPC422Enc(pSC, pMBInfo->iCBP[iChannel], mbX, mbY, iChannel, &pContext->m_aCBPModel);
        }
        else{
            pSC->MBInfo.iDiffCBP[iChannel] = predCBPC420Enc(pSC, pMBInfo->iCBP[iChannel], mbX, mbY, iChannel, &pContext->m_aCBPModel);
        }
    }
}

