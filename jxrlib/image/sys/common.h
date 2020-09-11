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

#ifndef WMI_COMMON_H
#define WMI_COMMON_H

/*************************************************************************
// Common typedef's
*************************************************************************/
typedef enum  { ENCODER = 0, DECODER = 1 } CODINGMODE;

typedef enum tagBand
{
    BAND_HEADER = 0,
    BAND_DC = 1,
    BAND_LP = 2,
    BAND_AC = 3,
    BAND_FL = 4
} BAND;

/*************************************************************************
    struct / class definitions
*************************************************************************/
//#define SIGNATURE_BYTES 8   // Bytes for GDI+ signature
#define CODEC_VERSION 1
#define CODEC_SUBVERSION 0
#define CODEC_SUBVERSION_NEWSCALING_SOFT_TILES 1
#define CODEC_SUBVERSION_NEWSCALING_HARD_TILES 9

#define CONTEXTX 8
#define CTDC 5
#define NUMVLCTABLES 21 // CONTEXTX * 2 + CTDC
#define AVG_NDIFF 3

#define MAXTOTAL 32767 // 511 should be enough

/** Quantization related defines **/
#define SHIFTZERO 1 /* >= 0 */
#define QPFRACBITS 2  /* or 0 only supported */

/** adaptive huffman encoding / decoding struct **/
typedef struct CAdaptiveHuffman
{
    Int     m_iNSymbols;
    const Int *m_pTable;
    const Int *m_pDelta, *m_pDelta1;
    Int     m_iTableIndex;
    const short *m_hufDecTable;
    Bool    m_bInitialize;
    //Char    m_pLabel[8]; // for debugging - label attached to constructor

    Int     m_iDiscriminant, m_iDiscriminant1;
    Int     m_iUpperBound;
    Int     m_iLowerBound;
} CAdaptiveHuffman;


/************************************************************************************
  Context structures
************************************************************************************/
typedef struct CAdaptiveModel {
    Int     m_iFlcState[2];
    Int     m_iFlcBits[2];
    BAND    m_band;
} CAdaptiveModel;

typedef struct CCBPModel {
    Int     m_iCount0[2];
    Int     m_iCount1[2];
    Int     m_iState[2];
} CCBPModel;

/*************************************************************************
    globals
*************************************************************************/
extern Int grgiZigzagInv4x4_lowpass[];
extern Int grgiZigzagInv4x4H[];
extern Int grgiZigzagInv4x4V[];
extern const Int gSignificantRunBin[];
extern const Int gSignificantRunFixedLength[];
static const Int cblkChromas[] = {0,4,8,16, 16,16,16, 0,0};
/*************************************************************************
    function declarations
*************************************************************************/
// common utilities
Void Clean (CAdaptiveHuffman *pAdHuff);
CAdaptiveHuffman *Allocate (Int iNSymbols, CODINGMODE cm);

/* Timing functions */
void    reset_timing(double *time);
void    report_timing(const char *s, double time);
// static double   timeperclock;

/** adaptive model functions **/
Void UpdateModelMB (COLORFORMAT cf, Int iChannels, Int iLaplacianMean[], CAdaptiveModel *m_pModel);

/** adaptive huffman encoder / decoder functions **/
Void Adapt (CAdaptiveHuffman *pAdHuff, Bool bFixedTables);
Void AdaptFixed (CAdaptiveHuffman *pAdHuff);
Void AdaptDiscriminant (CAdaptiveHuffman *pAdHuff);

#ifndef _PREFAST_
#pragma warning(disable:4068)
#endif

#endif  // WMI_COMMON_H
