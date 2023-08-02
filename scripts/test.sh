#/bin/bash

# test.sh
# This script run the test for the given function.
# Ex: ./scripts/test.sh strlen

if [ $# -lt 1 ]; then
    echo "Error: Missing argument. Please provide a function name."
    exit 1
fi

# check if function exists
if [ ! -f "./src/${1}.c" ]; then
    echo "Error: File ${1}.c does not exist."
    exit 0
fi

# check if test function exists
if [ ! -f "./tests/test_${1}.c" ]; then
    echo "Error: Test file test_${1} does not exist."
    exit 0
fi

# create a temp file with a main function
cat << EOF > "tmp.c"
#include <stdio.h>

void    test_${1}(void);

int main(void)
{
    test_${1}();

    return (0);
}
EOF

# compile the temp file with the test file and src file and libft.h
gcc -Wall -Wextra -Werror ./tests/test_${1}.c ./src/${1}.c tmp.c -I./src

if [ $? -ne 0 ]; then
    echo -e "\x1b[38;2;255;0;0mDoes not compile.\x1b[0m"
    rm tmp.c
    exit 0
fi

# run the executable
./a.out

if [ $? -ne 0 ]; then
    echo -e "\x1b[38;2;255;0;0mKO\x1b[0m"
else
    echo -e "\x1b[38;2;0;255;0mOK\x1b[0m"
fi

# remove the executable
rm a.out

# remove the temp file
rm tmp.c