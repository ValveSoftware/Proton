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
#include "strcodec.h"
#include "decode.h"

/** rotation by -pi/8 **/
#define IROTATE1(a, b) (a) -= (((b) + 1) >> 1), (b) += (((a) + 1) >> 1)  // this works well too
#define IROTATE2(a, b) (a) -= (((b)*3 + 4) >> 3), (b) += (((a)*3 + 4) >> 3)  // this works well too

/** local functions **/
static Void invOddOdd(PixelI *, PixelI *, PixelI *, PixelI *);
static Void invOddOddPost(PixelI *, PixelI *, PixelI *, PixelI *);
static Void invOdd(PixelI *, PixelI *, PixelI *, PixelI *);
static Void strHSTdec(PixelI *, PixelI *, PixelI *, PixelI *);
static Void strHSTdec1(PixelI *, PixelI *);
static Void strHSTdec1_alternate(PixelI *, PixelI *);
static Void strHSTdec1_edge(PixelI *pa, PixelI *pd);

/** IDCT stuff **/
/** reordering should be combined with zigzag scan **/
/** data order before IDCT **/
/** 0  8  4  6 **/
/** 2 10 14 12 **/
/** 1 11 15 13 **/
/** 9  3  7  5 **/
/** data order after IDCT **/
/**  0  1  2  3 **/
/**  4  5  6  7 **/
/**  8  9 10 11 **/
/** 12 13 14 15 **/
Void strIDCT4x4Stage1(PixelI* p)
{
    /** top left corner, butterfly => butterfly **/
    strDCT2x2up(p + 0, p + 1, p + 2, p + 3);

    /** top right corner, -pi/8 rotation => butterfly **/
    invOdd(p + 5, p + 4, p + 7, p + 6);

    /** bottom left corner, butterfly => -pi/8 rotation **/
    invOdd(p + 10, p + 8, p + 11, p + 9);

    /** bottom right corner, -pi/8 rotation => -pi/8 rotation **/
    invOddOdd(p + 15, p + 14, p + 13, p + 12);
    
    /** butterfly **/
    //FOURBUTTERFLY(p, 0, 4, 8, 12, 1, 5, 9, 13, 2, 6, 10, 14, 3, 7, 11, 15);
    FOURBUTTERFLY_HARDCODED1(p);
}

Void strIDCT4x4Stage2(PixelI* p)
{
    /** bottom left corner, butterfly => -pi/8 rotation **/
    invOdd(p + 32, p + 48, p + 96, p + 112);
    
    /** top right corner, -pi/8 rotation => butterfly **/
    invOdd(p + 128, p + 192, p + 144, p + 208);
    
    /** bottom right corner, -pi/8 rotation => -pi/8 rotation **/
    invOddOdd(p + 160, p + 224, p + 176, p + 240);

    /** top left corner, butterfly => butterfly **/
    strDCT2x2up(p + 0, p + 64, p + 16, p + 80);
    
    /** butterfly **/
    FOURBUTTERFLY(p, 0, 192, 48, 240, 64, 128, 112, 176, 16, 208, 32, 224, 80, 144, 96, 160);
}

Void strNormalizeDec(PixelI* p, Bool bChroma)
{
    int i;
    if (!bChroma) {
        //for (i = 0; i < 256; i += 16) {
        //    p[i] <<= 2;
        //}
    }
    else {
        for (i = 0; i < 256; i += 16) {
            p[i] += p[i];
        }
    }
}

/** 2x2 DCT with post-scaling - for use on decoder side **/
Void strDCT2x2dnDec(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d, C, t;
    a = *pa;
    b = *pb;
    C = *pc;
    d = *pd;
  
    a += d;
    b -= C;
    t = ((a - b) >> 1);
    c = t - d;
    d = t - C;
    a -= d;
    b += c;

    *pa = a * 2;
    *pb = b * 2;
    *pc = c * 2;
    *pd = d * 2;
}


/** post filter stuff **/
/** 2-point post for boundaries **/
Void strPost2(PixelI * a, PixelI * b)
{
    *b += ((*a + 4) >> 3);
    *a += ((*b + 2) >> 2);
    *b += ((*a + 4) >> 3);
}

Void strPost2_alternate(PixelI * pa, PixelI * pb)
{
    PixelI a, b;
    a = *pa;
    b = *pb;

    /** rotate **/
    b += ((a + 2) >> 2);
    a += ((b + 1) >> 1);
    a += (b >> 5);
    a += (b >> 9);
    a += (b >> 13);

    b += ((a + 2) >> 2);

    *pa = a;
    *pb = b;
}

Void strPost2x2(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
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
    b += ((a + 2) >> 2);
    a += ((b + 1) >> 1);
    b += ((a + 2) >> 2);

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

Void strPost2x2_alternate(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
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
    b += ((a + 2) >> 2);
    a += ((b + 1) >> 1);
    a += (b >> 5);
    a += (b >> 9);
    a += (b >> 13);
    b += ((a + 2) >> 2);

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

/** 4-point post for boundaries **/
Void strPost4(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    a += d, b += c;
    d -= ((a + 1) >> 1), c -= ((b + 1) >> 1);
    
    IROTATE1(c, d);

    d += ((a + 1) >> 1), c += ((b + 1) >> 1);
    a -= d - ((d * 3 + 16) >> 5), b -= c - ((c * 3 + 16) >> 5);
    d += ((a * 3 + 8) >> 4), c += ((b * 3 + 8) >> 4);
    a += ((d * 3 + 16) >> 5), b += ((c * 3 + 16) >> 5);

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

Void strPost4_alternate(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    a += d, b += c;
    d -= ((a + 1) >> 1), c -= ((b + 1) >> 1);
    
    strHSTdec1_edge(&a, &d); strHSTdec1_edge(&b, &c);
    IROTATE1(c, d);
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
Void DCCompensate (PixelI *a, PixelI *b, PixelI *c, PixelI *d, int iDC)
{
    iDC = iDC>>1;
    *a -= iDC;
    *d -= iDC;
    *b += iDC;
    *c += iDC;
}

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

int ClipDCL(int iDCL, int iAltDCL)
{
    int iClipDCL = 0;
    if (iDCL > 0) {
        if (iAltDCL > 0)
            iClipDCL = min(iDCL, iAltDCL);
        else
            iClipDCL = 0;
    }
    else if (iDCL < 0) {
        if (iAltDCL < 0)
            iClipDCL = max(iDCL, iAltDCL);
        else
            iClipDCL = 0;
    }
    return iClipDCL;
}

Void strPost4x4Stage1Split(PixelI *p0, PixelI *p1, Int iOffset, Int iHPQP, Bool bHPAbsent)
{
    int iDCLAlt1, iDCLAlt2, iDCLAlt3, iDCLAlt0;
    int iDCL1, iDCL2, iDCL3, iDCL0;
    int iTmp1, iTmp2, iTmp3, iTmp0;

    PixelI *p2 = p0 + 72 - iOffset;
    PixelI *p3 = p1 + 64 - iOffset;
    p0 += 12;
    p1 += 4;

    /** buttefly **/
    strDCT2x2dn(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strDCT2x2dn(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strDCT2x2dn(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strDCT2x2dn(p0 + 3, p2 + 3, p1 + 3, p3 + 3);

    /** bottom right corner: -pi/8 rotation => -pi/8 rotation **/
    invOddOddPost(p3 + 0, p3 + 1, p3 + 2, p3 + 3);
    
    /** anti diagonal corners: rotation by -pi/8 **/
    IROTATE1(p1[2], p1[3]);
    IROTATE1(p1[0], p1[1]);
    IROTATE1(p2[1], p2[3]);
    IROTATE1(p2[0], p2[2]);

    /** butterfly **/
    strHSTdec1(p0 + 0, p3 + 0);
    strHSTdec1(p0 + 1, p3 + 1);
    strHSTdec1(p0 + 2, p3 + 2);
    strHSTdec1(p0 + 3, p3 + 3);
    strHSTdec(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strHSTdec(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strHSTdec(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strHSTdec(p0 + 3, p2 + 3, p1 + 3, p3 + 3);

    iTmp0 = (*(p0 +0) + *(p1 +0) + *(p2 +0) + *(p3 +0))>>1;
    iTmp1 = (*(p0 +1) + *(p1 +1) + *(p2 +1) + *(p3 +1))>>1;
    iTmp2 = (*(p0 +2) + *(p1 +2) + *(p2 +2) + *(p3 +2))>>1;
    iTmp3 = (*(p0 +3) + *(p1 +3) + *(p2 +3) + *(p3 +3))>>1;
    iDCL0 = (iTmp0 * 595 + 65536)>>17; //Approximating 27/5947
    iDCL1 = (iTmp1 * 595 + 65536)>>17; 
    iDCL2 = (iTmp2 * 595 + 65536)>>17; 
    iDCL3 = (iTmp3 * 595 + 65536)>>17; 
    if ((abs(iDCL0) < iHPQP && iHPQP > 20) || bHPAbsent) {
        iDCLAlt0 = (*(p0 +0) - *(p1 +0) - *(p2 +0) + *(p3 +0))>>1;
        iDCL0 = ClipDCL (iDCL0, iDCLAlt0);
        DCCompensate (p0 + 0, p2 + 0, p1 + 0, p3 + 0, iDCL0);
    }
    if ((abs(iDCL1) < iHPQP && iHPQP > 20) || bHPAbsent) {
            iDCLAlt1 = (*(p0 +1) - *(p1 +1) - *(p2 +1) + *(p3 +1))>>1;
            iDCL1 = ClipDCL (iDCL1, iDCLAlt1);
        DCCompensate (p0 + 1, p2 + 1, p1 + 1, p3 + 1, iDCL1);
    }
    if ((abs(iDCL2) < iHPQP && iHPQP > 20) || bHPAbsent) {
            iDCLAlt2 = (*(p0 +2) - *(p1 +2) - *(p2 +2) + *(p3 +2))>>1;
            iDCL2 = ClipDCL (iDCL2, iDCLAlt2);
        DCCompensate (p0 + 2, p2 + 2, p1 + 2, p3 + 2, iDCL2);
    }
    if ((abs(iDCL3) < iHPQP && iHPQP > 20) || bHPAbsent) {
            iDCLAlt3 = (*(p0 +3) - *(p1 +3) - *(p2 +3) + *(p3 +3))>>1;
            iDCL3 = ClipDCL (iDCL3, iDCLAlt3);
        DCCompensate (p0 + 3, p2 + 3, p1 + 3, p3 + 3, iDCL3);
    }
}

Void strPost4x4Stage1(PixelI* p, Int iOffset, Int iHPQP, Bool bHPAbsent)
{
    strPost4x4Stage1Split(p, p + 16, iOffset, iHPQP, bHPAbsent);
}

Void strPost4x4Stage1Split_alternate(PixelI *p0, PixelI *p1, Int iOffset)
{
    PixelI *p2 = p0 + 72 - iOffset;
    PixelI *p3 = p1 + 64 - iOffset;
    p0 += 12;
    p1 += 4;

    /** buttefly **/
    strDCT2x2dn(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strDCT2x2dn(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strDCT2x2dn(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strDCT2x2dn(p0 + 3, p2 + 3, p1 + 3, p3 + 3);

    /** bottom right corner: -pi/8 rotation => -pi/8 rotation **/
    invOddOddPost(p3 + 0, p3 + 1, p3 + 2, p3 + 3);
    
    /** anti diagonal corners: rotation by -pi/8 **/
    IROTATE1(p1[2], p1[3]);
    IROTATE1(p1[0], p1[1]);
    IROTATE1(p2[1], p2[3]);
    IROTATE1(p2[0], p2[2]);

    /** butterfly **/
    strHSTdec1_alternate(p0 + 0, p3 + 0);
    strHSTdec1_alternate(p0 + 1, p3 + 1);
    strHSTdec1_alternate(p0 + 2, p3 + 2);
    strHSTdec1_alternate(p0 + 3, p3 + 3);
    strHSTdec(p0 + 0, p2 + 0, p1 + 0, p3 + 0);
    strHSTdec(p0 + 1, p2 + 1, p1 + 1, p3 + 1);
    strHSTdec(p0 + 2, p2 + 2, p1 + 2, p3 + 2);
    strHSTdec(p0 + 3, p2 + 3, p1 + 3, p3 + 3);
}

Void strPost4x4Stage1_alternate(PixelI* p, Int iOffset)
{
    strPost4x4Stage1Split_alternate(p, p + 16, iOffset);
}

/*****************************************************************************************
  Input data offsets:
  (15)(14)|(10+32)(11+32) p0 (15)(14)|(42)(43)
  (13)(12)|( 8+32)( 9+32)    (13)(12)|(40)(41)
  --------+--------------    --------+--------
  ( 5)( 4)|( 0+32) (1+32) p1 ( 5)( 4)|(32)(33)
  ( 7)( 6)|( 2+32) (3+32)    ( 7)( 6)|(34)(35)
*****************************************************************************************/

/*****************************************************************************************
  Input data offsets:
  ( -96)(-32)|(32)( 96) p0
  ( -80)(-16)|(48)(112)
  -----------+------------
  (-128)(-64)|( 0)( 64) p1
  (-112)(-48)|(16)( 80)
*****************************************************************************************/
Void strPost4x4Stage2Split(PixelI* p0, PixelI* p1)
{
    /** buttefly **/
    strDCT2x2dn(p0 - 96, p0 +  96, p1 - 112, p1 + 80);
    strDCT2x2dn(p0 - 32, p0 +  32, p1 -  48, p1 + 16);
    strDCT2x2dn(p0 - 80, p0 + 112, p1 - 128, p1 + 64);
    strDCT2x2dn(p0 - 16, p0 +  48, p1 -  64, p1 +  0);

    /** bottom right corner: -pi/8 rotation => -pi/8 rotation **/
    invOddOddPost(p1 + 0, p1 + 64, p1 + 16, p1 + 80);
    
    /** anti diagonal corners: rotation by -pi/8 **/
    IROTATE1(p0[ 48], p0[  32]);
    IROTATE1(p0[112], p0[  96]);
    IROTATE1(p1[-64], p1[-128]);
    IROTATE1(p1[-48], p1[-112]);
    
    /** butterfly **/
    strHSTdec1(p0 - 96, p1 + 80);
    strHSTdec1(p0 - 32, p1 + 16);
    strHSTdec1(p0 - 80, p1 + 64);
    strHSTdec1(p0 - 16, p1 +  0);

    strHSTdec(p0 - 96, p1 - 112, p0 +  96, p1 + 80);
    strHSTdec(p0 - 32, p1 -  48, p0 +  32, p1 + 16);
    strHSTdec(p0 - 80, p1 - 128, p0 + 112, p1 + 64);
    strHSTdec(p0 - 16, p1 -  64, p0 +  48, p1 +  0);
}

Void strPost4x4Stage2Split_alternate(PixelI* p0, PixelI* p1)
{
    /** buttefly **/
    strDCT2x2dn(p0 - 96, p0 +  96, p1 - 112, p1 + 80);
    strDCT2x2dn(p0 - 32, p0 +  32, p1 -  48, p1 + 16);
    strDCT2x2dn(p0 - 80, p0 + 112, p1 - 128, p1 + 64);
    strDCT2x2dn(p0 - 16, p0 +  48, p1 -  64, p1 +  0);

    /** bottom right corner: -pi/8 rotation => -pi/8 rotation **/
    invOddOddPost(p1 + 0, p1 + 64, p1 + 16, p1 + 80);
    
    /** anti diagonal corners: rotation by -pi/8 **/
    IROTATE1(p0[ 48], p0[  32]);
    IROTATE1(p0[112], p0[  96]);
    IROTATE1(p1[-64], p1[-128]);
    IROTATE1(p1[-48], p1[-112]);
    
    /** butterfly **/
    strHSTdec1_alternate(p0 - 96, p1 + 80);
    strHSTdec1_alternate(p0 - 32, p1 + 16);
    strHSTdec1_alternate(p0 - 80, p1 + 64);
    strHSTdec1_alternate(p0 - 16, p1 +  0);

    strHSTdec(p0 - 96, p1 - 112, p0 +  96, p1 + 80);
    strHSTdec(p0 - 32, p1 -  48, p0 +  32, p1 + 16);
    strHSTdec(p0 - 80, p1 - 128, p0 + 112, p1 + 64);
    strHSTdec(p0 - 16, p1 -  64, p0 +  48, p1 +  0);
}

/** 
    Hadamard+Scale transform
    for some strange reason, breaking up the function into two blocks, strHSTdec1 and strHSTdec
    seems to work faster
**/
static Void strHSTdec1(PixelI *pa, PixelI *pd)
{
    /** different realization : does rescaling as well! **/
    PixelI a, d;
    a = *pa;
    d = *pd;

    a += d;
    d = (a >> 1) - d;
    a += (d * 3 + 0) >> 3;
    d += (a * 3 + 0) >> 4;
    //a += (d * 3 + 4) >> 3;

    *pa = a;
    *pd = d;
}

static Void strHSTdec1_alternate(PixelI *pa, PixelI *pd)
{
    /** different realization : does rescaling as well! **/
    PixelI a, d;
    a = *pa;
    d = *pd;

    a += d;
    d = (a >> 1) - d;
    a += (d * 3 + 0) >> 3;
    d += (a * 3 + 0) >> 4;
    //a += (d * 3 + 4) >> 3;

    d += (a >> 7);
    d -= (a >> 10);

    *pa = a;
    *pd = d;
}

static Void strHSTdec1_edge (PixelI *pa, PixelI *pd)
{
    /** different realization as compared to scaling operator for 2D case **/
    PixelI a, d;
    a = *pa;
    d = *pd;

    a += d;
    d = (a >> 1) - d;
    a += (d * 3 + 0) >> 3;
    d += (a * 3 + 0) >> 4;

    //Scaling modification of adding 7/1024 in 2 steps (without multiplication by 7).
    d += (a >> 7);
    d -= (a >> 10);

    a += (d * 3 + 4) >> 3;
    d -= (a >> 1);
    a += d;
    // End new operations

    *pa = a;
    *pd = -d; // Negative sign needed here for 1D scaling case to ensure correct scaling.
}

static Void strHSTdec(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    /** different realization : does rescaling as well! **/
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    b -= c;
    a += (d * 3 + 4) >> 3;

    d -= (b >> 1);
    c = ((a - b) >> 1) - c;
    *pc = d;
    *pd = c;
    *pa = a - c, *pb = b + d;
}

/** Kron(Rotate(pi/8), Rotate(pi/8)) **/
static Void invOddOdd(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
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
    a -= (b * 3 + 3) >> 3;
    b += (a * 3 + 3) >> 2;
    a -= (b * 3 + 4) >> 3;

    /** butterflies **/
    b -= t2;
    a += t1;
    c += b;
    d -= a;

    /** sign flips **/
    *pa = a;
    *pb = -b;
    *pc = -c;
    *pd = d;
}

/** Kron(Rotate(pi/8), Rotate(pi/8)) **/
static Void invOddOddPost(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
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
    a -= (b * 3 + 6) >> 3;
    b += (a * 3 + 2) >> 2;
    a -= (b * 3 + 4) >> 3;

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


/** Kron(Rotate(-pi/8), [1 1; 1 -1]/sqrt(2)) **/
/** [D C A B] => [a b c d] **/
Void invOdd(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    b += d;
    a -= c;
    d -= (b) >> 1;
    c += (a + 1) >> 1;

    /** rotate pi/8 **/
    IROTATE2(a, b);
    IROTATE2(c, d);

    /** butterflies **/
    c -= (b + 1) >> 1;
    d = ((a + 1) >> 1) - d;
    b += c;
    a -= d;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

/*************************************************************************
  Top-level function to inverse tranform possible part of a macroblock
*************************************************************************/
Int  invTransformMacroblock(CWMImageStrCodec * pSC)
{
    const OVERLAP olOverlap = pSC->WMISCP.olOverlap;
    const COLORFORMAT cfColorFormat = pSC->m_param.cfColorFormat;
    // const BITDEPTH_BITS bdBitDepth = pSC->WMII.bdBitDepth;
    const Bool left = (pSC->cColumn == 0), right = (pSC->cColumn == pSC->cmbWidth);
    const Bool top = (pSC->cRow == 0), bottom = (pSC->cRow == pSC->cmbHeight);
    const Bool topORbottom = (top || bottom), leftORright = (left || right);
    const Bool topORleft = (top || left), bottomORright = (bottom || right);
    const size_t mbWidth = pSC->cmbWidth, mbX = pSC->cColumn;
    PixelI * p = NULL;// * pt = NULL;
    size_t i;
    const size_t iChannels = (cfColorFormat == YUV_420 || cfColorFormat == YUV_422) ? 1 : pSC->m_param.cNumChannels;
    const size_t tScale = pSC->m_Dparam->cThumbnailScale;
    Int j = 0;

    Int qp[MAX_CHANNELS], dcqp[MAX_CHANNELS], iStrength = (1 << pSC->WMII.cPostProcStrength);
    // ERR_CODE result = ICERR_OK;

    Bool bHPAbsent = (pSC->WMISCP.sbSubband == SB_NO_HIGHPASS || pSC->WMISCP.sbSubband == SB_DC_ONLY);

    if(pSC->WMII.cPostProcStrength > 0){
        // threshold for post processing
        for(i = 0; i < iChannels; i ++){
            qp[i] = pSC->pTile[pSC->cTileColumn].pQuantizerLP[i][pSC->MBInfo.iQIndexLP].iQP * iStrength * (olOverlap == OL_NONE ? 2 : 1);
            dcqp[i] = pSC->pTile[pSC->cTileColumn].pQuantizerDC[i][0].iQP * iStrength;
        }

        if(left) // a new MB row
            slideOneMBRow(pSC->pPostProcInfo, pSC->m_param.cNumChannels, mbWidth, top, bottom);  // previous current row becomes previous row
    }

    //================================================================
    // 400_Y, 444_YUV
    for (i = 0; i < iChannels && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[i];
        PixelI* const p1 = pSC->p1MBbuffer[i];

        Int iHPQP = 255;
        if (!bHPAbsent)
            iHPQP = pSC->pTile[pSC->cTileColumn].pQuantizerHP[i][pSC->MBInfo.iQIndexHP].iQP;

        //================================
        // second level inverse transform
        if (!bottomORright)
        {
            if(pSC->WMII.cPostProcStrength > 0)
                updatePostProcInfo(pSC->pPostProcInfo, p1, mbX, i); // update postproc info before IDCT

            strIDCT4x4Stage2(p1);
            if (pSC->m_param.bScaledArith) {
                strNormalizeDec(p1, (i != 0));
            }
        }

        //================================
        // second level inverse overlap
        if (OL_TWO == olOverlap)
        {
            if (leftORright && (!topORbottom))
            {
                j = left ? 0 : -128;
                strPost4(p0 + j + 32, p0 + j +  48, p1 + j +  0, p1 + j + 16);
                strPost4(p0 + j + 96, p0 + j + 112, p1 + j + 64, p1 + j + 80);
            }

            if (!leftORright)
            {
                if (topORbottom)
                {
                    p = top ? p1 : p0 + 32;
                    strPost4(p - 128, p - 64, p +  0, p + 64);
                    strPost4(p - 112, p - 48, p + 16, p + 80);
                    p = NULL;
                }
                else
                {
                    strPost4x4Stage2Split(p0, p1);
                }
            }
        }

        if(pSC->WMII.cPostProcStrength > 0)
            postProcMB(pSC->pPostProcInfo, p0, p1, mbX, i, dcqp[i]); // second stage deblocking

        //================================
        // first level inverse transform
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            for (j = (left ? 32 : -96); j < (right ? 32 : 160); j += 64)
            {
                strIDCT4x4Stage1(p0 + j +  0);
                strIDCT4x4Stage1(p0 + j + 16);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -128); j < (right ? 0 : 128); j += 64)
            {
                strIDCT4x4Stage1(p1 + j +  0);
                strIDCT4x4Stage1(p1 + j + 16);
            }
        }

        //================================
        // first level inverse overlap
        if (OL_NONE != olOverlap)
        {
            if (leftORright)
            {
                j = left ? 0 + 10 : -64 + 14;
                if (!top)
                {
                    p = p0 + 16 + j;
                    strPost4(p +  0, p -  2, p +  6, p +  8);
                    strPost4(p +  1, p -  1, p +  7, p +  9);
                    strPost4(p + 16, p + 14, p + 22, p + 24);
                    strPost4(p + 17, p + 15, p + 23, p + 25);
                    p = NULL;
                }
                if (!bottom)
                {
                    p = p1 + j;
                    strPost4(p + 0, p - 2, p + 6, p + 8);
                    strPost4(p + 1, p - 1, p + 7, p + 9);
                    p = NULL;
                }
                if (!topORbottom)
                {
                    strPost4(p0 + 48 + j + 0, p0 + 48 + j - 2, p1 - 10 + j, p1 - 8 + j);
                    strPost4(p0 + 48 + j + 1, p0 + 48 + j - 1, p1 -  9 + j, p1 - 7 + j);
                }
            }

            if (top)
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    p = p1 + j;
                    strPost4(p + 5, p + 4, p + 64, p + 65);
                    strPost4(p + 7, p + 6, p + 66, p + 67);
                    p = NULL;

                    strPost4x4Stage1(p1 + j, 0, iHPQP, bHPAbsent);
                }
            }
            else if (bottom)
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    strPost4x4Stage1(p0 + 16 + j, 0, iHPQP, bHPAbsent);
                    strPost4x4Stage1(p0 + 32 + j, 0, iHPQP, bHPAbsent);

                    p = p0 + 48 + j;
                    strPost4(p + 15, p + 14, p + 74, p + 75);
                    strPost4(p + 13, p + 12, p + 72, p + 73);
                    p = NULL;
                }
            }
            else
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    strPost4x4Stage1(p0 + 16 + j, 0, iHPQP, bHPAbsent);
                    strPost4x4Stage1(p0 + 32 + j, 0, iHPQP, bHPAbsent);
                    strPost4x4Stage1Split(p0 + 48 + j, p1 + j, 0, iHPQP, bHPAbsent);
                    strPost4x4Stage1(p1 + j, 0, iHPQP, bHPAbsent);
                }
            }
        }
        
        if(pSC->WMII.cPostProcStrength > 0 && (!topORleft))
            postProcBlock(pSC->pPostProcInfo, p0, p1, mbX, i, qp[i]); // destairing and first stage deblocking
    }

    //================================================================
    // 420_UV
    for (i = 0; i < (YUV_420 == cfColorFormat? 2U : 0U) && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        Int iHPQP = 255;
        if (!bHPAbsent)
            iHPQP = pSC->pTile[pSC->cTileColumn].pQuantizerHP[i][pSC->MBInfo.iQIndexHP].iQP;

        //========================================
        // second level inverse transform (420_UV)
        if (!bottomORright)
        {
            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p1, p1 + 32, p1 + 16, p1 + 48);
            }
            else {
                strDCT2x2dnDec(p1, p1 + 32, p1 + 16, p1 + 48);
            }
        }
        
        //========================================
        // second level inverse overlap (420_UV)
        if (OL_TWO == olOverlap)
        {
            if (leftORright && !topORbottom)
            {
                j = (left ? 0 : -32);
                strPost2(p0 + j + 16, p1 + j);
            }

            if (!leftORright)
            {
                if (topORbottom)
                {
                    p = (top ? p1 : p0 + 16);
                    strPost2(p - 32, p);
                    p = NULL;
                }
                else{
                    strPost2x2(p0 - 16, p0 + 16, p1 - 32, p1);
                }
            }
        }

        //========================================
        // first level inverse transform (420_UV)
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            for (j = (left ? 16 : -16); j < (right ? 16 : 48); j += 32)
            {
                strIDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -32); j < (right ? 0 : 32); j += 32)
            {
                strIDCT4x4Stage1(p1 + j);
            }
        }

        //========================================
        // first level inverse overlap (420_UV)
        if (OL_NONE != olOverlap)
        {
            if(!left && !top)
            {
                if (bottom)
                {
                    for (j = -48; j < (right ? -16 : 16); j += 32)
                    {
                        p = p0 + j;
                        strPost4(p + 15, p + 14, p + 42, p + 43);
                        strPost4(p + 13, p + 12, p + 40, p + 41);
                        p = NULL;
                    }
                }
                else
                {
                    for (j = -48; j < (right ? -16 : 16); j += 32)
                    {
                        strPost4x4Stage1Split(p0 + j, p1 - 16 + j, 32, iHPQP, bHPAbsent);
                    }
                }

                if (right)
                {
                    if (!bottom)
                    {
                        strPost4(p0 - 2 , p0 - 4 , p1 - 28, p1 - 26);
                        strPost4(p0 - 1 , p0 - 3 , p1 - 27, p1 - 25);
                    }

                    strPost4(p0 - 18, p0 - 20, p0 - 12, p0 - 10);
                    strPost4(p0 - 17, p0 - 19, p0 - 11, p0 -  9);
                }
                else
                {
                    strPost4x4Stage1(p0 - 32, 32, iHPQP, bHPAbsent);
                }

                strPost4x4Stage1(p0 - 64, 32, iHPQP, bHPAbsent);
            }
            else if (top)
            {
                for (j = (left ? 0: -64); j < (right ? -32: 0); j += 32)
                {
                    p = p1 + j + 4;
                    strPost4(p + 1, p + 0, p + 28, p + 29);
                    strPost4(p + 3, p + 2, p + 30, p + 31);
                    p = NULL;
                }
            }
            else if (left)
            {
                if (!bottom)
                {
                    strPost4(p0 + 26, p0 + 24, p1 + 0, p1 + 2);
                    strPost4(p0 + 27, p0 + 25, p1 + 1, p1 + 3);
                }

                strPost4(p0 + 10, p0 + 8, p0 + 16, p0 + 18);
                strPost4(p0 + 11, p0 + 9, p0 + 17, p0 + 19);
            }
        }
    }

    //================================================================
    // 422_UV
    for (i = 0; i < (YUV_422 == cfColorFormat? 2U : 0U) && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        Int iHPQP = 255;
        if (!bHPAbsent)
            iHPQP = pSC->pTile[pSC->cTileColumn].pQuantizerHP[i][pSC->MBInfo.iQIndexHP].iQP;

        //========================================
        // second level inverse transform (422_UV)
        if ((!bottomORright) && pSC->m_Dparam->cThumbnailScale < 16)
        {
            // 1D lossless HT
            p1[0]  -= ((p1[32] + 1) >> 1);
            p1[32] += p1[0];

            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p1 +  0, p1 + 64, p1 + 16, p1 +  80);
                strDCT2x2dn(p1 + 32, p1 + 96, p1 + 48, p1 + 112);
            }
            else {
                strDCT2x2dnDec(p1 +  0, p1 + 64, p1 + 16, p1 +  80);
                strDCT2x2dnDec(p1 + 32, p1 + 96, p1 + 48, p1 + 112);
            }
        }
        
        //========================================
        // second level inverse overlap (422_UV)
        if (OL_TWO == olOverlap)
        {
            if (!bottom)
            {
                if (leftORright)
                {
                    if (!top)
                    {
                        j = (left ? 0 : -64);
                        strPost2(p0 + 48 + j, p1 + j);
                    }

                    j = (left ? 16 : -48);
                    strPost2(p1 + j, p1 + j + 16);
                }
                else
                {
                    if (top)
                    {
                        strPost2(p1 - 64, p1);
                    }
                    else
                    {
                        strPost2x2(p0 - 16, p0 + 48, p1 - 64, p1);
                    }

                    strPost2x2(p1 - 48, p1 + 16, p1 - 32, p1 + 32);
                }
            }
            else if (!leftORright)
            {
                strPost2(p0 - 16, p0 + 48);
            }
        }

        //========================================
        // first level inverse transform (422_UV)
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            for (j = (left ? 48 : -16); j < (right ? 48 : 112); j += 64)
            {
                strIDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -64); j < (right ? 0 : 64); j += 64)
            {
                strIDCT4x4Stage1(p1 + j + 0);
                strIDCT4x4Stage1(p1 + j + 16);
                strIDCT4x4Stage1(p1 + j + 32);
            }
        }
        
        //========================================
        // first level inverse overlap (422_UV)
        if (OL_NONE != olOverlap)
        {
            if (!top)
            {
                if (leftORright)
                {
                    j = (left ? 32 + 10 : -32 + 14);

                    p = p0 + j;
                    strPost4(p + 0, p - 2, p + 6, p + 8);
                    strPost4(p + 1, p - 1, p + 7, p + 9);

                    p = NULL;
                }

                for (j = (left ? 0 : -128); j < (right ? -64 : 0); j += 64)
                {
                    strPost4x4Stage1(p0 + j + 32, 0, iHPQP, bHPAbsent);
                }
            }

            if (!bottom)
            {
                if (leftORright)
                {
                    j = (left ? 0 + 10 : -64 + 14);

                    p = p1 + j;
                    strPost4(p + 0, p - 2, p + 6, p + 8);
                    strPost4(p + 1, p - 1, p + 7, p + 9);

                    p += 16;
                    strPost4(p + 0, p - 2, p + 6, p + 8);
                    strPost4(p + 1, p - 1, p + 7, p + 9);

                    p = NULL;
                }

                for (j = (left ? 0 : -128); j < (right ? -64 : 0); j += 64)
                {
                    strPost4x4Stage1(p1 + j +  0, 0, iHPQP, bHPAbsent);
                    strPost4x4Stage1(p1 + j + 16, 0, iHPQP, bHPAbsent);
                }
            }

            if (topORbottom)
            {
                p = (top ? p1 + 5 : p0 + 48 + 13);
                for (j = (left ? 0 : -128); j < (right ? -64 : 0); j += 64)
                {
                    strPost4(p + j + 0, p + j - 1, p + j + 59, p + j + 60);
                    strPost4(p + j + 2, p + j + 1, p + j + 61, p + j + 62);
                }
                p = NULL;
            }
            else
            {
                if (leftORright)
                {
                    j = (left ? 0 + 0 : -64 + 4);
                    strPost4(p0 + j + 48 + 10 + 0, p0 + j + 48 + 10 - 2, p1 + j + 0, p1 + j + 2);
                    strPost4(p0 + j + 48 + 10 + 1, p0 + j + 48 + 10 - 1, p1 + j + 1, p1 + j + 3);
                }

                for (j = (left ? 0 : -128); j < (right ? -64 : 0); j += 64)
                {
                    strPost4x4Stage1Split(p0 + j + 48, p1 + j + 0, 0, iHPQP, bHPAbsent);
                }
            }
        }
    }    

    return ICERR_OK;
}

Int  invTransformMacroblock_alteredOperators_hard(CWMImageStrCodec * pSC)
{
    const OVERLAP olOverlap = pSC->WMISCP.olOverlap;
    const COLORFORMAT cfColorFormat = pSC->m_param.cfColorFormat;
    // const BITDEPTH_BITS bdBitDepth = pSC->WMII.bdBitDepth;
    const Bool left = (pSC->cColumn == 0), right = (pSC->cColumn == pSC->cmbWidth);
    const Bool top = (pSC->cRow == 0), bottom = (pSC->cRow == pSC->cmbHeight);
    const Bool topORbottom = (top || bottom), leftORright = (left || right);
    const Bool topORleft = (top || left), bottomORright = (bottom || right);
    Bool leftAdjacentColumn = (pSC->cColumn == 1), rightAdjacentColumn = (pSC->cColumn == pSC->cmbWidth - 1);
    // Bool topAdjacentRow =  (pSC->cRow == 1), bottomAdjacentRow = (pSC->cRow == pSC->cmbHeight - 1);
    const size_t mbWidth = pSC->cmbWidth;
    PixelI * p = NULL;// * pt = NULL;
    size_t i;
    const size_t iChannels = (cfColorFormat == YUV_420 || cfColorFormat == YUV_422) ? 1 : pSC->m_param.cNumChannels;
    const size_t tScale = pSC->m_Dparam->cThumbnailScale;
    Int j = 0;

    Int qp[MAX_CHANNELS], dcqp[MAX_CHANNELS], iStrength = (1 << pSC->WMII.cPostProcStrength);
    // ERR_CODE result = ICERR_OK;

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

    if(pSC->WMII.cPostProcStrength > 0){
        // threshold for post processing
        for(i = 0; i < iChannels; i ++){
            qp[i] = pSC->pTile[pSC->cTileColumn].pQuantizerLP[i][pSC->MBInfo.iQIndexLP].iQP * iStrength * (olOverlap == OL_NONE ? 2 : 1);
            dcqp[i] = pSC->pTile[pSC->cTileColumn].pQuantizerDC[i][0].iQP * iStrength;
        }

        if(left) // a new MB row
            slideOneMBRow(pSC->pPostProcInfo, pSC->m_param.cNumChannels, mbWidth, top, bottom);  // previous current row becomes previous row
    }

    //================================================================
    // 400_Y, 444_YUV
    for (i = 0; i < iChannels && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[i];
        PixelI* const p1 = pSC->p1MBbuffer[i];

        //================================
        // second level inverse transform
        if (!bottomORright)
        {
            if(pSC->WMII.cPostProcStrength > 0)
                updatePostProcInfo(pSC->pPostProcInfo, p1, mbX, i); // update postproc info before IDCT

            strIDCT4x4Stage2(p1);
            if (pSC->m_param.bScaledArith) {
                strNormalizeDec(p1, (i != 0));
            }
        }

        //================================
        // second level inverse overlap
        if (OL_TWO == olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPost4_alternate(p1 + 0, p1 + 64, p1 + 0 + 16, p1 + 64 + 16);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPost4_alternate(p1 - 128, p1 - 64, p1 - 128 + 16, p1 - 64 + 16); 
            if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                strPost4_alternate(p0 + 32, p0 + 96, p0 + 32 + 16, p0 + 96 + 16);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPost4_alternate(p0 - 96, p0 - 32, p0 - 96 + 16, p0 - 32 + 16);
            if ((leftORright || bVertTileBoundary) && (!topORbottom  && !bHoriTileBoundary))
            {
                if (left || bVertTileBoundary) {
                    j = 0;
                    strPost4_alternate(p0 + j + 32, p0 + j +  48, p1 + j +  0, p1 + j + 16);
                    strPost4_alternate(p0 + j + 96, p0 + j + 112, p1 + j + 64, p1 + j + 80);
                }
                if (right || bVertTileBoundary) {
                    j = -128;
                    strPost4_alternate(p0 + j + 32, p0 + j +  48, p1 + j +  0, p1 + j + 16);
                    strPost4_alternate(p0 + j + 96, p0 + j + 112, p1 + j + 64, p1 + j + 80);
                }
            }

            if (!leftORright)
            {
                if ((topORbottom || bHoriTileBoundary) && !bVertTileBoundary)
                {
                    if (top || bHoriTileBoundary) {
                        p = p1;
                        strPost4_alternate(p - 128, p - 64, p +  0, p + 64);
                        strPost4_alternate(p - 112, p - 48, p + 16, p + 80);
                        p = NULL;
                    }
                    if (bottom || bHoriTileBoundary) {
                        p = p0 + 32;
                        strPost4_alternate(p - 128, p - 64, p +  0, p + 64);
                        strPost4_alternate(p - 112, p - 48, p + 16, p + 80);
                        p = NULL;
                    }
                }
                
                if (!topORbottom && !bHoriTileBoundary && !bVertTileBoundary)
                    strPost4x4Stage2Split_alternate(p0, p1);
            }
        }

        if(pSC->WMII.cPostProcStrength > 0)
            postProcMB(pSC->pPostProcInfo, p0, p1, mbX, i, dcqp[i]); // second stage deblocking

        //================================
        // first level inverse transform
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            for (j = (left ? 32 : -96); j < (right ? 32 : 160); j += 64)
            {
                strIDCT4x4Stage1(p0 + j +  0);
                strIDCT4x4Stage1(p0 + j + 16);
            }
        }

        if (!bottom)
        {
            for (j = (left ? 0 : -128); j < (right ? 0 : 128); j += 64)
            {
//                if(tScale == 2  && bdBitDepth != BD_1){
//                    MIPgen(p1 + j + 0);
//                    MIPgen(p1 + j + 16);
//                }
                strIDCT4x4Stage1(p1 + j +  0);
                strIDCT4x4Stage1(p1 + j + 16);
            }
        }

        //================================
        // first level inverse overlap
        if (OL_NONE != olOverlap)
        {
            if (leftORright || bVertTileBoundary)
            {
                /* Corner operations */
                if ((top || bHoriTileBoundary) && (left || bVertTileBoundary))
                    strPost4_alternate(p1 + 0, p1 + 1, p1 + 2, p1 + 3);
                if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))
                    strPost4_alternate(p1 - 59, p1 - 60, p1 - 57, p1 - 58); 
                if ((bottom || bHoriTileBoundary) && (left || bVertTileBoundary))
                    strPost4_alternate(p0 + 48 + 10, p0 + 48 + 11, p0 + 48 + 8, p0 + 48 + 9);
                if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                    strPost4_alternate(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
                if (left || bVertTileBoundary) {
                    j = 0 + 10;
                    if (!top)
                    {
                        p = p0 + 16 + j;
                        strPost4_alternate(p +  0, p -  2, p +  6, p +  8);
                        strPost4_alternate(p +  1, p -  1, p +  7, p +  9);
                        strPost4_alternate(p + 16, p + 14, p + 22, p + 24);
                        strPost4_alternate(p + 17, p + 15, p + 23, p + 25);
                        p = NULL;
                    }
                    if (!bottom)
                    {
                        p = p1 + j;
                        strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                        strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                        p = NULL;
                    }
                    if (!topORbottom && !bHoriTileBoundary)
                    {
                        strPost4_alternate(p0 + 48 + j + 0, p0 + 48 + j - 2, p1 - 10 + j, p1 - 8 + j);
                        strPost4_alternate(p0 + 48 + j + 1, p0 + 48 + j - 1, p1 -  9 + j, p1 - 7 + j);
                    }
                }
                if (right || bVertTileBoundary) {
                    j = -64 + 14;
                    if (!top)
                    {
                        p = p0 + 16 + j;
                        strPost4_alternate(p +  0, p -  2, p +  6, p +  8);
                        strPost4_alternate(p +  1, p -  1, p +  7, p +  9);
                        strPost4_alternate(p + 16, p + 14, p + 22, p + 24);
                        strPost4_alternate(p + 17, p + 15, p + 23, p + 25);
                        p = NULL;
                    }
                    if (!bottom)
                    {
                        p = p1 + j;
                        strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                        strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                        p = NULL;
                    }
                    if (!topORbottom && !bHoriTileBoundary)
                    {
                        strPost4_alternate(p0 + 48 + j + 0, p0 + 48 + j - 2, p1 - 10 + j, p1 - 8 + j);
                        strPost4_alternate(p0 + 48 + j + 1, p0 + 48 + j - 1, p1 -  9 + j, p1 - 7 + j);
                    }
                }
            }

            if (top || bHoriTileBoundary)
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    if (!bVertTileBoundary || j != -64) {
                        p = p1 + j;
                        strPost4_alternate(p + 5, p + 4, p + 64, p + 65);
                        strPost4_alternate(p + 7, p + 6, p + 66, p + 67);
                        p = NULL;

                        strPost4x4Stage1_alternate(p1 + j, 0);
                    }
                }
            }

            if (bottom || bHoriTileBoundary)
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    if (!bVertTileBoundary || j != -64) {
                        strPost4x4Stage1_alternate(p0 + 16 + j, 0);
                        strPost4x4Stage1_alternate(p0 + 32 + j, 0);

                        p = p0 + 48 + j;
                        strPost4_alternate(p + 15, p + 14, p + 74, p + 75);
                        strPost4_alternate(p + 13, p + 12, p + 72, p + 73);
                        p = NULL;
                    }
                }
            }

            if (!top && !bottom && !bHoriTileBoundary)
            {
                for (j = (left ? 0 : -192); j < (right ? -64 : 64); j += 64)
                {
                    if (!bVertTileBoundary || j != -64) {
                        strPost4x4Stage1_alternate(p0 + 16 + j, 0);
                        strPost4x4Stage1_alternate(p0 + 32 + j, 0);
                        strPost4x4Stage1Split_alternate(p0 + 48 + j, p1 + j, 0);
                        strPost4x4Stage1_alternate(p1 + j, 0);
                    }
                }
            }
        }
        
        if(pSC->WMII.cPostProcStrength > 0 && (!topORleft))
            postProcBlock(pSC->pPostProcInfo, p0, p1, mbX, i, qp[i]); // destairing and first stage deblocking
    }

    //================================================================
    // 420_UV
    for (i = 0; i < (YUV_420 == cfColorFormat? 2U : 0U) && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        //========================================
        // second level inverse transform (420_UV)
        if (!bottomORright)
        {
            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p1, p1 + 32, p1 + 16, p1 + 48);
            }
            else {
                strDCT2x2dnDec(p1, p1 + 32, p1 + 16, p1 + 48);
            }
        }
        
        //========================================
        // second level inverse overlap (420_UV)
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
                    strPost2_alternate(p0 +   0 + 16, p1 +   0);
                if (right || bVertTileBoundary)
                    strPost2_alternate(p0 + -32 + 16, p1 + -32);
            }

            if (!leftORright)
            {
                if ((topORbottom || bHoriTileBoundary) && !bVertTileBoundary)
                {
                    if (top || bHoriTileBoundary) 
                        strPost2_alternate(p1 - 32, p1);
                    if (bottom || bHoriTileBoundary) 
                        strPost2_alternate(p0 + 16 - 32, p0 + 16);
                }
                else if (!topORbottom && !bHoriTileBoundary && !bVertTileBoundary) { 
                    strPost2x2_alternate(p0 - 16, p0 + 16, p1 - 32, p1);
                }
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

        //========================================
        // first level inverse transform (420_UV)
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            // In order to allow correction operation of corner chroma overlap operators (fixed)
            // processing of left most MB column must be delayed by one MB 
            // Thus left MB not processed until leftAdjacentColumn = 1
            for (j = ((left) ? 48 : ((leftAdjacentColumn || bOneMBRightVertTB) ? -48 : -16)); j < ((right || bVertTileBoundary) ? 16 : 48); j += 32)
            {
                strIDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            // In order to allow correction operation of corner chroma overlap operators (fixed)
            // processing of left most MB column must be delayed by one MB 
            // Thus left MB not processed until leftAdjacentColumn = 1
            for (j = ((left) ? 32 : ((leftAdjacentColumn || bOneMBRightVertTB) ? -64 : -32)); j < ((right || bVertTileBoundary) ? 0 : 32); j += 32)
            {
                strIDCT4x4Stage1(p1 + j);
            }
        }

        //========================================
        // first level inverse overlap (420_UV)
        if (OL_NONE != olOverlap)
        {
            /* Corner operations */
            /* Change because the top-left corner ICT will not have happened until leftAdjacentColumn ==1 */
            if ((top || bHoriTileBoundary) && (leftAdjacentColumn || bOneMBRightVertTB)) 
                strPost4_alternate(p1 - 64 + 0, p1 - 64 + 1, p1 - 64 + 2, p1 - 64 + 3);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary)) 
                strPost4_alternate(p1 - 27, p1 - 28, p1 - 25, p1 - 26);
            /* Change because the bottom-left corner ICT will not have happened until leftAdjacentColumn ==1 */
            if ((bottom || bHoriTileBoundary) && (leftAdjacentColumn || bOneMBRightVertTB)) 
                strPost4_alternate(p0 - 64 + 16 + 10, p0 - 64 + 16 + 11, p0 - 64 + 16 + 8, p0 - 64 + 16 + 9);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary)) 
                strPost4_alternate(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
            if(!left && !top)
            {
                /* Change because the vertical 1-D overlap operations of the left edge pixels cannot be performed until leftAdjacentColumn ==1 */
                if (leftAdjacentColumn || bOneMBRightVertTB)
                {
                    if (!bottom && !bHoriTileBoundary)
                    {
                        strPost4_alternate(p0 - 64 + 26, p0 - 64 + 24, p1 - 64 + 0, p1 - 64 + 2);
                        strPost4_alternate(p0 - 64 + 27, p0 - 64 + 25, p1 - 64 + 1, p1 - 64 + 3);
                    }

                    strPost4_alternate(p0 - 64 + 10, p0 - 64 + 8, p0 - 64 + 16, p0 - 64 + 18);
                    strPost4_alternate(p0 - 64 + 11, p0 - 64 + 9, p0 - 64 + 17, p0 - 64 + 19);
                }
                if (bottom || bHoriTileBoundary)
                {
                    p = p0 + -48;
                    strPost4_alternate(p + 15, p + 14, p + 42, p + 43);
                    strPost4_alternate(p + 13, p + 12, p + 40, p + 41);
                    p = NULL;

                    if (!right && !bVertTileBoundary)
                    {
                        p = p0 + -16;
                        strPost4_alternate(p + 15, p + 14, p + 42, p + 43);
                        strPost4_alternate(p + 13, p + 12, p + 40, p + 41);
                        p = NULL;
                    }
                }
                else
                {
                    strPost4x4Stage1Split_alternate(p0 + -48, p1 - 16 + -48, 32);

                    if (!right && !bVertTileBoundary)
                        strPost4x4Stage1Split_alternate(p0 + -16, p1 - 16 + -16, 32);
                }

                if (right || bVertTileBoundary)
                {
                    if (!bottom && !bHoriTileBoundary)
                    {
                        strPost4_alternate(p0 - 2 , p0 - 4 , p1 - 28, p1 - 26);
                        strPost4_alternate(p0 - 1 , p0 - 3 , p1 - 27, p1 - 25);
                    }

                    strPost4_alternate(p0 - 18, p0 - 20, p0 - 12, p0 - 10);
                    strPost4_alternate(p0 - 17, p0 - 19, p0 - 11, p0 -  9);
                }
                else
                {
                    strPost4x4Stage1_alternate(p0 - 32, 32);
                }

                strPost4x4Stage1_alternate(p0 - 64, 32);
            }

            if (top || bHoriTileBoundary)
            {
                if (!left)
                {
                    p = p1 + -64 + 4;
                    strPost4_alternate(p + 1, p + 0, p + 28, p + 29);
                    strPost4_alternate(p + 3, p + 2, p + 30, p + 31);
                    p = NULL;
                }

                if (!left && !right && !bVertTileBoundary)
                {
                    p = p1 + -32 + 4;
                    strPost4_alternate(p + 1, p + 0, p + 28, p + 29);
                    strPost4_alternate(p + 3, p + 2, p + 30, p + 31);
                    p = NULL;
                }
            }
        }
    }

    //================================================================
    // 422_UV
    for (i = 0; i < (YUV_422 == cfColorFormat? 2U : 0U) && tScale < 16; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[1 + i];//(0 == i ? pSC->pU0 : pSC->pV0);
        PixelI* const p1 = pSC->p1MBbuffer[1 + i];//(0 == i ? pSC->pU1 : pSC->pV1);

        //========================================
        // second level inverse transform (422_UV)
        if ((!bottomORright) && pSC->m_Dparam->cThumbnailScale < 16)
        {
            // 1D lossless HT
            p1[0]  -= ((p1[32] + 1) >> 1);
            p1[32] += p1[0];

            if (!pSC->m_param.bScaledArith) {
                strDCT2x2dn(p1 +  0, p1 + 64, p1 + 16, p1 +  80);
                strDCT2x2dn(p1 + 32, p1 + 96, p1 + 48, p1 + 112);
            }
            else {
                strDCT2x2dnDec(p1 +  0, p1 + 64, p1 + 16, p1 +  80);
                strDCT2x2dnDec(p1 + 32, p1 + 96, p1 + 48, p1 + 112);
            }
        }
        
        //========================================
        // second level inverse overlap (422_UV)
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
                            strPost2_alternate(p0 + 48 + 0, p1 + 0);

                        if (right || bVertTileBoundary)
                            strPost2_alternate(p0 + 48 + -64, p1 + -64);
                    }

                    if (left || bVertTileBoundary)
                        strPost2_alternate(p1 + 16, p1 + 16 + 16);

                    if (right || bVertTileBoundary)
                        strPost2_alternate(p1 + -48, p1 + -48 + 16);
                }

                if (!leftORright && !bVertTileBoundary)
                {
                    if (top || bHoriTileBoundary)
                        strPost2_alternate(p1 - 64, p1);
                    else
                        strPost2x2_alternate(p0 - 16, p0 + 48, p1 - 64, p1);

                    strPost2x2_alternate(p1 - 48, p1 + 16, p1 - 32, p1 + 32);
                }
            }
            
            if ((bottom || bHoriTileBoundary) && (!leftORright && !bVertTileBoundary))
                strPost2_alternate(p0 - 16, p0 + 48);

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

        //========================================
        // first level inverse transform (422_UV)
        if(tScale >= 4) // bypass first level transform for 4:1 and smaller thumbnail
            continue;

        if (!top)
        {
            // Need to delay processing of left column until leftAdjacentColumn = 1 for corner overlap operators
            // Since 422 has no vertical downsampling, no top MB delay of processing is necessary
            for (j = (left ? 112 : ((leftAdjacentColumn || bOneMBRightVertTB) ? -80 : -16)); j < ((right || bVertTileBoundary) ? 48 : 112); j += 64)
            {
                strIDCT4x4Stage1(p0 + j);
            }
        }

        if (!bottom)
        {
            // Need to delay processing of left column until leftAdjacentColumn = 1 for corner overlap operators
            // Since 422 has no vertical downsampling, no top MB delay of processing is necessary
            for (j = (left ? 64 : ((leftAdjacentColumn || bOneMBRightVertTB) ? -128 : -64)); j < ((right || bVertTileBoundary) ? 0 : 64); j += 64)
            {
                strIDCT4x4Stage1(p1 + j + 0);
                strIDCT4x4Stage1(p1 + j + 16);
                strIDCT4x4Stage1(p1 + j + 32);
            }
        }
        
        //========================================
        // first level inverse overlap (422_UV)
        if (OL_NONE != olOverlap)
        {
            /* Corner operations */
            if ((top || bHoriTileBoundary) && (leftAdjacentColumn || bOneMBRightVertTB))
                strPost4_alternate(p1 - 128 + 0, p1 - 128 + 1, p1 - 128 + 2, p1 - 128 + 3);
            if ((top || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPost4_alternate(p1 - 59, p1 - 60, p1 - 57, p1 - 58);
            if ((bottom || bHoriTileBoundary) && (leftAdjacentColumn || bOneMBRightVertTB))
                strPost4_alternate(p0 - 128 + 48 + 10, p0 - 128 + 48 + 11, p0 - 128 + 48 + 8, p0 - 128 + 48 + 9);
            if ((bottom || bHoriTileBoundary) && (right || bVertTileBoundary))
                strPost4_alternate(p0 - 1, p0 - 2, p0 - 3, p0 - 4);
            if (!top)
            {
                // Need to delay processing of left column until leftAdjacentColumn = 1 for corner overlap operators
                if (leftAdjacentColumn || bOneMBRightVertTB) {
                    p = p0 + 32 + 10 - 128;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p = NULL;
                }

                if (right || bVertTileBoundary) {
                    p = p0 + -32 + 14;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p = NULL;
                }

                for (j = (left ? 0 : -128); j < ((right || bVertTileBoundary) ? -64 : 0); j += 64)
                    strPost4x4Stage1_alternate(p0 + j + 32, 0);
            }

            if (!bottom)
            {
                // Need to delay processing of left column until leftAdjacentColumn = 1 for corner overlap operators
                if (leftAdjacentColumn || bOneMBRightVertTB)
                {
                    p = p1 + 0 + 10 - 128;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p += 16;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p = NULL;
                }

                if (right || bVertTileBoundary)
                {
                    p = p1 + -64 + 14;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p += 16;
                    strPost4_alternate(p + 0, p - 2, p + 6, p + 8);
                    strPost4_alternate(p + 1, p - 1, p + 7, p + 9);
                    p = NULL;
                }

                for (j = (left ? 0 : -128); j < ((right || bVertTileBoundary) ? -64 : 0); j += 64)
                {
                    strPost4x4Stage1_alternate(p1 + j +  0, 0);
                    strPost4x4Stage1_alternate(p1 + j + 16, 0);
                }
            }

            if (topORbottom || bHoriTileBoundary)
            {
                if (top || bHoriTileBoundary) {
                    p = p1 + 5;
                    for (j = (left ? 0 : -128); j < ((right || bVertTileBoundary) ? -64 : 0); j += 64)
                    {
                        strPost4_alternate(p + j + 0, p + j - 1, p + j + 59, p + j + 60);
                        strPost4_alternate(p + j + 2, p + j + 1, p + j + 61, p + j + 62);
                    }
                    p = NULL;
                }

                if (bottom || bHoriTileBoundary) {
                    p = p0 + 48 + 13;
                    for (j = (left ? 0 : -128); j < ((right || bVertTileBoundary) ? -64 : 0); j += 64)
                    {
                        strPost4_alternate(p + j + 0, p + j - 1, p + j + 59, p + j + 60);
                        strPost4_alternate(p + j + 2, p + j + 1, p + j + 61, p + j + 62);
                    }
                    p = NULL;
                }
            }
            else
            {
                // Need to delay processing of left column until leftAdjacentColumn = 1 for corner overlap operators
                if (leftAdjacentColumn || bOneMBRightVertTB)
                {
                    j = 0 + 0 - 128;
                    strPost4_alternate(p0 + j + 48 + 10 + 0, p0 + j + 48 + 10 - 2, p1 + j + 0, p1 + j + 2);
                    strPost4_alternate(p0 + j + 48 + 10 + 1, p0 + j + 48 + 10 - 1, p1 + j + 1, p1 + j + 3);
                }

                if (right || bVertTileBoundary)
                {
                    j = -64 + 4;
                    strPost4_alternate(p0 + j + 48 + 10 + 0, p0 + j + 48 + 10 - 2, p1 + j + 0, p1 + j + 2);
                    strPost4_alternate(p0 + j + 48 + 10 + 1, p0 + j + 48 + 10 - 1, p1 + j + 1, p1 + j + 3);
                }

                for (j = (left ? 0 : -128); j < ((right || bVertTileBoundary) ? -64 : 0); j += 64)
                    strPost4x4Stage1Split_alternate(p0 + j + 48, p1 + j + 0, 0);
            }
        }
    }    

    return ICERR_OK;
}
