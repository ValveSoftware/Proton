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
#include "encode.h"
#include "strcodec.h"
#include "common.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

/*************************************************************************
    Context allocation
    In theory it is possible to independently set uiTrimFlexBits for
    each tile, but for now we assume only one user specified value is
    used for the entire image
*************************************************************************/
Int AllocateCodingContextEnc(CWMImageStrCodec *pSC, Int iNumContexts, Int iTrimFlexBits)
{
    Int i, iCBPSize, k;
    static const Int aAlphabet[] = {5,4,8,7,7,  12,6,6,12,6,6,7,7,  12,6,6,12,6,6,7,7};

    if (iTrimFlexBits < 0)
        iTrimFlexBits = 0;
    else if (iTrimFlexBits > 15)
        iTrimFlexBits = 15;    
    pSC->m_param.bTrimFlexbitsFlag = (iTrimFlexBits > 0);

    if (iNumContexts < 1 || iNumContexts > MAX_TILES)  // only between 1 and 256 allowed
        return ICERR_ERROR;

    if (pSC == NULL)
        return ICERR_ERROR;

    pSC->m_pCodingContext = malloc (iNumContexts * sizeof (CCodingContext));
    if (pSC->m_pCodingContext == NULL) {
        pSC->cNumCodingContext = 0;
        return ICERR_ERROR;
    }
    memset (pSC->m_pCodingContext, 0, iNumContexts * sizeof (CCodingContext));

    pSC->cNumCodingContext = iNumContexts;
    iCBPSize = (pSC->m_param.cfColorFormat == Y_ONLY || pSC->m_param.cfColorFormat == NCOMPONENT
        || pSC->m_param.cfColorFormat == CMYK) ? 5 : 9;

    /** allocate / initialize members **/
    for (i = 0; i < iNumContexts; i++) {
        CCodingContext *pContext = &(pSC->m_pCodingContext[i]);

        /** allocate adaptive Huffman encoder **/    
        pContext->m_pAdaptHuffCBPCY = Allocate (iCBPSize, ENCODER);
        if(pContext->m_pAdaptHuffCBPCY == NULL) {
            return ICERR_ERROR;
        }
        pContext->m_pAdaptHuffCBPCY1 = Allocate(5, ENCODER);
        if(pContext->m_pAdaptHuffCBPCY1 == NULL){
            return ICERR_ERROR;
        }

        for(k = 0; k < NUMVLCTABLES; k ++){
            pContext->m_pAHexpt[k] = Allocate(aAlphabet[k], ENCODER);
            if(pContext->m_pAHexpt[k] == NULL){
                return ICERR_ERROR;
            }
        }

        ResetCodingContextEnc(pContext);
        pContext->m_iTrimFlexBits = iTrimFlexBits;
    }

    return ICERR_OK;
}

/*************************************************************************
    Context reset on encoder
*************************************************************************/
Void ResetCodingContextEnc(CCodingContext *pContext)
{
    Int k;
    /** set flags **/
    pContext->m_pAdaptHuffCBPCY->m_bInitialize = FALSE;
    pContext->m_pAdaptHuffCBPCY1->m_bInitialize = FALSE;
    for(k = 0; k < NUMVLCTABLES; k ++)
        pContext->m_pAHexpt[k]->m_bInitialize = FALSE;

    // reset VLC tables
    AdaptLowpassEnc (pContext);
    AdaptHighpassEnc (pContext);

    // reset zigzag patterns, totals
    InitZigzagScan(pContext);
    // reset bit reduction and cbp models
    ResetCodingContext(pContext);
}

/*************************************************************************
    Context deletion
*************************************************************************/
Void FreeCodingContextEnc(CWMImageStrCodec *pSC)
{
    Int iContexts = (Int)(pSC->cNumCodingContext), i, k;
    if (iContexts > 0 && pSC->m_pCodingContext) {

        for (i = 0; i < iContexts; i++) {
            CCodingContext *pContext = &(pSC->m_pCodingContext[i]);
            Clean (pContext->m_pAdaptHuffCBPCY);
            Clean (pContext->m_pAdaptHuffCBPCY1);
            for (k = 0; k < NUMVLCTABLES; k++)
                Clean (pContext->m_pAHexpt[k]);
        }
        free (pSC->m_pCodingContext);
    }
}

