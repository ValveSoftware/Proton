#!/bin/bash

#run from within openvr.git

for f in $(git tag); do
    mkdir openvr_$f
    git show $f:./headers/openvr.h | grep -av 'pragma once' > openvr_$f/openvr.h
    git show $f:./src/ivrclientcore.h | grep -av 'pragma once' > openvr_$f/ivrclientcore.h
    if [ x"$(head openvr_$f/ivrclientcore.h)" = x"" ]; then
        rm openvr_$f/ivrclientcore.h
    fi
done
