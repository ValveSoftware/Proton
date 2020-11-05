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

#include <stddef.h>

#include "windowsmediaphoto.h"
#include "common.h"
// #include "xplatform_image.h"

// added for Xcode PK universal binary
#ifdef __ppc__
#define _BIG__ENDIAN_
#endif

//================================================================
#ifdef ENABLE_OPTIMIZATIONS
#if defined(WIN32) && !defined(_WIN64)
#define WMP_OPT_SSE2

#define WMP_OPT_CC_ENC
//#define WMP_OPT_TRFM_ENC
//#define WMP_OPT_QT

#define WMP_OPT_CC_DEC
#define WMP_OPT_TRFM_DEC

#define X86OPT_INLINE

#endif
#endif // ENABLE_OPTIMIZATIONS

//================================================================
//#ifdef WIN32
#if defined(WIN32) && !defined(UNDER_CE)   // WIN32 seems to be defined always in VS2005 for ARM platform
#define PLATFORM_X86
#include "..\x86\x86.h"
#endif

#ifndef UNREFERENCED_PARAMETER
#define UNREFERENCED_PARAMETER(P) { (P) = (P); }
#endif UNREFERENCED_PARAMETER

#ifdef UNDER_CE
#define PLATFORM_WCE
#include "arm.h"
#endif

#ifdef __ANSI__
#define PLATFORM_ANSI
#include "ansi.h"
#endif

//================================================================

#ifdef PLATFORM_ANSI
typedef unsigned long long U64;
#else // PLATFORM_ANSI
typedef unsigned __int64 U64;
#endif // PLATFORM_ANSI

//================================================================
#define MARKERCOUNT (PACKETLENGTH * 2)

// The following macros depend on UINTPTR_T and INTPTR_T being properly defined
// so that they are equal to pointer width. Confirm and fail if our assumptions are wrong.
CT_ASSERT(sizeof(UINTPTR_T) == sizeof(void*), strcodec1);
CT_ASSERT(sizeof(INTPTR_T) == sizeof(void*), strcodec2);

// wrap around pointer, s=pow(2,n), p wraps aligned to s
#define WRAPPTR(p, s) ((void*)((UINTPTR_T)(p) & ~(UINTPTR_T)(s)))

// mask certain bit inside a pointer, simulate wrap around
#define MASKPTR(p, m) ((void*)((UINTPTR_T)(p) & (INTPTR_T)(m)))

// test for more than 1 packet data
#define PACKET1(ps, pc, s) (((INTPTR_T)(ps) ^ (INTPTR_T)(pc)) & ((UINTPTR_T)(s)))

// alternate pointer p between 2 values aligned to s, s=pow(2,n)
//#define ALTPTR(p, s) ((void*)((uintptr_t)(p) ^ (s)))

// align point, s=pow(2,n), p aligns to s
#define ALIGNUP(p, s) ((void*)(((UINTPTR_T)(p) + ((UINTPTR_T)(s) - 1)) & ~((UINTPTR_T)(s) - 1)))
#define ALIGNDOWN(p, s) ((void*)((UINTPTR_T)(p) & ~((UINTPTR_T)(s) - 1)))

//================================================================
// timer support
//================================================================

#define TraceResult(a)

//================================================================
typedef enum tagPacketType
{
    PK_NULL = 0,
    PK_DC = 1, PK_AD, PK_AC, PK_CP,
    PK_MAX,
} PACKETTYPE;

typedef struct tagIOContext
{
    U8 P0[PACKETLENGTH];        // packet circular buffer 0
    U8 P1[PACKETLENGTH];        // packet circular buffer 1

    union
    {
        U8 P2[PACKETLENGTH];
        struct
        {
            U32 uiShadow;   // shadow of P0[0]-P0[3]

            U32 uiAccumulator;  // 32bit acc as bit field cache
            U32 cBitsUsed;  // # of bits used of acc, [0,16)

            U8* pbPacket;   // packet pointer
            U8* pbCurrent;  // current pointer

            struct WMPStream* pWS;    // pointer to WMPStream
            long offPacket; // byte offset into stream

            //ULARGE_INTEGER u64Acc; 

    //========================================
    // index packet, used for packet retrieval
    //========================================
            U32 cIndex; // current index for index packet
            long offIndex;  // byte offset into stream for index packet
        }State;
    }P2Info;
    U8 P3[PACKETLENGTH];    // index packet buffer
} IOContext;

typedef struct tagMemReadState
{    
    U8* pbBuf;
    size_t cbBuf;
    size_t cbCur;
} MemReadState;

typedef struct tagBitIOInfo
{
    U32 uiShadow;   // shadow of first 4B of circular buffer

    U32 uiAccumulator;  // 32bit acc as bit field cache
    U32 cBitsUsed;  // # of bits used of acc, [0,16)
#ifdef ARMOPT_BITIO
    U32 cBitsUnused;  // # of bits remain unused in acc, [0,32]
#endif

    I32 iMask;  // mask used simulate pointer wrap around

    U8* pbStart;    // start pointer
#ifndef ARMOPT_BITIO
    U8* pbCurrent;  // current pointer
#else
    U32* pbCurrent;  // current pointer
#endif

    struct WMPStream* pWS;  // pointer to WMPStream
    size_t offRef;  // reference offset on IStream,
                            // for read, it moves along the stream
                            // for write, it stays at the attach point
} BitIOInfo;

//================================================================
typedef struct tagCWMIQuantizer {
    U8 iIndex;
    I32 iQP;
    I32 iOffset;
    I32 iMan;
    I32 iExp;
#if defined(WMP_OPT_QT)
    float f1_QP;
    double d1_QP;
#endif    
} CWMIQuantizer;

/* temporary bridge between old APIs and streaming APIs */
typedef struct tagCWMIMBInfo {
    I32 iBlockDC[MAX_CHANNELS][16];
    I32 iOrientation;
    Int iCBP[MAX_CHANNELS];
    Int iDiffCBP[MAX_CHANNELS];
    U8 iQIndexLP; // 0 - 15
    U8 iQIndexHP; // 0 - 15
} CWMIMBInfo;

struct CWMImageStrCodec;

typedef Int (*ImageDataProc)(struct CWMImageStrCodec*);

/** scan model **/
typedef struct CAdaptiveScan {
    U32		uTotal;
    U32		uScan;
} CAdaptiveScan;

/** Adaptive context model **/
typedef struct CCodingContext {
    BitIOInfo * m_pIODC;
    BitIOInfo * m_pIOLP;
    BitIOInfo * m_pIOAC;
    BitIOInfo * m_pIOFL;

    /** adaptive huffman structs **/
    CAdaptiveHuffman *m_pAdaptHuffCBPCY;
    CAdaptiveHuffman *m_pAdaptHuffCBPCY1;
    CAdaptiveHuffman *m_pAHexpt[NUMVLCTABLES];

    /** 4x4 zigzag patterns */
    CAdaptiveScan m_aScanLowpass[16];
    CAdaptiveScan m_aScanHoriz[16];
    CAdaptiveScan m_aScanVert[16];

    /** Adaptive bit reduction model **/
    CAdaptiveModel m_aModelAC;
    CAdaptiveModel m_aModelLP;
    CAdaptiveModel m_aModelDC;

    /** Adaptive lowpass CBP model **/
    Int     m_iCBPCountZero;
    Int     m_iCBPCountMax;

    /** Adaptive AC CBP model **/
    CCBPModel m_aCBPModel;

    /** Trim flex bits - externally set **/
    Int     m_iTrimFlexBits;

    Bool m_bInROI;  // inside ROI (for region decode and compressed domain cropping)?
} CCodingContext;

// Following stuff used to be in strPredQuant.h
/* circulant buffer for 2 MB rows: current row and previous row */
typedef struct tagCWMIPredInfo {
    Int iQPIndex;     // QP Index
    Int iCBP;      // coded block pattern
    PixelI iDC;    // DC of MB
    PixelI iAD[6];
    PixelI * piAD; // AC of DC block: [2] 420UV [4] 422UV [6] elsewhere
}CWMIPredInfo;

// the following is used on decode side while reading image info
typedef struct CWMImageStrCodecParameters {
    size_t cVersion;
    size_t cSubVersion;
    COLORFORMAT cfColorFormat; // color format
    Bool bRBSwapped; // blue and red shall be swapped in BGR555,565,101010
    Bool bAlphaChannel; // alpha channel present
    Bool bScaledArith; // lossless mode
    Bool bIndexTable; // index table present
    Bool bTrimFlexbitsFlag; // trimmed flexbits indicated in packet header
    Bool bUseHardTileBoundaries; //default is soft tile boundaries
    size_t cNumChannels;
    size_t cExtraPixelsTop;
    size_t cExtraPixelsLeft;
    size_t cExtraPixelsBottom;
    size_t cExtraPixelsRight;
    Bool bTranscode;  // transcoding flag
    U32 uQPMode;       // 0/1: no dquant/with dquant, first bit for DC, second bit for LP, third bit for HP
    U8 uiQPIndexDC[MAX_CHANNELS];
    U8 uiQPIndexLP[MAX_CHANNELS];
    U8 uiQPIndexHP[MAX_CHANNELS];
}CCoreParameters;

typedef struct CWMITile
{
    CWMIQuantizer * pQuantizerDC[MAX_CHANNELS];
    CWMIQuantizer * pQuantizerLP[MAX_CHANNELS];
    CWMIQuantizer * pQuantizerHP[MAX_CHANNELS];
    U8 cNumQPLP;
    U8 cNumQPHP;
    U8 cBitsLP;
    U8 cBitsHP;

    Bool bUseDC;
    Bool bUseLP;
    U8 cChModeDC;
    U8 cChModeLP[16];
    U8 cChModeHP[16];
} CWMITile;

#ifdef ARMOPT_COLORCONVERSION_C
#include "ARM_InvColorConversion.h"
#endif

struct tagPostProcInfo{
    Int iMBDC;                  // DC of MB
    U8 ucMBTexture;             // MB texture   : 0(flat) 1(horizontal) 2(vertical) 3(bumpy)
    Int iBlockDC[4][4];         // DC of block
    U8 ucBlockTexture[4][4];    // block texture: 0(flat) 1(horizontal) 2(vertical) 3(bumpy)
};

typedef struct CWMImageStrCodec {
#ifdef ARMOPT_COLORCONVERSION_C
    CWMImageStrInvCCParam InvCCParam;
#endif

    size_t cbStruct;

    CWMImageInfo WMII;
    CWMIStrCodecParam WMISCP;
    CWMImageBufferInfo WMIBI;
    CWMIMBInfo MBInfo;

    /** core parameters **/
    CCoreParameters m_param;

    struct CWMDecoderParameters *m_Dparam;  // this is specified thru pointer because the same set of parameters may be used by multiple image planes

    U8 cSB;

    Bool m_bUVResolutionChange;

    Bool bTileExtraction;

    BitIOInfo * pIOHeader;

    Bool bUseHardTileBoundaries; //default is soft tile boundaries

    PixelI * pInterU;
    PixelI * pInterV;

    //============== tile related info begins here ===========
    // index table
    size_t *pIndexTable;
  
    // current tile position
    size_t cTileRow;
    size_t cTileColumn;

    // tile boundary
    Bool m_bCtxLeft;
    Bool m_bCtxTop;

    Bool m_bResetRGITotals;
    Bool m_bResetContext;

    CWMITile * pTile;
    
    // BitIOs
    BitIOInfo ** m_ppBitIO;
    size_t cNumBitIO;
    size_t cHeaderSize;

    // coding contexts
    struct CCodingContext *m_pCodingContext;
    size_t cNumCodingContext;

    //============== tile related info ends here  ===========

    size_t cNumOfQPIndex;        // number of QP indexes
    U8 cBitsDQUANT;              // number of bits to encode DQUANT

    size_t cRow;        // row for current macro block
    size_t cColumn;     // column for current macro block

    size_t cmbWidth;    // macro block/image width
    size_t cmbHeight;   // macro block/image height

    size_t cbChannel;   // byte/channel

    size_t mbX, mbY;
    size_t tileX, tileY;
    Bool bVertTileBoundary, bHoriTileBoundary;
    Bool bOneMBLeftVertTB, bOneMBRightVertTB; //Macroblock to the left and to the right of tile boundaries

    PixelI iPredBefore[2][2];
    PixelI iPredAfter[2][2];

    //================================
    // input data into
    // macro block 3 of 2x2 working widow
    //================================
    ImageDataProc Load;
    //ImageDataProc Load2;
    ImageDataProc Transform;
    ImageDataProc TransformCenter;

    //================================
    ImageDataProc Quantize;
    //ImageDataProc QuantizeLuma;
    //ImageDataProc QuantizeChroma;

    //================================
    // process and store data from
    // macro block 0 of 2x2 working window
    //================================
    ImageDataProc ProcessTopLeft;
    ImageDataProc ProcessTop;
    ImageDataProc ProcessTopRight;
    ImageDataProc ProcessLeft;
    ImageDataProc ProcessCenter;
    ImageDataProc ProcessRight;
    ImageDataProc ProcessBottomLeft;
    ImageDataProc ProcessBottom;
    ImageDataProc ProcessBottomRight;
    

    //================================
    // 2 MB working window for encoder
    //================================
    PixelI *pPlane[MAX_CHANNELS];

    //================================
    // 2 rows of MB buffer
    //================================
    PixelI *a0MBbuffer[MAX_CHANNELS];  // pointer to start of previous MB row
    PixelI *a1MBbuffer[MAX_CHANNELS];  // pointer to start of current MB row
    PixelI *p0MBbuffer[MAX_CHANNELS];  // working pointer to start of previous row MB
    PixelI *p1MBbuffer[MAX_CHANNELS];  // working pointer to start of current row MB

    //================================
    // downsampling buffer for UV
    //================================
    PixelI * pResU;
    PixelI * pResV;

    //================================
    // circular buffer for 2 MB rows: current row and previous row
    //================================
    CWMIPredInfo *PredInfo[MAX_CHANNELS];
    CWMIPredInfo *PredInfoPrevRow[MAX_CHANNELS];
    CWMIPredInfo *pPredInfoMemory;

    struct WMPStream ** ppWStream;

#ifdef WIN32
    TCHAR **ppTempFile;
#else
    char **ppTempFile;
#endif

    // interleaved alpha support - linked structure for Alpha channel
    struct CWMImageStrCodec *m_pNextSC;
    Bool   m_bSecondary;

    //================================
    // Perf Timers
    //================================
#ifndef DISABLE_PERF_MEASUREMENT
    Bool            m_fMeasurePerf;
    struct PERFTIMERSTATE *m_ptEndToEndPerf;   // Measures from Init to Term, including I/O
    struct PERFTIMERSTATE *m_ptEncDecPerf;     // Measures time spent in ImageStrEncEncode/ImageStrDecDecode, excluding I/O
#endif // DISABLE_PERF_MEASUREMENT

    // postproc information for 2 MB rows: 0(previous row) 1(current row)
    struct tagPostProcInfo * pPostProcInfo[MAX_CHANNELS][2];
} CWMImageStrCodec;


//================================================================
ERR WMPAlloc(void** ppv, size_t cb);
ERR WMPFree(void** ppv);

//================================================================
Void initMRPtr(CWMImageStrCodec*);
Void advanceMRPtr(CWMImageStrCodec*);
Void swapMRPtr(CWMImageStrCodec*);

Int IDPEmpty(CWMImageStrCodec*);

//================================================================
extern const int dctIndex[3][16];
extern const int blkOffset[16];
extern const int blkOffsetUV[4];
extern const int blkOffsetUV_422[8];

extern const U8 idxCC[16][16];
extern const U8 idxCC_420[8][8];

extern const Char gGDISignature[];

//================================================================
Int allocatePredInfo(CWMImageStrCodec*);
Void freePredInfo(CWMImageStrCodec*);
Void advanceOneMBRow(CWMImageStrCodec*);

//================================================================
// bit I/O
//================================================================
Int allocateBitIOInfo(CWMImageStrCodec*);
Int setBitIOPointers(CWMImageStrCodec* pSC);

#ifndef ARMOPT_BITIO
U32 peekBit16(BitIOInfo* pIO, U32 cBits);
U32 flushBit16(BitIOInfo* pIO, U32 cBits);
U32 getBit16(BitIOInfo* pIO, U32 cBits);
U32 getBool16(BitIOInfo* pIO);
I32 getBit16s(BitIOInfo* pIO, U32 cBits);
U32 getBit32(BitIOInfo* pIO, U32 cBits);
U32 flushToByte(BitIOInfo* pIO);
#endif  // ARMOPT_BITIO

Void putBit16z(BitIOInfo* pIO, U32 uiBits, U32 cBits);
Void putBit16(BitIOInfo* pIO, U32 uiBits, U32 cBits);
Void putBit32(BitIOInfo* pIO, U32 uiBits, U32 cBits);
Void fillToByte(BitIOInfo* pIO);

U32 getSizeRead(BitIOInfo* pIO);
U32 getSizeWrite(BitIOInfo* pIO);

U32 getPosRead(BitIOInfo* pIO);

// safe function, solely for the convenience of test code
#ifndef ARMOPT_BITIO
U32 getBit16_S(CWMImageStrCodec* pSC, BitIOInfo* pIO, U32 cBits);
#endif  // ARMOPT_BITIO

//================================================================
// packet I/O
//================================================================
ERR attachISRead(BitIOInfo* pIO, struct WMPStream* pWS, CWMImageStrCodec* pSC);
ERR readIS(CWMImageStrCodec* pSC, BitIOInfo* pIO);
ERR detachISRead(CWMImageStrCodec* pSC, BitIOInfo* pIO);

ERR attachISWrite(BitIOInfo* pIO, struct WMPStream* pWS);
ERR writeIS(CWMImageStrCodec* pSC, BitIOInfo* pIO);
ERR detachISWrite(CWMImageStrCodec* pSC, BitIOInfo* pIO);


//================================================================
// post processing for decoder
//================================================================
Int initPostProc(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t mbWidth, size_t iNumChannels);
Void termPostProc(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t iNumChannels);
Void slideOneMBRow(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], size_t iNumChannels, size_t mbWidth, Bool top, Bool bottom);
Void updatePostProcInfo(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * p, size_t mbX, size_t cc);
Void postProcMB(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * p0, PixelI * p1, size_t mbX, size_t cc, Int threshold);
Void postProcBlock(struct tagPostProcInfo * strPostProcInfo[MAX_CHANNELS][2], PixelI * p0, PixelI * p1, size_t mbX, size_t cc, Int threshold);

//================================================================
// Simple BitIO access functions
//================================================================
typedef struct tagSimpleBitIO
{
    struct WMPStream* pWS;
    U32 cbRead;
    U8 bAccumulator;
    U32 cBitLeft;
} SimpleBitIO;

ERR attach_SB(SimpleBitIO* pSB, struct WMPStream* pWS);
U32 getBit32_SB(SimpleBitIO* pSB, U32 cBits);
Void flushToByte_SB(SimpleBitIO* pSB);
U32 getByteRead_SB(SimpleBitIO* pSB);
ERR detach_SB(SimpleBitIO* pSB);

//----------------------------------------------------------------
EXTERN_C Bool EOSWS_File(struct WMPStream* pWS);

EXTERN_C ERR ReadWS_File(struct WMPStream* pWS, void* pv, size_t cb);
EXTERN_C ERR WriteWS_File(struct WMPStream* pWS, const void* pv, size_t cb);
//EXTERN_C ERR GetLineWS_File(struct WMPStream* pWS, void* pv, size_t cb);

EXTERN_C ERR SetPosWS_File(struct WMPStream* pWS, size_t offPos);
EXTERN_C ERR GetPosWS_File(struct WMPStream* pWS, size_t* poffPos);

//----------------------------------------------------------------
EXTERN_C Bool EOSWS_Memory(struct WMPStream* pWS);

EXTERN_C ERR ReadWS_Memory(struct WMPStream* pWS, void* pv, size_t cb);
EXTERN_C ERR WriteWS_Memory(struct WMPStream* pWS, const void* pv, size_t cb);
//EXTERN_C ERR GetLineWS_Memory(struct WMPStream* pWS, void* pv, size_t cb);

EXTERN_C ERR SetPosWS_Memory(struct WMPStream* pWS, size_t offPos);
EXTERN_C ERR GetPosWS_Memory(struct WMPStream* pWS, size_t* poffPos);

//EXTERN_C ERR GetPtrWS_Memory(struct WMPStream* pWS, size_t align, U8** ppb);
//----------------------------------------------------------------
EXTERN_C Bool EOSWS_List(struct WMPStream* pWS);

EXTERN_C ERR ReadWS_List(struct WMPStream* pWS, void* pv, size_t cb);
EXTERN_C ERR WriteWS_List(struct WMPStream* pWS, const void* pv, size_t cb);

EXTERN_C ERR SetPosWS_List(struct WMPStream* pWS, size_t offPos);
EXTERN_C ERR GetPosWS_List(struct WMPStream* pWS, size_t* poffPos);

EXTERN_C ERR CreateWS_List(struct WMPStream** ppWS);
EXTERN_C ERR CloseWS_List(struct WMPStream** ppWS);

/********************************************************************/
// Stuff related to scale/spatial ordering
typedef struct PacketInfo
{
    BAND    m_iBand;
    size_t  m_iSize;
    size_t  m_iOffset;
    struct PacketInfo *m_pNext;
} PacketInfo;
/********************************************************************/

/********************************************************************/
const static Int blkIdxByRow[4][4] = {{0, 1, 4, 5}, {2, 3, 6, 7}, {8, 9, 12, 13}, {10, 11, 14, 15}};
const static Int blkIdxByColumn[4][4] = {{0, 2, 8, 10}, {1, 3, 9, 11},{4, 6, 12, 14},{5, 7, 13, 15}};

Int getACPredMode(CWMIMBInfo *, COLORFORMAT);
Int getDCACPredMode(CWMImageStrCodec *, size_t);
Void updatePredInfo(CWMImageStrCodec* pSC, CWMIMBInfo *, size_t, COLORFORMAT);

Int AllocateCodingContextDec(struct CWMImageStrCodec *pSC, Int iNumContexts);
Void ResetCodingContext(CCodingContext *pContext);
Void getTilePos(CWMImageStrCodec* pSC, size_t mbX, size_t mbY);
Void InitZigzagScan(CCodingContext * pSC);
Int checkImageBuffer(CWMImageStrCodec *, size_t, size_t);

//U32 log2(U32);

//DQUANT stuff
EXTERN_C Void remapQP(CWMIQuantizer *, I32, Bool);
Int allocateTileInfo(CWMImageStrCodec *);
Void freeTileInfo(CWMImageStrCodec *);
Int allocateQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS], size_t, size_t);
Void freeQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS]);
Void setUniformQuantizer(CWMImageStrCodec *, size_t);
Void useDCQuantizer(CWMImageStrCodec *, size_t);
Void useLPQuantizer(CWMImageStrCodec *, size_t, size_t);
Void formatQuantizer(CWMIQuantizer * pQuantizer[MAX_CHANNELS], U8, size_t, size_t, Bool, Bool);
U8 dquantBits(U8);

#ifdef ARMOPT_BITIO
#define peekBit16   peekBits
#define flushBit16  flushBits
#define getBit16    getBits
#define getBit32    getBits
#define getBit16s   getBitsS
#define getBool16(pIO) getBits(pIO, 1)   

U32 peekBits(BitIOInfo* pIO, U32 cBits);
void flushBits(BitIOInfo* pIO, U32 cBits);
U32 getBits(BitIOInfo* pIO, U32 cBits);
U32 getBitsS(BitIOInfo* pIO, U32 cBits);
void flushToByte(BitIOInfo* pIO);
#endif // ARMOPT_BITIO

/*************************************************************************
    Bitio defines
*************************************************************************/
#define PEEKBIT16(pIO, cBits) \
    assert(0 <= (I32)cBits && cBits <= 16);\
    return (pIO->uiAccumulator >> (32 - cBits/* - pIO->cBitsUsed*/));

#define FLUSHBIT16(pIO, cBits) \
    assert(0 <= (I32)cBits && cBits <= 16);\
    assert((pIO->iMask & 1) == 0);\
    pIO->cBitsUsed += cBits;\
    pIO->pbCurrent = MASKPTR(pIO->pbCurrent + ((pIO->cBitsUsed >> 3)/* & 2*/), pIO->iMask);\
    pIO->cBitsUsed &= 16 - 1;\
    pIO->uiAccumulator = LOAD16(pIO->pbCurrent) << pIO->cBitsUsed;\
    return 0;
//    pIO->uiAccumulator = LOAD16(pIO->pbCurrent) & ((U32)(-1) >> pIO->cBitsUsed);\

void OutputPerfTimerReport(CWMImageStrCodec *pState);
