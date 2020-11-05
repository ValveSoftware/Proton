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
// Command line argument support
//================================================================
typedef struct tagWMPENCAPPARGS
{
    char* szInputFile;
    char* szOutputFile;
    
    PKPixelFormatGUID guidPixFormat;
//    Bool bFlagRGB_BGR;

    CWMIStrCodecParam wmiSCP;
    float fltImageQuality;
    Bool bOverlapSet;
    Bool bColorFormatSet;
} WMPENCAPPARGS;

//----------------------------------------------------------------
void WmpEncAppUsage(const char* szExe)
{
    printf(CRLF);
    printf("JPEG XR Encoder Utility" CRLF);
    printf("Copyright 2013 Microsoft Corporation - All Rights Reserved" CRLF); 
    printf(CRLF);
    printf("%s [options]..." CRLF, szExe);
    printf(CRLF);
    printf("  -i input.bmp/tif/hdr         Input image file name" CRLF);
    printf("                               bmp: <=8bpc, BGR" CRLF);
    printf("                               tif: >=8bpc, RGB" CRLF);
    printf("                               hdr: 24bppRGBE only" CRLF);
    printf(CRLF);

    printf("  -o output.jxr                Output JPEG XR file name" CRLF);
    printf(CRLF);

    printf("  -q quality                   [0.0 - 1.0) Default = 1.0, lossless" CRLF);
    printf("  or quantization              [1   - 255] Default = 1, lossless" CRLF);
    printf(CRLF);

    printf("  -c format                    Required to define uncompressed source pixel format" CRLF);
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

    printf("  -d chroma sub-sampling       0: Y-only" CRLF);
    printf("                               1: YCoCg 4:2:0" CRLF);
    printf("                               2: YCoCg 4:2:2" CRLF);
    printf("                               3: YCoCg 4:4:4 (default)" CRLF);
    printf("     (if not set is 4:4:4 for quality >= 0.5 or 4:2:0 for quality < 0.5)" CRLF);
    printf(CRLF);

    printf("  -l overlapping               0: No overlapping" CRLF);
    printf("                               1: One level overlapping (default)" CRLF);
    printf("                               2: Two level overlapping" CRLF);
    printf("     (if not set is One for quality > 0.4 or Two for quality <= 0.4)" CRLF);
    printf(CRLF);

    printf("  -f                           Turn off frequency order bit stream (to spatial)" CRLF);
    printf(CRLF);    
    printf("  -p                           Turn off progressive mode (to sequential)" CRLF);
    printf(CRLF);    
    printf("  -t                           Display timing information" CRLF);
    printf(CRLF);
    printf("  -v                           Display verbose encoder information" CRLF);
    printf(CRLF);
    printf("  -V tile_wd0 [tile_wd1 ... ]  Macro block columns per tile " CRLF);
    printf(CRLF);
    printf("  -H tile_ht0 [tile_ht1 ... ]  Macro block rows per tile" CRLF);
    printf(CRLF);
    printf("  -U num_v_tiles num_h_tiles   Vertical & horizontal tile count for uniform tiling" CRLF);
    printf(CRLF);

    printf("  -b Black/White               Applies to 1bpp black/white images" CRLF);
    printf("                               0: 0 = black (default)" CRLF);
    printf("                               1: 0 = white" CRLF);
    printf(CRLF);

    printf("  -a alpha channel format      Required for any pixel format with an alpha channel" CRLF);
    printf("                               2: Planar alpha (default)" CRLF);
    printf("                               3: Interleaved alpha" CRLF);
    printf("                               Other: Reserved, do not use" CRLF);
    printf(CRLF);

    printf("  -Q quantization for alpha    [1 - 255] Default = 1, lossless" CRLF);
    printf(CRLF);

    printf("  -F trimmed flexbits          [0 - 15]  0: no trimming (default)" CRLF);    
    printf("                                        15: trim all" CRLF);    
    printf(CRLF);
    printf("  -s skip subbands             0: All subbands included (default)" CRLF);    
    printf("                               1: Skip flexbits" CRLF);    
    printf("                               2: Skip highpass" CRLF);    
    printf("                               3: Skip highpass & lowpass (DC only)" CRLF);    
    printf(CRLF);
    printf("Eg: %s -i input.bmp -o output.jxr -q 10" CRLF, szExe);
}

void WmpEncAppShowArgs(WMPENCAPPARGS* args)
{
    const char *szCF[] = {"Y_ONLY", "YUV_420", "YUV_422", "YUV_444", "CMYK"};

	GUID guidPF = args->guidPixFormat;
    
    printf("================================" CRLF);
    printf("Input file:   %s" CRLF, args->szInputFile);
    printf("Output file:  %s" CRLF, args->szOutputFile);
    printf("Color format: %08X-%04X-%04X-%02X%02X%02X%02X%02X%02X%02X%02X" CRLF, 
        guidPF.Data1, guidPF.Data2, guidPF.Data3, guidPF.Data4[0], guidPF.Data4[1], guidPF.Data4[2],
        guidPF.Data4[3], guidPF.Data4[4], guidPF.Data4[5], guidPF.Data4[6], guidPF.Data4[7]);
    printf("Internal cf:  %s" CRLF, szCF[args->wmiSCP.cfColorFormat]);
    printf("Overlap:      %s" CRLF, 0 < args->wmiSCP.olOverlap ? "yes" : "no");
    printf("DCOverlap:    %s" CRLF, 1 < args->wmiSCP.olOverlap ? "yes" : "no");
    printf("Alpha:        %s" CRLF, 1 < args->wmiSCP.uAlphaMode ? "yes" : "no");
    printf("================================" CRLF);
}

//----------------------------------------------------------------
void WmpEncAppInitDefaultArgs(WMPENCAPPARGS* args)
{
    memset(args, 0, sizeof(*args));

    args->guidPixFormat = GUID_PKPixelFormatDontCare;

    args->wmiSCP.bVerbose = FALSE;
    args->wmiSCP.cfColorFormat = YUV_444;
//    args->bFlagRGB_BGR = FALSE; //default BGR
    args->wmiSCP.bdBitDepth = BD_LONG;
    args->wmiSCP.bfBitstreamFormat = FREQUENCY;
    args->wmiSCP.bProgressiveMode = TRUE;
    args->wmiSCP.olOverlap = OL_ONE;
    args->wmiSCP.cNumOfSliceMinus1H = args->wmiSCP.cNumOfSliceMinus1V = 0;
    args->wmiSCP.sbSubband = SB_ALL;
    args->wmiSCP.uAlphaMode = 0;
    args->wmiSCP.uiDefaultQPIndex = 1;
    args->wmiSCP.uiDefaultQPIndexAlpha = 1;

    args->fltImageQuality = 1.f;
    args->bOverlapSet = 0;
    args->bColorFormatSet = 0;
}

ERR WmpEncAppValidateArgs(WMPENCAPPARGS* args)
{
    ERR err = WMP_errSuccess;

    Test(NULL != args->szInputFile, WMP_errInvalidParameter);
    Test(NULL != args->szOutputFile, WMP_errInvalidParameter);

Cleanup:
    return err;
}

ERR WmpEncAppParseArgs(int argc, char* argv[], WMPENCAPPARGS* args)
{
    ERR err = WMP_errSuccess;

    static const PKPixelFormatGUID* pixelFormat[] =
    {
        &GUID_PKPixelFormat24bppBGR,

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

        //&GUID_PKPixelFormat32bppRGBA,
        &GUID_PKPixelFormat32bppBGRA,
        &GUID_PKPixelFormat64bppRGBA,
        &GUID_PKPixelFormat64bppRGBAFixedPoint,
        &GUID_PKPixelFormat64bppRGBAHalf,
        &GUID_PKPixelFormatDontCare, // &GUID_PKPixelFormat128bppRGBA,
        &GUID_PKPixelFormat128bppRGBAFixedPoint,
        &GUID_PKPixelFormat128bppRGBAFloat,

        //&GUID_PKPixelFormat32bppPBGRA
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
    size_t AlphaPF[8] = {22, 23, 24, 25, 27, 28, 32, 33};

    int i = 1, j = 0, k;
    char c;
    int idxPF = -1;

    WmpEncAppInitDefaultArgs(args);

    while (i < argc && argv[i][0] == '-')
    {
        switch ((c = argv[i][1])) {
            /* the no-argument switches */
            case 't':
                // NOOP - now we always print timing info
                break;

            case 'v':
                args->wmiSCP.bVerbose = !FALSE;
                break;
                
            /* simple flag argument */
            case 'f':
                args->wmiSCP.bfBitstreamFormat = SPATIAL;
                break;
            
            case 'p':
                args->wmiSCP.bProgressiveMode = FALSE;
                break;
             
            case 'u':
                args->wmiSCP.bUnscaledArith = TRUE;
                break;
           
            default:
                i ++;
                if (i == argc || argv[i][0] == '-') // need more info
                    Call(WMP_errInvalidArgument);

                switch (c)
                {
                    case 'i':
                        args->szInputFile = argv[i];
                        break;

                    case 'o':
                        args->szOutputFile = argv[i];
                        break;

                    case 'q':
                        {
                            args->fltImageQuality = (float) atof(argv[i]);
                            if (args->fltImageQuality < 0.f || args->fltImageQuality > 255.f)
                                Call(WMP_errInvalidArgument);
                        }
                        break;

                    case 'Q':
                        args->wmiSCP.uiDefaultQPIndexAlpha = (U8)(atoi(argv[i]));
                        break;

                    case 's':
                        args->wmiSCP.sbSubband = (SUBBAND)(atoi(argv[i]));
                        break;

                    case 'c':
                        idxPF = (size_t)atol(argv[i]);
                        for (k = 0; k < 9; k++)
                        {
                            if (InvalidPF[k] == (size_t) idxPF)
                            {
                                printf("*** Unsupported format in JPEG XR ***\n");
                                Call(WMP_errInvalidArgument);
                            }
                        }
                        break;

                    case 'a': 
                        args->wmiSCP.uAlphaMode = (U8)atoi(argv[i]);
                        break;

/*                    case 'R':
                        args->bFlagRGB_BGR = (Bool)atoi(argv[i]);
                        break;
*/                
                    case 'l':
                        args->wmiSCP.olOverlap = (OVERLAP)atoi(argv[i]);
                        args->bOverlapSet = 1; 
                        break;

                    case 'd':
                        args->wmiSCP.cfColorFormat = (COLORFORMAT)atoi(argv[i]);
                        args->bColorFormatSet = 1;
                        break;
                    
                    case 'H': // horizontal tiling
                        for(j = 0;;i ++, j ++){
                            args->wmiSCP.uiTileY[j] = atoi(argv[i]);
                            if(i + 1 == argc || argv[i + 1][0] == '-' || j >= MAX_TILES-1)
                                break;
                        }
                        args->wmiSCP.cNumOfSliceMinus1H = (U8)j;
                        break;

                    case 'V': // vertical tiling
                        for(j = 0;;i ++, j ++){
                            args->wmiSCP.uiTileX[j] = atoi(argv[i]);
                            if(i + 1 == argc || argv[i + 1][0] == '-' || j >= MAX_TILES-1)
                                break;
                        }
                        args->wmiSCP.cNumOfSliceMinus1V = (U8)j;
                        break;

                    case 'U': // uniform tiling
                        if(i + 1 < argc && argv[i + 1][0] != '-'){
                            if(atoi(argv[i]) > 0 && atoi(argv[i + 1]) > 0){
                                args->wmiSCP.cNumOfSliceMinus1H = atoi(argv[i]) - 1;
                                args->wmiSCP.cNumOfSliceMinus1V = atoi(argv[i + 1]) - 1;
                            }
                            i ++;
                        }
                        break;

                    case 'm':
                        args->wmiSCP.nLenMantissaOrShift = (U8)atoi(argv[i]);
                        break;

                    case 'C':
                        args->wmiSCP.nExpBias = (I8) atoi(argv[i]) + 128; // rollover arithmetic
                        break;

                    case 'b':
                        args->wmiSCP.bBlackWhite = (Bool)atoi(argv[i]);
                        break;
                        
                    case 'F':
                        args->wmiSCP.uiTrimFlexBits = (U8)atoi(argv[i]);
                        if (args->wmiSCP.uiTrimFlexBits > 15)
                            args->wmiSCP.uiTrimFlexBits = 15;
                        break;

                    default:
                        Call(WMP_errInvalidArgument);
                }
        }

        i ++;
    }

    FailIf((int) sizeof2(pixelFormat) <= idxPF, WMP_errUnsupportedFormat);
    if (idxPF >= 0)
        args->guidPixFormat = *pixelFormat[idxPF];

    if ((idxPF >= 1) && (idxPF <= 8))
        args->wmiSCP.cfColorFormat = Y_ONLY;
    else if ((idxPF == 17) || (idxPF == 18) || (idxPF == 32) || (idxPF == 33))
        args->wmiSCP.cfColorFormat = CMYK;

    for (k = 0; k < 8; k++)
    {
        if (AlphaPF[k] == (size_t) idxPF) 
        {
            if(0 == args->wmiSCP.uAlphaMode)//with Alpha and no default, set default as Planar
            {
                args->wmiSCP.uAlphaMode = 2;
            }
            break;
        }
    }

    //================================
    Call(WmpEncAppValidateArgs(args));

Cleanup:
    return err;
}


// Y, U, V, YHP, UHP, VHP
int DPK_QPS_420[12][6] = {      // for 8 bit only
    { 66, 65, 70, 72, 72, 77 },
    { 59, 58, 63, 64, 63, 68 },
    { 52, 51, 57, 56, 56, 61 },
    { 48, 48, 54, 51, 50, 55 },
    { 43, 44, 48, 46, 46, 49 },
    { 37, 37, 42, 38, 38, 43 },
    { 26, 28, 31, 27, 28, 31 },
    { 16, 17, 22, 16, 17, 21 },
    { 10, 11, 13, 10, 10, 13 },
    {  5,  5,  6,  5,  5,  6 },
    {  2,  2,  3,  2,  2,  2 }
};

int DPK_QPS_8[12][6] = {
    { 67, 79, 86, 72, 90, 98 },
    { 59, 74, 80, 64, 83, 89 },
    { 53, 68, 75, 57, 76, 83 },
    { 49, 64, 71, 53, 70, 77 },
    { 45, 60, 67, 48, 67, 74 },
    { 40, 56, 62, 42, 59, 66 },
    { 33, 49, 55, 35, 51, 58 },
    { 27, 44, 49, 28, 45, 50 },
    { 20, 36, 42, 20, 38, 44 },
    { 13, 27, 34, 13, 28, 34 },
    {  7, 17, 21,  8, 17, 21 }, // Photoshop 100%
    {  2,  5,  6,  2,  5,  6 }
};

int DPK_QPS_16[11][6] = {
    { 197, 203, 210, 202, 207, 213 },
    { 174, 188, 193, 180, 189, 196 },
    { 152, 167, 173, 156, 169, 174 },
    { 135, 152, 157, 137, 153, 158 },
    { 119, 137, 141, 119, 138, 142 },
    { 102, 120, 125, 100, 120, 124 },
    {  82,  98, 104,  79,  98, 103 },
    {  60,  76,  81,  58,  76,  81 },
    {  39,  52,  58,  36,  52,  58 },
    {  16,  27,  33,  14,  27,  33 },
    {   5,   8,   9,   4,   7,   8 }
};

int DPK_QPS_16f[11][6] = {
    { 148, 177, 171, 165, 187, 191 },
    { 133, 155, 153, 147, 172, 181 },
    { 114, 133, 138, 130, 157, 167 },
    {  97, 118, 120, 109, 137, 144 },
    {  76,  98, 103,  85, 115, 121 },
    {  63,  86,  91,  62,  96,  99 },
    {  46,  68,  71,  43,  73,  75 },
    {  29,  48,  52,  27,  48,  51 },
    {  16,  30,  35,  14,  29,  34 },
    {   8,  14,  17,   7,  13,  17 },
    {   3,   5,   7,   3,   5,   6 }
};

int DPK_QPS_32f[11][6] = {
    { 194, 206, 209, 204, 211, 217 },
    { 175, 187, 196, 186, 193, 205 },
    { 157, 170, 177, 167, 180, 190 },
    { 133, 152, 156, 144, 163, 168 },
    { 116, 138, 142, 117, 143, 148 },
    {  98, 120, 123,  96, 123, 126 },
    {  80,  99, 102,  78,  99, 102 },
    {  65,  79,  84,  63,  79,  84 },
    {  48,  61,  67,  45,  60,  66 },
    {  27,  41,  46,  24,  40,  45 },
    {   3,  22,  24,   2,  21,  22 }
};

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
    struct WMPStream* pEncodeStream = NULL;
    PKCodecFactory* pCodecFactory = NULL;
    PKCodecFactory* pTestFactory = NULL;
    PKImageEncode* pEncoder = NULL;

    // clock_t start = 0, finish = 0;
    WMPENCAPPARGS args;
    char* pExt = NULL;

    //================================
    // parse command line parameters
    if (1 == argc)
    {
        WmpEncAppUsage(argv[0]);
        return 0;
    }

    Call(WmpEncAppParseArgs(argc, argv, &args));
    if (args.wmiSCP.bVerbose)
    {
        WmpEncAppShowArgs(&args);
    }

    //================================
    pExt = strrchr(args.szInputFile, '.');
    FailIf(NULL == pExt, WMP_errUnsupportedFormat);

    //================================
    Call(PKCreateFactory(&pFactory, PK_SDK_VERSION));
    Call(pFactory->CreateStreamFromFilename(&pEncodeStream, args.szOutputFile, "wb"));

    //================================
    Call(PKCreateCodecFactory(&pCodecFactory, WMP_SDK_VERSION));
    Call(pCodecFactory->CreateCodec(&IID_PKImageWmpEncode, (void**)&pEncoder));

    //----------------------------------------------------------------
    Call(PKCreateTestFactory(&pTestFactory, WMP_SDK_VERSION));

    //
    // go through each image
    //
    //for (i = 0; ; ++i)
    {
        PKImageDecode* pDecoder = NULL;
        PKFormatConverter* pConverter = NULL;
        PKPixelInfo PI;

        Float rX = 0.0, rY = 0.0;
        PKRect rect = {0, 0, 0, 0};

        //================================
        Call(pTestFactory->CreateDecoderFromFile(args.szInputFile, &pDecoder));
        if (IsEqualGUID(&args.guidPixFormat, &GUID_PKPixelFormatDontCare))
            Call(pDecoder->GetPixelFormat(pDecoder, &args.guidPixFormat));

        PI.pGUIDPixFmt = &args.guidPixFormat;
        Call(PixelFormatLookup(&PI, LOOKUP_FORWARD));
        if ((PI.grBit & PK_pixfmtHasAlpha) && args.wmiSCP.uAlphaMode == 0)
            args.wmiSCP.uAlphaMode = 2; // with Alpha and no default, set default as Planar

        FailIf(PI.uSamplePerPixel > 1 && PI.uBitsPerSample > 8 && args.wmiSCP.cfColorFormat != YUV_444,
            WMP_errInvalidArgument);

        //================================
        Call(pCodecFactory->CreateFormatConverter(&pConverter));
        Call(pConverter->Initialize(pConverter, pDecoder, pExt, args.guidPixFormat));

        //================================
        Call(pDecoder->GetSize(pDecoder, &rect.Width, &rect.Height));

        if (args.wmiSCP.cNumOfSliceMinus1H == 0 && args.wmiSCP.uiTileY[0] > 0)
        {
            // # of horizontal slices, rounded down by half tile size.
            U32 uTileY = args.wmiSCP.uiTileY[0] * MB_HEIGHT_PIXEL;
            args.wmiSCP.cNumOfSliceMinus1H = (U32) rect.Height < (uTileY >> 1) ? 0 :
                (rect.Height + (uTileY >> 1)) / uTileY - 1;
        }
        if (args.wmiSCP.cNumOfSliceMinus1V == 0 && args.wmiSCP.uiTileX[0] > 0)
        {
            // # of vertical slices, rounded down by half tile size.
            U32 uTileX = args.wmiSCP.uiTileX[0] * MB_HEIGHT_PIXEL;
            args.wmiSCP.cNumOfSliceMinus1V = (U32) rect.Width < (uTileX >> 1) ? 0 :
                (rect.Width + (uTileX >> 1)) / uTileX - 1;
        }

        Call(pEncoder->Initialize(pEncoder, pEncodeStream, &args.wmiSCP, sizeof(args.wmiSCP)));

	    //ImageQuality  Q (BD==1)  Q (BD==8)   Q (BD==16)  Q (BD==32F) Subsample   Overlap
	    //[0.0, 0.4]    8-IQ*5     (see table) (see table) (see table) 4:4:4       2
	    //(0.4, 0.8)    8-IQ*5     (see table) (see table) (see table) 4:4:4       1
	    //[0.8, 1.0)    8-IQ*5     (see table) (see table) (see table) 4:4:4       1
	    //[1.0, 1.0]    1          1           1           1           4:4:4       0
	
        if (args.fltImageQuality < 1.0F)
	    {
            if (!args.bOverlapSet)
            {
		        if (args.fltImageQuality > 0.4F)
			        pEncoder->WMP.wmiSCP.olOverlap = OL_ONE;
		        else
			        pEncoder->WMP.wmiSCP.olOverlap = OL_TWO;
            }

            if (!args.bColorFormatSet)
            {
		        if (args.fltImageQuality >= 0.5F || PI.uBitsPerSample > 8)
			        pEncoder->WMP.wmiSCP.cfColorFormat = YUV_444;
		        else
			        pEncoder->WMP.wmiSCP.cfColorFormat = YUV_420;
            }

		    if (PI.bdBitDepth == BD_1)
		    {
			    pEncoder->WMP.wmiSCP.uiDefaultQPIndex = (U8)(8 - 5.0F *
				    args.fltImageQuality + 0.5F);
		    }
		    else
		    {
                // remap [0.8, 0.866, 0.933, 1.0] to [0.8, 0.9, 1.0, 1.1]
                // to use 8-bit DPK QP table (0.933 == Photoshop JPEG 100)
                int qi;
                float qf;
                int* pQPs;
                if (args.fltImageQuality > 0.8f && PI.bdBitDepth == BD_8 &&
                    pEncoder->WMP.wmiSCP.cfColorFormat != YUV_420 &&
                    pEncoder->WMP.wmiSCP.cfColorFormat != YUV_422)
                    args.fltImageQuality = 0.8f + (args.fltImageQuality - 0.8f) * 1.5f;

                qi = (int) (10.f * args.fltImageQuality);
                qf = 10.f * args.fltImageQuality - (float) qi;

                pQPs =
                    (pEncoder->WMP.wmiSCP.cfColorFormat == YUV_420 ||
                     pEncoder->WMP.wmiSCP.cfColorFormat == YUV_422) ?
                        DPK_QPS_420[qi] :
                    (PI.bdBitDepth == BD_8 ? DPK_QPS_8[qi] :
                    (PI.bdBitDepth == BD_16 ? DPK_QPS_16[qi] :
                    (PI.bdBitDepth == BD_16F ? DPK_QPS_16f[qi] :
                    DPK_QPS_32f[qi])));

                pEncoder->WMP.wmiSCP.uiDefaultQPIndex = (U8) (0.5f +
                        (float) pQPs[0] * (1.f - qf) + (float) (pQPs + 6)[0] * qf);
                pEncoder->WMP.wmiSCP.uiDefaultQPIndexU = (U8) (0.5f +
                        (float) pQPs[1] * (1.f - qf) + (float) (pQPs + 6)[1] * qf);
                pEncoder->WMP.wmiSCP.uiDefaultQPIndexV = (U8) (0.5f +
                        (float) pQPs[2] * (1.f - qf) + (float) (pQPs + 6)[2] * qf);
                pEncoder->WMP.wmiSCP.uiDefaultQPIndexYHP = (U8) (0.5f +
                        (float) pQPs[3] * (1.f - qf) + (float) (pQPs + 6)[3] * qf);
                pEncoder->WMP.wmiSCP.uiDefaultQPIndexUHP = (U8) (0.5f +
                        (float) pQPs[4] * (1.f - qf) + (float) (pQPs + 6)[4] * qf);
                pEncoder->WMP.wmiSCP.uiDefaultQPIndexVHP = (U8) (0.5f +
                        (float) pQPs[5] * (1.f - qf) + (float) (pQPs + 6)[5] * qf);
		    }
        }
        else
        {
            pEncoder->WMP.wmiSCP.uiDefaultQPIndex = (U8) args.fltImageQuality;
        }

        if(pEncoder->WMP.wmiSCP.uAlphaMode == 2)
            pEncoder->WMP.wmiSCP_Alpha.uiDefaultQPIndex = args.wmiSCP.uiDefaultQPIndexAlpha;

        Call(pEncoder->SetPixelFormat(pEncoder, args.guidPixFormat));

        Call(pEncoder->SetSize(pEncoder, rect.Width, rect.Height));

        Call(pDecoder->GetResolution(pDecoder, &rX, &rY));
        Call(pEncoder->SetResolution(pEncoder, rX, rY));

        //================================
        // re-encode the input source to the output
        //
		pEncoder->WriteSource = PKImageEncode_WriteSource;
        Call(pEncoder->WriteSource(pEncoder, pConverter, &rect));

        pConverter->Release(&pConverter);
        pDecoder->Release(&pDecoder);

        //if (i + 1 == 5)
        //{
        //    break;
        //}

        // multi-frame support NYI
        //Call(pEncoder->CreateNewFrame(pEncoder, &wmiSCP, sizeof(wmiSCP)));
    }

//    Call(pEncoder->Terminate(pEncoder));
    pEncoder->Release(&pEncoder);

Cleanup:
    if (WMP_errSuccess != err)
    {
        WmpEncAppUsage(argv[0]);
    }
    
    return (int)err;
}
