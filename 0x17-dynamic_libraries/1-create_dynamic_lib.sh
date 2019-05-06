#!/bin/bash
gcc -Wall -fPIC -pedantic -Werror -Wextra -c *.c
gcc -Wall -shared -pedantic -Werror -Wextra -o liball.so *.o
