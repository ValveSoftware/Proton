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
#include <stdlib.h>

#include <JXRGlue.h>
#include <math.h>

//================================================================
// PKFormatConverter
//================================================================
#define HLF_MIN 0.00006103515625f
#define HLF_MAX 65504.0f

#define HLF_MIN_BITS 0x0400
#define HLF_MAX_BITS 0x7bff

#define HLF_MIN_BITS_NEG (HLF_MIN_BITS | 0x8000)
#define HLF_MAX_BITS_NEG (HLF_MAX_BITS | 0x8000)

#define HLF_QNaN_BITZS 0x7fff

// simple and slow implementation of half <-> float conversion
static U32 Convert_Half_To_Float(U16 u16)
{
    // 1s5e10m -> 1s8e23m
    const U32 s = (u16 >> 15) & 0x0001;
    const U32 e = (u16 >> 10) & 0x001f;
    const U32 m = (u16 >>  0) & 0x03ff;

    if (0 == e) // 0, denorm
    {
        return s << 31;
    }
    else if (~(~0 << 5) == e) // inf, snan, qnan
    {
        return (s << 31) | ~(~0 << 8) << 23| (m << 13);
    }

    return (s << 31) | ((e - 15 + 127) << 23) | (m << 13); // norm
}


static U16 Convert_Float_To_Half(float f)
{
    // 1s5e10m -> 1s8e23m
    const U32 iFloat = *(U32*)&f; // Convert float to U32

    if (f != f)
    {
        return (U16)(iFloat | HLF_QNaN_BITZS); // +QNaN, -QNaN
    }
    else if (f < -HLF_MAX)
    {
        return HLF_MAX_BITS_NEG;
    }
    else if (HLF_MAX < f)
    {
        return HLF_MAX_BITS;
    }
    else if (-HLF_MIN < f && f < HLF_MIN)
    {
        return (U16)((iFloat >> 16) & 0x8000); // +0, -0
    }

    // Cut-and-paste from C++, introduce scope so we can decl more vars
    {
    const U32 s = (iFloat >> 31) & 0x00000001;
    const U32 e = (iFloat >> 23) & 0x000000ff;
    const U32 m = (iFloat >>  0) & 0x007fffff;

    return (U16) ((s << 15) | ((e - 127 + 15) << 10) | (m >> 13));
    }
}


static U8 Convert_Float_To_U8(float f)
{
    // convert from linear scRGB to non-linear sRGB
    if (f <= 0)
    {
        return 0;
    }
    else if (f <= 0.0031308f)
    {
        return (U8)((255.0f * f * 12.92f) + 0.5f);
    }
    else if (f < 1.0f)
    {
        return (U8)((255.0f * ((1.055f * (float)pow(f, 1.0 / 2.4)) - 0.055f)) + 0.5f);
    }
    else
    {
        return 255;
    }
}

static U8 Convert_AlphaFloat_To_U8(float f)
{
    // alpha is converted differently than RGB in scRGB
    if (f <= 0)
    {
        return 0;
    }
    else if (f < 1.0f)
    {
        return (U8)((255.0f * f) + 0.5f);
    }
    else
    {
        return 255;
    }
}


ERR RGB24_BGR24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
   
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width * 3; j += 3)
        {
            // swap red with blue
            U8 t = pb[j];
            pb[j] = pb[j + 2];
            pb[j + 2] = t;
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR BGR24_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    return RGB24_BGR24(pFC, pRect, pb, cbStride);
}

ERR RGB24_BGR32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
   
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width; j++)
        {
            // swap red with blue
            U8 t = pb[3*j];
            pb[4*j] = pb[3*j + 2];
            pb[4*j + 1] = pb[3*j + 1];
            pb[4*j + 2] = t;
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR BGR32_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
   
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width; j++)
        {
            // swap red with blue
            U8 t = pb[4*j];
            pb[3*j] = pb[4*j + 2];
            pb[3*j + 1] = pb[4*j + 1];
            pb[3*j + 2] = t;
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR RGB24_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0, k = 0;

    UNREFERENCED_PARAMETER( pFC );
    
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0, k = 0; j < pRect->Width * 3; j += 3, ++k)
        {
            U8 r = pb[j];
            U8 g = pb[j + 1];
            U8 b = pb[j + 2];
            
            pb[k] = r / 4 + g / 2 + b / 8 + 16;
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR BGR24_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    ERR err = WMP_errSuccess;

    Call(BGR24_RGB24(pFC, pRect, pb, cbStride));
    Call(RGB24_Gray8(pFC, pRect, pb, cbStride));

Cleanup:
    return err;
}

ERR Gray8_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0, k = 0;

    UNREFERENCED_PARAMETER( pFC );
    
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = pRect->Width - 1, k = 3 * j; 0 <= j; j--, k -= 3)
        {
            U8 v = pb[j];

            pb[k] = v;
            pb[k + 1] = v;
            pb[k + 2] = v;
        }
        
        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR Gray8_BGR24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    return Gray8_RGB24(pFC, pRect, pb, cbStride);
}

#if 0
ERR RGB48_BGR48(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    ERR err = WMP_errSuccess;

    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
    
    Call(PKFormatConverter_Copy(pFC, pRect, pb, cbStride));

    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width; j += 3)
        {
            U16* ps = (U16*)pb;
            
            // swap red with blue
            U16 t = ps[j];
            ps[j] = ps[j + 2];
            ps[j + 2] = t;
        }

        pb += cbStride;
    }

Cleanup:
    return err;
}

ERR BGR48_RGB48(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    return RGB48_BGR48(pFC, pRect, pb, cbStride);
}

ERR RGB48_Gray16(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    ERR err = WMP_errSuccess;

    I32 i = 0, j = 0, k = 0;
 
    UNREFERENCED_PARAMETER( pFC );
   
    Call(PKFormatConverter_Copy(pFC, pRect, pb, cbStride));

    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0, k = 0; j < pRect->Width; j += 3, ++k)
        {
            U16* ps = (U16*)pb;

            // Y = r / 4 + g / 2 + b / 8 + 16
            U16 r = ps[j];
            U16 g = ps[j + 1];
            U16 b = ps[j + 2];
            
            ps[k] = r / 4 + g / 2 + b / 8 + 16;
        }

        pb += cbStride;
    }

Cleanup:
    return err;
}
#endif

ERR RGBA128Fixed_RGBA128Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width; // 4 == R, G, B, A
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidthX4; x++)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}


ERR RGBA128Float_RGBA128Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width; // 4 == R, G, B, A
    const float fltCvtFactor = (float)(1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I32 *piDstPixel = (I32*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX4; x++)
            piDstPixel[x] = (I32) (pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}



ERR RGB96Fixed_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3 * pRect->Width; // 3 == R, G, B
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidthX3; x++)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}


ERR RGB128Fixed_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = piSrcPixel[4*x] * fltCvtFactor;
            pfltDstPixel[3*x+1] = piSrcPixel[4*x+1] * fltCvtFactor;
            pfltDstPixel[3*x+2] = piSrcPixel[4*x+2] * fltCvtFactor;
        }
    }
    
    return WMP_errSuccess;
}



ERR RGB96Float_RGB96Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3 * pRect->Width; // 3 == R, G, B
    const float fltCvtFactor = (float) (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I32 *piDstPixel = (I32*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX3; x++)
            piDstPixel[x] = (I32)(pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB128Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = (float) (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    assert(iWidth > 2); // Otherwise, we corrupt source data in inner loop
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        I32 *piDstPixel = (I32*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            piDstPixel[4*x] = (I32)(pfltSrcPixel[3*x] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+1] = (I32)(pfltSrcPixel[3*x+1] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+2] = (I32)(pfltSrcPixel[3*x+2] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+3] = 0; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB128Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    assert(iWidth > 2); // Otherwise, we corrupt source data in inner loop
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            pfltDstPixel[4*x] = pfltSrcPixel[3*x];
            pfltDstPixel[4*x+1] = pfltSrcPixel[3*x+1];
            pfltDstPixel[4*x+2] = pfltSrcPixel[3*x+2];
            pfltDstPixel[4*x+3] = 0.0F; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB128Float_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = pfltSrcPixel[4*x];
            pfltDstPixel[3*x+1] = pfltSrcPixel[4*x+1];
            pfltDstPixel[3*x+2] = pfltSrcPixel[4*x+2];
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB48Half_RGB64Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    assert(iWidth > 2); // Otherwise, we corrupt source data in inner loop
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            piDstPixel[4*x] = piSrcPixel[3*x];
            piDstPixel[4*x+1] = piSrcPixel[3*x+1];
            piDstPixel[4*x+2] = piSrcPixel[3*x+2];
            piDstPixel[4*x+3] = 0; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB64Half_RGB48Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const short *piSrcPixel = (I16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[3*x] = piSrcPixel[4*x];
            piDstPixel[3*x+1] = piSrcPixel[4*x+1];
            piDstPixel[3*x+2] = piSrcPixel[4*x+2];
        }
    }
    
    return WMP_errSuccess;
}


ERR BGR24_BGR32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    assert(iWidth > 2); // Otherwise, we corrupt source data in inner loop
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U8 *piDstPixel = pb + cbStride*y;
        const U8 *piSrcPixel = piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            piDstPixel[4*x] = piSrcPixel[3*x];
            piDstPixel[4*x+1] = piSrcPixel[3*x+1];
            piDstPixel[4*x+2] = piSrcPixel[3*x+2];
            piDstPixel[4*x+3] = 0; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR BGR32_BGR24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = pb + cbStride*y;
        const U8 *piSrcPixel = piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[3*x] = piSrcPixel[4*x];
            piDstPixel[3*x+1] = piSrcPixel[4*x+1];
            piDstPixel[3*x+2] = piSrcPixel[4*x+2];
        }
    }
    
    return WMP_errSuccess;
}


ERR Gray32Fixed_Gray32Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}


ERR Gray32Float_Gray32Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = (float) (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I32 *piDstPixel = (I32*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
            piDstPixel[x] = (I32)(pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}



ERR Gray16Fixed_Gray32Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}


ERR Gray32Float_Gray16Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = (float) (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
            piDstPixel[x] = (I16)(pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}


ERR RGB48Fixed_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3 * pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidthX3 - 1; x >= 0; x--)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB48Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3 * pRect->Width;
    const float fltCvtFactor = (float)(1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX3; x++)
            piDstPixel[x] = (I16)(pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}


ERR RGB64Fixed_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            pfltDstPixel[3*x] = piSrcPixel[4*x] * fltCvtFactor;
            pfltDstPixel[3*x+1] = piSrcPixel[4*x+1] * fltCvtFactor;
            pfltDstPixel[3*x+2] = piSrcPixel[4*x+2] * fltCvtFactor;
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB64Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = (float)(1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[4*x] = (I16)(pfltSrcPixel[3*x] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+1] = (I16)(pfltSrcPixel[3*x+1] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+2] = (I16)(pfltSrcPixel[3*x+2] * fltCvtFactor + 0.5F);
            piDstPixel[4*x+3] = 0; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR RGBA64Fixed_RGBA128Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidthX4 - 1; x >= 0; x--)
            pfltDstPixel[x] = piSrcPixel[x] * fltCvtFactor;
    }
    
    return WMP_errSuccess;
}



ERR RGBA128Float_RGBA64Fixed(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width;
    const float fltCvtFactor = (float)(1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX4; x++)
            piDstPixel[x] = (I16)(pfltSrcPixel[x] * fltCvtFactor + 0.5F);
    }
    
    return WMP_errSuccess;
}



ERR RGBE_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        float *pfltDstPixel = (float*)(pb + cbStride*y);
        const U8 *piSrcPixel = (U8*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            // First read the exponent
            const U8 rawExp = piSrcPixel[4*x+3];

            if (0 == rawExp)
            {
                pfltDstPixel[3*x] = 0.0F;
                pfltDstPixel[3*x+1] = 0.0F;
                pfltDstPixel[3*x+2] = 0.0F;
            }
            else
            {
                const I32 adjExp = (I32)rawExp - 128 - 8; // Can be negative
                float fltExp;

                if (adjExp > -32 && adjExp < 32)
                {
                    fltExp = (float) (((U32)1) << abs(adjExp));
                    if (adjExp < 0)
                        fltExp = 1.0F / fltExp;
                }
                else
                {
                    fltExp = (float)ldexp(1.0F, adjExp);
                }

                pfltDstPixel[3*x] = piSrcPixel[4*x] * fltExp;
                pfltDstPixel[3*x + 1] = piSrcPixel[4*x + 1] * fltExp;
                pfltDstPixel[3*x + 2] = piSrcPixel[4*x + 2] * fltExp;
            }
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGBE(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    assert(iWidth > 2); // Otherwise, we corrupt source data in inner loop

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            // We clamp source RGB values at zero (don't allow negative numbers)
            const float fltRed = max(pfltSrcPixel[3*x], 0.0F);
            const float fltGreen = max(pfltSrcPixel[3*x+1], 0.0F);
            const float fltBlue = max(pfltSrcPixel[3*x+2], 0.0F);
            float fltMaxPos = fltRed;

            if (fltGreen > fltMaxPos)
                fltMaxPos = fltGreen;

            if (fltBlue > fltMaxPos)
                fltMaxPos = fltBlue;

            if (fltMaxPos < 1e-32)
            {
                piDstPixel[4*x] = 0;    // R
                piDstPixel[4*x+1] = 0;  // G
                piDstPixel[4*x+2] = 0;  // B
                piDstPixel[4*x+3] = 0;  // E
            }
            else
            {
                int e;
                const float fltScale = (float)frexp(fltMaxPos, &e) * 256 / fltMaxPos;

                // rounding SHOULD NOT be added - it has the potential to roll over to zero (and yes, 256 is the correct multiplier above)
                piDstPixel[4*x] = (U8)(fltRed * fltScale);       // R
                piDstPixel[4*x+1] = (U8)(fltGreen * fltScale);   // G
                piDstPixel[4*x+2] = (U8)(fltBlue * fltScale);    // B
                piDstPixel[4*x+3] = (U8)(e + 128);               // E
            }
        }
    }
    
    return WMP_errSuccess;
}


ERR RGBA64Half_RGBA128Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U32 *pfltDstPixel = (U32*)(pb + cbStride*y); // It's really float, but use U32 ptr
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidthX4 - 1; x >= 0; x--)
            pfltDstPixel[x] = Convert_Half_To_Float(piSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}


ERR RGBA128Float_RGBA64Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX4; x++)
            piDstPixel[x] = Convert_Float_To_Half(pfltSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}


ERR RGB64Half_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U32 *pfltDstPixel = (U32*)(pb + cbStride*y); // It's really float, but use U32 ptr
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            pfltDstPixel[3*x] = Convert_Half_To_Float(piSrcPixel[4*x]);
            pfltDstPixel[3*x+1] = Convert_Half_To_Float(piSrcPixel[4*x+1]);
            pfltDstPixel[3*x+2] = Convert_Half_To_Float(piSrcPixel[4*x+2]);
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB64Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[4*x] = Convert_Float_To_Half(pfltSrcPixel[3*x]);
            piDstPixel[4*x+1] = Convert_Float_To_Half(pfltSrcPixel[3*x+1]);
            piDstPixel[4*x+2] = Convert_Float_To_Half(pfltSrcPixel[3*x+2]);
            piDstPixel[4*x+3] = 0; // Zero out the alpha channel
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB48Half_RGB96Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3*pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U32 *pfltDstPixel = (U32*)(pb + cbStride*y); // It's really float, but use U32 ptr
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidthX3 - 1; x >= 0; x--)
            pfltDstPixel[x] = Convert_Half_To_Float(piSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}


ERR RGB96Float_RGB48Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX3 = 3*pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidthX3; x++)
            piDstPixel[x] = Convert_Float_To_Half(pfltSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}


ERR Gray16Half_Gray32Float(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U32 *pfltDstPixel = (U32*)(pb + cbStride*y); // It's really float, but use U32 ptr
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
            pfltDstPixel[x] = Convert_Half_To_Float(piSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}


ERR Gray32Float_Gray16Half(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        I16 *piDstPixel = (I16*)(pb + cbStride*y);
        const float *pfltSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
            piDstPixel[x] = Convert_Float_To_Half(pfltSrcPixel[x]);
    }
    
    return WMP_errSuccess;
}

ERR RGB555_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U8 *piDstPixel = (pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            const U16 v = piSrcPixel[x];
            const unsigned int r = ((v >> 10) & 0x1f);
            const unsigned int g = ((v >> 5) & 0x1f);
            const unsigned int b = (v & 0x1f);

            piDstPixel[3*x] = (U8)(r << 3);    // R
            piDstPixel[3*x+1] = (U8)(g << 3);  // G
            piDstPixel[3*x+2] = (U8)(b << 3);  // B
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB101010_RGB48(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U16 *piDstPixel = (U16*)(pb + cbStride*y);
        const U32 *piSrcPixel = (U32*)piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            const U32 v = piSrcPixel[x];
            const unsigned int r = ((v >> 20) & 0x3FF);
            const unsigned int g = ((v >> 10) & 0x3FF);
            const unsigned int b = (v & 0x3FF);

            piDstPixel[3*x] = (U16)(r << 6);    // R
            piDstPixel[3*x+1] = (U16)(g << 6);  // G
            piDstPixel[3*x+2] = (U16)(b << 6);  // B
        }
    }
    
    return WMP_errSuccess;
}


ERR RGB24_RGB555(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U16 *piDstPixel = (U16*)(pb + cbStride*y);
        const U8 *piSrcPixel = (U8*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const unsigned int r = piSrcPixel[3*x];
            const unsigned int g = piSrcPixel[3*x+1];
            const unsigned int b = piSrcPixel[3*x+2];

            piDstPixel[x] = (U16) (
                            ((r & 0xF8) << 7) |
                            ((g & 0xF8) << 2) |
                             (b >> 3));
        }
    }

    return WMP_errSuccess;
}



ERR RGB48_RGB101010(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U32 *piDstPixel = (U32*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const unsigned int r = piSrcPixel[3*x];
            const unsigned int g = piSrcPixel[3*x+1];
            const unsigned int b = piSrcPixel[3*x+2];

            piDstPixel[x] = (3 << 30) | // For compatibility with D3D's 2-10-10-10 format.
                            ((r & 0x0000FFC0) << 14) |
                            ((g & 0x0000FFC0) << 4) |
                             (b >> 6);
        }
    }

    return WMP_errSuccess;
}



ERR RGB565_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
        U8 *piDstPixel = (pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = iWidth - 1; x >= 0; x--)
        {
            const U16 v = piSrcPixel[x];
            const unsigned int r = ((v >> 11) & 0x1f);
            const unsigned int g = ((v >> 5) & 0x3f);
            const unsigned int b = (v & 0x1f);

            piDstPixel[3*x] = (U8)(r << 3);    // R
            piDstPixel[3*x+1] = (U8)(g << 2);  // G
            piDstPixel[3*x+2] = (U8)(b << 3);  // B
        }
    }
    
    return WMP_errSuccess;
}



ERR RGB24_RGB565(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U16 *piDstPixel = (U16*)(pb + cbStride*y);
        const U8 *piSrcPixel = (U8*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const unsigned int r = piSrcPixel[3*x];
            const unsigned int g = piSrcPixel[3*x+1];
            const unsigned int b = piSrcPixel[3*x+2];

            piDstPixel[x] = (U16) (
                            ((r & 0xF8) << 8) |
                            ((g & 0xFC) << 3) |
                             (b >> 3));
        }
    }

    return WMP_errSuccess;
}


ERR RGBA32_BGRA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidthX4 = 4 * pRect->Width; // 4 == R, G, B, A
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piPixel = (U8*)(pb + cbStride*y);

        for (x = 0; x < iWidthX4; x += 4)
        {
            // Swap R and B
            U8 bTemp = piPixel[x];
            piPixel[x] = piPixel[x+2];
            piPixel[x+2] = bTemp;
        }
    }
    
    return WMP_errSuccess;
}


ERR BGRA32_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    return RGBA32_BGRA32(pFC, pRect, pb, cbStride);
}


ERR BlackWhite_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
	Bool bBlackWhite = pFC->pDecoder->WMP.wmiSCP.bBlackWhite;
    I32 y;

    // Stride is assumed to be same for src/dst
    for (y = iHeight - 1; y >= 0; y--)
    {
        I32 x;
		I32 n;
        U8 *piDstPixel = (pb + cbStride*y);
        const U8 *piSrcPixel = (U8*)piDstPixel;

		if (iWidth % 8 != 0)
		{
			const U8 v = piSrcPixel[iWidth / 8];

			for (n = 0; n < iWidth % 8; n++)
			{
				piDstPixel[iWidth/8*8+n] = (((v >> (7 - n)) & 0x1) != 0) ^ bBlackWhite ? 0xFF : 0x00;
			}
		}

        for (x = iWidth / 8 - 1; x >= 0; x--)
        {
            const U8 v = piSrcPixel[x];

			for (n = 0; n < 8; n++)
			{
                piDstPixel[8*x+n] = (((v >> (7 - n)) & 0x1) != 0) ^ bBlackWhite ? 0xFF : 0x00;
			}
        }
    }
    
    return WMP_errSuccess;
}


ERR Gray16_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
    
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width; ++j)
        {
            U16 v = ((U16*)pb)[j];
            
            pb[j] = v >> 8;
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

ERR RGB48_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U16 r = piSrcPixel[3*x];
            const U16 g = piSrcPixel[3*x+1];
            const U16 b = piSrcPixel[3*x+2];

            piDstPixel[3*x] = r >> 8;
            piDstPixel[3*x+1] = g >> 8;
            piDstPixel[3*x+2] = b >> 8;
        }
    }

    return WMP_errSuccess;
}

ERR RGBA64_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U16 r = piSrcPixel[4*x];
            const U16 g = piSrcPixel[4*x+1];
            const U16 b = piSrcPixel[4*x+2];
            const U16 a = piSrcPixel[4*x+3];

            piDstPixel[4*x] = r >> 8;
            piDstPixel[4*x+1] = g >> 8;
            piDstPixel[4*x+2] = b >> 8;
            piDstPixel[4*x+3] = a >> 8;
        }
    }

    return WMP_errSuccess;
}

ERR Gray32Float_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const float *piSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const float v = piSrcPixel[x];
                
            piDstPixel[x] = Convert_Float_To_U8(v);
        }
    }

    return WMP_errSuccess;
}

ERR RGB96Float_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const float *piSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const float r = piSrcPixel[3*x];
            const float g = piSrcPixel[3*x+1];
            const float b = piSrcPixel[3*x+2];
                
            piDstPixel[3*x] = Convert_Float_To_U8(r);
            piDstPixel[3*x+1] = Convert_Float_To_U8(g);
            piDstPixel[3*x+2] = Convert_Float_To_U8(b);
        }
    }

    return WMP_errSuccess;
}

ERR RGB128Float_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const float *piSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const float r = piSrcPixel[4*x];
            const float g = piSrcPixel[4*x+1];
            const float b = piSrcPixel[4*x+2];
                
            piDstPixel[3*x] = Convert_Float_To_U8(r);
            piDstPixel[3*x+1] = Convert_Float_To_U8(g);
            piDstPixel[3*x+2] = Convert_Float_To_U8(b);
        }
    }

    return WMP_errSuccess;
}

ERR RGBA128Float_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const float *piSrcPixel = (float*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const float r = piSrcPixel[4*x];
            const float g = piSrcPixel[4*x+1];
            const float b = piSrcPixel[4*x+2];
            const float a = piSrcPixel[4*x+3];
                
            piDstPixel[4*x] = Convert_Float_To_U8(r);
            piDstPixel[4*x+1] = Convert_Float_To_U8(g);
            piDstPixel[4*x+2] = Convert_Float_To_U8(b);
            piDstPixel[4*x+3] = Convert_AlphaFloat_To_U8(a);
        }
    }

    return WMP_errSuccess;
}

ERR Gray16Fixed_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[x] = Convert_Float_To_U8(piSrcPixel[x] * fltCvtFactor);
        }
    }

    return WMP_errSuccess;
}

ERR Gray32Fixed_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            piDstPixel[x] = Convert_Float_To_U8(piSrcPixel[x] * fltCvtFactor);
        }
    }

    return WMP_errSuccess;
}

ERR RGB48Fixed_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = Convert_Float_To_U8(piSrcPixel[3*x] * fltCvtFactor);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(piSrcPixel[3*x+1] * fltCvtFactor);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(piSrcPixel[3*x+2] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGB64Fixed_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = Convert_Float_To_U8(piSrcPixel[4*x] * fltCvtFactor);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(piSrcPixel[4*x+1] * fltCvtFactor);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(piSrcPixel[4*x+2] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGB96Fixed_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = Convert_Float_To_U8(piSrcPixel[3*x] * fltCvtFactor);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(piSrcPixel[3*x+1] * fltCvtFactor);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(piSrcPixel[3*x+2] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGB128Fixed_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[3*x] = Convert_Float_To_U8(piSrcPixel[4*x] * fltCvtFactor);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(piSrcPixel[4*x+1] * fltCvtFactor);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(piSrcPixel[4*x+2] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGBA64Fixed_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 13);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I16 *piSrcPixel = (I16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[4*x] = Convert_Float_To_U8(piSrcPixel[4*x] * fltCvtFactor);
            pfltDstPixel[4*x+1] = Convert_Float_To_U8(piSrcPixel[4*x+1] * fltCvtFactor);
            pfltDstPixel[4*x+2] = Convert_Float_To_U8(piSrcPixel[4*x+2] * fltCvtFactor);
            pfltDstPixel[4*x+3] = Convert_AlphaFloat_To_U8(piSrcPixel[4*x+3] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGBA128Fixed_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    const float fltCvtFactor = 1.0F / (1 << 24);
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const I32 *piSrcPixel = (I32*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            pfltDstPixel[4*x] = Convert_Float_To_U8(piSrcPixel[4*x] * fltCvtFactor);
            pfltDstPixel[4*x+1] = Convert_Float_To_U8(piSrcPixel[4*x+1] * fltCvtFactor);
            pfltDstPixel[4*x+2] = Convert_Float_To_U8(piSrcPixel[4*x+2] * fltCvtFactor);
            pfltDstPixel[4*x+3] = Convert_AlphaFloat_To_U8(piSrcPixel[4*x+3] * fltCvtFactor);
        }
    }
    
    return WMP_errSuccess;
}

ERR Gray16Half_Gray8(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U32 v = Convert_Half_To_Float(piSrcPixel[x]);
                
            piDstPixel[x] = Convert_Float_To_U8(*(float*)&v);
        }
    }

    return WMP_errSuccess;
}

ERR RGB48Half_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U32 r = Convert_Half_To_Float(piSrcPixel[3*x]);
            const U32 g = Convert_Half_To_Float(piSrcPixel[3*x+1]);
            const U32 b = Convert_Half_To_Float(piSrcPixel[3*x+2]);
        
            pfltDstPixel[3*x] = Convert_Float_To_U8(*(float*)&r);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(*(float*)&g);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(*(float*)&b);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGB64Half_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U32 r = Convert_Half_To_Float(piSrcPixel[4*x]);
            const U32 g = Convert_Half_To_Float(piSrcPixel[4*x+1]);
            const U32 b = Convert_Half_To_Float(piSrcPixel[4*x+2]);
        
            pfltDstPixel[3*x] = Convert_Float_To_U8(*(float*)&r);
            pfltDstPixel[3*x+1] = Convert_Float_To_U8(*(float*)&g);
            pfltDstPixel[3*x+2] = Convert_Float_To_U8(*(float*)&b);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGBA64Half_RGBA32(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *pfltDstPixel = (U8*)(pb + cbStride*y);
        const U16 *piSrcPixel = (U16*)pfltDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U32 r = Convert_Half_To_Float(piSrcPixel[4*x]);
            const U32 g = Convert_Half_To_Float(piSrcPixel[4*x+1]);
            const U32 b = Convert_Half_To_Float(piSrcPixel[4*x+2]);
            const U32 a = Convert_Half_To_Float(piSrcPixel[4*x+3]);
        
            pfltDstPixel[4*x] = Convert_Float_To_U8(*(float*)&r);
            pfltDstPixel[4*x+1] = Convert_Float_To_U8(*(float*)&g);
            pfltDstPixel[4*x+2] = Convert_Float_To_U8(*(float*)&b);
            pfltDstPixel[4*x+3] = Convert_AlphaFloat_To_U8(*(float*)&a);
        }
    }
    
    return WMP_errSuccess;
}

ERR RGB101010_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    const I32 iHeight = pRect->Height;
    const I32 iWidth = pRect->Width;
    I32 y;

    UNREFERENCED_PARAMETER( pFC );

    // Stride is assumed to be same for src/dst
    for (y = 0; y < iHeight; y++)
    {
        I32 x;
        U8 *piDstPixel = (U8*)(pb + cbStride*y);
        const U32 *piSrcPixel = (U32*)piDstPixel;

        for (x = 0; x < iWidth; x++)
        {
            const U32 v = piSrcPixel[x];
            const unsigned int r = ((v >> 20) & 0x3FF);
            const unsigned int g = ((v >> 10) & 0x3FF);
            const unsigned int b = (v & 0x3FF);

            piDstPixel[3*x] = (U8) (r >> 2);
            piDstPixel[3*x+1] = (U8) (g >> 2);
            piDstPixel[3*x+2] = (U8) (b >> 2);
        }
    }

    return WMP_errSuccess;
}

ERR RGBE_RGB24(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    I32 i = 0, j = 0;

    UNREFERENCED_PARAMETER( pFC );
   
    for (i = 0; i < pRect->Height; ++i)
    {
        for (j = 0; j < pRect->Width; j++)
        {
            // First read the exponent
            const U8 rawExp = pb[4*j+3];

            if (0 == rawExp)
            {
                pb[3*j] = 0;
                pb[3*j+1] = 0;
                pb[3*j+2] = 0;
            }
            else
            {
                const I32 adjExp = (I32)rawExp - 128 - 8; // Can be negative
                float fltExp;

                if (adjExp > -32 && adjExp < 32)
                {
                    fltExp = (float) (((U32)1) << abs(adjExp));
                    if (adjExp < 0)
                        fltExp = 1.0F / fltExp;
                }
                else
                {
                    fltExp = (float)ldexp(1.0F, adjExp);
                }

                pb[3*j] = Convert_Float_To_U8(pb[4*j] * fltExp);
                pb[3*j + 1] = Convert_Float_To_U8(pb[4*j + 1] * fltExp);
                pb[3*j + 2] = Convert_Float_To_U8(pb[4*j + 2] * fltExp);
            }
        }

        pb += cbStride;
    }

    return WMP_errSuccess;
}

//================================================================
typedef struct tagPKPixelConverterInfo
{
    const PKPixelFormatGUID* pGUIDPixFmtFrom;
    const PKPixelFormatGUID* pGUIDPixFmtTo;

    ERR (*Convert)(PKFormatConverter*, const PKRect*, U8*, U32);
} PKPixelConverterInfo;

static PKPixelConverterInfo s_pcInfo[] = {
    {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat24bppBGR, RGB24_BGR24}, // Fwd
    {&GUID_PKPixelFormat24bppBGR, &GUID_PKPixelFormat24bppRGB, BGR24_RGB24}, // Rev
    {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat32bppBGR, RGB24_BGR32}, // Fwd
    {&GUID_PKPixelFormat32bppBGR, &GUID_PKPixelFormat24bppRGB, BGR32_RGB24}, // Rev

    // The following are not to be exposed when building the Adobe Photoshop plugin
#ifndef ADOBE_PS_PLUGIN
    {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat8bppGray, RGB24_Gray8}, // Fwd
    {&GUID_PKPixelFormat8bppGray, &GUID_PKPixelFormat24bppRGB, Gray8_RGB24}, // Rev
    {&GUID_PKPixelFormat24bppBGR, &GUID_PKPixelFormat8bppGray, BGR24_Gray8}, // Fwd
    {&GUID_PKPixelFormat8bppGray, &GUID_PKPixelFormat24bppBGR, Gray8_BGR24}, // Rev
#endif // ADOBE_PS_PLUGIN

    {&GUID_PKPixelFormat128bppRGBAFixedPoint, &GUID_PKPixelFormat128bppRGBAFloat, RGBA128Fixed_RGBA128Float}, // Fwd
    {&GUID_PKPixelFormat128bppRGBAFloat, &GUID_PKPixelFormat128bppRGBAFixedPoint, RGBA128Float_RGBA128Fixed}, // Rev
    {&GUID_PKPixelFormat96bppRGBFixedPoint, &GUID_PKPixelFormat96bppRGBFloat, RGB96Fixed_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat96bppRGBFixedPoint, RGB96Float_RGB96Fixed}, // Rev
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat128bppRGBFloat, RGB96Float_RGB128Float}, // Fwd
    {&GUID_PKPixelFormat128bppRGBFloat, &GUID_PKPixelFormat96bppRGBFloat, RGB128Float_RGB96Float}, // Rev
    {&GUID_PKPixelFormat96bppRGBFixedPoint, &GUID_PKPixelFormat128bppRGBFixedPoint, RGB96Float_RGB128Float}, // Fwd
    {&GUID_PKPixelFormat128bppRGBFixedPoint, &GUID_PKPixelFormat96bppRGBFixedPoint, RGB128Float_RGB96Float}, // Rev
    {&GUID_PKPixelFormat64bppRGBHalf, &GUID_PKPixelFormat48bppRGBHalf, RGB64Half_RGB48Half}, // Fwd
    {&GUID_PKPixelFormat48bppRGBHalf, &GUID_PKPixelFormat64bppRGBHalf, RGB48Half_RGB64Half}, // Rev
    {&GUID_PKPixelFormat64bppRGBFixedPoint, &GUID_PKPixelFormat48bppRGBFixedPoint, RGB64Half_RGB48Half}, // Fwd
    {&GUID_PKPixelFormat48bppRGBFixedPoint, &GUID_PKPixelFormat64bppRGBFixedPoint, RGB48Half_RGB64Half}, // Rev
    {&GUID_PKPixelFormat32bppBGR, &GUID_PKPixelFormat24bppBGR, BGR32_BGR24}, // Fwd
    {&GUID_PKPixelFormat24bppBGR, &GUID_PKPixelFormat32bppBGR, BGR24_BGR32}, // Rev
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat128bppRGBFixedPoint, RGB96Float_RGB128Fixed}, // Fwd
    {&GUID_PKPixelFormat128bppRGBFixedPoint, &GUID_PKPixelFormat96bppRGBFloat, RGB128Fixed_RGB96Float}, // Rev
    {&GUID_PKPixelFormat32bppGrayFixedPoint, &GUID_PKPixelFormat32bppGrayFloat, Gray32Fixed_Gray32Float}, // Fwd
    {&GUID_PKPixelFormat32bppGrayFloat, &GUID_PKPixelFormat32bppGrayFixedPoint, Gray32Float_Gray32Fixed}, // Rev
    {&GUID_PKPixelFormat16bppGrayFixedPoint, &GUID_PKPixelFormat32bppGrayFloat, Gray16Fixed_Gray32Float}, // Fwd
    {&GUID_PKPixelFormat32bppGrayFloat, &GUID_PKPixelFormat16bppGrayFixedPoint, Gray32Float_Gray16Fixed}, // Rev
    {&GUID_PKPixelFormat48bppRGBFixedPoint, &GUID_PKPixelFormat96bppRGBFloat, RGB48Fixed_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat48bppRGBFixedPoint, RGB96Float_RGB48Fixed}, // Rev
    {&GUID_PKPixelFormat64bppRGBFixedPoint, &GUID_PKPixelFormat96bppRGBFloat, RGB64Fixed_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat64bppRGBFixedPoint, RGB96Float_RGB64Fixed}, // Rev
    {&GUID_PKPixelFormat64bppRGBAFixedPoint, &GUID_PKPixelFormat128bppRGBAFloat, RGBA64Fixed_RGBA128Float}, // Fwd
    {&GUID_PKPixelFormat128bppRGBAFloat, &GUID_PKPixelFormat64bppRGBAFixedPoint, RGBA128Float_RGBA64Fixed}, // Rev
    {&GUID_PKPixelFormat32bppRGBE, &GUID_PKPixelFormat96bppRGBFloat, RGBE_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat32bppRGBE, RGB96Float_RGBE}, // Rev
    {&GUID_PKPixelFormat64bppRGBAHalf, &GUID_PKPixelFormat128bppRGBAFloat, RGBA64Half_RGBA128Float}, // Fwd
    {&GUID_PKPixelFormat128bppRGBAFloat, &GUID_PKPixelFormat64bppRGBAHalf, RGBA128Float_RGBA64Half}, // Rev
    {&GUID_PKPixelFormat64bppRGBHalf, &GUID_PKPixelFormat96bppRGBFloat, RGB64Half_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat64bppRGBHalf, RGB96Float_RGB64Half}, // Rev
    {&GUID_PKPixelFormat48bppRGBHalf, &GUID_PKPixelFormat96bppRGBFloat, RGB48Half_RGB96Float}, // Fwd
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat48bppRGBHalf, RGB96Float_RGB48Half}, // Rev
    {&GUID_PKPixelFormat16bppGrayHalf, &GUID_PKPixelFormat32bppGrayFloat, Gray16Half_Gray32Float}, // Fwd
    {&GUID_PKPixelFormat32bppGrayFloat, &GUID_PKPixelFormat16bppGrayHalf, Gray32Float_Gray16Half}, // Rev
    {&GUID_PKPixelFormat16bppRGB555, &GUID_PKPixelFormat24bppRGB, RGB555_RGB24}, // Fwd
    {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat16bppRGB555, RGB24_RGB555}, // Rev
    {&GUID_PKPixelFormat16bppRGB565, &GUID_PKPixelFormat24bppRGB, RGB565_RGB24}, // Fwd
    {&GUID_PKPixelFormat24bppRGB, &GUID_PKPixelFormat16bppRGB565, RGB24_RGB565}, // Rev
    {&GUID_PKPixelFormat32bppRGB101010, &GUID_PKPixelFormat48bppRGB, RGB101010_RGB48}, // Fwd
    {&GUID_PKPixelFormat48bppRGB, &GUID_PKPixelFormat32bppRGB101010, RGB48_RGB101010}, // Rev
    {&GUID_PKPixelFormat32bppRGBA, &GUID_PKPixelFormat32bppBGRA, RGBA32_BGRA32}, // Fwd
    {&GUID_PKPixelFormat32bppBGRA, &GUID_PKPixelFormat32bppRGBA, BGRA32_RGBA32}, // Rev
    {&GUID_PKPixelFormat32bppPRGBA, &GUID_PKPixelFormat32bppPBGRA, RGBA32_BGRA32}, // Fwd
    {&GUID_PKPixelFormat32bppPBGRA, &GUID_PKPixelFormat32bppPRGBA, BGRA32_RGBA32}, // Rev

	// conversions to 8bppGray / 24bppRGB / 32bppRGBA
	{&GUID_PKPixelFormatBlackWhite, &GUID_PKPixelFormat8bppGray, BlackWhite_Gray8},
    {&GUID_PKPixelFormat16bppGray, &GUID_PKPixelFormat8bppGray, Gray16_Gray8},
    {&GUID_PKPixelFormat48bppRGB, &GUID_PKPixelFormat24bppRGB, RGB48_RGB24},
    {&GUID_PKPixelFormat64bppRGBA, &GUID_PKPixelFormat32bppRGBA, RGBA64_RGBA32},
    {&GUID_PKPixelFormat32bppGrayFloat, &GUID_PKPixelFormat8bppGray, Gray32Float_Gray8},     
    {&GUID_PKPixelFormat96bppRGBFloat, &GUID_PKPixelFormat24bppRGB, RGB96Float_RGB24},
    {&GUID_PKPixelFormat128bppRGBFloat, &GUID_PKPixelFormat24bppRGB, RGB128Float_RGB24},
    {&GUID_PKPixelFormat128bppRGBAFloat, &GUID_PKPixelFormat32bppRGBA, RGBA128Float_RGBA32},
    {&GUID_PKPixelFormat16bppGrayFixedPoint, &GUID_PKPixelFormat8bppGray, Gray16Fixed_Gray8}, 
    {&GUID_PKPixelFormat32bppGrayFixedPoint, &GUID_PKPixelFormat8bppGray, Gray32Fixed_Gray8},  
    {&GUID_PKPixelFormat48bppRGBFixedPoint, &GUID_PKPixelFormat24bppRGB, RGB48Fixed_RGB24},
    {&GUID_PKPixelFormat64bppRGBFixedPoint, &GUID_PKPixelFormat24bppRGB, RGB64Fixed_RGB24},
    {&GUID_PKPixelFormat96bppRGBFixedPoint, &GUID_PKPixelFormat24bppRGB, RGB96Fixed_RGB24},
    {&GUID_PKPixelFormat128bppRGBFixedPoint, &GUID_PKPixelFormat24bppRGB, RGB128Fixed_RGB24},   
    {&GUID_PKPixelFormat64bppRGBAFixedPoint, &GUID_PKPixelFormat32bppRGBA, RGBA64Fixed_RGBA32},
    {&GUID_PKPixelFormat128bppRGBAFixedPoint, &GUID_PKPixelFormat32bppRGBA, RGBA128Fixed_RGBA32},    
    {&GUID_PKPixelFormat16bppGrayHalf, &GUID_PKPixelFormat8bppGray, Gray16Half_Gray8},     
    {&GUID_PKPixelFormat48bppRGBHalf, &GUID_PKPixelFormat24bppRGB, RGB48Half_RGB24},
    {&GUID_PKPixelFormat64bppRGBHalf, &GUID_PKPixelFormat24bppRGB, RGB64Half_RGB24},
    {&GUID_PKPixelFormat64bppRGBAHalf, &GUID_PKPixelFormat32bppRGBA, RGBA64Half_RGBA32},
    {&GUID_PKPixelFormat32bppRGB101010, &GUID_PKPixelFormat24bppRGB, RGB101010_RGB24},    
    {&GUID_PKPixelFormat32bppRGBE, &GUID_PKPixelFormat24bppRGB, RGBE_RGB24}
};

/* auxiliary data structure and hack to support valid encoding from/to configurations that 
// don't actually require any color conversion. This is a conservative approach, where we
// include as few formats as necessary to encode situations that we're currently aware of.
*/
typedef struct tagPKPixelConverter2Info
{
    const PKPixelFormatGUID* pGUIDPixFmtFrom;
    const PKPixelFormatGUID* pGUIDPixFmtTo;

} PKPixelConverter2Info;

static PKPixelConverter2Info s_pcInfo2[] = {
	// This allows us to view an RGBA input file as RGB, for when we create a planar alpha file
	{&GUID_PKPixelFormat128bppRGBFloat, &GUID_PKPixelFormat128bppRGBAFloat},
	// 16- and 32-bpp RGB input files are given the "DontCare" GUID, so the next three 
	// from/to combinations are ok, and allowed on encoding: 
	{&GUID_PKPixelFormatDontCare, &GUID_PKPixelFormat16bppRGB555},
	{&GUID_PKPixelFormatDontCare, &GUID_PKPixelFormat16bppRGB565},
	{&GUID_PKPixelFormatDontCare, &GUID_PKPixelFormat32bppBGRA}
};

ERR PKFormatConverter_Initialize(PKFormatConverter* pFC, PKImageDecode* pID, char *pExt, PKPixelFormatGUID enPF)
{
    ERR err;
    PKPixelFormatGUID   enPFFrom;

    Call(pID->GetPixelFormat(pID, &enPFFrom));
    Call(PKFormatConverter_InitializeConvert(pFC, enPFFrom, pExt, enPF));

    pFC->pDecoder = pID;

Cleanup:
    return err;
}


extern int PKStrnicmp(const char* s1, const char* s2, size_t c);

ERR PKFormatConverter_InitializeConvert(PKFormatConverter* pFC, const PKPixelFormatGUID enPFFrom,
                                        char *pExt, PKPixelFormatGUID enPFTo)
{
    ERR err = WMP_errSuccess;

    //================================
    pFC->enPixelFormat = enPFTo;

    if (pExt != NULL && IsEqualGUID(&enPFTo, &GUID_PKPixelFormat24bppRGB) &&
        0 == PKStrnicmp(pExt, ".bmp", strlen(pExt)))
        enPFTo = GUID_PKPixelFormat24bppBGR;
    if (pExt != NULL && (0 == PKStrnicmp(pExt, ".tif", strlen(pExt)) || 0 == PKStrnicmp(pExt, ".tiff", strlen(pExt))))
    {
        if (IsEqualGUID(&enPFTo, &GUID_PKPixelFormat32bppBGRA))
            enPFTo = GUID_PKPixelFormat32bppRGBA;
        if (IsEqualGUID(&enPFTo, &GUID_PKPixelFormat32bppPBGRA))
            enPFTo = GUID_PKPixelFormat32bppPRGBA;
    }

    //================================
    if (!IsEqualGUID(&enPFFrom, &enPFTo))
    {
        size_t i = 0;
        for (i = 0; i < sizeof2(s_pcInfo); ++i)
        {
            PKPixelConverterInfo* pPCI = s_pcInfo + i;

            if (IsEqualGUID(&enPFFrom, pPCI->pGUIDPixFmtFrom) && IsEqualGUID(&enPFTo, pPCI->pGUIDPixFmtTo))
            {
                pFC->Convert= pPCI->Convert;
                goto Cleanup;
            }
        }
        // Bugfix to allow legitimate encoding from/to combinations that don't actually 
        // involve color conversions. 
        for (i = 0; i < sizeof2(s_pcInfo2); ++i)
        {
            PKPixelConverter2Info* pPCI = s_pcInfo2 + i;

            if (IsEqualGUID(&enPFFrom, pPCI->pGUIDPixFmtFrom) && IsEqualGUID(&enPFTo, pPCI->pGUIDPixFmtTo))
            {
                goto Cleanup;
            }
        }
        // If we failed the original check, and this bugfix check, then exit with error
        Call(WMP_errUnsupportedFormat);
    }

Cleanup:
    return err;
}

ERR PKFormatConverter_EnumConversions(const PKPixelFormatGUID *pguidSourcePF,
                                      const U32 iIndex,
                                      const PKPixelFormatGUID **ppguidTargetPF)
{
    U32 iCurrIdx = 0;
    U32 i;
    ERR errResult = WMP_errIndexNotFound;

    *ppguidTargetPF = &GUID_PKPixelFormatDontCare; // Init return value
    for (i = 0; i < sizeof2(s_pcInfo); i++)
    {
        if (IsEqualGUID(s_pcInfo[i].pGUIDPixFmtFrom, pguidSourcePF))
        {
            if (iCurrIdx == iIndex)
            {
                // Found our target
                errResult = WMP_errSuccess;
                *ppguidTargetPF = s_pcInfo[i].pGUIDPixFmtTo;
                break;
            }
            iCurrIdx += 1;
        }
    }

    return errResult;
}

ERR PKFormatConverter_GetPixelFormat(PKFormatConverter* pFC, PKPixelFormatGUID* pPF)
{
    *pPF = pFC->enPixelFormat;

    return WMP_errSuccess;
}

ERR PKFormatConverter_GetSourcePixelFormat(PKFormatConverter* pFC, PKPixelFormatGUID* pPF)
{
    return pFC->pDecoder->GetPixelFormat(pFC->pDecoder, pPF);
}

ERR PKFormatConverter_GetSize(PKFormatConverter* pFC, I32* piWidth, I32* piHeight)
{
    return pFC->pDecoder->GetSize(pFC->pDecoder, piWidth, piHeight);
}

ERR PKFormatConverter_GetResolution(PKFormatConverter* pFC, Float* pfrX, Float* pfrY)
{
    return pFC->pDecoder->GetResolution(pFC->pDecoder, pfrX, pfrY);
}

ERR PKFormatConverter_Copy(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    ERR err = WMP_errSuccess;

    Call(pFC->pDecoder->Copy(pFC->pDecoder, pRect, pb, cbStride));
    Call(pFC->Convert(pFC, pRect, pb, cbStride));

Cleanup:
    return err;
}

ERR PKFormatConverter_Convert(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride)
{
    UNREFERENCED_PARAMETER( pFC );
    UNREFERENCED_PARAMETER( pRect );
    UNREFERENCED_PARAMETER( pb );
    UNREFERENCED_PARAMETER( cbStride );

    return WMP_errSuccess;
}

ERR PKFormatConverter_Release(PKFormatConverter** ppFC)
{
    ERR err = WMP_errSuccess;

    Call(PKFree((void **) ppFC));

Cleanup:
    return err;
}

