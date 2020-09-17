#!/bin/sh

while IFS= read -r LINE; do
    wget https://github.com/wine-mirror/wine/commit/$LINE.patch
done < qlist

while IFS= read -r LINE; do
    cat $LINE.patch >> quartz_backports_5.17.patch
done < qlist
