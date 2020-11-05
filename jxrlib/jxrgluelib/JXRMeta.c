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
#include "JXRMeta.h"
#include "JXRGlue.h"



// read and write big and little endian words/dwords from a buffer on both big and little endian cpu's
// with full buffer overflow checking



ERR getbfcpy(U8* pbdest, const U8* pb, size_t cb, size_t ofs, U32 n)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + n > cb, WMP_errBufferOverflow);
    memcpy(pbdest, &pb[ofs], n);
Cleanup:
    return err;
}



ERR getbfw(const U8* pb, size_t cb, size_t ofs, U16* pw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U16) > cb, WMP_errBufferOverflow);
    *pw = (U16)( pb[ofs] + ( pb[ofs + 1] << 8 ) );
Cleanup:
    return err;
}



ERR getbfdw(const U8* pb, size_t cb, size_t ofs, U32* pdw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U32) > cb, WMP_errBufferOverflow);
    *pdw = pb[ofs] + ( pb[ofs + 1] << 8 ) + ( pb[ofs + 2] << 16UL ) + ( pb[ofs + 3] << 24UL );
Cleanup:
    return err;
}



ERR getbfwbig(const U8* pb, size_t cb, size_t ofs, U16* pw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U16) > cb, WMP_errBufferOverflow);
    *pw = (U16)( pb[ofs + 1] + ( pb[ofs] << 8 ) );
Cleanup:
    return err;
}



ERR getbfdwbig(const U8* pb, size_t cb, size_t ofs, U32* pdw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U32) > cb, WMP_errBufferOverflow);
    *pdw = pb[ofs + 3] + ( pb[ofs + 2] << 8 ) + ( pb[ofs + 1] << 16UL ) + ( pb[ofs] << 24UL );
Cleanup:
    return err;
}



ERR getbfwe(const U8* pb, size_t cb, size_t ofs, U16* pw, U8 endian)
{
    if ( endian == WMP_INTEL_ENDIAN )
        return ( getbfw(pb, cb, ofs, pw) );
    else
        return ( getbfwbig(pb, cb, ofs, pw) );
}



ERR getbfdwe(const U8* pb, size_t cb, size_t ofs, U32* pdw, U8 endian)
{
    if ( endian == WMP_INTEL_ENDIAN )
        return ( getbfdw(pb, cb, ofs, pdw) );
    else
        return ( getbfdwbig(pb, cb, ofs, pdw) );
}



ERR setbfcpy(U8* pb, size_t cb, size_t ofs, const U8* pbset, size_t cbset)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + cbset > cb, WMP_errBufferOverflow);
    memcpy(&pb[ofs], pbset, cbset);
Cleanup:
    return err;
}



ERR setbfw(U8* pb, size_t cb, size_t ofs, U16 dw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U16) > cb, WMP_errBufferOverflow);
    pb[ofs] = (U8)dw;
    pb[ofs + 1] = (U8)( dw >> 8 );
Cleanup:
    return err;
}



ERR setbfdw(U8* pb, size_t cb, size_t ofs, U32 dw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U32) > cb, WMP_errBufferOverflow);
    pb[ofs] = (U8)dw;
    pb[ofs + 1] = (U8)( dw >> 8 );
    pb[ofs + 2] = (U8)( dw >> 16 );
    pb[ofs + 3] = (U8)( dw >> 24 );
Cleanup:
    return err;
}



ERR setbfwbig(U8* pb, size_t cb, size_t ofs, U16 dw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U16) > cb, WMP_errBufferOverflow);
    pb[ofs + 1] = (U8)dw;
    pb[ofs] = (U8)( dw >> 8 );
Cleanup:
    return err;
}



ERR setbfdwbig(U8* pb, size_t cb, size_t ofs, U32 dw)
{
    ERR err = WMP_errSuccess;
    FailIf(ofs + sizeof(U32) > cb, WMP_errBufferOverflow);
    pb[ofs + 3] = (U8)dw;
    pb[ofs + 2] = (U8)( dw >> 8 );
    pb[ofs + 1] = (U8)( dw >> 16 );
    pb[ofs] = (U8)( dw >> 24 );
Cleanup:
    return err;
}



//================================================================
// BufferCalcIFDSize (arbitrary endian)
// StreamCalcIFDSize (little endian)
//
// count up the number of bytes needed to store the IFD and all
// associated data including a subordinate interoperability IFD if any
//================================================================



ERR BufferCalcIFDSize(const U8* pbdata, size_t cbdata, U32 ofsifd, U8 endian, U32* pcbifd)
{
    ERR err = WMP_errSuccess;
    U16 cDir;
    U16 i;
    U32 ofsdir;
    U32 cbifd = 0;
    U32 cbEXIFIFD = 0;
    U32 cbGPSInfoIFD = 0;
    U32 cbInteroperabilityIFD = 0;

    *pcbifd = 0;
    Call(getbfwe(pbdata, cbdata, ofsifd, &cDir, endian));

    cbifd = sizeof(U16) + cDir * SizeofIFDEntry + sizeof(U32);
    ofsdir = ofsifd + sizeof(U16);
    for ( i = 0; i < cDir; i++ )
    {
        U16 tag;
        U16 type;
        U32 count;
        U32 value;
        U32 datasize;

        Call(getbfwe(pbdata, cbdata, ofsdir, &tag, endian));
        Call(getbfwe(pbdata, cbdata, ofsdir + sizeof(U16), &type, endian));
        Call(getbfdwe(pbdata, cbdata, ofsdir + 2 * sizeof(U16), &count, endian));
        Call(getbfdwe(pbdata, cbdata, ofsdir + 2 * sizeof(U16) + sizeof(U32), &value, endian));
        FailIf(type == 0 || type >= sizeof(IFDEntryTypeSizes) / sizeof(IFDEntryTypeSizes[0]), WMP_errFail);
        if ( tag == WMP_tagEXIFMetadata )
        {
            Call(BufferCalcIFDSize(pbdata, cbdata, value, endian, &cbEXIFIFD));
        }
        else if ( tag == WMP_tagGPSInfoMetadata )
        {
            Call(BufferCalcIFDSize(pbdata, cbdata, value, endian, &cbGPSInfoIFD));
        }
        else if ( tag == WMP_tagInteroperabilityIFD )
        {
            Call(BufferCalcIFDSize(pbdata, cbdata, value, endian, &cbInteroperabilityIFD));
        }
        else
        {
            datasize = IFDEntryTypeSizes[type] * count;
            if ( datasize > 4 )
                cbifd += datasize;
        }
        ofsdir += SizeofIFDEntry;
    }
    if ( cbEXIFIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbEXIFIFD;
    if ( cbGPSInfoIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbGPSInfoIFD;
    if ( cbInteroperabilityIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbInteroperabilityIFD;

    *pcbifd = cbifd;

Cleanup:
    return err;
}


ERR StreamCalcIFDSize(struct WMPStream* pWS, U32 uIFDOfs, U32 *pcbifd)
{
    ERR err = WMP_errSuccess;
    size_t offCurPos = 0;
    Bool GetPosOK = FALSE;
    U16 cDir;
    U32 i;
    U32 ofsdir;
    U32 cbifd = 0;
    U32 cbEXIFIFD = 0;
    U32 cbGPSInfoIFD = 0;
    U32 cbInteroperabilityIFD = 0;

    *pcbifd = 0;
    Call(pWS->GetPos(pWS, &offCurPos));
    GetPosOK = TRUE;

    Call(GetUShort(pWS, uIFDOfs, &cDir));
    cbifd = sizeof(U16) + cDir * SizeofIFDEntry + sizeof(U32);
    ofsdir = uIFDOfs + sizeof(U16);
    for ( i = 0; i < cDir; i++ )
    {
        U16 tag;
        U16 type;
        U32 count;
        U32 value;
        U32 datasize;

        Call(GetUShort(pWS, ofsdir, &tag));
        Call(GetUShort(pWS, ofsdir + sizeof(U16), &type));
        Call(GetULong(pWS, ofsdir + 2 * sizeof(U16), &count));
        Call(GetULong(pWS, ofsdir + 2 * sizeof(U16) + sizeof(U32), &value));
        FailIf(type == 0 || type >= sizeof(IFDEntryTypeSizes) / sizeof(IFDEntryTypeSizes[0]), WMP_errUnsupportedFormat);
        if ( tag == WMP_tagEXIFMetadata )
        {
            Call(StreamCalcIFDSize(pWS, value, &cbEXIFIFD));
        }
        else if ( tag == WMP_tagGPSInfoMetadata )
        {
            Call(StreamCalcIFDSize(pWS, value, &cbGPSInfoIFD));
        }
        else if ( tag == WMP_tagInteroperabilityIFD )
        {
            Call(StreamCalcIFDSize(pWS, value, &cbInteroperabilityIFD));
        }
        else
        {
            datasize = IFDEntryTypeSizes[type] * count;
            if ( datasize > 4 )
                cbifd += datasize;
        }
        ofsdir += SizeofIFDEntry;
    }
    if ( cbEXIFIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbEXIFIFD;
    if ( cbGPSInfoIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbGPSInfoIFD;
    if ( cbInteroperabilityIFD != 0 )
        cbifd += ( cbifd & 1 ) + cbInteroperabilityIFD;
    *pcbifd = cbifd;

Cleanup:
    if ( GetPosOK )
        Call(pWS->SetPos(pWS, offCurPos));
    return ( err );
}



// src IFD copied to dst IFD with any nested IFD's
// src IFD is arbitrary endian, arbitrary data arrangement
// dst IFD is little endian, data arranged in tag order
// dst IFD tags are ordered the same as src IFD so src IFD tags must be in order
ERR BufferCopyIFD(const U8* pbsrc, U32 cbsrc, U32 ofssrc, U8 endian, U8* pbdst, U32 cbdst, U32* pofsdst)
{
    ERR err = WMP_errSuccess;
    U16 cDir;
    U16 i;
    U16 ofsEXIFIFDEntry = 0;
    U16 ofsGPSInfoIFDEntry = 0;
    U16 ofsInteroperabilityIFDEntry = 0;
    U32 ofsEXIFIFD = 0;
    U32 ofsGPSInfoIFD = 0;
    U32 ofsInteroperabilityIFD = 0;
    U32 ofsdstnextdata;
    U32 ofsdst = *pofsdst;
    U32 ofssrcdir;
    U32 ofsdstdir;
    U32 ofsnextifd;

    Call(getbfwe(pbsrc, cbsrc, ofssrc, &cDir, endian));
    Call(setbfw(pbdst, cbdst, ofsdst, cDir));
    ofsnextifd = ofsdst + sizeof(U16) + SizeofIFDEntry * cDir;
    ofsdstnextdata = ofsnextifd + sizeof(U32);

    ofssrcdir = ofssrc + sizeof(U16);
    ofsdstdir = ofsdst + sizeof(U16);
    for ( i = 0; i < cDir; i++ )
    {
        U16 tag;
        U16 type;
        U32 count;
        U32 value;
        U32 size;

        Call(getbfwe(pbsrc, cbsrc, ofssrcdir, &tag, endian));
        Call(setbfw(pbdst, cbdst, ofsdstdir, tag));

        Call(getbfwe(pbsrc, cbsrc, ofssrcdir + sizeof(U16), &type, endian));
        Call(setbfw(pbdst, cbdst, ofsdstdir + sizeof(U16), type));

        Call(getbfdwe(pbsrc, cbsrc, ofssrcdir + 2 * sizeof(U16), &count, endian));
        Call(setbfdw(pbdst, cbdst, ofsdstdir + 2 * sizeof(U16), count));

        Call(getbfdwe(pbsrc, cbsrc, ofssrcdir + 2 * sizeof(U16) + sizeof(U32), &value, endian));
        Call(setbfdw(pbdst, cbdst, ofsdstdir + 2 * sizeof(U16) + sizeof(U32), 0));

        FailIf(type == 0 || type >= sizeof(IFDEntryTypeSizes) / sizeof(IFDEntryTypeSizes[0]), WMP_errFail);
        if ( tag == WMP_tagEXIFMetadata )
        {
            ofsEXIFIFDEntry = (U16) ofsdstdir;
            ofsEXIFIFD = value;
        }
        else if ( tag == WMP_tagGPSInfoMetadata )
        {
            ofsGPSInfoIFDEntry = (U16) ofsdstdir;
            ofsGPSInfoIFD = value;
        }
        else if ( tag == WMP_tagInteroperabilityIFD )
        {
            ofsInteroperabilityIFDEntry = (U16) ofsdstdir;
            ofsInteroperabilityIFD = value;
        }
        else
        {
            U32 ofsdstdata = ofsdstdir + 2 * sizeof(U16) + sizeof(U32);
            U32 ofssrcdata = ofssrcdir + 2 * sizeof(U16) + sizeof(U32);
            size = count * IFDEntryTypeSizes[type];
            if ( size > 4 )
            {
                ofssrcdata = value;
                Call(setbfdw(pbdst, cbdst, ofsdstdata, ofsdstnextdata));
                ofsdstdata = ofsdstnextdata;
                ofsdstnextdata += size;
            }
            FailIf(ofssrcdata + size > cbsrc || ofsdstdata + size > cbdst, WMP_errBufferOverflow);
            if ( size == count || endian == WMP_INTEL_ENDIAN )
                // size == count means 8-bit data means endian doesn't matter
                memcpy(&pbdst[ofsdstdata], &pbsrc[ofssrcdata], size);
            else
            {   // big endian source and endian matters
                U32 j;

                switch ( IFDEntryTypeSizes[type] )
                {
                case 2:
                    for ( j = 0; j < count; j++ )
                    {
                        U16 w;
                        getbfwbig(pbsrc, cbsrc, ofssrcdata + j * sizeof(U16), &w);
                        setbfw(pbdst, cbdst, ofsdstdata + j * sizeof(U16), w);
                    }
                    break;
                case 8:
                    if ( type == WMP_typDOUBLE )
                    {
                        for ( j = 0; j < count; j++ )
                        {
                            U32 dwlo;
                            U32 dwhi;
                            getbfdwbig(pbsrc, cbsrc, ofssrcdata + j * 8, &dwhi);
                            getbfdwbig(pbsrc, cbsrc, ofssrcdata + j * 8 + sizeof(U32), &dwlo);
                            setbfdw(pbdst, cbdst, ofsdstdata + j * 8, dwlo);
                            setbfdw(pbdst, cbdst, ofsdstdata + j * 8 + sizeof(U32), dwhi);
                        }
                        break;
                    }
                    count *= 2;
                    // RATIONAL's fall through to be handled as LONG's
                case 4:
                    for ( j = 0; j < count; j++ )
                    {
                        U32 dw;
                        getbfdwbig(pbsrc, cbsrc, ofssrcdata + j * sizeof(U32), &dw);
                        setbfdw(pbdst, cbdst, ofsdstdata + j * sizeof(U32), dw);
                    }
                    break;
                }
            }
        }
        ofssrcdir += SizeofIFDEntry;
        ofsdstdir += SizeofIFDEntry;
    }
    Call(setbfdw(pbdst, cbdst, ofsnextifd, 0));    // no nextIFD

    if ( ofsEXIFIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsEXIFIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(BufferCopyIFD(pbsrc, cbsrc, ofsEXIFIFD, endian, pbdst, cbdst, &ofsdstnextdata));
    }
    if ( ofsGPSInfoIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsGPSInfoIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(BufferCopyIFD(pbsrc, cbsrc, ofsGPSInfoIFD, endian, pbdst, cbdst, &ofsdstnextdata));
    }
    if ( ofsInteroperabilityIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsInteroperabilityIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(BufferCopyIFD(pbsrc, cbsrc, ofsInteroperabilityIFD, endian, pbdst, cbdst, &ofsdstnextdata));
    }
    *pofsdst = ofsdstnextdata;

Cleanup:
    return err;
}



// src IFD copied to dst IFD with any nested IFD's
// src IFD is little endian, arbitrary data arrangement
// dst IFD is little endian, data arranged in tag order
// dst IFD tags are ordered the same as src IFD so src IFD tags must be in order
ERR StreamCopyIFD(struct WMPStream* pWS, U32 ofssrc, U8* pbdst, U32 cbdst, U32* pofsdst)
{
    ERR err = WMP_errSuccess;
    size_t offCurPos = 0;
    Bool GetPosOK = FALSE;
    U16 cDir;
    U16 i;
    U16 ofsEXIFIFDEntry = 0;
    U16 ofsGPSInfoIFDEntry = 0;
    U16 ofsInteroperabilityIFDEntry = 0;
    U32 ofsEXIFIFD = 0;
    U32 ofsGPSInfoIFD = 0;
    U32 ofsInteroperabilityIFD = 0;
    U32 ofsdstnextdata;
    U32 ofsdst = *pofsdst;
    U32 ofssrcdir;
    U32 ofsdstdir;
    U32 ofsnextifd;

    Call(pWS->GetPos(pWS, &offCurPos));
    GetPosOK = TRUE;

    Call(GetUShort(pWS, ofssrc, &cDir));
    Call(setbfw(pbdst, cbdst, ofsdst, cDir));

    ofsnextifd = ofsdst + sizeof(U16) + SizeofIFDEntry * cDir;
    ofsdstnextdata = ofsnextifd + sizeof(U32);

    ofssrcdir = ofssrc + sizeof(U16);
    ofsdstdir = ofsdst + sizeof(U16);
    for ( i = 0; i < cDir; i++ )
    {
        U16 tag;
        U16 type;
        U32 count;
        U32 value;
        U32 size;

        Call(GetUShort(pWS, ofssrcdir, &tag));
        Call(setbfw(pbdst, cbdst, ofsdstdir, tag));

        Call(GetUShort(pWS, ofssrcdir + sizeof(U16), &type));
        Call(setbfw(pbdst, cbdst, ofsdstdir + sizeof(U16), type));

        Call(GetULong(pWS, ofssrcdir + 2 * sizeof(U16), &count));
        Call(setbfdw(pbdst, cbdst, ofsdstdir + 2 * sizeof(U16), count));

        Call(GetULong(pWS, ofssrcdir + 2 * sizeof(U16) + sizeof(U32), &value));
        Call(setbfdw(pbdst, cbdst, ofsdstdir + 2 * sizeof(U16) + sizeof(U32), 0));

        FailIf(type == 0 || type >= sizeof(IFDEntryTypeSizes) / sizeof(IFDEntryTypeSizes[0]), WMP_errFail);
        if ( tag == WMP_tagEXIFMetadata )
        {
            ofsEXIFIFDEntry = (U16) ofsdstdir;
            ofsEXIFIFD = value;
        }
        else if ( tag == WMP_tagGPSInfoMetadata )
        {
            ofsGPSInfoIFDEntry = (U16) ofsdstdir;
            ofsGPSInfoIFD = value;
        }
        else if ( tag == WMP_tagInteroperabilityIFD )
        {
            ofsInteroperabilityIFDEntry = (U16) ofsdstdir;
            ofsInteroperabilityIFD = value;
        }
        else
        {
            U32 ofsdstdata = ofsdstdir + 2 * sizeof(U16) + sizeof(U32);
            U32 ofssrcdata = ofssrcdir + 2 * sizeof(U16) + sizeof(U32);
            size = count * IFDEntryTypeSizes[type];
            if ( size > 4 )
            {
                ofssrcdata = value;
                Call(setbfdw(pbdst, cbdst, ofsdstdata, ofsdstnextdata));
                ofsdstdata = ofsdstnextdata;
                ofsdstnextdata += size;
            }
            FailIf(ofsdstdata + size > cbdst, WMP_errBufferOverflow);
            Call(pWS->SetPos(pWS, ofssrcdata));
            Call(pWS->Read(pWS, &pbdst[ofsdstdata], size));
        }
        ofssrcdir += SizeofIFDEntry;
        ofsdstdir += SizeofIFDEntry;
    }
    Call(setbfdw(pbdst, cbdst, ofsnextifd, 0));    // no nextIFD

    if ( ofsEXIFIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsEXIFIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(StreamCopyIFD(pWS, ofsEXIFIFD, pbdst, cbdst, &ofsdstnextdata));
    }
    if ( ofsGPSInfoIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsGPSInfoIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(StreamCopyIFD(pWS, ofsGPSInfoIFD, pbdst, cbdst, &ofsdstnextdata));
    }
    if ( ofsInteroperabilityIFDEntry != 0 )
    {
        ofsdstnextdata += ( ofsdstnextdata & 1 );
        Call(setbfdw(pbdst, cbdst, ofsInteroperabilityIFDEntry + 2 * sizeof(U16) + sizeof(U32), ofsdstnextdata));
        Call(StreamCopyIFD(pWS, ofsInteroperabilityIFD, pbdst, cbdst, &ofsdstnextdata));
    }
    *pofsdst = ofsdstnextdata;

Cleanup:
    if ( GetPosOK )
        Call(pWS->SetPos(pWS, offCurPos));
    return err;
}



//================================================================
ERR GetUShort(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    __out_ecount(1) U16* puValue)
{
    ERR err = WMP_errSuccess;
    U8  cVal;

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] = (U16) cVal;
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] += ((U16) cVal) << 8;

Cleanup:
    return err;
}

ERR PutUShort(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    U16 uValue)
{
    ERR err = WMP_errSuccess;
    U8  cVal = (U8) uValue;

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));
    cVal = (U8) (uValue >> 8);
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));

Cleanup:
    return err;
}

ERR GetULong(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    __out_ecount(1) U32* puValue)
{
    ERR err = WMP_errSuccess;
    U8  cVal;

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] = (U32) cVal;
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] += ((U32) cVal) << 8;
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] += ((U32) cVal) << 16;
    Call(pWS->Read(pWS, &cVal, sizeof(cVal)));
    puValue[0] += ((U32) cVal) << 24;
 
Cleanup:
    return err;
}

ERR PutULong(
    __in_ecount(1) struct WMPStream* pWS,
    size_t offPos,
    U32 uValue)
{
    ERR err = WMP_errSuccess;
    U8  cVal = (U8) uValue;

    Call(pWS->SetPos(pWS, offPos));
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));
    cVal = (U8) (uValue >> 8);
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));
    cVal = (U8) (uValue >> 16);
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));
    cVal = (U8) (uValue >> 24);
    Call(pWS->Write(pWS, &cVal, sizeof(cVal)));

Cleanup:
    return err;
}


ERR ReadBinaryData(__in_ecount(1) struct WMPStream* pWS,
                   const __in_win U32 uCount,
                   const __in_win U32 uValue,
                   U8 **ppbData)
{
    ERR err = WMP_errSuccess;
    U8 *pbData = NULL;

    Call(PKAlloc((void **) &pbData, uCount + 2)); // Allocate buffer to store data with space for an added ascii or unicode null
    if (uCount <= 4)
    {
        unsigned int i;
        for (i = 0; i < uCount; i++)
            pbData[i] = ((U8*)&uValue)[i]; // Copy least sig bytes - we assume 'II' type TIFF files
    }
    else
    {
        size_t offPosPrev;

        Call(pWS->GetPos(pWS, &offPosPrev));
        Call(pWS->SetPos(pWS, uValue));
        Call(pWS->Read(pWS, pbData, uCount));
        Call(pWS->SetPos(pWS, offPosPrev));
    }

    *ppbData = pbData;

Cleanup:
    if (Failed(err))
    {
        if (pbData)
            PKFree((void **) &pbData);
    }
    return err;
}


ERR ReadPropvar(__in_ecount(1) struct WMPStream* pWS,
                const __in_win U16 uType,
                const __in_win U32 uCount,
                const __in_win U32 uValue,
                __out_win DPKPROPVARIANT *pvar)
{
    ERR err = WMP_errSuccess;
    // U8 *pbData = NULL;

    memset(pvar, 0, sizeof(*pvar));
    if (uCount == 0)
        goto Cleanup; // Nothing to read in here

    switch (uType)
    {
        case WMP_typASCII:
            pvar->vt = DPKVT_LPSTR;
            Call(ReadBinaryData(pWS, uCount, uValue, (U8 **) &pvar->VT.pszVal));
            assert(0 == pvar->VT.pszVal[uCount - 1]); // Check that it's null-terminated
            // make sure (ReadBinaryData allocated uCount + 2 so this and unicode can have forced nulls)
            pvar->VT.pszVal[uCount] = 0;
            break;

        case WMP_typBYTE:
        case WMP_typUNDEFINED:
            // Return as regular C array rather than safearray, as this type is sometimes
            // used to convey unicode (which does not require a count field). Caller knows
            // uCount and can convert to safearray if necessary.
            pvar->vt = (DPKVT_BYREF | DPKVT_UI1);
            Call(ReadBinaryData(pWS, uCount, uValue, &pvar->VT.pbVal));
            break;

        case WMP_typSHORT:
            if (1 == uCount)
            {
                pvar->vt = DPKVT_UI2;
                pvar->VT.uiVal = (U16)(uValue & 0x0000FFFF);
            }
            else if (2 == uCount)
            {
                pvar->vt = DPKVT_UI4;
                pvar->VT.ulVal = uValue;
            }
            else
            {
                assert(FALSE); // NYI
                FailIf(TRUE, WMP_errNotYetImplemented);
            }
            break;

        default:
            assert(FALSE); // Unhandled type
            FailIf(TRUE, WMP_errNotYetImplemented);
            break;
    }

Cleanup:
    return err;
}


ERR WriteWmpDE(
    __in_ecount(1) struct WMPStream* pWS,
    size_t *pOffPos,
    const __in_ecount(1) WmpDE* pDE,
    const U8 *pbData,
    U32 *pcbDataWrittenToOffset)
{
    ERR err = WMP_errSuccess;
    size_t offPos = *pOffPos;

    assert(-1 != pDE->uCount);
    assert(-1 != pDE->uValueOrOffset);

    if (pcbDataWrittenToOffset)
    {
        assert(pbData); // Makes no sense to provide this arg without pbData
        *pcbDataWrittenToOffset = 0;
    }

    Call(PutUShort(pWS, offPos, pDE->uTag)); offPos += 2;
    Call(PutUShort(pWS, offPos, pDE->uType)); offPos += 2;
    Call(PutULong(pWS, offPos, pDE->uCount)); offPos += 4;

    switch (pDE->uType)
    {

        case WMP_typASCII:
        case WMP_typUNDEFINED:
        case WMP_typBYTE:
            if (pDE->uCount <= 4)
            {
                U8 pad[4] = {0};
                Call(pWS->SetPos(pWS, offPos));

                if (NULL == pbData)
                    pbData = (U8*)&pDE->uValueOrOffset;

                Call(pWS->Write(pWS, pbData, pDE->uCount));
                Call(pWS->Write(pWS, pad, 4 - pDE->uCount)); offPos += 4;
            }
            else
            {
                Call(PutULong(pWS, offPos, pDE->uValueOrOffset)); offPos += 4;

                // Write the data if requested to do so
                if (pbData)
                {
                    Call(pWS->SetPos(pWS, pDE->uValueOrOffset));
                    Call(pWS->Write(pWS, pbData, pDE->uCount));
                    Call(pWS->SetPos(pWS, offPos));
                    *pcbDataWrittenToOffset = pDE->uCount;
                }
            }
            break;

        case WMP_typSHORT:
            if (pDE->uCount <= 2)
            {
                U16 uiShrt1 = 0;
                U16 uiShrt2 = 0;

                if (NULL == pbData)
                    pbData = (U8*)&pDE->uValueOrOffset;

                if (pDE->uCount > 0)
                    uiShrt1 = *((U16*)pbData);

                if (pDE->uCount > 1)
                {
                    assert(FALSE); // Untested - remove this assert after this has been tested
                    uiShrt2 = *(U16*)(pbData + 2);
                }

                Call(PutUShort(pWS, offPos, uiShrt1)); offPos += 2;
                Call(PutUShort(pWS, offPos, uiShrt2)); offPos += 2;
            }
            else
            {
                assert(FALSE); // Untested - remove this assert after this has been tested
                Call(PutULong(pWS, offPos, pDE->uValueOrOffset)); offPos += 4;

                // Write the data if requested to do so
                if (pbData)
                {
                    U32 i;
                    Call(pWS->SetPos(pWS, pDE->uValueOrOffset));
                    for (i = 0; i < pDE->uCount; i++)
                    {
                        const U16 uiShort = *(U16*)(pbData + i*sizeof(U16));
                        Call(PutUShort(pWS, offPos, uiShort)); // Write one at a time for endian purposes - but inefficient
                    }
                    Call(pWS->SetPos(pWS, offPos));
                    *pcbDataWrittenToOffset = pDE->uCount * sizeof(U16);
                }

            }
            break;

        case WMP_typFLOAT:
        case WMP_typLONG:
            if (pDE->uCount <= 1)
            {
                if (NULL == pbData)
                    pbData = (U8*)&pDE->uValueOrOffset;

                Call(PutULong(pWS, offPos, *(U32*)pbData)); offPos += 4;
            }
            else
            {
                assert(FALSE); // Untested - remove this assert after this has been tested
                Call(PutULong(pWS, offPos, pDE->uValueOrOffset)); offPos += 4;

                // Write the data if requested to do so
                if (pbData)
                {
                    U32 i;
                    Call(pWS->SetPos(pWS, pDE->uValueOrOffset));
                    for (i = 0; i < pDE->uCount; i++)
                    {
                        const U32 uLong = *(U32*)(pbData + i*sizeof(U32));
                        Call(PutULong(pWS, offPos, uLong)); // Write one at a time for endian purposes - but inefficient
                    }
                    Call(pWS->SetPos(pWS, offPos));
                    *pcbDataWrittenToOffset = pDE->uCount * sizeof(U32);
                }
            }
            break;

        default:
            assert(FALSE); // Alert the programmer
            Call(WMP_errInvalidParameter);
            break;
    }

Cleanup:
    *pOffPos = offPos;
    return err;
}

