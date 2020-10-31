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

#ifndef WMI_STRTRANSFORM_H
#define WMI_STRTRANSFORM_H

#include "windowsmediaphoto.h"

#define COMPUTE_CORNER_PRED_DIFF(a, b) (*(a) -= (b))
#define COMPUTE_CORNER_PRED_ADD(a, b) (*(a) += (b))

/** 2x2 foward DCT == 2x2 inverse DCT **/
Void strDCT2x2dn(PixelI *, PixelI *, PixelI *, PixelI *);
Void strDCT2x2up(PixelI *, PixelI *, PixelI *, PixelI *);
Void FOURBUTTERFLY_HARDCODED1(PixelI *p);

/** 2x2 dct of a group of 4**/
#define FOURBUTTERFLY(p, i00, i01, i02, i03, i10, i11, i12, i13,\
    i20, i21, i22, i23, i30, i31, i32, i33)		                \
    strDCT2x2dn(&p[i00], &p[i01], &p[i02], &p[i03]);			\
    strDCT2x2dn(&p[i10], &p[i11], &p[i12], &p[i13]);			\
    strDCT2x2dn(&p[i20], &p[i21], &p[i22], &p[i23]);			\
    strDCT2x2dn(&p[i30], &p[i31], &p[i32], &p[i33])

#endif // WMI_STRTRANSFORM_H