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

#include <JXRTest.h>

//================================================================
const PKIID IID_PKImagePnmEncode = 102;
const PKIID IID_PKImageBmpEncode = 103;
const PKIID IID_PKImageTifEncode = 104;
const PKIID IID_PKImageHdrEncode = 105;
const PKIID IID_PKImageIyuvEncode = 106;
const PKIID IID_PKImageYuv422Encode = 107;
const PKIID IID_PKImageYuv444Encode = 108;

const PKIID IID_PKImageBmpDecode = 202;
const PKIID IID_PKImagePnmDecode = 203;
const PKIID IID_PKImageTifDecode = 204;
const PKIID IID_PKImageHdrDecode = 205;
const PKIID IID_PKImageIyuvDecode = 206;
const PKIID IID_PKImageYuv422Decode = 207;
const PKIID IID_PKImageYuv444Decode = 208;

//================================================================
// Misc supporting functions
//================================================================
extern int PKStrnicmp(const char* s1, const char* s2, size_t c);

//----------------------------------------------------------------
typedef struct tagPKIIDInfo
{
    const char* szExt;
    const PKIID* pIIDEnc;
    const PKIID* pIIDDec;
} PKIIDInfo;

static ERR GetTestInfo(const char* szExt, const PKIIDInfo** ppInfo)
{
    ERR err = WMP_errSuccess;

    static PKIIDInfo iidInfo[] = {
        {".bmp", &IID_PKImageBmpEncode, &IID_PKImageBmpDecode},
        {".ppm", &IID_PKImagePnmEncode, &IID_PKImagePnmDecode},
        {".pgm", &IID_PKImagePnmEncode, &IID_PKImagePnmDecode},
        {".pnm", &IID_PKImagePnmEncode, &IID_PKImagePnmDecode},
        {".pfm", &IID_PKImagePnmEncode, &IID_PKImagePnmDecode},
        {".tif", &IID_PKImageTifEncode, &IID_PKImageTifDecode},
        {".hdr", &IID_PKImageHdrEncode, &IID_PKImageHdrDecode},
        {".iyuv", &IID_PKImageIyuvEncode, &IID_PKImageIyuvDecode},
        {".yuv422", &IID_PKImageYuv422Encode, &IID_PKImageYuv422Decode},
        {".yuv444", &IID_PKImageYuv444Encode, &IID_PKImageYuv444Decode},
    };
    size_t i = 0;

    *ppInfo = NULL;
    for (i = 0; i < sizeof2(iidInfo); ++i)
    {
        if (0 == PKStrnicmp(szExt, iidInfo[i].szExt, strlen(iidInfo[i].szExt)))
        {
            *ppInfo = &iidInfo[i];
            goto Cleanup;
        }
    }

    Call(WMP_errUnsupportedFormat);

Cleanup:
    return err;
}

ERR GetTestEncodeIID(const char* szExt, const PKIID** ppIID)
{
    ERR err = WMP_errSuccess;

    const PKIIDInfo* pInfo = NULL;

    Call(GetTestInfo(szExt, &pInfo));
    *ppIID = pInfo->pIIDEnc;

Cleanup:
    return err;
}

ERR GetTestDecodeIID(const char* szExt, const PKIID** ppIID)
{
    ERR err = WMP_errSuccess;

    const PKIIDInfo* pInfo = NULL;

    Call(GetTestInfo(szExt, &pInfo));
    *ppIID = pInfo->pIIDDec;

Cleanup:
    return err;
}


//================================================================
// PKTestFactory
//================================================================
ERR PKTestFactory_CreateCodec(const PKIID* iid, void** ppv)
{
    ERR err = WMP_errSuccess;

    if (IID_PKImageBmpEncode == *iid)
    {
        Call(PKImageEncode_Create_BMP((PKImageEncode**)ppv));
    }
    else if (IID_PKImagePnmEncode == *iid)
    {
        Call(PKImageEncode_Create_PNM((PKImageEncode**)ppv));
    }
    else if (IID_PKImageTifEncode == *iid)
    {
        Call(PKImageEncode_Create_TIF((PKImageEncode**)ppv));
    }
    else if (IID_PKImageHdrEncode == *iid)
    {
        Call(PKImageEncode_Create_HDR((PKImageEncode**)ppv));
    }
    else if (IID_PKImageIyuvEncode == *iid)
    {
        Call(PKImageEncode_Create_IYUV((PKImageEncode**)ppv));
    }
    else if (IID_PKImageYuv422Encode == *iid)
    {
        Call(PKImageEncode_Create_YUV422((PKImageEncode**)ppv));
    }
    else if (IID_PKImageYuv444Encode == *iid)
    {
        Call(PKImageEncode_Create_YUV444((PKImageEncode**)ppv));
    }

    else if (IID_PKImageBmpDecode == *iid)
    {
        Call(PKImageDecode_Create_BMP((PKTestDecode**)ppv));
    }
    else if (IID_PKImagePnmDecode == *iid)
    {
        Call(PKImageDecode_Create_PNM((PKTestDecode**)ppv));
    }
    else if (IID_PKImageTifDecode == *iid)
    {
        Call(PKImageDecode_Create_TIF((PKTestDecode**)ppv));
    }
    else if (IID_PKImageHdrDecode == *iid)
    {
        Call(PKImageDecode_Create_HDR((PKTestDecode**)ppv));
    }
    else if (IID_PKImageIyuvDecode == *iid)
    {
        Call(PKImageDecode_Create_IYUV((PKTestDecode**)ppv));
    }
    else if (IID_PKImageYuv422Decode == *iid)
    {
        Call(PKImageDecode_Create_YUV422((PKTestDecode**)ppv));
    }
    else if (IID_PKImageYuv444Decode == *iid)
    {
        Call(PKImageDecode_Create_YUV444((PKTestDecode**)ppv));
    }

    else
    {
        Call(WMP_errUnsupportedFormat);
    }

Cleanup:
    return err;
}

ERR PKTestFactory_CreateDecoderFromFile(const char* szFilename, PKImageDecode** ppDecoder)
{
    ERR err = WMP_errSuccess;

    char *pExt = NULL;
    PKIID* pIID = NULL;

    struct WMPStream* pStream = NULL;
    PKImageDecode* pDecoder = NULL;

    // get file extension
    pExt = strrchr(szFilename, '.');
    FailIf(NULL == pExt, WMP_errUnsupportedFormat);

    // get decode PKIID
    Call(GetTestDecodeIID(pExt, &pIID));

    // create stream
    Call(CreateWS_File(&pStream, szFilename, "rb"));

    // Create decoder
    Call(PKTestFactory_CreateCodec(pIID, ppDecoder));
    pDecoder = *ppDecoder;

    // attach stream to decoder
    Call(pDecoder->Initialize(pDecoder, pStream));
    pDecoder->fStreamOwner = !0;

Cleanup:
    return err;
}

ERR PKCreateTestFactory(PKCodecFactory** ppCFactory, U32 uVersion)
{
    ERR err = WMP_errSuccess;
    PKCodecFactory* pCFactory = NULL;

    UNREFERENCED_PARAMETER( uVersion );

    Call(PKAlloc(ppCFactory, sizeof(**ppCFactory)));
    pCFactory = *ppCFactory;

    pCFactory->CreateCodec = PKTestFactory_CreateCodec;
    pCFactory->CreateDecoderFromFile = PKTestFactory_CreateDecoderFromFile;
    pCFactory->CreateFormatConverter = PKCodecFactory_CreateFormatConverter;
    pCFactory->Release = PKCreateCodecFactory_Release;

Cleanup:
    return err;
}


//================================================================
// PKTestDecode
//================================================================
ERR PKTestDecode_Initialize(
    PKTestDecode* pID,
    struct WMPStream* pStream)
{
    ERR err = WMP_errSuccess;

    pID->pStream = pStream;
    pID->guidPixFormat = GUID_PKPixelFormatDontCare;
    pID->fResX = 96;
    pID->fResY = 96;
    pID->cFrame = 1;

    Call(pID->pStream->GetPos(pID->pStream, &pID->offStart));

Cleanup:
    return WMP_errSuccess;
}

ERR PKTestDecode_Copy(
    PKTestDecode* pID,
    const PKRect* pRect,
    U8* pb,
    U32 cbStride)
{
    UNREFERENCED_PARAMETER( pID );
    UNREFERENCED_PARAMETER( pRect );
    UNREFERENCED_PARAMETER( pb );
    UNREFERENCED_PARAMETER( cbStride );

    return WMP_errAbstractMethod;
}

ERR PKTestDecode_Release(
    PKTestDecode** ppID)
{
    PKTestDecode* pID = *ppID;

    pID->fStreamOwner && pID->pStream->Close(&pID->pStream);

    return PKFree(ppID);
}

ERR PKTestDecode_Create(
    PKTestDecode** ppID)
{
    ERR err = WMP_errSuccess;
    PKTestDecode* pID = NULL;

    Call(PKAlloc(ppID, sizeof(**ppID)));

    pID = *ppID;
    pID->Initialize = PKTestDecode_Initialize;
    pID->GetPixelFormat = PKImageDecode_GetPixelFormat;
    pID->GetSize = PKImageDecode_GetSize;
    pID->GetResolution = PKImageDecode_GetResolution;
    pID->GetColorContext = PKImageDecode_GetColorContext;
    pID->GetDescriptiveMetadata = PKImageDecode_GetDescriptiveMetadata;
    pID->Copy = PKTestDecode_Copy;
    pID->GetFrameCount = PKImageDecode_GetFrameCount;
    pID->SelectFrame = PKImageDecode_SelectFrame;
    pID->Release = PKTestDecode_Release;

Cleanup:
    return err;
}
