#!/bin/bash

rm vrclient_x64/win*.h
rm vrclient_x64/win*.c
rm vrclient_x64/win*.dat
rm vrclient_x64/cpp*.cpp
rm vrclient_x64/cpp*.h
rm vrclient_x64/struct*.h
rm vrclient_x64/struct*.cpp

rm tests/*_autogen.c
rm tests/*_autogen.h

./gen_wrapper.py
