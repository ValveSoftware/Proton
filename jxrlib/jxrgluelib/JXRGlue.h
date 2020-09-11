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

#include <JXRMeta.h>
#include <guiddef.h>

//================================================================
#define WMP_SDK_VERSION 0x0101
#define PK_SDK_VERSION 0x0101

#define sizeof2(array) (sizeof(array)/sizeof(*(array)))
#ifndef max
#define max(a,b) ((a) > (b) ? (a) : (b))
#endif
#ifndef min
#define min(b,a) ((a) < (b) ? (a) : (b))
#endif
#ifdef __ANSI__
#define STRCPY_SAFE(pszDest, cbDest, pszSrc)    (strncpy((pszDest), (pszSrc), (cbDest)) == (pszDest) ? 0 : 1)
#else
#define STRCPY_SAFE(pszDest, cbDest, pszSrc)    (strcpy_s((pszDest), (cbDest), (pszSrc)))
#endif // __ANSI__

//================================================================
typedef struct tagPKRect
{
    I32 X;
    I32 Y;
    I32 Width;
    I32 Height;
} PKRect;

//================================================================
typedef U32 PKIID;

EXTERN_C const PKIID IID_PKImageScanEncode;
EXTERN_C const PKIID IID_PKImageFrameEncode;

EXTERN_C const PKIID IID_PKImageWmpEncode;

EXTERN_C const PKIID IID_PKImageWmpDecode;

struct IFDEntry
{
    U16 uTag;
    U16 uType;
    U32 uCount;
    U32 uValue;
};
EXTERN_C const U32 IFDEntryTypeSizes[13];
EXTERN_C const U32 SizeofIFDEntry;

//================================================================
typedef float Float;

typedef enum tagPKStreamFlags
{
    PKStreamOpenRead = 0x00000000UL,
    PKStreamOpenWrite = 0x00000001UL,
    PKStreamOpenReadWrite = 0x00000002UL,
    PKStreamNoLock = 0x00010000UL,
    PKStreamNoSeek = 0x00020000UL,
    PKStreamCompress = 0x00040000UL,
} PKStreamFlags;

/* Undefined formats */
#define GUID_PKPixelFormatUndefined GUID_PKPixelFormatDontCare

DEFINE_GUID(GUID_PKPixelFormatDontCare, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x00);

/* Indexed formats */
//DEFINE_GUID(GUID_PKPixelFormat1bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x01);
//DEFINE_GUID(GUID_PKPixelFormat2bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x02);
//DEFINE_GUID(GUID_PKPixelFormat4bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x03);
//DEFINE_GUID(GUID_PKPixelFormat8bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x04);

DEFINE_GUID(GUID_PKPixelFormatBlackWhite, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x05);
//DEFINE_GUID(GUID_PKPixelFormat2bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x06);
//DEFINE_GUID(GUID_PKPixelFormat4bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x07);
DEFINE_GUID(GUID_PKPixelFormat8bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x08);

/* sRGB formats (gamma is approx. 2.2) */
/* For a full definition, see the sRGB spec */

/* 16bpp formats */
DEFINE_GUID(GUID_PKPixelFormat16bppRGB555, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x09);
DEFINE_GUID(GUID_PKPixelFormat16bppRGB565, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0a);
DEFINE_GUID(GUID_PKPixelFormat16bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0b);

/* 24bpp formats */
DEFINE_GUID(GUID_PKPixelFormat24bppBGR, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0c);
DEFINE_GUID(GUID_PKPixelFormat24bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0d);

/* 32bpp format */
DEFINE_GUID(GUID_PKPixelFormat32bppBGR,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0e);
DEFINE_GUID(GUID_PKPixelFormat32bppBGRA,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0f);
DEFINE_GUID(GUID_PKPixelFormat32bppPBGRA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x10);
DEFINE_GUID(GUID_PKPixelFormat32bppGrayFloat,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x11);
DEFINE_GUID(GUID_PKPixelFormat32bppRGB,   0xd98c6b95, 0x3efe, 0x47d6, 0xbb, 0x25, 0xeb, 0x17, 0x48, 0xab, 0x0c, 0xf1);
DEFINE_GUID(GUID_PKPixelFormat32bppRGBA,  0xf5c7ad2d, 0x6a8d, 0x43dd, 0xa7, 0xa8, 0xa2, 0x99, 0x35, 0x26, 0x1a, 0xe9);
DEFINE_GUID(GUID_PKPixelFormat32bppPRGBA, 0x3cc4a650, 0xa527, 0x4d37, 0xa9, 0x16, 0x31, 0x42, 0xc7, 0xeb, 0xed, 0xba);

/* 48bpp format */
DEFINE_GUID(GUID_PKPixelFormat48bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x12);

/* scRGB formats. Gamma is 1.0 */
/* For a full definition, see the scRGB spec */

/* 16bpp format */
DEFINE_GUID(GUID_PKPixelFormat16bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x13);

/* 32bpp format */
DEFINE_GUID(GUID_PKPixelFormat32bppRGB101010, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x14);

/* 48bpp format */
DEFINE_GUID(GUID_PKPixelFormat48bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x15);

/* 64bpp format */
DEFINE_GUID(GUID_PKPixelFormat64bppRGBA,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x16);
DEFINE_GUID(GUID_PKPixelFormat64bppPRGBA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x17);

/* 96bpp format */
DEFINE_GUID(GUID_PKPixelFormat96bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x18);
DEFINE_GUID(GUID_PKPixelFormat96bppRGBFloat, 0xe3fed78f, 0xe8db, 0x4acf, 0x84, 0xc1, 0xe9, 0x7f, 0x61, 0x36, 0xb3, 0x27);

 /* Floating point scRGB formats */
DEFINE_GUID(GUID_PKPixelFormat128bppRGBAFloat,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x19);
DEFINE_GUID(GUID_PKPixelFormat128bppPRGBAFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1a);
DEFINE_GUID(GUID_PKPixelFormat128bppRGBFloat,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1b);

 /* CMYK formats. */
DEFINE_GUID(GUID_PKPixelFormat32bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1c);

 /* Photon formats */
DEFINE_GUID(GUID_PKPixelFormat64bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1d);
DEFINE_GUID(GUID_PKPixelFormat64bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x40);
DEFINE_GUID(GUID_PKPixelFormat128bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1e);
DEFINE_GUID(GUID_PKPixelFormat128bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x41);

DEFINE_GUID(GUID_PKPixelFormat64bppRGBAHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3a);
DEFINE_GUID(GUID_PKPixelFormat64bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x42);
DEFINE_GUID(GUID_PKPixelFormat48bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3b);

DEFINE_GUID(GUID_PKPixelFormat32bppRGBE, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3d);

DEFINE_GUID(GUID_PKPixelFormat16bppGrayHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3e);
DEFINE_GUID(GUID_PKPixelFormat32bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3f);


/* More CMYK formats and n-Channel formats */
DEFINE_GUID(GUID_PKPixelFormat64bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1f);

DEFINE_GUID(GUID_PKPixelFormat24bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x20);
DEFINE_GUID(GUID_PKPixelFormat32bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x21);
DEFINE_GUID(GUID_PKPixelFormat40bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x22);
DEFINE_GUID(GUID_PKPixelFormat48bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x23);
DEFINE_GUID(GUID_PKPixelFormat56bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x24);
DEFINE_GUID(GUID_PKPixelFormat64bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x25);

DEFINE_GUID(GUID_PKPixelFormat48bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x26);
DEFINE_GUID(GUID_PKPixelFormat64bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x27);
DEFINE_GUID(GUID_PKPixelFormat80bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x28);
DEFINE_GUID(GUID_PKPixelFormat96bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x29);
DEFINE_GUID(GUID_PKPixelFormat112bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2a);
DEFINE_GUID(GUID_PKPixelFormat128bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2b);

DEFINE_GUID(GUID_PKPixelFormat40bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2c);
DEFINE_GUID(GUID_PKPixelFormat80bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2d);

DEFINE_GUID(GUID_PKPixelFormat32bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2e);
DEFINE_GUID(GUID_PKPixelFormat40bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2f);
DEFINE_GUID(GUID_PKPixelFormat48bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x30);
DEFINE_GUID(GUID_PKPixelFormat56bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x31);
DEFINE_GUID(GUID_PKPixelFormat64bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x32);
DEFINE_GUID(GUID_PKPixelFormat72bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x33);

DEFINE_GUID(GUID_PKPixelFormat64bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x34);
DEFINE_GUID(GUID_PKPixelFormat80bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x35);
DEFINE_GUID(GUID_PKPixelFormat96bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x36);
DEFINE_GUID(GUID_PKPixelFormat112bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x37);
DEFINE_GUID(GUID_PKPixelFormat128bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x38);
DEFINE_GUID(GUID_PKPixelFormat144bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x39);

/* YCrCb  from Advanced Profile */
DEFINE_GUID(GUID_PKPixelFormat12bppYCC420, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x44);
DEFINE_GUID(GUID_PKPixelFormat16bppYCC422, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x45);
DEFINE_GUID(GUID_PKPixelFormat20bppYCC422, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x46);
DEFINE_GUID(GUID_PKPixelFormat32bppYCC422, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x47);
DEFINE_GUID(GUID_PKPixelFormat24bppYCC444, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x48);
DEFINE_GUID(GUID_PKPixelFormat30bppYCC444, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x49);
DEFINE_GUID(GUID_PKPixelFormat48bppYCC444, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4a);
DEFINE_GUID(GUID_PKPixelFormat16bpp48bppYCC444FixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4b);
DEFINE_GUID(GUID_PKPixelFormat20bppYCC420Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4c);
DEFINE_GUID(GUID_PKPixelFormat24bppYCC422Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4d);
DEFINE_GUID(GUID_PKPixelFormat30bppYCC422Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4e);
DEFINE_GUID(GUID_PKPixelFormat48bppYCC422Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x4f);
DEFINE_GUID(GUID_PKPixelFormat32bppYCC444Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x50);
DEFINE_GUID(GUID_PKPixelFormat40bppYCC444Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x51);
DEFINE_GUID(GUID_PKPixelFormat64bppYCC444Alpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x52);
DEFINE_GUID(GUID_PKPixelFormat64bppYCC444AlphaFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x53);

//YUV
#define GUID_PKPixelFormat12bppYUV420 GUID_PKPixelFormat12bppYCC420
#define GUID_PKPixelFormat16bppYUV422 GUID_PKPixelFormat16bppYCC422
#define GUID_PKPixelFormat24bppYUV444 GUID_PKPixelFormat24bppYCC444

/* CMYKDIRECT from Advanced Profile */
DEFINE_GUID(GUID_PKPixelFormat32bppCMYKDIRECT, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x54);
DEFINE_GUID(GUID_PKPixelFormat64bppCMYKDIRECT, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x55);
DEFINE_GUID(GUID_PKPixelFormat40bppCMYKDIRECTAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x56);
DEFINE_GUID(GUID_PKPixelFormat80bppCMYKDIRECTAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x43);

// PhotometricInterpretation
#define PK_PI_W0 0 // WhiteIsZero
#define PK_PI_B0 1 // BlackIsZero
#define PK_PI_RGB 2
#define PK_PI_RGBPalette 3
#define PK_PI_TransparencyMask 4
#define PK_PI_CMYK 5
#define PK_PI_YCbCr 6
#define PK_PI_CIELab 8

#define PK_PI_NCH  100
#define PK_PI_RGBE 101

#define PK_pixfmtNul           0x00000000
#define PK_pixfmtHasAlpha      0x00000010
#define PK_pixfmtPreMul        0x00000020
#define PK_pixfmtBGR           0x00000040
#define PK_pixfmtNeedConvert   0x80000000

#define LOOKUP_FORWARD         0
#define LOOKUP_BACKWARD_TIF    1

typedef unsigned long WMP_GRBIT;
typedef GUID PKPixelFormatGUID;

typedef struct tagPKPixelInfo
{
    const PKPixelFormatGUID* pGUIDPixFmt;

    size_t cChannel;
    COLORFORMAT cfColorFormat;
    BITDEPTH_BITS bdBitDepth;
    U32 cbitUnit;
    
    WMP_GRBIT grBit;

    // TIFF
    U32 uInterpretation;
    U32 uSamplePerPixel;
    U32 uBitsPerSample;
    U32 uSampleFormat;
} PKPixelInfo;

//================================================================
ERR PKAlloc(void** ppv, size_t cb);
ERR PKFree(void** ppv);

//----------------------------------------------------------------
//ERR GetPixelInfo(PKPixelFormatGUID enPixelFormat, const PKPixelInfo** ppPI);
ERR PixelFormatLookup(PKPixelInfo* pPI, U8 uLookupType);
const PKPixelFormatGUID* GetPixelFormatFromHash(const U8 uPFHash);

ERR GetImageEncodeIID(const char* szExt, const PKIID** ppIID);
ERR GetImageDecodeIID(const char* szExt, const PKIID** ppIID);


//================================================================
#ifdef __ANSI__
struct tagPKFactory;
struct tagPKCodecFactory;
struct tagPKImageDecode;
struct tagPKImageEncode;
struct tagPKFormatConverter;
#define PKFactory           struct tagPKFactory
#define PKCodecFactory      struct tagPKCodecFactory
#define PKImageDecode       struct tagPKImageDecode
#define PKImageEncode       struct tagPKImageEncode
#define PKFormatConverter   struct tagPKFormatConverter
#else // __ANSI__
typedef struct tagPKFactory PKFactory;
typedef struct tagPKCodecFactory PKCodecFactory;
typedef struct tagPKImageDecode PKImageDecode;
typedef struct tagPKImageEncode PKImageEncode;
typedef struct tagPKFormatConverter PKFormatConverter;
#endif // __ANSI__
//================================================================
typedef struct tagPKStream
{
    ERR (*InitializeFromFilename)(const char*, ULong);

    ERR (*Release)(void);

    FILE* fp;
} PKStream;


//================================================================
typedef struct tagPKFactory
{
    ERR (*CreateStream)(PKStream**);

    ERR (*CreateStreamFromFilename)(struct WMPStream**, const char*, const char*);
    ERR (*CreateStreamFromMemory)(struct WMPStream**, void*, size_t);

    ERR (*Release)(PKFactory**);
#ifdef __ANSI__
#undef PKFactory
#endif // __ANSI__
} PKFactory;

//----------------------------------------------------------------
ERR PKCreateFactory_CreateStream(PKStream** ppStream);
ERR PKCreateFactory_Release(PKFactory** ppFactory);

EXTERN_C ERR PKCreateFactory(PKFactory**, U32);


//================================================================
typedef struct tagPKCodecFactory
{
    ERR (*CreateCodec)(const PKIID*, void**);
    ERR (*CreateDecoderFromFile)(const char*, PKImageDecode**);
    ERR (*CreateFormatConverter)(PKFormatConverter**);

    ERR (*Release)(PKCodecFactory**);
#ifdef __ANSI__
#undef PKCodecFactory
#endif // __ANSI__
} PKCodecFactory;

//----------------------------------------------------------------
ERR PKCodecFactory_CreateCodec(const PKIID* iid, void** ppv);
ERR PKCreateCodecFactory_Release(PKCodecFactory** ppCFactory);

EXTERN_C ERR PKCreateCodecFactory(PKCodecFactory**, U32);

//================================================================

typedef enum BANDEDENCSTATE
{
    BANDEDENCSTATE_UNINITIALIZED = 0,
    BANDEDENCSTATE_INIT,
    BANDEDENCSTATE_ENCODING,
    BANDEDENCSTATE_TERMINATED,
    BANDEDENCSTATE_NONBANDEDENCODE,
} BANDEDENCSTATE;

typedef struct tagPKImageEncode
{
    //ERR (*GetPixelFormat)(MILPixelFormat*));
    ERR (*Initialize)(PKImageEncode*, struct WMPStream*, void*, size_t);
    ERR (*Terminate)(PKImageEncode*);

    ERR (*SetPixelFormat)(PKImageEncode*, PKPixelFormatGUID);
    ERR (*SetSize)(PKImageEncode*, I32, I32);
    ERR (*SetResolution)(PKImageEncode*, Float, Float);
    ERR (*SetColorContext)(PKImageEncode *pIE, const U8 *pbColorContext,
        U32 cbColorContext);
    ERR (*SetDescriptiveMetadata)(PKImageEncode *pIE,
        const DESCRIPTIVEMETADATA *pDescMetadata);

    ERR (*WritePixels)(PKImageEncode*, U32, U8*, U32);
    ERR (*WriteSource)(PKImageEncode*, PKFormatConverter*, PKRect*);

    // Banded encode API - currently only implemented for WMP encoder
    ERR (*WritePixelsBandedBegin)(PKImageEncode* pEncoder, struct WMPStream *pPlanarAlphaTempFile);
    ERR (*WritePixelsBanded)(PKImageEncode* pEncoder, U32 cLines, U8* pbPixels, U32 cbStride, Bool fLastCall);
    ERR (*WritePixelsBandedEnd)(PKImageEncode* pEncoder);
#define TEMPFILE_COPYBUF_SIZE 8192  // Means when using tempfile for planar alpha banded encode, copy this many bytes at a time

    ERR (*Transcode)(PKImageEncode*, PKImageDecode*, CWMTranscodingParam*);

    ERR (*CreateNewFrame)(PKImageEncode*, void*, size_t);

    ERR (*Release)(PKImageEncode**);

    struct WMPStream* pStream;
    size_t offStart;

    PKPixelFormatGUID guidPixFormat;

    U32 uWidth;
    U32 uHeight;
    U32 idxCurrentLine;

    Float fResX;
    Float fResY;

    U32 cFrame;

    Bool fHeaderDone;
    size_t offPixel;
    size_t cbPixel;
    U8 *pbColorContext;
    U32 cbColorContext;
    U8 *pbEXIFMetadata;
    U32 cbEXIFMetadataByteCount;
    U8 *pbGPSInfoMetadata;
    U32 cbGPSInfoMetadataByteCount;
    U8 *pbIPTCNAAMetadata;
    U32 cbIPTCNAAMetadataByteCount;
    U8 *pbXMPMetadata;
    U32 cbXMPMetadataByteCount;
    U8 *pbPhotoshopMetadata;
    U32 cbPhotoshopMetadataByteCount;
    DESCRIPTIVEMETADATA sDescMetadata;

	Bool bWMP;//for the encoder in decoding

    struct
    {
        WmpDEMisc wmiDEMisc;
        CWMImageInfo wmiI;
        CWMIStrCodecParam wmiSCP;
        CTXSTRCODEC ctxSC;
        CWMImageInfo wmiI_Alpha;
        CWMIStrCodecParam wmiSCP_Alpha;
        CTXSTRCODEC ctxSC_Alpha;

        Bool bHasAlpha;
        Long nOffImage;
        Long nCbImage;
        Long nOffAlpha;
        Long nCbAlpha;

        ORIENTATION oOrientation;

        // Banded encode state variables
        BANDEDENCSTATE      eBandedEncState;
        struct WMPStream   *pPATempFile;
    } WMP;

#ifdef __ANSI__
#undef PKImageEncode
#endif // __ANSI__
} PKImageEncode;

//----------------------------------------------------------------
ERR PKImageEncode_Create_WMP(PKImageEncode** ppIE);

ERR PKImageEncode_Initialize(PKImageEncode* pIE, struct WMPStream* pStream, void* pvParam, size_t cbParam);
ERR PKImageEncode_Terminate(PKImageEncode* pIE);
ERR PKImageEncode_SetPixelFormat(PKImageEncode* pIE, PKPixelFormatGUID enPixelFormat);
ERR PKImageEncode_SetSize(PKImageEncode* pIE, I32 iWidth, I32 iHeight);
ERR PKImageEncode_SetResolution(PKImageEncode* pIE, Float rX, Float rY);
ERR PKImageEncode_SetColorContext(PKImageEncode *pIE, const U8 *pbColorContext, U32 cbColorContext);
ERR PKImageEncode_SetDescriptiveMetadata(PKImageEncode *pIE, const DESCRIPTIVEMETADATA *pDescMetadata);
ERR PKImageEncode_WritePixels(PKImageEncode* pIE, U32 cLine, U8* pbPixel, U32 cbStride);
ERR PKImageEncode_CreateNewFrame(PKImageEncode* pIE, void* pvParam, size_t cbParam);
ERR PKImageEncode_Release(PKImageEncode** ppIE);

ERR PKImageEncode_SetXMPMetadata_WMP(PKImageEncode *pIE, const U8 *pbXMPMetadata, U32 cbXMPMetadata);
ERR PKImageEncode_SetEXIFMetadata_WMP(PKImageEncode *pIE, const U8 *pbEXIFMetadata, U32 cbEXIFMetadata);
ERR PKImageEncode_SetGPSInfoMetadata_WMP(PKImageEncode *pIE, const U8 *pbGPSInfoMetadata, U32 cbGPSInfoMetadata);
ERR PKImageEncode_SetIPTCNAAMetadata_WMP(PKImageEncode *pIE, const U8 *pbIPTCNAAMetadata, U32 cbIPTCNAAMetadata);
ERR PKImageEncode_SetPhotoshopMetadata_WMP(PKImageEncode *pIE, const U8 *pbPhotoshopMetadata, U32 cbPhotoshopMetadata);

void FreeDescMetadata(DPKPROPVARIANT *pvar);

ERR PKImageEncode_Create(PKImageEncode** ppIE);

//================================================================
typedef struct tagPKImageDecode
{
    ERR (*Initialize)(PKImageDecode*, struct WMPStream* pStream);

    ERR (*GetPixelFormat)(PKImageDecode*, PKPixelFormatGUID*);
    ERR (*GetSize)(PKImageDecode*, I32*, I32*);
    ERR (*GetResolution)(PKImageDecode*, Float*, Float*);
    ERR (*GetColorContext)(PKImageDecode *pID, U8 *pbColorContext,
        U32 *pcbColorContext);
    ERR (*GetDescriptiveMetadata)(PKImageDecode *pIE,
        DESCRIPTIVEMETADATA *pDescMetadata);

    ERR (*GetRawStream)(PKImageDecode*, struct WMPStream**);

    ERR (*Copy)(PKImageDecode*, const PKRect*, U8*, U32);

    ERR (*GetFrameCount)(PKImageDecode*, U32*);
    ERR (*SelectFrame)(PKImageDecode*, U32);

    ERR (*Release)(PKImageDecode**);

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

    struct
    {
        WmpDEMisc wmiDEMisc;
        CWMImageInfo wmiI;
        CWMIStrCodecParam wmiSCP;
        CTXSTRCODEC ctxSC;
        CWMImageInfo wmiI_Alpha;
        CWMIStrCodecParam wmiSCP_Alpha;
        CTXSTRCODEC ctxSC_Alpha;

        Bool bHasAlpha;
        Long nOffImage;
        Long nCbImage;
        Long nOffAlpha;
        Long nCbAlpha;
        Bool bIgnoreOverlap;
        size_t DecoderCurrMBRow;
        size_t DecoderCurrAlphaMBRow;
        size_t cMarker;
        size_t cLinesDecoded;
        size_t cLinesCropped; // Lines may be cropped from the top - buffer for subsequent decodes must be adjusted
        Bool fFirstNonZeroDecode;

        Bool fOrientationFromContainer;
        ORIENTATION oOrientationFromContainer; // Tag 0xBC02 in HD Photo container
            
        DESCRIPTIVEMETADATA sDescMetadata;
    } WMP;

#ifdef __ANSI__
#undef PKImageDecode
#endif // __ANSI__
} PKImageDecode;

//----------------------------------------------------------------
ERR PKImageDecode_Create_WMP(PKImageDecode** ppID);

ERR PKImageDecode_Initialize(PKImageDecode* pID, struct WMPStream* pStream);
ERR PKImageDecode_GetPixelFormat(PKImageDecode* pID, PKPixelFormatGUID* pPF);
ERR PKImageDecode_GetSize(PKImageDecode* pID, I32* piWidth, I32* piHeight);
ERR PKImageDecode_GetResolution(PKImageDecode* pID, Float* pfrX, Float* pfrY);
ERR PKImageDecode_GetColorContext(PKImageDecode *pID, U8 *pbColorContext, U32 *pcbColorContext);
ERR PKImageDecode_GetDescriptiveMetadata(PKImageDecode *pID, DESCRIPTIVEMETADATA *pDescMetadata);
ERR PKImageDecode_Copy(PKImageDecode* pID, const PKRect* pRect, U8* pb, U32 cbStride);
ERR PKImageDecode_GetFrameCount(PKImageDecode* pID, U32* puCount);
ERR PKImageDecode_SelectFrame(PKImageDecode* pID, U32 uFrame);
ERR PKImageDecode_Release(PKImageDecode** ppID);

ERR PKImageDecode_Create(PKImageDecode** ppID);
ERR PKCodecFactory_CreateDecoderFromFile(const char* szFilename, PKImageDecode** ppDecoder);

//================================================================
typedef struct tagPKFormatConverter
{
    ERR (*Initialize)(PKFormatConverter*, PKImageDecode*, char *pExt, PKPixelFormatGUID);
    ERR (*InitializeConvert)(PKFormatConverter* pFC, const PKPixelFormatGUID enPFFrom,
                             char *pExt, PKPixelFormatGUID enPFTTo);

    ERR (*GetPixelFormat)(PKFormatConverter*, PKPixelFormatGUID*);
    ERR (*GetSourcePixelFormat)(PKFormatConverter*, PKPixelFormatGUID*);
    ERR (*GetSize)(PKFormatConverter*, I32*, I32*);
    ERR (*GetResolution)(PKFormatConverter*, Float*, Float*);

    ERR (*Copy)(PKFormatConverter*, const PKRect*, U8*, U32);
    ERR (*Convert)(PKFormatConverter*, const PKRect*, U8*, U32);

    ERR (*Release)(PKFormatConverter**);

    PKImageDecode* pDecoder;
    PKPixelFormatGUID enPixelFormat;
#ifdef __ANSI__
#undef PKFormatConverter
#endif // __ANSI__
} PKFormatConverter;

//----------------------------------------------------------------
ERR PKImageEncode_Transcode(PKImageEncode* pIE, PKFormatConverter* pFC, PKRect* pRect);
ERR PKImageEncode_WriteSource(PKImageEncode* pIE, PKFormatConverter* pFC, PKRect* pRect);
ERR PKFormatConverter_Initialize(PKFormatConverter* pFC, PKImageDecode* pID, char *pExt, PKPixelFormatGUID enPF);
ERR PKFormatConverter_InitializeConvert(PKFormatConverter* pFC, const PKPixelFormatGUID enPFFrom,
                                        char *pExt, PKPixelFormatGUID enPFTo);
ERR PKFormatConverter_GetPixelFormat(PKFormatConverter* pFC, PKPixelFormatGUID* pPF);
ERR PKFormatConverter_GetSourcePixelFormat(PKFormatConverter* pFC, PKPixelFormatGUID* pPF);
ERR PKFormatConverter_GetSize(PKFormatConverter* pFC, I32* piWidth, I32* piHeight);
ERR PKFormatConverter_GetResolution(PKFormatConverter* pFC, Float* pfrX, Float* pfrY);
ERR PKFormatConverter_Copy(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride);
ERR PKFormatConverter_Convert(PKFormatConverter* pFC, const PKRect* pRect, U8* pb, U32 cbStride);
ERR PKFormatConverter_Release(PKFormatConverter** ppFC);

// Think of this as static member of PKFormatConverter "class"
ERR PKFormatConverter_EnumConversions(const PKPixelFormatGUID *pguidSourcePF,
                                      const U32 iIndex,
                                      const PKPixelFormatGUID **ppguidTargetPF);

ERR PKCodecFactory_CreateFormatConverter(PKFormatConverter** ppFConverter);

//----------------------------------------------------------------
ERR PKAlloc(void** ppv, size_t cb);
ERR PKFree(void** ppv);
ERR PKAllocAligned(void** ppv, size_t cb, size_t iAlign);
ERR PKFreeAligned(void** ppv);

#ifdef __cplusplus
} // extern "C"
#endif

