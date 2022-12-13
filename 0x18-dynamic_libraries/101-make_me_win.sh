#!/bin/bash
gcc *.o -shared -o jackpotrig.so
LD_PRELOAD=$PWD/jackpotrig.so
