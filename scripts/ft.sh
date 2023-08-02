#/bin/bash

# ft.sh
# This script prepares the repo to be submitted to evaluation. It creates a
# folder named ft. You should push it to vogsphere.

# create the folder
mkdir -p ft

# run tests
for file in ./src/*.c; do
    if [ -f "$file" ]; then
        source ./scripts/test.sh $(basename ${file} .c) 
    fi
done

# copy the files from src
cp -r src/* ft

# create Makefile
echo << EOF > ft/Makefile
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
EOF

# test Makefile

# success message
echo "The ft folder has been created. It contains the files to be submitted."