#!/bin/bash
gcc -wall -pandantic -Werror -Wextra -c *.c
ar rc liball.a *.o
