#!/bin/bash

rm win*.h
rm win*.c
rm win*.dat
rm cpp*.cpp
rm cpp*.h
rm cb*.h
rm cb*.cpp
rm cb*.dat

h=$(md5sum Makefile.in)
cp Makefile.in.orig Makefile.in

./gen_wrapper.py
if [ "$h" != "$(md5sum Makefile.in)" ]; then
    echo "Don't forget to \"make depend\" at the top of the tree!"
fi
