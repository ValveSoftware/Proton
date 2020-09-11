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

#include "strcodec.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

// Huffman lookup tables
static const short g4HuffLookupTable[40] = {
  19,19,19,19,27,27,27,27,10,10,10,10,10,10,10,10,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0 };

static const short g5HuffLookupTable[2][42] = {{
  28,28,36,36,19,19,19,19,10,10,10,10,10,10,10,10,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0 },
  {
  11,11,11,11,19,19,19,19,27,27,27,27,35,35,35,35,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0 }};

static const short g6HuffLookupTable[4][44] = {{
  13,29,44,44,19,19,19,19,34,34,34,34,34,34,34,34,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  0,0,0,0,0,0,0,0,0,0,0,0 },
  {
  12,12,28,28,43,43,43,43,2,2,2,2,2,2,2,2,
  18,18,18,18,18,18,18,18,34,34,34,34,34,34,34,34,
  0,0,0,0,0,0,0,0,0,0,0,0 },
  {
  4,4,12,12,43,43,43,43,18,18,18,18,18,18,18,18,
  26,26,26,26,26,26,26,26,34,34,34,34,34,34,34,34,
  0,0,0,0,0,0,0,0,0,0,0,0 },
  {
  5,13,36,36,43,43,43,43,18,18,18,18,18,18,18,18,
  25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,25,
  0,0,0,0,0,0,0,0,0,0,0,0 }};

static const short g7HuffLookupTable[2][46] = {{
  45,53,36,36,27,27,27,27,2,2,2,2,2,2,2,2,
  10,10,10,10,10,10,10,10,18,18,18,18,18,18,18,18,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
  {
  -32736,37,28,28,19,19,19,19,10,10,10,10,10,10,10,10,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  5,6,0,0,0,0,0,0,0,0,0,0,0,0 }};

static const short g8HuffLookupTable[2][48] = {{
  53,21,28,28,11,11,11,11,43,43,43,43,59,59,59,59,
  2,2,2,2,2,2,2,2,34,34,34,34,34,34,34,34,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
  {
  52,52,20,20,3,3,3,3,11,11,11,11,27,27,27,27,
  35,35,35,35,43,43,43,43,58,58,58,58,58,58,58,58,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }};

static const short g9HuffLookupTable[2][50] = {{
  13,29,37,61,20,20,68,68,3,3,3,3,51,51,51,51,
  41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,41,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0 },
  {
  -32736,53,28,28,11,11,11,11,19,19,19,19,43,43,43,43,
  1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
  -32734,4,7,8,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0 }};

static const short g12HuffLookupTable[5][56] = {{
  -32736,5,76,76,37,53,69,85,43,43,43,43,91,91,91,91,
  57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
  -32734,1,2,3,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0 },
  {
  -32736,85,13,53,4,4,36,36,43,43,43,43,67,67,67,67,
  75,75,75,75,91,91,91,91,58,58,58,58,58,58,58,58,
  2,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0 },
  {
  -32736,37,92,92,11,11,11,11,43,43,43,43,59,59,59,59,
  67,67,67,67,75,75,75,75,2,2,2,2,2,2,2,2,
  -32734,-32732,2,3,6,10,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0 },
  {
  -32736,29,37,69,3,3,3,3,43,43,43,43,59,59,59,59,
  75,75,75,75,91,91,91,91,10,10,10,10,10,10,10,10,
  -32734,10,2,6,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0 },
  {
  -32736,93,28,28,60,60,76,76,3,3,3,3,43,43,43,43,
  9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
  -32734,-32732,-32730,2,4,8,6,10,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0 }};

/**********************************************************************
  Allocation and dellocation
**********************************************************************/
Void Clean (CAdaptiveHuffman *pAdHuff)
{
    if (pAdHuff == NULL)
        return;
    free (pAdHuff);
}

CAdaptiveHuffman *Allocate (Int iNSymbols, CODINGMODE cm)
{
    CAdaptiveHuffman *pAdHuff = (CAdaptiveHuffman *) malloc (sizeof (CAdaptiveHuffman));

    UNREFERENCED_PARAMETER(cm);

    if (pAdHuff == NULL)
        return NULL;
    if (iNSymbols > 255 || iNSymbols <= 0)
        goto ErrorExit;

    memset (pAdHuff, 0, sizeof (CAdaptiveHuffman));
    pAdHuff->m_iNSymbols = iNSymbols;

    pAdHuff->m_pDelta = NULL;
    pAdHuff->m_iDiscriminant = pAdHuff->m_iUpperBound = pAdHuff->m_iLowerBound = 0;

    return pAdHuff;

ErrorExit:
    Clean (pAdHuff);
    return NULL;
}

/**********************************************************************
  Adapt Huffman table
**********************************************************************/
// Alphabet size = 4
static const Int g_Index4Table[] = {
    1,2,3,3
};
static const Int g4CodeTable[] = {
    4,
    1, 1,
    1, 2,
    0, 3,
    1, 3
};

// Alphabet size = 5
static const Int g_Index5Table[] = {
    1,2,3,4,4,
    1,3,3,3,3
};
static const Int g5CodeTable[] = {
    5,
    1, 1,
    1, 2,
    1, 3,
    0, 4,
    1, 4,

    5,
    1, 1,
    0, 3,
    1, 3,
    2, 3,
    3, 3,
};
static const Int g5DeltaTable[] = { 0,-1,0,1,1 };

// Alphabet size = 6
static const Int g_Index6Table[] = {
    1,5,3,5,2,4,
    2,4,2,4,2,3,
    4,4,2,2,2,3,
    5,5,2,1,4,3,
};
static const Int g6CodeTable[] = {
    6,
    1, 1,
    0, 5,
    1, 3,
    1, 5,
    1, 2,
    1, 4,

    6,
    1,  2,
    0,  4,
    2,  2,
    1,  4,
    3,  2,
    1,  3,

    6,
    0,  4,
    1,  4,
    1,  2,
    2,  2,
    3,  2,
    1,  3,

    6,
    0, 5,
    1, 5,
    1, 2,
    1, 1,
    1, 4,
    1, 3
};
static const Int g6DeltaTable[] = {
    -1, 1, 1, 1, 0, 1,
    -2, 0, 0, 2, 0, 0,
    -1,-1, 0, 1,-2, 0
};

// Alphabet size = 7
static const Int g_Index7Table[] = { 2,2,2,3,4,5,5,
                        1,2,3,4,5,6,6 };
static const Int g7CodeTable[] = {
    7,
    1, 2,
    2, 2,
    3, 2,
    1, 3,
    1, 4,
    0, 5,
    1, 5,

    7,
    1, 1,
    1, 2,
    1, 3,
    1, 4,
    1, 5,
    0, 6,
    1, 6
};
static const Int g7DeltaTable[] = { 1,0,-1,-1,-1,-1,-1 };

// Alphabet size = 8
static const Int g_Index8Table[] = { 2,3,5,4,2,3,5,3,
                        3,3,4,3,3,3,4,2};
static const Int g8CodeTable[] = {
    8,
    2, 2,
    1, 3,
    1, 5,
    1, 4,
    3, 2,
    2, 3,
    0, 5,
    3, 3,

    8,
    1, 3,
    2, 3,
    1, 4,
    3, 3,
    4, 3,
    5, 3,
    0, 4,
    3, 2
};
static const Int g8DeltaTable[] = { -1,0,1,1,-1,0,1,1 };

static const Int g_Index9Table[] = {
    3,5,4,5,5,1,3,5,4,
    1,3,3,4,6,3,5,7,7,
};
static const Int g9CodeTable[] = {
    9,
    2, 3,
    0, 5,
    2, 4,
    1, 5,
    2, 5,
    1, 1,
    3, 3,
    3, 5,
    3, 4,

    9,
    1, 1,
    1, 3,
    2, 3,
    1, 4,
    1, 6,
    3, 3,
    1, 5,
    0, 7,
    1, 7,
};
static const Int g9DeltaTable[] = { 2,2,1,1,-1,-2,-2,-2,-3 };

// Alphabet size = 12
static const Int g_Index12Table[] = {  // index12 is the most critical symbol
    5,6,7,7,5,3,5,1,5,4,5,3,
    4,5,6,6,4,3,5,2,3,3,5,3,
    2,3,7,7,5,3,7,3,3,3,7,4,
    3,2,7,5,5,3,7,3,5,3,6,3,
    3,1,7,4,7,3,8,4,7,4,8,5,
};
static const Int g12CodeTable[] = {
    12,  
    1, 5,
    1, 6,
    0, 7,
    1, 7,
    4, 5,
    2, 3,
    5, 5,
    1, 1,
    6, 5,
    1, 4,
    7, 5,
    3, 3,

    12,
    2, 4,
    2, 5,
    0, 6,
    1, 6,
    3, 4,
    2, 3,
    3, 5,
    3, 2,
    3, 3,
    4, 3,
    1, 5,
    5, 3,

    12,
    3, 2,
    1, 3,
    0, 7,
    1, 7,
    1, 5,
    2, 3,
    2, 7,
    3, 3,
    4, 3,
    5, 3,
    3, 7,
    1, 4,

    12,
    1, 3,
    3, 2,
    0, 7,
    1, 5,
    2, 5,
    2, 3,
    1, 7,
    3, 3,
    3, 5,
    4, 3,
    1, 6,
    5, 3,

    12,
    2, 3,
    1, 1,
    1, 7,
    1, 4,
    2, 7,
    3, 3,
    0, 8,
    2, 4,
    3, 7,
    3, 4,
    1, 8,
    1, 5
};
static const Int g12DeltaTable[] = {
    1, 1, 1, 1, 1, 0, 0,-1, 2, 1, 0, 0,
    2, 2,-1,-1,-1, 0,-2,-1, 0, 0,-2,-1,
   -1, 1, 0, 2, 0, 0, 0, 0,-2, 0, 1, 1,
    0, 1, 0, 1,-2, 0,-1,-1,-2,-1,-2,-2
};

/**********************************************************************
  Adapt fixed length codes based on discriminant
**********************************************************************/
static const Int THRESHOLD = 8;
static const Int MEMORY = 8;
 
Void AdaptDiscriminant (CAdaptiveHuffman *pAdHuff)
{
    Int iSym = pAdHuff->m_iNSymbols, t, dL, dH;
    const Int *pCodes, *pDelta = NULL;
    Bool bChange = FALSE;
    static const Int gMaxTables[] = { 0,0,0,0, 1,2, 4,2, 2,2, 0,0,5 };
    static const Int gSecondDisc[]= { 0,0,0,0, 0,0, 1,0, 0,0, 0,0,1 };

    if (!pAdHuff->m_bInitialize) {
        pAdHuff->m_bInitialize = 1;
        pAdHuff->m_iDiscriminant = pAdHuff->m_iDiscriminant1 = 0;
        pAdHuff->m_iTableIndex = gSecondDisc[iSym];//(gMaxTables[iSym] - 1) >> 1;
    }

    dL = dH = pAdHuff->m_iDiscriminant;
    if (gSecondDisc[iSym]) {
        dH = pAdHuff->m_iDiscriminant1;
    }

    if (dL < pAdHuff->m_iLowerBound) {
        pAdHuff->m_iTableIndex--;
        bChange = TRUE;
    }
    else if (dH > pAdHuff->m_iUpperBound) {
        pAdHuff->m_iTableIndex++;
        bChange = TRUE;
    }
    if (bChange) {
    /** if initialization is fixed, we can exit on !bChange **/
        pAdHuff->m_iDiscriminant = 0;
        pAdHuff->m_iDiscriminant1 = 0;
    }
    {
        if (pAdHuff->m_iDiscriminant < -THRESHOLD * MEMORY)
            pAdHuff->m_iDiscriminant = -THRESHOLD * MEMORY;
        else if (pAdHuff->m_iDiscriminant > THRESHOLD * MEMORY)
            pAdHuff->m_iDiscriminant = THRESHOLD * MEMORY;

        if (pAdHuff->m_iDiscriminant1 < -THRESHOLD * MEMORY)
            pAdHuff->m_iDiscriminant1 = -THRESHOLD * MEMORY;
        else if (pAdHuff->m_iDiscriminant1 > THRESHOLD * MEMORY)
            pAdHuff->m_iDiscriminant1 = THRESHOLD * MEMORY;
    }

    t = pAdHuff->m_iTableIndex;
    assert (t >= 0);
    assert (t < gMaxTables[iSym]);

    //pAdHuff->m_iDiscriminant >>= 1;
    pAdHuff->m_iLowerBound = (t == 0) ? (-1 << 31) : -THRESHOLD;
    pAdHuff->m_iUpperBound = (t == gMaxTables[iSym] - 1) ? (1 << 30) : THRESHOLD;

    switch (iSym) {
        case 4:
            pCodes = g4CodeTable;
            pAdHuff->m_hufDecTable = (short *) g4HuffLookupTable;
            break;
        case 5:
            pCodes = g5CodeTable + (iSym * 2 + 1) * t;
            pDelta = g5DeltaTable;
            pAdHuff->m_hufDecTable = g5HuffLookupTable[t];
            break;
        case 6:
            pCodes = g6CodeTable + (iSym * 2 + 1) * t;
            pAdHuff->m_pDelta1 = g6DeltaTable + iSym * (t - (t + 1 == gMaxTables[iSym]));
            pDelta = g6DeltaTable + (t - 1 + (t == 0)) * iSym;
            pAdHuff->m_hufDecTable = g6HuffLookupTable[t];
            break;
        case 7:
            pCodes = g7CodeTable + (iSym * 2 + 1) * t;
            pDelta = g7DeltaTable;
            pAdHuff->m_hufDecTable = g7HuffLookupTable[t];
            break;
        case 8:
            //printf ("%d ", t);
            pCodes = g8CodeTable;// + (iSym * 2 + 1) * t;
            //pDelta = g8DeltaTable;
            pAdHuff->m_hufDecTable = g8HuffLookupTable[0];
            break;
        case 9:
            pCodes = g9CodeTable + (iSym * 2 + 1) * t;
            pDelta = g9DeltaTable;
            pAdHuff->m_hufDecTable = g9HuffLookupTable[t];
            break;
        case 12:
            pCodes = g12CodeTable + (iSym * 2 + 1) * t;
            pAdHuff->m_pDelta1 = g12DeltaTable + iSym * (t - (t + 1 == gMaxTables[iSym]));
            pDelta = g12DeltaTable + (t - 1 + (t == 0)) * iSym;
            pAdHuff->m_hufDecTable = g12HuffLookupTable[t];
            break;
        default:
            assert (0); // undefined fixed length table
            return;
    }

    pAdHuff->m_pTable = pCodes;
    pAdHuff->m_pDelta = pDelta;
}

