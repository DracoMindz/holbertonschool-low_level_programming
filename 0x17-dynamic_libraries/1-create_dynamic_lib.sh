#!/bin/bash
gcc -fPIC -c *.c
gcc -Wall -shared -Werror -Wextra -pedantic -o liball.so *.o
