#!/bin/bash
wget -P .. https://raw.githubusercontent.com/adekunleo1/alx-low_level_programming/main/0x18-dynamic_libraries/liball.so
export LD_PRELOAD="$PWD/../liball.so"
