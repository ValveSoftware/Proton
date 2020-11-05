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

Void smoothMB(PixelI * p1, PixelI * p0, PixelI * q0, PixelI * q1)
{
    //  p1 p0 | q0 q1
    PixelI delta = ((((*q0 - *p0) << 2) + (*p1 - *q1)) >> 3);
    
    *q0 -= delta;
    *p0 += delta;
}

Void smooth(PixelI * p2, PixelI * p1, PixelI * p0, PixelI * q0, PixelI * q1, PixelI * q2)
{
    //    p2 p1 p0 | q0 q1 q2
    PixelI delta = ((((*q0 - *p0) << 2) + (*p1 - *q1)) >> 3);

    *q0 -= delta;
    *p0 += delta;

    *p1 = (*p1 >> 1) + ((*p0 + *p2) >> 2);
    *q1 = (*q1 >> 1) + ((*q0 + *q2) >> 2);
}

Int initPostProc(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t mbWidth, size_t iNumChannels)
{
    size_t i, j, k, l;
    Bool b32bit = sizeof(int) == 4;
    
    for(j = 0; j < iNumChannels; j ++){
        for(i = 0; i < 2; i ++){
            // 2 more are allocated to avoid boundary check
            if(b32bit) // integer overlow/underflow check for 32-bit system
                if((((mbWidth + 2) >> 16) * sizeof(struct tagPostProcInfo)) & 0xffff0000)
                    return ICERR_ERROR;
            strPostProcInfo[j][i] = (struct tagPostProcInfo *)malloc((mbWidth + 2) * sizeof(struct tagPostProcInfo));
            assert(strPostProcInfo[j][i] != NULL);
            if(strPostProcInfo[j][i] == NULL){
                return ICERR_ERROR;
            }
            strPostProcInfo[j][i] ++;
            
            // initialize out-of-bound MBs as bumpy (no post at all) to avoid boundary check
            // left boundary
            strPostProcInfo[j][i][-1].ucMBTexture = 3;
            for(l = 0; l < 4; l ++){
                for(k = 0; k < 4; k ++){
                    strPostProcInfo[j][i][-1].ucBlockTexture[l][k] = 3;
                }
            }
            // right boundary
            strPostProcInfo[j][i][mbWidth] = strPostProcInfo[j][i][-1];
        }
    }

    return ICERR_OK;
}

Void termPostProc(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t iNumChannels)
{
    size_t i, j;

    for(j = 0; j < iNumChannels; j ++){
        for(i = 0; i < 2; i ++){
            if(strPostProcInfo[j][i] != NULL){
                free(strPostProcInfo[j][i] - 1);
            }
        }
    }
}

Void slideOneMBRow(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t iNumChannels, size_t mbWidth, Bool top, Bool bottom)
{
    size_t i, j;
    struct tagPostProcInfo * bar;

    for(i = 0; i < iNumChannels; i ++){
        // swap previous row and current row
        bar = strPostProcInfo[i][0];
        strPostProcInfo[i][0] = strPostProcInfo[i][1];
        strPostProcInfo[i][1] = bar;

        if(top){ // if top row, previous row is out of boundary
            for(j = 0; j < mbWidth; j ++){
                strPostProcInfo[i][0][j] = strPostProcInfo[i][0][-1]; // set as bumpy
            }
        }
        
        if(bottom){ // if bottom bottom row, set current row of MBs (out of boundary) as bumpy
            for(j = 0; j < mbWidth; j ++){
                strPostProcInfo[i][1][j] = strPostProcInfo[i][1][-1]; // set as bumpy
            }
        }
    }
}

// get DC and texture infomation right before transform
Void updatePostProcInfo(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * pMB, size_t mbX, size_t cc)
{
    size_t i, j;
    struct tagPostProcInfo * pMBInfo = strPostProcInfo[cc][1] + mbX;

    // DC of MB
    pMBInfo->iMBDC = pMB[0];

    // texture of MB
    pMBInfo->ucMBTexture = 0; // smooth
    for(i = 16; i < 256; i += 16){
        if(pMB[i] != 0){
            pMBInfo->ucMBTexture = 3; // bumpy
            break;
        }
    }

    // DCs of blocks not available yet, will collect after demacroblocking

    // textures of blocks
    for(j = 0; j < 4; j ++)
        for(i = 0; i < 4; i ++){
            PixelI * p = pMB + i * 64 + j * 16;
            size_t k;

            for(k = 1, pMBInfo->ucBlockTexture[j][i] = 0; k < 16; k ++){
                if(p[k] != 0){
                    pMBInfo->ucBlockTexture[j][i] = 3;
                    break;
                }
            }
        }
}

// demacroblock critirion: two MBs have same texture other than bumpy and DCs differ less than 1
#define DMB(a, b) (a->ucMBTexture + b->ucMBTexture == 0) && (abs(a->iMBDC - b->iMBDC) <= threshold)

// demacroblock and get DCs of blocks
Void postProcMB(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * p0, PixelI * p1, size_t mbX, size_t cc, Int threshold)
{
    /* 4 MBs involved, current MB is d, we have 4 2-pixel boundary segments */
    /*    |     */
    /*  a | b   */
    /* - - + +  */
    /*  c ! d   */
    /*    !     */
    struct tagPostProcInfo * pMBb = strPostProcInfo[cc][0] + mbX, * pMBa = pMBb - 1, * pMBd = strPostProcInfo[cc][1] + mbX, * pMBc = pMBd - 1;

    // demacroblock segment --
   if(DMB(pMBa, pMBc)){
        smoothMB(p0 - 256 + 10 * 16, p0 - 256 + 11 * 16, p1 - 256 +  8 * 16, p1 - 256 +  9 * 16);
        smoothMB(p0 - 256 + 14 * 16, p0 - 256 + 15 * 16, p1 - 256 + 12 * 16, p1 - 256 + 13 * 16);
    }

    // demacroblock segment ++
    if(DMB(pMBb, pMBd)){
        smoothMB(p0 + 2 * 16, p0 + 3 * 16, p1 + 0 * 16, p1 + 1 * 16);
        smoothMB(p0 + 6 * 16, p0 + 7 * 16, p1 + 4 * 16, p1 + 5 * 16);
    }

    // demacroblock segment |
    if(DMB(pMBa, pMBb)){
        smoothMB(p0 - 256 + 10 * 16, p0 - 256 + 14 * 16, p0 + 2 * 16, p0 + 6 * 16);
        smoothMB(p0 - 256 + 11 * 16, p0 - 256 + 15 * 16, p0 + 3 * 16, p0 + 7 * 16);
    }

    // demacroblock segment !
    if(DMB(pMBc, pMBd)){
        smoothMB(p1 - 256 + 8 * 16, p1 - 256 + 12 * 16, p1 + 0 * 16, p1 + 4 * 16);
        smoothMB(p1 - 256 + 9 * 16, p1 - 256 + 13 * 16, p1 + 1 * 16, p1 + 5 * 16);
    }

    /* update DCs of blocks */
    // MB d 
    pMBd->iBlockDC[0][0] = p1[0 * 16];
    pMBd->iBlockDC[0][1] = p1[4 * 16];
    pMBd->iBlockDC[1][0] = p1[1 * 16];
    pMBd->iBlockDC[1][1] = p1[5 * 16];
    
    // MB b
    pMBb->iBlockDC[2][0] = p0[2 * 16];
    pMBb->iBlockDC[2][1] = p0[6 * 16];
    pMBb->iBlockDC[3][0] = p0[3 * 16];
    pMBb->iBlockDC[3][1] = p0[7 * 16];

    // MB c
    pMBc->iBlockDC[0][2] = p1[ 8 * 16 - 256];
    pMBc->iBlockDC[0][3] = p1[12 * 16 - 256];
    pMBc->iBlockDC[1][2] = p1[ 9 * 16 - 256];
    pMBc->iBlockDC[1][3] = p1[13 * 16 - 256];

    // MB a
    pMBa->iBlockDC[2][2] = p0[10 * 16 - 256];
    pMBa->iBlockDC[2][3] = p0[14 * 16 - 256];
    pMBa->iBlockDC[3][2] = p0[11 * 16 - 256];
    pMBa->iBlockDC[3][3] = p0[15 * 16 - 256];
}

/* deblock and destair blocks */
/* 4 MBs involved, need to process 16 blocks of a */
/*    |     */
/*  a | b   */
/* - - - -  */
/*  c | d   */
/*    |     */
Void postProcBlock(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * p0, PixelI * p1, size_t mbX, size_t cc, Int threshold)
{
    size_t i, j, k;
    Int dc[5][5];
    U8 texture[5][5];
    struct tagPostProcInfo * pMBb = strPostProcInfo[cc][0] + mbX, * pMBa = pMBb - 1, * pMBd = strPostProcInfo[cc][1] + mbX, * pMBc = pMBd - 1;
    PixelI * pc, * pt;

    /* copy DC and Texture info, can be optimized out */
    for(j = 0; j < 4; j ++){
        // from MB a
        for(i = 0; i < 4; i ++){
            dc[j][i] = pMBa->iBlockDC[j][i];
            texture[j][i] = pMBa->ucBlockTexture[j][i];
        }
        
        // 4 blocks from MB c
        dc[4][j] = pMBc->iBlockDC[0][j];
        texture[4][j] = pMBc->ucBlockTexture[0][j];

        // 4 blocks from MB b
        dc[j][4] = pMBb->iBlockDC[j][0];
        texture[j][4] = pMBb->ucBlockTexture[j][0];
    }
    // 1 block from MB d
    dc[4][4] = pMBd->iBlockDC[0][0];
    texture[4][4] = pMBd->ucBlockTexture[0][0];

    /* block boundaries */
    /*     | */
    /*     | */
    /*  ---  */

    for(j = 0; j < 4; j ++){
        for(i = 0; i < 4; i ++){
            pc = p0 - 256 + i * 64 + j * 16;

            // deblock
            if(texture[j][i] + texture[j + 1][i] < 3 && abs(dc[j][i] - dc[j + 1][i]) <= threshold){
                // smooth horizontal boundary ----
                pt = (j < 3 ? pc + 16 : p1 - 256 + i * 64);
                for(k = 0; k < 4; k ++){
                    smooth(pc + idxCC[1][k], pc + idxCC[2][k], pc + idxCC[3][k], pt + idxCC[0][k], pt + idxCC[1][k], pt + idxCC[2][k]);
                }
            }

            // two horizontally adjacent blocks have same texture and similiar DCs
            if(texture[j][i] + texture[j][i + 1] < 3 && abs(dc[j][i] - dc[j][i + 1]) <= threshold){
                // smooth vertical boundary |
                pt = pc + 64;
                for(k = 0; k < 4; k ++){
                    smooth(pc + idxCC[k][1], pc + idxCC[k][2], pc + idxCC[k][3], pt + idxCC[k][0], pt + idxCC[k][1], pt + idxCC[k][2]);
                }
            }
        }
    }
}

