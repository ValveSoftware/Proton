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

#include <stdlib.h>
#include <string.h>

#include <JXRGlue.h>

#pragma pack(push, 1)
#pragma pack(pop)

//================================================================
// PKImageEncode_Iyuv
//================================================================
ERR WriteIYUVHeader(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    // struct WMPStream* pS = pIE->pStream;

    pIE->offPixel = 0;

    pIE->cbPixel = 3;

    pIE->fHeaderDone = !FALSE;

    return err;
}

//================================================================
// PKImageEncode_Yuv422
//================================================================
ERR WriteYUV422Header(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    // struct WMPStream* pS = pIE->pStream;

    pIE->offPixel = 0;

    pIE->cbPixel = 3;

    pIE->fHeaderDone = !FALSE;

    return err;
}

//================================================================
// PKImageEncode_Yuv444
//================================================================
ERR WriteYUV444Header(
    PKImageEncode* pIE)
{
    ERR err = WMP_errSuccess;
    // struct WMPStream* pS = pIE->pStream;

    pIE->offPixel = 0;

    pIE->cbPixel = 3;

    pIE->fHeaderDone = !FALSE;

    return err;
}

ERR PKImageEncode_WritePixels_IYUV(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pS = pIE->pStream;
    size_t iRow, iCol;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    UNREFERENCED_PARAMETER( cbStride );

    // header
    if (!pIE->fHeaderDone)
    {
        Call(WriteIYUVHeader(pIE));
    }

    //from packed to planar:
    uYSize = cLine * pIE->uWidth;
    uUVSize = (uYSize >> 2);

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }

    for (iRow = 0; iRow < pIE->uHeight; iRow += 2, pY += pIE->uWidth) 
    {
        for (iCol = 0; iCol < pIE->uWidth; iCol += 2, pY += 2)
        {

            *pY = *pbPixel;
            pbPixel++;
            *(pY + 1)= *pbPixel;
            pbPixel++;
            *(pY + pIE->uWidth) = *pbPixel;
            pbPixel++;
            *(pY + pIE->uWidth + 1) = *pbPixel;
            pbPixel++;

            *pU = *pbPixel;
            pbPixel++; pU++;
            *pV = *pbPixel;
            pbPixel++; pV++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;

    Call(pS->Write(pS, pY, uYSize));
    Call(pS->Write(pS, pU, uUVSize));
    Call(pS->Write(pS, pV, uUVSize));

    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}


ERR PKImageEncode_WritePixels_YUV422(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pS = pIE->pStream;
    size_t iRow, iCol;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    UNREFERENCED_PARAMETER( cbStride );

    // header
    if (!pIE->fHeaderDone)
    {
        Call(WriteIYUVHeader(pIE));
    }

    //from packed to planar:
    uYSize = cLine * pIE->uWidth;
    uUVSize = (uYSize >> 1);

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }
//YYUV
    for (iRow = 0; iRow < pIE->uHeight; iRow += 1) 
    {
        for (iCol = 0; iCol < pIE->uWidth; iCol += 2)
        {
            *pU = *pbPixel;
            pbPixel++; pU++;

            *pY = *pbPixel;
            pbPixel++; pY++;

            *pV = *pbPixel;
            pbPixel++; pV++;

            *pY = *pbPixel;
            pbPixel++; pY++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;

    Call(pS->Write(pS, pY, uYSize));
    Call(pS->Write(pS, pU, uUVSize));
    Call(pS->Write(pS, pV, uUVSize));

    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}


ERR PKImageEncode_WritePixels_YUV444(
    PKImageEncode* pIE,
    U32 cLine,
    U8* pbPixel,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    struct WMPStream* pS = pIE->pStream;
    size_t iRow, iCol;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    UNREFERENCED_PARAMETER( cbStride );

    // header
    if (!pIE->fHeaderDone)
    {
        Call(WriteIYUVHeader(pIE));
    }

    //from packed to planar:
    uYSize = cLine * pIE->uWidth;
    uUVSize = uYSize;

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }

    for (iRow = 0; iRow < pIE->uHeight; iRow += 1) 
    {
        for (iCol = 0; iCol < pIE->uWidth; iCol += 1)
        {

            *pY = *pbPixel;
            pbPixel++; pY++;

            *pU = *pbPixel;
            pbPixel++; pU++;
            *pV = *pbPixel;
            pbPixel++; pV++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;

    Call(pS->Write(pS, pY, uYSize));
    Call(pS->Write(pS, pU, uUVSize));
    Call(pS->Write(pS, pV, uUVSize));

    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

    pIE->idxCurrentLine += cLine;

Cleanup:
    return err;
}



ERR PKImageEncode_Create_IYUV(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_IYUV;

Cleanup:
    return err;
}

ERR PKImageEncode_Create_YUV422(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_YUV422;

Cleanup:
    return err;
}

ERR PKImageEncode_Create_YUV444(
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    PKImageEncode* pIE = NULL;

    Call(PKImageEncode_Create(ppIE));

    pIE = *ppIE;
    pIE->WritePixels = PKImageEncode_WritePixels_YUV444;

Cleanup:
    return err;
}


//================================================================
// PKImageDecode_IYUV
//================================================================
ERR ParseIYUVHeader(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pWS );

    // Set header other header parameters
    pID->guidPixFormat = GUID_PKPixelFormat12bppYUV420;

    pID->uHeight = 144;
    pID->uWidth = 176;

    //I don't need offpixel for raw data!    Call(pWS->GetPos(pWS, &pID->YUV420.offPixel));

    return err;
}

//================================================================
// PKImageDecode_YUV422
//================================================================
ERR ParseYUV422Header(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pWS );

    // Set header other header parameters
    pID->guidPixFormat = GUID_PKPixelFormat16bppYUV422;

    pID->uHeight = 144;
    pID->uWidth = 176;

    return err;
}

//================================================================
// PKImageDecode_YUV422
//================================================================
ERR ParseYUV444Header(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    UNREFERENCED_PARAMETER( pWS );

    // Set header other header parameters
    pID->guidPixFormat = GUID_PKPixelFormat24bppYUV444;

    pID->uHeight = 144;
    pID->uWidth = 176;

    return err;
}

ERR PKImageDecode_Initialize_IYUV(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKImageDecode_Initialize(pID, pWS));
    Call(ParseIYUVHeader(pID, pWS));

Cleanup:
    return err;
}

ERR PKImageDecode_Initialize_YUV422(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKImageDecode_Initialize(pID, pWS));
    Call(ParseYUV422Header(pID, pWS));

Cleanup:
    return err;
}

ERR PKImageDecode_Initialize_YUV444(
    PKImageDecode* pID,
    struct WMPStream* pWS)
{
    ERR err = WMP_errSuccess;

    Call(PKImageDecode_Initialize(pID, pWS));
    Call(ParseYUV444Header(pID, pWS));

Cleanup:
    return err;
}


ERR PKImageDecode_Copy_IYUV(
    PKImageDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    struct WMPStream* pS = pID->pStream;

    size_t iRow, iCol; 

    UNREFERENCED_PARAMETER( pRect );
    UNREFERENCED_PARAMETER( cbStride );

    //from planar to packed! YYYYUV YYYYUV
    uYSize = pID->uWidth * pID->uHeight;
    uUVSize = (uYSize >> 2);

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }

    Call(pS->Read(pS, pY, uYSize));
    Call(pS->Read(pS, pU, uUVSize));
    Call(pS->Read(pS, pV, uUVSize));

    //re-organize it to Y0 Y1
    //                  Y2 Y3 U V

    for (iRow = 0; iRow < pID->uHeight; iRow += 2, pY += pID->uWidth)
    {
        for (iCol = 0; iCol < pID->uWidth; iCol += 2, pY += 2)
        {
            *pb = *pY;
            pb++;
            *pb = *(pY + 1);
            pb++;
            *pb = *(pY + pID->uWidth);
            pb++;
            *pb = *(pY + pID->uWidth + 1);
            pb++;

            *pb = *pU;
            pb++; pU++;
            *pb = *pV;
            pb++; pV++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;
    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

Cleanup:
    return err;
}


ERR PKImageDecode_Copy_YUV422(
    PKImageDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    struct WMPStream* pS = pID->pStream;

    size_t iRow, iCol; 

    UNREFERENCED_PARAMETER( pRect );
    UNREFERENCED_PARAMETER( cbStride );

    uYSize = pID->uWidth * pID->uHeight;
    uUVSize = (uYSize >> 1);

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }

    Call(pS->Read(pS, pY, uYSize));
    Call(pS->Read(pS, pU, uUVSize));
    Call(pS->Read(pS, pV, uUVSize));

    //re-organize to iMode 0 : YYUV

    for (iRow = 0; iRow < pID->uHeight; iRow += 1)
    {
        for (iCol = 0; iCol < pID->uWidth; iCol += 2)
        {
            *pb = *pU;
            pb++; pU++;

            *pb = *pY;
            pb++; pY++;

            *pb = *pV;
            pb++; pV++;

            *pb = *pY;
            pb++; pY++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;
    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

Cleanup:
    return err;
}


ERR PKImageDecode_Copy_YUV444(
    PKImageDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    ERR err = WMP_errSuccess;
    U32 uYSize, uUVSize; 
    U8 *pY;
    U8 *pU;
    U8 *pV;

    struct WMPStream* pS = pID->pStream;

    size_t iRow, iCol; 

    UNREFERENCED_PARAMETER( pRect );
    UNREFERENCED_PARAMETER( cbStride );

    //from planar to packed! YYYYUV YYYYUV
    uYSize = pID->uWidth * pID->uHeight;
    uUVSize = uYSize;

    pY = (U8 *)malloc(uYSize);
    pU = (U8 *)malloc(uUVSize);
    pV = (U8 *)malloc(uUVSize);

    if(pY == NULL || pU == NULL || pV == NULL)
    {
        return ICERR_ERROR;
    }

    Call(pS->Read(pS, pY, uYSize));
    Call(pS->Read(pS, pU, uUVSize));
    Call(pS->Read(pS, pV, uUVSize));

    //Organize it as YUVYUVYUV...

    for (iRow = 0; iRow < pID->uHeight; iRow += 1)
    {
        for (iCol = 0; iCol < pID->uWidth; iCol += 1)
        {
            *pb = *pY;
            pb++; pY++; 

            *pb = *pU;
            pb++; pU++;
            *pb = *pV;
            pb++; pV++;
        }
    }

    pY-=uYSize;
    pU-=uUVSize;
    pV-=uUVSize;
    if(pY!=NULL)
        free(pY);
    if(pU!=NULL)
        free(pU);
    if(pV!=NULL)
        free(pV);

Cleanup:
    return err;
}


ERR PKImageDecode_Create_IYUV(
    PKImageDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKImageDecode* pID = NULL;

    Call(PKImageDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_IYUV;
    pID->Copy = PKImageDecode_Copy_IYUV;

Cleanup:
    return err;
}

ERR PKImageDecode_Create_YUV422(
    PKImageDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKImageDecode* pID = NULL;

    Call(PKImageDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_YUV422;
    pID->Copy = PKImageDecode_Copy_YUV422;

Cleanup:
    return err;
}

ERR PKImageDecode_Create_YUV444(
    PKImageDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKImageDecode* pID = NULL;

    Call(PKImageDecode_Create(ppID));

    pID = *ppID;
    pID->Initialize = PKImageDecode_Initialize_YUV444;
    pID->Copy = PKImageDecode_Copy_YUV444;

Cleanup:
    return err;
}

