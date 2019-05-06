#!/bin/bash
gcc -fPIC -c *.c
gcc -shared -Wall -pedantic -Werror -Wextra -o liball.so *.o
