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

#ifndef XPLATFORM_IMAGE_H
#define XPLATFORM_IMAGE_H

#ifdef __ANSI__
// ANSI
#define FORCE_INLINE 
#define CDECL
#define UINTPTR_T unsigned int
#define INTPTR_T int
#define DECLSPEC_ALIGN(bytes)
#endif	// __ANSI__


//#if defined(WIN32)
#if defined(WIN32) && !defined(UNDER_CE)  // WIN32 seems to be defined always in VS2005 for ARM platform
// x86
//#define CDECL __cdecl
#define DECLSPEC_ALIGN(bytes) __declspec(align(bytes))
#endif	// x86


#if defined(_ARM_) || defined(UNDER_CE)
// ARM, WinCE
#define FORCE_INLINE inline
#define CDECL
#define UINTPTR_T unsigned int
#define INTPTR_T int
#define DECLSPEC_ALIGN(bytes)

// parser
#define FULL_PATH_CONFIG_FILE_ENCODE    "\\ConfigFile_encode.txt"
#define FULL_PATH_CONFIG_FILE_DECODE    "\\ConfigFile_decode.txt"
#define MAX_ARGC 14
#define MaxCharReadCount 10
#define MAX_FNAME 256
#define DELIMITER "filelist:"
#define CODEC_ENCODE "encode"
#define CODEC_DECODE "decode"
#define PHOTON "ptn"
#define OUTRAW "raw"
#define OUTBMP "bmp"
#define OUTPPM "ppm"
#define OUTTIF "tif"
#define OUTHDR "hdr"
#define OUTIYUV "iyuv"
#define OUTYUV422 "yuv422"
#define OUTYUV444 "yuv444"
int XPLATparser(char *pcARGV[], char *pcCodec);
void freeXPLATparser(int iARGC, char *pcARGV[]);

// WinCE intrinsic
#include <Cmnintrin.h>
#endif  // ARM, WinCE

#endif      // XPLATFORM_IMAGE_H

