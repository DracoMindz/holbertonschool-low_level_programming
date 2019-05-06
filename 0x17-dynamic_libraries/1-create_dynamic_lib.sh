#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -Wall -shared -Wl -pedantic -Werror -Wextra -o liball.so *.o
