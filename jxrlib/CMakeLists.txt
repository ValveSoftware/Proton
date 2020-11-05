# Copyright Mathieu Malaterre <malat@debian.org>
# BSD (Same as jxrlib)
cmake_minimum_required(VERSION 2.8)
project(jxrlib C)

# Need shared libs for ABI
set(BUILD_SHARED_LIBS ON)

# helper macro to preserve original Makefile convention
macro(JXR_MAKE_OBJ SET_NAME)
  foreach(src ${SRC_${SET_NAME}})
    list(APPEND OBJ_${SET_NAME} ${DIR_${SET_NAME}}/${src})
  endforeach()
endmacro()

include(TestBigEndian)
test_big_endian(ISBIGENDIAN)
if(ISBIGENDIAN)
  set(DEF_ENDIAN _BIG__ENDIAN_)
endif()

set(DIR_SYS image/sys)
set(DIR_DEC image/decode)
set(DIR_ENC image/encode)

set(DIR_GLUE jxrgluelib)
set(DIR_TEST jxrtestlib)
set(DIR_EXEC jxrencoderdecoder)

if(NOT JXRLIB_INSTALL_BIN_DIR)
  set(JXRLIB_INSTALL_BIN_DIR "bin")
endif()

if(NOT JXRLIB_INSTALL_LIB_DIR)
  set(JXRLIB_INSTALL_LIB_DIR "lib")
endif()

if(NOT JXRLIB_INSTALL_INCLUDE_DIR)
  set(JXRLIB_INSTALL_INCLUDE_DIR "include/jxrlib")
endif()

include_directories(
  common/include
  ${DIR_SYS}
  ${DIR_GLUE}
  ${DIR_TEST}
)

# where is strlcpy ?
include(CheckSymbolExists)
check_symbol_exists(strlcpy "string.h" HAVE_STRLCPY)
#set(CMAKE_REQUIRED_LIBRARIES bsd)
#CHECK_SYMBOL_EXISTS(strlcpy "string.h" HAVE_STRLCPY4)
# on linux, strlcpy is in -lbsd:
#if(NOT HAVE_STRLCPY)
#  include(CheckLibraryExists)
#  find_library(BSD_LIBRARY bsd)
#  check_library_exists(bsd "strlcpy" ${BSD_LIBRARY} HAVE_STRLCPY_BSD)
#endif()

# JPEG-XR
set(SRC_SYS adapthuff.c image.c strcodec.c strPredQuant.c strTransform.c perfTimerANSI.c)
JXR_MAKE_OBJ(SYS)
set(SRC_DEC decode.c postprocess.c segdec.c strdec.c strInvTransform.c strPredQuantDec.c JXRTranscode.c)
JXR_MAKE_OBJ(DEC)
set(SRC_ENC encode.c segenc.c strenc.c strFwdTransform.c strPredQuantEnc.c)
JXR_MAKE_OBJ(ENC)

add_library(jpegxr ${OBJ_ENC} ${OBJ_DEC} ${OBJ_SYS})
set_property(TARGET jpegxr
  PROPERTY COMPILE_DEFINITIONS __ANSI__ DISABLE_PERF_MEASUREMENT ${DEF_ENDIAN}
)
set_property(TARGET jpegxr PROPERTY LINK_INTERFACE_LIBRARIES "")
set_property(TARGET jpegxr PROPERTY COMPILE_FLAGS -w)
# VERSION/SOVERSION
set_property(TARGET jpegxr PROPERTY VERSION 1.1)
set_property(TARGET jpegxr PROPERTY SOVERSION 0)
install(TARGETS jpegxr
  EXPORT JXRLibTargets
  RUNTIME DESTINATION ${JXRLIB_INSTALL_BIN_DIR} COMPONENT Applications
  LIBRARY DESTINATION ${JXRLIB_INSTALL_LIB_DIR} COMPONENT Libraries
)

# JXR-GLUE
set(SRC_GLUE JXRGlue.c JXRMeta.c JXRGluePFC.c JXRGlueJxr.c)
JXR_MAKE_OBJ(GLUE)
set(SRC_TEST JXRTest.c JXRTestBmp.c JXRTestHdr.c JXRTestPnm.c JXRTestTif.c JXRTestYUV.c)
JXR_MAKE_OBJ(TEST)

add_library(jxrglue ${OBJ_GLUE} ${OBJ_TEST})
set_property(TARGET jxrglue
  PROPERTY COMPILE_DEFINITIONS __ANSI__ DISABLE_PERF_MEASUREMENT ${DEF_ENDIAN}
)
#set_property(TARGET jxrglue PROPERTY LINK_INTERFACE_LIBRARIES "")
set_property(TARGET jxrglue PROPERTY COMPILE_FLAGS -w)
# VERSION/SOVERSION
set_property(TARGET jxrglue PROPERTY VERSION 1.1)
set_property(TARGET jxrglue PROPERTY SOVERSION 0)
install(TARGETS jxrglue
  EXPORT JXRLibTargets
  RUNTIME DESTINATION ${JXRLIB_INSTALL_BIN_DIR} COMPONENT Applications
  LIBRARY DESTINATION ${JXRLIB_INSTALL_LIB_DIR} COMPONENT Libraries
)
#if(HAVE_STRLCPY_BSD)
#	target_link_libraries(jxrglue ${BSD_LIBRARY})
#endif()
#target_link_libraries(jxrglue m)
target_link_libraries(jxrglue PRIVATE jpegxr m)
# Enc app files
set(ENCAPP JxrEncApp)
add_executable(${ENCAPP} ${DIR_EXEC}/${ENCAPP}.c)
set_property(TARGET ${ENCAPP}
  PROPERTY COMPILE_DEFINITIONS __ANSI__ DISABLE_PERF_MEASUREMENT ${DEF_ENDIAN}
)
#set_property(TARGET ${ENCAPP} PROPERTY COMPILE_FLAGS -w)
target_link_libraries(${ENCAPP} jxrglue) # jpegxr)
install(TARGETS ${ENCAPP} RUNTIME DESTINATION ${JXRLIB_INSTALL_BIN_DIR})
# Dec app files
set(DECAPP JxrDecApp)
add_executable(${DECAPP} ${DIR_EXEC}/${DECAPP}.c)
set_property(TARGET ${DECAPP}
  PROPERTY COMPILE_DEFINITIONS __ANSI__ DISABLE_PERF_MEASUREMENT ${DEF_ENDIAN}
)
set_property(TARGET ${DECAPP} PROPERTY COMPILE_FLAGS -w)
target_link_libraries(${DECAPP} jxrglue) # jpegxr)
install(TARGETS ${DECAPP} RUNTIME DESTINATION ${JXRLIB_INSTALL_BIN_DIR})

# install rules
install(FILES jxrgluelib/JXRGlue.h jxrgluelib/JXRMeta.h jxrtestlib/JXRTest.h
  image/sys/windowsmediaphoto.h
  DESTINATION ${JXRLIB_INSTALL_INCLUDE_DIR} COMPONENT Headers
)
install(DIRECTORY common/include/ DESTINATION ${JXRLIB_INSTALL_INCLUDE_DIR}
  FILES_MATCHING PATTERN "*.h"
)
