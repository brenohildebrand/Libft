CC = gcc
CFLAGS = -Wall -Werror -Wextra

SOURCES = \
	./src/ft_isalpha.c \
	./src/ft_isdigit.c \
	./src/ft_isalnum.c \
	./src/ft_isascii.c \
	./src/ft_isprint.c

# Cut here

# The following refers to the tests

TEST_SOURCES = \
	./tests/test_main.c \
	./tests/test_ft_isalpha.c \
	./tests/test_ft_isdigit.c \
	./tests/test_ft_isalnum.c \
	./tests/test_ft_isascii.c \
	./tests/test_ft_isprint.c

add:
	@read -p "Enter File Name: " name; \
	touch ./src/ft_$${name}.c; \
	touch ./tests/test_$${name}.c; \
	sed -E "s/(\/\/ add assert)/\tassert(test_ft_$${name}());\n\1/" ./tests/main.test.c \ 
	sed -E "s/(\/\/ add prototype)/int\ttest_ft_$${name}();\n\1/" ./tests/main.test.c 

test:
	@printf 'Running norminette...\n'
	@norminette ./src
	@echo "\nCompiling tests..."
	@$(CC) $(CFLAGS) -o test.out $(TEST_SOURCES) $(SOURCES) -I./src
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