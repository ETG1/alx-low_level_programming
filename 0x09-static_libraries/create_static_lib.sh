#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
runlib liball.a
