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

#include <windowsmediaphoto.h>
#ifndef WIN32
#include <wmspecstring.h>
#endif

#ifndef UNREFERENCED_PARAMETER
#define UNREFERENCED_PARAMETER(P) { (P) = (P); }
#endif /*UNREFERENCED_PARAMETER*/

//================================================================
// Container
//================================================================

// Keep these in sort order so that we can easily confirm we are outputting tags in ascending order
#define WMP_tagNull 0

#define WMP_tagDocumentName         0x010d  // Descriptive metadata tag
#define WMP_tagImageDescription     0x010e  // Descriptive metadata tag
#define WMP_tagCameraMake           0x010f  // Descriptive metadata tag
#define WMP_tagCameraModel          0x0110  // Descriptive metadata tag
#define WMP_tagPageName             0x011d  // Descriptive metadata tag
#define WMP_tagPageNumber           0x0129  // Descriptive metadata tag
#define WMP_tagSoftware             0x0131  // Descriptive metadata tag
#define WMP_tagDateTime             0x0132  // Descriptive metadata tag
#define WMP_tagArtist               0x013b  // Descriptive metadata tag
#define WMP_tagHostComputer         0x013c  // Descriptive metadata tag

#define WMP_tagXMPMetadata 0x02bc

#define WMP_tagRatingStars          0x4746  // Descriptive metadata tag
#define WMP_tagRatingValue          0x4749  // Descriptive metadata tag
#define WMP_tagCopyright            0x8298  // Descriptive metadata tag

#define WMP_tagEXIFMetadata 0x8769
#define WMP_tagGPSInfoMetadata 0x8825
#define WMP_tagIPTCNAAMetadata 0x83bb
#define WMP_tagPhotoshopMetadata 0x8649
#define WMP_tagInteroperabilityIFD 0xa005
#define WMP_tagIccProfile 0x8773 // Need to use same tag as TIFF!!

#define WMP_tagCaption              0x9c9b  // Descriptive metadata tag

#define WMP_tagPixelFormat 0xbc01
#define WMP_tagTransformation 0xbc02
#define WMP_tagCompression 0xbc03
#define WMP_tagImageType 0xbc04

#define WMP_tagImageWidth 0xbc80
#define WMP_tagImageHeight 0xbc81

#define WMP_tagWidthResolution 0xbc82
#define WMP_tagHeightResolution 0xbc83

#define WMP_tagImageOffset 0xbcc0
#define WMP_tagImageByteCount 0xbcc1
#define WMP_tagAlphaOffset 0xbcc2
#define WMP_tagAlphaByteCount 0xbcc3
#define WMP_tagImageDataDiscard 0xbcc4
#define WMP_tagAlphaDataDiscard 0xbcc5


#define WMP_typBYTE 1
#define WMP_typASCII 2
#define WMP_typSHORT 3
#define WMP_typLONG 4
#define WMP_typRATIONAL 5
#define WMP_typSBYTE 6
#define WMP_typUNDEFINED 7
#define WMP_typSSHORT 8
#define WMP_typSLONG 9
#define WMP_typSRATIONAL 10
#define WMP_typFLOAT 11
#define WMP_typDOUBLE 12


#define WMP_valCompression 0xbc
#define WMP_valWMPhotoID WMP_valCompression


#ifdef WIN32
#define __in_win    __in
#define __out_win   __out
#endif


//================================================================

typedef enum
{
    DPKVT_EMPTY = 0,
    DPKVT_UI1 = 17,
    DPKVT_UI2 = 18,
    DPKVT_UI4 = 19,
    DPKVT_LPSTR = 30,
    DPKVT_LPWSTR = 31,
    DPKVT_BYREF = 0x4000,
} DPKVARTYPE;

typedef struct DPKPROPVARIANT
{
    DPKVARTYPE  vt;
    union
    {
        U8 bVal;        // DPKVT_UI1
        U16 uiVal;      // DPKVT_UI2
        U32 ulVal;      // DPKVT_UI4
        char *pszVal;   // DPKVT_LPSTR
        U16 *pwszVal;   // DPKVT_LPWSTR
        U8 *pbVal;      // DPKVT_BYREF | DPKVT_UI1
    } VT;
} DPKPROPVARIANT;

typedef struct DESCRIPTIVEMETADATA
{
    DPKPROPVARIANT  pvarImageDescription;   // WMP_tagImageDescription
    DPKPROPVARIANT  pvarCameraMake;         // WMP_tagCameraMake
    DPKPROPVARIANT  pvarCameraModel;        // WMP_tagCameraModel
    DPKPROPVARIANT  pvarSoftware;           // WMP_tagSoftware
    DPKPROPVARIANT  pvarDateTime;           // WMP_tagDateTime
    DPKPROPVARIANT  pvarArtist;             // WMP_tagArtist
    DPKPROPVARIANT  pvarCopyright;          // WMP_tagCopyright
    DPKPROPVARIANT  pvarRatingStars;        // WMP_tagRatingStars
    DPKPROPVARIANT  pvarRatingValue;        // WMP_tagRatingValue
    DPKPROPVARIANT  pvarCaption;            // WMP_tagCaption
    DPKPROPVARIANT  pvarDocumentName;       // WMP_tagDocumentName
    DPKPROPVARIANT  pvarPageName;           // WMP_tagPageName
    DPKPROPVARIANT  pvarPageNumber;         // WMP_tagPageNumber
    DPKPROPVARIANT  pvarHostComputer;       // WMP_tagHostComputer
} DESCRIPTIVEMETADATA;

typedef struct tagWmpDE
{
    U16 uTag;
    U16 uType;
    U32 uCount;
    U32 uValueOrOffset;
} WmpDE;

typedef struct tagWmpDEMisc
{
    U32 uImageOffset;
    U32 uImageByteCount;
    U32 uAlphaOffset;
    U32 uAlphaByteCount;

    U32 uOffPixelFormat;
    U32 uOffImageByteCount;
    U32 uOffAlphaOffset;
    U32 uOffAlphaByteCount;
    U32 uColorProfileOffset;
    U32 uColorProfileByteCount;
    U32 uXMPMetadataOffset;
    U32 uXMPMetadataByteCount;
    U32 uEXIFMetadataOffset;
    U32 uEXIFMetadataByteCount;
    U32 uGPSInfoMetadataOffset;
    U32 uGPSInfoMetadataByteCount;
    U32 uIPTCNAAMetadataOffset;
    U32 uIPTCNAAMetadataByteCount;
    U32 uPhotoshopMetadataOffset;
    U32 uPhotoshopMetadataByteCount;
    U32 uDescMetadataOffset;
    U32 uDescMetadataByteCount;
} WmpDEMisc;


//================================================================
EXTERN_C ERR GetUShort(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    __out_ecount(1) U16* puValue
);

EXTERN_C ERR PutUShort(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    U16 uValue
);

EXTERN_C ERR GetULong(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    __out_ecount(1) U32* puValue
);

EXTERN_C ERR PutULong(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    U32 uValue
);

EXTERN_C ERR WriteWmpDE(
    __in_ecount(1) struct WMPStream* pWS,
    size_t *pOffPos,
    const __in_ecount(1) WmpDE* pDE,
    const U8 *pbData,
    U32 *pcbDataWrittenToOffset
);


EXTERN_C ERR ReadPropvar(__in_ecount(1) struct WMPStream* pWS,
                         const __in_win U16 uType,
                         const __in_win U32 uCount,
                         const __in_win U32 uValue,
                         __out_win DPKPROPVARIANT *pvar);



// read and write little endian words/dwords from a buffer on both big and little endian cpu's
// with full buffer overflow checking

#define WMP_INTEL_ENDIAN    ('I')

EXTERN_C ERR getbfcpy(U8* pbdest, const U8* pb, size_t cb, size_t ofs, U32 n);
EXTERN_C ERR getbfw(const U8* pb, size_t cb, size_t ofs, U16* pw);
EXTERN_C ERR getbfdw(const U8* pb, size_t cb, size_t ofs, U32* pdw);
EXTERN_C ERR getbfwbig(const U8* pb, size_t cb, size_t ofs, U16* pw);
EXTERN_C ERR getbfdwbig(const U8* pb, size_t cb, size_t ofs, U32* pdw);
EXTERN_C ERR getbfwe(const U8* pb, size_t cb, size_t ofs, U16* pw, U8 endian);
EXTERN_C ERR getbfdwe(const U8* pb, size_t cb, size_t ofs, U32* pdw, U8 endian);
EXTERN_C ERR setbfcpy(U8* pb, size_t cb, size_t ofs, const U8* pbset, size_t cbset);
EXTERN_C ERR setbfw(U8* pb, size_t cb, size_t ofs, U16 dw);
EXTERN_C ERR setbfdw(U8* pb, size_t cb, size_t ofs, U32 dw);
EXTERN_C ERR setbfwbig(U8* pb, size_t cb, size_t ofs, U16 dw);
EXTERN_C ERR setbfdwbig(U8* pb, size_t cb, size_t ofs, U32 dw);
EXTERN_C ERR BufferCalcIFDSize(const U8* pb, size_t cb, U32 uIFDOfs, U8 endian, U32 *pcbifd);
EXTERN_C ERR StreamCalcIFDSize(struct WMPStream* pWS, U32 uIFDOfs, U32 *pcbifd);
EXTERN_C ERR BufferCopyIFD(const U8* pbsrc, U32 cbsrc, U32 ofssrc, U8 endian, U8* pbdest, U32 cbdest, U32* pofsdest);
EXTERN_C ERR StreamCopyIFD(struct WMPStream* pWS, U32 ofssrc, U8* pbdest, U32 cbdest, U32* pofsdest);
