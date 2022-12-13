#!/bin/bash
gcc *.o -fPIC -shared -o libruin.so
export LD_PRELOAD="$PWD/libruin.so"
