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

#ifndef WMI_WINDOWSMEDIAPHOTO_H
#define WMI_WINDOWSMEDIAPHOTO_H

//================================================================
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if defined(__cplusplus) && !defined(EXTERN_C)
#define EXTERN_C extern "C"
#elif !defined(EXTERN_C)// __cplusplus
#define EXTERN_C extern
#endif // __cplusplus

/********************************************************************************
  Type definitions
********************************************************************************/
typedef int Bool;
typedef char Char;
typedef double Double;
typedef int Int;
typedef signed char I8;
typedef short I16; // 16 bit int
typedef int I32;
typedef long Long;
typedef unsigned char  PixelC;
typedef int PixelI;
typedef unsigned int UInt;
typedef unsigned long ULong;
typedef unsigned char U8; // 8 bit uint
typedef unsigned short U16;
typedef unsigned int U32; // 32 bit uint
typedef void Void;

typedef void* CTXSTRCODEC;


#define REENTRANT_MODE 1
/*
    DESCRIPTION OF COMPILER FLAG REENTRANT_MODE:

    //#define REENTRANT_MODE 1

    This compiler flag is related to the capability of banded decode 
    (decoding only one MB row of the source JPEG XR image at a time). 
	
    With REENTRANT_MODE defined, the decoder decodes one MB row on each call to 
    ImageStrDecDecode().
    
    The decoder acts as if it can only write to the single MBRow whose pointer was passed to it. 
    This acts as a proof of concept that the API would work if you passed it a small buffer 
    on each call to ImageStrDecDecode(). 
	
    The REENTRANT_MODE flag only works when the output image is in Orientations 0, 1 
    (vertically	flipped) or 2 (horizontally flipped).

    With REENTRANT_MODE defined, the function PKImageDecode_Copy_WMP()
    decodes only as far as the pRect parameter indicates. The width of the rectangle must be the width
    of the image, but on each call, this function will decode the image up to the end of the MB Row 
    which contains the i-th pixel row, where i = pRect->Y. 

    A target use of this version would be to have PKImageDecode_Copy_WMP() called in a loop, once for
    each MB row. On each call, pRect would specify a 1-MB-Row-tall rectangle that is the width of the 
    image. The decoder state is preserved until the Decoder finishes decoding the image.

    If, at a certain point, a request is made for a rectangle _above_ the last row decoded, then the
    decoder instance is terminated and re-initiated, and decoding re-starts, going from the beginning 
    of the image to the end of the current rectangle.

    ***

    We've chosen to uncomment-out this definition in this header file.  An alternate method would be
    to allow the user to define this in the PREPROCESSOR DEFINITIONS section of the properties page
    for each of the following projects: CommonLib, DecodeLib, JXRDecApp and JXRGlueLib.

*/
/*************************************************************************
    enums
*************************************************************************/
typedef enum {
    ICERR_OK = 0, ICERR_ERROR = -1
} ERR_CODE;

typedef enum BITDEPTH {
    BD_SHORT, BD_LONG,

    /* add new BITDEPTH here */ BD_MAX
} BITDEPTH;

typedef enum BITDEPTH_BITS {
    // regular ones
    BD_1, //White is foreground
    BD_8, BD_16, BD_16S, BD_16F, BD_32, BD_32S, BD_32F,

    // irregular ones
    BD_5, BD_10, BD_565,

    /* add new BITDEPTH_BITS here */ BDB_MAX,

    BD_1alt = 0xf, //Black is foreground
} BITDEPTH_BITS;

typedef enum OVERLAP {
    OL_NONE = 0, OL_ONE, OL_TWO,

    /* add new OVERLAP here */ OL_MAX
} OVERLAP;

typedef enum BITSTREAMFORMAT {
    SPATIAL = 0,     // spatial order
    FREQUENCY,       // frequency order
} BITSTREAMFORMAT;

typedef enum COLORFORMAT {
    Y_ONLY  = 0, 
	YUV_420 = 1,
	YUV_422 = 2,
	YUV_444 = 3,
	CMYK    = 4, 
	//CMYKDIRECT = 5,
	NCOMPONENT = 6,

    // these are external-only
    CF_RGB  = 7,
	CF_RGBE = 8,

    /* add new COLORFORMAT here */ CFT_MAX
} COLORFORMAT;

// rotation and flip
typedef enum ORIENTATION {
    // CRW: Clock Wise 90% Rotation; FlipH: Flip Horizontally;  FlipV: Flip Vertically
    // Peform rotation FIRST!
    //                CRW FlipH FlipV
    O_NONE = 0,    // 0    0     0
    O_FLIPV,       // 0    0     1
    O_FLIPH,       // 0    1     0
    O_FLIPVH,      // 0    1     1
    O_RCW,         // 1    0     0
    O_RCW_FLIPV,   // 1    0     1
    O_RCW_FLIPH,   // 1    1     0
    O_RCW_FLIPVH,  // 1    1     1
    /* add new ORIENTATION here */ O_MAX
} ORIENTATION;

typedef enum SUBBAND {
    SB_ALL = 0,             // keep all subbands
    SB_NO_FLEXBITS,     // skip flex bits
    SB_NO_HIGHPASS,     // skip highpass
    SB_DC_ONLY,         // skip lowpass and highpass, DC only
    SB_ISOLATED,        // not decodable
    /* add new SUBBAND here */ SB_MAX
} SUBBAND;

enum { RAW = 0, BMP = 1, PPM = 2, TIF = 3, HDR = 4, IYUV = 5, YUV422 = 6, YUV444 = 7};

typedef enum {ERROR_FAIL = -1, SUCCESS_DONE, PRE_READ_HDR, PRE_SETUP, PRE_DECODE, POST_READ_HDR } WMIDecoderStatus;

#ifndef FALSE
#define FALSE 0
#endif // FALSE

#ifndef TRUE
#define TRUE 1
#endif // TRUE

#define MAX_CHANNELS 16
#define LOG_MAX_TILES 12
#define MAX_TILES (1 << LOG_MAX_TILES)


//================================================================
// Codec-specific constants
#define MB_WIDTH_PIXEL 16
#define MB_HEIGHT_PIXEL 16

#define BLK_WIDTH_PIXEL 4
#define BLK_HEIGHT_PIXEL 4

#define MB_WIDTH_BLK 4
#define MB_HEIGHT_BLK 4

// The codec operates most efficiently when the framebuffers for encoder input
// and decoder output are: 1) aligned on a particular boundary, and 2) the stride
// is also aligned to this boundary (so that each scanline is also aligned).
// This boundary is defined below.
#define FRAMEBUFFER_ALIGNMENT 128


//================================================================
#define WMP_errSuccess 0

#define WMP_errFail -1
#define WMP_errNotYetImplemented -2
#define WMP_errAbstractMethod -3

#define WMP_errOutOfMemory -101
#define WMP_errFileIO -102
#define WMP_errBufferOverflow -103
#define WMP_errInvalidParameter -104
#define WMP_errInvalidArgument -105
#define WMP_errUnsupportedFormat -106
#define WMP_errIncorrectCodecVersion -107
#define WMP_errIndexNotFound -108
#define WMP_errOutOfSequence -109
#define WMP_errNotInitialized -110
#define WMP_errMustBeMultipleOf16LinesUntilLastCall -111
#define WMP_errPlanarAlphaBandedEncRequiresTempFile -112
#define WMP_errAlphaModeCannotBeTranscoded -113
#define WMP_errIncorrectCodecSubVersion -114


//================================================================
typedef long ERR;

#define Failed(err) ((err)<0)

#define CRLF "\r\n"

#define CT_ASSERT(exp, uniq) typedef char __CT_ASSERT__##uniq[(exp) ? 1 : -1] // Caller must provide a unique tag, or this fails to compile under GCC

#if defined(_DEBUG) || defined(DBG)
#define Report(err, szExp, szFile, nLine) \
    fprintf(stderr, "FAILED: %ld=%s" CRLF, (err), (szExp)); \
    fprintf(stderr, "        %s:%ld" CRLF, (szFile), (nLine));  \

#else
#define Report(err, szExp, szFile, lLine) err = err
#endif

#define Call(exp) \
    if (Failed(err = (exp))) \
    { \
        Report(err, #exp, __FILE__, (long)__LINE__); \
        goto Cleanup; \
    } \
    else err = err

#define CallIgnoreError(errTmp, exp) \
    if (Failed(errTmp = (exp))) \
    { \
        Report(errTmp, #exp, __FILE__, (long)__LINE__); \
    } \
    else errTmp = errTmp


#define Test(exp, err) Call((exp) ? WMP_errSuccess : (err))
#define FailIf(exp, err) Call((exp) ? (err) : WMP_errSuccess)

//================================================================
// WMPStream interface
//================================================================
struct WMPStream
{
    union
    {
        struct tagFile
        {
            FILE* pFile;
        } file;

        struct tagBuf
        {
            U8* pbBuf;
            size_t cbBuf;
            size_t cbCur;
            size_t cbBufCount;
        } buf;

        void* pvObj;
    } state;

    Bool fMem;

    ERR (*Close)(struct WMPStream** pme);

    Bool (*EOS)(struct WMPStream* me);
    
    ERR (*Read)(struct WMPStream* me, void* pv, size_t cb);
    ERR (*Write)(struct WMPStream* me, const void* pv, size_t cb);
    //ERR (*GetLine)(struct WMPStream* me, void* pv, size_t cb);

    ERR (*SetPos)(struct WMPStream* me, size_t offPos);
    ERR (*GetPos)(struct WMPStream* me, size_t* poffPos);
};

EXTERN_C ERR CreateWS_File(struct WMPStream** ppWS, const char* szFilename, const char* szMode);
EXTERN_C ERR CloseWS_File(struct WMPStream** ppWS);

EXTERN_C ERR CreateWS_Memory(struct WMPStream** ppWS, void* pv, size_t cb);
EXTERN_C ERR CloseWS_Memory(struct WMPStream** ppWS);


//================================================================
// Enc/Dec data structure
//================================================================
typedef struct tagCWMImageInfo {
    size_t cWidth;
    size_t cHeight;
    COLORFORMAT cfColorFormat;
    BITDEPTH_BITS bdBitDepth;
    size_t cBitsPerUnit;
    size_t cLeadingPadding; // number of leading padding
    Bool bRGB; // true: RGB;  false: BGR
    U8 cChromaCenteringX; // Relative location of Chroma w.r.t Luma
    U8 cChromaCenteringY; // Relative location of Chroma w.r.t Luma

    // Region of interest decoding
    size_t cROILeftX;
    size_t cROIWidth;
    size_t cROITopY;
    size_t cROIHeight;

    // thumbnail decode
    Bool   bSkipFlexbits;
    size_t cThumbnailWidth;
    size_t cThumbnailHeight;

    // image orientation
    ORIENTATION oOrientation;

    // post processing
    U8 cPostProcStrength; // 0(none) 1(light) 2(medium) 3(strong) 4(very strong)

    // user buffer is always padded to whole MB
    Bool fPaddedUserBuffer;
} CWMImageInfo;

typedef struct tagCWMIStrCodecParam {
    Bool bVerbose;

    // for macroblock quantization (DQUANT)
    U8 uiDefaultQPIndex;
    U8 uiDefaultQPIndexYLP;
    U8 uiDefaultQPIndexYHP;
    U8 uiDefaultQPIndexU;
    U8 uiDefaultQPIndexULP;
    U8 uiDefaultQPIndexUHP;
    U8 uiDefaultQPIndexV;
    U8 uiDefaultQPIndexVLP;
    U8 uiDefaultQPIndexVHP;
    U8 uiDefaultQPIndexAlpha;

    COLORFORMAT cfColorFormat; 
    BITDEPTH bdBitDepth;
    OVERLAP olOverlap;
    BITSTREAMFORMAT bfBitstreamFormat;
    size_t cChannel; // number of color channels including alpha
    U8 uAlphaMode; // 0:no alpha 1: alpha only else: something + alpha 
    SUBBAND sbSubband;  // which subbands to keep
    U8  uiTrimFlexBits;

    struct WMPStream* pWStream;
    size_t cbStream;

    // tiling info
    U32  cNumOfSliceMinus1V;     // # of vertical slices
    U32 uiTileX[MAX_TILES]; // width in MB of each veritical slice
    U32  cNumOfSliceMinus1H;     // # of horizontal slices
    U32 uiTileY[MAX_TILES]; // height in MB of each horizontal slice

    //32f and 32s conversion parameters
    U8 nLenMantissaOrShift;
    I8 nExpBias;

    Bool bBlackWhite;

    Bool bUseHardTileBoundaries; //default is soft tile boundaries
 
    Bool bProgressiveMode; //default is sequential mode

    Bool bYUVData; //default is cfColorFormat data

    Bool bUnscaledArith; //force unscaled arithmetic
   
    // Perf measurement
    Bool fMeasurePerf;
} CWMIStrCodecParam;

typedef struct tagCWMImageBufferInfo {
    void* pv;           // pointer to scanline buffer
    size_t cLine;       // count of scanlines
    size_t cbStride;    // count of BYTE for stride
#ifdef REENTRANT_MODE
    unsigned int uiFirstMBRow;     // Current First MB Row being decoded
    unsigned int uiLastMBRow;     // Current Last MB Row being decoded
    size_t cLinesDecoded;         // Number of lines decoded and returned in low-mem mode
#endif // REENTRANT_MODE
} CWMImageBufferInfo;




/****************************************************************/
/* Encode API                                                   */
/****************************************************************/
EXTERN_C Int ImageStrEncInit(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP,
    CTXSTRCODEC* pctxSC);

EXTERN_C Int ImageStrEncEncode(
    CTXSTRCODEC ctxSC,
    const CWMImageBufferInfo* pBI);

EXTERN_C Int ImageStrEncTerm(
    CTXSTRCODEC ctxSC);


/****************************************************************/
/* Decode API                                                   */
/****************************************************************/
struct CWMImageStrCodec;

EXTERN_C Int ImageStrDecGetInfo(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP);

EXTERN_C Int ImageStrDecInit(
    CWMImageInfo* pII,
    CWMIStrCodecParam *pSCP,
    CTXSTRCODEC* pctxSC);

EXTERN_C Int ImageStrDecDecode(
    CTXSTRCODEC ctxSC,
    const CWMImageBufferInfo* pBI
#ifdef REENTRANT_MODE
    , size_t *pcDecodedLines
#endif    
    );

EXTERN_C Int ImageStrDecTerm(
    CTXSTRCODEC ctxSC);

EXTERN_C Int WMPhotoValidate(
    CWMImageInfo * pII,
    CWMIStrCodecParam * pSCP);


/****************************************************************/
/* Transcoding API                                              */
/****************************************************************/
typedef struct tagCWMTranscodingParam {
    size_t cLeftX;
    size_t cWidth;
    size_t cTopY;
    size_t cHeight;  // interested region

    BITSTREAMFORMAT bfBitstreamFormat; // desired bitstream format
//    COLORFORMAT cfColorFormat; // desired color format
    U8 uAlphaMode; // 0:no alpha 1: alpha only else: something + alpha 
    SUBBAND sbSubband;  // which subbands to keep
    ORIENTATION oOrientation; // flip / right angle rotation
    Bool bIgnoreOverlap;
} CWMTranscodingParam;

EXTERN_C Int WMPhotoTranscode(
    struct WMPStream* pStreamDec,   // input bitstrean
    struct WMPStream* pStreamEnc,   // output bitstream
    CWMTranscodingParam* pParam     // transcoding parameters
);

typedef struct tagCWMDetilingParam {
    size_t cWidth;
    size_t cHeight;  // image size
    size_t cChannel; // # of channels
    OVERLAP olOverlap; // overlap
    BITDEPTH_BITS bdBitdepth; // bit depth

    // tiling info
    U32  cNumOfSliceMinus1V;     // # of vertical slices
    U32 uiTileX[MAX_TILES]; // position in MB of each veritical slice
    U32  cNumOfSliceMinus1H;     // # of horizontal slices
    U32 uiTileY[MAX_TILES]; // position in MB of each horizontal slice

    // image info
    void * pImage;
    size_t cbStride;
} CWMDetilingParam;

EXTERN_C Int WMPhotoDetile(
    CWMDetilingParam * pParam   // detiling parameters
);

#endif // WMI_WINDOWSMEDIAPHOTO_H

