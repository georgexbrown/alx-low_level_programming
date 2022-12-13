#!/bin/bash
gcc *.o -fPIC -shared -o libjackpotrig.so
LD_PRELOAD=$PWD/libjackpotrig.so
