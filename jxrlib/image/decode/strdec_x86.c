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

#if defined(WMP_OPT_SSE2)
#include <emmintrin.h>
#include <windows.h>

//================================================================
static __m128i g_const_d0;
static __m128i g_const_d1;

__m128i g_const_d3;
__m128i g_const_d4;
__m128i g_const_d0x80;
__m128i g_const_w0x80;
__m128i g_const_b0x80;

//================================================================
#if defined(WMP_OPT_CC_DEC)
__declspec(naked) void __stdcall storeRGB24_5(
    U8* pbYCoCg,
    size_t cbYCoCg,
    const U8* pbRGB,
    size_t cbRGB,
    size_t cmb)
{
#define DISP 8
    UNREFERENCED_PARAMETER( pbYCoCg );
    UNREFERENCED_PARAMETER( cbYCoCg );
    UNREFERENCED_PARAMETER( pbRGB );
    UNREFERENCED_PARAMETER( cbRGB );
    UNREFERENCED_PARAMETER( cmb );
    __asm {
        push ebp
        push ebx    
        push esi
        push edi

        mov ebx, [esp + 36]         // $ebx = cmb
        mov edi, [esp + 28]         // $edi = pbRGB
        lea ebx, [ebx + ebx * 2]    // $ebx = cmb * 3
        mov edx, [esp + 32]         // $edx = cbRGB
        shl ebx, 4                  // $ebx = cmb * 3 * 16
        mov esi, [esp + 20]         // $esi = pbYCoCg
        add edi, ebx                // $edi = pbRGB + 3 * 16 * cmb
        mov ebp, [esp + 24]         // $ebp = cbYCoCg
        neg ebx

        mov eax, esp
        and esp, 0xffffff80
        sub esp, 64 * 4 + DISP

        mov [esp], eax              // original $esp
        mov [esp + 4], edi
    }
Loop0:
    __asm {
        mov edi, [esp + 4]          // $edi = pbRGB + 3 * 16 * cmb

            // first 8 pixels
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            movdqa xmm0, [esi]
            movdqa xmm4, [esi + 16]
            psubd xmm1, [esi + ebp]
            psubd xmm5, [esi + ebp + 16]
            movdqa xmm2, [esi + ebp * 2]
            movdqa xmm6, [esi + ebp * 2 + 16]

            paddd xmm0, [g_const_d0x80]
            paddd xmm4, [g_const_d0x80]

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16
            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + DISP + 64 * 0 + 16 * 0], xmm0
            pslld xmm0, 8
            movdqa [esp + DISP + 64 * 0 + 16 * 1], xmm4
            pslld xmm4, 8
            movdqa [esp + DISP + 64 * 0 + 16 * 2], xmm0
            movdqa [esp + DISP + 64 * 0 + 16 * 3], xmm4

            // second 8 pixels
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            movdqa xmm0, [esi + 32]
            movdqa xmm4, [esi + 48]
            psubd xmm1, [esi + ebp + 32]
            psubd xmm5, [esi + ebp + 48]
            movdqa xmm2, [esi + ebp * 2 + 32]
            movdqa xmm6, [esi + ebp * 2 + 48]

            paddd xmm0, [g_const_d0x80]
            paddd xmm4, [g_const_d0x80]

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16
            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + DISP + 64 * 1 + 16 * 0], xmm0
            pslld xmm0, 8
            movdqa [esp + DISP + 64 * 1 + 16 * 1], xmm4
            pslld xmm4, 8
            movdqa [esp + DISP + 64 * 1 + 16 * 2], xmm0
            movdqa [esp + DISP + 64 * 1 + 16 * 3], xmm4

            //================
            add esi, 64

            // first 8 pixels
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            movdqa xmm0, [esi]
            movdqa xmm4, [esi + 16]
            psubd xmm1, [esi + ebp]
            psubd xmm5, [esi + ebp + 16]
            movdqa xmm2, [esi + ebp * 2]
            movdqa xmm6, [esi + ebp * 2 + 16]

            paddd xmm0, [g_const_d0x80]
            paddd xmm4, [g_const_d0x80]

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16

            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + DISP + 64 * 2 + 16 * 0], xmm0
            pslld xmm0, 8
            movdqa [esp + DISP + 64 * 2 + 16 * 1], xmm4
            pslld xmm4, 8
            movdqa [esp + DISP + 64 * 2 + 16 * 2], xmm0
            movdqa [esp + DISP + 64 * 2 + 16 * 3], xmm4

            // second 8 pixels
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            movdqa xmm0, [esi + 32]
            movdqa xmm4, [esi + 48]
            psubd xmm1, [esi + ebp + 32]
            psubd xmm5, [esi + ebp + 48]
            movdqa xmm2, [esi + ebp * 2 + 32]
            movdqa xmm6, [esi + ebp * 2 + 48]

            paddd xmm0, [g_const_d0x80]
            paddd xmm4, [g_const_d0x80]

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16
            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + DISP + 64 * 3 + 16 * 0], xmm0
            pslld xmm0, 8
            movdqa [esp + DISP + 64 * 3 + 16 * 1], xmm4
            pslld xmm4, 8
            movdqa [esp + DISP + 64 * 3 + 16 * 2], xmm0
            movdqa [esp + DISP + 64 * 3 + 16 * 3], xmm4

            //================================
            // RGBX32 -> RGB24
            mov eax, [esp + DISP + 64 * 0 + 4]      // ..B1G1R1
            mov ecx, [esp + DISP + 64 * 0 + 32]     // B0G0R0..
            shld eax, ecx, 24                       // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 0 + 20]     // ..B5G5R5
            mov ecx, [esp + DISP + 64 * 0 + 36]     // B1G1R1..
            shld eax, ecx, 16                       // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 0 + 16]     // ..B4G4R4
            mov ecx, [esp + DISP + 64 * 0 + 52]     // B5G5R5..
            shld eax, ecx, 8                        // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + DISP + 64 * 0 + 4 + 8]  // ..B3G3R3
            mov ecx, [esp + DISP + 64 * 0 + 32 + 8] // B2G2R2..
            shld eax, ecx, 24                       // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 0 + 20 + 8] // ..B7G7R7
            mov ecx, [esp + DISP + 64 * 0 + 36 + 8] // B3G3R3..
            shld eax, ecx, 16                       // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 0 + 16 + 8] // ..B6G6R6
            mov ecx, [esp + DISP + 64 * 0 + 52 + 8] // B7G7R7..
            shld eax, ecx, 8                        // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + DISP + 64 * 1 + 4 + 8]  // ..B3G3R3
            mov ecx, [esp + DISP + 64 * 1 + 32 + 8] // B2G2R2..
            shld eax, ecx, 24                       // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 1 + 20 + 8] // ..B7G7R7
            mov ecx, [esp + DISP + 64 * 1 + 36 + 8] // B3G3R3..
            shld eax, ecx, 16                       // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 1 + 16 + 8] // ..B6G6R6
            mov ecx, [esp + DISP + 64 * 1 + 52 + 8] // B7G7R7..
            shld eax, ecx, 8                        // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + DISP + 64 * 1 + 4]  // ..B1G1R1
            mov ecx, [esp + DISP + 64 * 1 + 32] // B0G0R0..
            shld eax, ecx, 24                   // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 1 + 20] // ..B5G5R5
            mov ecx, [esp + DISP + 64 * 1 + 36] // B1G1R1..
            shld eax, ecx, 16                   // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 1 + 16] // ..B4G4R4
            mov ecx, [esp + DISP + 64 * 1 + 52] // B5G5R5..
            shld eax, ecx, 8                    // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + DISP + 64 * 2 + 4]  // ..B1G1R1
            mov ecx, [esp + DISP + 64 * 2 + 32] // B0G0R0..
            shld eax, ecx, 24                   // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 2 + 20] // ..B5G5R5
            mov ecx, [esp + DISP + 64 * 2 + 36] // B1G1R1..
            shld eax, ecx, 16                   // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 2 + 16] // ..B4G4R4
            mov ecx, [esp + DISP + 64 * 2 + 52] // B5G5R5..
            shld eax, ecx, 8                    // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + DISP + 64 * 2 + 4 + 8]  // ..B3G3R3
            mov ecx, [esp + DISP + 64 * 2 + 32 + 8] // B2G2R2..
            shld eax, ecx, 24                       // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 2 + 20 + 8] // ..B7G7R7
            mov ecx, [esp + DISP + 64 * 2 + 36 + 8] // B3G3R3..
            shld eax, ecx, 16                       // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 2 + 16 + 8] // ..B6G6R6
            mov ecx, [esp + DISP + 64 * 2 + 52 + 8] // B7G7R7..
            shld eax, ecx, 8                        // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + DISP + 64 * 3 + 4 + 8]  // ..B3G3R3
            mov ecx, [esp + DISP + 64 * 3 + 32 + 8] // B2G2R2..
            shld eax, ecx, 24                       // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 3 + 20 + 8] // ..B7G7R7
            mov ecx, [esp + DISP + 64 * 3 + 36 + 8] // B3G3R3..
            shld eax, ecx, 16                       // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 3 + 16 + 8] // ..B6G6R6
            mov ecx, [esp + DISP + 64 * 3 + 52 + 8] // B7G7R7..
            shld eax, ecx, 8                        // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + DISP + 64 * 3 + 4]      // ..B1G1R1
            mov ecx, [esp + DISP + 64 * 3 + 32]     // B0G0R0..
            shld eax, ecx, 24                       // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + DISP + 64 * 3 + 20]     // ..B5G5R5
            mov ecx, [esp + DISP + 64 * 3 + 36]     // B1G1R1..
            shld eax, ecx, 16                       // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + DISP + 64 * 3 + 16]     // ..B4G4R4
            mov ecx, [esp + DISP + 64 * 3 + 52]     // B5G5R5..
            shld eax, ecx, 8                        // B4G4R4B5
            mov [edi + ebx + 8], eax

        //================================
        add esi, 256 - 64
        add ebx, 12
        jnz Loop0

        //================
        pop esp
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 20
    }
}

Int outputMBRow_RGB24_Lossless_1(CWMImageStrCodec* pSC)
{
    const size_t cbRGB = pSC->WMIBI.cbStride;
    const U8* const pbRGB = (U8*)pSC->WMIBI.pv + cbRGB * (pSC->cRow - 1) * 16;

    U8* const pbY = (U8*)pSC->a0MBbuffer[0];
    U8* const pbU = (U8*)pSC->a0MBbuffer[1];
    // U8* const pbV = (U8*)pSC->a0MBbuffer[2];

    const size_t cmbColumn = (pSC->WMII.cWidth + 15) / 16;

    assert(BD_8 == pSC->WMII.bdBitDepth);
    assert(CF_RGB == pSC->WMII.cfColorFormat);
    assert(24 == pSC->WMII.cBitsPerUnit);
    assert(pSC->WMII.bRGB);
    assert(O_NONE == pSC->WMII.oOrientation);

    assert(YUV_444 == pSC->m_param.cfColorFormat);
    assert(!pSC->m_param.bScaledArith);

    assert(pSC->m_Dparam->bDecodeFullFrame);

    storeRGB24_5(pbY + 64 * 0, pbU - pbY, pbRGB + cbRGB *  0, cbRGB, cmbColumn);
    storeRGB24_5(pbY + 64 * 2, pbU - pbY, pbRGB + cbRGB *  8, cbRGB, cmbColumn);
    return ICERR_OK;
}


__declspec(naked) void __stdcall storeRGB24_3(
    U8* pbYCoCg,
    size_t cbYCoCg,
    const U8* pbRGB,
    size_t cbRGB,
    size_t cmb,
    const U8* Shift)
{
    UNREFERENCED_PARAMETER( pbYCoCg );
    UNREFERENCED_PARAMETER( cbYCoCg );
    UNREFERENCED_PARAMETER( pbRGB );
    UNREFERENCED_PARAMETER( cbRGB );
    UNREFERENCED_PARAMETER( cmb );
    UNREFERENCED_PARAMETER( Shift );
    __asm {
        push ebp
        push ebx    
        push esi
        push edi

        mov ecx, [esp + 40]         // $ecx = Shift
        mov ebx, [esp + 36]         // $ebx = cmb
        mov edi, [esp + 28]         // $edi = pbRGB
        lea ebx, [ebx + ebx * 2]    // $ebx = cmb * 3
        mov edx, [esp + 32]         // $edx = cbRGB
        shl ebx, 4                  // $ebx = cmb * 3 * 16
        mov esi, [esp + 20]         // $esi = pbYCoCg
        add edi, ebx                // $edi = pbRGB + 3 * 16 * cmb
        mov ebp, [esp + 24]         // $ebp = cbYCoCg
        neg ebx

        mov eax, esp
        and esp, 0xffffff80
        sub esp, 320

        mov [esp], eax              // original $esp
        mov [esp + 4], edi
        mov [esp + 8], ecx
    }
Loop0:
    __asm {
        mov edi, [esp + 4]          // $edi = pbRGB + 3 * 16 * cmb

            //================
            // first 8 pixels
            movdqa xmm0, [esi]
            movdqa xmm4, [esi + 16]
            movdqa xmm3, [esi + ebp]
            movdqa xmm7, [esi + ebp + 16]
            movdqa xmm2, [esi + ebp * 2]
            movdqa xmm6, [esi + ebp * 2 + 16]

            mov ecx, [esp + 8]
            movdqa xmm1, [ecx]
            movdqa xmm5, [g_const_d0x80]
            pslld xmm5, xmm1
            paddd xmm5, xmm1
            paddd xmm0, xmm5            // bias
            paddd xmm4, xmm5            // bias
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            // clip
            movdqa xmm3, [g_const_w0x80]
            packssdw xmm0, xmm4
            packssdw xmm1, xmm5
            packssdw xmm2, xmm6

            mov ecx, [esp + 8]
            movdqa xmm4, [ecx]
            psraw xmm0, xmm4
            psraw xmm1, xmm4
            psraw xmm2, xmm4

            psubw xmm0, xmm3
            psubw xmm1, xmm3
            psubw xmm2, xmm3

            movdqa [esp + 16], xmm0
            movdqa [esp + 32], xmm1
            movdqa [esp + 48], xmm2

            //================
            // second 8 pixels
            movdqa xmm0, [esi + 32]
            movdqa xmm4, [esi + 48]
            movdqa xmm3, [esi + ebp + 32]
            movdqa xmm7, [esi + ebp + 48]
            movdqa xmm2, [esi + ebp * 2 + 32]
            movdqa xmm6, [esi + ebp * 2 + 48]

            mov ecx, [esp + 8]
            movdqa xmm1, [ecx]
            movdqa xmm5, [g_const_d0x80]
            pslld xmm5, xmm1
            paddd xmm5, xmm1
            paddd xmm0, xmm5            // bias
            paddd xmm4, xmm5            // bias
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            // clip
            movdqa xmm3, [g_const_w0x80]
            packssdw xmm0, xmm4
            packssdw xmm1, xmm5
            packssdw xmm2, xmm6

            mov ecx, [esp + 8]
            movdqa xmm4, [ecx]
            psraw xmm0, xmm4
            psraw xmm1, xmm4
            psraw xmm2, xmm4

            psubw xmm0, xmm3
            psubw xmm1, xmm3
            psubw xmm2, xmm3

            //================
            // 16 pixels
            movdqa xmm3, [g_const_b0x80]
            packsswb xmm0, [esp + 16]
            packsswb xmm1, [esp + 32]
            packsswb xmm2, [esp + 48]

            psubb xmm0, xmm3
            psubb xmm1, xmm3
            psubb xmm2, xmm3

            pxor xmm7, xmm7
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpckhbw xmm0, xmm7
            punpckhbw xmm1, xmm7
            punpckhbw xmm2, xmm7
            punpcklbw xmm4, xmm7
            punpcklbw xmm5, xmm7
            punpcklbw xmm6, xmm7

            // spill second 8 pixels
            movdqa [esp + 16], xmm4
            movdqa [esp + 32], xmm5
            movdqa [esp + 48], xmm6

            // first 8 pixels
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpcklwd xmm0, xmm7
            punpcklwd xmm1, xmm7
            punpcklwd xmm2, xmm7

            punpckhwd xmm4, xmm7
            punpckhwd xmm5, xmm7
            punpckhwd xmm6, xmm7

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16

            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + 64], xmm0
            pslld xmm0, 8
            movdqa [esp + 80], xmm4
            pslld xmm4, 8
            movdqa [esp + 96], xmm0
            movdqa [esp + 112], xmm4

            // second 8 pixels
            movdqa xmm0, [esp + 16]
            movdqa xmm1, [esp + 32]
            movdqa xmm2, [esp + 48]
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpcklwd xmm0, xmm7
            punpcklwd xmm1, xmm7
            punpcklwd xmm2, xmm7
            punpckhwd xmm4, xmm7
            punpckhwd xmm5, xmm7
            punpckhwd xmm6, xmm7

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16
            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + 128], xmm0
            pslld xmm0, 8
            movdqa [esp + 144], xmm4
            pslld xmm4, 8
            movdqa [esp + 160], xmm0
            movdqa [esp + 176], xmm4

        //================================
        add esi, 64

            //================
            // first 8 pixels
            movdqa xmm0, [esi]
            movdqa xmm4, [esi + 16]
            movdqa xmm3, [esi + ebp]
            movdqa xmm7, [esi + ebp + 16]
            movdqa xmm2, [esi + ebp * 2]
            movdqa xmm6, [esi + ebp * 2 + 16]

            mov ecx, [esp + 8]
            movdqa xmm1, [ecx]
            movdqa xmm5, [g_const_d0x80]
            pslld xmm5, xmm1
            paddd xmm5, xmm1
            paddd xmm0, xmm5            // bias
            paddd xmm4, xmm5            // bias
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            // clip
            movdqa xmm3, [g_const_w0x80]
            packssdw xmm0, xmm4
            packssdw xmm1, xmm5
            packssdw xmm2, xmm6

            mov ecx, [esp + 8]
            movdqa xmm4, [ecx]
            psraw xmm0, xmm4
            psraw xmm1, xmm4
            psraw xmm2, xmm4

            psubw xmm0, xmm3
            psubw xmm1, xmm3
            psubw xmm2, xmm3

            movdqa [esp + 16], xmm0
            movdqa [esp + 32], xmm1
            movdqa [esp + 48], xmm2

            //================
            // second 8 pixels
            movdqa xmm0, [esi + 32]
            movdqa xmm4, [esi + 48]
            movdqa xmm3, [esi + ebp + 32]
            movdqa xmm7, [esi + ebp + 48]
            movdqa xmm2, [esi + ebp * 2 + 32]
            movdqa xmm6, [esi + ebp * 2 + 48]

            mov ecx, [esp + 8]
            movdqa xmm1, [ecx]
            movdqa xmm5, [g_const_d0x80]
            pslld xmm5, xmm1
            paddd xmm5, xmm1
            paddd xmm0, xmm5            // bias
            paddd xmm4, xmm5            // bias
            pxor xmm1, xmm1
            pxor xmm5, xmm5
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            // ICC
            movdqa xmm3, xmm1           // g -= r >> 1
            movdqa xmm7, xmm5
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm0, xmm3
            psubd xmm4, xmm7

            movdqa xmm3, [g_const_d1]   // r -= ((b + 1) >> 1) - g
            movdqa xmm7, [g_const_d1]
            paddd xmm3, xmm2
            paddd xmm7, xmm6
            paddd xmm1, xmm0
            paddd xmm5, xmm4
            psrad xmm3, 1
            psrad xmm7, 1
            psubd xmm1, xmm3
            psubd xmm5, xmm7

            paddd xmm2, xmm1            // b += r
            paddd xmm6, xmm5

            // clip
            movdqa xmm3, [g_const_w0x80]
            packssdw xmm0, xmm4
            packssdw xmm1, xmm5
            packssdw xmm2, xmm6

            mov ecx, [esp + 8]
            movdqa xmm4, [ecx]
            psraw xmm0, xmm4
            psraw xmm1, xmm4
            psraw xmm2, xmm4

            psubw xmm0, xmm3
            psubw xmm1, xmm3
            psubw xmm2, xmm3

            //================
            // 16 pixels
            movdqa xmm3, [g_const_b0x80]
            packsswb xmm0, [esp + 16]
            packsswb xmm1, [esp + 32]
            packsswb xmm2, [esp + 48]

            psubb xmm0, xmm3
            psubb xmm1, xmm3
            psubb xmm2, xmm3

            pxor xmm7, xmm7
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpckhbw xmm0, xmm7
            punpckhbw xmm1, xmm7
            punpckhbw xmm2, xmm7
            punpcklbw xmm4, xmm7
            punpcklbw xmm5, xmm7
            punpcklbw xmm6, xmm7

            // spill second 8 pixels
            movdqa [esp + 16], xmm4
            movdqa [esp + 32], xmm5
            movdqa [esp + 48], xmm6

            // first 8 pixels
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpcklwd xmm0, xmm7
            punpcklwd xmm1, xmm7
            punpcklwd xmm2, xmm7

            punpckhwd xmm4, xmm7
            punpckhwd xmm5, xmm7
            punpckhwd xmm6, xmm7

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16

            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + 192], xmm0
            pslld xmm0, 8
            movdqa [esp + 208], xmm4
            pslld xmm4, 8
            movdqa [esp + 224], xmm0
            movdqa [esp + 240], xmm4

            // second 8 pixels
            movdqa xmm0, [esp + 16]
            movdqa xmm1, [esp + 32]
            movdqa xmm2, [esp + 48]
            movdqa xmm4, xmm0
            movdqa xmm5, xmm1
            movdqa xmm6, xmm2

            punpcklwd xmm0, xmm7
            punpcklwd xmm1, xmm7
            punpcklwd xmm2, xmm7
            punpckhwd xmm4, xmm7
            punpckhwd xmm5, xmm7
            punpckhwd xmm6, xmm7

            pslld xmm0, 8
            pslld xmm2, 16
            pslld xmm4, 8
            pslld xmm6, 16
            por xmm0, xmm1
            por xmm4, xmm5
            por xmm0, xmm2
            por xmm4, xmm6

            movdqa [esp + 256], xmm0
            pslld xmm0, 8
            movdqa [esp + 272], xmm4
            pslld xmm4, 8
            movdqa [esp + 288], xmm0
            movdqa [esp + 304], xmm4

            // RGBX32 -> RGB24
            mov eax, [esp + 68]         // ..B1G1R1
            mov ecx, [esp + 96]         // B0G0R0..
            shld eax, ecx, 24           // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + 84]         // ..B5G5R5
            mov ecx, [esp + 100]        // B1G1R1..
            shld eax, ecx, 16           // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + 80]         // ..B4G4R4
            mov ecx, [esp + 116]        // B5G5R5..
            shld eax, ecx, 8            // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + 76]         // ..B3G3R3
            mov ecx, [esp + 104]        // B2G2R2..
            shld eax, ecx, 24           // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + 92]         // ..B7G7R7
            mov ecx, [esp + 108]        // B3G3R3..
            shld eax, ecx, 16           // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + 88]         // ..B6G6R6
            mov ecx, [esp + 124]        // B7G7R7..
            shld eax, ecx, 8            // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + 140]        // ..B3G3R3
            mov ecx, [esp + 168]        // B2G2R2..
            shld eax, ecx, 24           // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + 156]        // ..B7G7R7
            mov ecx, [esp + 172]        // B3G3R3..
            shld eax, ecx, 16           // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + 152]        // ..B6G6R6
            mov ecx, [esp + 188]        // B7G7R7..
            shld eax, ecx, 8            // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + 132]        // ..B1G1R1
            mov ecx, [esp + 160]        // B0G0R0..
            shld eax, ecx, 24           // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + 148]        // ..B5G5R5
            mov ecx, [esp + 164]        // B1G1R1..
            shld eax, ecx, 16           // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + 144]        // ..B4G4R4
            mov ecx, [esp + 180]        // B5G5R5..
            shld eax, ecx, 8            // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + 196]        // ..B1G1R1
            mov ecx, [esp + 224]        // B0G0R0..
            shld eax, ecx, 24           // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + 212]        // ..B5G5R5
            mov ecx, [esp + 228]        // B1G1R1..
            shld eax, ecx, 16           // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + 208]        // ..B4G4R4
            mov ecx, [esp + 244]        // B5G5R5..
            shld eax, ecx, 8            // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + 204]        // ..B3G3R3
            mov ecx, [esp + 232]        // B2G2R2..
            shld eax, ecx, 24           // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + 220]        // ..B7G7R7
            mov ecx, [esp + 236]        // B3G3R3..
            shld eax, ecx, 16           // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + 216]        // ..B6G6R6
            mov ecx, [esp + 252]        // B7G7R7..
            shld eax, ecx, 8            // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            // RGBX32 -> RGB24
            mov eax, [esp + 268]         // ..B3G3R3
            mov ecx, [esp + 296]        // B2G2R2..
            shld eax, ecx, 24           // R3B2G2R2
            mov [edi + ebx + 0], eax
            mov eax, [esp + 284]         // ..B7G7R7
            mov ecx, [esp + 300]        // B3G3R3..
            shld eax, ecx, 16           // G7R7B3G3
            mov [edi + ebx + 4], eax
            mov eax, [esp + 280]         // ..B6G6R6
            mov ecx, [esp + 316]        // B7G7R7..
            shld eax, ecx, 8            // B6G6R6B7
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

            mov eax, [esp + 260]         // ..B1G1R1
            mov ecx, [esp + 288]         // B0G0R0..
            shld eax, ecx, 24           // R1B0G0R0
            mov [edi + ebx + 0], eax
            mov eax, [esp + 276]         // ..B5G5R5
            mov ecx, [esp + 292]        // B1G1R1..
            shld eax, ecx, 16           // G5R5B1G1
            mov [edi + ebx + 4], eax
            mov eax, [esp + 272]         // ..B4G4R4
            mov ecx, [esp + 308]        // B5G5R5..
            shld eax, ecx, 8            // B4G4R4B5
            mov [edi + ebx + 8], eax
            add edi, edx                // $edi = pbRGB += cbRGB

        //================================
        add esi, 256 - 64
        add ebx, 12
        jnz Loop0

        //================
        pop esp
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 24
    }
}

Int outputMBRow_RGB24_Lossy_3(CWMImageStrCodec* pSC)
{
    const size_t cbRGB = pSC->WMIBI.cbStride;
    const U8* const pbRGB = (U8*)pSC->WMIBI.pv + cbRGB * (pSC->cRow - 1) * 16;

    U8* const pbY = (U8*)pSC->a0MBbuffer[0];
    U8* const pbU = (U8*)pSC->a0MBbuffer[1];
    // U8* const pbV = (U8*)pSC->a0MBbuffer[2];

    const size_t cmbColumn = (pSC->WMII.cWidth + 15) / 16;

    __declspec(align(16)) U8 Shift[16];

    assert(BD_8 == pSC->WMII.bdBitDepth);
    assert(CF_RGB == pSC->WMII.cfColorFormat);
    assert(24 == pSC->WMII.cBitsPerUnit);
    assert(pSC->WMII.bRGB);
    assert(O_NONE == pSC->WMII.oOrientation);

    assert(YUV_444 == pSC->m_param.cfColorFormat);

    assert(pSC->m_Dparam->bDecodeFullFrame);

    _mm_store_si128((__m128i *) Shift, pSC->m_param.bScaledArith ? g_const_d3 : g_const_d0);
    storeRGB24_3(pbY + 64 * 0, pbU - pbY, pbRGB + cbRGB *  0, cbRGB, cmbColumn,
        Shift);
    storeRGB24_3(pbY + 64 * 2, pbU - pbY, pbRGB + cbRGB *  8, cbRGB, cmbColumn,
        Shift);
    return ICERR_OK;
}
#endif

//================================================================
#if defined(WMP_OPT_TRFM_DEC)
FORCE_INLINE Void strDCT2x2up_OPT(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d, C, t;
    a = *pa;
    b = *pb;
    C = *pc;
    d = *pd;

    a += d;
    b -= C;
    t = ((a - b + 1) >> 1);
    c = t - d;
    d = t - C;
    a -= d;
    b += c;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

FORCE_INLINE Void invOdd_OPT(PixelI *pa, PixelI *pb, PixelI *pc, PixelI *pd)
{
    PixelI a, b, c, d;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    b += d;
    a -= c;
    d -= (b) >> 1;
    c += (a + 1) >> 1;

    /** rotate pi/8 **/
#define IROTATE2(a, b) (a) -= (((b)*3 + 4) >> 3), (b) += (((a)*3 + 4) >> 3)
    IROTATE2(a, b);
    IROTATE2(c, d);

    /** butterflies **/
    c -= (b + 1) >> 1;
    d = ((a + 1) >> 1) - d;
    b += c;
    a -= d;

    *pa = a;
    *pb = b;
    *pc = c;
    *pd = d;
}

FORCE_INLINE Void invOddOdd_OPT(PixelI* pa, PixelI* pb, PixelI* pc, PixelI* pd)
{
    PixelI a, b, c, d, t1, t2;
    a = *pa;
    b = *pb;
    c = *pc;
    d = *pd;

    /** butterflies **/
    d += a;
    c -= b;
    a -= (t1 = d >> 1);
    b += (t2 = c >> 1);

    /** rotate pi/4 **/
    a -= (b * 3 + 3) >> 3;
    b += (a * 3 + 3) >> 2;
    a -= (b * 3 + 4) >> 3;

    /** butterflies **/
    b -= t2;
    a += t1;
    c += b;
    d -= a;

    /** sign flips **/
    *pa = a;
    *pb = -b;
    *pc = -c;
    *pd = d;
}

FORCE_INLINE Void strDCT2x2dn_SSE2_1(PixelI* p)
{
    __m128i* const pdq = (__m128i*)p;
    __m128i a = pdq[0];
    __m128i b = pdq[1];
    const __m128i C = pdq[2];
    __m128i d = pdq[3];
    __m128i t;
    __m128i c;

    a = _mm_add_epi32(a, d);
    b = _mm_sub_epi32(b, C);
    t = _mm_sub_epi32(a, b);
    t = _mm_srai_epi32(t, 1);
    c = _mm_sub_epi32(t, d);
    d = _mm_sub_epi32(t, C);
    a = _mm_sub_epi32(a, d);
    b = _mm_add_epi32(b, c);

    pdq[0] = a;
    pdq[1] = b;
    pdq[2] = c;
    pdq[3] = d;
}

Void strIDCT4x4Stage1_OPT_H1(PixelI* p)
{
    /** top left corner, butterfly => butterfly **/
    strDCT2x2up_OPT(p + 0, p + 1, p + 2, p + 3);

    /** top right corner, -pi/8 rotation => butterfly **/
    invOdd_OPT(p + 5, p + 4, p + 7, p + 6);

    /** bottom left corner, butterfly => -pi/8 rotation **/
    invOdd_OPT(p + 10, p + 8, p + 11, p + 9);

    /** bottom right corner, -pi/8 rotation => -pi/8 rotation **/
    invOddOdd_OPT(p + 15, p + 14, p + 13, p + 12);
}

FORCE_INLINE Void strIDCT4x4Stage1_OPT_H2(PixelI* p)
{
    /** butterfly **/
    strDCT2x2dn_SSE2_1(p);
}

Void strIDCT4x4Stage1_OPT5(PixelI* p0, PixelI* p1)
{
    _mm_prefetch((char*)(p0 - 96 + 256), _MM_HINT_T0);
    strIDCT4x4Stage1_OPT_H1(p0 - 96);
    strIDCT4x4Stage1_OPT_H1(p0 - 80);
    strIDCT4x4Stage1_OPT_H1(p0 - 32);
    strIDCT4x4Stage1_OPT_H1(p0 - 16);

    _mm_prefetch((char*)(p0 - 32 + 256), _MM_HINT_T0);
    strIDCT4x4Stage1_OPT_H1(p0 + 32);
    strIDCT4x4Stage1_OPT_H1(p0 + 48);
    strIDCT4x4Stage1_OPT_H1(p0 + 96);
    strIDCT4x4Stage1_OPT_H1(p0 + 112);

    _mm_prefetch((char*)(p0 + 32 + 256), _MM_HINT_T0);
    strIDCT4x4Stage1_OPT_H1(p1 - 128);
    strIDCT4x4Stage1_OPT_H1(p1 - 112);
    strIDCT4x4Stage1_OPT_H1(p1 - 64);
    strIDCT4x4Stage1_OPT_H1(p1 - 48);

    _mm_prefetch((char*)(p0 + 96 + 256), _MM_HINT_T0);
    strIDCT4x4Stage1_OPT_H1(p1 + 0);
    strIDCT4x4Stage1_OPT_H1(p1 + 16);
    strIDCT4x4Stage1_OPT_H1(p1 + 64);
    strIDCT4x4Stage1_OPT_H1(p1 + 80);

    strIDCT4x4Stage1_OPT_H2(p0 - 96);
    strIDCT4x4Stage1_OPT_H2(p0 - 80);
    strIDCT4x4Stage1_OPT_H2(p0 - 32);
    strIDCT4x4Stage1_OPT_H2(p0 - 16);
    strIDCT4x4Stage1_OPT_H2(p0 + 32);
    strIDCT4x4Stage1_OPT_H2(p0 + 48);
    strIDCT4x4Stage1_OPT_H2(p0 + 96);
    strIDCT4x4Stage1_OPT_H2(p0 + 112);

    strIDCT4x4Stage1_OPT_H2(p1 - 128);
    strIDCT4x4Stage1_OPT_H2(p1 - 112);
    strIDCT4x4Stage1_OPT_H2(p1 - 64);
    strIDCT4x4Stage1_OPT_H2(p1 - 48);
    strIDCT4x4Stage1_OPT_H2(p1 + 0);
    strIDCT4x4Stage1_OPT_H2(p1 + 16);
    strIDCT4x4Stage1_OPT_H2(p1 + 64);
    strIDCT4x4Stage1_OPT_H2(p1 + 80);
}

//================================
__declspec(naked) void __stdcall strPost4x4Stage1_alternate_ASM5(PixelI* p0, PixelI* p1)
{
    UNREFERENCED_PARAMETER( p0 );
    UNREFERENCED_PARAMETER( p1 );
    __asm {
        push ebp
        push ebx
        push esi
        push edi

        //================
        // pointer array
        mov eax, [esp + 20]     // $esi = p0
        mov edx, [esp + 24]     // $edi = p1
        mov ecx, 4 * 16
        mov ebx, 4 * 48

        prefetcht0 [eax + 512]
        prefetcht0 [eax + 768]
        prefetcht0 [eax + 1024]
        prefetcht0 [eax + 1280]

        add edx, ecx
        add eax, ebx

        push edx
        sub edx, ecx
        push edx
        push edx
        sub edx, ebx
        push eax
        push eax
        sub eax, ecx
        push eax
        push eax
        sub eax, ecx
        push eax
        sub eax, ecx

        push edx
        sub edx, ecx
        push edx
        sub eax, ecx
        push edx
        sub edx, ebx
        push eax
        push eax
        sub eax, ecx
        push eax
        push eax
        sub eax, ecx
        push eax
        sub eax, ecx
        
        push edx
        sub edx, ecx
        push edx
        sub eax, ecx
        push edx
        sub edx, ebx
        push eax
        push eax
        sub eax, ecx
        push eax
        push eax
        sub eax, ecx
        push eax
        sub eax, ecx
                
        push edx
        sub edx, ecx
        push edx
        sub eax, ecx
        push edx
        push eax
        push eax
        sub eax, ecx
        push eax
        push eax
        sub eax, ecx
        push eax

        mov ebp, (4 + 4) * -16
        push ebp
    }
Loop0:        
    __asm {
        mov esi, [esp + (4 + 4) * 16 + 4 + ebp ]    // $esi = p0
        mov edi, [esp + (4 + 4) * 16 + 4 + ebp + 4] // $edi = p1

        //================
        movdqa xmm2, [esi + 4 * 12] // a = xmm2
        movdqa xmm1, [esi + 4 * 72] // b = xmm1
        movdqa xmm6, [edi + 4 * 4]  // c = xmm6
        movdqa xmm7, [edi + 4 * 64] // d = xmm7

        //================
        // buttefly
        paddd xmm2, xmm7
        psubd xmm1, xmm6

        movdqa xmm0, xmm2           // a = xmm0
        psubd xmm2, xmm1
        psrad xmm2, 1
        movdqa xmm3, xmm2

        psubd xmm2, xmm7            // c = xmm2
        psubd xmm3, xmm6            // d = xmm3
        paddd xmm1, xmm2
        psubd xmm0, xmm3

        //================
        // bottom right corner: -pi/8 rotation => -pi/8 rotation
        pshufd xmm7, xmm3, 0x3
        movd eax, xmm3
        movd edx, xmm7
        pshufd xmm7, xmm3, 0x1
        movd ebx, xmm7
        pshufd xmm7, xmm3, 0x2
        movd ecx, xmm7

        add edx, eax
        sub ecx, ebx
        mov esi, edx
        sar esi, 1
        mov edi, ecx
        sar edi, 1
        sub eax, esi
        add ebx, edi

        lea ebp, [ebx + ebx * 2 + 6]
        sar ebp, 3
        sub eax, ebp
        lea ebp, [eax + eax * 2 + 2]
        sar ebp, 2
        add ebx, ebp
        lea ebp, [ebx + ebx * 2 + 4]
        sar ebp, 3
        sub eax, ebp

        mov ebp, [esp]

        sub ebx, edi
        add eax, esi
        add ecx, ebx
        sub edx, eax

        mov esi, [esp + (4 + 4) * 16 + 4 + ebp ]    // $esi = p0
        mov edi, [esp + (4 + 4) * 16 + 4 + ebp + 4] // $edi = p1

        movd xmm3, eax
        movd xmm4, ebx
        movd xmm5, ecx
        movd xmm6, edx
        punpckldq xmm3, xmm4
        punpckldq xmm5, xmm6
        punpcklqdq xmm3, xmm5

        //================
        // anti diagonal corners: rotation by -pi/8
        movdqa xmm5, g_const_d1
        movdqa xmm6, g_const_d1

        pshufd xmm2, xmm2, 0xd8 //  7,  5,  6,  4
        movdqa xmm4, xmm1       // 75, 74, 73, 72
        punpckhqdq xmm1, xmm2   //  7,  5, 75, 74
        punpcklqdq xmm4, xmm2   //  6,  4, 73, 72

        paddd xmm5, xmm1
        psrad xmm5, 1
        psubd xmm4, xmm5

        paddd xmm6, xmm4
        psrad xmm6, 1
        paddd xmm1, xmm6

        movdqa xmm2, xmm4       //  6,  4, 73, 72
        punpckhqdq xmm4, xmm1   //  7,  5,  6,  4
        punpcklqdq xmm2, xmm1   // 75, 74, 73, 72
        pshufd xmm4, xmm4, 0xd8 //  7,  6,  5,  4

        //================
        // butterfly
        // a = xmm0, b = xmm2, c = xmm4, d = xmm3
        paddd xmm0, xmm3
        movdqa xmm1, xmm0   // a = xmm1
        psrad xmm0, 1
        psubd xmm0, xmm3    // d = xmm0

        movdqa xmm3, xmm0   // d = xmm3
        paddd xmm0, xmm0
        paddd xmm0, xmm3
        psrad xmm0, 3
        paddd xmm1, xmm0

        movdqa xmm0, xmm1   // a = xmm0
        paddd xmm1, xmm1
        paddd xmm1, xmm0
        psrad xmm1, 4
        paddd xmm3, xmm1

        movdqa xmm5, xmm0   // a
        psrad xmm5, 7
        paddd xmm3, xmm5    // d += (a >> 7)
        psrad xmm5, 3
        psubd xmm3, xmm5    // d -= (a >> 10)

        movdqa xmm5, [g_const_d4]
        movdqa xmm1, xmm3   // d = xmm1
        psubd xmm2, xmm4
        paddd xmm5, xmm3
        paddd xmm3, xmm3
        paddd xmm3, xmm5
        psrad xmm3, 3
        paddd xmm0, xmm3

        movdqa xmm3, xmm2   // b = xmm3
        psrad xmm2, 1
        psubd xmm1, xmm2

        movdqa xmm2, xmm0   // a = xmm2
        psubd xmm0, xmm3
        psrad xmm0, 1
        psubd xmm0, xmm4    // c = xmm0

        paddd xmm3, xmm1
        psubd xmm2, xmm0

        //================
        movdqa [edi + 4 * 4], xmm1
        movdqa [edi + 4 * 64], xmm0
        movdqa [esi + 4 * 12], xmm2
        movdqa [esi + 4 * 72], xmm3

        add ebp, 8
        mov [esp], ebp
        jnz Loop0

        //================
        add esp, (4 + 4) * 16 + 4
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret 4 * 2
    }
}

Int invTransformMacroblock_YUV444_Center5(CWMImageStrCodec * pSC)
{
    const OVERLAP olOverlap = pSC->WMISCP.olOverlap;
    int i = 0;

    assert(0 < pSC->cRow && pSC->cRow < pSC->cmbHeight);
    assert(0 < pSC->cColumn && pSC->cColumn < pSC->cmbWidth);

    assert(0 == pSC->WMII.cPostProcStrength);

    assert(YUV_444 == pSC->m_param.cfColorFormat);
    assert(3 == pSC->m_param.cNumChannels);

    assert(pSC->m_Dparam->bDecodeFullWidth);
    assert(1 == pSC->m_Dparam->cThumbnailScale);

    for (i = 0; i < 3; ++i)
    {
        PixelI* const p0 = pSC->p0MBbuffer[i];
        PixelI* const p1 = pSC->p1MBbuffer[i];

        //================================
        // second level inverse transform
        strIDCT4x4Stage2(p1);
        if (pSC->m_param.bScaledArith) {
            strNormalizeDec(p1, (i != 0));
        }

        //================================
        // second level inverse overlap
        if (OL_TWO <= olOverlap)
        {
            strPost4x4Stage2Split_alternate(p0, p1);
        }

        //================================
        // first level inverse transform
        strIDCT4x4Stage1_OPT5(p0, p1);

        //================================
        // first level inverse overlap
        if (OL_ONE <= olOverlap)
        {
            strPost4x4Stage1_alternate_ASM5(p0, p1);
        }
    }

    return ICERR_OK;
}
#endif
#endif

//================================================================
void StrDecOpt(CWMImageStrCodec* pSC)
{
#if defined(WMP_OPT_SSE2)
    if (IsProcessorFeaturePresent(PF_XMMI64_INSTRUCTIONS_AVAILABLE))
    {
        CWMImageInfo* pII = &pSC->WMII;
        // CWMIStrCodecParam* pSCP = &pSC->WMISCP;

        g_const_d0 = _mm_setzero_si128();
        g_const_d3 = _mm_set1_epi32(3);
        g_const_d1 = _mm_set_epi32(1, 1, 1, 1);
        g_const_d4 = _mm_set_epi32(4, 4, 4, 4);

        g_const_d0x80 = _mm_set_epi32(0x80, 0x80, 0x80, 0x80);
        g_const_w0x80 = _mm_set_epi16(0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80);
        g_const_b0x80 = _mm_set_epi8(0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80);

        if (pSC->WMII.fPaddedUserBuffer &&
            //pSC->m_Dparam->bDecodeFullFrame &&
            //((pII->cWidth & 0xf) == 0) &&
            //(((int) pSC->WMIBI.pv & 0xf) == 0) &&
            BD_8 == pII->bdBitDepth &&
            CF_RGB == pII->cfColorFormat &&
            24 == pII->cBitsPerUnit &&
            pII->bRGB &&
            O_NONE == pII->oOrientation &&
            YUV_444 == pSC->m_param.cfColorFormat &&
            pSC->p1MBbuffer[1] - pSC->p1MBbuffer[0] == pSC->p1MBbuffer[2] - pSC->p1MBbuffer[1] &&
            pSC->m_Dparam->bDecodeFullFrame &&
            1)
        {
#if defined(WMP_OPT_CC_DEC)
            if (pSC->m_param.bScaledArith || pSC->WMISCP.olOverlap != OL_NONE)
            {
                pSC->Load = outputMBRow_RGB24_Lossy_3;
            }
            else
            {
                pSC->Load = outputMBRow_RGB24_Lossless_1;
            }
#endif // WMP_OPT_CC_DEC
        }

        if (YUV_444 == pSC->m_param.cfColorFormat &&
            pSC->p1MBbuffer[1] - pSC->p1MBbuffer[0] == pSC->p1MBbuffer[2] - pSC->p1MBbuffer[1] &&
            pSC->m_Dparam->bDecodeFullWidth &&
            pSC->m_param.cSubVersion == CODEC_SUBVERSION_NEWSCALING_SOFT_TILES &&
            1 == pSC->m_Dparam->cThumbnailScale)
        {
#if defined(WMP_OPT_TRFM_DEC)
            pSC->TransformCenter = invTransformMacroblock_YUV444_Center5;
#endif
        }

    }
#else
    UNREFERENCED_PARAMETER( pSC );
#endif    
}

