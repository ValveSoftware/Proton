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

#if defined(WMP_OPT_SSE2)
#include <emmintrin.h>
#include <windows.h>

//================================
__m128i g_const_d1;
__m128i g_const_d0x400;
__m128i g_const_d0x7f8;

//================================
#if defined(WMP_OPT_CC_ENC)
__declspec(naked) void __stdcall RGB24_6(
    const U8* pbRGB,
    size_t cbRGB,
    U8* pbYCoCg,
    size_t cbYCoCg,
    size_t cmb)
{
    UNREFERENCED_PARAMETER( pbRGB );
    UNREFERENCED_PARAMETER( cbRGB );
    UNREFERENCED_PARAMETER( pbYCoCg );
    UNREFERENCED_PARAMETER( cbYCoCg );
    UNREFERENCED_PARAMETER( cmb );
    __asm {
         push ebp
         push ebx
         push esi
         push edi

         mov ebp, [esp + 36]           // $ebp = cmb
         mov edx, [esp + 20]           // $edx = pbRGB
         lea ebp, [ebp + ebp * 2]      // $ebp = cmb * 3
         mov ecx, [esp + 24]           // $ecx = cbRGB
         shl ebp, 4                    // $ebp = cmb * 3 * 16
         mov edi, [esp + 28]           // $edi = pbYCoCg
         add edx, ebp                  // $edx = pbRGB + 3 * 16 * cmb
         mov ebx, [esp + 32]           // $ebx = cbYCoCg
         neg ebp

         mov eax, esp
         and esp, 0xffffff80
         sub esp, 64 + 4 * 6

         mov [esp], ecx                // cbRGB
         mov [esp + 4], edx            // pbRGB + 3 * 16 * cmb
         mov [esp + 8], edi            // pbYCoCg
         mov dword ptr [esp + 12], 4   // cLoop0 = 4
         mov [esp + 16], ebp           // -3 * 16 * cmb
         mov [esp + 20], eax           // original $esp
         movdqa xmm3, [g_const_d1]
    }
Loop0:
    __asm mov edi, [esp + 8]            // $edi = pbYCoCg
    __asm mov ebp, [esp + 16]           // $ebp = -3 * 16 * cmb

Loop1:
    __asm {
        mov esi, [esp + 4]              // $esi = pbRGB + 3 * 16 * cmb

        //================
        // scanline 0
        mov eax, [esi + ebp]
        mov edx, [esi + ebp + 4]
        mov ecx, [esi + ebp + 8]
        add esi, [esp]                  // $esi += cbRGB

        mov [esp + 24], eax
        shrd eax, edx, 24
        shrd edx, ecx, 16
        shr ecx, 8
        mov [esp + 24 + 4], eax
        mov [esp + 24 + 20], edx
        mov [esp + 24 + 16], ecx

        // scanline 1
        mov eax, [esi + ebp]
        mov edx, [esi + ebp + 4]
        mov ecx, [esi + ebp + 8]
        add esi, [esp]

        mov [esp + 24 + 8], eax
        shrd eax, edx, 24
        shrd edx, ecx, 16
        shr ecx, 8
        mov [esp + 24 + 12], eax
        mov [esp + 24 + 28], edx
        mov [esp + 24 + 24], ecx

        // scanline 2
        mov eax, [esi + ebp]
        mov edx, [esi + ebp + 4]
        mov ecx, [esi + ebp + 8]
        add esi, [esp]

        mov [esp + 24 + 40], eax
        shrd eax, edx, 24
        shrd edx, ecx, 16
        shr ecx, 8
        mov [esp + 24 + 44], eax
        mov [esp + 24 + 60], edx
        mov [esp + 24 + 56], ecx

        // scanline 3
        mov eax, [esi + ebp]
        mov edx, [esi + ebp + 4]
        mov ecx, [esi + ebp + 8]
        add esi, [esp]

        mov [esp + 24 + 32], eax
        shrd eax, edx, 24
        shrd edx, ecx, 16
        shr ecx, 8
        mov [esp + 24 + 36], eax
        mov [esp + 24 + 52], edx
        mov [esp + 24 + 48], ecx

        //================
        // CC 0,1
        movdqa xmm0, [esp + 24]
        movdqa xmm4, [esp + 24 + 16]
        movdqa xmm7, [g_const_d0x7f8]
        movdqa xmm1, xmm0
        movdqa xmm5, xmm4
        movdqa xmm2, xmm0
        movdqa xmm6, xmm4

        pslld xmm0, 3
        pslld xmm4, 3
        psrad xmm5, 5
        psrad xmm1, 5
        psrad xmm2, 13
        psrad xmm6, 13
        pand xmm0, xmm7     // R
        pand xmm4, xmm7
        pand xmm1, xmm7     // G
        pand xmm5, xmm7
        pand xmm2, xmm7     // B
        pand xmm6, xmm7

        psubd xmm2, xmm0    // b -= r
        psubd xmm6, xmm4
        movntdq [edi + ebx * 2], xmm2
        movntdq [edi + ebx * 2 + 16], xmm6

        paddd xmm2, xmm3    // r += ((b + 1) >> 1) - g
        paddd xmm6, xmm3
        psubd xmm0, xmm1
        psubd xmm4, xmm5
        psrad xmm2, 1
        psrad xmm6, 1
        paddd xmm0, xmm2
        paddd xmm4, xmm6

        movdqa xmm2, xmm0   // g += r >> 1
        movdqa xmm6, xmm4
        movdqa xmm7, [g_const_d0x400]
        psrad xmm2, 1
        psrad xmm6, 1
        paddd xmm1, xmm2
        paddd xmm5, xmm6

        pxor xmm2, xmm2
        pxor xmm6, xmm6
        psubd xmm1, xmm7    // g -= offset
        psubd xmm5, xmm7
        psubd xmm2, xmm0    // r = -r
        psubd xmm6, xmm4

        movntdq [edi], xmm1
        movntdq [edi + 16], xmm5
        movntdq [edi + ebx], xmm2
        movntdq [edi + ebx + 16], xmm6

        //================
        // CC 2,3
        movdqa xmm4, [esp + 24 + 48]
        movdqa xmm0, [esp + 24 + 32]
        movdqa xmm7, [g_const_d0x7f8]
        movdqa xmm1, xmm0
        movdqa xmm5, xmm4
        movdqa xmm2, xmm0
        movdqa xmm6, xmm4

        pslld xmm0, 3
        pslld xmm4, 3
        psrad xmm1, 5
        psrad xmm5, 5
        psrad xmm2, 13
        psrad xmm6, 13
        pand xmm0, xmm7     // R
        pand xmm4, xmm7
        pand xmm1, xmm7     // G
        pand xmm5, xmm7
        pand xmm2, xmm7     // B
        pand xmm6, xmm7

        psubd xmm2, xmm0    // b -= r
        psubd xmm6, xmm4
        movntdq [edi + ebx * 2 + 32], xmm2
        movntdq [edi + ebx * 2 + 48], xmm6

        paddd xmm2, xmm3    // r += ((b + 1) >> 1) - g
        paddd xmm6, xmm3
        psubd xmm0, xmm1
        psubd xmm4, xmm5
        psrad xmm2, 1
        psrad xmm6, 1
        paddd xmm0, xmm2
        paddd xmm4, xmm6

        movdqa xmm2, xmm0   // g += r >> 1
        movdqa xmm6, xmm4
        movdqa xmm7, [g_const_d0x400]
        psrad xmm2, 1
        psrad xmm6, 1
        paddd xmm1, xmm2
        paddd xmm5, xmm6

        pxor xmm2, xmm2
        pxor xmm6, xmm6
        psubd xmm1, xmm7    // g -= offset
        psubd xmm5, xmm7
        psubd xmm2, xmm0    // r = -r
        psubd xmm6, xmm4

        movntdq [edi + 32], xmm1
        movntdq [edi + 48], xmm5
        movntdq [edi + ebx + 32], xmm2
        movntdq [edi + ebx + 48], xmm6

        //================
        add edi, 256                    // pbYCoCg += 256
        add ebp, 12                     // pbRGB += 12
        jnz Loop1

        //================
        add dword ptr [esp + 8], 64     // pbYCoCg += 64
        sub dword ptr [esp + 12], 1     // --cLoop0
        mov [esp + 4], esi              // pbRGB += cbRGB * 4
        jnz Loop0

        //================
        mov esp, [esp + 20]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 20
    }
}

Int inputMBRow_RGB24_6(CWMImageStrCodec* pSC)
{
    const U8* const pbRGB = (U8*)pSC->WMIBI.pv;
    const size_t cbRGB = pSC->WMIBI.cbStride;

    U8* const pbY = (U8*)pSC->p1MBbuffer[0];
    U8* const pbU = (U8*)pSC->p1MBbuffer[1];
    // U8* const pbV = (U8*)pSC->p1MBbuffer[2];

    const size_t cmbColumn = (pSC->WMII.cWidth + 15) / 16;

    assert(BD_8 == pSC->WMII.bdBitDepth);
    assert(CF_RGB == pSC->WMII.cfColorFormat);
    assert(24 == pSC->WMII.cBitsPerUnit);
    assert(pSC->WMII.bRGB);
    assert(pSC->m_param.bScaledArith);
    assert(pbU - pbY == pbV - pbU);

    RGB24_6(pbRGB + cbRGB * 0, cbRGB, pbY, pbU - pbY, cmbColumn);
    return ICERR_OK;
}
#endif

//================================
#if defined(WMP_OPT_QT)
#if 0
Int quantizeMacroblock(CWMImageStrCodec* pSC)
{
    assert(BD_8 == pSC->WMII.bdBitDepth);
    assert(YUV_444 == pSC->m_param.cfColorFormat);
    assert(pSC->m_param.bScaledArith);
    assert(3 == pSC->m_param.cNumChannels);
    assert(SB_ALL == pSC->WMISCP.sbSubband);

    CWMITile* pTile = pSC->pTile + pSC->cTileColumn;
    CWMIMBInfo* pMBInfo = &pSC->MBInfo;
    int iChannel, i, j;

    __m128 owQT[2];

    

    for (iChannel = 0; iChannel < 3; iChannel ++) {
        CWMIQuantizer* pQPDC = pTile->pQuantizerDC[iChannel];
        CWMIQuantizer* pQPLP = pTile->pQuantizerLP[iChannel] + pMBInfo->iQIndexLP;
        CWMIQuantizer* pQPHP = pTile->pQuantizerHP[iChannel] + pMBInfo->iQIndexHP;

        __m128 owQT[4] = {
            {pQPDC->f1_QP, pQPHP->f1_QP, pQPHP->f1_QP, pQPHP->f1_QP,},
            {pQPLP->f1_QP, pQPHP->f1_QP, pQPHP->f1_QP, pQPHP->f1_QP,},
        };

        owQT[0].m128_f32[0] = pQPDC->f1_QP;
        owQT[0].m128_f32[1] = pQPHP->f1_QP;
        owQT[0].m128_f32[2] = pQPHP->f1_QP;
        owQT[0].m128_f32[3] = pQPHP->f1_QP;
        owQT[1].m128_f32[0] = pQPDC->f1_QP;
        owQT[1].m128_f32[1] = pQPHP->f1_QP;
        owQT[1].m128_f32[2] = pQPHP->f1_QP;
        owQT[1].m128_f32[3] = pQPHP->f1_QP;
        
        
        

        for(j = 0; j < 16; j ++){
            PixelI* pData = pSC->pPlane[iChannel] + blkOffset[j];

            if(j == 0) // DC
                pData[0] = (pQPDC->iMan == 0 ? QUANT_Mulless(pData[0], pQPDC->iOffset, pQPDC->iExp) : QUANT(pData[0], pQPDC->iOffset, pQPDC->iMan, pQPDC->iExp));
            else // LP
                pData[0] = (pQPLP->iMan == 0 ? QUANT_Mulless(pData[0], pQPLP->iOffset, pQPLP->iExp) : QUANT(pData[0], pQPLP->iOffset, pQPLP->iMan, pQPLP->iExp));

            // quantize HP
            for(i = 1; i < 16; i ++)
                pData[i] = (pQPHP->iMan == 0 ? QUANT_Mulless(pData[i], pQPHP->iOffset, pQPHP->iExp) : QUANT(pData[i], pQPHP->iOffset, pQPHP->iMan, pQPHP->iExp));
        }
    }
    
    for (iChannel = 0; iChannel < 3; iChannel ++) {
        I32* pDC = pSC->MBInfo.iBlockDC[iChannel];
        PixelI* pData = pSC->pPlane[iChannel];

        for(i = 0; i < 16; i ++){
            pDC[i] = pData[dctIndex[2][i]];
        }
    }

    return 0;
}
#endif
#endif
#endif


//================================
void StrEncOpt(CWMImageStrCodec* pSC)
{
#if defined(WMP_OPT_SSE2)
    if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE) &&
        pSC->WMII.fPaddedUserBuffer &&
        1)
    {
        CWMImageInfo* pII = &pSC->WMII;
        // CWMIStrCodecParam* pSCP = &pSC->WMISCP;

        g_const_d1 = _mm_set_epi32(1, 1, 1, 1);
        g_const_d0x400 = _mm_set_epi32(0x400, 0x400, 0x400, 0x400);
        g_const_d0x7f8 = _mm_set_epi32(0x7f8, 0x7f8, 0x7f8, 0x7f8);

        if (BD_8 == pII->bdBitDepth &&
            CF_RGB == pII->cfColorFormat &&
            YUV_444 == pSC->m_param.cfColorFormat &&
            24 == pII->cBitsPerUnit &&
            pII->bRGB &&
            pSC->m_param.bScaledArith &&
            pSC->p1MBbuffer[1] - pSC->p1MBbuffer[0] == pSC->p1MBbuffer[2] - pSC->p1MBbuffer[1] &&
            1)
        {
#if defined(WMP_OPT_CC_ENC)
            pSC->Load = inputMBRow_RGB24_6;
#endif
        }

    }
#else
    UNREFERENCED_PARAMETER( pSC );
#endif    
}

