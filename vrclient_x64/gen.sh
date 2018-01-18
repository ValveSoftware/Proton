#!/bin/bash

rm win*.h
rm win*.c
rm win*.dat
rm cpp*.cpp
rm cpp*.h
rm struct*.h
rm struct*.cpp

h=$(md5sum Makefile.in)
cp Makefile.in.orig Makefile.in
cp ../vrclient/Makefile.in.orig ../vrclient/Makefile.in

./gen_wrapper.py
if [ "$h" != "$(md5sum Makefile.in)" ]; then
    echo "Don't forget to \"make depend\" at the top of the tree!"
fi
