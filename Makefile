CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	./src/ft_isalpha.c \
	./src/ft_isdigit.c

# The following refers to the tests

TEST_SOURCES = \
	./tests/main.test.c \
	./tests/ft_isalpha.test.c \
	./tests/ft_isdigit.test.c

TEST_HEADERS_DIR = ./tests/includes

test:
	@echo "Running norminette...\n"
	@norminette ./src
	@echo "\nCompiling tests..."
	@$(CC) $(CFLAGS) -o test.out $(TEST_SOURCES) $(SOURCES)
	@echo "Running tests...\n"
	@./test.out
	@rm -f test.out

# The following refers to the build

build:
