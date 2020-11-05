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
#include <time.h>


//================================================================
static const size_t SKIPFLEXBITS = 0xff;

//================================================================
// Command line argument support
//================================================================
typedef struct tagWMPDECAPPARGS
{
    char* szInputFile;
    char* szOutputFile;

    Bool bVerbose;

    PKPixelFormatGUID guidPixFormat;
//    Bool bFlagRGB_BGR;

    // region decode
    size_t rLeftX;
    size_t rTopY;
    size_t rWidth;
    size_t rHeight;

    // thumbnail
    size_t tThumbnailFactor;

    // orientation
    ORIENTATION oOrientation;

    // post processing
    U8 cPostProcStrength;

    U8 uAlphaMode; // 0:no alpha 1: alpha only else: something + alpha 

    SUBBAND sbSubband;  // which subbands to keep (for transcoding)

    BITSTREAMFORMAT bfBitstreamFormat; // desired bitsream format (for transcoding)

    CWMIStrCodecParam wmiSCP;

    Bool bIgnoreOverlap;
} WMPDECAPPARGS;

//----------------------------------------------------------------
void WmpDecAppUsage(const char* szExe)
{
    printf(CRLF);
    printf("JPEG XR Decoder Utility" CRLF);
    printf("Copyright 2013 Microsoft Corporation - All Rights Reserved" CRLF); 
    printf(CRLF);
    printf("%s [options]..." CRLF, szExe);
    printf(CRLF);
    printf("  -i input.jxr/wdp             Input JPEG XR/HD Photo file name" CRLF);
    printf(CRLF);
    printf("  -o output.bmp/tif/jxr        Output image file name" CRLF);
    printf("                               bmp: <=8bpc, BGR" CRLF);
    printf("                               tif: >=8bpc, RGB" CRLF);
    printf("                               jxr: for compressed domain transcode" CRLF);
    printf(CRLF);

    printf("  -c format                    Specifies the uncompressed output format" CRLF);
    printf("                                0: 24bppBGR" CRLF);
    printf("                                1: 1bppBlackWhite" CRLF);
    printf("                                2: 8bppGray" CRLF);
    printf("                                3: 16bppGray" CRLF);
    printf("                                4: 16bppGrayFixedPoint" CRLF);
    printf("                                5: 16bppGrayHalf" CRLF);
//    printf("                               6: 32bppGray" CRLF);
    printf("                                7: 32bppGrayFixedPoint" CRLF);
    printf("                                8: 32bppGrayFloat" CRLF);

    printf("                                9: 24bppRGB" CRLF);
    printf("                               10: 48bppRGB" CRLF);
    printf("                               11: 48bppRGBFixedPoint" CRLF);
    printf("                               12: 48bppRGBHalf" CRLF);
//    printf("                               13: 96bppRGB" CRLF);
    printf("                               14: 96bppRGBFixedPoint" CRLF);
    printf("                               15: 128bppRGBFloat" CRLF);

    printf("                               16: 32bppRGBE" CRLF);

    printf("                               17: 32bppCMYK" CRLF);
    printf("                               18: 64bppCMYK" CRLF);

/*
    printf("                               19 - YUV 420" CRLF);
    printf("                               20 - YUV 422" CRLF);
    printf("                               21 - YUV 444" CRLF);
*/
    printf("                               22: 32bppBGRA" CRLF);
    printf("                               23: 64bppRGBA" CRLF);
    printf("                               24: 64bppRGBAFixedPoint" CRLF);
    printf("                               25: 64bppRGBAHalf" CRLF);
//    printf("                               26 - 128bpp RGBA" CRLF);
    printf("                               27: 128bppRGBAFixedPoint" CRLF);
    printf("                               28: 128bppRGBAFloat" CRLF);

    printf("                               29: 16bppBGR555" CRLF);
    printf("                               30: 16bppBGR565" CRLF);
    printf("                               31: 32bppBGR101010" CRLF);
    //printf("                               101..116 - 1..16 channel 8bpp" CRLF);
    printf("                               32: 40bppCMYKA" CRLF);
    printf("                               33: 80bppCMYKA" CRLF);

    printf("                               34: 32bppBGR" CRLF);
/*
    printf("                               35:  32bppPBGRA" CRLF);
    printf("                               36:  64bppPRGBA" CRLF);
    printf("                               37: 128bppPRGBA Float" CRLF);
*/
    printf(CRLF);

    printf("  -r top left height width     Specifies the rectangle for region decode" CRLF);
    printf(CRLF);
    printf("  -T m                         Reduced resolution (mipmap) decode" CRLF);
    printf("                                0: Full resolution (default)" CRLF);
    printf("                                1: 1/2 res (down-sampled from full res)" CRLF);
    printf("                                2: 1/4 res (native decode)" CRLF);
    printf("                                3: 1/8 res (down-sampled from 1/4 res)" CRLF);
    printf("                                4: 1/16 res (native decode)" CRLF);
    printf("                               >4: 1/(2^m) res (down-sampled from 1/16 res) " CRLF);
    printf(CRLF);

    printf("  -O orientation               0: No transformation (default)" CRLF);
    printf("                               1: Flip vertically" CRLF);
    printf("                               2: Flip horizontally" CRLF);
    printf("                               3: Flip vertically & horizontally" CRLF);
    printf("                               4: Rotate 90 degrees CW" CRLF);
    printf("                               5: Rotate 90 degrees CW & flip vertically" CRLF);
    printf("                               6: Rotate 90 degrees CW & flip horizontally" CRLF);
    printf("                               7: Rotate 90 degrees CW & flip vert & horiz" CRLF);
    printf(CRLF);

    printf("  -s skip subbands             Used for compressed domain transcoding" CRLF);    
    printf("                               0: All subbands included (default)" CRLF);    
    printf("                               1: Skip flexbits" CRLF);    
    printf("                               2: Skip highpass" CRLF);    
    printf("                               3: Skip highpass & lowpass (DC only)" CRLF);    
    printf(CRLF);

    printf("  -a alpha decode              0: Decode without alpha channel" CRLF);
    printf("                               1: Decode only alpha channel" CRLF);
    printf("                               2: Decode image & alpha (default)" CRLF);
    printf(CRLF);

    printf("  -p strength                  Post processing filter strength" CRLF);
    printf("                               0: None (default)" CRLF);
    printf("                               1: Light" CRLF);
    printf("                               2: Medium" CRLF);
    printf("                               3: Strong" CRLF);
    printf("                               4: Very strong" CRLF);
    printf(CRLF);

    printf("  -C                           Suppress overlapping boundary macro blocks" CRLF);
    printf("                               (Used for compressed domain tile extraction)" CRLF);
    printf(CRLF);

    printf("  -t                           Display timing information" CRLF);
    printf(CRLF);

    printf("  -v                           Display verbose decoder information" CRLF);
    printf(CRLF);
    printf("Eg: %s -i input.jxr -o output.bmp -c 0" CRLF, szExe);
}

void WmpDecAppShowArgs(WMPDECAPPARGS* args)
{
	GUID guidPF = args->guidPixFormat;

    printf("================================" CRLF);
    printf("Input file:     %s" CRLF, args->szInputFile);
    printf("Output file:    %s" CRLF, args->szOutputFile);
    printf("Color format:   %08X-%04X-%04X-%02X%02X%02X%02X%02X%02X%02X%02X" CRLF, 
        guidPF.Data1, guidPF.Data2, guidPF.Data3, guidPF.Data4[0], guidPF.Data4[1], guidPF.Data4[2],
        guidPF.Data4[3], guidPF.Data4[4], guidPF.Data4[5], guidPF.Data4[6], guidPF.Data4[7]);
    printf("Post processing strength: %d" CRLF, args->cPostProcStrength);
    printf("Thumbnail:      %d" CRLF, (int) args->tThumbnailFactor);
    printf("================================" CRLF);
}

//----------------------------------------------------------------
void WmpDecAppInitDefaultArgs(WMPDECAPPARGS* args)
{
    memset(args, 0, sizeof(*args));
    args->guidPixFormat = GUID_PKPixelFormatDontCare;
//    args->bFlagRGB_BGR = FALSE; //default BGR
    args->bVerbose = FALSE;
    args->tThumbnailFactor = 0;
    args->oOrientation = O_NONE;
    args->cPostProcStrength = 0;
    args->uAlphaMode = 255;
    args->sbSubband = SB_ALL;
}

ERR WmpDecAppValidateArgs(WMPDECAPPARGS* args)
{
    ERR err = WMP_errSuccess;

    Test(NULL != args->szInputFile, WMP_errInvalidParameter);
    Test(NULL != args->szOutputFile, WMP_errInvalidParameter);
    //Test(GUID_PKPixelFormatDontCare != args->enPixelFormat, WMP_errInvalidParameter);

Cleanup:
    return err;
}

ERR WmpDecAppParseArgs(int argc, char* argv[], WMPDECAPPARGS* args)
{
    ERR err = WMP_errSuccess;

    int c = 0, i = 1;
    // char* arg = NULL;

    static const PKPixelFormatGUID* pixelFormat[] =
    {
        &GUID_PKPixelFormat24bppRGB,

        &GUID_PKPixelFormatBlackWhite,

        &GUID_PKPixelFormat8bppGray,
        &GUID_PKPixelFormat16bppGray,
        &GUID_PKPixelFormat16bppGrayFixedPoint,
        &GUID_PKPixelFormat16bppGrayHalf,
        &GUID_PKPixelFormatDontCare, // &GUID_PKPixelFormat32bppGray,
        &GUID_PKPixelFormat32bppGrayFixedPoint,
        &GUID_PKPixelFormat32bppGrayFloat,

        &GUID_PKPixelFormat24bppRGB,
        &GUID_PKPixelFormat48bppRGB,
        &GUID_PKPixelFormat48bppRGBFixedPoint,
        &GUID_PKPixelFormat48bppRGBHalf,
        &GUID_PKPixelFormatDontCare, // &GUID_PKPixelFormat96bppRGB,
        &GUID_PKPixelFormat96bppRGBFixedPoint,
        &GUID_PKPixelFormat128bppRGBFloat,

        &GUID_PKPixelFormat32bppRGBE,
        &GUID_PKPixelFormat32bppCMYK,
        &GUID_PKPixelFormat64bppCMYK,

        &GUID_PKPixelFormat12bppYUV420, 
        &GUID_PKPixelFormat16bppYUV422,
        &GUID_PKPixelFormat24bppYUV444,

//        &GUID_PKPixelFormat32bppRGBA,
        &GUID_PKPixelFormat32bppBGRA,
        &GUID_PKPixelFormat64bppRGBA,
        &GUID_PKPixelFormat64bppRGBAFixedPoint,
        &GUID_PKPixelFormat64bppRGBAHalf,
        &GUID_PKPixelFormatDontCare, // &GUID_PKPixelFormat128bppRGBA,
        &GUID_PKPixelFormat128bppRGBAFixedPoint,
        &GUID_PKPixelFormat128bppRGBAFloat,
        &GUID_PKPixelFormat16bppRGB555,
        &GUID_PKPixelFormat16bppRGB565,
        &GUID_PKPixelFormat32bppRGB101010,
        &GUID_PKPixelFormat40bppCMYKAlpha,
        &GUID_PKPixelFormat80bppCMYKAlpha,
        &GUID_PKPixelFormat32bppBGR,
        &GUID_PKPixelFormat32bppPBGRA,
        &GUID_PKPixelFormat64bppPRGBA,
        &GUID_PKPixelFormat128bppPRGBAFloat,
    };

    size_t InvalidPF[9] = {6, 13, 19, 20, 21, 26, 35, 36, 37};
    int k;

    WmpDecAppInitDefaultArgs(args);

    while(i < argc && argv[i][0] == '-')
//    while (EOF != (c = argit(argc, argv, "i:o:c:ptv", &arg)))
    {
         /* separate out the no-argument switches */
        switch ((c = argv[i][1])) {
            case 't':
                // NOOP - now we always print timing info
                break;

            case 'v':
                args->bVerbose = !FALSE;
                break;

            case 'C':
                args->bIgnoreOverlap = TRUE;
                break;
            
            case 'f': 
                args->bfBitstreamFormat = FREQUENCY;
                break;

            default:
                i ++;
                if (i == argc || argv[i][0] == '-') // need more info
                    Call(WMP_errInvalidArgument);
                
                switch (c)
                {
                case 'i':
                    args->szInputFile= argv[i];
                    break;

                case 'o':
                    args->szOutputFile = argv[i];
                    break;
                
                case 'p':
                    args->cPostProcStrength = (U8)atoi(argv[i]);
                    break;

                case 'c':
                {
                    size_t idxPF = (size_t)atol(argv[i]);

                    FailIf(sizeof2(pixelFormat) <= idxPF, WMP_errUnsupportedFormat);

                    for (k = 0; k < 9; k++)
                    {
                        if (InvalidPF[k] == idxPF)
                        {
                            printf("*** ERROR: Unsupported format in JPEG XR ***\n");
                            Call(WMP_errInvalidArgument);
                        }
                    }

                    args->guidPixFormat = *pixelFormat[idxPF];

                    break;
                }

/*                case 'R': 
                    args->bFlagRGB_BGR = (Bool)atoi(argv[i]);
                    break;
*/
                case 'a': 
                    args->uAlphaMode = (U8)atoi(argv[i]);
                    break;

                case 's': 
                    args->sbSubband = (SUBBAND)atoi(argv[i]);
                    break;

                case 'r': // Region decode
                    if(i + 3 >= argc || argv[i + 1][0] == '-' || argv[i + 2][0] == '-' || argv[i + 3][0] == '-') // not a valid region
                        Call(WMP_errInvalidArgument);

                    args->rTopY = (size_t)atoi(argv[i]);
                    args->rLeftX = (size_t)atoi(argv[i + 1]);
                    args->rHeight = (size_t)atoi(argv[i + 2]);
                    args->rWidth = (size_t)atoi(argv[i + 3]);
                    i += 3;

                    break;

                case 'T': // thumnail decode
                    args->tThumbnailFactor = (size_t)atoi(argv[i]);
                    if (args->tThumbnailFactor == 0) {  // skip flexbits
                        args->tThumbnailFactor = SKIPFLEXBITS;
                    }
                    break;

                case 'O': // orientation
                    args->oOrientation = (atoi(argv[i]) < 8 ? atoi(argv[i]) : O_NONE);
                    break;

                default:
                    Call(WMP_errInvalidArgument);
                    break;
            }
        }

        i ++;
    }

    Call(WmpDecAppValidateArgs(args));

Cleanup:
    return err;
}


//================================================================
// Encoder factory on file extension
//================================================================
ERR WmpDecAppCreateEncoderFromExt(
    PKCodecFactory* pCFactory,
    const char* szExt,
    PKImageEncode** ppIE)
{
    ERR err = WMP_errSuccess;
    const PKIID* pIID = NULL;

    UNREFERENCED_PARAMETER( pCFactory );

    // get encod PKIID
    Call(GetTestEncodeIID(szExt, &pIID));

    // Create encoder
    Call(PKTestFactory_CreateCodec(pIID, ppIE));

Cleanup:
    return err;
}


//================================================================
// main function
//================================================================
int 
#ifndef __ANSI__
__cdecl
#endif // __ANSI__
main(int argc, char* argv[])
{
    ERR err = WMP_errSuccess;

    PKFactory* pFactory = NULL;
    PKCodecFactory* pCodecFactory = NULL;
    PKImageDecode* pDecoder = NULL;

    WMPDECAPPARGS args = {0};
    char* pExt = NULL;
    U32 cFrame = 0;
    U32 i = 0;
    PKPixelInfo PI;
//    static size_t cChannels[CFT_MAX] = {1, 3, 3, 3, 4, 4, -1, 3, 3, -1};

    //================================
    // parse command line parameters
    if (1 == argc)
    {
        WmpDecAppUsage(argv[0]);
        return 0;
    }

    Call(WmpDecAppParseArgs(argc, argv, &args));
    if (args.bVerbose)
    {
        WmpDecAppShowArgs(&args);
    }

    //================================
    pExt = strrchr(args.szOutputFile, '.');
    FailIf(NULL == pExt, WMP_errUnsupportedFormat);

    //================================
    Call(PKCreateFactory(&pFactory, PK_SDK_VERSION));
    
    Call(PKCreateCodecFactory(&pCodecFactory, WMP_SDK_VERSION));
    Call(pCodecFactory->CreateDecoderFromFile(args.szInputFile, &pDecoder));

    //==== set default color format
    if(IsEqualGUID(&args.guidPixFormat, &GUID_PKPixelFormatDontCare)) {
        // take deocder color format and try to look up better one
        // (e.g. 32bppBGR -> 24bppBGR etc.)
        PKPixelInfo newPI;
        newPI.pGUIDPixFmt = PI.pGUIDPixFmt = &pDecoder->guidPixFormat;
        Call(PixelFormatLookup(&newPI, LOOKUP_FORWARD));
        Call(PixelFormatLookup(&newPI, LOOKUP_BACKWARD_TIF));
        args.guidPixFormat = *newPI.pGUIDPixFmt;
    }
    else
        PI.pGUIDPixFmt = &args.guidPixFormat;

//    pDecoder->WMP.wmiI.bRGB = args.bFlagRGB_BGR;

    // == color transcoding,
    if(IsEqualGUID(&args.guidPixFormat, &GUID_PKPixelFormat8bppGray) || IsEqualGUID(&args.guidPixFormat, &GUID_PKPixelFormat16bppGray)){ // ** => Y transcoding
        pDecoder->guidPixFormat = args.guidPixFormat;
        pDecoder->WMP.wmiI.cfColorFormat = Y_ONLY;
    }
    else if(IsEqualGUID(&args.guidPixFormat, &GUID_PKPixelFormat24bppRGB) && pDecoder->WMP.wmiI.cfColorFormat == CMYK){ // CMYK = > RGB
        pDecoder->WMP.wmiI.cfColorFormat = CF_RGB;
        pDecoder->guidPixFormat = args.guidPixFormat;
        pDecoder->WMP.wmiI.bRGB = 1; //RGB
    }

    PixelFormatLookup(&PI, LOOKUP_FORWARD);

    if(255 == args.uAlphaMode)//user didn't set
    {
        if(!!(PI.grBit & PK_pixfmtHasAlpha))
            args.uAlphaMode = 2;//default is image & alpha for formats with alpha
        else
            args.uAlphaMode = 0;//otherwise, 0
    }

    pDecoder->WMP.wmiSCP.bfBitstreamFormat = args.bfBitstreamFormat;
    pDecoder->WMP.wmiSCP.uAlphaMode = args.uAlphaMode;
    pDecoder->WMP.wmiSCP.sbSubband = args.sbSubband;
    pDecoder->WMP.bIgnoreOverlap = args.bIgnoreOverlap;

    pDecoder->WMP.wmiI.cfColorFormat = PI.cfColorFormat;

    pDecoder->WMP.wmiI.bdBitDepth = PI.bdBitDepth;
    pDecoder->WMP.wmiI.cBitsPerUnit = PI.cbitUnit;

    //==== Validate thumbnail decode parameters =====
    pDecoder->WMP.wmiI.cThumbnailWidth = pDecoder->WMP.wmiI.cWidth;
    pDecoder->WMP.wmiI.cThumbnailHeight = pDecoder->WMP.wmiI.cHeight;
    pDecoder->WMP.wmiI.bSkipFlexbits = FALSE;
    if(args.tThumbnailFactor > 0 && args.tThumbnailFactor != SKIPFLEXBITS){
        size_t tSize = ((size_t)1 << args.tThumbnailFactor);
        
        pDecoder->WMP.wmiI.cThumbnailWidth = (pDecoder->WMP.wmiI.cWidth + tSize - 1) / tSize;
        pDecoder->WMP.wmiI.cThumbnailHeight = (pDecoder->WMP.wmiI.cHeight + tSize - 1) / tSize;

        if(pDecoder->WMP.wmiI.cfColorFormat == YUV_420 || pDecoder->WMP.wmiI.cfColorFormat == YUV_422){ // unsupported thumbnail format
            pDecoder->WMP.wmiI.cfColorFormat = YUV_444;
        }
    }
    else if (args.tThumbnailFactor == SKIPFLEXBITS) {
        pDecoder->WMP.wmiI.bSkipFlexbits = TRUE;
    }

    if(args.rWidth == 0 || args.rHeight == 0){ // no region decode
        args.rLeftX = args.rTopY = 0;
        args.rWidth = pDecoder->WMP.wmiI.cThumbnailWidth;
        args.rHeight = pDecoder->WMP.wmiI.cThumbnailHeight;
    }
    pDecoder->WMP.wmiI.cROILeftX = args.rLeftX;
    pDecoder->WMP.wmiI.cROITopY = args.rTopY;
    pDecoder->WMP.wmiI.cROIWidth = args.rWidth;
    pDecoder->WMP.wmiI.cROIHeight = args.rHeight;

    pDecoder->WMP.wmiI.oOrientation = args.oOrientation;

    pDecoder->WMP.wmiI.cPostProcStrength = args.cPostProcStrength;
    
    pDecoder->WMP.wmiSCP.bVerbose = args.bVerbose;

    Call(pDecoder->GetFrameCount(pDecoder, &cFrame));

    //================================
    for (i = 0; ; ++i)
    {
        struct WMPStream* pEncodeStream = NULL;
        PKImageEncode* pEncoder = NULL;

        PKFormatConverter* pConverter = NULL;

        Float rX = 0.0, rY = 0.0;
        PKRect rect = {0, 0, 0, 0};

        //================================
        Call(pCodecFactory->CreateFormatConverter(&pConverter));

        Call(pConverter->Initialize(pConverter, pDecoder, pExt, args.guidPixFormat));

        //================================
        Call(pFactory->CreateStreamFromFilename(&pEncodeStream, args.szOutputFile, "wb"));
        Call(WmpDecAppCreateEncoderFromExt(pCodecFactory, pExt, &pEncoder));

		if(pEncoder->bWMP)
			Call(pEncoder->Initialize(pEncoder, pEncodeStream, &args.wmiSCP, sizeof(args.wmiSCP)));
		else
			Call(pEncoder->Initialize(pEncoder, pEncodeStream, NULL, 0));

        //================================
        Call(pEncoder->SetPixelFormat(pEncoder, args.guidPixFormat));
        pEncoder->WMP.wmiSCP.bBlackWhite = pDecoder->WMP.wmiSCP.bBlackWhite;

        //Call(pDecoder->GetSize(pDecoder, &rect.Width, &rect.Height));
        rect.Width = (I32)(pDecoder->WMP.wmiI.cROIWidth);
        rect.Height = (I32)(pDecoder->WMP.wmiI.cROIHeight);

        if(args.oOrientation > O_FLIPVH){ // allocate memory for rotated image!
            I32 bah = rect.Width;

            rect.Width = rect.Height;
            rect.Height = bah;
        }

        Call(pEncoder->SetSize(pEncoder, rect.Width, rect.Height));

        Call(pDecoder->GetResolution(pDecoder, &rX, &rY));
        if(args.oOrientation > O_FLIPVH) 
            Call(pEncoder->SetResolution(pEncoder, rY, rX));
        else
            Call(pEncoder->SetResolution(pEncoder, rX, rY));

        if(pEncoder->bWMP && args.tThumbnailFactor > 0){
            printf("-T can not be used for compressed domain operation!\n");
            return 0;
        }

        //================================
		pEncoder->WriteSource = PKImageEncode_Transcode;
        Call(pEncoder->WriteSource(pEncoder, pConverter, &rect));

        //================================
//        Call(pEncoder->Terminate(pEncoder));
        pEncoder->Release(&pEncoder);

        // multi-frame support NYI
        if (i + 1 == cFrame)
        {
            break;
        }

        Call(pDecoder->SelectFrame(pDecoder, i + 1));
    }

    pDecoder->Release(&pDecoder);

Cleanup:
    if (WMP_errUnsupportedFormat == err)
    {
        printf("*** ERROR: Unsupported format in JPEG XR ***\n");
    }
    else if (WMP_errSuccess != err)
    {
        WmpDecAppUsage(argv[0]);
    }
    
    return (int)err;
}
