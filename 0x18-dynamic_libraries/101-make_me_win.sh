#!/bin/bash
wget -P /tmp https://github.com/Tolulope05/alx-low+level_programming/raw/master/0x18-dynamic_libraties/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
