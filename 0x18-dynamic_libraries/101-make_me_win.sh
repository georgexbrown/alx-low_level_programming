#!/bin/bash
gcc *.o -fPIC -shared -o jackpotrig.so
LD_PRELOAD=$PWD/jackpotrig.so
