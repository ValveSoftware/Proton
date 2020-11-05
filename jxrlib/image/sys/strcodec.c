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
#include "perfTimer.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

//================================================================
// Quantization index tables
//================================================================
const int blkOffset[16] = {0, 64, 16, 80, 128, 192, 144, 208, 32, 96, 48, 112, 160, 224, 176, 240};
const int blkOffsetUV[4] = {0, 32, 16, 48};
const int blkOffsetUV_422[8] = {0, 64, 16, 80, 32, 96, 48, 112};

const int dctIndex[3][16] = { /** permutation matrix tailored to the transform, nothing to do with ZZS **/
    {0,5,1,6, 10,12,8,14, 2,4,3,7, 9,13,11,15}, //AC 444
    {0,5,1,6, 10,12,8,14, 2,4,3,7, 9,13,11,15}, //AC 420
    {0,128,64,208, 32,240,48,224, 16,192,80,144, 112,176,96,160 }, //DC 444
};

//================================================================
// Color conversion index table
//================================================================
const U8 idxCC[16][16] =
{
    {0x00, 0x01, 0x05, 0x04,  0x40, 0x41, 0x45, 0x44,  0x80, 0x81, 0x85, 0x84,  0xc0, 0xc1, 0xc5, 0xc4, },
    {0x02, 0x03, 0x07, 0x06,  0x42, 0x43, 0x47, 0x46,  0x82, 0x83, 0x87, 0x86,  0xc2, 0xc3, 0xc7, 0xc6, },
    {0x0a, 0x0b, 0x0f, 0x0e,  0x4a, 0x4b, 0x4f, 0x4e,  0x8a, 0x8b, 0x8f, 0x8e,  0xca, 0xcb, 0xcf, 0xce, },
    {0x08, 0x09, 0x0d, 0x0c,  0x48, 0x49, 0x4d, 0x4c,  0x88, 0x89, 0x8d, 0x8c,  0xc8, 0xc9, 0xcd, 0xcc, },

    {0x10, 0x11, 0x15, 0x14,  0x50, 0x51, 0x55, 0x54,  0x90, 0x91, 0x95, 0x94,  0xd0, 0xd1, 0xd5, 0xd4, },
    {0x12, 0x13, 0x17, 0x16,  0x52, 0x53, 0x57, 0x56,  0x92, 0x93, 0x97, 0x96,  0xd2, 0xd3, 0xd7, 0xd6, },
    {0x1a, 0x1b, 0x1f, 0x1e,  0x5a, 0x5b, 0x5f, 0x5e,  0x9a, 0x9b, 0x9f, 0x9e,  0xda, 0xdb, 0xdf, 0xde, },
    {0x18, 0x19, 0x1d, 0x1c,  0x58, 0x59, 0x5d, 0x5c,  0x98, 0x99, 0x9d, 0x9c,  0xd8, 0xd9, 0xdd, 0xdc, },

    {0x20, 0x21, 0x25, 0x24,  0x60, 0x61, 0x65, 0x64,  0xa0, 0xa1, 0xa5, 0xa4,  0xe0, 0xe1, 0xe5, 0xe4, },
    {0x22, 0x23, 0x27, 0x26,  0x62, 0x63, 0x67, 0x66,  0xa2, 0xa3, 0xa7, 0xa6,  0xe2, 0xe3, 0xe7, 0xe6, },
    {0x2a, 0x2b, 0x2f, 0x2e,  0x6a, 0x6b, 0x6f, 0x6e,  0xaa, 0xab, 0xaf, 0xae,  0xea, 0xeb, 0xef, 0xee, },
    {0x28, 0x29, 0x2d, 0x2c,  0x68, 0x69, 0x6d, 0x6c,  0xa8, 0xa9, 0xad, 0xac,  0xe8, 0xe9, 0xed, 0xec, },

    {0x30, 0x31, 0x35, 0x34,  0x70, 0x71, 0x75, 0x74,  0xb0, 0xb1, 0xb5, 0xb4,  0xf0, 0xf1, 0xf5, 0xf4, },
    {0x32, 0x33, 0x37, 0x36,  0x72, 0x73, 0x77, 0x76,  0xb2, 0xb3, 0xb7, 0xb6,  0xf2, 0xf3, 0xf7, 0xf6, },
    {0x3a, 0x3b, 0x3f, 0x3e,  0x7a, 0x7b, 0x7f, 0x7e,  0xba, 0xbb, 0xbf, 0xbe,  0xfa, 0xfb, 0xff, 0xfe, },
    {0x38, 0x39, 0x3d, 0x3c,  0x78, 0x79, 0x7d, 0x7c,  0xb8, 0xb9, 0xbd, 0xbc,  0xf8, 0xf9, 0xfd, 0xfc, },
};

const U8 idxCC_420[8][8] =
{
    {0x00, 0x01, 0x05, 0x04,  0x20, 0x21, 0x25, 0x24, },
    {0x02, 0x03, 0x07, 0x06,  0x22, 0x23, 0x27, 0x26, },
    {0x0a, 0x0b, 0x0f, 0x0e,  0x2a, 0x2b, 0x2f, 0x2e, },
    {0x08, 0x09, 0x0d, 0x0c,  0x28, 0x29, 0x2d, 0x2c, },

    {0x10, 0x11, 0x15, 0x14,  0x30, 0x31, 0x35, 0x34, },
    {0x12, 0x13, 0x17, 0x16,  0x32, 0x33, 0x37, 0x36, },
    {0x1a, 0x1b, 0x1f, 0x1e,  0x3a, 0x3b, 0x3f, 0x3e, },
    {0x18, 0x19, 0x1d, 0x1c,  0x38, 0x39, 0x3d, 0x3c, },
};

/*************************************************************************
    gGDISignature
*************************************************************************/
const Char gGDISignature[] = {'W', 'M', 'P', 'H', 'O', 'T', 'O', '\0'};

// check if enough memory allocated for the image buffer
Int checkImageBuffer(CWMImageStrCodec * pSC, size_t cWidth, size_t cRows)
{
    const BITDEPTH_BITS bd = pSC->WMISCP.bYUVData ?
        BD_32S : pSC->WMII.bdBitDepth;
    const COLORFORMAT cf = pSC->WMISCP.bYUVData ?
        pSC->m_param.cfColorFormat : pSC->WMII.cfColorFormat;
    size_t cBytes;
    Bool bLessThan64Bit = sizeof(void *) < 8;

    if(cf == YUV_420)
        cRows = (cRows + 1) / 2;
    if(cRows > pSC->WMIBI.cLine)
        return ICERR_ERROR;

    if(cf == YUV_422 || cf == YUV_420)
        cWidth = (cWidth + 1) / 2;

    if (bLessThan64Bit && (cWidth >> ((sizeof(size_t) * 8 - 5)))) {
        /** potential overflow - 32 bit pointers insufficient to address cache **/
        /** this uses 2 macroblock row constraint, which is tighter than ensuring rollover doesn't occur below **/
        return ICERR_ERROR;
    }

    cBytes = pSC->WMISCP.bYUVData ? cWidth * sizeof(PixelI) *
        (cf == YUV_420 ? 6 : (cf == YUV_422 ? 4 : (cf == YUV_444 ? 3 : 1))) :
        (bd == BD_1 ? (pSC->WMII.cBitsPerUnit * cWidth + 7) / 8 : (pSC->WMII.cBitsPerUnit + 7) / 8 * cWidth);

    return (cBytes > pSC->WMIBI.cbStride ? ICERR_ERROR : ICERR_OK);
}

Void writeQPIndex(BitIOInfo * pIO, U8 uiIndex, U32 cBits)
{
    if(uiIndex == 0)
        putBit16(pIO, 1, 1); // default QP
    else{
        putBit16(pIO, 0, 1); // non default QP
        putBit16(pIO, uiIndex - 1, cBits);
    }
}

U8 readQPIndex(BitIOInfo * pIO, U32 cBits)
{
    if(getBit16(pIO, 1))
        return 0; // default QP

    return (U8) getBit16(pIO, cBits) + 1;
}

Void getTilePos(CWMImageStrCodec* pSC, size_t mbX, size_t mbY)
{   
    if(mbX == 0){ // left image boundary
        pSC->cTileColumn = 0;
    }
    else if(pSC->cTileColumn < pSC->WMISCP.cNumOfSliceMinus1V && mbX == pSC->WMISCP.uiTileX[pSC->cTileColumn + 1]){ // left tile boundary
        pSC->cTileColumn ++;
    }

    if(mbY == 0){ // top image boundary
        pSC->cTileRow = 0;
    }
    else if(pSC->cTileRow < pSC->WMISCP.cNumOfSliceMinus1H && mbY == pSC->WMISCP.uiTileY[pSC->cTileRow + 1]){ // top tile boundary
        pSC->cTileRow ++;
    }

    pSC->m_bCtxLeft = (mbX == pSC->WMISCP.uiTileX[pSC->cTileColumn]);
    pSC->m_bCtxTop  = (mbY == pSC->WMISCP.uiTileY[pSC->cTileRow]);

    pSC->m_bResetContext = pSC->m_bResetRGITotals = (((mbX - pSC->WMISCP.uiTileX[pSC->cTileColumn]) & 0xf) == 0);
    if(pSC->cTileColumn == pSC->WMISCP.cNumOfSliceMinus1V){ // last tile column
        if(mbX + 1 == pSC->cmbWidth)
            pSC->m_bResetContext = TRUE;
    }
    else if(mbX + 1 == pSC->WMISCP.uiTileX[pSC->cTileColumn + 1])
        pSC->m_bResetContext = TRUE;
}

//================================================================
// utility functions for 2 macro block rows
//================================================================
Void initMRPtr(CWMImageStrCodec* pSC)
{
    size_t j, jend = (pSC->m_pNextSC != NULL);

    for (j = 0; j <= jend; j++) {
        memcpy (pSC->p0MBbuffer, pSC->a0MBbuffer, sizeof (pSC->p0MBbuffer));
        memcpy (pSC->p1MBbuffer, pSC->a1MBbuffer, sizeof (pSC->p1MBbuffer));
        pSC = pSC->m_pNextSC;
    }
}

Void advanceMRPtr(CWMImageStrCodec* pSC)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const int cpChroma = cblkChromas[cf] * 16;
    size_t i, j, jend = (pSC->m_pNextSC != NULL);

    assert(pSC->m_bSecondary == FALSE);
    for (j = 0; j <= jend; j++) {
        int cpStride = 16 * 16;
        for (i = 0; i < pSC->m_param.cNumChannels; i++) {
            pSC->pPlane[i] = pSC->p0MBbuffer[i];

            pSC->p0MBbuffer[i] += cpStride;
            pSC->p1MBbuffer[i] += cpStride;

            cpStride = cpChroma;
        }
        pSC = pSC->m_pNextSC;
    }
}

/* advance to next MB row */
Void advanceOneMBRow(CWMImageStrCodec *pSC)
{
    size_t i, j, jend = (pSC->m_pNextSC != NULL);
    CWMIPredInfo *pPredInfo;

    for (j = 0; j <= jend; j++) {
        for(i = 0; i < pSC->m_param.cNumChannels; i ++){  // swap current row and previous row
            pPredInfo = pSC->PredInfo[i];
            pSC->PredInfo[i] = pSC->PredInfoPrevRow[i];
            pSC->PredInfoPrevRow[i] = pPredInfo;
        }
        pSC = pSC->m_pNextSC;
    }
}

Void swapMRPtr(CWMImageStrCodec* pSC)
{
    PixelI *pTemp[MAX_CHANNELS];
    size_t j, jend = (pSC->m_pNextSC != NULL);

    for (j = 0; j <= jend; j++) {
        memcpy (pTemp, pSC->a0MBbuffer, sizeof (pSC->a0MBbuffer));
        memcpy (pSC->a0MBbuffer, pSC->a1MBbuffer, sizeof (pSC->a0MBbuffer));
        memcpy (pSC->a1MBbuffer, pTemp, sizeof (pSC->a0MBbuffer));
        pSC = pSC->m_pNextSC;
    }
}

//================================================================
// Empty function to fill slot
//================================================================
Int IDPEmpty(CWMImageStrCodec* pSC)
{
    UNREFERENCED_PARAMETER( pSC );

    return ICERR_OK;
}

ERR WMPAlloc(void** ppv, size_t cb)
{
    *ppv = calloc(1, cb);
    return *ppv ? WMP_errSuccess : WMP_errOutOfMemory;
}

ERR WMPFree(void** ppv)
{
    if (*ppv)
    {
        free(*ppv);
        *ppv = NULL;
    }

    return WMP_errSuccess;
}

//================================================================
// Streaming I/O functions
//================================================================
ERR CreateWS_File(struct WMPStream** ppWS, const char* szFilename, const char* szMode)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = NULL;

    Call(WMPAlloc((void** )ppWS, sizeof(**ppWS)));
    pWS = *ppWS;

    pWS->Close = CloseWS_File;
    pWS->EOS = EOSWS_File;

    pWS->Read = ReadWS_File;
    pWS->Write = WriteWS_File;
    //pWS->GetLine = GetLineWS_File;

    pWS->SetPos = SetPosWS_File;
    pWS->GetPos = GetPosWS_File;

#ifdef WIN32
    FailIf(0 != fopen_s(&pWS->state.file.pFile, szFilename, szMode), WMP_errFileIO);
#else
    pWS->state.file.pFile = fopen(szFilename, szMode);
    FailIf(NULL == pWS->state.file.pFile, WMP_errFileIO);
#endif

Cleanup:    
    return err;
}

ERR CloseWS_File(struct WMPStream** ppWS)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = *ppWS;

    fclose(pWS->state.file.pFile);
    Call(WMPFree((void**)ppWS));

Cleanup:
    return err;
}

Bool EOSWS_File(struct WMPStream* pWS)
{
    return feof(pWS->state.file.pFile);
}

ERR ReadWS_File(struct WMPStream* pWS, void* pv, size_t cb)
{
    // ERR err = WMP_errSuccess;

    return (fread(pv, cb, 1, pWS->state.file.pFile) == 1) ? WMP_errSuccess : WMP_errFileIO;
}

ERR WriteWS_File(struct WMPStream* pWS, const void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;

    if(0 != cb)
    {
        FailIf(1 != fwrite(pv, cb, 1, pWS->state.file.pFile), WMP_errFileIO);
    }

Cleanup:
    return err;
}

ERR SetPosWS_File(struct WMPStream* pWS, size_t offPos)
{
    ERR err = WMP_errSuccess;

    FailIf(0 != fseek(pWS->state.file.pFile, (long)offPos, SEEK_SET), WMP_errFileIO);

Cleanup:
    return err;
}

ERR GetPosWS_File(struct WMPStream* pWS, size_t* poffPos)
{
    ERR err = WMP_errSuccess;
    long lOff = 0;

    FailIf(-1 == (lOff = ftell(pWS->state.file.pFile)), WMP_errFileIO);
    *poffPos = (size_t)lOff;

Cleanup:
    return err;
}

//----------------------------------------------------------------
ERR CreateWS_Memory(struct WMPStream** ppWS, void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = NULL;

    Call(WMPAlloc((void** )ppWS, sizeof(**ppWS)));
    pWS = *ppWS;

    pWS->state.buf.pbBuf = pv;
    pWS->state.buf.cbBuf = cb;
    pWS->state.buf.cbCur = 0;

    pWS->Close = CloseWS_Memory;
    pWS->EOS = EOSWS_Memory;

    pWS->Read = ReadWS_Memory;
    pWS->Write = WriteWS_Memory;

    pWS->SetPos = SetPosWS_Memory;
    pWS->GetPos = GetPosWS_Memory;

Cleanup:    
    return err;
}

ERR CloseWS_Memory(struct WMPStream** ppWS)
{
    ERR err = WMP_errSuccess;

    Call(WMPFree((void**)ppWS));
    
Cleanup:    
    return err;
}

Bool EOSWS_Memory(struct WMPStream* pWS)
{
    return pWS->state.buf.cbBuf <= pWS->state.buf.cbCur;
}

ERR ReadWS_Memory(struct WMPStream* pWS, void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;

//    FailIf(pWS->state.buf.cbBuf < pWS->state.buf.cbCur, WMP_errBufferOverflow);
    if(pWS->state.buf.cbBuf < pWS->state.buf.cbCur)
        return err;

    FailIf(pWS->state.buf.cbCur + cb < pWS->state.buf.cbCur, WMP_errBufferOverflow);
    if (pWS->state.buf.cbBuf < pWS->state.buf.cbCur + cb)
    {
        cb = pWS->state.buf.cbBuf - pWS->state.buf.cbCur;
    }

    memcpy(pv, pWS->state.buf.pbBuf + pWS->state.buf.cbCur, cb);
    pWS->state.buf.cbCur += cb;

Cleanup:
    return err;
}

ERR WriteWS_Memory(struct WMPStream* pWS, const void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;

    FailIf(pWS->state.buf.cbCur + cb < pWS->state.buf.cbCur, WMP_errBufferOverflow);
    FailIf(pWS->state.buf.cbBuf < pWS->state.buf.cbCur + cb, WMP_errBufferOverflow);

    memcpy(pWS->state.buf.pbBuf + pWS->state.buf.cbCur, pv, cb);
    pWS->state.buf.cbCur += cb;

Cleanup:
    return err;
}

ERR SetPosWS_Memory(struct WMPStream* pWS, size_t offPos)
{
    ERR err = WMP_errSuccess;

    //While the following condition is possibly useful, failure occurs
    //at the end of a file since packets beyond the end may be accessed
    //FailIf(pWS->state.buf.cbBuf < offPos, WMP_errBufferOverflow);
    pWS->state.buf.cbCur = offPos;

//Cleanup:
    return err;
}

ERR GetPosWS_Memory(struct WMPStream* pWS, size_t* poffPos)
{
    *poffPos = pWS->state.buf.cbCur;

    return WMP_errSuccess;
}

//=================================================================
// Linked list based WMPStream
// - for indefinite size, multiple stream out
// - reads not supported in this mode
//=================================================================
ERR CreateWS_List(struct WMPStream** ppWS)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pWS = NULL;

    Call(WMPAlloc((void** )ppWS, sizeof(**ppWS) + PACKETLENGTH + sizeof(void *)));
    pWS = *ppWS;

    pWS->state.buf.pbBuf = (U8 *)pWS + sizeof(**ppWS) + sizeof(void *); // first buffer points here

    memset(pWS->state.buf.pbBuf - sizeof(void *), 0, sizeof(void *));
    pWS->state.buf.cbBuf = PACKETLENGTH;
    pWS->state.buf.cbCur = 0;
    pWS->state.buf.cbBufCount = 0;

    pWS->Close = CloseWS_List;
    pWS->EOS = NULL; // doesn't get called

    pWS->Read = ReadWS_List;
    pWS->Write = WriteWS_List;

    pWS->SetPos = SetPosWS_List;
    pWS->GetPos = GetPosWS_List;

    //printf ("create buffer %d: %x\n", pWS->state.buf.cbBufCount, pWS->state.buf.pbBuf);

Cleanup:    
    return err;
}

ERR CloseWS_List(struct WMPStream** ppWS)
{
    ERR err = WMP_errSuccess;

    if (ppWS) {
        U8 *pBuf = (U8 *)(ppWS[0] + 1); // pointer to buffer
        U8 *pNext = (U8 *)(((void **)pBuf)[0]);
        while (pNext) {
//struct WMPStream *pWS = ppWS[0];
            pBuf = pNext;
            pNext = (U8 *)(((void **)(pBuf))[0]);
//printf ("delete buffer    %x\n", pBuf);
            Call(WMPFree((void**)&pBuf));
        }
    }
    Call(WMPFree((void**)ppWS));
    
Cleanup:    
    return err;
}

ERR ReadWS_List(struct WMPStream* pWS, void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;

    FailIf(pWS->state.buf.cbCur + cb < pWS->state.buf.cbCur, WMP_errBufferOverflow);
    if (pWS->state.buf.cbBuf < pWS->state.buf.cbCur + PACKETLENGTH * pWS->state.buf.cbBufCount + cb)
    {
        cb = pWS->state.buf.cbBuf - pWS->state.buf.cbCur - PACKETLENGTH * pWS->state.buf.cbBufCount;
    }

    while (cb) {
        size_t cl = PACKETLENGTH - pWS->state.buf.cbCur;
        if (cl > cb)
            cl = cb;
        memcpy(pv, pWS->state.buf.pbBuf + pWS->state.buf.cbCur, cl);
        pWS->state.buf.cbCur += cl;
        pv = (void *)((U8 *)pv + cl);
        cb -= cl;
        if (pWS->state.buf.cbCur == PACKETLENGTH) {
            pWS->state.buf.pbBuf = (U8 *)((void **)(pWS->state.buf.pbBuf - sizeof(void *)))[0] + sizeof(void *);
            pWS->state.buf.cbCur = 0;
            pWS->state.buf.cbBufCount++;

    //printf ("read buffer %d: %x\n", pWS->state.buf.cbBufCount, pWS->state.buf.pbBuf);
        }
    }

Cleanup:
    return err;
}

ERR WriteWS_List(struct WMPStream* pWS, const void* pv, size_t cb)
{
    ERR err = WMP_errSuccess;

    FailIf(pWS->state.buf.cbCur + cb < pWS->state.buf.cbCur, WMP_errBufferOverflow);
    FailIf(pWS->state.buf.cbBuf < pWS->state.buf.cbCur + cb, WMP_errBufferOverflow);

    while (cb) {
        size_t cl = PACKETLENGTH - pWS->state.buf.cbCur;
        if (cl > cb)
            cl = cb;
        memcpy(pWS->state.buf.pbBuf + pWS->state.buf.cbCur, pv, cl);
        pWS->state.buf.cbCur += cl;
        pv = (const void *)((U8 *)pv + cl);
        cb -= cl;
        if (pWS->state.buf.cbCur == PACKETLENGTH) { // allocate next packet in list
            U8 *pBuf  = NULL;
            void **pPtrLoc = (void **)(pWS->state.buf.pbBuf - sizeof(void *));
            Call(WMPAlloc((void **)&pBuf, PACKETLENGTH + sizeof(void *)));
            pPtrLoc[0] = (void *)pBuf;
            pWS->state.buf.pbBuf = pBuf + sizeof(void *);
            pWS->state.buf.cbBuf += PACKETLENGTH;
            memset(pBuf, 0, sizeof(void *));
            pWS->state.buf.cbCur = 0;
            pWS->state.buf.cbBufCount++;

    //printf ("create buffer %d: %x\n", pWS->state.buf.cbBufCount, pWS->state.buf.pbBuf);
        }
    }

Cleanup:
    return err;
}

ERR SetPosWS_List(struct WMPStream* pWS, size_t offPos)
{
    ERR err = WMP_errSuccess;

    // get the first buffer
    U8 *pBuf = (U8 *)(pWS + 1); // pointer to buffer
    pWS->state.buf.cbCur = 0;
    pWS->state.buf.cbBufCount = 0;

    while (offPos >= PACKETLENGTH && pBuf != NULL) {
        pBuf = (U8 *)(((void **)pBuf)[0]);
        offPos -= PACKETLENGTH;
        pWS->state.buf.cbBufCount++;
    }

    if (pBuf == NULL)
        goto Cleanup;

    pWS->state.buf.cbCur = offPos;
    pWS->state.buf.pbBuf = pBuf + sizeof(void *);
    //printf ("seek buffer %d: %x\n", pWS->state.buf.cbBufCount, pWS->state.buf.pbBuf);

Cleanup:
    return err;
}

ERR GetPosWS_List(struct WMPStream* pWS, size_t* poffPos)
{
    *poffPos = pWS->state.buf.cbCur + PACKETLENGTH * pWS->state.buf.cbBufCount;

    return WMP_errSuccess;
}

//================================================================
// Simple BitIO access functions
//================================================================
// init SimpleBitIO
ERR attach_SB(SimpleBitIO* pSB, struct WMPStream* pWS)
{
    pSB->pWS = pWS;
    pSB->cbRead = 0;
    pSB->bAccumulator = 0;
    pSB->cBitLeft = 0;

    return WMP_errSuccess;
}

// extract upto 32bit from input stream
U32 getBit32_SB(SimpleBitIO* pSB, U32 cBits)
{
    U32 rc = 0;

    while (pSB->cBitLeft < cBits)
    {
        rc <<= pSB->cBitLeft;
        rc |= pSB->bAccumulator >> (8 - pSB->cBitLeft);

        cBits -= pSB->cBitLeft;

        pSB->pWS->Read(pSB->pWS, &pSB->bAccumulator, 1);
        pSB->cbRead++;
        pSB->cBitLeft = 8;
    }

    rc <<= cBits;
    rc |= pSB->bAccumulator >> (8 - cBits);
    pSB->bAccumulator <<= cBits;
    pSB->cBitLeft -= cBits;

    return rc;
}

// ignore input to byte boundary
Void flushToByte_SB(SimpleBitIO* pSB)
{
    pSB->bAccumulator = 0;
    pSB->cBitLeft = 0;
}

// return read byte count
U32 getByteRead_SB(SimpleBitIO* pSB)
{
    return pSB->cbRead;
}

ERR detach_SB(SimpleBitIO* pSB)
{
    assert(0 == pSB->cBitLeft);
    pSB->pWS = NULL;

    return WMP_errSuccess;
}

//================================================================
// Memory access functions
//================================================================
#if (defined(WIN32) && !defined(UNDER_CE)) || (defined(UNDER_CE) && defined(_ARM_))
// WinCE ARM and Desktop x86
#else
// other platform
#ifdef _BIG__ENDIAN_
#define _byteswap_ulong(x)  (x)
#else // _BIG__ENDIAN_
U32 _byteswap_ulong(U32 bits)
{
    U32 r = (bits & 0xffu) << 24;
    r |= (bits << 8) & 0xff0000u;
    r |= ((bits >> 8) & 0xff00u);
    r |= ((bits >> 24) & 0xffu);

    return r;
}
#endif // _BIG__ENDIAN_
#endif

U32 load4BE(void* pv)
{
#ifdef _BIG__ENDIAN_
    return (*(U32*)pv);
#else // _BIG__ENDIAN_
#if defined(_M_IA64) || defined(_ARM_)
    U32  v;
    v = ((U16 *) pv)[0];
    v |= ((U32)((U16 *) pv)[1]) << 16;
    return _byteswap_ulong(v);
#else // _M_IA64
    return _byteswap_ulong(*(U32*)pv);
#endif // _M_IA64
#endif // _BIG__ENDIAN_
}

#define LOAD16 load4BE

#ifdef _BIG__ENDIAN_
#define WRITESWAP_ENDIAN(a) ((a)>>16)
#else // _BIG__ENDIAN_
#define WRITESWAP_ENDIAN(a)	_byteswap_ulong(a)
#endif // _BIG__ENDIAN_

//================================================================
// Bit I/O functions 
//================================================================
Int allocateBitIOInfo(CWMImageStrCodec* pSC)
{
    U32 cNumBitIO;
    SUBBAND sbSubband = pSC->WMISCP.sbSubband;

    pSC->cSB = (sbSubband == SB_DC_ONLY ? 1 : (sbSubband == SB_NO_HIGHPASS ? 2 : (sbSubband == SB_NO_FLEXBITS ? 3 : 4)));

    // # of additional BitIOs other than pSC->pIOHeader
    if (!pSC->m_param.bIndexTable) { // pure streaming mode, no index table, no additional BitIO!
        assert (pSC->WMISCP.bfBitstreamFormat == SPATIAL && pSC->WMISCP.cNumOfSliceMinus1H + pSC->WMISCP.cNumOfSliceMinus1V == 0);
        cNumBitIO = 0;
    }
    else if(pSC->WMISCP.bfBitstreamFormat == SPATIAL)
        cNumBitIO = pSC->WMISCP.cNumOfSliceMinus1V + 1;
    else
        cNumBitIO = (pSC->WMISCP.cNumOfSliceMinus1V + 1) * pSC->cSB;

    if(cNumBitIO > MAX_TILES * 4)
        return ICERR_ERROR;

    // allocate additional BitIos
    if(cNumBitIO > 0){
        U32 i = 0;
        size_t cb = sizeof(BitIOInfo) * cNumBitIO + (PACKETLENGTH * 4 - 1) + PACKETLENGTH * 4 * cNumBitIO;
        U8* pb = (U8*)malloc(cb);

        if (NULL == pb) return ICERR_ERROR;
        memset(pb, 0, cb);

        pSC->m_ppBitIO = (BitIOInfo**)pb;
        pb += sizeof(BitIOInfo) * cNumBitIO;

        pb = (U8*)ALIGNUP(pb, PACKETLENGTH * 4) + PACKETLENGTH * 2;
        for (i = 0; i < cNumBitIO; ++i){
            pSC->m_ppBitIO[i] = (BitIOInfo*)pb;
            pb += PACKETLENGTH * 4;
        }

        // allocate index table
        if(cNumBitIO > MAX_TILES * 4 || pSC->WMISCP.cNumOfSliceMinus1H >= MAX_TILES)
            return ICERR_ERROR;
        pSC->pIndexTable = malloc(cNumBitIO * (pSC->WMISCP.cNumOfSliceMinus1H + 1) * sizeof(size_t));
        if(NULL == pSC->pIndexTable) return ICERR_ERROR;
    }

    pSC->cNumBitIO = cNumBitIO;

    return ICERR_OK;
}

Int setBitIOPointers(CWMImageStrCodec* pSC)
{
    if(pSC->cNumBitIO > 0){
        U32 i;

        for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1V; i ++){
            CCodingContext * pContext = &pSC->m_pCodingContext[i];
            if(pSC->WMISCP.bfBitstreamFormat == SPATIAL){
                pContext->m_pIODC = pContext->m_pIOLP = pContext->m_pIOAC = pContext->m_pIOFL = pSC->m_ppBitIO[i];
            }
            else{
                U32 j = pSC->cSB;

                pContext->m_pIODC = pSC->m_ppBitIO[i * j];
                if(j > 1)
                    pContext->m_pIOLP = pSC->m_ppBitIO[i * j + 1];
                if(j > 2)
                    pContext->m_pIOAC = pSC->m_ppBitIO[i * j + 2];
                if(j > 3)
                    pContext->m_pIOFL = pSC->m_ppBitIO[i * j + 3];
            }
        }
    }
    else{ // streamimg mode
        CCodingContext * pContext = &pSC->m_pCodingContext[0];
        pContext->m_pIODC = pContext->m_pIOLP = pContext->m_pIOAC = pContext->m_pIOFL = pSC->pIOHeader;
    }

    return ICERR_OK;
}

Int allocateTileInfo(CWMImageStrCodec * pSC)
{
    size_t i;

    if(pSC->WMISCP.cNumOfSliceMinus1V >= MAX_TILES)
        return ICERR_ERROR;
    pSC->pTile = (CWMITile *)malloc((pSC->WMISCP.cNumOfSliceMinus1V + 1) * sizeof(CWMITile));
    if(pSC->pTile == NULL)
        return ICERR_ERROR;
    memset(pSC->pTile, 0, (pSC->WMISCP.cNumOfSliceMinus1V + 1) * sizeof(CWMITile));

    for(i = 0; i <= pSC->WMISCP.cNumOfSliceMinus1V; i ++)
        pSC->pTile[i].cNumQPHP = pSC->pTile[i].cNumQPLP = 1, pSC->pTile[i].cBitsHP = pSC->pTile[i].cBitsLP = 0;

    return ICERR_OK;
}

Void freeTileInfo(CWMImageStrCodec * pSC)
{
    size_t iTile;

    if((pSC->m_param.uQPMode & 1) != 0) // not DC uniform
        for(iTile = 0; iTile <= pSC->WMISCP.cNumOfSliceMinus1V; iTile ++)
            freeQuantizer(pSC->pTile[iTile].pQuantizerDC);
    else
        freeQuantizer(pSC->pTile[0].pQuantizerDC);

    if(pSC->WMISCP.sbSubband != SB_DC_ONLY)
        if((pSC->m_param.uQPMode & 2) != 0) // not LP uniform
            for(iTile = 0; iTile <= pSC->WMISCP.cNumOfSliceMinus1V; iTile ++)
                freeQuantizer(pSC->pTile[iTile].pQuantizerLP);
        else
            freeQuantizer(pSC->pTile[0].pQuantizerLP);

    if(pSC->WMISCP.sbSubband != SB_DC_ONLY && pSC->WMISCP.sbSubband != SB_NO_HIGHPASS)
        if((pSC->m_param.uQPMode & 4) != 0) // not HP uniform
            for(iTile = 0; iTile <= pSC->WMISCP.cNumOfSliceMinus1V; iTile ++)
                freeQuantizer(pSC->pTile[iTile].pQuantizerHP);
        else
            freeQuantizer(pSC->pTile[0].pQuantizerHP);

    if(pSC->pTile != NULL)
        free(pSC->pTile);
}

Int allocateQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS], size_t cChannel, size_t cQP)
{
    size_t iCh;
    
    if(cQP > 16 || cChannel > MAX_CHANNELS)
        return ICERR_ERROR;
    pQuantizer[0] = (CWMIQuantizer *)malloc(cQP * sizeof(CWMIQuantizer) * cChannel);
    if(pQuantizer[0] == NULL)
        return ICERR_ERROR;

    for(iCh = 1; iCh < cChannel; iCh ++)
        pQuantizer[iCh] = pQuantizer[iCh - 1] + cQP;

    return ICERR_OK;
}

Void freeQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS])
{
    if(pQuantizer[0] != NULL)
        free(pQuantizer[0]);
}

Void formatQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS], U8 cChMode, size_t cCh, size_t iPos, Bool bShiftedUV,
                     Bool bScaledArith)
{
    size_t iCh;
    
    for(iCh = 0; iCh < cCh; iCh ++){
        if(iCh > 0)
            if(cChMode == 0) // uniform
                pQuantizer[iCh][iPos] = pQuantizer[0][iPos];
            else if(cChMode == 1) // mixed
                pQuantizer[iCh][iPos] = pQuantizer[1][iPos];
        remapQP(pQuantizer[iCh] + iPos, (iCh > 0 && bShiftedUV == TRUE) ? SHIFTZERO - 1 : SHIFTZERO, bScaledArith);
    }
}

Void setUniformQuantizer(CWMImageStrCodec * pSC, size_t sb)
{
    size_t iCh, iTile;

    for(iCh = 0; iCh < pSC->m_param.cNumChannels; iCh ++)
        for(iTile = 1; iTile <= pSC->WMISCP.cNumOfSliceMinus1V; iTile ++)
            if(sb == 0) // DC
                pSC->pTile[iTile].pQuantizerDC[iCh] = pSC->pTile[0].pQuantizerDC[iCh];
            else if(sb == 1) // LP
                pSC->pTile[iTile].pQuantizerLP[iCh] = pSC->pTile[0].pQuantizerLP[iCh];
            else // HP
                pSC->pTile[iTile].pQuantizerHP[iCh] = pSC->pTile[0].pQuantizerHP[iCh];
}

Void useDCQuantizer(CWMImageStrCodec * pSC, size_t iTile)
{
   size_t iCh;

    for(iCh = 0; iCh < pSC->m_param.cNumChannels; iCh ++)
        pSC->pTile[iTile].pQuantizerLP[iCh][0] = *pSC->pTile[iTile].pQuantizerDC[iCh];
}

Void useLPQuantizer(CWMImageStrCodec * pSC, size_t cQP, size_t iTile)
{
   size_t iCh, iQP;

    for(iCh = 0; iCh < pSC->m_param.cNumChannels; iCh ++)
        for(iQP = 0; iQP < cQP; iQP ++)
            pSC->pTile[iTile].pQuantizerHP[iCh][iQP] = pSC->pTile[iTile].pQuantizerLP[iCh][iQP];
}

U8 dquantBits(U8 cQP)
{
    return (cQP < 2 ? 0 : (cQP < 4 ? 1 : (cQP < 6 ? 2 : (cQP < 10 ? 3 : 4))));
}

#ifndef ARMOPT_BITIO
U32 peekBit16(BitIOInfo* pIO, U32 cBits)
{
    PEEKBIT16(pIO, cBits);
}

U32 flushBit16(BitIOInfo* pIO, U32 cBits)
{
    FLUSHBIT16(pIO, cBits);
}

U32 getBit16(BitIOInfo* pIO, U32 cBits)
{
    U32 uiRet = peekBit16(pIO, cBits);
    flushBit16(pIO, cBits);

    return uiRet;
}

U32 getBool16(BitIOInfo* pIO)
{
    U32 uiRet = peekBit16(pIO, 1);
    flushBit16(pIO, 1);
    return uiRet;
}

/** this function returns cBits if zero is read, or a signed value if first cBits are not all zero **/
I32 getBit16s(BitIOInfo* pIO, U32 cBits)
{
    U32 uiRet = peekBit16(pIO, cBits + 1);
    if (uiRet < 2) {
        flushBit16(pIO, cBits);
        return 0;
    }
    else {
        flushBit16(pIO, cBits + 1);
        if (uiRet & 1)
            return (-(I32)(uiRet >> 1));
        else
            return (I32)(uiRet >> 1);
    }
}

U32 getBit32(BitIOInfo* pIO, U32 cBits)
{
    U32 uiRet = 0;

    assert(0 <= (I32)cBits && cBits <= 32);

    if (16 < cBits)
    {
        uiRet = getBit16(pIO, 16);
        cBits -= 16;
        uiRet <<= cBits;
    }

    uiRet |= getBit16(pIO, cBits);

    return uiRet;
}

U32 flushToByte(BitIOInfo* pIO)
{
    return flushBit16(pIO, (16 - pIO->cBitsUsed) & 7);
}
#endif  // ARMOPT_BITIO

//----------------------------------------------------------------
Void putBit16z(BitIOInfo* pIO, U32 uiBits, U32 cBits)
{
    assert(cBits <= 16);
    assert(0 == uiBits >> cBits);

    pIO->uiAccumulator = (pIO->uiAccumulator << cBits) | uiBits;
    pIO->cBitsUsed += cBits;

    *(U16*)pIO->pbCurrent = (U16)WRITESWAP_ENDIAN(pIO->uiAccumulator << (32 - pIO->cBitsUsed));

    pIO->pbCurrent = MASKPTR(pIO->pbCurrent + ((pIO->cBitsUsed >> 3) & 2), pIO->iMask);
    pIO->cBitsUsed &= 16 - 1;
}

Void putBit16(BitIOInfo* pIO, U32 uiBits, U32 cBits)
{
    assert(cBits <= 16);

    uiBits &= ~(-1 << cBits);
    putBit16z(pIO, uiBits, cBits);
}

Void putBit32(BitIOInfo* pIO, U32 uiBits, U32 cBits)
{
    assert(0 <= (I32)cBits && cBits <= 32);

    if (16 < cBits)
    {
        putBit16(pIO, uiBits >> (cBits - 16), 16);
        cBits -= 16;
    }

    putBit16(pIO, uiBits, cBits);
}

Void fillToByte(BitIOInfo* pIO)
{
    putBit16z(pIO, 0, (16 - pIO->cBitsUsed) & 7);
}

//----------------------------------------------------------------
U32 getBit16_S(CWMImageStrCodec* pSC, BitIOInfo* pIO, U32 cBits)
{
    U32 rc = getBit16(pIO, cBits);
    readIS_L1(pSC, pIO);

    return rc;
}

U32 putBit16_S(CWMImageStrCodec* pSC, BitIOInfo* pIO, U32 uiBits, U32 cBits)
{
    putBit16(pIO, uiBits, cBits);
    writeIS_L1(pSC, pIO);

    return 0;
}


//----------------------------------------------------------------
// Query buffered data size held in BitIOInfo
// Write() for Enc, Read() for Dec
//----------------------------------------------------------------
U32 getSizeRead(BitIOInfo* pIO)
{
    return (U32)(UINTPTR_T)(pIO->pbStart + PACKETLENGTH * 2 - pIO->pbCurrent) - pIO->cBitsUsed / 8;
}

U32 getSizeWrite(BitIOInfo* pIO)
{
    return (U32)(UINTPTR_T)(pIO->pbCurrent + (pIO->pbStart <= pIO->pbCurrent ? 0 : PACKETLENGTH * 2) - pIO->pbStart) + pIO->cBitsUsed / 8;
}

//----------------------------------------------------------------
// Query stream offset from attached BitIO object for dec
//----------------------------------------------------------------
U32 getPosRead(BitIOInfo* pIO)
{
    size_t cbCached = (pIO->pbStart + PACKETLENGTH * 2 - pIO->pbCurrent) - pIO->cBitsUsed / 8;
    return (U32)(pIO->offRef - cbCached);
}

//================================================================
// Block I/O functions
//================================================================
#ifndef ARMOPT_BITIO
ERR attachISRead(BitIOInfo* pIO, struct WMPStream* pWS, CWMImageStrCodec* pSC)
{
    UNREFERENCED_PARAMETER( pSC );

    pWS->GetPos(pWS, &pIO->offRef);

    pIO->pbStart = (U8*)pIO - PACKETLENGTH * 2;
    pIO->pbCurrent = pIO->pbStart;

    PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    pWS->SetPos(pWS, pIO->offRef);
    pWS->Read(pWS, pIO->pbStart, PACKETLENGTH * 2);
    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    pIO->offRef += PACKETLENGTH * 2;

    pIO->uiAccumulator = load4BE(pIO->pbStart);
    
    pIO->cBitsUsed = 0;
    pIO->iMask = ~(PACKETLENGTH * 2);
    pIO->iMask &= ~1;

    pIO->pWS = pWS;
    return WMP_errSuccess;
}

ERR readIS(CWMImageStrCodec* pSC, BitIOInfo* pIO)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pSC );

    if (PACKET1(pIO->pbStart, pIO->pbCurrent, PACKETLENGTH))
    {
        struct WMPStream *pWS = pIO->pWS;

        PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
        //Call(0 != pIO->pWS->Read(pIO->pWS, pIO->pbStart, PACKETLENGTH));
        // TODO: add error checking code
        pWS->SetPos(pWS, pIO->offRef);
        pWS->Read(pWS, pIO->pbStart, PACKETLENGTH);
        pIO->offRef += PACKETLENGTH;
        PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);

        // make shadow copy for first 4B
        pIO->uiShadow = *(U32*)pIO->pbStart;

        // reposition pbPacket pointer
        pIO->pbStart = MASKPTR(pIO->pbStart + PACKETLENGTH, pIO->iMask);
    }

//Cleanup:
    return err;
}

ERR detachISRead(CWMImageStrCodec* pSC, BitIOInfo* pIO)
{
    ERR err = WMP_errSuccess;

    struct WMPStream* pWS = pIO->pWS;
    size_t cbRemain = 0;

    // we can ONLY detach IStream at byte boundary
    flushToByte(pIO);
    assert(0 == (pIO->cBitsUsed % 8));
    Call(readIS_L1(pSC, pIO));

    // set stream to right offset, undo buffering
    cbRemain = (pIO->pbStart + PACKETLENGTH * 2) - (pIO->pbCurrent + pIO->cBitsUsed / 8);
    pWS->SetPos(pWS, pIO->offRef - cbRemain);

    pIO->pWS = NULL;
Cleanup:
    return err;
}
#endif  // ARMOPT_BITIO

//----------------------------------------------------------------
ERR attachISWrite(BitIOInfo* pIO, struct WMPStream* pWS)
{
    pWS->GetPos(pWS, &pIO->offRef);

    pIO->pbStart = (U8*)pIO - PACKETLENGTH * 2;
    pIO->pbCurrent = pIO->pbStart;

    pIO->uiAccumulator = 0;
    pIO->cBitsUsed = 0;
    pIO->iMask = ~(PACKETLENGTH * 2);

    pIO->pWS = pWS;
    return WMP_errSuccess;
}

// write out packet if we have >=1 packet data filled
ERR writeIS(CWMImageStrCodec* pSC, BitIOInfo* pIO)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pSC );

    if (PACKET1(pIO->pbStart, pIO->pbCurrent, PACKETLENGTH))
    {
        PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
        err = pIO->pWS->Write(pIO->pWS, pIO->pbStart, PACKETLENGTH);
        PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
        Call(err);

        // reposition pbStart pointer
        pIO->pbStart = MASKPTR(pIO->pbStart + PACKETLENGTH, pIO->iMask);
    }

Cleanup:
    return err;
}

// write out partially filled buffer and detach bitIO from IStream
ERR detachISWrite(CWMImageStrCodec* pSC, BitIOInfo* pIO)
{
    ERR err = WMP_errSuccess;

    // we can ONLY detach IStream at byte boundary
    assert(0 == (pIO->cBitsUsed % 8));
    Call(writeIS_L1(pSC, pIO));

    PERFTIMER_STOP(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    err = pIO->pWS->Write(pIO->pWS, pIO->pbStart, pIO->pbCurrent + pIO->cBitsUsed / 8 - pIO->pbStart);
    PERFTIMER_START(pSC->m_fMeasurePerf, pSC->m_ptEncDecPerf);
    Call(err);

    pIO->pWS = NULL;
Cleanup:
    return err;
}

//=========================
// Performance Measurement
//=========================
#ifndef DISABLE_PERF_MEASUREMENT

void OutputIndivPerfTimer(struct PERFTIMERSTATE *pPerfTimer,
                          char *pszTimerName,
                          char *pszDescription,
                          float fltMegaPixels)
{
    PERFTIMERRESULTS    rResults;
    Bool                fResult;

    fResult = FALSE;
    printf("%s (%s): ", pszTimerName, pszDescription);
    if (pPerfTimer)
    {
        fResult = PerfTimerGetResults(pPerfTimer, &rResults);
        if (fResult)
        {
            printf("%.3f milliseconds, %.6f MP/sec\n", (float)rResults.iElapsedTime / 1000000,
                1000000000 * fltMegaPixels / rResults.iElapsedTime);
            if (rResults.iZeroTimeIntervals > 0)
            {
                printf("   *** WARNING: %d time intervals were measured as zero. "
                    "This perf timer has insufficient precision!\n\n",
                    (int) rResults.iZeroTimeIntervals);
            }
        }
    }
    if (FALSE == fResult)
        printf("Results not available!\n");
}


void OutputPerfTimerReport(CWMImageStrCodec *pState)
{
    float               fltMegaPixels;

    assert(pState->m_fMeasurePerf);

    printf("***************************************************************************\n");
    printf("* Perf Report\n");
    printf("***************************************************************************\n\n");
    
    fltMegaPixels = (float)pState->WMII.cWidth * pState->WMII.cHeight / 1000000;
    printf("Image Width = %d, Height = %d, total MegaPixels = %.1f MP\n",
        (int) pState->WMII.cWidth, (int) pState->WMII.cHeight, fltMegaPixels);

    OutputIndivPerfTimer(pState->m_ptEncDecPerf, "m_ptEncDecPerf", "excl I/O", fltMegaPixels);
    OutputIndivPerfTimer(pState->m_ptEndToEndPerf, "m_ptEndToEndPerf", "incl I/O", fltMegaPixels);
}

#endif // DISABLE_PERF_MEASUREMENT
