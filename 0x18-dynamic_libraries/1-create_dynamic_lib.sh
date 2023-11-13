#!/bin/bash

cfiles_in_direc=$(ls *.c)
echo gcc -c $cfiles_in_direc -fPIC | gcc *.o -shared -o liball.so

