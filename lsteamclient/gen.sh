#!/bin/bash

rm win*.h
rm win*.c
rm win*.dat
rm cpp*.cpp
rm cpp*.h
rm struct*.h
rm struct*.cpp
rm struct*.dat
rm cb*.dat
rm cb*.h

./gen_wrapper.py
