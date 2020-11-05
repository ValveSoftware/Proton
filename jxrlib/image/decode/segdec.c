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
#include "decode.h"

#ifdef MEM_TRACE
#define TRACE_MALLOC    1
#define TRACE_NEW       0
#define TRACE_HEAP      0
#include "memtrace.h"
#endif

extern const int dctIndex[3][16];
extern const int blkOffset[16];
extern const int blkOffsetUV[4];
static Int DecodeSignificantAbsLevel (struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pIO);

//#undef X86OPT_INLINE

#ifdef X86OPT_INLINE
#define _FORCEINLINE __forceinline
#else // X86OPT_INLINE
#define _FORCEINLINE
#endif // X86OPT_INLINE

//================================================================
// Memory access functions
//================================================================
static U32 _FORCEINLINE _load4(void* pv)
{
#ifdef _BIG__ENDIAN_
    return (*(U32*)pv);
#else // _BIG__ENDIAN_
#if defined(_M_IA64) || defined(_ARM_)
    U32  v;
    v = ((U16 *) pv)[0];
    v |= ((U32)((U16 *) pv)[1]) << 16;
    return _byteswap_ulong(v);
#else // _M_IA64
    return _byteswap_ulong(*(U32*)pv);
#endif // _M_IA64
#endif // _BIG__ENDIAN_
}

static _FORCEINLINE U32 _peekBit16(BitIOInfo* pIO, U32 cBits)
{
    PEEKBIT16(pIO, cBits);
    // masking is not needed here because shift of unsigned int is implemented as a logical shift (SHR)!
}

#define LOAD16 _load4
static _FORCEINLINE U32 _flushBit16(BitIOInfo* pIO, U32 cBits)
{
    FLUSHBIT16(pIO, cBits);
}

static _FORCEINLINE U32 _getBit16(BitIOInfo* pIO, U32 cBits)
{
    U32 uiRet = _peekBit16(pIO, cBits);
    _flushBit16(pIO, cBits);

    return uiRet;
}

#define SIGN_BIT(TypeOrValue) (((UInt) 1) << (8 * sizeof (TypeOrValue) - 1))
/***********************************************************************************************************
  Huffman decode (input is a fully built Huffman table)
***********************************************************************************************************/
Int getHuff(const short *pDecodeTable, BitIOInfo* pIO)
{
    Int iSymbol, iSymbolHuff;
    iSymbol = pDecodeTable[peekBit16(pIO, HUFFMAN_DECODE_ROOT_BITS)];

    flushBit16(pIO, iSymbol < 0 ? HUFFMAN_DECODE_ROOT_BITS : iSymbol & ((1 << HUFFMAN_DECODE_ROOT_BITS_LOG) - 1));
	iSymbolHuff = iSymbol >> HUFFMAN_DECODE_ROOT_BITS_LOG;

	if (iSymbolHuff < 0) {
		iSymbolHuff = iSymbol;
        while ((iSymbolHuff = pDecodeTable[iSymbolHuff + SIGN_BIT (pDecodeTable[0]) + getBit16(pIO, 1)]) < 0);
	}
    return (iSymbolHuff);
}

#if 1
static _FORCEINLINE U32 _getBool16(BitIOInfo* pIO)
{
    U32 uiRet = pIO->uiAccumulator >> 31;//_peekBit16(pIO, 1);
    //_flushBit16(pIO, 1);
    pIO->cBitsUsed++;
    if (pIO->cBitsUsed < 16) {
        pIO->uiAccumulator <<= 1;
    }
    else {
        pIO->pbCurrent = MASKPTR(pIO->pbCurrent + ((pIO->cBitsUsed >> 3)/* & 2*/), pIO->iMask);
        pIO->cBitsUsed &= 16 - 1;
        pIO->uiAccumulator = LOAD16(pIO->pbCurrent) << pIO->cBitsUsed;
    }

    return uiRet;
}

static _FORCEINLINE I32 _getSign(BitIOInfo* pIO)
{
    I32 uiRet = (int) pIO->uiAccumulator >> 31;//_peekBit16(pIO, 1);
    //_flushBit16(pIO, 1);
    pIO->cBitsUsed++;
    if (pIO->cBitsUsed < 16) {
        pIO->uiAccumulator <<= 1;
    }
    else {
        pIO->pbCurrent = MASKPTR(pIO->pbCurrent + ((pIO->cBitsUsed >> 3)/* & 2*/), pIO->iMask);
        pIO->cBitsUsed &= 16 - 1;
        pIO->uiAccumulator = LOAD16(pIO->pbCurrent) << pIO->cBitsUsed;
    }

    return uiRet;
}
#else
#define _getBool16(x)   _getBit16((x),1)
#define _getSign(x)   (-_getBit16((x),1))
#endif

/** this function returns cBits if zero is read, or a signed value if first cBits are not all zero **/
static _FORCEINLINE I32 _getBit16s(BitIOInfo* pIO, U32 cBits)
{
    I32 iRet = (I32)_peekBit16(pIO, cBits + 1);
    iRet = ((iRet >> 1) ^ (-(iRet & 1))) + (iRet & 1);
    _flushBit16(pIO, cBits + (iRet != 0));
    return iRet;
}

/*************************************************************************
    Huffman decoding with short tables
*************************************************************************/
static _FORCEINLINE Int _getHuffShort(const short *pDecodeTable, BitIOInfo* pIO)
{
    Int iSymbol = pDecodeTable[_peekBit16(pIO, HUFFMAN_DECODE_ROOT_BITS)];
    assert(iSymbol >= 0);
    // for some strange reason, inlining flushBit doesn't work well
    flushBit16(pIO, iSymbol & ((1 << HUFFMAN_DECODE_ROOT_BITS_LOG) - 1));
    return (iSymbol >> HUFFMAN_DECODE_ROOT_BITS_LOG);
}
/*************************************************************************
    Adapt + Huffman init
*************************************************************************/
static Int AdaptDecFixed (CAdaptiveHuffman *pAH)
{
    AdaptDiscriminant (pAH);
    return ICERR_OK;
}

/*************************************************************************
    DecodeCBP
*************************************************************************/
static Void DecodeCBP(CWMImageStrCodec * pSC, CCodingContext *pContext)
{
    BitIOInfo* pIO = pContext->m_pIOAC;
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannel = (cf == NCOMPONENT || cf == CMYK) ? (Int) pSC->m_param.cNumChannels : 1;
    Int iCBPCY, iCBPCU , iCBPCV;
    Int k, iBlock, i;
    Int iNumCBP;
    Bool bIsChroma;
    CAdaptiveHuffman *pAHCBP = pContext->m_pAdaptHuffCBPCY;
    CAdaptiveHuffman *pAHCBP1 = pContext->m_pAdaptHuffCBPCY1;
    CAdaptiveHuffman *pAHex1 = pContext->m_pAHexpt[1];
        
    readIS_L1(pSC, pIO);

    for (i = 0; i < iChannel; i++) {

        iCBPCY = iCBPCU = iCBPCV = 0;
        iNumCBP = _getHuffShort(pAHCBP1->m_hufDecTable, pIO);
        pAHCBP1->m_iDiscriminant += pAHCBP1->m_pDelta[iNumCBP];

        switch (iNumCBP) {
            case 2:
                iNumCBP = _getBit16(pIO, 2);
                if (iNumCBP == 0)
                    iNumCBP = 3;
                else if (iNumCBP == 1)
                    iNumCBP = 5;
                else {
                    static const Int aTab[] = { 6, 9, 10, 12 };
                    iNumCBP = aTab[iNumCBP * 2 + _getBool16 (pIO) - 4];
                }
                break;
            case 1:
                iNumCBP = 1 << _getBit16(pIO, 2);
                break;
            case 3:
                iNumCBP = 0xf ^ (1 << _getBit16(pIO, 2));
                break;
            case 4:
                iNumCBP = 0xf;
        }

        for (iBlock = 0; iBlock < 4; iBlock++) {
            if (iNumCBP & (1 << iBlock)) {
                static const UInt gFLC0[] = { 0,2,1,2,2,0 };
                static const UInt gOff0[] = { 0,4,2,8,12,1 };
                static const UInt gOut0[] = { 0,15,3,12, 1,2,4,8, 5,6,9,10, 7,11,13,14 };
                Int iNumBlockCBP = getHuff(pAHCBP->m_hufDecTable, pIO);
                unsigned int val = (unsigned int) iNumBlockCBP + 1, iCode1;

                pAHCBP->m_iDiscriminant += pAHCBP->m_pDelta[iNumBlockCBP];
                iNumBlockCBP = 0;

                if (val >= 6) { // chroma present
                    if (_getBool16 (pIO)) {
                        iNumBlockCBP = 0x10;
                    }
                    else if (_getBool16 (pIO)) {
                        iNumBlockCBP = 0x20;
                    }
                    else {
                        iNumBlockCBP = 0x30;
                    }
                    if (val == 9) {
                        if (_getBool16 (pIO)) {
                            // do nothing
                        }
                        else if (_getBool16 (pIO)) {
                            val = 10;
                        }
                        else {
                            val = 11;
                        }
                    }
                    val -= 6;
                }
                iCode1 = gOff0[val];
                if (gFLC0[val]) {
                    iCode1 += _getBit16(pIO, gFLC0[val]);
                }
                iNumBlockCBP += gOut0[iCode1];

                switch (cf) {
                    case YUV_444:
                        iCBPCY |= ((iNumBlockCBP & 0xf) << (iBlock * 4));
                        for (k = 0; k < 2; k++) {
                            bIsChroma = ((iNumBlockCBP>>(k+4)) & 0x01);
                            if (bIsChroma) { // U is present in block
                                Int iCode = _getHuffShort(pAHex1->m_hufDecTable, pIO);
                                switch (iCode) { 
                            case 1:
                                iCode = _getBit16(pIO, 2);
                                if (iCode == 0)
                                    iCode = 3;
                                else if (iCode == 1)
                                    iCode = 5;
                                else {
                                    static const Int aTab[] = { 6, 9, 10, 12 };
                                    iCode = aTab[iCode * 2 + _getBool16 (pIO) - 4];
                                }
                                break;
                            case 0:
                                iCode = 1 << _getBit16(pIO, 2);
                                break;
                            case 2:
                                iCode = 0xf ^ (1 << _getBit16(pIO, 2));
                                break;
                            case 3:
                                iCode = 0xf;
                                }
                                if (k == 0)
                                    iCBPCU |= (iCode << (iBlock * 4));
                                else 
                                    iCBPCV |= (iCode << (iBlock * 4));
                            }
                        }
                        break;

                    case YUV_420:
                        iCBPCY |= ((iNumBlockCBP & 0xf) << (iBlock * 4));
                        iCBPCU |= ((iNumBlockCBP >> 4) & 0x1) << (iBlock);
                        iCBPCV |= ((iNumBlockCBP >> 5) & 0x1) << (iBlock);
                        break;

                    case YUV_422:
                        iCBPCY |= ((iNumBlockCBP & 0xf) << (iBlock * 4));
                        for (k = 0; k < 2; k ++) {
                            Int iCode = 5;
                            const Int iShift[4] = {0, 1, 4, 5};
                            if((iNumBlockCBP >> (k + 4)) & 0x01) {
                                if(_getBool16(pIO)) {
                                    iCode = 1;
                                }
                                else if(_getBool16(pIO)){
                                    iCode = 4;
                                }
                                iCode <<= iShift[iBlock];
                                if(k == 0) iCBPCU |= iCode;
                                else iCBPCV |= iCode;
                            }
                        }
                        break;

                    default:
                        iCBPCY |= (iNumBlockCBP << (iBlock * 4));
                }
            }
        }

        pSC->MBInfo.iDiffCBP[i] = iCBPCY;
        if (cf == YUV_420 || cf == YUV_444 || cf == YUV_422) {
            pSC->MBInfo.iDiffCBP[1] = iCBPCU;
            pSC->MBInfo.iDiffCBP[2] = iCBPCV;
        }
    }
}

/*************************************************************************
    Experimental code -- decodeBlock
    SR = <0 1 2> == <last, nonsignificant, significant run>
    alphabet 12:
        pAHexpt[0] == <SR', SL, SR | first symbol>
    alphabet 6:
        pAHexpt[1] == <SR', SL | continuous>
        pAHexpt[2] == <SR', SL | continuous>
    alphabet 4:
        pAHexpt[3] == <SR', SL | 2 free slots> (SR may be last or insignificant only)
    alphabet f(run) (this can be extended to 6 contexts - SL and SR')
        pAHexpt[4] == <run | continuous>
    alphabet f(lev) (this can be extended to 9 contexts)
        pAHexpt[5-6] == <lev | continuous> first symbol
        pAHexpt[7-8] == <lev | continuous> condition on SRn no use
*************************************************************************/

Int _FORCEINLINE DecodeSignificantRun (Int iMaxRun, struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pIO)
{
    Int iIndex;
    static const Int aRemap[] = {1,2,3,5,7,   1,2,3,5,7,   /*1,2,3,4,6,  */1,2,3,4,5 };
    Int iBin = gSignificantRunBin[iMaxRun];
    Int iRun = 0, iFLC = 0;

    if (iMaxRun < 5) {
        if (iMaxRun == 1) {
            return 1;
        }
        else if (_getBool16 (pIO)) {
            return 1;
        }
        else if (iMaxRun == 2 || _getBool16 (pIO)) {
            return 2;
        }
        else if (iMaxRun == 3 || _getBool16 (pIO)) {
            return 3;
        }
        return 4;
    }
    iIndex = _getHuffShort (pAHexpt->m_hufDecTable, pIO);
    iIndex += iBin * 5;
    iRun = aRemap[iIndex];
    iFLC = gSignificantRunFixedLength[iIndex];
    if (iFLC) {
        iRun += _getBit16 (pIO, iFLC);
    }
    return iRun;
}

#ifndef X86OPT_INLINE
static Void DecodeFirstIndex (Int *pIndex, struct CAdaptiveHuffman *pAHexpt, 
                      BitIOInfo* pIO)
#else
static __forceinline Void DecodeFirstIndex (Int *pIndex, struct CAdaptiveHuffman *pAHexpt, 
                      BitIOInfo* pIO)
#endif
{
    Int iIndex;
    iIndex = getHuff (pAHexpt->m_hufDecTable, pIO);
    pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
    pAHexpt->m_iDiscriminant1 += pAHexpt->m_pDelta1[iIndex];
    *pIndex = iIndex;
}

#ifndef X86OPT_INLINE
static Void DecodeIndex (Int *pIndex, Int iLoc, struct CAdaptiveHuffman *pAHexpt, 
                 BitIOInfo* pIO)
#else
static __forceinline Void DecodeIndex (Int *pIndex, Int iLoc,
                                       struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pIO)
#endif
{
    Int iIndex;
    if (iLoc < 15) {
        iIndex = _getHuffShort (pAHexpt->m_hufDecTable, pIO);
        pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
        pAHexpt->m_iDiscriminant1 += pAHexpt->m_pDelta1[iIndex];
        *pIndex = iIndex;
    }
    else if (iLoc == 15) {
        if (_getBool16 (pIO) == 0) {
            iIndex = 0;
        }
        else if (_getBool16 (pIO) == 0) {
            iIndex = 2;
        }
        else {
            iIndex = 1 + 2 * _getBool16 (pIO);
        }
        *pIndex = iIndex;
    }
    else { //if (iLoc == 16) { /* deterministic */
        Int iSL = _getBit16 (pIO, 1/* + 1*/);
        *pIndex = iSL;// >> 1;
    }
}

static _FORCEINLINE Int DecodeBlock (Bool bChroma, Int *aLocalCoef, struct CAdaptiveHuffman **pAHexpt,
                        const Int iContextOffset, BitIOInfo* pIO, Int iLocation)
{
    Int iSR, iSRn, iIndex, iNumNonzero = 1, iCont, iSign;
    struct CAdaptiveHuffman **pAH1 = pAHexpt + iContextOffset + bChroma * 3;

    /** first symbol **/
    DecodeFirstIndex (&iIndex, /*&iSign, */pAH1[0], pIO);
    iSR = (iIndex & 1);
    iSRn = iIndex >> 2;

    iCont = iSR & iSRn;
    iSign = _getSign(pIO);

    if (iIndex & 2 /* iSL */) {
        aLocalCoef[1] = (DecodeSignificantAbsLevel (pAHexpt[6 + iContextOffset + iCont], pIO) ^ iSign) - iSign;
    }
    else {
        aLocalCoef[1] = (1 | iSign); // 0 -> 1; -1 -> -1
    }
    aLocalCoef[0] = 0;
    if (iSR == 0) {
        aLocalCoef[0] = DecodeSignificantRun (15 - iLocation, pAHexpt[0], pIO);
    }
    iLocation += aLocalCoef[0] + 1;

    while (iSRn != 0) {
        iSR = iSRn & 1;
        aLocalCoef[iNumNonzero * 2] = 0;
        if (iSR == 0) {
            aLocalCoef[iNumNonzero * 2] = DecodeSignificantRun (15 - iLocation, pAHexpt[0], pIO);
        }
        iLocation += aLocalCoef[iNumNonzero * 2] + 1;
        DecodeIndex (&iIndex, /*&iSign, */iLocation, pAH1[iCont + 1], pIO);
        iSRn = iIndex >> 1;

        assert (iSRn >= 0 && iSRn < 3);
        iCont &= iSRn;  /** huge difference! **/
        iSign = _getSign(pIO);

        if (iIndex & 1 /* iSL */) {
            aLocalCoef[iNumNonzero * 2 + 1] = 
                (DecodeSignificantAbsLevel (pAHexpt[6 + iContextOffset + iCont], pIO) ^ iSign) - iSign;
        }
        else {
            aLocalCoef[iNumNonzero * 2 + 1] = (1 | iSign); // 0 -> 1; -1 -> -1 (was 1 + (iSign * 2))
        }
        iNumNonzero++;
    }
    return iNumNonzero;
}

/*************************************************************************
    DecodeBlockHighpass : 
*************************************************************************/
static _FORCEINLINE Int DecodeBlockHighpass (const Bool bChroma, struct CAdaptiveHuffman **pAHexpt,
                       BitIOInfo* pIO, const Int iQP, Int *pCoef, CAdaptiveScan *pScan)
{
    const Int iContextOffset = CTDC + CONTEXTX;
    UInt  iLoc = 1;
    Int iSR, iSRn, iIndex, iNumNonzero = 1, iCont, iSign, iLevel;
    struct CAdaptiveHuffman **pAH1 = pAHexpt + iContextOffset + bChroma * 3;
    const CAdaptiveScan *pConstScan = (const CAdaptiveScan *) pScan;

    /** first symbol **/
    DecodeFirstIndex (&iIndex, /*&iSign, */pAH1[0], pIO);
    iSR = (iIndex & 1);
    iSRn = iIndex >> 2;

    iCont = iSR & iSRn;
    iSign = _getSign(pIO);

    iLevel = (iQP ^ iSign) - iSign;
    if (iIndex & 2 /* iSL */) {
        iLevel *= DecodeSignificantAbsLevel (pAHexpt[6 + iContextOffset + iCont], pIO);// ^ iSign) - iSign;
    }
    //else {
    //    iLevel = (1 | iSign); // 0 -> 1; -1 -> -1
    //}
    if (iSR == 0) {
       iLoc += DecodeSignificantRun (15 - iLoc, pAHexpt[0], pIO);
    }
    iLoc &= 0xf;
	pCoef[pConstScan[iLoc].uScan] = (PixelI) iLevel;//(PixelI)(iQP * iLevel);
    pScan[iLoc].uTotal++;
	if (iLoc && pScan[iLoc].uTotal > pScan[iLoc - 1].uTotal) {
		CAdaptiveScan cTemp = pScan[iLoc];
		pScan[iLoc] = pScan[iLoc - 1];
		pScan[iLoc - 1] = cTemp;
    }
    iLoc = (iLoc + 1) & 0xf;
    //iLoc++;

    while (iSRn != 0) {
        iSR = iSRn & 1;
        if (iSR == 0) {
            iLoc += DecodeSignificantRun (15 - iLoc, pAHexpt[0], pIO);
            if (iLoc >= 16)
                return 16;
        }
        DecodeIndex (&iIndex, /*&iSign, */iLoc + 1, pAH1[iCont + 1], pIO);
        iSRn = iIndex >> 1;

        assert (iSRn >= 0 && iSRn < 3);
        iCont &= iSRn;  /** huge difference! **/
        iSign = _getSign(pIO);

        iLevel = (iQP ^ iSign) - iSign;
        if (iIndex & 1 /* iSL */) {
            iLevel *= DecodeSignificantAbsLevel (pAHexpt[6 + iContextOffset + iCont], pIO);// ^ iSign) - iSign;
            //iLevel = (DecodeSignificantAbsLevel (pAHexpt[6 + iContextOffset + iCont], pIO) ^ iSign) - iSign;
        }
        //else {
        //    iLevel = (1 | iSign); // 0 -> 1; -1 -> -1 (was 1 + (iSign * 2))
        //}
       
	    pCoef[pConstScan[iLoc].uScan] = (PixelI) iLevel;//(PixelI)(iQP * iLevel);
        pScan[iLoc].uTotal++;
	    if (iLoc && pScan[iLoc].uTotal > pScan[iLoc - 1].uTotal) {
		    CAdaptiveScan cTemp = pScan[iLoc];
		    pScan[iLoc] = pScan[iLoc - 1];
		    pScan[iLoc - 1] = cTemp;
        }

        iLoc = (iLoc + 1) & 0xf;
        iNumNonzero++;
    }
    return iNumNonzero;
}

/*************************************************************************
    DecodeBlockAdaptive
*************************************************************************/
static _FORCEINLINE Int DecodeBlockAdaptive (Bool bNoSkip, Bool bChroma, CAdaptiveHuffman **pAdHuff,
                                BitIOInfo *pIO, BitIOInfo *pIOFL,
                                PixelI *pCoeffs, CAdaptiveScan *pScan,
                                const Int iModelBits, const Int iTrim, const Int iQP,
                                const Int *pOrder, const Bool bSkipFlexbits)
{
    // const Int iLocation = 1;
    // const Int iContextOffset = CTDC + CONTEXTX;
    Int kk, iNumNonzero = 0, iFlex = iModelBits - iTrim;

    if (iFlex < 0 || bSkipFlexbits)
        iFlex = 0;

    if (bNoSkip) {
        const Int iQP1 = (iQP << iModelBits);
        iNumNonzero = DecodeBlockHighpass (bChroma, pAdHuff, pIO, iQP1, pCoeffs, pScan);
    }
    if (iFlex) {
        UInt k;
        if (iQP + iTrim == 1) { // only iTrim = 0, iQP = 1 is legal
            assert (iTrim == 0);
            assert (iQP == 1);

            for (k = 1; k < 16; k++) {
                PixelI *pk = pCoeffs + pOrder[k];
                if (*pk < 0) {
                    Int fine = _getBit16(pIOFL, iFlex);
                    *pk -= (PixelI)(fine);
                }
                else if (*pk > 0) {
                    Int fine = _getBit16(pIOFL, iFlex);
                    *pk += (PixelI)(fine);
                }
                else {
                    *pk = (PixelI)(_getBit16s(pIOFL, iFlex));
                }
            }
        }
        else {
            const Int iQP1 = iQP << iTrim;
            for (k = 1; k < 16; k++) {
                kk = pCoeffs[pOrder[k]];
                if (kk < 0) {
                    Int fine = _getBit16(pIOFL, iFlex);
                    pCoeffs[pOrder[k]] -= (PixelI)(iQP1 * fine);
                }
                else if (kk > 0) {
                    Int fine = _getBit16(pIOFL, iFlex);
                    pCoeffs[pOrder[k]] += (PixelI)(iQP1 * fine);
                }
                else {
                    pCoeffs[pOrder[k]] = (PixelI)(iQP1 * _getBit16s(pIOFL, iFlex));
                }
            }
        }
    }

    return iNumNonzero;
}


/*************************************************************************
    GetCoeffs
*************************************************************************/
static _FORCEINLINE Int DecodeCoeffs (CWMImageStrCodec * pSC, CCodingContext *pContext,
                         Int iMBX, Int iMBY,
                         BitIOInfo* pIO, BitIOInfo *pIOFL)
{
    CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;
    const Int iPlanes = (cf == YUV_420 || cf == YUV_422) ? 1 : iChannels;
    Int  iQP;
    CAdaptiveScan *pScan;
    PixelI  *pCoeffs;
    Int i, iBlock, iSubblock, iNBlocks = 4;
    Int iModelBits = pContext->m_aModelAC.m_iFlcBits[0];
    Int aLaplacianMean[2] = { 0, 0}, *pLM = aLaplacianMean + 0;
    const Int *pOrder = dctIndex[0];
    const Int iOrient = pSC->MBInfo.iOrientation;
    Bool bChroma = FALSE;

    Int iCBPCU = pSC->MBInfo.iCBP[1];
    Int iCBPCV = pSC->MBInfo.iCBP[2];
    Int iCBPCY = pSC->MBInfo.iCBP[0];

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    /** set scan arrays and other MB level constants **/
    if (iOrient == 1) {
        pScan = pContext->m_aScanVert;
    }
    else {
        pScan = pContext->m_aScanHoriz;
    }

    if (cf == YUV_420) {
        iNBlocks = 6;
        iCBPCY += (iCBPCU << 16) + (iCBPCV << 20);
    }
    else if (cf == YUV_422) {
        iNBlocks = 8;
        iCBPCY += (iCBPCU << 16) + (iCBPCV << 24);
    }

    for (i = 0; i < iPlanes; i++) {
        Int iIndex = 0, iNumNonZero;

        if(pSC->WMISCP.sbSubband != SB_NO_FLEXBITS)
            readIS_L1(pSC, pIOFL);

        for (iBlock = 0; iBlock < iNBlocks; iBlock++) {

            readIS_L2(pSC, pIO);
            if (pIO != pIOFL)
                readIS_L2(pSC, pIOFL);

            iQP = (pSC->m_param.bTranscode ? 1 : pTile->pQuantizerHP[iPlanes > 1 ? i : (iBlock > 3 ? (cf == YUV_420 ? iBlock - 3 : iBlock / 2 - 1) : 0)][pSC->MBInfo.iQIndexHP].iQP);

            for (iSubblock = 0; iSubblock < 4; iSubblock++, iIndex++, iCBPCY >>= 1) {
                pCoeffs = pSC->p1MBbuffer[i] + blkOffset[iIndex & 0xf];

                //if (iBlock < 4) {//(cf == YUV_444) {
                    //bBlockNoSkip = ((iTempCBPC & (1 << iIndex1)) != 0);
                    //pCoeffs = pSC->p1MBbuffer[iBlock >> 2] + blkOffset[iIndex & 0xf];
                //}
                //else {
                if (iBlock >= 4) {
                    if(cf == YUV_420) {
                        pCoeffs = pSC->p1MBbuffer[iBlock - 3] + blkOffsetUV[iSubblock];
                    }
                    else { // YUV_422
                        pCoeffs = pSC->p1MBbuffer[1 + (1 & (iBlock >> 1))] + ((iBlock & 1) * 32) + blkOffsetUV_422[iSubblock];
                    }
                }

                /** read AC values **/
                assert (pSC->m_Dparam->bSkipFlexbits == 0 || pSC->WMISCP.bfBitstreamFormat == FREQUENCY || pSC->WMISCP.sbSubband == SB_NO_FLEXBITS);
                iNumNonZero = DecodeBlockAdaptive ((iCBPCY & 1), bChroma, pContext->m_pAHexpt,
                    pIO, pIOFL, pCoeffs, pScan, iModelBits, pContext->m_iTrimFlexBits,
                    iQP, pOrder, pSC->m_Dparam->bSkipFlexbits);
                if(iNumNonZero > 16) // something is wrong!
                    return ICERR_ERROR;
                // shouldn't this be > 15?
                (*pLM) += iNumNonZero;
            }
            if (iBlock == 3) {
                iModelBits = pContext->m_aModelAC.m_iFlcBits[1];
                pLM = aLaplacianMean + 1;
                bChroma = TRUE;
            }
        }

        iCBPCY = pSC->MBInfo.iCBP[(i + 1) & 0xf];
        assert (MAX_CHANNELS == 16);
    }

    /** update model at end of MB **/
    UpdateModelMB (cf, iChannels, aLaplacianMean, &(pContext->m_aModelAC));
    return ICERR_OK;
}

/*************************************************************************
    DecodeSignificantAbsLevel
*************************************************************************/
#ifndef X86OPT_INLINE
static Int DecodeSignificantAbsLevel (struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pIO)
#else
static __forceinline Int DecodeSignificantAbsLevel (struct CAdaptiveHuffman *pAHexpt, BitIOInfo* pIO)
#endif
{
    UInt iIndex;
    Int iFixed, iLevel;
    static const Int aRemap[] = { 2, 3, 4, 6, 10, 14 };
    static const Int aFixedLength[] = { 0, 0, 1, 2, 2, 2 };

    iIndex = (UInt)getHuff (pAHexpt->m_hufDecTable, pIO);
    assert(iIndex <= 6);
    pAHexpt->m_iDiscriminant += pAHexpt->m_pDelta[iIndex];
    if (iIndex < 2) {
        iLevel = iIndex + 2; // = aRemap[iIndex]
    }
    else if (iIndex < 6) {
        iFixed = aFixedLength[iIndex];
        iLevel = aRemap[iIndex] + _getBit16 (pIO, iFixed);
    }
    else{
        iFixed = _getBit16 (pIO, 4) + 4;
        if (iFixed == 19) {
            iFixed += _getBit16 (pIO, 2);
            if (iFixed == 22) {
                iFixed += _getBit16 (pIO, 3);
            }
        }
        iLevel = 2 + (1 << iFixed);
        iIndex = getBit32 (pIO, iFixed);
        iLevel += iIndex;
    }
    return iLevel;
}

U8 decodeQPIndex(BitIOInfo* pIO,U8 cBits)
{
    if(_getBit16(pIO, 1) == 0)
        return 0;
    return (U8)(_getBit16(pIO, cBits) + 1);
}

/*************************************************************************
    DecodeSecondStageCoeff
*************************************************************************/
Int DecodeMacroblockLowpass (CWMImageStrCodec * pSC, CCodingContext *pContext,
        Int iMBX, Int iMBYdummy)
{
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;
    const Int iFullPlanes = (cf == YUV_420 || cf == YUV_422) ? 2 : iChannels;
    Int k;
	CAdaptiveScan *pScan = pContext->m_aScanLowpass;
    BitIOInfo* pIO = pContext->m_pIOLP;
    Int iModelBits = pContext->m_aModelLP.m_iFlcBits[0];
    Int aRLCoeffs[32], iNumNonzero = 0, iIndex = 0;
    Int aLaplacianMean[2] = { 0, 0}, *pLM = aLaplacianMean;
    Int iChannel, iCBP = 0;
#ifndef ARMOPT_BITIO    // ARM opt always uses 32-bit version of getBits
    U32 (*getBits)(BitIOInfo* pIO, U32 cBits) = _getBit16;
#endif
    CWMIMBInfo * pMBInfo = &pSC->MBInfo;
    I32 *aDC[MAX_CHANNELS];

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBYdummy );

    readIS_L1(pSC, pIO);
    if((pSC->WMISCP.bfBitstreamFormat != SPATIAL) && (pSC->pTile[pSC->cTileColumn].cBitsLP > 0))  // MB-based LP QP index
        pMBInfo->iQIndexLP = decodeQPIndex(pIO, pSC->pTile[pSC->cTileColumn].cBitsLP);
    
    // set arrays
    for (k = 0; k < (Int) pSC->m_param.cNumChannels; k++) {
        aDC[k & 15] = pMBInfo->iBlockDC[k];
    }

    /** reset adaptive scan totals **/
    if (pSC->m_bResetRGITotals) {
        int iScale = 2;
        int iWeight = iScale * 16;
		pScan[0].uTotal = MAXTOTAL;
        for (k = 1; k < 16; k++) {
			pScan[k].uTotal = iWeight;
            iWeight -= iScale;
        }
    }

    /** in raw mode, this can take 6% of the bits in the extreme low rate case!!! **/
    if (cf == YUV_420 || cf == YUV_422 || cf == YUV_444) {
        int iCountM = pContext->m_iCBPCountMax, iCountZ = pContext->m_iCBPCountZero;
        int iMax = iFullPlanes * 4 - 5; /* actually (1 << iNChannels) - 1 **/
        if (iCountZ <= 0 || iCountM < 0) {
            iCBP = 0;
            if (_getBool16 (pIO)) {
                iCBP = 1;
                k = _getBit16 (pIO, iFullPlanes - 1);
                if (k) {
                    iCBP = k * 2 + _getBit16(pIO, 1);
                }
            }
            if (iCountM < iCountZ)
                iCBP = iMax - iCBP;
        }
        else {
            iCBP = _getBit16(pIO, iFullPlanes);
        }

        iCountM += 1 - 4 * (iCBP == iMax);//(b + c - 2*a);
        iCountZ += 1 - 4 * (iCBP == 0);//(a + b - 2*c);
        if (iCountM < -8)
            iCountM = -8;
        else if (iCountM > 7)
            iCountM = 7;
        pContext->m_iCBPCountMax = iCountM;

        if (iCountZ < -8)
            iCountZ = -8;
        else if (iCountZ > 7)
            iCountZ = 7;
        pContext->m_iCBPCountZero = iCountZ;
    }
    else { /** 1 or N channel **/
        for (iChannel = 0; iChannel < iChannels; iChannel++)
            iCBP |= (getBits (pIO, 1) << iChannel);
    }

#ifndef ARMOPT_BITIO    // ARM opt always uses 32-bit version of getBits
    if (pContext->m_aModelLP.m_iFlcBits[0] > 14 || pContext->m_aModelLP.m_iFlcBits[1] > 14) {
        getBits = getBit32;
    }
#endif

    for (iChannel = 0; iChannel < iFullPlanes; iChannel++) {
        PixelI *pCoeffs = aDC[iChannel];

        if (iCBP & 1) {
            iNumNonzero = DecodeBlock (iChannel > 0, aRLCoeffs, pContext->m_pAHexpt,
                CTDC, pIO, 1 + 9 * ((cf == YUV_420) && (iChannel == 1))
                + ((cf == YUV_422) && (iChannel == 1)));

            if ((cf == YUV_420 || cf == YUV_422) && iChannel) {
                Int aTemp[16]; //14 required, 16 for security
                static const Int aRemap[] = { 4,  1,2,3,  5,6,7 };
                const Int *pRemap = aRemap + (cf == YUV_420);
                const Int iCount = (cf == YUV_420) ? 6 : 14;

                (*pLM) += iNumNonzero;
                iIndex = 0;
                memset (aTemp, 0, sizeof(aTemp));

                for (k = 0; k < iNumNonzero; k++) {
                    iIndex += aRLCoeffs[k * 2];
                    aTemp[iIndex & 0xf] = aRLCoeffs[k * 2 + 1];
                    iIndex++;
                }

                for (k = 0; k < iCount; k++) {
                    aDC[(k & 1) + 1][pRemap[k >> 1]] = aTemp[k];
                }
            }
            else {
                (*pLM) += iNumNonzero;
                iIndex = 1;

                for (k = 0; k < iNumNonzero; k++) {
                    iIndex += aRLCoeffs[k * 2];
					pCoeffs[pScan[iIndex].uScan] = aRLCoeffs[k * 2 + 1];
					pScan[iIndex].uTotal++;
					if (pScan[iIndex].uTotal > pScan[iIndex - 1].uTotal) {
						CAdaptiveScan cTemp = pScan[iIndex];
						pScan[iIndex] = pScan[iIndex - 1];
						pScan[iIndex - 1] = cTemp;
					}
                    iIndex++;
                }
            }
        }

        if (iModelBits) {
            if ((cf == YUV_420 || cf == YUV_422) && iChannel) {
                for (k = 1; k < (cf == YUV_420 ? 4 : 8); k++) {
                    if (aDC[1][k] > 0) {
                        aDC[1][k] <<= iModelBits;
                        aDC[1][k] += getBits (pIO, iModelBits);
                    }
                    else if (aDC[1][k] < 0) {
                        aDC[1][k] <<= iModelBits;
                        aDC[1][k] -= getBits (pIO, iModelBits);
                    }
                    else {
                        aDC[1][k] = getBits (pIO, iModelBits);
                        if (aDC[1][k] && _getBool16 (pIO))
                            aDC[1][k] = -aDC[1][k];
                    }

                    if (aDC[2][k] > 0) {
                        aDC[2][k] <<= iModelBits;
                        aDC[2][k] += getBits (pIO, iModelBits);
                    }
                    else if (aDC[2][k] < 0) {
                        aDC[2][k] <<= iModelBits;
                        aDC[2][k] -= getBits (pIO, iModelBits);
                    }
                    else {
                        aDC[2][k] = getBits (pIO, iModelBits);
                        if (aDC[2][k] && _getBool16 (pIO))
                            aDC[2][k] = -aDC[2][k];
                    }
                }
            }
            else {
#ifdef WIN32
                const Int iMask = (1 << iModelBits) - 1;
#endif // WIN32
                for (k = 1; k < 16; k++) {
#ifdef WIN32
                    if (pCoeffs[k]) {
                        Int r1 = _rotl(pCoeffs[k], iModelBits);
                        pCoeffs[k] = (r1 ^ getBits(pIO, iModelBits)) - (r1 & iMask);
                    }
#else // WIN32
                    if (pCoeffs[k] > 0) {
                        pCoeffs[k] <<= iModelBits;
                        pCoeffs[k] += getBits (pIO, iModelBits);
                    }
                    else if (pCoeffs[k] < 0) {
                        pCoeffs[k] <<= iModelBits;
                        pCoeffs[k] -= getBits (pIO, iModelBits);
                    }
#endif // WIN32
                    else {
                        //pCoeffs[k] = getBits (pIO, iModelBits);
                        //if (pCoeffs[k] && _getBool16 (pIO))
                        //    pCoeffs[k] = -pCoeffs[k];
                        Int r1 = _peekBit16 (pIO, iModelBits + 1);
                        pCoeffs[k] = ((r1 >> 1) ^ (-(r1 & 1))) + (r1 & 1);
                        _flushBit16 (pIO, iModelBits + (pCoeffs[k] != 0));
                    }
                }
            }
        }
        pLM = aLaplacianMean + 1;
        iModelBits = pContext->m_aModelLP.m_iFlcBits[1];

        iCBP >>= 1;
    }

    UpdateModelMB (cf, iChannels, aLaplacianMean, &(pContext->m_aModelLP));

    if (pSC->m_bResetContext) {
        AdaptLowpassDec(pContext);
    }

    return ICERR_OK;
}

/*************************************************************************
    8 bit YUV 420 macroblock decode function with 4x4 transform
    Index order is as follows:
    Y:              U:      V:
     0  1  4  5     16 17   20 21
     2  3  6  7     18 19   22 23
     8  9 12 13
    10 11 14 15

    DCAC coefficients stored for 4x4 - offsets (x == no storage)
    Y:
    x x x [0..3]
    x x x [4..7]
    x x x [8..11]
    [16..19] [20..23] [24..27] [28..31,12..15]

    U, V:
    x [0..3]
    [8..11] [4..7,12..15]
*************************************************************************/
Int DecodeMacroblockDC(CWMImageStrCodec * pSC, CCodingContext *pContext, Int iMBX, Int iMBY)
{
    CWMITile * pTile = pSC->pTile + pSC->cTileColumn;
    CWMIMBInfo * pMBInfo = &pSC->MBInfo;
    const COLORFORMAT cf = pSC->m_param.cfColorFormat;
    const Int iChannels = (Int) pSC->m_param.cNumChannels;
    BitIOInfo* pIO = pContext->m_pIODC;
    Int iIndex, i;
    Int aLaplacianMean[2] = { 0, 0}, *pLM = aLaplacianMean;
    Int iModelBits = pContext->m_aModelDC.m_iFlcBits[0];
    struct CAdaptiveHuffman *pAH;
    Int iQDCY, iQDCU, iQDCV;
    // const Int iChromaElements = (cf == YUV_420) ? 8 * 8 : ((cf == YUV_422) ? 8 * 16 : 16 * 16);

    UNREFERENCED_PARAMETER( iMBX );
    UNREFERENCED_PARAMETER( iMBY );

    for (i = 0; i < iChannels; i++)
        memset (pMBInfo->iBlockDC[i], 0, 16 * sizeof (I32));

    readIS_L1(pSC, pIO);

    pMBInfo->iQIndexLP = pMBInfo->iQIndexHP = 0;

    if(pSC->WMISCP.bfBitstreamFormat == SPATIAL && pSC->WMISCP.sbSubband != SB_DC_ONLY){
        if(pTile->cBitsLP > 0)  // MB-based LP QP index
            pMBInfo->iQIndexLP = decodeQPIndex(pIO, pTile->cBitsLP);
        if( pSC->WMISCP.sbSubband != SB_NO_HIGHPASS && pTile->cBitsHP > 0)  // MB-based HP QP index
            pMBInfo->iQIndexHP = decodeQPIndex(pIO, pTile->cBitsHP);
    }
    if(pTile->cBitsHP == 0 && pTile->cNumQPHP > 1) // use LP QP
        pMBInfo->iQIndexHP = pMBInfo->iQIndexLP;
    if (pMBInfo->iQIndexLP >= pTile->cNumQPLP || pMBInfo->iQIndexHP >= pTile->cNumQPHP)
        return ICERR_ERROR;

    if(cf == Y_ONLY || cf == CMYK || cf == NCOMPONENT) {
        for (i = 0; i < iChannels; i++) {
            iQDCY = 0;
            /** get luminance DC **/
            if (_getBool16 (pIO)) {
                iQDCY = DecodeSignificantAbsLevel(pContext->m_pAHexpt[3], pIO) - 1;
                *pLM += 1;
            }
            if (iModelBits) {
                iQDCY = (iQDCY << iModelBits) | _getBit16(pIO, iModelBits);
            }
            if (iQDCY && _getBool16 (pIO))
                iQDCY = -iQDCY;
            pMBInfo->iBlockDC[i][0] = iQDCY;

            pLM = aLaplacianMean + 1;
            iModelBits = pContext->m_aModelDC.m_iFlcBits[1];
        }
    }
    else {
        /** find significant level in 3D **/
        pAH = pContext->m_pAHexpt[2];
        iIndex = getHuff (pAH->m_hufDecTable, pIO);
        iQDCY = iIndex >> 2;
        iQDCU = (iIndex >> 1) & 1;
        iQDCV = iIndex & 1;

        /** get luminance DC **/
        if (iQDCY) {
            iQDCY = DecodeSignificantAbsLevel(pContext->m_pAHexpt[3], pIO) - 1;
            *pLM += 1;
        }
        if (iModelBits) {
            iQDCY = (iQDCY << iModelBits) | _getBit16(pIO, iModelBits);
        }
        if (iQDCY && _getBool16 (pIO))
            iQDCY = -iQDCY;
        pMBInfo->iBlockDC[0][0] = iQDCY;

        /** get chrominance DC **/        
        pLM = aLaplacianMean + 1;
        iModelBits = pContext->m_aModelDC.m_iFlcBits[1];

        if (iQDCU) {
            iQDCU = DecodeSignificantAbsLevel(pContext->m_pAHexpt[4], pIO) - 1;
            *pLM += 1;
        }
        if (iModelBits) {
            iQDCU = (iQDCU << iModelBits) | _getBit16(pIO, iModelBits);
        }
        if (iQDCU && _getBool16 (pIO))
            iQDCU = -iQDCU;
        pMBInfo->iBlockDC[1][0] = iQDCU;

        if (iQDCV) {
            iQDCV = DecodeSignificantAbsLevel(pContext->m_pAHexpt[4], pIO) - 1;
            *pLM += 1;
        }
        if (iModelBits) {
            iQDCV = (iQDCV << iModelBits) | _getBit16(pIO, iModelBits);
        }
        if (iQDCV && _getBool16 (pIO))
            iQDCV = -iQDCV;
        pMBInfo->iBlockDC[2][0] = iQDCV;
    }

    UpdateModelMB (cf, iChannels, aLaplacianMean, &(pContext->m_aModelDC));
    
    if(((!(pSC->WMISCP.bfBitstreamFormat != FREQUENCY || pSC->m_Dparam->cThumbnailScale < 16)) || pSC->WMISCP.sbSubband == SB_DC_ONLY) && pSC->m_bResetContext){
        Int kk;
        for (kk = 2; kk < 5; kk++) {
            if (ICERR_OK != AdaptDecFixed (pContext->m_pAHexpt[kk])) {
                return ICERR_ERROR;
            }
        }
    }

    return ICERR_OK;
}

/*************************************************************************
    DecodeMacroblockHighpass
*************************************************************************/
Int DecodeMacroblockHighpass (CWMImageStrCodec *pSC, CCodingContext *pContext, 
                      Int iMBX, Int iMBY)
{   
    /** reset adaptive scan totals **/
    if (pSC->m_bResetRGITotals) {
        int iScale = 2, k;
        int iWeight = iScale * 16;
        pContext->m_aScanHoriz[0].uTotal = pContext->m_aScanVert[0].uTotal = MAXTOTAL;
        for (k = 1; k < 16; k++) {
            pContext->m_aScanHoriz[k].uTotal = pContext->m_aScanVert[k].uTotal = iWeight;
            iWeight -= iScale;
        }
    }
    if((pSC->WMISCP.bfBitstreamFormat != SPATIAL) && (pSC->pTile[pSC->cTileColumn].cBitsHP > 0)) { // MB-based HP QP index
        pSC->MBInfo.iQIndexHP = decodeQPIndex(pContext->m_pIOAC, pSC->pTile[pSC->cTileColumn].cBitsHP);
        if (pSC->MBInfo.iQIndexHP >= pSC->pTile[pSC->cTileColumn].cNumQPHP)
            goto ErrorExit;
    }
    else if(pSC->pTile[pSC->cTileColumn].cBitsHP == 0 && pSC->pTile[pSC->cTileColumn].cNumQPHP > 1) // use LP QP
        pSC->MBInfo.iQIndexHP = pSC->MBInfo.iQIndexLP;


    DecodeCBP (pSC, pContext);
    predCBPDec(pSC, pContext);

    if (DecodeCoeffs (pSC, pContext, iMBX, iMBY, 
        pContext->m_pIOAC, pContext->m_pIOFL) != ICERR_OK)
        goto ErrorExit;

    if (pSC->m_bResetContext) {
        AdaptHighpassDec(pContext);
    }

    return ICERR_OK;
ErrorExit:
    return ICERR_ERROR;
}

/*************************************************************************
    Adapt
*************************************************************************/
Int AdaptLowpassDec(CCodingContext * pSC)
{
    Int kk;
    for (kk = 0; kk < CONTEXTX + CTDC; kk++) {
        if (ICERR_OK != AdaptDecFixed (pSC->m_pAHexpt[kk])) {
            goto ErrorExit;
        }
    }
    return ICERR_OK;

ErrorExit:
    return ICERR_ERROR;

}

Int AdaptHighpassDec(CCodingContext * pSC)
{
    Int kk;
    if (ICERR_OK != AdaptDecFixed (pSC->m_pAdaptHuffCBPCY)) {
        goto ErrorExit;
    }
    if (ICERR_OK != AdaptDecFixed (pSC->m_pAdaptHuffCBPCY1)) {
        goto ErrorExit;
    }
    for (kk = 0; kk < CONTEXTX; kk++) {
        if (ICERR_OK != AdaptDecFixed (pSC->m_pAHexpt[kk + CONTEXTX + CTDC])) {
            goto ErrorExit;
        }
    }

    return ICERR_OK;
    
ErrorExit:
    return ICERR_ERROR;
}
