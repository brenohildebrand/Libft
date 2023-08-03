#/bin/bash

# ft.sh
# This script prepares the repo to be submitted to evaluation. It creates a
# folder named ft. You should push it to vogsphere.

# check requirements
if [ ! -d "./src" ]; then
    echo "Error: src folder not found."
    exit 1
fi

# check for files
if [ ! -f "./src/libft.h" ]; then
    echo "Error: libft.h not found."
    exit 1
fi

functions=(\
    "ft_isalpha" \
    "ft_isdigit" \
    "ft_isalnum" \
    "ft_isascii" \
    "ft_isprint" \
    "ft_strlen" \
    "ft_memset" \
    "ft_bzero" \
    "ft_memcpy" \
    "ft_memmove" \
    "ft_strlcpy" \
    "ft_strlcat" \
    "ft_toupper" \
    "ft_tolower" \
    "ft_strchr" \
    "ft_strrchr" \
    "ft_strncmp" \
    "ft_memchr" \
    "ft_memcmp" \
    "ft_strnstr" \
    "ft_atoi" \
    "ft_calloc" \
    "ft_strdup" \
    "ft_substr" \
    "ft_strjoin" \
    "ft_strtrim" \
    "ft_split" \
    "ft_itoa" \
    "ft_strmapi" \
    "ft_striteri" \
    "ft_putchar_fd" \
    "ft_putstr_fd" \
    "ft_putendl_fd" \
    "ft_putnbr_fd")

for function_name in "${functions[@]}"; do
    if [ ! -f "./src/${function_name}.c" ]; then
        echo "Error: ${function_name}.c not found."
        exit 1
    fi
done

# create the folder
mkdir -p ft

# run tests
# TODO

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