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
// #include "xplatform_image.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

#include <stdlib.h>
#include <string.h>

#if !(defined(__ANSI__))
// Desktop
#include <windows.h>
#else
// ANSI
#include <time.h>
#endif  

Int grgiZigzagInv4x4_lowpass [] = {
    0, 1, 4, 5, 2, 8, 6, 9,
    3, 12, 10, 7, 13, 11, 14, 15
};

Int grgiZigzagInv4x4H [] = {
    0, 1, 4, 5, 2, 8, 6, 9,
    3, 12, 10, 7, 13, 11, 14, 15
};
Int grgiZigzagInv4x4V [] = {
    0, 4, 8, 5,  1, 12, 9, 6,  2, 13, 3, 15,  7, 10, 14, 11
};
    
const Int gSignificantRunBin[] = { 
    -1,-1,-1,-1,
    2,2,2,
    1,1,1,1,
    0,0,0,0    
};

const Int gSignificantRunFixedLength[] = {
    0,0,1,1,3,
    0,0,1,1,2,
    0,0,0,0,1,
};

/*************************************************************************
    UpdateModelMB : update adaptive model at end of macroblock
    (for lowest resolution only)
*************************************************************************/
#define MODELWEIGHT 70//90

Void UpdateModelMB (COLORFORMAT cf, Int iChannels, Int iLaplacianMean[], CAdaptiveModel *pModel)
{
    Int j;
    static const Int aWeight0[3] = { 240/*DC*/, 12/*LP*/, 1 };
    static const Int aWeight1[3][MAX_CHANNELS] = {
        { 0,240,120,80, 60,48,40,34, 30,27,24,22, 20,18,17,16 },
        { 0,12,6,4,     3,2,2,2,     2,1,1,1,     1,1,1,1 },
        { 0,16,8,5,     4,3,3,2,     2,2,2,1,     1,1,1,1 }
    };
    static const Int aWeight2[6] = { 120,37,2,/*420*/ 120,18,1/*422*/ };

    iLaplacianMean[0] *= aWeight0[pModel->m_band - BAND_DC];
    if (cf == YUV_420) {
        iLaplacianMean[1] *= aWeight2[pModel->m_band - BAND_DC];
    }
    else if (cf == YUV_422) {
        iLaplacianMean[1] *= aWeight2[3 + (pModel->m_band) - BAND_DC];
    }
    else {
        iLaplacianMean[1] *= aWeight1[pModel->m_band - BAND_DC][iChannels - 1];
        if (pModel->m_band == BAND_AC)
            iLaplacianMean[1] >>= 4;
    }

    for (j = 0; j < 2; j++) {
        Int iLM = iLaplacianMean[j];
        Int iMS = pModel->m_iFlcState[j];
        Int iDelta = (iLM - MODELWEIGHT) >> 2;

        if (iDelta <= -8) {
            iDelta += 4;
            if (iDelta < -16)
                iDelta = -16;
            iMS += iDelta;
            if (iMS < -8) {
                if (pModel->m_iFlcBits[j] == 0)
                    iMS = -8;
                else {
                    iMS = 0;
                    pModel->m_iFlcBits[j]--;
                }
            }
        }
        else if (iDelta >= 8) {
            iDelta -= 4;
            if (iDelta > 15)
                iDelta = 15;
            iMS += iDelta;
            if (iMS > 8) {
                if (pModel->m_iFlcBits[j] >= 15) {
                    pModel->m_iFlcBits[j] = 15;
                    iMS = 8;
                }
                else {
                    iMS = 0;
                    pModel->m_iFlcBits[j]++;
                }
            }
        }
        pModel->m_iFlcState[j] = iMS;
        if (cf == Y_ONLY)
            break;
    }
}


Void ResetCodingContext(CCodingContext *pContext)
{
    // reset bit reduction models
    memset (&(pContext->m_aModelAC), 0, sizeof(CAdaptiveModel));  
    pContext->m_aModelAC.m_band = BAND_AC;

    memset (&(pContext->m_aModelLP), 0, sizeof(CAdaptiveModel));  
    pContext->m_aModelLP.m_band = BAND_LP;
    pContext->m_aModelLP.m_iFlcBits[0] = pContext->m_aModelLP.m_iFlcBits[1] = 4;

    memset (&(pContext->m_aModelDC), 0, sizeof(CAdaptiveModel));  
    pContext->m_aModelDC.m_band = BAND_DC;
    pContext->m_aModelDC.m_iFlcBits[0] = pContext->m_aModelDC.m_iFlcBits[1] = 8;

    // reset CBP models
    pContext->m_iCBPCountMax = pContext->m_iCBPCountZero = 1;

    pContext->m_aCBPModel.m_iCount0[0] = pContext->m_aCBPModel.m_iCount0[1] = -4;
    pContext->m_aCBPModel.m_iCount1[0] = pContext->m_aCBPModel.m_iCount1[1] = 4;
    pContext->m_aCBPModel.m_iState[0] = pContext->m_aCBPModel.m_iState[1] = 0;
}

/*************************************************************************
    Initialize zigzag scan parameters
*************************************************************************/
Void InitZigzagScan(CCodingContext * pContext)
{
    if (NULL != pContext) {
        Int i;
        for (i=0; i<16; i++) {
            pContext->m_aScanLowpass[i].uScan = grgiZigzagInv4x4_lowpass[i];
            pContext->m_aScanHoriz[i].uScan = dctIndex[0][grgiZigzagInv4x4H[i]];
            pContext->m_aScanVert[i].uScan  = dctIndex[0][grgiZigzagInv4x4V[i]];
        }
    }
}
