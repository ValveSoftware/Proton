#!/bin/bash

rm win*.h
rm win*.c
rm win*.dat
rm cpp*.cpp
rm cpp*.h
rm struct*.h
rm struct*.cpp

./gen_wrapper.py
