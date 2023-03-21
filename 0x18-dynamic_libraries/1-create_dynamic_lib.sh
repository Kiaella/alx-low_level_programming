#!/bin/bash
gcc -fPIC -c *c.c
gcc -shared -o liball.so *.o
