CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	./src/ft_isalpha.c \
	./src/ft_isdigit.c \
	./src/ft_isalnum.c \
	./src/ft_isascii.c

# Cut here

# The following refers to the tests

TEST_SOURCES = \
	./tests/main.test.c \
	./tests/ft_isalpha.test.c \
	./tests/ft_isdigit.test.c \
	./tests/ft_isalnum.test.c \
	./tests/ft_isascii.test.c 

TEST_HEADERS_DIR = ./tests/includes

test:
	@printf 'Running norminette...\n'
	@norminette ./src
	@echo "\nCompiling tests..."
	@$(CC) $(CFLAGS) -o test.out $(TEST_SOURCES) $(SOURCES)
	@echo "Running tests...\n"
	@./test.out
	@rm -f test.out

# The following refers to the build

build:
	@printf 'Building...\n'
	@mkdir -p build
	@cp -r ./src/* ./build
	@printf 'Generating Makefile...\n'
	@sed -n '/# Cut here/q;p' Makefile > ./build/Makefile
	@printf 'Done!\n'