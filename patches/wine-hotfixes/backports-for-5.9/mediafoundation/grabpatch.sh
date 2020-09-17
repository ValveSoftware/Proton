#!/bin/sh

while IFS= read -r LINE; do
    wget https://github.com/wine-mirror/wine/commit/$LINE.patch
done < mflist

while IFS= read -r LINE; do
    cat $LINE.patch >> mf_backports_5.17.patch
done < mflist
