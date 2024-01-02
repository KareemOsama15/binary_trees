#/usr/bin/bash
gcc -Wall -Wextra -Werror -pedantic -g "$@" -o out && ./out
