JPEG XR Device Porting Kit v1.0 - April 2013
---------------------------------------------------------------------------------

JPEG XR
-------
This device porting kit (DPK) supports the JPEG XR still image format, based on
technology originally developed by Mirosoft under the name HD Photo (formerly
Windows Media™ Photo). The JPEG XR format is similar, but not identical, to the
HD Photo/Windows Media™ Photo format.

The JPEG XR format replaces the HD Photo/Windows Media™ Photo format in both
Windows 8 and the Windows Image Component (WIC). WIC accompanies the Internet
Explorer 10 redistributable packages for down-level versions of Windows.
Some “Windows Media™ Photo” (WMP) naming conventions are still used internally
with this release of the DPK.

JPEG XR files use the .jxr extension.  Applications that support the JPEG XR
file format should recognize and decode HD Photo/Windows Media™ Photo
.hdp/.wdp files, but only offer to create files with the .jxr extension.


Device Porting Kit Contents
---------------------------
This device porting kit contains documentation, reference source code, sample 
applications and utilities for the evaluation and implementation of the JPEG XR
file format and compression technology.

Assuming the installation dir is C:\jxrlib, all the paths mentioned below are 
relative to this base path.

   The Visual Studio 2010 main solution is:
   jxrencoderdecoder\JXR.sln

   The Visual Studio 2012 main solution is:
   jxrencoderdecoder\JXR_vc11.sln

   Build JXR.sln Debug Configuration, you will get:
   jxrencoderdecoder\Debug\JXRDecApp\JXRDecApp.exe
   jxrencoderdecoder\Debug\JXREncApp\JXREncApp.exe

The main directory contains a Unix/Linux compatible make file for building the
encoder and decoder, including support for big endian or little endian processor
architecture.  It is the developer's responsibility to properly organize all the 
source files according to the paths defined in this make file for its correct 
operation.  This is provided as a convenience for cross-platform developers and 
to demonstrate the correct operation of the encoder and decoder on big endian 
systems.

The JPEG XR Image Coding Spectification provides a detailed specification of the 
compression encoder and decoder algorithms plus the detailed structure of the 
compressed data (elementary) bit stream.  This document is designed to be used in 
conjunction with the included source code.  If you find instances where the code 
differs from the documentation, the code implementation should be used as the 
reference.

The JPEG XR Image Coding Spectification is an international standard and is
available at: http://www.itu.int/rec/T-REC-T.832 while the reference software is
available at: http://www.itu.int/rec/T-REC-T.835.

"JPEGXR_DPK_1.0.doc" documents the contents of this porting kit, the usage of 
the command line file conversion utilities (JXREncApp.exe and JXRDecApp.exe), and 
technical details of the API's and data structures between these sample command 
line applications and the core codec.

The code and documentation in this release represent the final design and 
specification of the 1.0 bit stream, and can be used as the reference for final 
implementations of encoders and decoders for JPEG XR.

This release of the DPK has received extensive testing of all the various pixel 
formats, encoder options and modes of operation.  We are confident that most errors 
and other bugs have been resolved.  Any code bugs, documentation errors or other 
discrepancies found in this release candidate should be reported to Microsoft as 
promptly as possible.  These can be submitted to hdview@microsoft.com.

This DPK provides basic support for big endian architectures.  We have 
successfully tested the encoder and decoder using a big endian processor.  This 
support is provided as a starting reference to be adapted to the specific 
platform and hardware architecture of the target system.

Contact Information
-------------------
For any and all technical questions or feedback about any part of this Device
Porting Kit, including the documentation, please send email to:

  hdview@microsoft.com

We will respond as promptly as possible with answers to your questions.

Additional information, best practices, tools, utilities, sample code, sample 
image content, links to additional resources and community discussion can 
currently be found at http://hdview.wordpress.com/.

 - The Microsoft JPEG XR Development Team

---------------------------------------------------------------------------------
