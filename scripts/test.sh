#/bin/bash

# test.sh
# This script run the test for the given function.
# Ex: ./scripts/test.sh strlen

# Check if argument was given
if [ $# -lt 1 ]; then
    echo "Error: Missing argument. Please provide a function name."
    exit 1
fi

# Compile libft.a
echo -n "Compiling libft.a..."
gcc -Wall -Wextra -Werror -c ./src/*.c
if [ $? -ne 0 ]; then
    echo -e "\x1b[38;2;255;0;0mLibft does not compile.\x1b[0m"
    exit 0
else
    echo -e " Done!"
fi
ar -rc libft.a *.o
rm *.o

# Create a temp file with a main function
cat << EOF > "tmp.c"
#include <stdio.h>

void    test_${1}(void);

int main(void)
{
    test_${1}();

    return (0);
}
EOF

# Compile the libft.a + temp file + test file
gcc -Wall -Wextra -Werror ./tests/test_${1}.c tmp.c -I./src -L. -lft

if [ $? -ne 0 ]; then
    echo -e "\x1b[38;2;255;0;0mDoes not compile.\x1b[0m"
    rm tmp.c
    exit 0
fi

# run the executable
./a.out

echo -n "Result: "
if [ $? -ne 0 ]; then
    echo -e "\x1b[38;2;255;0;0mKO\x1b[0m"
else
    echo -e "\x1b[38;2;0;255;0mOK\x1b[0m"
fi

# remove the executable
rm a.out

# remove the temp file
rm tmp.c

# remove the libft.a
rm libft.a