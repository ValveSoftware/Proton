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

#include "strTransform.h"
#include "encode.h"

/** rotation by pi/8 **/
#define ROTATE1(a, b) (b) -= (((a) + 1) >> 1), (a) += (((b) + 1) >> 1)  // this works well too
#define ROTATE2(a, b) (b) -= (((a)*3 + 4) >> 3), (a) += (((b)*3 + 4) >> 3)  // this works well too

/** local functions **/
static Void fwdOddOdd(PixelI *, PixelI *, PixelI *, PixelI *);
static Void fwdOddOddPre(PixelI *, PixelI *, PixelI *, PixelI *);
static Void fwdOdd(PixelI *, PixelI *, PixelI *, PixelI *);
static Void strDCT2x2alt(PixelI * a, PixelI * b, PixelI * c, PixelI * d);
static Void strHSTenc1(PixelI *, PixelI *);
static Void strHSTenc(PixelI *, PixelI *, PixelI *, PixelI *);
static Void strHSTenc1_edge (PixelI *pa, PixelI *pd);

//static Void scaleDownUp0(PixelI *, PixelI *);
//static Void scaleDownUp1(PixelI *, PixelI *);
//static Void scaleDownUp2(PixelI *, PixelI *);
//#define FOURBUTTERFLY_ENC_ALT(p, i00, i01, i02, i03, i10, i11, i12, i13,	\
//    i20, i21, i22, i23, i30, i31, i32, i33)		\
//    strHSTenc(&p[i00], &p[i01], &p[i02], &p[i03]);			\
//    strHSTenc(&p[i10], &p[i11], &p[i12], &p[i13]);			\
//    strHSTenc(&p[i20], &p[i21], &p[i22], &p[i23]);			\
//    strHSTenc(&p[i30], &p[i31], &p[i32], &p[i33]);          \
//    strHSTenc1(&p[i00], &p[i03]);			\
//    strHSTenc1(&p[i10], &p[i13]);			\
//    strHSTenc1(&p[i20], &p[i23]);			\
//    strHSTenc1(&p[i30], &p[i33])

/** DCT stuff **/
/** data order before DCT **/
/**  0  1  2  3 **/
/**  4  5  6  7 **/
/**  8  9 10 11 **/
/** 12 13 14 15 **/
/** data order after DCT **/
/** 0  8  4  6 **/
/** 2 10 14 12 **/
/** 1 11 15 13 **/
/** 9  3  7  5 **/
/** reordering should be combined with zigzag scan **/

Void strDCT4x4Stage1(PixelI * p)
{
    /** butterfly **/
    //FOURBUTTERFLY(p, 0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15);
    FOURBUTTERFLY_HARDCODED1(p);

    /** top left corner, butterfly => butterfly **/
    strDCT2x2up(&p[0], &p[1], &p[2], &p[3]);

    /** bottom right corner, pi/8 rotation => pi/8 rotation **/
    fwdOddOdd(&p[15], &p[14], &p[13], &p[12]);

    /** top right corner, butterfly => pi/8 rotation **/
    fwdOdd(&p[5], &p[4], &p[7], &p[6]);

    /** bottom left corner, pi/8 rotation => butterfly **/
    fwdOdd(&p[10], &p[8], &p[11], &p[9]);
}

Void strDCT4x4SecondStage(PixelI * p)
{
    /** butterfly **/
    FOURBUTTERFLY(p, 0, 192, 48, 240, 64, 128, 112, 176,16, 208, 32, 224,  80, 144, 96, 160);
    
    /** top left corner, butterfly => butterfly **/
    strDCT2x2up(&p[0], &p[64], &p[16], &p[80]);
    
    /** bottom right corner, pi/8 rotation => pi/8 rotation **/
    fwdOddOdd(&p[160], &p[224], &p[176], &p[240]);
    
    /** top right corner, butterfly => pi/8 rotation **/
    fwdOdd(&p[128], &p[192], &p[144], &p[208]);
    
    /** bottom left corner, pi/8 rotation => butterfly **/
    fwdOdd(&p[32], &p[48], &p[96], &p[112]);
}

Void strNormalizeEnc(PixelI* p, Bool bChroma)
{
    int i;
    if (!bChroma) {
        //for (i = 0; i < 256; i += 16) {
        //    p[i] = (p[i] + 1) >> 2;
        //}
    }
    else {
        for (i = 0; i < 256; i += 16) {
            p[i] >>= 1;
        }
    }
}

/** 2x2 DCT with pre-scaling - for use on encoder side **/
Void strDCT2x2dnEnc(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d, C, t;
    a = (*pa + 0) >> 1;
    b = (*pb + 0) >> 1;
    C = (*pc + 0) >> 1;
    d = (*pd + 0) >> 1;
    //PixelI t1, t2;
  
    a += d;
    b -= C;
    t = ((a - b) >> 1);
    c = t - d;
    d = t - C;
    a -= d;
    b += c;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/** pre filter stuff **/
/** 2-point pre for boundaries **/
Void strPre2(PixelI * pa, PixelI * pb)
{
    PixelI a, b;
    a = *pa;
    b = *pb;

    /** rotate **/
    b -= ((a + 2) >> 2);
    a -= ((b + 1) >> 1);

    a -= (b >> 5);
    a -= (b >> 9);
    a -= (b >> 13);

    b -= ((a + 2) >> 2);

    *pa = a;
    *pb = b;
}

Void strPre2x2(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    a += d;
    b += c;
    d -= (a + 1) >> 1;
    c -= (b + 1) >> 1;

    /** rotate **/
    b -= ((a + 2) >> 2);
    a -= ((b + 1) >> 1);
    a -= (b >> 5);
    a -= (b >> 9);
    a -= (b >> 13);
    b -= ((a + 2) >> 2);

    /** butterflies **/
    d += (a + 1) >> 1;
    c += (b + 1) >> 1;
    a -= d;
    b -= c;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/** 4-point pre for boundaries **/
Void strPre4(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    a += d, b += c;
    d -= ((a + 1) >> 1), c -= ((b + 1) >> 1);
    
    ROTATE1(c, d);
    
    strHSTenc1_edge(&a, &d); strHSTenc1_edge(&b, &c);
    
    d += ((a + 1) >> 1), c += ((b + 1) >> 1);
    a -= d, b -= c;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/*****************************************************************************************
  Input data offsets:
  (15)(14)|(10+64)(11+64) p0 (15)(14)|(74)(75)
  (13)(12)|( 8+64)( 9+64)    (13)(12)|(72)(73)
  --------+--------------    --------+--------
  ( 5)( 4)|( 0+64) (1+64) p1 ( 5)( 4)|(64)(65)
  ( 7)( 6)|( 2+64) (3+64)    ( 7)( 6)|(66)(67)
*****************************************************************************************/
Void strPre4x4Stage1Split(PixelI *p0, PixelI *p1, Int iOffset)
{
    PixelI *p2 = p0 + 72 - iOffset;
    PixelI *p3 = p1 + 64 - iOffset;
    p0 += 12;
    p1 += 4;

    /** butterfly & scaling **/
    strHSTenc(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strHSTenc(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strHSTenc(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strHSTenc(p0 + 3, p2 + 3, p1 + 3, p3 + 3);
    strHSTenc1(p0 + 0, p3 + 0);
    strHSTenc1(p0 + 1, p3 + 1);
    strHSTenc1(p0 + 2, p3 + 2);
    strHSTenc1(p0 + 3, p3 + 3);

    /** anti diagonal corners: rotation by pi/8 **/
    ROTATE1(p1[2], p1[3]);
    ROTATE1(p1[0], p1[1]);
    ROTATE1(p2[1], p2[3]);
    ROTATE1(p2[0], p2[2]);

    /** bottom right corner: pi/8 rotation => pi/8 rotation **/
    fwdOddOddPre(p3 + 0, p3 + 1, p3 + 2, p3 + 3);

    /** butterfly **/
    strDCT2x2dn(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strDCT2x2dn(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strDCT2x2dn(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strDCT2x2dn(p0 + 3, p2 + 3, p1 + 3, p3 + 3);
}

Void strPre4x4Stage1(PixelI* p, Int iOffset)
{
    strPre4x4Stage1Split(p, p + 16, iOffset);
}

/*****************************************************************************************
  Input data offsets:
  (15)(14)|(10+32)(11+32) p0 (15)(14)|(42)(43)
  (13)(12)|( 8+32)( 9+32)    (13)(12)|(40)(41)
  --------+--------------    --------+--------
  ( 5)( 4)|( 0+32)( 1+32) p1 ( 5)( 4)|(32)(33)
  ( 7)( 6)|( 2+32)( 3+32)    ( 7)( 6)|(34)(35)
*****************************************************************************************/
Void strPre4x4Stage2Split(PixelI* p0, PixelI* p1)
{
    /** butterfly **/
    strHSTenc(p0 - 96, p0 +  96, p1 - 112, p1 + 80);
    strHSTenc(p0 - 32, p0 +  32, p1 -  48, p1 + 16);
    strHSTenc(p0 - 80, p0 + 112, p1 - 128, p1 + 64);
    strHSTenc(p0 - 16, p0 +  48, p1 -  64, p1 +  0);
    strHSTenc1(p0 - 96, p1 + 80);
    strHSTenc1(p0 - 32, p1 + 16);
    strHSTenc1(p0 - 80, p1 + 64);
    strHSTenc1(p0 - 16, p1 +  0);

    /** anti diagonal corners: rotation **/
    ROTATE1(p1[-48], p1[-112]);
    ROTATE1(p1[-64], p1[-128]);
    ROTATE1(p0[112], p0[  96]);
    ROTATE1(p0[ 48], p0[  32]);

    /** bottom right corner: pi/8 rotation => pi/8 rotation **/
    fwdOddOddPre(p1 + 0, p1 + 64, p1 + 16, p1 + 80);

    /** butterfly **/
    strDCT2x2dn(p0 - 96, p1 - 112, p0 +  96, p1 + 80);
    strDCT2x2dn(p0 - 32, p1 -  48, p0 +  32, p1 + 16);
    strDCT2x2dn(p0 - 80, p1 - 128, p0 + 112, p1 + 64);
    strDCT2x2dn(p0 - 16, p1 -  64, p0 +  48, p1 +  0);
}


/** 
    Hadamard+Scale transform
    for some strange reason, breaking up the function into two blocks, strHSTenc1 and strHSTenc
    seems to work faster
**/
static Void strHSTenc(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    /** different realization : does rescaling as well! **/
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    d = *pc;
    c = *pd;

    a += c;
    b -= d;
    c = ((a - b) >> 1) - c;
    d += (b >> 1);
    b += c;

    a -= (d * 3 + 4) >> 3;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

static Void strHSTenc1(PixelI *pa, PixelI *pd)
{
    /** different realization : does rescaling as well! **/
    PixelI a, d;
    a = *pa;
    d = *pd;

    d -= (a >> 7);
    d += (a >> 10);

    //a -= (d * 3 + 4) >> 3;
    d -= (a * 3 + 0) >> 4;
    a -= (d * 3 + 0) >> 3;
    d = (a >> 1) - d;
    a -= d;

    *pa = a;
    *pd = d;
}

static Void strHSTenc1_edge (PixelI *pa, PixelI *pd)
{
    /** different realizion as compared to scaling operator for 2D case **/
    PixelI a, d;
    a = *pa;
    d = -(*pd); // Negative sign needed here for 1D scaling case to ensure correct scaling.

    a -= d;
    d += (a >> 1);
    a -= (d * 3 + 4) >> 3;
    // End new operations

    //Scaling modification of adding 7/1024 in two steps (without multiplication by 7).
    d -= (a >> 7);
    d += (a >> 10);

    d -= (a * 3 + 0) >> 4;
    a -= (d * 3 + 0) >> 3;
    d = (a >> 1) - d;
    a -= d;

    *pa = a;
    *pd = d;
}

/** Kron(Rotate(pi/8), Rotate(pi/8)) **/\
static Void fwdOddOdd(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d, t1, t2;

    a = *pa;
    b = -*pb;
    c = -*pc;
    d = *pd;

    /** butterflies **/
    d += a;
    c -= b;
    a -= (t1 = d >> 1);
    b += (t2 = c >> 1);

    /** rotate pi/4 **/
    a += (b * 3 + 4) >> 3;
    b -= (a * 3 + 3) >> 2;
    a += (b * 3 + 3) >> 3;

    /** butterflies **/
    b -= t2;
    a += t1;
    c += b;
    d -= a;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}
/** Kron(Rotate(pi/8), Rotate(pi/8)) **/
static Void fwdOddOddPre(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d, t1, t2;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    d += a;
    c -= b;
    a -= (t1 = d >> 1);
    b += (t2 = c >> 1);

    /** rotate pi/4 **/
    a += (b * 3 + 4) >> 3;
    b -= (a * 3 + 2) >> 2;
    a += (b * 3 + 6) >> 3;

    /** butterflies **/
    b -= t2;
    a += t1;
    c += b;
    d -= a;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/** Kron(Rotate(pi/8), [1 1; 1 -1]/sqrt(2)) **/
/** [a b c d] => [D C A B] **/
Void fwdOdd(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    b -= c;
    a += d;
    c += (b + 1) >> 1;
    d = ((a + 1) >> 1) - d;

    /** rotate pi/8 **/
    ROTATE2(a, b);
    ROTATE2(c, d);

    /** butterflies **/
    d += (b) >> 1;
    c -= (a + 1) >> 1;
    b -= d;
    a += c;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/*************************************************************************
  Top-level function to tranform possible part of a macroblock
*************************************************************************/
Void transformMacroblock(CWMImageStrCodec * pSC)
{
    OVERLAP olOverlap = pSC->WMISCP.olOverlap;
    COLORFORMAT cfColorFormat = pSC->m_param.cfColorFormat;
    Bool left = (pSC->cColumn == 0), right = (pSC->cColumn == pSC->cmbWidth);
    Bool top = (pSC->cRow == 0), bottom = (pSC->cRow == pSC->cmbHeight);
    Bool leftORright = (left || right), topORbottom = (top || bottom);
    Bool topORleft = (left || top);// rightORbottom = (right || bottom);
    Bool leftAdjacentColumn = (pSC->cColumn == 1), rightAdjacentColumn = (pSC->cColumn == pSC->cmbWidth - 1);
    // Bool topAdjacentRow =  (pSC->cRow == 1), bottomAdjacentRow = (pSC->cRow == pSC->cmbHeight - 1);
    PixelI * p = NULL;// * pt = NULL;
    Int i, j;
    Int iNumChromaFullPlanes = (Int)((YUV_420 == cfColorFormat || YUV_422 == cfColorFormat) ?
        1 : pSC->m_param.cNumChannels);

#define mbX               pSC->mbX
#define mbY               pSC->mbY
#define tileX             pSC->tileX
#define tileY             pSC->tileY
#define bVertTileBoundary pSC->bVertTileBoundary
#define bHoriTileBoundary pSC->bHoriTileBoundary
#define bOneMBLeftVertTB  pSC->bOneMBLeftVertTB
#define bOneMBRightVertTB pSC->bOneMBRightVertTB
#define iPredBefore       pSC->iPredBefore
#define iPredAfter        pSC->iPredAfter

    if (pSC->WMISCP.bUseHardTileBoundaries) {
        //Add tile location information
        if (pSC->cColumn == 0) {
            bVertTileBoundary = FALSE;
            tileY = 0;
        }
        bOneMBLeftVertTB = bOneMBRightVertTB = FALSE;
        if(tileY > 0 && tileY <= pSC->WMISCP.cNumOfSliceMinus1H && (pSC->cColumn - 1) == pSC->WMISCP.uiTileY[tileY]) 
            bOneMBRightVertTB = TRUE;
        if(tileY < pSC->WMISCP.cNumOfSliceMinus1H && pSC->cColumn == pSC->WMISCP.uiTileY[tileY + 1]) {
            bVertTileBoundary = TRUE;
            tileY++; 
        }
        else 
            bVertTileBoundary = FALSE;
        if(tileY < pSC->WMISCP.cNumOfSliceMinus1H && (pSC->cColumn + 1) == pSC->WMISCP.uiTileY[tileY + 1]) 
            bOneMBLeftVertTB = TRUE;

        if (pSC->cRow == 0) {
            bHoriTileBoundary = FALSE;
            tileX = 0;
        }
        else if(mbY != pSC->cRow && tileX < pSC->WMISCP.cNumOfSliceMinus1V && pSC->cRow == pSC->WMISCP.uiTileX[tileX + 1]) {
            bHoriTileBoundary = TRUE;
            tileX++; 
        }
        else if(mbY != pSC->cRow)
            bHoriTileBoundary = FALSE;
    }
    else {
        bVertTileBoundary = FALSE;
        bHoriTileBoundary = FALSE;
        bOneMBLeftVertTB = FALSE;
        bOneMBRightVertTB = FALSE;
    }
    mbX = pSC->cColumn, mbY = pSC->cRow;

    //================================================================
    // 400_Y, 444_YUV
    for(i = 0; i < iNumChromaFullPlanes; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[i];//(0 == i ? pSC->pY0 : (1 == i ? pSC->pU0 : pSC->pV0));
        PixelI* const p1 = pSC->p1MBbuffer[i];//(0 == i ? pSC->pY1 : (1 == i ? pSC->pU1 : pSC->pV1));

        //================================
        // first level overlap
        if(OL_NONE != olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p1 + 0, p1 + 1, p1 + 2, p1 + 3);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPre4(p1 - 59, p1 - 60, p1 - 57, p1 - 58);
            if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p0 + 48 + 10, p0 + 48 + 11, p0 + 48 + 8, p0 + 48 + 9);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPre4(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
            if(!right && !bottom)
            {
                if (top || bHoriTileBoundary)
                {

                    for (j = ((left || bVertTileBoundary) ? 0 : -64); j < 192; j += 64)
                    {
                        p = p1 + j;
                        strPre4(p + 5, p + 4, p + 64, p + 65);
                        strPre4(p + 7, p + 6, p + 66, p + 67);
                        p = NULL;
                    }
                }
                else
                {
                    for (j = ((left || bVertTileBoundary) ? 0 : -64); j < 192; j += 64)
                    {
                        strPre4x4Stage1Split(p0 + 48 + j, p1 + j, 0);
                    }
                }

                if (left || bVertTileBoundary)
                {
                    if (!top && !bHoriTileBoundary)
                    {
                        strPre4(p0 + 58, p0 + 56, p1 + 0, p1 + 2);
                        strPre4(p0 + 59, p0 + 57, p1 + 1, p1 + 3);
                    }

                    for (j = -64; j < -16; j += 16)
                    {
                        p = p1 + j;
                        strPre4(p + 74, p + 72, p + 80, p + 82);
                        strPre4(p + 75, p + 73, p + 81, p + 83);
                        p = NULL;
                    }
                }
                else
                {
                    for (j = -64; j < -16; j += 16)
                    {
                        strPre4x4Stage1(p1 + j, 0);
                    }
                }

                strPre4x4Stage1(p1 +   0, 0);
                strPre4x4Stage1(p1 +  16, 0);
                strPre4x4Stage1(p1 +  32, 0);
                strPre4x4Stage1(p1 +  64, 0);
                strPre4x4Stage1(p1 +  80, 0);
                strPre4x4Stage1(p1 +  96, 0);
                strPre4x4Stage1(p1 + 128, 0);
                strPre4x4Stage1(p1 + 144, 0);
                strPre4x4Stage1(p1 + 160, 0);
            }
            
            if (bottom || bHoriTileBoundary)
            {
                for (j = ((left || bVertTileBoundary) ? 48 : -16); j < (right ? -16 : 240); j += 64)
                {
                    p = p0 + j;
                    strPre4(p + 15, p + 14, p + 74, p + 75);
                    strPre4(p + 13, p + 12, p + 72, p + 73);
                    p = NULL;
                }
            }

            if ((right || bVertTileBoundary) && !bottom)
            {
                if (!top && !bHoriTileBoundary)
                {
                    strPre4(p0 - 1, p0 - 3, p1 - 59, p1 - 57);
                    strPre4(p0 - 2, p0 - 4, p1 - 60, p1 - 58);
                }
                for (j = -64; j < -16; j += 16)
                {
                    p = p1 + j;
                    strPre4(p + 15, p + 13, p + 21, p + 23);
                    strPre4(p + 14, p + 12, p + 20, p + 22);
                    p = NULL;
                }
            }
        }

        //================================
        // first level transform
        if (!top)
        {
            for (j = (left ? 48 : -16); j < (right ? 48 : 240); j += 64)
            {
                strDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -64); j < (right ? 0 : 192); j += 64)
            {
                strDCT4x4Stage1(p1 + j + 0);
                strDCT4x4Stage1(p1 + j + 16);
                strDCT4x4Stage1(p1 + j + 32);
            }
        }
        
        //================================
        // second level overlap
        if (OL_TWO == olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p1 + 0, p1 + 64, p1 + 0 + 16, p1 + 64 + 16);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPre4(p1 - 128, p1 - 64, p1 - 128 + 16, p1 - 64 + 16); 
            if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p0 + 32, p0 + 96, p0 + 32 + 16, p0 + 96 + 16);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPre4(p0 - 96, p0 - 32, p0 - 96 + 16, p0 - 32 + 16);
            if ((leftORright || bVertTileBoundary) && (!topORbottom && !bHoriTileBoundary))
            {
                if (left || bVertTileBoundary) {
                    j = 0;
                    strPre4(p0 + j + 32, p0 + j +  48, p1 + j +  0, p1 + j + 16);
                    strPre4(p0 + j + 96, p0 + j + 112, p1 + j + 64, p1 + j + 80);
                }
                if (right || bVertTileBoundary) {
                    j = -128;
                    strPre4(p0 + j + 32, p0 + j +  48, p1 + j +  0, p1 + j + 16);
                    strPre4(p0 + j + 96, p0 + j + 112, p1 + j + 64, p1 + j + 80);
                }
            }

            if (!leftORright && !bVertTileBoundary)
            {
                if (topORbottom || bHoriTileBoundary)
                {
                    if (top || bHoriTileBoundary) {
                        p = p1;
                        strPre4(p - 128, p - 64, p +  0, p + 64);
                        strPre4(p - 112, p - 48, p + 16, p + 80);
                        p = NULL;
                    }
                    if (bottom || bHoriTileBoundary) {
                        p = p0 + 32;
                        strPre4(p - 128, p - 64, p +  0, p + 64);
                        strPre4(p - 112, p - 48, p + 16, p + 80);
                        p = NULL;
                    }
                }
                else
                {
                    strPre4x4Stage2Split(p0, p1);
                }
            }
        }

        //================================
        // second level transform
        if (!topORleft){
            if (pSC->m_param.bScaledArith) {
                strNormalizeEnc(p0 - 256, (i != 0));
            }
            strDCT4x4SecondStage(p0 - 256);
        }
    }

    //================================================================
    // 420_UV
    for(i = 0; i < (YUV_420 == cfColorFormat? 2 : 0); ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        //================================
        // first level overlap (420_UV)
        if (OL_NONE != olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p1 + 0, p1 + 1, p1 + 2, p1 + 3);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary)) 
                strPre4(p1 - 27, p1 - 28, p1 - 25, p1 - 26);
            if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p0 + 16 + 10, p0 + 16 + 11, p0 + 16 + 8, p0 + 16 + 9);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))               
                strPre4(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
            if(!right && !bottom)
            {
                if (top || bHoriTileBoundary)
                {

                    for (j = ((left || bVertTileBoundary) ? 0 : -32); j < 32; j += 32)
                    {
                        p = p1 + j;
                        strPre4(p + 5, p + 4, p + 32, p + 33);
                        strPre4(p + 7, p + 6, p + 34, p + 35);
                        p = NULL;
                    }
                }
                else
                {
                    for (j = ((left || bVertTileBoundary) ? 0: -32); j < 32; j += 32)
                    {
                        strPre4x4Stage1Split(p0 + 16 + j, p1 + j, 32);
                    }
                }

                if (left || bVertTileBoundary)
                {
                    if (!top && !bHoriTileBoundary)
                    {
                        strPre4(p0 + 26, p0 + 24, p1 + 0, p1 + 2);
                        strPre4(p0 + 27, p0 + 25, p1 + 1, p1 + 3);
                    }

                    strPre4(p1 + 10, p1 + 8, p1 + 16, p1 + 18);
                    strPre4(p1 + 11, p1 + 9, p1 + 17, p1 + 19);
                }
                else if (!bVertTileBoundary)
                {
                    strPre4x4Stage1(p1 - 32, 32);
                }

                strPre4x4Stage1(p1, 32);
            }

            if (bottom || bHoriTileBoundary)
            {
                for (j = ((left || bVertTileBoundary) ? 16: -16); j < (right ? -16: 32); j += 32)
                {
                    p = p0 + j;
                    strPre4(p + 15, p + 14, p + 42, p + 43);
                    strPre4(p + 13, p + 12, p + 40, p + 41);
                    p = NULL;
                }
            }

            if ((right || bVertTileBoundary) && !bottom)
            {
                if (!top && !bHoriTileBoundary)
                {
                    strPre4(p0 - 1, p0 - 3, p1 - 27, p1 - 25);
                    strPre4(p0 - 2, p0 - 4, p1 - 28, p1 - 26);
                }

                strPre4(p1 - 17, p1 - 19, p1 - 11, p1 -  9);
                strPre4(p1 - 18, p1 - 20, p1 - 12, p1 - 10);
            }
        }    

        //================================
        // first level transform (420_UV)
        if (!top)
        {
            for (j = (left ? 16 : -16); j < (right ? 16 : 48); j += 32)
            {
                strDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -32); j < (right ? 0 : 32); j += 32)
            {
                strDCT4x4Stage1(p1 + j);
            }
        }
        
        //================================
        // second level overlap (420_UV)
        if (OL_TWO == olOverlap)
        {
            if ((leftAdjacentColumn || bOneMBRightVertTB) && (top || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_DIFF(p1 - 64 + 0, *(p1 - 64 + 32));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (top || bHoriTileBoundary))
                iPredBefore[i][0] = *(p1 + 0);
            if ((right || bVertTileBoundary) && (top || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_DIFF(p1 - 64 + 32, iPredBefore[i][0]);

            if ((leftAdjacentColumn || bOneMBRightVertTB) && (bottom || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_DIFF(p0 - 64 + 16, *(p0 - 64 + 48));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (bottom || bHoriTileBoundary)) 
                iPredBefore[i][1] = *(p0 + 16);
            if ((right || bVertTileBoundary) && (bottom || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_DIFF(p0 - 64 + 48, iPredBefore[i][1]);

            if ((leftORright || bVertTileBoundary) && !topORbottom && !bHoriTileBoundary)
            {
                if (left || bVertTileBoundary)
                    strPre2(p0 + 0 + 16, p1 + 0);
                if (right || bVertTileBoundary)
                    strPre2(p0 + -32 + 16, p1 + -32);
            }

            if (!leftORright)
            {
                if ((topORbottom || bHoriTileBoundary) && !bVertTileBoundary)
                {
                    if (top || bHoriTileBoundary) 
                        strPre2(p1 - 32, p1);
                    if (bottom || bHoriTileBoundary) 
                        strPre2(p0 + 16 - 32, p0 + 16);
                }
                else if (!topORbottom && !bHoriTileBoundary && !bVertTileBoundary)
                    strPre2x2(p0 - 16, p0 + 16, p1 - 32, p1);
            }
            if ((leftAdjacentColumn || bOneMBRightVertTB) && (top || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_ADD(p1 - 64 + 0, *(p1 - 64 + 32));
            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (top || bHoriTileBoundary))
                iPredAfter[i][0] = *(p1 + 0);
            if ((right || bVertTileBoundary) && (top || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_ADD(p1 - 64 + 32, iPredAfter[i][0]);
            if ((leftAdjacentColumn || bOneMBRightVertTB) && (bottom || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_ADD(p0 - 64 + 16, *(p0 - 64 + 48));
            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (bottom || bHoriTileBoundary)) 
                iPredAfter[i][1] = *(p0 + 16);
            if ((right || bVertTileBoundary) && (bottom || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_ADD(p0 - 64 + 48, iPredAfter[i][1]);
        }

        //================================
        // second level transform (420_UV)
        if (!topORleft)
        {
            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p0 - 64, p0 - 32, p0 - 48, p0 - 16);
            }
            else {
                strDCT2x2dnEnc(p0 - 64, p0 - 32, p0 - 48, p0 - 16);
            }
        }
    }

    //================================================================
    //  422_UV
    for(i = 0; i < (YUV_422 == cfColorFormat? 2 : 0); ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        //================================
        // first level overlap (422_UV)
        if (OL_NONE != olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p1 + 0, p1 + 1, p1 + 2, p1 + 3);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))    
                strPre4(p1 - 59, p1 - 60, p1 - 57, p1 - 58);
            if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPre4(p0 + 48 + 10, p0 + 48 + 11, p0 + 48 + 8, p0 + 48 + 9);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPre4(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
            if(!right && !bottom)
            {
                if (top || bHoriTileBoundary)
                {

                    for (j = ((left || bVertTileBoundary) ? 0 : -64); j < 64; j += 64)
                    {
                        p = p1 + j;
                        strPre4(p + 5, p + 4, p + 64, p + 65);
                        strPre4(p + 7, p + 6, p + 66, p + 67);
                        p = NULL;
                    }
                }
                else
                {
                    for (j = ((left || bVertTileBoundary) ? 0: -64); j < 64; j += 64)
                    {
                        strPre4x4Stage1Split(p0 + 48 + j, p1 + j, 0);
                    }
                }

                if (left || bVertTileBoundary)
                {
                    if (!top && !bHoriTileBoundary)
                    {
                        strPre4(p0 + 58, p0 + 56, p1 + 0, p1 + 2);
                        strPre4(p0 + 59, p0 + 57, p1 + 1, p1 + 3);
                    }

                    for (j = 0; j < 48; j += 16)
                    {
                        p = p1 + j;
                        strPre4(p + 10, p + 8, p + 16, p + 18);
                        strPre4(p + 11, p + 9, p + 17, p + 19);
                        p = NULL;
                    }
                }
                else if (!bVertTileBoundary)
                {
                    for (j = -64; j < -16; j += 16)
                    {
                        strPre4x4Stage1(p1 + j, 0);
                    }
                }

                strPre4x4Stage1(p1 +  0, 0);
                strPre4x4Stage1(p1 + 16, 0);
                strPre4x4Stage1(p1 + 32, 0);
            }

            if (bottom || bHoriTileBoundary)
            {
                for (j = ((left || bVertTileBoundary) ? 48: -16); j < (right ? -16: 112); j += 64)
                {
                    p = p0 + j;
                    strPre4(p + 15, p + 14, p + 74, p + 75);
                    strPre4(p + 13, p + 12, p + 72, p + 73);
                    p = NULL;
                }
            }

            if ((right || bVertTileBoundary) && !bottom)
            {
                if (!top && !bHoriTileBoundary)
                {
                    strPre4(p0 - 1, p0 - 3, p1 - 59, p1 - 57);
                    strPre4(p0 - 2, p0 - 4, p1 - 60, p1 - 58);
                }

                for (j = -64; j < -16; j += 16)
                {
                    p = p1 + j;
                    strPre4(p + 15, p + 13, p + 21, p + 23);
                    strPre4(p + 14, p + 12, p + 20, p + 22);
                    p = NULL;
                }
            }
        }    

        //================================
        // first level transform (422_UV)
        if (!top)
        {
            for (j = (left ? 48 : -16); j < (right ? 48 : 112); j += 64)
            {
                strDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -64); j < (right ? 0 : 64); j += 64)
            {
                strDCT4x4Stage1(p1 + j + 0);
                strDCT4x4Stage1(p1 + j + 16);
                strDCT4x4Stage1(p1 + j + 32);
            }
        }
        
        //================================
        // second level overlap (422_UV)
        if (OL_TWO == olOverlap)
        {
            if ((leftAdjacentColumn || bOneMBRightVertTB) && (top || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_DIFF(p1 - 128 + 0, *(p1 - 128 + 64));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (top || bHoriTileBoundary))
                iPredBefore[i][0] = *(p1 + 0);
            if ((right || bVertTileBoundary) && (top || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_DIFF(p1 - 128 + 64, iPredBefore[i][0]);

            if ((leftAdjacentColumn || bOneMBRightVertTB) && (bottom || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_DIFF(p0 - 128 + 48, *(p0 - 128 + 112));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (bottom || bHoriTileBoundary)) 
                iPredBefore[i][1] = *(p0 + 48);
            if ((right || bVertTileBoundary) && (bottom || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_DIFF(p0 - 128 + 112, iPredBefore[i][1]);

            if (!bottom)
            {
                if (leftORright || bVertTileBoundary)
                {
                    if (!top && !bHoriTileBoundary)
                    {
                        if (left || bVertTileBoundary) 
                            strPre2(p0 + 48 + 0, p1 + 0);

                        if (right || bVertTileBoundary) 
                            strPre2(p0 + 48 + -64, p1 + -64);
                    }

                    if (left || bVertTileBoundary)
                        strPre2(p1 + 16, p1 + 16 + 16);

                    if (right || bVertTileBoundary)
                        strPre2(p1 + -48, p1 + -48 + 16);
                }

                if (!leftORright && !bVertTileBoundary)
                {
                    if (top || bHoriTileBoundary)
                        strPre2(p1 - 64, p1);
                    else
                        strPre2x2(p0 - 16, p0 + 48, p1 - 64, p1);

                    strPre2x2(p1 - 48, p1 + 16, p1 - 32, p1 + 32);
                }
            }

            if ((bottom || bHoriTileBoundary) && (!leftORright && !bVertTileBoundary))
                strPre2(p0 - 16, p0 + 48);

            if ((leftAdjacentColumn || bOneMBRightVertTB) && (top || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_ADD(p1 - 128 + 0, *(p1 - 128 + 64));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (top || bHoriTileBoundary))
                iPredAfter[i][0] = *(p1 + 0);
            if ((right || bVertTileBoundary) && (top || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_ADD(p1 - 128 + 64, iPredAfter[i][0]);

            if ((leftAdjacentColumn || bOneMBRightVertTB) && (bottom || bHoriTileBoundary)) 
                COMPUTE_CORNER_PRED_ADD(p0 - 128 + 48, *(p0 - 128 + 112));

            if ((rightAdjacentColumn || bOneMBLeftVertTB) && (bottom || bHoriTileBoundary)) 
                iPredAfter[i][1] = *(p0 + 48);
            if ((right || bVertTileBoundary) && (bottom || bHoriTileBoundary))
                COMPUTE_CORNER_PRED_ADD(p0 - 128 + 112, iPredAfter[i][1]);
        }

        //================================
        // second level transform (422_UV)
        if (!topORleft)
        {
            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p0 - 128, p0 - 64, p0 - 112, p0 - 48);
                strDCT2x2dn(p0 -  96, p0 - 32, p0 -  80, p0 - 16);
            }
            else {
                strDCT2x2dnEnc(p0 - 128, p0 - 64, p0 - 112, p0 - 48);
                strDCT2x2dnEnc(p0 -  96, p0 - 32, p0 -  80, p0 - 16);
            }

            // 1D lossless HT
            p0[- 96] -= p0[-128];
            p0[-128] += ((p0[-96] + 1) >> 1);
        }
    }
    assert(NULL == p);
}

