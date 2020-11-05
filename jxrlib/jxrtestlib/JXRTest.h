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
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include <JXRGlue.h>

EXTERN_C const PKIID IID_PKImageBmpEncode;
EXTERN_C const PKIID IID_PKImagePnmEncode;
EXTERN_C const PKIID IID_PKImageTifEncode;

EXTERN_C const PKIID IID_PKImageBmpDecode;
EXTERN_C const PKIID IID_PKImagePnmDecode;
EXTERN_C const PKIID IID_PKImageTifDecode;

//----------------------------------------------------------------
ERR GetTestEncodeIID(const char* szExt, const PKIID** ppIID);
ERR GetTestDecodeIID(const char* szExt, const PKIID** ppIID);

//================================================================
#ifdef __ANSI__
#define PKTestDecode struct tagPKTestDecode
#else // __ANSI__
typedef struct tagPKTestDecode PKTestDecode;
#endif // __ANSI__
//================================================================

//----------------------------------------------------------------
ERR PKTestFactory_CreateCodec(const PKIID* iid, void** ppv);

EXTERN_C ERR PKCreateTestFactory(PKCodecFactory**, U32);

//----------------------------------------------------------------
ERR PKImageEncode_Create_BMP(PKImageEncode** ppIE);
ERR PKImageEncode_Create_PNM(PKImageEncode** ppIE);
ERR PKImageEncode_Create_TIF(PKImageEncode** ppIE);
ERR PKImageEncode_Create_HDR(PKImageEncode** ppIE);
ERR PKImageEncode_Create_IYUV(PKImageEncode** ppIE);
ERR PKImageEncode_Create_YUV422(PKImageEncode** ppIE);
ERR PKImageEncode_Create_YUV444(PKImageEncode** ppIE);

//================================================================
typedef struct tagPKTestDecode
{
    ERR (*Initialize)(PKTestDecode*, struct WMPStream* pStream);

    ERR (*GetPixelFormat)(PKImageDecode*, PKPixelFormatGUID*);
    ERR (*GetSize)(PKImageDecode*, I32*, I32*);
    ERR (*GetResolution)(PKImageDecode*, Float*, Float*);
    ERR (*GetColorContext)(PKImageDecode *pID, U8 *pbColorContext,
        U32 *pcbColorContext);
    ERR (*GetDescriptiveMetadata)(PKImageDecode *pIE,
        DESCRIPTIVEMETADATA *pDescMetadata);

    ERR (*GetRawStream)(PKImageDecode*, struct WMPStream**);

    ERR (*Copy)(PKTestDecode*, const PKRect*, U8*, U32);

    ERR (*GetFrameCount)(PKImageDecode*, U32*);
    ERR (*SelectFrame)(PKImageDecode*, U32);

    ERR (*Release)(PKTestDecode**);

    struct WMPStream* pStream;
    Bool fStreamOwner;
    size_t offStart;
    
    PKPixelFormatGUID guidPixFormat;

    U32 uWidth;
    U32 uHeight;
    U32 idxCurrentLine;

    Float fResX;
    Float fResY;

    U32 cFrame;

    union
    {
        struct
        {
            size_t offPixel;
            size_t cbPixel;
        } BMP;
        struct
        {
            size_t offPixel;
            size_t cbPixel;
        } HDR;
        struct
        {
            size_t offPixel;
        } PNM;
        struct
        {
            U32 uRowsPerStrip;
            U32* uStripOffsets;
            U32* uStripByteCounts;

            U32 uInterpretation;
            U32 uSamplePerPixel;
            U32 uBitsPerSample;
            U32 uSampleFormat;
            U32 uExtraSamples;

            U16 uResolutionUnit;
            Float fResX;
            Float fResY;
            Bool fLittleEndian;
        } TIF;
    } EXT;
#ifdef __ANSI__
#undef PKTestDecode
#endif // __ANSI__
} PKTestDecode;

//----------------------------------------------------------------
ERR PKImageDecode_Create_BMP(PKTestDecode** ppID);
ERR PKImageDecode_Create_PNM(PKTestDecode** ppID);
ERR PKImageDecode_Create_TIF(PKTestDecode** ppID);
ERR PKImageDecode_Create_HDR(PKTestDecode** ppID);
ERR PKImageDecode_Create_IYUV(PKTestDecode** ppID);
ERR PKImageDecode_Create_YUV422(PKTestDecode** ppID);
ERR PKImageDecode_Create_YUV444(PKTestDecode** ppID);

ERR PKTestDecode_Initialize(PKTestDecode* pID, struct WMPStream* pStream);
ERR PKTestDecode_Copy(PKTestDecode* pID, const PKRect* pRect, U8* pb, U32 cbStride);
ERR PKTestDecode_Release(PKTestDecode** ppID);

ERR PKTestDecode_Create(PKTestDecode** ppID);

#ifdef __cplusplus
} // extern "C"
#endif

