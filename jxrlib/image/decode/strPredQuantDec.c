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

#define DEQUANT(iRaw, iQP) ((iRaw) * (iQP))

Void dequantizeBlock4x4(PixelI * pRec, Int * pOrg, const Int * pIndex, Int iQPLP)
{
    Int i;
    
    for(i = 1; i < 16; i ++)
        pRec[pIndex[i]] = DEQUANT(pOrg[i], iQPLP);
}

Void dequantizeBlock2x2(PixelI * pRec, Int * pOrg, Int iQPLP)
{
    pRec[32] = DEQUANT(pOrg[1], iQPLP);
    pRec[16] = DEQUANT(pOrg[2], iQPLP);
    pRec[48] = DEQUANT(pOrg[3], iQPLP);
}

Void dequantizeBlock4x2(PixelI * pRec, Int * pOrg, Int iQPLP)
{
    pRec[ 64] = DEQUANT(pOrg[1], iQPLP);
    pRec[ 16] = DEQUANT(pOrg[2], iQPLP);
    pRec[ 80] = DEQUANT(pOrg[3], iQPLP);
    pRec[ 32] = DEQUANT(pOrg[4], iQPLP);
    pRec[ 96] = DEQUANT(pOrg[5], iQPLP);
    pRec[ 48] = DEQUANT(pOrg[6], iQPLP);
    pRec[112] = DEQUANT(pOrg[7], iQPLP);
}


Int dequantizeMacroblock(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    CWMIMBInfo *pMBInfo = &pSC->MBInfo;
    CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
    const size_t iChannels = pSC->m_param.cNumChannels;
    size_t i;

    for(i = 0; i < iChannels; i ++){
        //dequantize DC
        pSC->p1MBbuffer[i][0] = DEQUANT(pMBInfo->iBlockDC[i][0], pTile->pQuantizerDC[i]->iQP);

        // dequantize LP
        if(pSC->WMISCP.sbSubband != SB_DC_ONLY)
            if(i == 0 || (cf != YUV_422 && cf != YUV_420))
                dequantizeBlock4x4(pSC->p1MBbuffer[i] , pMBInfo->iBlockDC[i], dctIndex[2], pTile->pQuantizerLP[i][pMBInfo->iQIndexLP].iQP);
            else if(cf == YUV_422)
                dequantizeBlock4x2(pSC->p1MBbuffer[i], pMBInfo->iBlockDC[i], pTile->pQuantizerLP[i][pMBInfo->iQIndexLP].iQP);
            else // 420
                dequantizeBlock2x2(pSC->p1MBbuffer[i], pMBInfo->iBlockDC[i], pTile->pQuantizerLP[i][pMBInfo->iQIndexLP].iQP);
    }

    return ICERR_OK;
}

/* frequency domain inverse DCAC prediction */
Void predDCACDec(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : (Int) pSC->m_param.cNumChannels;
    CWMIMBInfo *pMBInfo = &(pSC->MBInfo);
    size_t mbX = pSC->cColumn;// mbY = pSC->cRow;
    Int iDCACPredMode = getDCACPredMode(pSC, mbX);
    Int iDCPredMode = (iDCACPredMode & 0x3);
    Int iADPredMode = (iDCACPredMode & 0xC);
    PixelI * pOrg, * pRef;
    Int ii;

    for(ii = 0; ii < iChannels; ii ++){
        pOrg = pMBInfo->iBlockDC[ii];//[dcBlkIdx + (i >> 4)]; // current DC block

        /* DC prediction */
        if(iDCPredMode == 1){ // predict DC from top
            pOrg[0] += pSC->PredInfoPrevRow[ii][mbX].iDC;
        }
        else if(iDCPredMode == 0){ // predict DC from left
            pOrg[0] += (pSC->PredInfo[ii] + mbX - 1)->iDC;
        }
        else if(iDCPredMode == 2){// predict DC from top&left
            pOrg[0] += ((pSC->PredInfo[ii] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[ii] + mbX)->iDC) >> 1;
        }

        /* AD prediction */
        if(iADPredMode == 4){// predict AD from top
            pRef = (pSC->PredInfoPrevRow[ii] + mbX)->piAD;
            pOrg[4] += pRef[3], pOrg[8] += pRef[4], pOrg[12] += pRef[5];
        }
        else if(iADPredMode == 0){// predict AD from left
            pRef = (pSC->PredInfo[ii] + mbX - 1)->piAD;
            pOrg[1] += pRef[0], pOrg[2] += pRef[1], pOrg[3] += pRef[2];
        }
    }

    if(cf == YUV_420){
        for(ii = 1; ii < 3; ii ++){
            pOrg = pMBInfo->iBlockDC[ii];//dcBlkIdx + ii]; // current DC block

            /* DC prediction */
            if(iDCPredMode == 1){ // predict DC from top
                pOrg[0] += (pSC->PredInfoPrevRow[ii] + mbX)->iDC;
            }
            else if(iDCPredMode == 0){ // predict DC from left
                pOrg[0] += (pSC->PredInfo[ii] + mbX - 1)->iDC;
            }
            else if(iDCPredMode == 2){ // predict DC from top&left
                pOrg[0] += (((pSC->PredInfo[ii] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[ii] + mbX)->iDC + 1) >> 1);
            }

            /* AD prediciton */
            if(iADPredMode == 4){// predict AD from top
                pOrg[2] += (pSC->PredInfoPrevRow[ii] + mbX)->piAD[1];
            }
            else if(iADPredMode == 0){// predict AD from left
                pOrg[1] += (pSC->PredInfo[ii] + mbX - 1)->piAD[0];
            }
        }
    }
    else if(cf == YUV_422){
        for(ii = 1; ii < 3; ii ++){
            pOrg = pMBInfo->iBlockDC[ii];//[dcBlkIdx + ii]; // current DC block

            /* DC prediciton */
            if(iDCPredMode == 1){ // predict DC from top
                pOrg[0] += (pSC->PredInfoPrevRow[ii] + mbX)->iDC;
            }
            else if(iDCPredMode == 0){ // predict DC from left
                pOrg[0] += (pSC->PredInfo[ii] + mbX - 1)->iDC;
            }
            else if(iDCPredMode == 2){ // predict DC from top&left
                pOrg[0] += (((pSC->PredInfo[ii] + mbX - 1)->iDC + (pSC->PredInfoPrevRow[ii] + mbX)->iDC + 1) >> 1);
            }

            /* AD prediction */
            if(iADPredMode == 4){// predict AD from top
                pOrg[4] += (pSC->PredInfoPrevRow[ii] + mbX)->piAD[4]; // AC of HT !!!
                pOrg[2] += (pSC->PredInfoPrevRow[ii] + mbX)->piAD[3];
                pOrg[6] += pOrg[2];
            }
            else if(iADPredMode == 0){// predict AD from left
                pOrg[4] += (pSC->PredInfo[ii] + mbX - 1)->piAD[4];  // AC of HT !!!
                pOrg[1] += (pSC->PredInfo[ii] + mbX - 1)->piAD[0];
                pOrg[5] += (pSC->PredInfo[ii] + mbX - 1)->piAD[2];
            }
            else if(iDCPredMode == 1){
                pOrg[6] += pOrg[2];
            }
        }
    }

    pMBInfo->iOrientation = 2 - getACPredMode(pMBInfo, cf);
}

/*************************************************************************
    Frequency domain inverse AC prediction
*************************************************************************/
Void predACDec(CWMImageStrCodec * pSC)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : (Int) pSC->m_param.cNumChannels;
    // size_t mbX = pSC->cColumn, mbY = pSC->cRow;
    CWMIMBInfo *pMBInfo = &pSC->MBInfo;
    Int iACPredMode = 2 - pMBInfo->iOrientation;
    PixelI * pOrg, * pRef;
    Int i, j;

    /* AC prediction */
    for(i = 0; i < iChannels; i++){
        // prediction only happens inside MB
        PixelI* pSrc = pSC->p1MBbuffer[i];//0 == i ? pSC->pY1 : (1 == i ? pSC->pU1 : pSC->pV1);

        switch (iACPredMode)
        {
            case 1:
            {
                // predict from top
                static U8 blkIdx[] = {1, 2, 3, 5, 6, 7, 9, 10, 11, 13, 14, 15};

                for (j = 0; j < sizeof(blkIdx) / sizeof(*blkIdx); ++j)
                {
                    pOrg = pSrc + 16 * blkIdx[j];
                    pRef = pOrg - 16;

                    pOrg[ 2] += pRef[ 2];
                    pOrg[10] += pRef[10];
                    pOrg[ 9] += pRef[ 9];
                }
                break;
            }

            case 0:
                // predict from left
                for (j = 64; j < 256; j += 16)
                {
                    pOrg = pSrc + j;
                    pRef = pOrg - 64;

                    pOrg[1] += pRef[1];
                    pOrg[5] += pRef[5];
                    pOrg[6] += pRef[6];
                }
                break;

            default:
                // no prediction
                break;
        }
    }

    if(cf == YUV_420){
        for(i = 16; i <= 20; i += 4){
            PixelI* pSrc = pSC->p1MBbuffer[(i >> 2) - 3];//16 == i ? pSC->pU1 : pSC->pV1;

            switch (iACPredMode)
            {
                case 1:
                {
                    // predict from top
                    for (j = 1; j <= 3; j += 2)
                    {
                        pOrg = pSrc + 16 * j;
                        pRef = pOrg - 16;

                        pOrg[ 2] += pRef[ 2];
                        pOrg[10] += pRef[10];
                        pOrg[ 9] += pRef[ 9];
                    }
                    break;
                }

                case 0:
                    // predict from left
                    for (j = 2; j <= 3; ++j)
                    {
                        pOrg = pSrc + 16 * j;
                        pRef = pOrg - 32;

                        pOrg[1] += pRef[1];
                        pOrg[5] += pRef[5];
                        pOrg[6] += pRef[6];
                    }
                    break;

                default:
                    // no prediction
                    break;
            }
        }
    }
    else if(cf == YUV_422){
        for(i = 16; i < 32; i += 8){
            PixelI* pSrc = pSC->p1MBbuffer[(i >> 3) - 1];//16 == i ? pSC->pU1 : pSC->pV1;

            switch (iACPredMode)
            {
                case 1:
                {
                    // predict from top
                    for (j = 2; j < 8; j ++)
                    {
                        pOrg = pSrc + blkOffsetUV_422[j];
                        pRef = pOrg - 16;

                        pOrg[10] += pRef[10];
                        pOrg[ 2] += pRef[ 2];
                        pOrg[ 9] += pRef[ 9];
                    }
                    break;
                }

                case 0:
                    // predict from left
                    for (j = 1; j < 8; j += 2)
                    {
                        pOrg = pSrc + blkOffsetUV_422[j];
                        pRef = pOrg - 64;

                        pOrg[1] += pRef[1];
                        pOrg[5] += pRef[5];
                        pOrg[6] += pRef[6];
                    }
                    break;

                default:
                    // no prediction
                    break;
            }
        }
    }    
}

/*************************************************************************
    CBP
*************************************************************************/
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

/* CBP prediction for 16 x 16 MB */
/* block index */
/*  0  1  4  5 */
/*  2  3  6  7 */
/*  8  9 12 13 */
/* 10 11 14 15 */
static Int predCBPCDec(CWMImageStrCodec * pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iNOrig;
    const int iNDiff = AVG_NDIFF;
    size_t c1 = c ? 1 : 0;

    UNREFERENCED_PARAMETER( mbY );

    if (pModel->m_iState[c1] == 0) {
        if(pSC->m_bCtxLeft) {
            if (pSC->m_bCtxTop) {
                iCBP ^= 1;
            }
            else {
                Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
                iCBP ^= (iTopCBP >> 10) & 1; // left: top(10) => 0
            }
        }
        else {
            Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
            iCBP ^= ((iLeftCBP >> 5) & 1); // left(5) => 0
        }

        iCBP ^= (0x02 & (iCBP << 1)); // 0 => 1
        iCBP ^= (0x10 & (iCBP << 3)); // 1 => 4
        iCBP ^= (0x20 & (iCBP << 1)); // 4 => 5

        iCBP ^= ((iCBP & 0x33) << 2);
        iCBP ^= ((iCBP & 0xcc) << 6);
        iCBP ^= ((iCBP & 0x3300) << 2);

    }
    else if (pModel->m_iState[c1] == 2) {
        iCBP ^= 0xffff;
    }

    iNOrig = NumOnes(iCBP);

    pModel->m_iCount0[c1] += iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount0[c1]);

    pModel->m_iCount1[c1] += 16 - iNOrig - iNDiff;
    SATURATE32(pModel->m_iCount1[c1]);

    if (pModel->m_iCount0[c1] < 0) {
        if (pModel->m_iCount0[c1] < pModel->m_iCount1[c1]) {
            pModel->m_iState[c1] = 1;
        }
        else {
            pModel->m_iState[c1] = 2;
        }
    }
    else if (pModel->m_iCount1[c1] < 0) {
        pModel->m_iState[c1] = 2;
    }
    else {
        pModel->m_iState[c1] = 0;
    }
    return iCBP;
}

static Int predCBPC420Dec(CWMImageStrCodec * pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iNOrig;
    const int iNDiff = AVG_NDIFF;

    UNREFERENCED_PARAMETER( mbY );

    if (pModel->m_iState[1] == 0) {
        if(pSC->m_bCtxLeft) {
            if (pSC->m_bCtxTop) {
                iCBP ^= 1;
            }
            else {
                Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
                iCBP ^= (iTopCBP >> 2) & 1; // left: top(2) => 0
            }
        }
        else {
            Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
            iCBP ^= ((iLeftCBP >> 1) & 1); // left(1) => 0
        }

        iCBP ^= (0x02 & (iCBP << 1)); // 0 => 1
        iCBP ^= ((iCBP & 0x3) << 2); // [0 1] -> [2 3]
    }
    else if (pModel->m_iState[1] == 2) {
        iCBP ^= 0xf;
    }

    iNOrig = NumOnes(iCBP) * 4;

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

    return iCBP;
}

static Int predCBPC422Dec(CWMImageStrCodec * pSC, Int iCBP, size_t mbX, size_t mbY, size_t c, CCBPModel *pModel)
{
    Int iNOrig;
    const int iNDiff = AVG_NDIFF;

    UNREFERENCED_PARAMETER( mbY );

    if (pModel->m_iState[1] == 0) {
        if(pSC->m_bCtxLeft) {
            if (pSC->m_bCtxTop) {
                iCBP ^= 1;
            }
            else {
                Int iTopCBP  = (pSC->PredInfoPrevRow[c] + mbX)->iCBP;
                iCBP ^= (iTopCBP >> 6) & 1; // left: top(6) => 0
            }
        }
        else {
            Int iLeftCBP = (pSC->PredInfo[c] + mbX - 1)->iCBP;
            iCBP ^= ((iLeftCBP >> 1) & 1); // left(1) => 0
        }
        
        iCBP ^= (iCBP & 0x1) << 1; // [0]->[1]
        iCBP ^= (iCBP & 0x3) << 2; // [0 1]->[2 3]
        iCBP ^= (iCBP & 0xc) << 2; // [2 3]->[4 5]
        iCBP ^= (iCBP & 0x30) << 2; // [4 5]->[6 7]
    }
    else if (pModel->m_iState[1] == 2) {
        iCBP ^= 0xff;
    }

    iNOrig = NumOnes(iCBP) * 2;

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

    return iCBP;
}


/* Coded Block Pattern (CBP) prediction */
Void predCBPDec(CWMImageStrCodec *pSC, CCodingContext *pContext)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const size_t iChannels = (cf == YUV_420 || cf == YUV_422) ? 1 : pSC->m_param.cNumChannels;
    size_t i, mbX = pSC->cColumn, mbY = pSC->cRow;
    CWMIMBInfo *pMBInfo = &(pSC->MBInfo);

    for (i = 0; i < iChannels; i++) {
        (pSC->PredInfo[i] + mbX)->iCBP = pMBInfo->iCBP[i] = predCBPCDec(pSC, pMBInfo->iDiffCBP[i], mbX, mbY, i, &pContext->m_aCBPModel); // Y Channel
    }

    if (cf == YUV_422){
        (pSC->PredInfo[1] + mbX)->iCBP = pMBInfo->iCBP[1] = predCBPC422Dec(pSC, pMBInfo->iDiffCBP[1], mbX, mbY, 1, &pContext->m_aCBPModel);
        (pSC->PredInfo[2] + mbX)->iCBP = pMBInfo->iCBP[2] = predCBPC422Dec(pSC, pMBInfo->iDiffCBP[2], mbX, mbY, 2, &pContext->m_aCBPModel);
    }
    else if (cf == YUV_420) {
        (pSC->PredInfo[1] + mbX)->iCBP = pMBInfo->iCBP[1] = predCBPC420Dec(pSC, pMBInfo->iDiffCBP[1], mbX, mbY, 1, &pContext->m_aCBPModel);
        (pSC->PredInfo[2] + mbX)->iCBP = pMBInfo->iCBP[2] = predCBPC420Dec(pSC, pMBInfo->iDiffCBP[2], mbX, mbY, 2, &pContext->m_aCBPModel);
    }
    //}
}

