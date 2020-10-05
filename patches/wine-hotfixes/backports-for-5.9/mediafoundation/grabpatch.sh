#!/bin/sh

if [ $# -eq 0 ]; then
    echo "Usage: ./grabpatch.txt filename-containing-commit-list"
    exit 0
fi

while IFS= read -r LINE; do
    wget https://github.com/wine-mirror/wine/commit/$LINE.patch
done < $1

while IFS= read -r LINE; do
    cat $LINE.patch >> mf_backports_5.19.patch
done < $1
