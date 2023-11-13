#!/bin/bash

echo gcc -c *.c -fPIC | gcc *.o -shared -o liball.so
